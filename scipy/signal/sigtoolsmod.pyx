# SIGTOOLS module by Travis Oliphant
#
# Copyright 2005 Travis Oliphant
# Permission to use, copy, modify, and distribute this software without fee
# is granted under the SciPy License.
#

cimport numpy as np
np.import_array()

cdef extern from "stdlib.h":
    void free(void *ptr);
    void * malloc(size_t size)
    void qsort(void *base, size_t nel, size_t width, int (*compar)(void *, void *))

cdef extern from "string.h":
    int memcmp(void *s1, void *s2, size_t n)
    void * memcpy(void * s1, void * s2, size_t n)

cdef extern from "sigtools.h":
    int pylab_convolve_2d(char*,intp*,char*,intp*,char*,intp*,intp*,intp*,int,char*)
    void f_medfilt2(float*,float*,intp*,intp*, char* (*alloc_fn)(int))
    void d_medfilt2(double*,double*,intp*,intp*, char* (*alloc_fn)(int))
    void b_medfilt2(unsigned char*,unsigned char*,intp*,intp*, char* (*alloc_fn)(int))
    void scipy_signal_sigtools_linear_filter_module_init();

# init the linear filter module
scipy_signal_sigtools_linear_filter_module_init()

# define some constants
OUTSIZE_MASK = 3
FLIP_MASK    = 16
TYPE_SHIFT   = 5

FULL  = 2
SAME  = 1
VALID = 0

CIRCULAR = 8
REFLECT  = 4
PAD      = 0

BANDPASS       = 1
DIFFERENTIATOR = 2
HILBERT        = 3

# A memory allocator which raises a python exception.
# Used by median filter
cdef char *check_malloc(int size):
    cdef char *the_block = <char *>malloc(size)
    if the_block == NULL:
	    print "\nERROR: unable to allocate %d bytes!\n" % size;
	    raise MemoryError

    return the_block


##########################
#  N-D Order Filtering.  #

cdef fill_buffer(char *ip1, np.ndarray ap1, np.ndarray ap2,
                 char *sort_buffer, int nels2, int check, np.npy_intp *loop_ind,
                 np.npy_intp *temp_ind, uintp *offset):
    cdef int i, j, k, incr = 1
    cdef int ndims = np.PyArray_NDIM(ap1)
    cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
    cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
    cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
    cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
    cdef char *ip2 = np.PyArray_DATA(ap2)
    cdef int elsize = np.PyArray_DESCR(ap1).elsize
    cdef char *ptr
    
    ptr = np.PyArray_Zero(ap2)
    temp_ind[ndims-1]--
    
    for i in range(nels2, 0, -1):
        # Adjust index array and move ptr1 to right place
        k = ndims - 1
        for j in range(incr):
            temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions
            k--

        ip1 += offset[k] * is1           # Precomputed offset array
        temp_ind[k]++
        
        if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and
                memcmp(ip2, ptr, np.PyArray_DESCR(ap2).elsize)):
            memcpy(sort_buffer, ip1, elsize)
            sort_buffer += elsize
        
        incr = increment(loop_ind, ndims, dims2)   # Returns number of N-D indices incremented.
        ip2 += is2
        
    np.PyDataMem_FREE(ptr)
    return

cdef int DOUBLE_compare(double *ip1, double *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int FLOAT_compare(float *ip1, float *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int LONGDOUBLE_compare(longdouble *ip1, longdouble *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int BYTE_compare(byte *ip1, byte *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int SHORT_compare(short *ip1, short *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int INT_compare(int *ip1, int *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int LONG_compare(long *ip1, long *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int LONGLONG_compare(longlong *ip1, longlong *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int UBYTE_compare(ubyte *ip1, ubyte *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int USHORT_compare(ushort *ip1, ushort *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int UINT_compare(uint *ip1, uint *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int ULONG_compare(ulong *ip1, ulong *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int ULONGLONG_compare(ulonglong *ip1, ulonglong *ip2):
    return -1 if *ip1 < *ip2 else (0 if *ip1 == *ip2 else 1)

cdef int OBJECT_compare(object ip1, object ip2):
    return (ip1 == ip2) != 1

ctypedef int (*CompareFunction) (void *, void *)

cdef CompareFunction compare_functions[] = \
{
 NULL, BYTE_compare, UBYTE_compare,
 SHORT_compare, USHORT_compare,
 INT_compare, UINT_compare,
 LONG_compare, ULONG_compare,
 LONGLONG_compare, ULONGLONG_compare,
 FLOAT_compare, DOUBLE_compare,
 LONGDOUBLE_compare, NULL, NULL, NULL,
 OBJECT_compare, NULL, NULL, NULL
}

def _order_filterND(a0, domain, int order=0):
    """ out = _order_filterND(a,domain,order)
    """ 
    cdef np.ndarray ap1, ap2, ret
    cdef np.npy_intp *a_ind, *b_ind, *temp_ind, *mode_dep, *check_ind
    cdef np.npy_uintp *offsets, offset1
    cdef np.npy_intp *offsets2
    cdef np.npy_intp *ret_ind
    cdef int i, j, n2, n2_nonzero, k, check, incr = 1
    cdef int typenum, bytes_in_array
    cdef int is1, os
    cdef char *op, *ap1_ptr, *ap2_ptr, *sort_buffer
    cdef CompareFunction compare_func
    cdef char *zptr=NULL

    # Get Array objects from input
    typenum = np.PyArray_ObjectType(a0, 0)
    typenum = np.PyArray_ObjectType(domain, typenum)

    try:
        ap1 = np.PyArray_FROMANY(a0, typenum, 0, 0, np.NPY_CONTIGUOUS)    
        ap2 = np.PyArray_FROMANY(domain, typenum, 0, 0, np.NPY_CONTIGUOUS)

        if np.PyArray_NDIM(ap1) != np.PyArray_NDIM(ap2):
            raise ValueError("All input arrays must have the same number of dimensions.")

        n2 = np.PyArray_SIZE(ap2)
        n2_nonzero = 0
        ap2_ptr = np.PyArray_DATA(ap2)
        
        # Find out the number of non-zero entries in domain (allows for
        # different shapped rank-filters to be used besides just rectangles)
        zptr = np.PyArray_Zero(ap2)
        if zptr == NULL:
            return None
        
        for k in range(n2):
            n2_nonzero += (memcmp(ap2_ptr,zptr,np.PyArray_DESCR(ap2).elsize) != 0)
            ap2_ptr += np.PyArray_DESCR(ap2).elsize

        if ((order >= n2_nonzero) || (order < 0))
            raise ValueError("Order must be non-negative and less than number of nonzero elements in domain.")
        
        ret = np.PyArray_New(NULL, np.PyArray_NDIM(ap1), np.PyArray_DIMS(ap1),
                             typenum, NULL, NULL, 0, np.NPY_CARRAY, NULL)
        
        compare_func = compare_functions[np.PyArray_TYPE(ap1)]
        if compare_func == NULL:
            raise ValueError("order_filterND not available for this type")
        
        is1 = np.PyArray_DESCR(ap1).elsize
        sort_buffer = malloc(n2_nonzero*is1)
        if sort_buffer == NULL:
            return None

        op = np.PyArray_DATA(ret)
        os = np.PyArray_DESCR(ret).elsize

        bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)
        mode_dep = malloc(bytes_in_array)
        for k in range(np.PyArray_NDIM(ap1)):
            mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)

        b_ind = (np.npy_intp *)malloc(bytes_in_array)  # loop variables
        memset(b_ind,0,bytes_in_array)
        a_ind = (np.npy_intp *)malloc(bytes_in_array)
        ret_ind = (np.npy_intp *)malloc(bytes_in_array)
        memset(ret_ind,0,bytes_in_array)
        temp_ind = (np.npy_intp *)malloc(bytes_in_array)
        check_ind = (np.npy_intp *)malloc(bytes_in_array)
        offsets = (np.npy_uintp *)malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))
        offsets2 = (np.npy_intp *)malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_intp))
        offset1 = compute_offsets(offsets,offsets2,
                                  np.PyArray_DIMS(ap1),np.PyArray_DIMS(ap2),
                                  np.PyArray_DIMS(ret),mode_dep,np.PyArray_NDIM(ap1))
        
        # The filtering proceeds by looping through the output array
        # and for each value filling a buffer from the 
        # element-by-element product of the two input arrays.  The buffer
        # is then sorted and the order_th element is kept as output. Index
        # counters are used for book-keeping in the area so that we 
        # can tell where we are in all of the arrays and be sure that 
        # we are not trying to access areas outside the arrays definition.
        #
        # The inner loop is implemented separately but equivalently for each
        # datatype. The outer loop is similar in structure and form to
        # to the inner loop.
        
        # Need to keep track of a ptr to place in big (first) input
        # array where we start the multiplication (we pass over it in the
        # inner loop (and not dereferenced) 
        # if it is pointing outside dataspace)
        
        # Calculate it once and the just move it around appropriately
        np.PyDataMem_FREE(zptr)
        zptr = np.PyArray_Zero(ap1)
        if zptr == NULL:
            return None
        
        ap1_ptr = np.PyArray_DATA(ap1) + offset1*is1
        for k in range(np.PyArray_NDIM(ap1)):
            a_ind[k] = mode_dep[k]
            check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1

        a_ind[np.PyArray_NDIM(ap1)-1] -= 1
        for i in range(np.PyArray_SIZE(ret)):
            # Zero out the sort_buffer (has effect of zero-padding on boundaries).
            # Treat object arrays right.
            ap2_ptr = sort_buffer
            for k in range(n2_nonzero):
                memcpy(ap2_ptr,zptr,is1)
                ap2_ptr += is1

            k = np.PyArray_NDIM(ap1) - 1
            for j in range(incr):
                a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start
                k -= 1

            ap1_ptr += offsets2[k]*is1
            a_ind[k] += 1
            memcpy(temp_ind, a_ind, bytes_in_array)

            check = 0
            k = 0
            while (not check and (k < np.PyArray_NDIM(ap1))):
                check = check or (ret_ind[k] < -mode_dep[k]) or (ret_ind[k] > check_ind[k])
                k += 1

            fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)
            qsort(sort_buffer, n2_nonzero, is1, compare_func)
            memcpy(op, sort_buffer + order*is1, os)

            incr = increment(ret_ind, np.PyArray_NDIM(ret), np.PyArray_DIMS(ret)) # increment index counter
            op += os   # increment to next output index

        
        free(b_ind)
        free(a_ind)
        free(ret_ind)
        free(offsets)
        free(offsets2)
        free(temp_ind)
        free(check_ind)
        free(mode_dep)
        free(sort_buffer)
        
        return np.PyArray_Return(ret)

    finally:
        # clean up after PyArray_Zero()
        if zptr != NULL:
            np.PyDataMem_FREE(zptr)
        
    return None


def _convolve2d(in1, in2, int flip=1, int mode=2, int boundary=0, fill_value=None):
    """ out = _convolve2d(in1, in2, flip, mode, boundary, fillvalue)
    """
    cdef int typenum, flag, ret
    cdef np.npy_intp *aout_dimens=NULL, *dims=NULL
    cdef char zeros[32] # Zeros
    cdef int n1, n2, i, masked_mode
    cdef np.ndarray ain1, ain2, aout
    cdef np.ndarray afill, newfill

    typenum = np.PyArray_ObjectType(in1, 0)
    typenum = np.PyArray_ObjectType(in2, typenum)

    try:
        ain1 = np.PyArray_FROMANY(in1, typenum, 2, 2, np.NPY_CONTIGUOUS)
        ain2 = np.PyArray_FROMANY(in2, typenum, 2, 2, np.NPY_CONTIGUOUS)

        if boundary != PAD and boundary != REFLECT and boundary != CIRCULAR:
            raise ValueError("Incorrect boundary value.")
        
        if boundary == PAD:
            if fill_value is None:
                newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
            else:
                afill = np.PyArray_FROMANY(fill_value, PyArray_CDOUBLE, 0, 0, np.NPY_CONTIGUOUS)
                if afill is None:
                    return None
                newfill = np.PyArray_Cast(afill, typenum)

            if newfill is None
                return None
        else:
            newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
            if newfill is None:
                return None
        
        n1 = np.PyArray_SIZE(ain1)
        n2 = np.PyArray_SIZE(ain2)
        
        aout_dimens = malloc(np.PyArray_NDIM(ain1)*sizeof(np.npy_intp))
        masked_mode = mode & OUTSIZE_MASK
        
        if masked_mode == VALID:
            for i in range(np.PyArray_NDIM(ain1)):
                aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
                if aout_dimens[i] < 0:
                    raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
        elif masked_mode == SAME:
            for i in range(PyArray_NDIM(ain1)):
                aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
        elif masked_mode == FULL:
            for i in range(np.PyArray_NDIM(ain1)):
                aout_dimens[i] = np.PyArray_DIMS(ain1)[i] + np.PyArray_DIMS(ain2)[i] - 1
        else: 
            raise ValueError("mode must be 0 (valid), 1 (same), or 2 (full)")
            
        aout = np.PyArray_SimpleNew(PyArray_NDIM(ain1), aout_dimens, typenum)
        if aout is None:
            return None

        flag = mode + boundary + (typenum << TYPE_SHIFT) + (flip != 0) * FLIP_MASK
        
        ret = pylab_convolve_2d(np.PyArray_DATA(ain1),     # Input data Ns[0] x Ns[1]
                                np.PyArray_STRIDES(ain1),  # Input strides
                                np.PyArray_DATA(aout),     # Output data
                                np.PyArray_STRIDES(aout),  # Ouput strides
                                np.PyArray_DATA(ain2),     # coefficients in filter
                                np.PyArray_STRIDES(ain2),  # coefficients strides
                                np.PyArray_DIMS(ain2),     # Size of kernel Nwin[2]
                                np.PyArray_DIMS(ain1),     # Size of image Ns[0] x Ns[1]
                                flag,                      # convolution parameters
                                np.PyArray_DATA(newfill))  # fill value


        if ret == 0:
            return aout
        elif ret in [-5, -4]:
            raise ValueError("convolve2d not available for this type.")
        elif ret == -3:
            PyErr_NoMemory();
        elif ret == -2:
            raise ValueError("Invalid boundary type.")
        elif -1:
            raise ValueError("Invalid output flag.")
    
    finally:
        free(aout_dimens)
    
    return None

 
def _remez(int numtaps, object bands, object des, object weight, int type=BANDPASS,
           double Hz=1.0, int maxiter=25, int grid_density=16):
    """
        h = _remez(numtaps, bands, des, weight, type, Hz, maxiter, grid_density)
        
          Returns the optimal (in the Chebyshev/minimax sense) FIR filter impulse
          response given a set of band edges, the desired response on those bands,
          and the weight given to the error in those bands.  Bands is a monotonic
          vector with band edges given in frequency domain where Hz is the sampling
          frequency.
    """
    cdef int k, numbands, err 
    np.ndarray a_bands, a_des, a_weight, h
    cdef np.npy_intp ret_dimens
    cdef double oldvalue, *dptr

    if type not in [BANDPASS, DIFFERENTIATOR, HILBERT]:
        raise ValueError("The type must be BANDPASS, DIFFERENTIATOR, or HILBERT.")
    
    if numtaps < 2:
        raise ValueError("The number of taps must be greater than 1.")
    
    a_bands = np.PyArray_FROMANY(bands, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
    a_des = np.PyArray_FROMANY(des, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
    a_weight = np.PyArray_FROMANY(weight, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)

    numbands = np.PyArray_DIMS(a_des)[0]
    if (np.PyArray_DIMS(a_bands)[0] != 2*numbands) or (np.PyArray_DIMS(a_weight)[0] != numbands):
        raise ValueError("The inputs desired and weight must have same length.\n  The input bands must have twice this length.")

    # Check the bands input to see if it is monotonic, divide by 
    # Hz to take from range 0 to 0.5 and check to see if in that range.

    dptr = <double *>np.PyArray_DATA(a_bands)
    oldvalue = 0
    for k in range(2*numbands):
        if *dptr < oldvalue:
            raise ValueError("Bands must be monotonic starting at zero.")
        if (*dptr * 2 > Hz):
            raise ValueError("Band edges should be less than 1/2 the sampling frequency")

        oldvalue = *dptr
        *dptr = oldvalue / Hz # Change so that sampling frequency is 1.0
        dptr += 1

    ret_dimens = numtaps
    h = np.PyArray_New(NULL, 1, &ret_dimens, np.NPY_DOUBLE, NULL, NULL, 0, np.NPY_CARRAY, NULL)

    err = pre_remez(<double *>np.PyArray_DATA(h), numtaps, numbands,
                    <double *>np.PyArray_DATA(a_bands), <double *>np.PyArray_DATA(a_des),
                    <double *>np.PyArray_DATA(a_weight), type, maxiter, grid_density)
    if err < 0:
        if err == -1:
            raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)
        elif err == -2:
            raise MemoryError

    return PyArray_Return(h)


def _median2d(image, size=None):
    """ filt = _median2d(data, size)
    """
    cdef int typenum
    cdef np.ndarray a_image, a_size, a_out
    cdef np.npy_intp Nwin[2] = [3,3]

    typenum = np.PyArray_ObjectType(image, 0)
    a_image = np.PyArray_FROMANY(image, typenum, 2, 2, np.NPY_CONTIGUOUS)

    if size is not None:
        a_size = np.PyArray_FROMANY(size, NPY_INTP, 1, 1, np.NPY_CONTIGUOUS)
        if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):
            raise ValueError("Size must be a length two sequence")
        Nwin[0] = (<np.npy_intp *>np.PyArray_DATA(a_size))[0]
        Nwin[1] = (<np.npy_intp *>np.PyArray_DATA(a_size))[1]

    a_out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), typenum)

    if typenum == np.NPY_UBYTE:
        b_medfilt2(<unsigned char *>np.PyArray_DATA(a_image),
                   <unsigned char *>np.PyArray_DATA(a_out),
                   Nwin, np.PyArray_DIMS(a_image),
                   check_malloc)
    elif typenum == np.NPY_FLOAT:
        f_medfilt2(<float *>np.PyArray_DATA(a_image),
                   <float *>np.PyArray_DATA(a_out),
                   Nwin, np.PyArray_DIMS(a_image),
                   check_malloc)
    elif typenum == np.NPY_DOUBLE:
        d_medfilt2(<double *>np.PyArray_DATA(a_image),
                   <double *>np.PyArray_DATA(a_out),
                   Nwin, np.PyArray_DIMS(a_image),
                   check_malloc)
    else:
        raise ValueError("2D median filter only supports Int8, Float32, and Float64.")

    return PyArray_Return(a_out);


# static char doc_correlateND[] =
#    "out = _correlateND(a,kernel,mode) \n\n" \
#    "   mode = 0 - 'valid', 1 - 'same', \n  2 - 'full' (default)";

#static char doc_linear_filter[] =
#    "(y,Vf) = _linear_filter(b,a,X,Dim=-1,Vi=None)  " \
#    "implemented using Direct Form II transposed flow " \
#    "diagram. If Vi is not given, Vf is not returned.";

#static struct PyMethodDef toolbox_module_methods[] = {
#        {"_correlateND", scipy_signal_sigtools_correlateND, METH_VARARGS, doc_correlateND},
#        {"_convolve2d", sigtools_convolve2d, METH_VARARGS, doc_convolve2d},
#        {"_order_filterND", sigtools_order_filterND, METH_VARARGS, doc_order_filterND},
#        {"_linear_filter", scipy_signal_sigtools_linear_filter, METH_VARARGS, doc_linear_filter},
#        {"_remez",sigtools_remez, METH_VARARGS, doc_remez},
#        {"_medfilt2d", sigtools_median2d, METH_VARARGS, doc_median2d},
#        {NULL, NULL, 0, NULL}           /* sentinel */
#};
