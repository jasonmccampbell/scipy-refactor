""" Wrapper for the odepack module """


cimport numpy as np
import numpy as np
np.import_array()

cdef extern from "__odepack.h":
    cdef int lsoda "LSODA"(void *, int *, double *, double *, double *, int *, double *, double *, int *, int *, int *, double *, int *, int *, int *, void *, int *jt)

cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)

cdef extern from "stdlib.h" nogil:
    void *malloc(size_t size)
    void free(void *)

class OdepackError(Exception): pass

error = OdepackError
__version__ = 1.9

cdef int __multipack_jac_transpose

__multipack_python_function = None
__multipack_python_jacobian = None
__multipack_extra_arguments= None
__multipack_jac_transpose = -1

cdef INIT_JAC_FUNC(fun, Dfun, arg, int col_deriv, errobj):
    global __multipack_python_function
    global __multipack_extra_arguments
    global __multipack_python_jacobian
    global __multipack_jac_transpose

    globalStore = (__multipack_python_function, __multipack_extra_arguments, 
                               __multipack_python_jacobian, __multipack_jac_transpose)

    if arg is None:
        arg = ()
    elif not isinstance(arg, tuple):
        raise errobj("Extra arguments must be in a tuple")

    if not callable(fun) or (Dfun is not None and not callable(Dfun)):
        raise errobj("The function and its Jacobian must be callback functions.")
    __multipack_python_function = fun
    __multipack_extra_arguments = arg
    __multipack_python_jacobian = Dfun
    __multipack_jac_transpose = not col_deriv

    return globalStore

cdef RESTORE_JAC_FUNC(jacStore):
    global __multipack_python_function
    global __multipack_extra_arguments
    global __multipack_python_jacobian
    global __multipack_jac_transpose

    __multipack_python_function, __multipack_extra_arguments, __multipack_python_jacobian, __multipack_jac_transpose = jacStore


def odeint(fun, y0, t, extra_args=None, Dfun=None, int col_deriv=0, int ml=-1, int mu=-1, 
            int full_output=0, rtol=None, atol=None, tcrit=None, double h0=0.0, 
            double hmax=0.0, double hmin=0.0, int ixpr=0, int mxstep=0, int mxhnil=0, int mxordn=12, 
            int mxords=5):
    """[y,{infodict,}istate] = odeint(fun, y0, t, args=(), Dfun=None, col_deriv=0, ml=, mu=, 
        full_output=0, rtol=, atol=, tcrit=, h0=0.0, hmax=0.0, hmin=0.0, ixpr=0.0, mxstep=0.0, 
        mxhnil=0, mxordn=0, mxords=0)\n  yprime = fun(y,t,...)
    """            

    cdef object store_multipack_globals     # 4-tuple of objects
    cdef int store_multipack_globals3
    cdef int jt=4
    cdef double *y, *tout, *yout, *yout_ptr, *tout_ptr
    cdef double *rtol_ptr, *atol_ptr, *tcrit_ptr, *rwork
    cdef int neq, ntimes, lrw, liw, itol, itask=1, istate=1, iopt=0, k
    cdef int crit_ind=0
    cdef int *iwork
    cdef np.npy_intp dims[2]
    cdef object ap_tout
    cdef double *dCythonHack
    cdef int *iCythonHack
    cdef int numcrit=0
    cdef np.npy_intp out_sz
    cdef double t0

    store_multipack_globals = INIT_JAC_FUNC(fun,Dfun,extra_args,col_deriv, OdepackError)
    try:

        # Set up jt, ml, and mu
        if Dfun is None:
            jt += 1    # set jt for internally generated
        if ml < 0 and mu < 0:
            jt -= 3     # Neither ml nor mu given, market jt for full jacobian
        if ml < 0:
            ml = 0      # if one but not both are given
        if mu < 0:
            mu = 0

        # Initial input vector
        ap_y = np.PyArray_ContiguousFromObject(y0, np.NPY_DOUBLE, 0, 1)
        y = <double *>np.PyArray_DATA(ap_y)
        neq = np.PyArray_SIZE(ap_y)
        dims[1] = neq

        # Set of output times for integration
        ap_tout = np.PyArray_ContiguousFromObject(t, np.NPY_DOUBLE, 0, 1)
        tout = <double *>np.PyArray_DATA(ap_tout)
        ntimes = np.PyArray_SIZE(ap_tout)
        dims[0] = ntimes
        t0 = tout[0]

        # Setup array to hold the output evaluations
        ap_yout = np.PyArray_EMPTY(2, dims, np.NPY_DOUBLE, False)
        yout = <double *>np.PyArray_DATA(ap_yout)
        # Copy initial vector into first row of output 
        memcpy(yout, y, neq*sizeof(double))     # copy intial value to output 
        yout_ptr = yout + neq;                  # set output pointer to next position

        itol, ap_rtol, ap_atol, ap_tcrit = setup_extra_inputs(rtol, atol, tcrit, neq, &numcrit)
        if itol < 0:
            return None # Fail

        rtol_ptr = <double *>np.PyArray_DATA(ap_rtol)
        atol_ptr = <double *>np.PyArray_DATA(ap_atol)
        if ap_tcrit is not None:
            tcrit_ptr = <double *>np.PyArray_DATA(ap_tcrit)

        # Find size of working arrays
        compute_lrw_liw(&lrw, &liw, neq, jt, ml, mu, mxordn, mxords)
        wa = <double *>malloc(lrw*sizeof(double) + liw*sizeof(int))
        if wa == NULL:
            raise Exception("Insufficent memory")
        allocated = 1;
        rwork = wa;
        iwork = <int *>(wa + lrw)

        iwork[0] = ml
        iwork[1] = mu      # ignored if not needed 

        if h0 != 0.0 or hmax != 0.0 or hmin != 0.0 or ixpr != 0 or mxstep != 0 or mxhnil != 0 or mxordn != 0 or mxords != 0:
            rwork[4] = h0
            rwork[5] = hmax
            rwork[6] = hmin
            iwork[4] = ixpr
            iwork[5] = mxstep
            iwork[6] = mxhnil
            iwork[7] = mxordn
            iwork[8] = mxords
            iopt = 1
    
        istate = 1
        k = 1

        # If full output make some useful output arrays 
        if full_output:
            out_sz = ntimes-1
            ap_hu = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
            ap_tcur = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
            ap_tolsf = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
            ap_tsw = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
            ap_nst = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
            ap_nfe = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
            ap_nje = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
            ap_nqu = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
            ap_mused = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
            if ap_hu is None or ap_tcur is None or ap_tolsf is None or ap_tsw is None or ap_nst is None or ap_nfe is None or ap_nje is None or ap_nqu is None or ap_mused is None:
                return NULL
  
        if ap_tcrit is not None:
            itask = 4
            rwork[0] = tcrit_ptr[0]  # There are critical points 

        while (k < ntimes and istate > 0):  # loop over desired times
            tout_ptr = tout + k
            # Use tcrit if relevant 
            if itask == 4 and tout_ptr[0] > (tcrit_ptr + crit_ind)[0]:
                crit_ind += 1
                rwork[0] = (tcrit_ptr + crit_ind)[0]
            if crit_ind >= numcrit: 
                itask = 1  # No more critical values 

            lsoda(<void *>ode_function, &neq, y, &t0, tout_ptr, &itol, rtol_ptr, atol_ptr, &itask, 
                  &istate, &iopt, rwork, &lrw, iwork, &liw, <void *>ode_jacobian_function, &jt);
            if full_output:
                (<double *>np.PyArray_DATA(ap_hu))[k-1] = rwork[10]
                (<double *>np.PyArray_DATA(ap_tcur))[k-1] = rwork[12]
                (<double *>np.PyArray_DATA(ap_tolsf))[k-1] = rwork[13]
                (<double *>np.PyArray_DATA(ap_tsw))[k-1] = rwork[14]
                (<int *>np.PyArray_DATA(ap_nst))[k-1] = iwork[10]
                (<int *>np.PyArray_DATA(ap_nfe))[k-1] = iwork[11]
                (<int *>np.PyArray_DATA(ap_nje))[k-1] = iwork[12]
                (<int *>np.PyArray_DATA(ap_nqu))[k-1] = iwork[13]
                if istate == -5 or istate == -4:
                  imxer = iwork[15]
                else:
                  imxer = -1
            
                lenrw = iwork[16]
                leniw = iwork[17]
                (<int *>np.PyArray_DATA(ap_mused))[k-1] = iwork[18]

            memcpy(yout_ptr, y, neq*sizeof(double))   # copy integration result to output
            yout_ptr += neq
            k += 1
        free(wa);
    finally:
        RESTORE_JAC_FUNC(store_multipack_globals)

    if full_output:
        props = { "hu" : np.PyArray_Return(ap_hu),
                  "tcur" : np.PyArray_Return(ap_tcur),
                  "tolsf" : np.PyArray_Return(ap_tolsf),
                  "tsw" : np.PyArray_Return(ap_tsw),
                  "nst" : np.PyArray_Return(ap_nst),
                  "nfe" : np.PyArray_Return(ap_nfe),
                  "nje" : np.PyArray_Return(ap_nje),
                  "nqu" : np.PyArray_Return(ap_nqu),
                  "imxer" : imxer,
                  "lenrw" : lenrw,
                  "leniw" : leniw,
                  "mused" : np.PyArray_Return(ap_mused) }
        return (np.PyArray_Return(ap_yout), props, istate)
    else:
        return (np.PyArray_Return(ap_yout), istate)




cdef void ode_function(int *n, double *t, double *y, double *ydot):
    """ This is the function called from the Fortran code it should
        -- use call_python_function to get a multiarrayobject result
	    -- check for errors and return -1 if any
 	    -- otherwise place result of calculation in ydot
    """
    global __multipack_extra_arguments

    cdef np.ndarray result_array
    cdef object arg1, arglist

    # Append t to argument list
    arg1 = (t[0], )
    arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1
    result_array = <np.ndarray>call_python_function(__multipack_python_function, n[0], y, arglist, 1, OdepackError)
    memcpy(ydot, np.PyArray_DATA(result_array), (n[0])*sizeof(double));


cdef int ode_jacobian_function(int *n, double *t, double *y, int *ml, int *mu, double *pd, int *nrowpd):
    """
    This is the function called from the Fortran code it should
      -- use call_python_function to get a multiarrayobject result
	  -- check for errors and return -1 if any (though this is ignored 
	     by calling program).
	  -- otherwise place result of calculation in pd
    """
    global __multipack_python_function
    global __multipack_extra_arguments
    global __multipack_python_jacobian
    global __multipack_jac_transpose

    cdef np.ndarray result_array

    arg1 = (t[0], )
    arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1
    result_array = call_python_function(__multipack_python_jacobian, n[0], y, arglist, 2, OdepackError)

    if __multipack_jac_transpose == 1:
        MATRIXC2F(pd, <double *>np.PyArray_DATA(result_array), n[0], nrowpd[0])
    else:
        memcpy(pd, np.PyArray_DATA(result_array), (n[0])*(nrowpd[0])*sizeof(double))
    
    return 0

cdef void MATRIXC2F(double *p1, double *p3, int n, int m):
    cdef double *p2
    cdef int i,j

    j=0
    while j < m:
        p2=p3
        i=0
        while i < n:
            p1[0] = p2[0]
            p2 += m
            p1 += 1
        p3 += 1
        j += 1

cdef object setup_extra_inputs(object o_rtol, object o_atol, object o_tcrit, int neq, int *numcrit):
    cdef object ap_rtol, ap_atol, ap_tcrit      # Outputs
    cdef int itol = 0
    cdef double tol=1.49012e-8
    cdef np.npy_intp one = 1

    if o_rtol is None:
        ap_rtol = np.PyArray_EMPTY(1, &one, np.NPY_DOUBLE, False)
        (<double *>np.PyArray_DATA(ap_rtol))[0] = tol
    else:
        ap_rtol = np.PyArray_ContiguousFromObject(o_rtol,np.NPY_DOUBLE,0,1)
        if np.PyArray_NDIM(ap_rtol) == 0:
            pass
        elif np.PyArray_DIMS(ap_rtol)[0] == neq:
            itol |= 2
        else:
            raise OdepackError("Tolerances must be an array of the same length as the\n     number of equations or a scalar.")

    if o_atol is None:
        ap_atol = np.PyArray_EMPTY(1,&one,np.NPY_DOUBLE, False)
        (<double *>np.PyArray_DATA(ap_atol))[0] = tol
    else:
        ap_atol = np.PyArray_ContiguousFromObject(o_atol,np.NPY_DOUBLE,0,1)
        if np.PyArray_NDIM(ap_atol) == 0:   # atol is scalar
            pass
        elif np.PyArray_DIMS(ap_atol)[0] == neq:
            itol |= 1   # Set atol array flag
        else:
            raise OdepackError("Tolerances must be an array of the same length as the\n     number of equations or a scalar.")
    itol += 1             # increment to get correct value 

    # Setup t-critical 
    if o_tcrit is not None:
        ap_tcrit = np.PyArray_ContiguousFromObject(o_tcrit,np.NPY_DOUBLE,0,1)
        numcrit[0] = np.PyArray_SIZE(ap_tcrit)
    else:
        ap_tcrit = None

    return itol, ap_rtol, ap_atol, ap_tcrit


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


cdef int compute_lrw_liw(int *lrw, int *liw, int neq, int jt, int ml, int mu, int mxordn, int mxords):
    cdef int lrn, lrs, nyh, lmat

    if jt == 1 or jt == 2:
        lmat = neq*neq + 2
    elif jt == 4 or jt == 5:
        lmat = (2*ml + mu + 1)*neq + 2
    else:
        raise OdepackError("Incorrect value for jt")

    if mxordn < 0:
        raise OdepackError("Incorrect value for mxordn")
    if mxords < 0:
        raise OdepackError("Incorrect value for mxords")
    nyh = neq

    lrn = 20 + nyh*(mxordn+1) + 3*neq
    lrs = 20 + nyh*(mxords+1) + 3*neq + lmat

    lrw[0] = lrn if lrn > lrs else lrs
    liw[0] = <int>(20 + neq)
    return 0

