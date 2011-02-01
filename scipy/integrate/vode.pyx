#cython: ccomplex=True

"""The vode module was generated with Fwrap v0.2.0dev_51187a5.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
dvode(...)
zvode(...)

"""
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


__all__ = ['dvode', 'zvode']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)

cdef fw_CallbackInfo dvode_f_cb_info
cdef int dvode_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_dbl_t * ydot, void * rpar, void * ipar):
    global dvode_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, ydot_
    cdef np.npy_intp y_shape[1], ydot_shape[1]
    info = dvode_f_cb_info
    try:
        y_shape[0] = n[0]
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        ydot_shape[0] = n[0]
        ydot_ = np.PyArray_New(&np.PyArray_Type, 1, ydot_shape, fwr_dbl_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            ydot_ret = info.callback(t[0], y_)
        else:
            ydot_ret = info.callback(t[0], y_, *info.extra_args)
        if ydot_ is not ydot_ret:
            ydot_ = np.PyArray_FROMANY(ydot_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
        dvode_f_cb_info = info
        return 0
    except:
        dvode_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_dbl_t * ydot, void * rpar, void * ipar):
    if dvode_f_cb_wrapper_core(n, t, y, ydot, rpar, ipar) != 0:
        longjmp(dvode_f_cb_info.jmp, 1)



cdef fw_CallbackInfo dvode_jac_cb_info
cdef int dvode_jac_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwr_dbl_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
    global dvode_jac_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, jac_
    cdef np.npy_intp y_shape[1], jac_shape[2]
    info = dvode_jac_cb_info
    try:
        y_shape[0] = n[0]
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
        jac_ = np.PyArray_New(&np.PyArray_Type, 2, jac_shape, fwr_dbl_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            jac_ret = info.callback(t[0], y_)
        else:
            jac_ret = info.callback(t[0], y_, *info.extra_args)
        if jac_ is not jac_ret:
            jac_ = np.PyArray_FROMANY(jac_ret, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
            if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
        dvode_jac_cb_info = info
        return 0
    except:
        dvode_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwr_dbl_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
    if dvode_jac_cb_wrapper_core(n, t, y, ml, mu, jac, nrowpd, rpar, ipar) != 0:
        longjmp(dvode_jac_cb_info.jmp, 1)


cpdef object dvode(object f, object jac, object y, fwr_dbl_t t, fwr_dbl_t tout, object rtol, object atol, fwi_integer_t itask, fwi_integer_t istate, object rwork, object iwork, fwi_integer_t mf, object f_extra_args=None, object jac_extra_args=None, bint overwrite_y=False):
    """dvode(f, jac, y, t, tout, rtol, atol, itask, istate, rwork, iwork, mf[, f_extra_args, jac_extra_args]) -> (y, t, istate)

    Parameters
    ----------
    f : object, intent in
    jac : object, intent in
    y : fwr_dbl, 1D array, dimension(neq), intent inout
    t : fwr_dbl, intent inout
    tout : fwr_dbl, intent in
    rtol : fwr_dbl, 1D array, dimension(*), intent in
    atol : fwr_dbl, 1D array, dimension(*), intent in
    itask : fwi_integer, intent in
    istate : fwi_integer, intent inout
    rwork : fwr_dbl, 1D array, dimension(lrw), intent in
    iwork : fwi_integer, 1D array, dimension(liw), intent in
    mf : fwi_integer, intent in
    f_extra_args : tuple of extra arguments to pass to f
    jac_extra_args : tuple of extra arguments to pass to f
    overwrite_y : bool, intent in

    Returns
    -------
    y : fwr_dbl, 1D array, dimension(neq), intent inout
    t : fwr_dbl, intent inout
    istate : fwi_integer, intent inout

    """
    global dvode_f_cb_info, dvode_jac_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb
    cdef fwi_integer_t neq, itol, iopt, lrw, liw
    cdef np.ndarray y_, rtol_, atol_, rwork_, iwork_
    cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], rwork_shape[1], iwork_shape[1]
    rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
    iopt = 1
    rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
    iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
    neq = y_shape[0]
    lrw = rwork_shape[0]
    liw = iwork_shape[0]
    if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
        raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
    if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
        raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
    if not ((itask > 0) and (itask < 6)):
        raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
    if not ((istate > 0) and (istate < 4)):
        raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
    if not (rwork_shape[0] >= lrw):
        raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
    if not (iwork_shape[0] >= liw):
        raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
    if not (0 <= neq <= y_shape[0]):
        raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
    if not (0 <= lrw <= rwork_shape[0]):
        raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
    if not (0 <= liw <= iwork_shape[0]):
        raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
    dvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
    dvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
    try:
        if setjmp(dvode_f_cb_info.jmp) == 0:
            if setjmp(dvode_jac_cb_info.jmp) == 0:
                fc.dvode(&dvode_f_cb_wrapper, &neq, <fwr_dbl_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &dvode_jac_cb_wrapper, &mf, NULL, NULL)
            else:
                fw_exctype, fw_excval, fw_exctb = dvode_jac_cb_info.exc
                dvode_jac_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = dvode_f_cb_info.exc
            dvode_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        dvode_f_cb_info = None
    return (y_, t, istate,)



cdef fw_CallbackInfo zvode_f_cb_info
cdef int zvode_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwc_dbl_complex_t * ydot, void * rpar, void * ipar):
    global zvode_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, ydot_
    cdef np.npy_intp y_shape[1], ydot_shape[1]
    info = zvode_f_cb_info
    try:
        y_shape[0] = n[0]
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        ydot_shape[0] = n[0]
        ydot_ = np.PyArray_New(&np.PyArray_Type, 1, ydot_shape, fwc_dbl_complex_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            ydot_ret = info.callback(t[0], y_)
        else:
            ydot_ret = info.callback(t[0], y_, *info.extra_args)
        if ydot_ is not ydot_ret:
            ydot_ = np.PyArray_FROMANY(ydot_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
        zvode_f_cb_info = info
        return 0
    except:
        zvode_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwc_dbl_complex_t * ydot, void * rpar, void * ipar):
    if zvode_f_cb_wrapper_core(n, t, y, ydot, rpar, ipar) != 0:
        longjmp(zvode_f_cb_info.jmp, 1)



cdef fw_CallbackInfo zvode_jac_cb_info
cdef int zvode_jac_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwc_dbl_complex_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
    global zvode_jac_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, jac_
    cdef np.npy_intp y_shape[1], jac_shape[2]
    info = zvode_jac_cb_info
    try:
        y_shape[0] = n[0]
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
        jac_ = np.PyArray_New(&np.PyArray_Type, 2, jac_shape, fwc_dbl_complex_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            jac_ret = info.callback(t[0], y_)
        else:
            jac_ret = info.callback(t[0], y_, *info.extra_args)
        if jac_ is not jac_ret:
            jac_ = np.PyArray_FROMANY(jac_ret, fwc_dbl_complex_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
            if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
        zvode_jac_cb_info = info
        return 0
    except:
        zvode_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwc_dbl_complex_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
    if zvode_jac_cb_wrapper_core(n, t, y, ml, mu, jac, nrowpd, rpar, ipar) != 0:
        longjmp(zvode_jac_cb_info.jmp, 1)


cpdef object zvode(object f, object jac, object y, fwr_dbl_t t, fwr_dbl_t tout, object rtol, object atol, fwi_integer_t itask, fwi_integer_t istate, object zwork, object rwork, object iwork, fwi_integer_t mf, object f_extra_args=None, object jac_extra_args=None, bint overwrite_y=False):
    """zvode(f, jac, y, t, tout, rtol, atol, itask, istate, zwork, rwork, iwork, mf[, overwrite_y]) -> (y, t, istate)

    Parameters
    ----------
    f : object, intent in
    jac : object, intent in
    y : fwc_dbl_complex, 1D array, dimension(neq), intent inout
    t : fwr_dbl, intent inout
    tout : fwr_dbl, intent in
    rtol : fwr_dbl, 1D array, dimension(*), intent in
    atol : fwr_dbl, 1D array, dimension(*), intent in
    itask : fwi_integer, intent in
    istate : fwi_integer, intent inout
    zwork : fwc_dbl_complex, 1D array, dimension(lzw), intent in
    rwork : fwr_dbl, 1D array, dimension(lrw), intent in
    iwork : fwi_integer, 1D array, dimension(liw), intent in
    mf : fwi_integer, intent in
    f_extra_args : tuple of extra arguments to pass to f
    jac_extra_args : tuple of extra arguments to pass to f
    overwrite_y : bool, intent in

    Returns
    -------
    y : fwc_dbl_complex, 1D array, dimension(neq), intent inout
    t : fwr_dbl, intent inout
    istate : fwi_integer, intent inout

    """
    global zvode_f_cb_info, zvode_jac_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb
    cdef fwi_integer_t neq, itol, iopt, lzw, lrw, liw
    cdef np.ndarray y_, rtol_, atol_, zwork_, rwork_, iwork_
    cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], zwork_shape[1], rwork_shape[1], iwork_shape[1]
    rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
    iopt = 1
    zwork_ = fw_asfortranarray(zwork, fwc_dbl_complex_t_enum, 1, zwork_shape, False, False)
    rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
    iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
    neq = y_shape[0]
    lzw = zwork_shape[0]
    lrw = rwork_shape[0]
    liw = iwork_shape[0]
    if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
        raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
    if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
        raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
    if not ((itask > 0) and (itask < 6)):
        raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
    if not ((istate > 0) and (istate < 4)):
        raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
    if not (zwork_shape[0] >= lzw):
        raise ValueError('Condition on arguments not satisfied: zwork.shape[0] >= lzw')
    if not (rwork_shape[0] >= lrw):
        raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
    if not (iwork_shape[0] >= liw):
        raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
    if not (0 <= neq <= y_shape[0]):
        raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
    if not (0 <= lzw <= zwork_shape[0]):
        raise ValueError("(0 <= lzw <= zwork.shape[0]) not satisifed")
    if not (0 <= lrw <= rwork_shape[0]):
        raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
    if not (0 <= liw <= iwork_shape[0]):
        raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
    zvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
    zvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
    try:
        if setjmp(zvode_f_cb_info.jmp) == 0:
            if setjmp(zvode_jac_cb_info.jmp) == 0:
                fc.zvode(&zvode_f_cb_wrapper, &neq, <fwc_dbl_complex_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwc_dbl_complex_t*>np.PyArray_DATA(zwork_), &lzw, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &zvode_jac_cb_wrapper, &mf, NULL, NULL)
            else:
                fw_exctype, fw_excval, fw_exctb = zvode_jac_cb_info.exc
                zvode_jac_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = zvode_f_cb_info.exc
            zvode_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        zvode_f_cb_info = None
    return (y_, t, istate,)



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
# Fwrap: version 0.2.0dev_51187a5
# Fwrap: self-sha1 95cff1f041bdf6557820520320ccd041fb929656
# Fwrap: pyf-sha1 03ab7a8e14a2820cebd9e6ef5cf8a5c55f6bb879
# Fwrap: wraps odepack/vode.f
# Fwrap:     sha1 e6a4c327447ad9f1405171d2f51a3883c2a02be8
# Fwrap: wraps odepack/zvode.f
# Fwrap:     sha1 70ca8758efa16aee4d10c61dee7b2ca428a250cd
# Fwrap: exclude d1mach
# Fwrap: exclude dacopy
# Fwrap: exclude dewset
# Fwrap: exclude dumach
# Fwrap: exclude dumsum
# Fwrap: exclude dvhin
# Fwrap: exclude dvindy
# Fwrap: exclude dvjac
# Fwrap: exclude dvjust
# Fwrap: exclude dvnlsd
# Fwrap: exclude dvnorm
# Fwrap: exclude dvset
# Fwrap: exclude dvsol
# Fwrap: exclude dvsrco
# Fwrap: exclude dvstep
# Fwrap: exclude dzaxpy
# Fwrap: exclude dzscal
# Fwrap: exclude ixsav
# Fwrap: exclude xerrwd
# Fwrap: exclude xsetf
# Fwrap: exclude xsetun
# Fwrap: exclude zabssq
# Fwrap: exclude zacopy
# Fwrap: exclude zewset
# Fwrap: exclude zvhin
# Fwrap: exclude zvindy
# Fwrap: exclude zvjac
# Fwrap: exclude zvjust
# Fwrap: exclude zvnlsd
# Fwrap: exclude zvnorm
# Fwrap: exclude zvset
# Fwrap: exclude zvsol
# Fwrap: exclude zvsrco
# Fwrap: exclude zvstep
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary vode.pxd
# Fwrap: auxiliary vode_fc.h
# Fwrap: auxiliary vode_fc.pxd

