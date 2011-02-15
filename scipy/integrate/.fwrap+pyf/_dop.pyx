#cython: ccomplex=True

"""The _dop module was generated with Fwrap v0.2.0dev_00843a8.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
dop853(...)
dopri5(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport _dop_fc as fc

np.import_array()
import sys

cdef extern from "setjmp.h":
    ctypedef struct jmp_buf:
        pass    
    int setjmp(jmp_buf env)
    void longjmp(jmp_buf env, int val)

cdef extern from "string.h":
    void *memcpy(void *dest, void *src, int n)

cdef class fw_CallbackInfo(object):
    # Callable object to call
    cdef object callback
    # Pass *extra_args to callback (can be None)
    cdef object extra_args
    # If an exception is raised by callback it is stored here
    cdef object exc
    # Some times, one may want to communicate objects directly that are
    # simply passed through in Fortran (in particular NumPy arrays)
    cdef object arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9
    # For use by longjmp
    cdef jmp_buf jmp
    def __cinit__(self, object callback, object extra_args):
        self.callback = callback
        self.extra_args = extra_args


__all__ = ['dopri5', 'dop853']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)

cdef fw_CallbackInfo dopri5_fcn_cb_info
cdef int dopri5_fcn_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * y, fwr_dbl_t * f, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    global dopri5_fcn_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, f_
    cdef np.npy_intp y_shape[1], f_shape[1]
    info = dopri5_fcn_cb_info
    try:
        y_shape[0] = n[0]
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        f_shape[0] = n[0]
        f_ = np.PyArray_New(&np.PyArray_Type, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            f_ret = info.callback(x[0], y_)
        else:
            f_ret = info.callback(x[0], y_, *info.extra_args)
        if f_ is not f_ret:
            f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if f_shape[0] != np.PyArray_DIMS(f_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
        dopri5_fcn_cb_info = info
        return 0
    except:
        dopri5_fcn_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dopri5_fcn_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * y, fwr_dbl_t * f, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    if dopri5_fcn_cb_wrapper_core(n, x, y, f, rpar, ipar) != 0:
        longjmp(dopri5_fcn_cb_info.jmp, 1)



cdef fw_CallbackInfo dopri5_solout_cb_info
cdef int dopri5_solout_cb_wrapper_core(fwi_integer_t * nr, fwr_dbl_t * xold, fwr_dbl_t * x, fwr_dbl_t * y, fwi_integer_t * n, fwr_dbl_t * con, fwi_integer_t * icomp, fwi_integer_t * nd, fwr_dbl_t * rpar, fwi_integer_t * ipar, fwi_integer_t * irtn):
    global dopri5_solout_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, con_, icomp_
    cdef np.npy_intp y_shape[1], con_shape[1], icomp_shape[1]
    info = dopri5_solout_cb_info
    try:
        y_shape[0] = n[0]
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        con_shape[0] = 5*nd[0]
        con_ = np.PyArray_New(&np.PyArray_Type, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
        icomp_shape[0] = nd[0]
        icomp_ = np.PyArray_New(&np.PyArray_Type, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])
        else:
            irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)
        dopri5_solout_cb_info = info
        return 0
    except:
        dopri5_solout_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dopri5_solout_cb_wrapper(fwi_integer_t * nr, fwr_dbl_t * xold, fwr_dbl_t * x, fwr_dbl_t * y, fwi_integer_t * n, fwr_dbl_t * con, fwi_integer_t * icomp, fwi_integer_t * nd, fwr_dbl_t * rpar, fwi_integer_t * ipar, fwi_integer_t * irtn):
    if dopri5_solout_cb_wrapper_core(nr, xold, x, y, n, con, icomp, nd, rpar, ipar, irtn) != 0:
        longjmp(dopri5_solout_cb_info.jmp, 1)


def dopri5(object fcn, fwr_dbl_t x, object y, fwr_dbl_t xend, object rtol, object atol, object solout, object work, object iwork, bint overwrite_y=False):
    """dopri5(fcn, x, y, xend, rtol, atol, solout, work, iwork[, overwrite_y]) -> (x, y, iwork, idid)

    Parameters
    ----------
    fcn : object, intent in
    x : fwr_dbl, intent inout
    y : fwr_dbl, 1D array, dimension(n), intent inout
    xend : fwr_dbl, intent in
    rtol : fwr_dbl, 1D array, dimension(*), intent in
    atol : fwr_dbl, 1D array, dimension(*), intent in
    solout : object, intent in
    work : fwr_dbl, 1D array, dimension(*), intent in
    iwork : fwi_integer, 1D array, dimension(*), intent inout
    overwrite_y : bint_, intent in

    Returns
    -------
    x : fwr_dbl, intent inout
    y : fwr_dbl, 1D array, dimension(n), intent inout
    iwork : fwi_integer, 1D array, dimension(*), intent inout
    idid : fwi_integer, intent out

    """
    global dopri5_fcn_cb_info, dopri5_solout_cb_info
    cdef fw_CallbackInfo fw_fcn_cb, fw_solout_cb
    cdef fwi_integer_t n, itol, iout, lwork, liwork, ipar, idid
    cdef fwr_dbl_t rpar
    cdef np.ndarray y_, rtol_, atol_, work_, iwork_
    cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], work_shape[1], iwork_shape[1]
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    itol = 0 if (atol_shape[0] <= 1) else 1
    iout = 0
    work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
    lwork = work_shape[0]
    iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
    liwork = iwork_shape[0]
    rpar = 0.0
    ipar = 0
    idid = 0
    rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
    n = y_shape[0]
    if not (rtol_shape[0] == atol_shape[0]):
        raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
    if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
        raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
    if not (work_shape[0] >= ((8 * n) + 21)):
        raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
    if not (iwork_shape[0] >= 21):
        raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
    if not (0 <= n <= y_shape[0]):
        raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
    dopri5_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, None)
    dopri5_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, None)
    try:
        if setjmp(dopri5_fcn_cb_info.jmp) == 0:
            if setjmp(dopri5_solout_cb_info.jmp) == 0:
                fc.dopri5(&n, &dopri5_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dopri5_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &rpar, &ipar, &idid)
            else:
                fw_exctype, fw_excval, fw_exctb = dopri5_solout_cb_info.exc
                dopri5_solout_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = dopri5_fcn_cb_info.exc
            dopri5_fcn_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        dopri5_fcn_cb_info = None
    return (x, y_, iwork_, idid,)



cdef fw_CallbackInfo dop853_fcn_cb_info
cdef int dop853_fcn_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * y, fwr_dbl_t * f, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    global dop853_fcn_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, f_
    cdef np.npy_intp y_shape[1], f_shape[1]
    info = dop853_fcn_cb_info
    try:
        y_shape[0] = n[0]
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        f_shape[0] = n[0]
        f_ = np.PyArray_New(&np.PyArray_Type, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            f_ret = info.callback(x[0], y_)
        else:
            f_ret = info.callback(x[0], y_, *info.extra_args)
        if f_ is not f_ret:
            f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if f_shape[0] != np.PyArray_DIMS(f_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
        dop853_fcn_cb_info = info
        return 0
    except:
        dop853_fcn_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dop853_fcn_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * y, fwr_dbl_t * f, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    if dop853_fcn_cb_wrapper_core(n, x, y, f, rpar, ipar) != 0:
        longjmp(dop853_fcn_cb_info.jmp, 1)



cdef fw_CallbackInfo dop853_solout_cb_info
cdef int dop853_solout_cb_wrapper_core(fwi_integer_t * nr, fwr_dbl_t * xold, fwr_dbl_t * x, fwr_dbl_t * y, fwi_integer_t * n, fwr_dbl_t * con, fwi_integer_t * icomp, fwi_integer_t * nd, fwr_dbl_t * rpar, fwi_integer_t * ipar, fwi_integer_t * irtn):
    global dop853_solout_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, con_, icomp_
    cdef np.npy_intp y_shape[1], con_shape[1], icomp_shape[1]
    info = dop853_solout_cb_info
    try:
        y_shape[0] = n[0]
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        con_shape[0] = 5*nd[0]
        con_ = np.PyArray_New(&np.PyArray_Type, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
        icomp_shape[0] = nd[0]
        icomp_ = np.PyArray_New(&np.PyArray_Type, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])
        else:
            irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)
        dop853_solout_cb_info = info
        return 0
    except:
        dop853_solout_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dop853_solout_cb_wrapper(fwi_integer_t * nr, fwr_dbl_t * xold, fwr_dbl_t * x, fwr_dbl_t * y, fwi_integer_t * n, fwr_dbl_t * con, fwi_integer_t * icomp, fwi_integer_t * nd, fwr_dbl_t * rpar, fwi_integer_t * ipar, fwi_integer_t * irtn):
    if dop853_solout_cb_wrapper_core(nr, xold, x, y, n, con, icomp, nd, rpar, ipar, irtn) != 0:
        longjmp(dop853_solout_cb_info.jmp, 1)


def dop853(object fcn, fwr_dbl_t x, object y, fwr_dbl_t xend, object rtol, object atol, object solout, object work, object iwork, bint overwrite_y=False):
    """dop853(fcn, x, y, xend, rtol, atol, solout, work, iwork[, overwrite_y]) -> (x, y, iwork, idid)

    Parameters
    ----------
    fcn : object, intent in
    x : fwr_dbl, intent inout
    y : fwr_dbl, 1D array, dimension(n), intent inout
    xend : fwr_dbl, intent in
    rtol : fwr_dbl, 1D array, dimension(*), intent in
    atol : fwr_dbl, 1D array, dimension(*), intent in
    solout : object, intent in
    work : fwr_dbl, 1D array, dimension(*), intent in
    iwork : fwi_integer, 1D array, dimension(*), intent inout
    overwrite_y : bint_, intent in

    Returns
    -------
    x : fwr_dbl, intent inout
    y : fwr_dbl, 1D array, dimension(n), intent inout
    iwork : fwi_integer, 1D array, dimension(*), intent inout
    idid : fwi_integer, intent out

    """
    global dop853_fcn_cb_info, dop853_solout_cb_info
    cdef fw_CallbackInfo fw_fcn_cb, fw_solout_cb
    cdef fwi_integer_t n, itol, iout, lwork, liwork, ipar, idid
    cdef fwr_dbl_t rpar
    cdef np.ndarray y_, rtol_, atol_, work_, iwork_
    cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], work_shape[1], iwork_shape[1]
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    itol = 0 if (atol_shape[0] <= 1) else 1
    iout = 0
    work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
    lwork = work_shape[0]
    iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
    liwork = iwork_shape[0]
    rpar = 0.0
    ipar = 0
    idid = 0
    rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
    n = y_shape[0]
    if not (rtol_shape[0] == atol_shape[0]):
        raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
    if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
        raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
    if not (work_shape[0] >= ((8 * n) + 21)):
        raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
    if not (iwork_shape[0] >= 21):
        raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
    if not (0 <= n <= y_shape[0]):
        raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
    dop853_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, None)
    dop853_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, None)
    try:
        if setjmp(dop853_fcn_cb_info.jmp) == 0:
            if setjmp(dop853_solout_cb_info.jmp) == 0:
                fc.dop853(&n, &dop853_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dop853_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &rpar, &ipar, &idid)
            else:
                fw_exctype, fw_excval, fw_exctb = dop853_solout_cb_info.exc
                dop853_solout_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = dop853_fcn_cb_info.exc
            dop853_fcn_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        dop853_fcn_cb_info = None
    return (x, y_, iwork_, idid,)



cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,
                                  np.intp_t * coerced_shape,
                                  bint copy, bint create, int alignment=1):
    cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST
    cdef np.ndarray result
    cdef np.npy_intp * in_shape
    cdef int in_ndim
    cdef int i
    if value is None:
        if create:
            result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
        else:
            raise TypeError('Expected array but None provided')
    else:
        if ndim <= 1:
            # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
            flags |= np.NPY_C_CONTIGUOUS
        if (not copy and alignment > 1 and np.PyArray_Check(value) and
            (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):
            # mis-aligned array
            copy = True
        if copy:
            flags |= np.NPY_ENSURECOPY
        result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
    in_ndim = np.PyArray_NDIM(result)
    if in_ndim > ndim:
        raise ValueError("Dimension of array must be <= %d" % ndim)
    in_shape = np.PyArray_DIMS(result)
    for i in range(in_ndim):
        coerced_shape[i] = in_shape[i]
    for i in range(in_ndim, ndim):
        # Pad shape with ones on right side if necessarry
        coerced_shape[i] = 1
    return result

# Fwrap configuration:
# Fwrap: version 0.2.0dev_00843a8
# Fwrap: self-sha1 09a57cc1ee67e71b340a2cd5c28db7ad690870ae
# Fwrap: pyf-sha1 ad48c1ecae36a022e2a9bf95725cd90967930a1f
# Fwrap: wraps dop.pyf
# Fwrap:     sha1 d71eb4a49dfef0b1b0be5c8b9d0a477bdd4f914b
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: no-cpdef True
# Fwrap: auxiliary _dop_fc.h
# Fwrap: auxiliary _dop_fc.pxd

