""" Wrapper for the odepack module """


cimport numpy as np
import numpy as np
np.import_array()

cdef extern from "__quadpack.h":
    void DQAGSE(void *, double *, double *, double *, double *, int *, double *, double *, int *, int *, double *, double *, double *, double *, int *, int *)
    void DQAGPE(void *, double *, double *, int *, double *, double *, double *, int *, double *, double *, int *, int *, double *, double *, double *, double *, double *, int *, int *, int *, int *)
    void DQAWOE(void *, double *, double *, double *, int *, double *, double *, int *, int *, int *, double *, double *, int *, int *, int *, double *, double *, double *, double *, int *, int *, int *, double *)
    void DQAGIE(void *, double *, int *, double *, double *, int *, double *, double *, int *, int *, double *, double *, double *, double *, int *, int *)
    void DQAWFE(void *, double *, double *, int *, double *, int *, int *, int *, double *, double *, int *, int *, double *, double *, int *, int *, double *, double *, double *, double *, int *, int *, double *)
    void DQAWCE(void *, double *, double *, double *, double *, double *, int *, double *, double *, int *, int *, double *, double *, double *, double *, int *, int *)


cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)

cdef extern from "stdlib.h" nogil:
    void *malloc(size_t size)
    void free(void *)

class QuadpackError(Exception): pass

quadpack_error = error = QuadpackError
quadpack_python_funtion = None
quadpack_extra_arguments = ()

__version__ = 1.13

cdef QUAD_INIT_FUNC(fun, arg):
    global quadpack_python_function
    global quadpack_extra_arguments

    prev_values = (quadpack_python_function, quadpack_extra_arguments)

    if not isinstance(arg, tuple):
        raise quadpack_error("Exra arguments must be in a tuple")
    if not callable(fun):
        raise quadpack_error("First argument must be a callback function")

    quadpack_python_function = fun
    quadpack_extra_arguments = arg
    return prev_values

cdef QUAD_RESTORE_FUNC(prev_values):
    global quadpack_python_function
    global quadpack_extra_arguments

    quadpack_pythonfunction, quadpack_extra_arguments = prev_values


cdef double quad_function(double *x):
    global quadpack_python_function
    global quadpack_extra_arguments

    cdef double d_result

    # Call function object --- stored as a global variable.  Extra
    #        arguments are in another global variable.
    try:
        arglist = (float(x[0]), ) + quadpack_extra_arguments
        result = apply(quadpack_python_function, arglist)

        d_result = result
    except Exception:
        raise quadpack_error("Supplied function does not return a valid float")

    return d_result


def _qagse(dummy, fcn, double a, double b, extra_args=None, int full_output=0,
           double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):
    """[result,abserr,infodict,ier] = _qagse(fun, a, b, | args, full_output, epsabs, epsrel, limit)"""

    cdef np.ndarray ap_alist, ap_iord
    cdef np.ndarray ap_blist, ap_elist
    cdef np.ndarray ap_rlist

    cdef np.npy_intp limit_shape[1]
    cdef int neval=0, ier=6, last=0, *iord
    cdef double result=0.0, abserr=0.0
    cdef double *alist, *blist, *rlist, *elist

    limit_shape[0] = limit

    if limit < 1:
        return result, abserr, ier

    savedValues = QUAD_INIT_FUNC(fcn,extra_args)
    try:
        # Setup iwork and work arrays
        ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
        ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
        ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
        ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
        ap_elist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)

        if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:
            return None

        iord = <int *>np.PyArray_DATA(ap_iord)
        alist = <double *>np.PyArray_DATA(ap_alist)
        blist = <double *>np.PyArray_DATA(ap_blist)
        rlist = <double *>np.PyArray_DATA(ap_rlist)
        elist = <double *>np.PyArray_DATA(ap_elist)

        DQAGSE(<void *>quad_function, &a, &b, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
    except Exception:
        ier = 80

    finally:
        QUAD_RESTORE_FUNC(savedValues)

    if full_output:
        dict = { "neval" : neval, 
                 "last" : last, 
                 "iord" : np.PyArray_Return(ap_iord), 
                 "alist" : np.PyArray_Return(ap_alist), 
                 "blist" : np.PyArray_Return(ap_blist), 
                 "rlist" : np.PyArray_Return(ap_rlist), 
                 "elist" : np.PyArray_Return(ap_elist) }
        return (result, abserr, dict,ier)
    else:
        return (result, abserr, ier)



def _qagie(dummy, fcn, double bound, int inf, object extra_args=None, int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):
    """[result,abserr,infodict,ier] = _qagie(fun, bound, inf, | args, full_output, epsabs, epsrel, limit)"""
    cdef np.ndarray ap_alist, ap_iord
    cdef np.ndarray ap_blist, ap_elist, ap_rlist

    cdef np.npy_intp limit_shape[1]
    cdef int      neval=0, ier=6, last=0, *iord
    cdef double   result=0.0, abserr=0.0
    cdef double   *alist, *blist, *rlist, *elist

    # Need to check that limit is bigger than 1
    if limit < 1:
        return (result, abserr, ier)

    savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
    try:
        # Setup iwork and work arrays
        ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
        ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
        ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
        ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
        ap_e_list = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)

        if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:
            return None

        DQAGIE(<void *>quad_function, &bound, &inf, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
    except Exception:
        ier = 80
    finally:
        QUAD_RESTORE_FUNC(savedSettings)

    if full_output:
        dict = { "neval" : neval, 
                 "last" : last, 
                 "iord" : np.PyArray_Return(ap_iord), 
                 "alist" : np.PyArray_Return(ap_alist), 
                 "blist" : np.PyArray_Return(ap_blist), 
                 "rlist" : np.PyArray_Return(ap_rlist), 
                 "elist" : np.PyArray_Return(ap_elist) }
        return (result, abserr, dict, ier)
    else:
        return (result, abserr, ier)


def _qagpe(dummy, fcn, double a, double b, o_points, extra_args=None, int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):
    """[result,abserr,infodict,ier] = _qagpe(fun, a, b, points, | args, full_output, epsabs, epsrel, limit)"""
    cdef np.ndarray ap_alist, ap_iord, ap_blist, ap_elist
    cdef np.ndarray ap_r_list, ap_points, ap_pts, ap_level, ap_ndin

    cdef int npts2
    cdef np.npy_intp limit_shape[1], npts2_shape[1]
    cdef int neval=0, ier=6, last=0, *iord
    cdef int *level, *ndin
    cdef double result=0.0, abserr=0.0
    cdef double *alist, *blist, *rlist, *elist
    cdef double *pts, *points

    # Need to check that limit is bigger than 1
    if limit < 1:
        return (result, abserr, ier)

    savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
    try:
        ap_points = np.PyPyArray_ContiguousFromObject(o_points, np.NPY_DOUBLE, 1, 1)
        npts2 = np.PyArray_DIMS(ap_points)[0]
        points = <double *>np.PyArray_DATA(ap_points);

        # Setup iwork and work arrays
        ap_iord = np.PyArray_EMPTY(1,limit_shape, np.NPY_INT, False)
        ap_alist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
        ap_blist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
        ap_rlist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
        ap_elist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
        ap_pts = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
        ap_level = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
        ap_ndin = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
        
        iord = <int *>np.PyArray_DATA(ap_iord)
        alist = <double *>np.PyArray_DATA(ap_alist)
        blist = <double *>np.PyArray_DATA(ap_blist)
        rlist = <double *>np.PyArray_DATA(ap_rlist)
        elist = <double *>np.PyArray_DATA(ap_elist)
        pts = <double *>np.PyArray_DATA(ap_pts)
        level = <int *>np.PyArray_DATA(ap_level)
        ndin = <int *>np.PyArray_DATA(ap_level)

        DQAGPE(<void *>quad_function, &a, &b, &npts2, points, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, pts, iord, level, ndin, &last)
    except Exception, e:
        ier = 80
    finally:
        QUAD_RESTORE_FUNC(savedSettings)

    if full_output:
        dict = { "neval" : neval, 
                 "last" : last, 
                 "iord" : np.PyArray_Return(ap_iord), 
                 "alist" : np.PyArray_Return(ap_alist), 
                 "blist" : np.PyArray_Return(ap_blist), 
                 "rlist" : np.PyArray_Return(ap_rlist), 
                 "elist" : np.PyArray_Return(ap_elist), 
                 "pts" : np.PyArray_Return(ap_pts), 
                 "level" : np.PyArray_Return(ap_level), 
                 "ndin" : np.PyArray_Return(ap_ndin) }

        return (result, abserr, dict, ier)
    else:
        return (result, abserr, ier)


def _qawoe(dummpy, fcn, double a, double b, double omega, int integr, extra_args=None, 
            int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50, 
            int maxp1=50, int icall=1, int momcom=50, o_chebmo=None):
    """[result,abserr,infodict,ier] = _qawoe(fun, a, b, omega, integr, | args, full_output, epsabs, epsrel, limit, maxp1, icall, momcom, chebmo)"""
    cdef np.ndarray ap_alist, ap_irod, ap_blist, ap_elist, ap_rlist, ap_nnlog, ap_chebmo

    cdef np.npy_intp limit_shape[1], sz[2]
    cdef int      neval=0, ier=6, last=0, *iord
    cdef int      *nnlog
    cdef double   result=0.0, abserr=0.0
    cdef double   *chebmo
    cdef double   *alist, *blist, *rlist, *elist

    limit_shape[0] = limit

    # Need to check that limit is bigger than 1 
    if limit < 1:
        return (result, abserr, ier)

    savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
    try:
        if o_chebmo is not None:
            ap_chebmo = np.PyArray_ContiguousFromObject(o_chebmo, np.NPY_DOUBLE, 2, 2)
            if np.PyArray_DIMS(ap_chebmo)[1] != maxp1 or np.PyArray_DIMS(ap_chebmo)[0] != 25:
                raise quadpack_error("Chebyshev moment array has the wrong size.")
        else:
            sz[0] = 25
            sz[1] = maxp1
            ap_chebmo = np.PyArray_EMPTY(2, sz, np.NPY_DOUBLE, False)
        chebmo = <double *>np.PyArray_DATA(ap_chebmo)

        # Setup iwork and work arrays 
        ap_iord = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)
        ap_nnlog = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)
        ap_alist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
        ap_blist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
        ap_rlist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
        ap_elist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)

        iord = <int *>np.PyArray_DATA(ap_iord)
        nnlog = <int *>np.PyArray_DATA(ap_nnlog)
        alist = <double *>np.PyArray_DATA(ap_alist)
        blist = <double *>np.PyArray_DATA(ap_blist)
        rlist = <double *>np.PyArray_DATA(ap_rlist)
        elist = <double *>np.PyArray_DATA(ap_elist)

        DQAWOE(<void *>quad_function, &a, &b, &omega, &integr, &epsabs, &epsrel, &limit, &icall, &maxp1, &result, &abserr, &neval, &ier, &last, alist, blist, rlist, elist, iord, nnlog, &momcom, chebmo)
    except Exception, e:
        ier = 80
    finally:
        QUAD_RESTORE_FUNC(savedSettings)

    if full_output:
        dict = { "neval" : neval, 
                 "last" : last, 
                 "iord" : np.PyArray_Return(ap_iord), 
                 "alist" : np.PyArray_Return(ap_alist), 
                 "blist" : np.PyArray_Return(ap_blist), 
                 "rlist" : np.PyArray_Return(ap_rlist), 
                 "elist" : np.PyArray_Return(ap_elist), 
                 "nnlog" : np.PyArray_Return(ap_nnlog), 
                 "momcom" : momcom, 
                 "chebmo" : np.PyArray_Return(ap_chebmo) }
        return (result, abserr, dict, ier)
    else:
        return (result, abserr, ier)





def _qawfe(fcn, double a, double omega, int integr, extra_args=None, int full_output=0, double epsabs=1.49e-8, int limlst=50, int limit=50, int maxp1=50):
    """[result,abserr,infodict,ier] = _qawfe(fcn, a, omega, integr, | args, full_output, epsabs, limlst, limit, maxp1)"""
    cdef np.ndarray ap_alist, ap_iord, ap_blist, ap_elist, ap_rlist, ap_nnlog, ap_chebmo, ap_rslst, ap_erlst, ap_ierlst


    cdef np.npy_intp limlst_shape[1], limit_shape[1], sz[2]
    cdef int      neval=0, ier=6, *iord
    cdef int      lst, *nnlog, *ierlst
    cdef double   *chebmo, *rslst, *erlst
    cdef double   result=0.0, abserr=0.0
    cdef double   *alist, *blist, *rlist, *elist

    limit_shape[0] = limit
    limlst_shape[0] = limlst

    # Need to check that limit is bigger than 1 
    if limit < 1:
        return (result, abserr, ier)

    savedSettings = QUAD_INIT_FUNC(fcn, extra_args)
    try:
        sz[0] = 25
        sz[1] = maxp1
        ap_chebmo = <np.ndarray>np.PyArray_SimpleNew(2, sz, np.NPY_DOUBLE)
        chebmo = <double *>np.PyArray_DATA(ap_chebmo)

        # Setup iwork and work arrays 
        ap_iord = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_INT);
        ap_nnlog = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_INT);
        ap_alist = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_DOUBLE);
        ap_blist = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_DOUBLE);
        ap_rlist = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_DOUBLE);
        ap_elist = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_DOUBLE);
        ap_rslst = <np.ndarray>np.PyArray_SimpleNew(1,limlst_shape,np.NPY_DOUBLE);
        ap_erlst = <np.ndarray>np.PyArray_SimpleNew(1,limlst_shape,np.NPY_DOUBLE);
        ap_ierlst = <np.ndarray>np.PyArray_SimpleNew(1,limlst_shape,np.NPY_INT);
        if (ap_iord is None or ap_nnlog is None or ap_alist is None or ap_blist is None or ap_rlist is None or 
            ap_elist is None or ap_rslst is None or ap_erlst is None or ap_ierlst is None):
            return NULL

        iord = <int *>np.PyArray_DATA(ap_iord)
        nnlog = <int *>np.PyArray_DATA(ap_nnlog)
        alist = <double *>np.PyArray_DATA(ap_alist)
        blist = <double *>np.PyArray_DATA(ap_blist)
        rlist = <double *>np.PyArray_DATA(ap_rlist)
        elist = <double *>np.PyArray_DATA(ap_elist)
        rslst = <double *>np.PyArray_DATA(ap_rslst)
        erlst = <double *>np.PyArray_DATA(ap_erlst)
        ierlst = <int *>np.PyArray_DATA(ap_ierlst)

        DQAWFE(<void *>quad_function, &a, &omega, &integr, &epsabs, &limlst, &limit, &maxp1, &result, &abserr, &neval, &ier, rslst, erlst, ierlst, &lst, alist, blist, rlist, elist, iord, nnlog, chebmo)
    except:
        ier = 80
    finally:
        QUAD_RESTORE_FUNC(savedSettings)

    if full_output:
        dict = { 
            "neval" : neval, 
            "lst" : lst, 
            "rslst" : np.PyArray_Return(ap_rslst), 
            "erlst" : np.PyArray_Return(ap_erlst), 
            "ierlst" : np.PyArray_Return(ap_ierlst) }
        return (result, abserr, dict, ier)
    else:
        return (result, abserr, ier)


def _qawce(fcn, double a, double b, double c, extra_args=None, int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):
    """[result,abserr,infodict,ier] = _qawce(fun, a, b, c, | args, full_output, epsabs, epsrel, limit)"""
    cdef np.ndarray ap_alist, ap_iord, ap_blist, ap_elist, ap_rlist

    cdef np.npy_intp limit_shape[1]
    cdef int      neval=0, ier=6, last=0, *iord
    cdef double   result=0.0, abserr=0.0
    cdef double   *alist, *blist, *rlist, *elist

    limit_shape[0] = limit

    # Need to check that limit is bigger than 1 
    if limit < 1:
        return (result, abserr, ier)

    savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
    try:
        # Setup iwork and work arrays 
        ap_iord = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_INT)
        ap_alist = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_DOUBLE)
        ap_blist = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_DOUBLE)
        ap_rlist = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_DOUBLE)
        ap_elist = <np.ndarray>np.PyArray_SimpleNew(1,limit_shape,np.NPY_DOUBLE)
        if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:
            return NULL

        iord = <int *>np.PyArray_DATA(ap_iord)
        alist = <double *>np.PyArray_DATA(ap_alist)
        blist = <double *>np.PyArray_DATA(ap_blist)
        rlist = <double *>np.PyArray_DATA(ap_rlist)
        elist = <double *>np.PyArray_DATA(ap_elist)
        DQAWCE(<void *>quad_function, &a, &b, &c, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
    except:
        ier = 80
    finally:
        QUAD_RESTORE_FUNC(savedSettings)

    if full_output:
        dict = {
            "neval" : neval, 
            "last" : last, 
            "iord" : np.PyArray_Return(ap_iord), 
            "alist" : np.PyArray_Return(ap_alist), 
            "blist" : np.PyArray_Return(ap_blist), 
            "rlist" : np.PyArray_Return(ap_rlist), 
            "elist" : np.PyArray_Return(ap_elist) }
        return (result, abserr, dict, ier)
    else:
        return (result, abserr, ier)
