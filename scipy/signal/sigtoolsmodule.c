/* SIGTOOLS module by Travis Oliphant

Copyright 2005 Travis Oliphant
Permission to use, copy, modify, and distribute this software without fee
is granted under the SciPy License.
*/
#include <Python.h>

//#include <numpy/noprefix.h>

#include "sigtools.h"
#include <setjmp.h>

#define PYERR(message) {PyErr_SetString(PyExc_ValueError, message); goto fail;}

#define DATA(arr) (PyArray_DATA(arr))
#define DIMS(arr) (PyArray_DIMS(arr))
#define STRIDES(arr) (PyArray_STRIDES(arr))
#define ELSIZE(arr) (NpyDataType_ELSIZE(PyArray_DESCR(arr)))
#define OBJECTTYPE(arr) (PyArray_DESCR(arr)->type_num)
#define BASEOBJ(arr) (PyArray_BASE(arr))
#define RANK(arr) (PyArray_NDIM(arr))
#define ISCONTIGUOUS(m) (PyArray_FLAGS(m) & CONTIGUOUS)


extern jmp_buf MALLOC_FAIL;

/************************/
/* N-D Order Filtering. */


static void fill_buffer(char *ip1, PyArrayObject *ap1, PyArrayObject *ap2,
			char *sort_buffer, int nels2, int check, intp *loop_ind,
			intp *temp_ind, uintp *offset)
{ 
  int i, k, incr = 1;
  int ndims = PyArray_NDIM(ap1);
  intp *dims2 = PyArray_DIMS(ap2);
  intp *dims1 = PyArray_DIMS(ap1);
  intp is1 = PyArray_STRIDES(ap1)[ndims-1];
  intp is2 = PyArray_STRIDES(ap2)[ndims-1];
  char *ip2 = PyArray_DATA(ap2);
  int elsize = PyArray_DESCR(ap1)->elsize;
  char *ptr;

  i = nels2;
  ptr = PyArray_Zero(ap2);
  temp_ind[ndims-1]--;
  while (i--) { 
    /* Adjust index array and move ptr1 to right place */
    k = ndims - 1;
    while(--incr) {
      temp_ind[k] -= dims2[k] - 1;   /* Return to start for these dimensions */
      k--;
    }
    ip1 += offset[k]*is1;               /* Precomputed offset array */
    temp_ind[k]++;

    if (!(check && index_out_of_bounds(temp_ind,dims1,ndims)) && \
	memcmp(ip2, ptr, PyArray_DESCR(ap2)->elsize)) { 
      memcpy(sort_buffer, ip1, elsize);
      sort_buffer += elsize;
    } 
    incr = increment(loop_ind, ndims, dims2);  /* Returns number of N-D indices incremented. */
    ip2 += is2;

  }
  PyDataMem_FREE(ptr);
  return;
}

#define COMPARE(fname, type) \
int fname(type *ip1, type *ip2) { return *ip1 < *ip2 ? -1 : *ip1 == *ip2 ? 0 : 1; }

COMPARE(DOUBLE_compare, double)
COMPARE(FLOAT_compare, float)
COMPARE(LONGDOUBLE_compare, longdouble)
COMPARE(BYTE_compare, byte)
COMPARE(SHORT_compare, short)
COMPARE(INT_compare, int)
COMPARE(LONG_compare, long)
COMPARE(LONGLONG_compare, longlong)
COMPARE(UBYTE_compare, ubyte)
COMPARE(USHORT_compare, ushort)
COMPARE(UINT_compare, uint)
COMPARE(ULONG_compare, ulong)
COMPARE(ULONGLONG_compare, ulonglong)


int OBJECT_compare(PyObject **ip1, PyObject **ip2) {
        /*return PyObject_Compare(*ip1, *ip2); */
        return PyObject_RichCompareBool(*ip1, *ip2, Py_EQ) != 1;
}

typedef int (*CompareFunction)(const void *, const void *);

CompareFunction compare_functions[] = \
	{NULL, (CompareFunction)BYTE_compare,(CompareFunction)UBYTE_compare,\
	 (CompareFunction)SHORT_compare,(CompareFunction)USHORT_compare, \
	 (CompareFunction)INT_compare,(CompareFunction)UINT_compare, \
	 (CompareFunction)LONG_compare,(CompareFunction)ULONG_compare, \
	 (CompareFunction)LONGLONG_compare,(CompareFunction)ULONGLONG_compare,
	 (CompareFunction)FLOAT_compare,(CompareFunction)DOUBLE_compare,
	 (CompareFunction)LONGDOUBLE_compare, NULL, NULL, NULL,
	 (CompareFunction)OBJECT_compare, NULL, NULL, NULL};

PyObject *PyArray_OrderFilterND(PyObject *op1, PyObject *op2, int order)
{
	PyArrayObject *ap1=NULL, *ap2=NULL, *ret=NULL;
	intp *a_ind, *b_ind, *temp_ind, *mode_dep, *check_ind;
	uintp *offsets, offset1;
	intp *offsets2;
	int i, n2, n2_nonzero, k, check, incr = 1;
	int typenum, bytes_in_array;
	int is1, os;
	char *op, *ap1_ptr, *ap2_ptr, *sort_buffer;
	intp *ret_ind;
	CompareFunction compare_func;
	char *zptr=NULL;

	/* Get Array objects from input */
	typenum = PyArray_ObjectType(op1, 0);  
	typenum = PyArray_ObjectType(op2, typenum);
	
	ap1 = (PyArrayObject *)PyArray_ContiguousFromObject(op1, typenum, 0, 0);
	if (ap1 == NULL) return NULL;
	ap2 = (PyArrayObject *)PyArray_ContiguousFromObject(op2, typenum, 0, 0);
	if (ap2 == NULL) goto fail;

	if (PyArray_NDIM(ap1) != PyArray_NDIM(ap2)) {
	  PyErr_SetString(PyExc_ValueError, "All input arrays must have the same number of dimensions.");
	  goto fail;
	}

	n2 = PyArray_Size((PyObject *)ap2);
	n2_nonzero = 0;
	ap2_ptr = PyArray_DATA(ap2);
	/* Find out the number of non-zero entries in domain (allows for
	 *  different shapped rank-filters to be used besides just rectangles)
	 */
	zptr = PyArray_Zero(ap2);
	if (zptr == NULL) goto fail;
	for (k=0; k < n2; k++) {
	  n2_nonzero += (memcmp(ap2_ptr,zptr,PyArray_DESCR(ap2)->elsize) != 0);
	  ap2_ptr += PyArray_DESCR(ap2)->elsize;
	}

	if ((order >= n2_nonzero) || (order < 0)) {
	  PyErr_SetString(PyExc_ValueError, "Order must be non-negative and less than number of nonzero elements in domain.");
	  goto fail;
	}
	
	ret = (PyArrayObject *)PyArray_SimpleNew(PyArray_NDIM(ap1), PyArray_DIMS(ap1), typenum);
	if (ret == NULL) goto fail;
	
	compare_func = compare_functions[PyArray_DESCR(ap1)->type_num];
	if (compare_func == NULL) {
		PyErr_SetString(PyExc_ValueError, 
			"order_filterND not available for this type");
		goto fail;
	}

	is1 = PyArray_DESCR(ap1)->elsize;
	
	if (!(sort_buffer = malloc(n2_nonzero*is1))) goto fail;

	op = PyArray_DATA(ret);
	os = PyArray_DESCR(ret)->elsize;

	bytes_in_array = PyArray_NDIM(ap1)*sizeof(intp);
	mode_dep = malloc(bytes_in_array);
	for (k = 0; k < PyArray_NDIM(ap1); k++) { 
	  mode_dep[k] = -((PyArray_DIMS(ap2)[k]-1) >> 1);
	}	

	b_ind = (intp *)malloc(bytes_in_array);  /* loop variables */
	memset(b_ind,0,bytes_in_array);
	a_ind = (intp *)malloc(bytes_in_array);
	ret_ind = (intp *)malloc(bytes_in_array);
	memset(ret_ind,0,bytes_in_array);
	temp_ind = (intp *)malloc(bytes_in_array);
	check_ind = (intp*)malloc(bytes_in_array);
	offsets = (uintp *)malloc(PyArray_NDIM(ap1)*sizeof(uintp));
	offsets2 = (intp *)malloc(PyArray_NDIM(ap1)*sizeof(intp));
	offset1 = compute_offsets(offsets,offsets2,PyArray_DIMS(ap1),PyArray_DIMS(ap2),PyArray_DIMS(ret),mode_dep,PyArray_NDIM(ap1));
	/* The filtering proceeds by looping through the output array
	   and for each value filling a buffer from the 
	   element-by-element product of the two input arrays.  The buffer
	   is then sorted and the order_th element is kept as output. Index
	   counters are used for book-keeping in the area so that we 
	   can tell where we are in all of the arrays and be sure that 
	   we are not trying to access areas outside the arrays definition.

	   The inner loop is implemented separately but equivalently for each
	   datatype. The outer loop is similar in structure and form to
	   to the inner loop.
	*/
	/* Need to keep track of a ptr to place in big (first) input
	   array where we start the multiplication (we pass over it in the
	   inner loop (and not dereferenced) 
	   if it is pointing outside dataspace)
	*/
	/* Calculate it once and the just move it around appropriately */
	PyDataMem_FREE(zptr);
	zptr = PyArray_Zero(ap1);
	if (zptr == NULL) goto fail;
	ap1_ptr = PyArray_DATA(ap1) + offset1*is1;
	for (k=0; k < PyArray_NDIM(ap1); k++) {a_ind[k] = mode_dep[k]; check_ind[k] = PyArray_DIMS(ap1)[k] - PyArray_DIMS(ap2)[k] - mode_dep[k] - 1;}
	a_ind[PyArray_NDIM(ap1)-1]--;
	i = PyArray_Size((PyObject *)ret);
	while (i--) {
	  /* Zero out the sort_buffer (has effect of zero-padding
	     on boundaries). Treat object arrays right.*/
	  ap2_ptr = sort_buffer;
	  for (k=0; k < n2_nonzero; k++) {
  	    memcpy(ap2_ptr,zptr,is1);
	    ap2_ptr += is1;
	  }
	    
	  k = PyArray_NDIM(ap1) - 1;
	  while(--incr) {
	    a_ind[k] -= PyArray_DIMS(ret)[k] - 1;   /* Return to start */
	    k--;
	  }
	  ap1_ptr += offsets2[k]*is1;
	  a_ind[k]++;
	  memcpy(temp_ind, a_ind, bytes_in_array);

	  check = 0; k = -1;
	  while(!check && (++k < PyArray_NDIM(ap1)))
	    check = check || (ret_ind[k] < -mode_dep[k]) || (ret_ind[k] > check_ind[k]);

	  fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets);
	  qsort(sort_buffer, n2_nonzero, is1, compare_func);
	  memcpy(op, sort_buffer + order*is1, os);

	  incr = increment(ret_ind,PyArray_NDIM(ret),PyArray_DIMS(ret)); /* increment index counter */
	  op += os;   /* increment to next output index */

	}
	free(b_ind); free(a_ind); free(ret_ind);
	free(offsets); free(offsets2); free(temp_ind);
	free(check_ind); free(mode_dep);
	free(sort_buffer);
	
	PyDataMem_FREE(zptr);
	Py_DECREF(ap1);
	Py_DECREF(ap2);

	return PyArray_Return(ret);

fail:
	if (zptr) PyDataMem_FREE(zptr);
	Py_XDECREF(ap1);
	Py_XDECREF(ap2);
	Py_XDECREF(ret);
	return NULL;
}


/******************************************/

static char doc_correlateND[] = "out = _correlateND(a,kernel,mode) \n\n   mode = 0 - 'valid', 1 - 'same', \n  2 - 'full' (default)";

/*******************************************************************/

static char doc_convolve2d[] = "out = _convolve2d(in1, in2, flip, mode, boundary, fillvalue)";

extern int pylab_convolve_2d(char*,intp*,char*,intp*,char*,intp*,intp*,intp*,int,char*);

static PyObject *sigtools_convolve2d(PyObject *NPY_UNUSED(dummy), PyObject *args)
{
    PyObject *in1=NULL, *in2=NULL, *fill_value=NULL;
    int mode=2, boundary=0, typenum, flag, flip=1, ret;
    intp *aout_dimens=NULL, *dims=NULL;
    char zeros[32];  /* Zeros */
    int n1, n2, i;
    PyArrayObject *ain1=NULL, *ain2=NULL, *aout=NULL;
    PyArrayObject *afill=NULL, *newfill=NULL;

    if (!PyArg_ParseTuple(args, "OO|iiiO", &in1, &in2, &flip, &mode, &boundary, &fill_value)) {
        return NULL;
    }

    typenum = PyArray_ObjectType(in1, 0);
    typenum = PyArray_ObjectType(in2, typenum);
    ain1 = (PyArrayObject *)PyArray_FromObject(in1, typenum, 2, 2);
    if (ain1 == NULL) goto fail;
    ain2 = (PyArrayObject *)PyArray_FromObject(in2, typenum, 2, 2);
    if (ain2 == NULL) goto fail;

    if ((boundary != PAD) && (boundary != REFLECT) && (boundary != CIRCULAR))
      PYERR("Incorrect boundary value.");
    if (boundary == PAD) {
	if (fill_value == NULL) {
	    newfill = (PyArrayObject *)PyArray_SimpleNewFromData(0, dims, typenum, zeros);
	}
	else {
	    afill = (PyArrayObject *)PyArray_FromObject(fill_value, PyArray_CDOUBLE, 0, 0);
	    if (afill == NULL) goto fail;
	    newfill = (PyArrayObject *)PyArray_Cast(afill, typenum);
	}
	if (newfill == NULL) goto fail;
    }
    else {
	newfill = (PyArrayObject *)PyArray_SimpleNewFromData(0, dims, typenum, zeros);
	if (newfill == NULL) goto fail;
    }
    
    n1 = PyArray_Size((PyObject *)ain1);
    n2 = PyArray_Size((PyObject *)ain2);
    
    aout_dimens = malloc(PyArray_NDIM(ain1)*sizeof(intp));
    switch(mode & OUTSIZE_MASK) {
    case VALID:
	for (i = 0; i < PyArray_NDIM(ain1); i++) { 
	    aout_dimens[i] = PyArray_DIMS(ain1)[i] - PyArray_DIMS(ain2)[i] + 1;
	    if (aout_dimens[i] < 0) {
		PyErr_SetString(PyExc_ValueError, "no part of the output is valid, use option 1 (same) or 2 (full) for third argument");
		goto fail;
	    }
	}
	break;
    case SAME:
	for (i = 0; i < PyArray_NDIM(ain1); i++) { aout_dimens[i] = PyArray_DIMS(ain1)[i];}
	break;
    case FULL:
	for (i = 0; i < PyArray_NDIM(ain1); i++) { aout_dimens[i] = PyArray_DIMS(ain1)[i] + PyArray_DIMS(ain2)[i] - 1;}
	break;
    default: 
	PyErr_SetString(PyExc_ValueError, 
			"mode must be 0 (valid), 1 (same), or 2 (full)");
	goto fail;
    }
	
    aout = (PyArrayObject *)PyArray_SimpleNew(PyArray_NDIM(ain1), aout_dimens, typenum);
    if (aout == NULL) goto fail;

    flag = mode + boundary + (typenum << TYPE_SHIFT) + \
      (flip != 0) * FLIP_MASK;
    
    ret = pylab_convolve_2d (DATA(ain1),      /* Input data Ns[0] x Ns[1] */
		             STRIDES(ain1),   /* Input strides */
		             DATA(aout),      /* Output data */
		             STRIDES(aout),   /* Ouput strides */
		             DATA(ain2),      /* coefficients in filter */
		             STRIDES(ain2),   /* coefficients strides */ 
		             DIMS(ain2),      /* Size of kernel Nwin[2] */
			     DIMS(ain1),      /* Size of image Ns[0] x Ns[1] */
		             flag,            /* convolution parameters */
		             DATA(newfill));  /* fill value */


    switch (ret) {
    case 0:
      Py_DECREF(ain1);
      Py_DECREF(ain2);
      Py_XDECREF(afill);
      Py_XDECREF(newfill);
      return (PyObject *)aout;
      break;
    case -5:
    case -4:
      PyErr_SetString(PyExc_ValueError,
		      "convolve2d not available for this type.");
      goto fail;
    case -3:
      PyErr_NoMemory();
      goto fail;
    case -2:
      PyErr_SetString(PyExc_ValueError,
		      "Invalid boundary type.");
      goto fail;
    case -1:
      PyErr_SetString(PyExc_ValueError,
		      "Invalid output flag.");
      goto fail;
    }

fail:
    free(aout_dimens);
    Py_XDECREF(ain1);
    Py_XDECREF(ain2);
    Py_XDECREF(aout);
    Py_XDECREF(afill);
    Py_XDECREF(newfill);
    return NULL;
}

/*******************************************************************/

static char doc_order_filterND[] = "out = _order_filterND(a,domain,order)";

static PyObject *sigtools_order_filterND(PyObject *NPY_UNUSED(dummy), PyObject *args)
{
	PyObject *domain, *a0;
	int order=0;
	
	if (!PyArg_ParseTuple(args, "OO|i", &a0, &domain, &order)) return NULL;
	
	return PyArray_OrderFilterND(a0, domain, order);
}



static char doc_remez[] = "h = _remez(numtaps, bands, des, weight, type, Hz, maxiter, grid_density) \n  returns the optimal (in the Chebyshev/minimax sense) FIR filter impulse \n  response given a set of band edges, the desired response on those bands,\n  and the weight given to the error in those bands.  Bands is a monotonic\n   vector with band edges given in frequency domain where Hz is the sampling\n   frequency.";
 
static PyObject *sigtools_remez(PyObject *NPY_UNUSED(dummy), PyObject *args)
{
        PyObject *bands, *des, *weight;
        int k, numtaps, numbands, type = BANDPASS, err; 
	PyArrayObject *a_bands=NULL, *a_des=NULL, *a_weight=NULL;
	PyArrayObject *h=NULL;
	intp ret_dimens; int maxiter = 25, grid_density = 16;
	double oldvalue, *dptr, Hz = 1.0;
        char mystr[255];
       


        if (!PyArg_ParseTuple(args, "iOOO|idii", &numtaps, &bands, &des, &weight, &type, &Hz, &maxiter, &grid_density))
	    return NULL;

	if (type != BANDPASS && type != DIFFERENTIATOR && type != HILBERT) {
	  PyErr_SetString(PyExc_ValueError,
			  "The type must be BANDPASS, DIFFERENTIATOR, or HILBERT.");
	  return NULL;
	}
	
	if (numtaps < 2) {
	  PyErr_SetString(PyExc_ValueError,
			  "The number of taps must be greater than 1.");
	  return NULL;
	}
	
	
	a_bands = (PyArrayObject *)PyArray_ContiguousFromObject(bands, PyArray_DOUBLE,1,1);
	if (a_bands == NULL) goto fail;
	a_des = (PyArrayObject *)PyArray_ContiguousFromObject(des, PyArray_DOUBLE,1,1);
	if (a_des == NULL) goto fail;
	a_weight = (PyArrayObject *)PyArray_ContiguousFromObject(weight, PyArray_DOUBLE,1,1);
	if (a_weight == NULL) goto fail;


	numbands = PyArray_DIMS(a_des)[0];
	if ((PyArray_DIMS(a_bands)[0] != 2*numbands) || (PyArray_DIMS(a_weight)[0] != numbands)) {
	  PyErr_SetString(PyExc_ValueError,
			  "The inputs desired and weight must have same length.\n  The input bands must have twice this length.");
	  goto fail;
	}

      /* Check the bands input to see if it is monotonic, divide by 
	 Hz to take from range 0 to 0.5 and check to see if in that range */ 

	dptr = (double *)PyArray_DATA(a_bands);
	oldvalue = 0;
	for (k=0; k < 2*numbands; k++) {
	  if (*dptr < oldvalue) {
	    PyErr_SetString(PyExc_ValueError,
			  "Bands must be monotonic starting at zero.");
	    goto fail;
	  }
	  if (*dptr * 2 > Hz) {
	    PyErr_SetString(PyExc_ValueError,
			  "Band edges should be less than 1/2 the sampling frequency");
	    goto fail;
	  }
	  oldvalue = *dptr;
	  *dptr = oldvalue / Hz;  /* Change so that sampling frequency is 1.0 */
	  dptr++;
	}

	ret_dimens = numtaps;
	h = (PyArrayObject *)PyArray_SimpleNew(1, &ret_dimens, PyArray_DOUBLE);
	if (h == NULL) goto fail;

	err=pre_remez((double *)PyArray_DATA(h), numtaps, numbands,
		      (double *)PyArray_DATA(a_bands),
		      (double *)PyArray_DATA(a_des),
		      (double *)PyArray_DATA(a_weight),
		      type, maxiter, grid_density);
        if (err < 0) {
	  if (err == -1) {
            sprintf(mystr,"Failure to converge after %d iterations.\n      Design may still be correct.",maxiter);
	    PyErr_SetString(PyExc_ValueError, mystr);
	    goto fail;
	  }
	  else if (err == -2) {
	    PyErr_NoMemory();
            goto fail;
	  }
	}

	Py_DECREF(a_bands);
	Py_DECREF(a_des);
	Py_DECREF(a_weight);

	return PyArray_Return(h);

 fail:
	Py_XDECREF(a_bands);
	Py_XDECREF(a_des);
	Py_XDECREF(a_weight);
	Py_XDECREF(h);
	return NULL;
}
   
static char doc_median2d[] = "filt = _median2d(data, size)";

extern void f_medfilt2(float*,float*,intp*,intp*);
extern void d_medfilt2(double*,double*,intp*,intp*);
extern void b_medfilt2(unsigned char*,unsigned char*,intp*,intp*);

static PyObject *sigtools_median2d(PyObject *NPY_UNUSED(dummy), PyObject *args)
{
    PyObject *image=NULL, *size=NULL;
    int typenum;
    PyArrayObject *a_image=NULL, *a_size=NULL;
    PyArrayObject *a_out=NULL;
    intp Nwin[2] = {3,3};

    if (!PyArg_ParseTuple(args, "O|O", &image, &size)) return NULL;

    typenum = PyArray_ObjectType(image, 0);
    a_image = (PyArrayObject *)PyArray_ContiguousFromObject(image, typenum, 2, 2);
    if (a_image == NULL) goto fail;

    if (size != NULL) {
	a_size = (PyArrayObject *)PyArray_ContiguousFromObject(size, NPY_INTP, 1, 1);
	if (a_size == NULL) goto fail;
	if ((RANK(a_size) != 1) || (DIMS(a_size)[0] < 2)) 
	    PYERR("Size must be a length two sequence");
	Nwin[0] = ((intp *)DATA(a_size))[0];
	Nwin[1] = ((intp *)DATA(a_size))[1];
    }  

    a_out = (PyArrayObject *)PyArray_SimpleNew(2,DIMS(a_image),typenum);
    if (a_out == NULL) goto fail;

    if (setjmp(MALLOC_FAIL)) {
	PYERR("Memory allocation error.");
    }
    else {
	switch (typenum) {
	case PyArray_UBYTE:
	    b_medfilt2((unsigned char *)DATA(a_image), (unsigned char *)DATA(a_out), Nwin, DIMS(a_image));
	    break;
	case PyArray_FLOAT:
	    f_medfilt2((float *)DATA(a_image), (float *)DATA(a_out), Nwin, DIMS(a_image));
	    break;
	case PyArray_DOUBLE:
	    d_medfilt2((double *)DATA(a_image), (double *)DATA(a_out), Nwin, DIMS(a_image));
	    break;
	default:
	  PYERR("2D median filter only supports Int8, Float32, and Float64.");
	}
    }

    Py_DECREF(a_image);
    Py_XDECREF(a_size);

    return PyArray_Return(a_out);
 
 fail:
    Py_XDECREF(a_image);
    Py_XDECREF(a_size);
    Py_XDECREF(a_out);
    return NULL;

}

static char doc_linear_filter[] =
    "(y,Vf) = _linear_filter(b,a,X,Dim=-1,Vi=None)  " \
    "implemented using Direct Form II transposed flow " \
    "diagram. If Vi is not given, Vf is not returned.";

static struct PyMethodDef toolbox_module_methods[] = {
	{"_correlateND", scipy_signal_sigtools_correlateND, METH_VARARGS, doc_correlateND},
	{"_convolve2d", sigtools_convolve2d, METH_VARARGS, doc_convolve2d},
	{"_order_filterND", sigtools_order_filterND, METH_VARARGS, doc_order_filterND},
	{"_linear_filter", scipy_signal_sigtools_linear_filter, METH_VARARGS, doc_linear_filter},
	{"_remez",sigtools_remez, METH_VARARGS, doc_remez},
	{"_medfilt2d", sigtools_median2d, METH_VARARGS, doc_median2d},
	{NULL, NULL, 0, NULL}		/* sentinel */
};

#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "sigtools",
    NULL,
    -1,
    toolbox_module_methods,
    NULL,
    NULL,
    NULL,
    NULL
};
PyObject *PyInit_sigtools(void)
{
    PyObject *m, *d, *s;

    m = PyModule_Create(&moduledef);
	import_array();

    scipy_signal_sigtools_linear_filter_module_init();

    return m;
}
#else
/* Initialization function for the module (*must* be called initsigtools) */

PyMODINIT_FUNC initsigtools(void)
{
        PyObject *m, *d;
	
	/* Create the module and add the functions */
	m = Py_InitModule("sigtools", toolbox_module_methods);

	/* Import the C API function pointers for the Array Object*/
	import_array();

	/* Make sure the multiarraymodule is loaded so that the zero
	   and one objects are defined */
	/* XXX: This should be updated for scipy. I think it's pulling in 
	   Numeric's multiarray. */
	PyImport_ImportModule("numpy.core.multiarray");
	/* { PyObject *multi = PyImport_ImportModule("multiarray"); } */

	/* Add some symbolic constants to the module */
	d = PyModule_GetDict(m);

	/* PyDict_SetItemString(d,"BANDPASS", PyInt_FromLong((long) BANDPASS));
        PyDict_SetItemString(d,"DIFFERENTIATOR", PyInt_FromLong((long) DIFFERENTIATOR));
        PyDict_SetItemString(d,"HILBERT", PyInt_FromLong((long) HILBERT));
        */

        scipy_signal_sigtools_linear_filter_module_init();

	/* Check for errors */
	if (PyErr_Occurred()) {
	  PyErr_Print();
	  Py_FatalError("can't initialize module array");
	}
}
#endif
