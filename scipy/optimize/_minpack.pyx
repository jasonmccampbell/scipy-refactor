#cython: ccomplex=True

cimport numpy as np

np.import_array()
import sys

cdef extern from "stdlib.h" nogil:
    void *malloc(size_t size)
    void free(void *)

cdef extern from "string.h":
    void *memcpy(void * , void *, size_t)

cdef extern from "__minpack.h":
    cdef void CHKDER(int*,int*,double*,double*,double*,int*,double*,double*,int*,double*)
    cdef void HYBRD(void*,int*,double*,double*,double*,int*,int*,int*,double*,double*,int*,double*,int*,int*,int*,double*,int*,double*,int*,double*,double*,double*,double*,double*)
    cdef void HYBRJ(void*,int*,double*,double*,double*,int*,double*,int*,double*,int*,double*,int*,int*,int*,int*,double*,int*,double*,double*,double*,double*,double*)
    cdef void LMDIF(void*,int*,int*,double*,double*,double*,double*,double*,int*,double*,double*,int*,double*,int*,int*,int*,double*,int*,int*,double*,double*,double*,double*,double*)
    cdef void LMDER(void*,int*,int*,double*,double*,double*,int*,double*,double*,double*,int*,double*,int*,double*,int*,int*,int*,int*,int*,double*,double*,double*,double*,double*)
    cdef void LMSTR(void*,int*,int*,double*,double*,double*,int*,double*,double*,double*,int*,double*,int*,double*,int*,int*,int*,int*,int*,double*,double*,double*,double*,double*)



cdef multipack_python_function
cdef multipack_extra_arguments
cdef multipack_python_jacobian
cdef multipack_jac_transpose

class MinpackError(Exception):
    pass

minpack_error = MinpackError
error = MinpackError

cdef inline ISCONTIGUOUS(np.ndarray arr):
    return np.PyArray_ChkFlags(arr, np.NPY_CONTIGUOUS)

cdef INIT_FUNC(fun, arg):
    global multipack_python_function
    global multipack_extra_arguments

    if arg is None:
        arg = ()
    if not isinstance(arg, tuple):
        raise MinpackError("Extra arguments must be in a tuple.")
    if not callable(fun):
        raise MinpackError("First argument must be a callable function.")

    save = (multipack_python_function, multipack_extra_arguments)
    multipack_python_function = fun
    multipack_extra_arguments = arg
    return save


cdef RESTORE_FUNC(savedArgs):
    global multipack_python_function
    global multipack_extra_arguments

    multipack_python_function, multipack_extra_arguments = savedArgs



cdef INIT_JAC_FUNC(fun,Dfun,arg,col_deriv):
    global multipack_python_function
    global multipack_extra_arguments
    global multipack_python_jacobian
    global multipack_jac_transpose

    if arg is None:
        arg = ()
    if not isinstance(arg, tuple):
        raise MinpackError("Extra arguments must be in a tuple.")
    if not callable(fun) or (Dfun is not None and not callable(Dfun)):
        raise MinpackError("The function and it's Jacobian must be callable functions.")

    save = (multipack_python_function, multipack_extra_arguments, multipack_python_jacobian, multipack_jac_transpose)

    multipack_python_function = fun
    multipack_extra_arguments = arg 
    multipack_python_jacobian = Dfun 
    multipack_jac_transpose = not col_deriv
    return save

cdef RESTORE_JAC_FUNC(savedArgs):
    global multipack_python_function
    global multipack_extra_arguments
    global multipack_python_jacobian
    global multipack_jac_transpose

    multipack_python_function, multipack_extra_arguments, multipack_python_jacobian, multipack_jac_transpose = savedArgs
        

def _hybrd(fun, x0, extra_args=None, int full_output=0, double xtol=1.49012e-8, int maxfev=-10, int ml=-10,
          int mu=-10, double epsfcn=0.0, double factor=1.0e2, o_diag=None):
    """[x,infodict,info] = _hybrd(fun, x0, args, full_output, xtol, maxfev, ml, mu, epsfcn, factor, diag)"""

    cdef int      mode = 2, nprint = 0, info, nfev, ldfjac
    cdef np.npy_intp n, lr
    cdef double   *x, *fvec, *diag, *fjac, *r, *qtf

    cdef np.ndarray ap_x, ap_fvec, ap_fjac, ap_r, ap_qtf, ap_diag

    cdef np.npy_intp dims[2]
    cdef int      allocated = 0
    cdef double   *wa = NULL

    
    savedArgs = INIT_FUNC(fun,extra_args)
    try:
        # Initial input vector 
        ap_x = np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
        x = <double *>np.PyArray_DATA(ap_x)
        n = np.PyArray_DIMS(ap_x)[0]

        lr = n * (n + 1) / 2
        if (ml < 0): ml = n-1
        if (mu < 0): mu = n-1
        if (maxfev < 0): maxfev = 200*(n+1)

        # Setup array to hold the function evaluations 
        ap_fvec = call_python_function(fun, n, x, extra_args, 1, minpack_error)
        fvec = <double *>np.PyArray_DATA(ap_fvec)
        if np.PyArray_NDIM(ap_fvec) == 0:
            n = 1
        elif np.PyArray_DIMS(ap_fvec)[0] < n:
            n = np.PyArray_DIMS(ap_fvec)[0]

        if o_diag is None:          # Set the diag vector from input
            ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
            diag = <double *>np.PyArray_DATA(ap_diag)
            mode = 1
        else:
            ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
            diag = <double *>np.PyArray_DATA(ap_diag)
            mode = 2

        dims[0] = n
        dims[1] = n
        ap_r = np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
        ap_qtf = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
        ap_fjac = np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)

        r = <double *>np.PyArray_DATA(ap_r)
        qtf = <double *>np.PyArray_DATA(ap_qtf)
        fjac = <double *>np.PyArray_DATA(ap_fjac)
        ldfjac = dims[1]

        wa = <double *>malloc(4*n * sizeof(double))

        allocated = 1

        # Call the underlying FORTRAN routines. 
        HYBRD(<void *>raw_multipack_calling_function, &n, x, fvec, &xtol, &maxfev, &ml, &mu, &epsfcn, diag, &mode, &factor, &nprint, &info, &nfev, fjac, &ldfjac, r, &lr, qtf, wa, wa+n, wa+2*n, wa+3*n)
    finally:
        RESTORE_FUNC(savedArgs)
        if allocated:
            free(wa)

    if full_output:
        dict = {
            "fvec" : np.PyArray_Return(ap_fvec),
            "nfev" : nfev,
            "fjac" : np.PyArray_Return(ap_fjac),
            "r" : np.PyArray_Return(ap_r),
            "qtf" : np.PyArray_Return(ap_qtf)
        }
        return (np.PyArray_Return(ap_x), dict, info)
    else:
        return (np.PyArray_Return(ap_x), info)


def _hybrj(fun, Dfun, x0, extra_args=None, int full_output=0, int col_deriv=1, double xtol=1.49012e-8,
          int maxfev = -10, double factor=1.0e2, o_diag=None):
    """[x,infodict,info] = _hybrj(fun, Dfun, x0, args, full_output, col_deriv, xtol, maxfev, factor, diag)"""

    cdef int      mode = 2, nprint = 0, info, nfev, njev, ldfjac
    cdef np.npy_intp n, lr
    cdef double   *x, *fvec, *diag, *fjac, *r, *qtf

    cdef np.ndarray ap_x, ap_fvec, ap_fjac, ap_r, ap_qtf, ap_diag
    cdef np.npy_intp dims[2]
    cdef int      allocated = 0
    cdef double   *wa = NULL


    savedArgs = INIT_JAC_FUNC(fun,Dfun,extra_args,col_deriv)
    try:
        # Initial input vector 
        ap_x = <np.ndarray>np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
        x = <double *>np.PyArray_DATA(ap_x)
        n = np.PyArray_DIMS(ap_x)[0]
        lr = n * (n + 1) / 2;

        if (maxfev < 0):
            maxfev = 100*(n+1)

        # Setup array to hold the function evaluations
        ap_fvec = <np.ndarray>call_python_function(fun, n, x, extra_args, 1, minpack_error)
        fvec = <double *>np.PyArray_DATA(ap_fvec)
        if np.PyArray_NDIM(ap_fvec) == 0:
            n = 1
        elif np.PyArray_DIMS(ap_fvec)[0] < n:
            n = np.PyArray_DIMS(ap_fvec)[0]

        if o_diag is None:          # Set the diag vector from input
            ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
            diag = <double *>np.PyArray_DATA(ap_diag)
            mode = 1
        else:
            ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
            diag = <double *>np.PyArray_DATA(ap_diag)
            mode = 2

        dims[0] = n
        dims[1] = n
        ap_r = <np.ndarray>np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
        ap_qtf = <np.ndarray>np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
        ap_fjac = <np.ndarray>np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)

        if ap_r is None or ap_qtf is None or ap_fjac is None:
            return None

        r = <double *>np.PyArray_DATA(ap_r)
        qtf = <double *>np.PyArray_DATA(ap_qtf)
        fjac = <double *>np.PyArray_DATA(ap_fjac)

        ldfjac = dims[1]

        wa = <double *>malloc(4*n * sizeof(double))
        allocated = 1

        # Call the underlying FORTRAN routines. 
        HYBRJ(<void *>jac_multipack_calling_function, &n, x, fvec, fjac, &ldfjac, &xtol, &maxfev, diag, &mode, &factor, &nprint, &info, &nfev, &njev, r, &lr, qtf, wa, wa+n, wa+2*n, wa+3*n)
        if (info < 0):
            return NULL            # Python Terminated
    finally:
        RESTORE_JAC_FUNC(savedArgs)
        if allocated:
            free(wa)
    
    if full_output:
        dict = {
            "fvec" : np.PyArray_Return(ap_fvec),
            "nfev" : nfev,
            "njev" : njev,
            "fjac" : np.PyArray_Return(ap_fjac),
            "r" : np.PyArray_Return(ap_r),
            "qtf" : np.PyArray_Return(ap_qtf)
        }
        return (np.PyArray_Return(ap_x), dict, info)
    else:
        return (np.PyArray_Return(ap_x), info)


def _lmdif(fcn, x0, extra_args=None, int full_output=0, double ftol=1.49012e-8, double xtol=1.49012e-8,
           double gtol=0.0, int maxfev=-10, double epsfcn=0.0, double factor=1.0e2, o_diag=None):
    cdef int m, mode = 2, nprint = 0, info, nfev, ldfjac, *ipvt
    cdef np.npy_intp n
    cdef double *x, *fvec, *diag, *fjac, *qtf

    cdef np.ndarray ap_x, ap_fvec, ap_fjac, ap_ipvt, ap_qft, ap_diag

    cdef np.npy_intp dims[2]
    cdef int      allocated = 0
    cdef double   *wa = NULL

    savedArgs = INIT_FUNC(fcn,extra_args)
    try:
        # Initial input vector 
        ap_x = <np.ndarray>np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
        x = <double *> np.PyArray_DATA(ap_x)
        n = np.PyArray_DIMS(ap_x)[0]
        dims[0] = n

        #SET_DIAG(ap_diag,o_diag,mode);
        if o_diag is None:          # Set the diag vector from input
            ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
            diag = <double *>np.PyArray_DATA(ap_diag)
            mode = 1
        else:
            ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
            diag = <double *>np.PyArray_DATA(ap_diag)
            mode = 2

        if (maxfev < 0): maxfev = 200*(n+1)

        # Setup array to hold the function evaluations and find it's size
        ap_fvec = call_python_function(fcn, n, x, extra_args, 1, minpack_error)
        fvec = <double *> np.PyArray_DATA(ap_fvec)
        m = np.PyArray_DIMS(ap_fvec)[0] if np.PyArray_NDIM(ap_fvec) > 0 else 1

        dims[0] = n
        dims[1] = m
        ap_ipvt = np.PyArray_SimpleNew(1,&n, np.NPY_INT)
        ap_qtf = np.PyArray_SimpleNew(1,&n, np.NPY_DOUBLE)
        ap_fjac = np.PyArray_SimpleNew(2,dims, np.NPY_DOUBLE)

        ipvt = <int *>np.PyArray_DATA(ap_ipvt)
        qtf = <double *>np.PyArray_DATA(ap_qtf)
        fjac = <double *>np.PyArray_DATA(ap_fjac)
        ldfjac = dims[1]
        wa = <double *>malloc((3*n + m)* sizeof(double))
        allocated = 1

        # Call the underlying FORTRAN routines. 
        LMDIF(<void *>raw_multipack_lm_function, &m, &n, x, fvec, &ftol, &xtol, &gtol, &maxfev, &epsfcn, diag, &mode, &factor, &nprint, &info, &nfev, fjac, &ldfjac, ipvt, qtf, wa, wa+n, wa+2*n, wa+3*n);
    finally:
        if allocated: free(wa)
        RESTORE_FUNC(savedArgs)

    if (info < 0): return None    # Python error

    if full_output:
        dict = {
            "fvec" : np.PyArray_Return(ap_fvec),
            "nfev" : nfev,
            "fjac" : np.PyArray_Return(ap_fjac),
            "ipvt" : np.PyArray_Return(ap_ipvt),
            "qtf" : np.PyArray_Return(ap_qtf)
        }
        return(np.PyArray_Return(ap_x), dict, info)
    else:
        return (np.PyArray_Return(ap_x), info)


def _lmder(fcn, Dfun, x0, extra_args=None, int full_output=0, int col_deriv=1, double ftol=1.49012e-8,
           double xtol=1.49012e-8, double gtol=0.0, int maxfev=-10, double factor=1.0e2, o_diag=None):
    """[x,infodict,info] = _lmder(fun, Dfun, x0, args, full_output, col_deriv, ftol, xtol, gtol, maxfev, factor, diag)"""
    cdef int m, mode = 2, nprint = 0, info, nfev, njev, ldfjac, *ipvt
    cdef np.npy_intp n
    cdef double   *x, *fvec, *diag, *fjac, *qtf

    cdef ap_x, ap_fvec, ap_fjac, ap_ipvt, ap_qtf, ap_diag

    cdef np.npy_intp dims[2]
    cdef int      allocated = 0
    cdef double   *wa = NULL

    savedArgs = INIT_JAC_FUNC(fcn,Dfun,extra_args,col_deriv)
    try:
        # Initial input vector 
        ap_x = <np.ndarray>np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
        x = <double *>np.PyArray_DATA(ap_x)
        n = np.PyArray_DIMS(ap_x)[0]

        if (maxfev < 0): maxfev = 100*(n+1)

        # Setup array to hold the function evaluations 
        ap_fvec = call_python_function(fcn, n, x, extra_args, 1, minpack_error)
        fvec = <double *>np.PyArray_DATA(ap_fvec)

        #SET_DIAG(ap_diag,o_diag,mode);
        if o_diag is None:          # Set the diag vector from input
            ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
            diag = <double *>np.PyArray_DATA(ap_diag)
            mode = 1
        else:
            ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
            diag = <double *>np.PyArray_DATA(ap_diag)
            mode = 2

        m = np.PyArray_DIMS(ap_fvec)[0] if np.PyArray_NDIM(ap_fvec) > 0 else 1

        dims[0] = n
        dims[1] = m
        ap_ipvt = np.PyArray_SimpleNew(1,&n,np.NPY_INT)
        ap_qtf = np.PyArray_SimpleNew(1,&n,np.NPY_DOUBLE)
        ap_fjac = np.PyArray_SimpleNew(2,dims,np.NPY_DOUBLE)

        ipvt = <int *>np.PyArray_DATA(ap_ipvt)
        qtf = <double *>np.PyArray_DATA(ap_qtf)
        fjac = <double *>np.PyArray_DATA(ap_fjac)
        ldfjac = dims[1]
        wa = <double *>malloc((3*n + m)* sizeof(double))
        allocated = 1

        # Call the underlying FORTRAN routines. 
        LMDER(<void *>jac_multipack_lm_function, &m, &n, x, fvec, fjac, &ldfjac, &ftol, &xtol, &gtol, &maxfev, diag, &mode, &factor, &nprint, &info, &nfev, &njev, ipvt, qtf, wa, wa+n, wa+2*n, wa+3*n)
    finally:
        if allocated: free(wa)
        RESTORE_JAC_FUNC(savedArgs)

    if (info < 0): return None   # Python error 

    if full_output:
        dict = {
            "fvec" : np.PyArray_Return(ap_fvec),
            "nfev" : nfev,
            "njev" : njev,
            "fjac" : np.PyArray_Return(ap_fjac),
            "ipvt" : np.PyArray_Return(ap_ipvt),
            "qtf" : np.PyArray_Return(ap_qtf)
        }
        return (np.PyArray_Return(ap_x), dict, info)
    else:
        return (np.PyArray_Return(ap_x), info)



#
# Check gradient function 
#

def _chkder(int m, int n, o_x, o_fvec, o_fjac, int ldfjac, np.ndarray ap_xp, o_fvecp, 
            int mode, np.ndarray ap_err):
    """_chkder(m,n,x,fvec,fjac,ldfjac,xp,fvecp,mode,err)"""
    cdef np.ndarray ap_fvecp, ap_fjac, ap_x, ap_fvec
    cdef double *xp, *fvecp, *fjac, *fvec, *x
    cdef double *err

    ap_x = <np.ndarray>np.PyArray_ContiguousFromObject(o_x, np.NPY_DOUBLE,1,1)
    if n != np.PyArray_DIMS(ap_x)[0]:
        raise minpack_error("Input data array (x) must have length n")
    x = <double *>np.PyArray_DATA(ap_x)
    if not ISCONTIGUOUS(ap_xp) or (np.PyDataType_TYPE_NUM(np.PyArray_DESCR(ap_xp)) != np.NPY_DOUBLE):
        raise minpack_error("Seventh argument (xp) must be contiguous array of type Float64.")

    if mode == 1:
        fvec = NULL
        fjac = NULL
        xp = <double *>np.PyArray_DATA(ap_xp)
        fvecp = NULL
        err = NULL
        CHKDER(&m, &n, x, fvec, fjac, &ldfjac, xp, fvecp, &mode, err)
    elif mode == 2:
        if not ISCONTIGUOUS(ap_err) or (np.PyDataType_TYPE_NUM(np.PyArray_DESCR(ap_err)) != np.NPY_DOUBLE):
            raise minpack_error("Last argument (err) must be contiguous array of type Float64.")

        ap_fvec = <np.ndarray>np.PyArray_ContiguousFromObject(o_fvec, np.NPY_DOUBLE,1,1)
        ap_fjac = <np.ndarray>np.PyArray_ContiguousFromObject(o_fjac, np.NPY_DOUBLE,2,2)
        ap_fvecp = <np.ndarray>np.PyArray_ContiguousFromObject(o_fvecp, np.NPY_DOUBLE,1,1)

        fvec = <double *>np.PyArray_DATA(ap_fvec)
        fjac = <double *>np.PyArray_DATA(ap_fjac)
        xp = <double *>np.PyArray_DATA(ap_xp)
        fvecp = <double *>np.PyArray_DATA(ap_fvecp)
        err = <double *>np.PyArray_DATA(ap_err)

        CHKDER(&m, &n, x, fvec, fjac, &m, xp, fvecp, &mode, err)
    else:
        raise minpack_error("Invalid mode, must be 1 or 2.")

    return None



cdef int raw_multipack_calling_function(int *n, double *x, double *fvec, int *iflag):
    """ This is the function called from the Fortran code it should
        -- use call_python_function to get a multiarrayobject result
	    -- check for errors and return -1 if any
	    -- otherwise place result of calculation in *fvec
    """
    global multipack_python_function
    global multipack_extra_arguments

    result_array = <np.ndarray>call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
    if result_array is None:
        iflag[0] = -1
        return -1
    
    memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
    return 0


cdef int jac_multipack_calling_function(int *n, double *x, double *fvec, double *fjac, int *ldfjac, int *iflag):
    """ This is the function called from the Fortran code it should
        -- use call_python_function to get a multiarrayobject result
	    -- check for errors and return -1 if any
	    -- otherwise place result of calculation in *fvec or *fjac.

     If iflag = 1 this should compute the function.
     If iflag = 2 this should compute the jacobian (derivative matrix)
    """
    
    if iflag[0] == 1:
        result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
        if result_array is None:
            iflag[0] = -1
            return -1
        memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
    else:
        result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)
        if result_array is None:
            iflag[0] = -1
            return -1
        if multipack_jac_transpose == 1:
            MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])
        else:
            memcpy(fjac, np.PyArray_DATA(result_array), (n[0])*(ldfjac[0])*sizeof(double));
    return 0


cdef int raw_multipack_lm_function(int *m, int *n, double *x, double *fvec, int *iflag):
    """ This is the function called from the Fortran code it should
        -- use call_python_function to get a multiarrayobject result
	    -- check for errors and return -1 if any
	    -- otherwise place result of calculation in *fvec
    """

    result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
    if result_array is None:
        iflag[0] = -1
        return -1
    
    memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))
    return 0


cdef int jac_multipack_lm_function(int *m, int *n, double *x, double *fvec, double *fjac, int *ldfjac, int *iflag):
    """ This is the function called from the Fortran code it should
        -- use call_python_function to get a multiarrayobject result
	    -- check for errors and return -1 if any
	    -- otherwise place result of calculation in *fvec or *fjac.

        If iflag = 1 this should compute the function.
        If iflag = 2 this should compute the jacobian (derivative matrix)
    """

    if iflag[0] == 1:
        result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
        if (result_array is None):
            iflag[0] = -1
            return -1
    
        memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))
    else:
        result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)
        if result_array is None:
            iflag[0] = -1
            return -1
    
    if (multipack_jac_transpose == 1):
        MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])
    else:
        memcpy(fjac, np.PyArray_DATA(result_array), (n[0])*(ldfjac[0])*sizeof(double))
  
    return 0


cdef int smjac_multipack_lm_function(int *m, int *n, double *x, double *fvec, double *fjrow, int *iflag):
    """ This is the function called from the Fortran code it should
        -- use call_python_function to get a multiarrayobject result
	    -- check for errors and return -1 if any
	    -- otherwise place result of calculation in *fvec or *fjac.

        If iflag = 1 this should compute the function.
        If iflag = i this should compute the (i-1)-st row of the jacobian.
    """
    cdef int row

    if iflag[0] == 1:
        result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
        if (result_array is None):
            iflag[0] = -1
            return -1
        
        memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))
    else:
        # append row number to argument list and call row-based jacobian 
        row = iflag[0] - 2;

        newargs = (row, ) + multipack_extra_arguments
        result_array = call_python_function(multipack_python_jacobian, n[0], x, newargs, 2, minpack_error)
        memcpy(fjrow, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
    
    return 0



cdef object call_python_function(func, np.npy_intp n, double *x, object args, int dim, object error_obj):
    """ 
    This is a generic function to call a python function that takes a 1-D
    sequence as a first argument and optional extra_arguments (should be a
    zero-length tuple if none desired).  The result of the function is 
    returned in a multiarray object.
        -- build sequence object from values in x.
	-- add extra arguments (if any) to an argument list.
	-- call Python callable object
 	-- check if error occurred:
	         if so return NULL
	-- if no error, place result of Python code into multiarray object.
    """
    cdef np.ndarray sequence
    cdef object arglist, tmpobj
    cdef object arg1, str1
    cdef object result

    # Build sequence argument from inputs
    sequence = <np.ndarray>np.PyArray_SimpleNewFromData(1, &n, np.NPY_DOUBLE, <char *>x)
    if sequence is None:
        raise error_obj("Internal failure to make an array of doubles out of first\n                 argument to function call.")

    # Build argument list
    if args is None: args = ()
    result = apply(func, (sequence, ) + args)
    if result is None:
        raise error_obj("Error occured while calling the Python function named %s" % func.func_name)
    return np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, dim-1, dim)


cdef void MATRIXC2F(double *jac, double *data, int m, int n):
    cdef int i, j
    cdef double *p1 = jac
    cdef double *p2
    cdef double *p3 = data

    for j in range(m):
        p2 = p3
        i = 0
        while i < n:
            p1[0] = p2[0]
            p2 += m
            i += 1
            p1 += 1
        p3 += 1
