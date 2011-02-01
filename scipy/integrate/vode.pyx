#cython: ccomplex=True

"""The vode module was generated with Fwrap v0.2.0dev_0c427bf.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
d1mach(...)
dacopy(...)
dewset(...)
dumach(...)
dumsum(...)
dvhin(...)
dvindy(...)
dvjac(...)
dvjust(...)
dvnlsd(...)
dvnorm(...)
dvode(...)
dvset(...)
dvsol(...)
dvsrco(...)
dvstep(...)
dzaxpy(...)
dzscal(...)
ixsav(...)
xerrwd(...)
xsetf(...)
xsetun(...)
zabssq(...)
zacopy(...)
zewset(...)
zvhin(...)
zvindy(...)
zvjac(...)
zvjust(...)
zvnlsd(...)
zvnorm(...)
zvode(...)
zvset(...)
zvsol(...)
zvsrco(...)
zvstep(...)

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


__all__ = ['dvode', 'dvhin', 'dvindy', 'dvstep', 'dvset', 'dvjust', 'dvnlsd', 'dvjac', 'dacopy', 'dvsol', 'dvsrco', 'dewset', 'dvnorm', 'd1mach', 'xerrwd', 'xsetun', 'xsetf', 'ixsav', 'zvode', 'zvhin', 'zvindy', 'zvstep', 'zvset', 'zvjust', 'zvnlsd', 'zvjac', 'zacopy', 'zvsol', 'zvsrco', 'zewset', 'zvnorm', 'zabssq', 'dzscal', 'dzaxpy', 'dumach', 'dumsum']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)

cdef fw_CallbackInfo dvode_f_cb_info
cdef int dvode_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_real_t * arg3, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    global dvode_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], rpar_shape[1], ipar_shape[1]
    info = dvode_f_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_dbl_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            n[0], t[0], y_ret, arg3[0], rpar_ret, ipar_ret = info.callback(n[0], t[0], y_, arg3[0], rpar_, ipar_)
        else:
            n[0], t[0], y_ret, arg3[0], rpar_ret, ipar_ret = info.callback(n[0], t[0], y_, arg3[0], rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        dvode_f_cb_info = info
        return 0
    except:
        dvode_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_real_t * arg3, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    if dvode_f_cb_wrapper_core(n, t, y, arg3, rpar, ipar) != 0:
        longjmp(dvode_f_cb_info.jmp, 1)



cdef fw_CallbackInfo dvode_jac_cb_info
cdef int dvode_jac_cb_wrapper_core():
    global dvode_jac_cb_info;
    cdef fw_CallbackInfo info
    info = dvode_jac_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        dvode_jac_cb_info = info
        return 0
    except:
        dvode_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvode_jac_cb_wrapper():
    if dvode_jac_cb_wrapper_core() != 0:
        longjmp(dvode_jac_cb_info.jmp, 1)


cpdef object dvode(object f, fwi_integer_t neq, object y, fwr_dbl_t t, fwr_dbl_t tout, fwi_integer_t itol, object rtol, object atol, fwi_integer_t itask, fwi_integer_t istate, fwi_integer_t iopt, object rwork, fwi_integer_t lrw, object iwork, fwi_integer_t liw, object jac, fwi_integer_t mf, object rpar, object ipar):
    """dvode(f, neq, y, t, tout, itol, rtol, atol, itask, istate, iopt, rwork, lrw, iwork, liw, jac, mf, rpar, ipar) -> (neq, y, t, tout, itol, rtol, atol, itask, istate, iopt, rwork, lrw, iwork, liw, jac, mf, rpar, ipar)

    Parameters
    ----------
    f : object, intent in
    neq : fwi_integer, intent inout
    y : fwr_dbl, 1D array, dimension(*), intent inout
    t : fwr_dbl, intent inout
    tout : fwr_dbl, intent inout
    itol : fwi_integer, intent inout
    rtol : fwr_dbl, 1D array, dimension(*), intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    itask : fwi_integer, intent inout
    istate : fwi_integer, intent inout
    iopt : fwi_integer, intent inout
    rwork : fwr_dbl, 1D array, dimension(lrw), intent inout
    lrw : fwi_integer, intent inout
    iwork : fwi_integer, 1D array, dimension(liw), intent inout
    liw : fwi_integer, intent inout
    jac : object
    mf : fwi_integer, intent inout
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    neq : fwi_integer, intent inout
    y : fwr_dbl, 1D array, dimension(*), intent inout
    t : fwr_dbl, intent inout
    tout : fwr_dbl, intent inout
    itol : fwi_integer, intent inout
    rtol : fwr_dbl, 1D array, dimension(*), intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    itask : fwi_integer, intent inout
    istate : fwi_integer, intent inout
    iopt : fwi_integer, intent inout
    rwork : fwr_dbl, 1D array, dimension(lrw), intent inout
    lrw : fwi_integer, intent inout
    iwork : fwi_integer, 1D array, dimension(liw), intent inout
    liw : fwi_integer, intent inout
    jac : object
    mf : fwi_integer, intent inout
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    """
    global dvode_f_cb_info, dvode_jac_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb
    cdef np.ndarray y_, rtol_, atol_, rwork_, iwork_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], rwork_shape[1], iwork_shape[1], rpar_shape[1], ipar_shape[1]
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
    if not (0 <= lrw <= rwork_shape[0]):
        raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
    iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
    if not (0 <= liw <= iwork_shape[0]):
        raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
    rpar_ = fw_asfortranarray(rpar, fwr_dbl_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    dvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    dvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, None)
    try:
        if setjmp(dvode_f_cb_info.jmp) == 0:
            if setjmp(dvode_jac_cb_info.jmp) == 0:
                fc.dvode(&dvode_f_cb_wrapper, &neq, <fwr_dbl_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &dvode_jac_cb_wrapper, &mf, <fwr_dbl_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_))
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
    return (neq, y_, t, tout, itol, rtol_, atol_, itask, istate, iopt, rwork_, lrw, iwork_, liw, jac, mf, rpar_, ipar_,)



cdef fw_CallbackInfo dvhin_f_cb_info
cdef int dvhin_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t1, fwr_dbl_t * y, fwr_dbl_t * temp, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    global dvhin_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, temp_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], temp_shape[1], rpar_shape[1], ipar_shape[1]
    info = dvhin_f_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        temp_shape[0] = TODO
        temp_ = np.PyArray_New(&np.PyArray_Type, 1, temp_shape, fwr_dbl_t_enum, NULL, <char*>temp, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_dbl_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            n[0], t1[0], y_ret, temp_ret, rpar_ret, ipar_ret = info.callback(n[0], t1[0], y_, temp_, rpar_, ipar_)
        else:
            n[0], t1[0], y_ret, temp_ret, rpar_ret, ipar_ret = info.callback(n[0], t1[0], y_, temp_, rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if temp_ is not temp_ret:
            temp_ = np.PyArray_FROMANY(temp_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if temp_shape[0] != np.PyArray_DIMS(temp_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(temp, np.PyArray_DATA(temp_), np.PyArray_NBYTES(temp_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        dvhin_f_cb_info = info
        return 0
    except:
        dvhin_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvhin_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t1, fwr_dbl_t * y, fwr_dbl_t * temp, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    if dvhin_f_cb_wrapper_core(n, t1, y, temp, rpar, ipar) != 0:
        longjmp(dvhin_f_cb_info.jmp, 1)


cpdef object dvhin(fwi_integer_t n, fwr_dbl_t t0, object y0, object ydot, object f, object rpar, object ipar, fwr_dbl_t tout, fwr_dbl_t uround, object ewt, fwi_integer_t itol, object atol, object y, object temp, fwr_dbl_t h0, fwi_integer_t niter, fwi_integer_t ier):
    """dvhin(n, t0, y0, ydot, f, rpar, ipar, tout, uround, ewt, itol, atol, y, temp, h0, niter, ier) -> (n, t0, y0, ydot, rpar, ipar, tout, uround, ewt, itol, atol, y, temp, h0, niter, ier)

    Parameters
    ----------
    n : fwi_integer, intent inout
    t0 : fwr_dbl, intent inout
    y0 : fwr_dbl, 1D array, dimension(*), intent inout
    ydot : fwr_dbl, 1D array, dimension(*), intent inout
    f : object, intent in
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout
    tout : fwr_dbl, intent inout
    uround : fwr_dbl, intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    itol : fwi_integer, intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    y : fwr_dbl, 1D array, dimension(*), intent inout
    temp : fwr_dbl, 1D array, dimension(*), intent inout
    h0 : fwr_dbl, intent inout
    niter : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    t0 : fwr_dbl, intent inout
    y0 : fwr_dbl, 1D array, dimension(*), intent inout
    ydot : fwr_dbl, 1D array, dimension(*), intent inout
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout
    tout : fwr_dbl, intent inout
    uround : fwr_dbl, intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    itol : fwi_integer, intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    y : fwr_dbl, 1D array, dimension(*), intent inout
    temp : fwr_dbl, 1D array, dimension(*), intent inout
    h0 : fwr_dbl, intent inout
    niter : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    global dvhin_f_cb_info
    cdef fw_CallbackInfo fw_f_cb
    cdef np.ndarray y0_, ydot_, rpar_, ipar_, ewt_, atol_, y_, temp_
    cdef np.npy_intp y0_shape[1], ydot_shape[1], rpar_shape[1], ipar_shape[1], ewt_shape[1], atol_shape[1], y_shape[1], temp_shape[1]
    y0_ = fw_asfortranarray(y0, fwr_dbl_t_enum, 1, y0_shape, False, False)
    ydot_ = fw_asfortranarray(ydot, fwr_dbl_t_enum, 1, ydot_shape, False, False)
    rpar_ = fw_asfortranarray(rpar, fwr_dbl_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    temp_ = fw_asfortranarray(temp, fwr_dbl_t_enum, 1, temp_shape, False, False)
    dvhin_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    try:
        if setjmp(dvhin_f_cb_info.jmp) == 0:
            fc.dvhin(&n, &t0, <fwr_dbl_t*>np.PyArray_DATA(y0_), <fwr_dbl_t*>np.PyArray_DATA(ydot_), &dvhin_f_cb_wrapper, <fwr_dbl_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_), &tout, &uround, <fwr_dbl_t*>np.PyArray_DATA(ewt_), &itol, <fwr_dbl_t*>np.PyArray_DATA(atol_), <fwr_dbl_t*>np.PyArray_DATA(y_), <fwr_dbl_t*>np.PyArray_DATA(temp_), &h0, &niter, &ier)
        else:
            fw_exctype, fw_excval, fw_exctb = dvhin_f_cb_info.exc
            dvhin_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        dvhin_f_cb_info = None
    return (n, t0, y0_, ydot_, rpar_, ipar_, tout, uround, ewt_, itol, atol_, y_, temp_, h0, niter, ier,)


cpdef object dvindy(fwr_dbl_t t, fwi_integer_t k, object yh, fwi_integer_t ldyh, object dky, fwi_integer_t iflag):
    """dvindy(t, k, yh, ldyh, dky, iflag) -> (t, k, yh, ldyh, dky, iflag)

    Parameters
    ----------
    t : fwr_dbl, intent inout
    k : fwi_integer, intent inout
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    dky : fwr_dbl, 1D array, dimension(*), intent inout
    iflag : fwi_integer, intent inout

    Returns
    -------
    t : fwr_dbl, intent inout
    k : fwi_integer, intent inout
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    dky : fwr_dbl, 1D array, dimension(*), intent inout
    iflag : fwi_integer, intent inout

    """
    cdef np.ndarray yh_, dky_
    cdef np.npy_intp yh_shape[2], dky_shape[1]
    yh_ = fw_asfortranarray(yh, fwr_dbl_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    dky_ = fw_asfortranarray(dky, fwr_dbl_t_enum, 1, dky_shape, False, False)
    fc.dvindy(&t, &k, <fwr_dbl_t*>np.PyArray_DATA(yh_), &ldyh, <fwr_dbl_t*>np.PyArray_DATA(dky_), &iflag)
    return (t, k, yh_, ldyh, dky_, iflag,)



cdef fw_CallbackInfo dvstep_f_cb_info
cdef int dvstep_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * tn, fwr_dbl_t * y, fwr_dbl_t * savf, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    global dvstep_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, savf_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], savf_shape[1], rpar_shape[1], ipar_shape[1]
    info = dvstep_f_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        savf_shape[0] = TODO
        savf_ = np.PyArray_New(&np.PyArray_Type, 1, savf_shape, fwr_dbl_t_enum, NULL, <char*>savf, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_dbl_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            n[0], tn[0], y_ret, savf_ret, rpar_ret, ipar_ret = info.callback(n[0], tn[0], y_, savf_, rpar_, ipar_)
        else:
            n[0], tn[0], y_ret, savf_ret, rpar_ret, ipar_ret = info.callback(n[0], tn[0], y_, savf_, rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if savf_ is not savf_ret:
            savf_ = np.PyArray_FROMANY(savf_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if savf_shape[0] != np.PyArray_DIMS(savf_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(savf, np.PyArray_DATA(savf_), np.PyArray_NBYTES(savf_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        dvstep_f_cb_info = info
        return 0
    except:
        dvstep_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvstep_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * tn, fwr_dbl_t * y, fwr_dbl_t * savf, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    if dvstep_f_cb_wrapper_core(n, tn, y, savf, rpar, ipar) != 0:
        longjmp(dvstep_f_cb_info.jmp, 1)



cdef fw_CallbackInfo dvstep_jac_cb_info
cdef int dvstep_jac_cb_wrapper_core():
    global dvstep_jac_cb_info;
    cdef fw_CallbackInfo info
    info = dvstep_jac_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        dvstep_jac_cb_info = info
        return 0
    except:
        dvstep_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvstep_jac_cb_wrapper():
    if dvstep_jac_cb_wrapper_core() != 0:
        longjmp(dvstep_jac_cb_info.jmp, 1)



cdef fw_CallbackInfo dvstep_psol_cb_info
cdef int dvstep_psol_cb_wrapper_core():
    global dvstep_psol_cb_info;
    cdef fw_CallbackInfo info
    info = dvstep_psol_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        dvstep_psol_cb_info = info
        return 0
    except:
        dvstep_psol_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvstep_psol_cb_wrapper():
    if dvstep_psol_cb_wrapper_core() != 0:
        longjmp(dvstep_psol_cb_info.jmp, 1)



cdef fw_CallbackInfo dvstep_vnls_cb_info
cdef int dvstep_vnls_cb_wrapper_core(fwr_dbl_t * y, fwr_dbl_t * yh, fwi_integer_t * ldyh, fwr_dbl_t * vsav, fwr_dbl_t * savf, fwr_dbl_t * ewt, fwr_dbl_t * acor, fwi_integer_t * iwm, fwr_dbl_t * wm, fwr_real_t * f, fwi_integer_t * jac, fwr_real_t * psol, fwi_integer_t * nflag, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    global dvstep_vnls_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, yh_, vsav_, savf_, ewt_, acor_, iwm_, wm_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], yh_shape[2], vsav_shape[1], savf_shape[1], ewt_shape[1], acor_shape[1], iwm_shape[1], wm_shape[1], rpar_shape[1], ipar_shape[1]
    info = dvstep_vnls_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        yh_shape[0] = ldyh[0]; yh_shape[1] = TODO
        yh_ = np.PyArray_New(&np.PyArray_Type, 2, yh_shape, fwr_dbl_t_enum, NULL, <char*>yh, 0, np.NPY_FARRAY, NULL)
        vsav_shape[0] = TODO
        vsav_ = np.PyArray_New(&np.PyArray_Type, 1, vsav_shape, fwr_dbl_t_enum, NULL, <char*>vsav, 0, np.NPY_FARRAY, NULL)
        savf_shape[0] = TODO
        savf_ = np.PyArray_New(&np.PyArray_Type, 1, savf_shape, fwr_dbl_t_enum, NULL, <char*>savf, 0, np.NPY_FARRAY, NULL)
        ewt_shape[0] = TODO
        ewt_ = np.PyArray_New(&np.PyArray_Type, 1, ewt_shape, fwr_dbl_t_enum, NULL, <char*>ewt, 0, np.NPY_FARRAY, NULL)
        acor_shape[0] = TODO
        acor_ = np.PyArray_New(&np.PyArray_Type, 1, acor_shape, fwr_dbl_t_enum, NULL, <char*>acor, 0, np.NPY_FARRAY, NULL)
        iwm_shape[0] = TODO
        iwm_ = np.PyArray_New(&np.PyArray_Type, 1, iwm_shape, fwi_integer_t_enum, NULL, <char*>iwm, 0, np.NPY_FARRAY, NULL)
        wm_shape[0] = TODO
        wm_ = np.PyArray_New(&np.PyArray_Type, 1, wm_shape, fwr_dbl_t_enum, NULL, <char*>wm, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_dbl_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            y_ret, yh_ret, ldyh[0], vsav_ret, savf_ret, ewt_ret, acor_ret, iwm_ret, wm_ret, f[0], jac[0], psol[0], nflag[0], rpar_ret, ipar_ret = info.callback(y_, yh_, ldyh[0], vsav_, savf_, ewt_, acor_, iwm_, wm_, f[0], jac[0], psol[0], nflag[0], rpar_, ipar_)
        else:
            y_ret, yh_ret, ldyh[0], vsav_ret, savf_ret, ewt_ret, acor_ret, iwm_ret, wm_ret, f[0], jac[0], psol[0], nflag[0], rpar_ret, ipar_ret = info.callback(y_, yh_, ldyh[0], vsav_, savf_, ewt_, acor_, iwm_, wm_, f[0], jac[0], psol[0], nflag[0], rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if yh_ is not yh_ret:
            yh_ = np.PyArray_FROMANY(yh_ret, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
            if yh_shape[0] != np.PyArray_DIMS(yh_)[0] or yh_shape[1] != np.PyArray_DIMS(yh_)[1]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(yh, np.PyArray_DATA(yh_), np.PyArray_NBYTES(yh_))
        if vsav_ is not vsav_ret:
            vsav_ = np.PyArray_FROMANY(vsav_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if vsav_shape[0] != np.PyArray_DIMS(vsav_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(vsav, np.PyArray_DATA(vsav_), np.PyArray_NBYTES(vsav_))
        if savf_ is not savf_ret:
            savf_ = np.PyArray_FROMANY(savf_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if savf_shape[0] != np.PyArray_DIMS(savf_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(savf, np.PyArray_DATA(savf_), np.PyArray_NBYTES(savf_))
        if ewt_ is not ewt_ret:
            ewt_ = np.PyArray_FROMANY(ewt_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ewt_shape[0] != np.PyArray_DIMS(ewt_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ewt, np.PyArray_DATA(ewt_), np.PyArray_NBYTES(ewt_))
        if acor_ is not acor_ret:
            acor_ = np.PyArray_FROMANY(acor_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if acor_shape[0] != np.PyArray_DIMS(acor_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(acor, np.PyArray_DATA(acor_), np.PyArray_NBYTES(acor_))
        if iwm_ is not iwm_ret:
            iwm_ = np.PyArray_FROMANY(iwm_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if iwm_shape[0] != np.PyArray_DIMS(iwm_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(iwm, np.PyArray_DATA(iwm_), np.PyArray_NBYTES(iwm_))
        if wm_ is not wm_ret:
            wm_ = np.PyArray_FROMANY(wm_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if wm_shape[0] != np.PyArray_DIMS(wm_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(wm, np.PyArray_DATA(wm_), np.PyArray_NBYTES(wm_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        dvstep_vnls_cb_info = info
        return 0
    except:
        dvstep_vnls_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvstep_vnls_cb_wrapper(fwr_dbl_t * y, fwr_dbl_t * yh, fwi_integer_t * ldyh, fwr_dbl_t * vsav, fwr_dbl_t * savf, fwr_dbl_t * ewt, fwr_dbl_t * acor, fwi_integer_t * iwm, fwr_dbl_t * wm, fwr_real_t * f, fwi_integer_t * jac, fwr_real_t * psol, fwi_integer_t * nflag, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    if dvstep_vnls_cb_wrapper_core(y, yh, ldyh, vsav, savf, ewt, acor, iwm, wm, f, jac, psol, nflag, rpar, ipar) != 0:
        longjmp(dvstep_vnls_cb_info.jmp, 1)


cpdef object dvstep(object y, object yh, fwi_integer_t ldyh, object yh1, object ewt, object savf, object vsav, object acor, object wm, object iwm, object f, object jac, object psol, object vnls, object rpar, object ipar):
    """dvstep(y, yh, ldyh, yh1, ewt, savf, vsav, acor, wm, iwm, f, jac, psol, vnls, rpar, ipar) -> (y, yh, ldyh, yh1, ewt, savf, vsav, acor, wm, iwm, jac, psol, rpar, ipar)

    Parameters
    ----------
    y : fwr_dbl, 1D array, dimension(*), intent inout
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    yh1 : fwr_dbl, 1D array, dimension(*), intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    savf : fwr_dbl, 1D array, dimension(*), intent inout
    vsav : fwr_dbl, 1D array, dimension(*), intent inout
    acor : fwr_dbl, 1D array, dimension(*), intent inout
    wm : fwr_dbl, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    f : object, intent in
    jac : object
    psol : object
    vnls : object, intent in
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    y : fwr_dbl, 1D array, dimension(*), intent inout
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    yh1 : fwr_dbl, 1D array, dimension(*), intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    savf : fwr_dbl, 1D array, dimension(*), intent inout
    vsav : fwr_dbl, 1D array, dimension(*), intent inout
    acor : fwr_dbl, 1D array, dimension(*), intent inout
    wm : fwr_dbl, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    jac : object
    psol : object
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    """
    global dvstep_f_cb_info, dvstep_jac_cb_info, dvstep_psol_cb_info, dvstep_vnls_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb, fw_psol_cb, fw_vnls_cb
    cdef np.ndarray y_, yh_, yh1_, ewt_, savf_, vsav_, acor_, wm_, iwm_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], yh_shape[2], yh1_shape[1], ewt_shape[1], savf_shape[1], vsav_shape[1], acor_shape[1], wm_shape[1], iwm_shape[1], rpar_shape[1], ipar_shape[1]
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    yh_ = fw_asfortranarray(yh, fwr_dbl_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    yh1_ = fw_asfortranarray(yh1, fwr_dbl_t_enum, 1, yh1_shape, False, False)
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    savf_ = fw_asfortranarray(savf, fwr_dbl_t_enum, 1, savf_shape, False, False)
    vsav_ = fw_asfortranarray(vsav, fwr_dbl_t_enum, 1, vsav_shape, False, False)
    acor_ = fw_asfortranarray(acor, fwr_dbl_t_enum, 1, acor_shape, False, False)
    wm_ = fw_asfortranarray(wm, fwr_dbl_t_enum, 1, wm_shape, False, False)
    iwm_ = fw_asfortranarray(iwm, fwi_integer_t_enum, 1, iwm_shape, False, False)
    rpar_ = fw_asfortranarray(rpar, fwr_dbl_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    dvstep_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    dvstep_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, None)
    dvstep_psol_cb_info = fw_psol_cb = fw_CallbackInfo(psol, None)
    dvstep_vnls_cb_info = fw_vnls_cb = fw_CallbackInfo(vnls, None)
    try:
        if setjmp(dvstep_f_cb_info.jmp) == 0:
            if setjmp(dvstep_jac_cb_info.jmp) == 0:
                if setjmp(dvstep_psol_cb_info.jmp) == 0:
                    if setjmp(dvstep_vnls_cb_info.jmp) == 0:
                        fc.dvstep(<fwr_dbl_t*>np.PyArray_DATA(y_), <fwr_dbl_t*>np.PyArray_DATA(yh_), &ldyh, <fwr_dbl_t*>np.PyArray_DATA(yh1_), <fwr_dbl_t*>np.PyArray_DATA(ewt_), <fwr_dbl_t*>np.PyArray_DATA(savf_), <fwr_dbl_t*>np.PyArray_DATA(vsav_), <fwr_dbl_t*>np.PyArray_DATA(acor_), <fwr_dbl_t*>np.PyArray_DATA(wm_), <fwi_integer_t*>np.PyArray_DATA(iwm_), &dvstep_f_cb_wrapper, &dvstep_jac_cb_wrapper, &dvstep_psol_cb_wrapper, &dvstep_vnls_cb_wrapper, <fwr_dbl_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_))
                    else:
                        fw_exctype, fw_excval, fw_exctb = dvstep_vnls_cb_info.exc
                        dvstep_vnls_cb_info.exc = None
                        raise fw_exctype, fw_excval, fw_exctb
                else:
                    fw_exctype, fw_excval, fw_exctb = dvstep_psol_cb_info.exc
                    dvstep_psol_cb_info.exc = None
                    raise fw_exctype, fw_excval, fw_exctb
            else:
                fw_exctype, fw_excval, fw_exctb = dvstep_jac_cb_info.exc
                dvstep_jac_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = dvstep_f_cb_info.exc
            dvstep_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        dvstep_f_cb_info = None
    return (y_, yh_, ldyh, yh1_, ewt_, savf_, vsav_, acor_, wm_, iwm_, jac, psol, rpar_, ipar_,)


cpdef object dvset():
    """dvset()

    Parameters
    ----------
    None

    """
    fc.dvset()


cpdef object dvjust(object yh, fwi_integer_t ldyh, fwi_integer_t iord):
    """dvjust(yh, ldyh, iord) -> (yh, ldyh, iord)

    Parameters
    ----------
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    iord : fwi_integer, intent inout

    Returns
    -------
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    iord : fwi_integer, intent inout

    """
    cdef np.ndarray yh_
    cdef np.npy_intp yh_shape[2]
    yh_ = fw_asfortranarray(yh, fwr_dbl_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    fc.dvjust(<fwr_dbl_t*>np.PyArray_DATA(yh_), &ldyh, &iord)
    return (yh_, ldyh, iord,)



cdef fw_CallbackInfo dvnlsd_f_cb_info
cdef int dvnlsd_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * tn, fwr_dbl_t * y, fwr_dbl_t * savf, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    global dvnlsd_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, savf_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], savf_shape[1], rpar_shape[1], ipar_shape[1]
    info = dvnlsd_f_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        savf_shape[0] = TODO
        savf_ = np.PyArray_New(&np.PyArray_Type, 1, savf_shape, fwr_dbl_t_enum, NULL, <char*>savf, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_dbl_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            n[0], tn[0], y_ret, savf_ret, rpar_ret, ipar_ret = info.callback(n[0], tn[0], y_, savf_, rpar_, ipar_)
        else:
            n[0], tn[0], y_ret, savf_ret, rpar_ret, ipar_ret = info.callback(n[0], tn[0], y_, savf_, rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if savf_ is not savf_ret:
            savf_ = np.PyArray_FROMANY(savf_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if savf_shape[0] != np.PyArray_DIMS(savf_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(savf, np.PyArray_DATA(savf_), np.PyArray_NBYTES(savf_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        dvnlsd_f_cb_info = info
        return 0
    except:
        dvnlsd_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvnlsd_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * tn, fwr_dbl_t * y, fwr_dbl_t * savf, fwr_dbl_t * rpar, fwi_integer_t * ipar):
    if dvnlsd_f_cb_wrapper_core(n, tn, y, savf, rpar, ipar) != 0:
        longjmp(dvnlsd_f_cb_info.jmp, 1)



cdef fw_CallbackInfo dvnlsd_jac_cb_info
cdef int dvnlsd_jac_cb_wrapper_core():
    global dvnlsd_jac_cb_info;
    cdef fw_CallbackInfo info
    info = dvnlsd_jac_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        dvnlsd_jac_cb_info = info
        return 0
    except:
        dvnlsd_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvnlsd_jac_cb_wrapper():
    if dvnlsd_jac_cb_wrapper_core() != 0:
        longjmp(dvnlsd_jac_cb_info.jmp, 1)



cdef fw_CallbackInfo dvnlsd_pdum_cb_info
cdef int dvnlsd_pdum_cb_wrapper_core():
    global dvnlsd_pdum_cb_info;
    cdef fw_CallbackInfo info
    info = dvnlsd_pdum_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        dvnlsd_pdum_cb_info = info
        return 0
    except:
        dvnlsd_pdum_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvnlsd_pdum_cb_wrapper():
    if dvnlsd_pdum_cb_wrapper_core() != 0:
        longjmp(dvnlsd_pdum_cb_info.jmp, 1)


cpdef object dvnlsd(object y, object yh, fwi_integer_t ldyh, object vsav, object savf, object ewt, object acor, object iwm, object wm, object f, object jac, object pdum, fwi_integer_t nflag, object rpar, object ipar):
    """dvnlsd(y, yh, ldyh, vsav, savf, ewt, acor, iwm, wm, f, jac, pdum, nflag, rpar, ipar) -> (y, yh, ldyh, vsav, savf, ewt, acor, iwm, wm, jac, pdum, nflag, rpar, ipar)

    Parameters
    ----------
    y : fwr_dbl, 1D array, dimension(*), intent inout
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    vsav : fwr_dbl, 1D array, dimension(*), intent inout
    savf : fwr_dbl, 1D array, dimension(*), intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    acor : fwr_dbl, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    wm : fwr_dbl, 1D array, dimension(*), intent inout
    f : object, intent in
    jac : object
    pdum : object
    nflag : fwi_integer, intent inout
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    y : fwr_dbl, 1D array, dimension(*), intent inout
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    vsav : fwr_dbl, 1D array, dimension(*), intent inout
    savf : fwr_dbl, 1D array, dimension(*), intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    acor : fwr_dbl, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    wm : fwr_dbl, 1D array, dimension(*), intent inout
    jac : object
    pdum : object
    nflag : fwi_integer, intent inout
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    """
    global dvnlsd_f_cb_info, dvnlsd_jac_cb_info, dvnlsd_pdum_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb, fw_pdum_cb
    cdef np.ndarray y_, yh_, vsav_, savf_, ewt_, acor_, iwm_, wm_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], yh_shape[2], vsav_shape[1], savf_shape[1], ewt_shape[1], acor_shape[1], iwm_shape[1], wm_shape[1], rpar_shape[1], ipar_shape[1]
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    yh_ = fw_asfortranarray(yh, fwr_dbl_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    vsav_ = fw_asfortranarray(vsav, fwr_dbl_t_enum, 1, vsav_shape, False, False)
    savf_ = fw_asfortranarray(savf, fwr_dbl_t_enum, 1, savf_shape, False, False)
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    acor_ = fw_asfortranarray(acor, fwr_dbl_t_enum, 1, acor_shape, False, False)
    iwm_ = fw_asfortranarray(iwm, fwi_integer_t_enum, 1, iwm_shape, False, False)
    wm_ = fw_asfortranarray(wm, fwr_dbl_t_enum, 1, wm_shape, False, False)
    rpar_ = fw_asfortranarray(rpar, fwr_dbl_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    dvnlsd_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    dvnlsd_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, None)
    dvnlsd_pdum_cb_info = fw_pdum_cb = fw_CallbackInfo(pdum, None)
    try:
        if setjmp(dvnlsd_f_cb_info.jmp) == 0:
            if setjmp(dvnlsd_jac_cb_info.jmp) == 0:
                if setjmp(dvnlsd_pdum_cb_info.jmp) == 0:
                    fc.dvnlsd(<fwr_dbl_t*>np.PyArray_DATA(y_), <fwr_dbl_t*>np.PyArray_DATA(yh_), &ldyh, <fwr_dbl_t*>np.PyArray_DATA(vsav_), <fwr_dbl_t*>np.PyArray_DATA(savf_), <fwr_dbl_t*>np.PyArray_DATA(ewt_), <fwr_dbl_t*>np.PyArray_DATA(acor_), <fwi_integer_t*>np.PyArray_DATA(iwm_), <fwr_dbl_t*>np.PyArray_DATA(wm_), &dvnlsd_f_cb_wrapper, &dvnlsd_jac_cb_wrapper, &dvnlsd_pdum_cb_wrapper, &nflag, <fwr_dbl_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_))
                else:
                    fw_exctype, fw_excval, fw_exctb = dvnlsd_pdum_cb_info.exc
                    dvnlsd_pdum_cb_info.exc = None
                    raise fw_exctype, fw_excval, fw_exctb
            else:
                fw_exctype, fw_excval, fw_exctb = dvnlsd_jac_cb_info.exc
                dvnlsd_jac_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = dvnlsd_f_cb_info.exc
            dvnlsd_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        dvnlsd_f_cb_info = None
    return (y_, yh_, ldyh, vsav_, savf_, ewt_, acor_, iwm_, wm_, jac, pdum, nflag, rpar_, ipar_,)



cdef fw_CallbackInfo dvjac_f_cb_info
cdef int dvjac_f_cb_wrapper_core():
    global dvjac_f_cb_info;
    cdef fw_CallbackInfo info
    info = dvjac_f_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        dvjac_f_cb_info = info
        return 0
    except:
        dvjac_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvjac_f_cb_wrapper():
    if dvjac_f_cb_wrapper_core() != 0:
        longjmp(dvjac_f_cb_info.jmp, 1)



cdef fw_CallbackInfo dvjac_jac_cb_info
cdef int dvjac_jac_cb_wrapper_core():
    global dvjac_jac_cb_info;
    cdef fw_CallbackInfo info
    info = dvjac_jac_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        dvjac_jac_cb_info = info
        return 0
    except:
        dvjac_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void dvjac_jac_cb_wrapper():
    if dvjac_jac_cb_wrapper_core() != 0:
        longjmp(dvjac_jac_cb_info.jmp, 1)


cpdef object dvjac(object y, object yh, fwi_integer_t ldyh, object ewt, object ftem, object savf, object wm, object iwm, object f, object jac, fwi_integer_t ierpj, object rpar, object ipar):
    """dvjac(y, yh, ldyh, ewt, ftem, savf, wm, iwm, f, jac, ierpj, rpar, ipar) -> (y, yh, ldyh, ewt, ftem, savf, wm, iwm, f, jac, ierpj, rpar, ipar)

    Parameters
    ----------
    y : fwr_dbl, 1D array, dimension(*), intent inout
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    ftem : fwr_dbl, 1D array, dimension(*), intent inout
    savf : fwr_dbl, 1D array, dimension(*), intent inout
    wm : fwr_dbl, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    f : object
    jac : object
    ierpj : fwi_integer, intent inout
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    y : fwr_dbl, 1D array, dimension(*), intent inout
    yh : fwr_dbl, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    ftem : fwr_dbl, 1D array, dimension(*), intent inout
    savf : fwr_dbl, 1D array, dimension(*), intent inout
    wm : fwr_dbl, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    f : object
    jac : object
    ierpj : fwi_integer, intent inout
    rpar : fwr_dbl, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    """
    global dvjac_f_cb_info, dvjac_jac_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb
    cdef np.ndarray y_, yh_, ewt_, ftem_, savf_, wm_, iwm_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], yh_shape[2], ewt_shape[1], ftem_shape[1], savf_shape[1], wm_shape[1], iwm_shape[1], rpar_shape[1], ipar_shape[1]
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    yh_ = fw_asfortranarray(yh, fwr_dbl_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    ftem_ = fw_asfortranarray(ftem, fwr_dbl_t_enum, 1, ftem_shape, False, False)
    savf_ = fw_asfortranarray(savf, fwr_dbl_t_enum, 1, savf_shape, False, False)
    wm_ = fw_asfortranarray(wm, fwr_dbl_t_enum, 1, wm_shape, False, False)
    iwm_ = fw_asfortranarray(iwm, fwi_integer_t_enum, 1, iwm_shape, False, False)
    rpar_ = fw_asfortranarray(rpar, fwr_dbl_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    dvjac_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    dvjac_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, None)
    try:
        if setjmp(dvjac_f_cb_info.jmp) == 0:
            if setjmp(dvjac_jac_cb_info.jmp) == 0:
                fc.dvjac(<fwr_dbl_t*>np.PyArray_DATA(y_), <fwr_dbl_t*>np.PyArray_DATA(yh_), &ldyh, <fwr_dbl_t*>np.PyArray_DATA(ewt_), <fwr_dbl_t*>np.PyArray_DATA(ftem_), <fwr_dbl_t*>np.PyArray_DATA(savf_), <fwr_dbl_t*>np.PyArray_DATA(wm_), <fwi_integer_t*>np.PyArray_DATA(iwm_), &dvjac_f_cb_wrapper, &dvjac_jac_cb_wrapper, &ierpj, <fwr_dbl_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_))
            else:
                fw_exctype, fw_excval, fw_exctb = dvjac_jac_cb_info.exc
                dvjac_jac_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = dvjac_f_cb_info.exc
            dvjac_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        dvjac_f_cb_info = None
    return (y_, yh_, ldyh, ewt_, ftem_, savf_, wm_, iwm_, f, jac, ierpj, rpar_, ipar_,)


cpdef object dacopy(fwi_integer_t nrow, fwi_integer_t ncol, object a, fwi_integer_t nrowa, object b, fwi_integer_t nrowb):
    """dacopy(nrow, ncol, a, nrowa, b, nrowb) -> (nrow, ncol, a, nrowa, b, nrowb)

    Parameters
    ----------
    nrow : fwi_integer, intent inout
    ncol : fwi_integer, intent inout
    a : fwr_dbl, 2D array, dimension(nrowa, ncol), intent inout
    nrowa : fwi_integer, intent inout
    b : fwr_dbl, 2D array, dimension(nrowb, ncol), intent inout
    nrowb : fwi_integer, intent inout

    Returns
    -------
    nrow : fwi_integer, intent inout
    ncol : fwi_integer, intent inout
    a : fwr_dbl, 2D array, dimension(nrowa, ncol), intent inout
    nrowa : fwi_integer, intent inout
    b : fwr_dbl, 2D array, dimension(nrowb, ncol), intent inout
    nrowb : fwi_integer, intent inout

    """
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, False, False)
    if nrowa != a_shape[0]:
        raise ValueError("(nrowa == a.shape[0]) not satisifed")
    if not (0 <= ncol <= a_shape[1]):
        raise ValueError("(0 <= ncol <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, False, False)
    if nrowb != b_shape[0]:
        raise ValueError("(nrowb == b.shape[0]) not satisifed")
    if not (0 <= ncol <= b_shape[1]):
        raise ValueError("(0 <= ncol <= b.shape[1]) not satisifed")
    fc.dacopy(&nrow, &ncol, <fwr_dbl_t*>np.PyArray_DATA(a_), &nrowa, <fwr_dbl_t*>np.PyArray_DATA(b_), &nrowb)
    return (nrow, ncol, a_, nrowa, b_, nrowb,)


cpdef object dvsol(object wm, object iwm, object x, fwi_integer_t iersl):
    """dvsol(wm, iwm, x, iersl) -> (wm, iwm, x, iersl)

    Parameters
    ----------
    wm : fwr_dbl, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    x : fwr_dbl, 1D array, dimension(*), intent inout
    iersl : fwi_integer, intent inout

    Returns
    -------
    wm : fwr_dbl, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    x : fwr_dbl, 1D array, dimension(*), intent inout
    iersl : fwi_integer, intent inout

    """
    cdef np.ndarray wm_, iwm_, x_
    cdef np.npy_intp wm_shape[1], iwm_shape[1], x_shape[1]
    wm_ = fw_asfortranarray(wm, fwr_dbl_t_enum, 1, wm_shape, False, False)
    iwm_ = fw_asfortranarray(iwm, fwi_integer_t_enum, 1, iwm_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    fc.dvsol(<fwr_dbl_t*>np.PyArray_DATA(wm_), <fwi_integer_t*>np.PyArray_DATA(iwm_), <fwr_dbl_t*>np.PyArray_DATA(x_), &iersl)
    return (wm_, iwm_, x_, iersl,)


cpdef object dvsrco(object rsav, object isav, fwi_integer_t job):
    """dvsrco(rsav, isav, job) -> (rsav, isav, job)

    Parameters
    ----------
    rsav : fwr_dbl, 1D array, dimension(*), intent inout
    isav : fwi_integer, 1D array, dimension(*), intent inout
    job : fwi_integer, intent inout

    Returns
    -------
    rsav : fwr_dbl, 1D array, dimension(*), intent inout
    isav : fwi_integer, 1D array, dimension(*), intent inout
    job : fwi_integer, intent inout

    """
    cdef np.ndarray rsav_, isav_
    cdef np.npy_intp rsav_shape[1], isav_shape[1]
    rsav_ = fw_asfortranarray(rsav, fwr_dbl_t_enum, 1, rsav_shape, False, False)
    isav_ = fw_asfortranarray(isav, fwi_integer_t_enum, 1, isav_shape, False, False)
    fc.dvsrco(<fwr_dbl_t*>np.PyArray_DATA(rsav_), <fwi_integer_t*>np.PyArray_DATA(isav_), &job)
    return (rsav_, isav_, job,)


cpdef object dewset(fwi_integer_t n, fwi_integer_t itol, object rtol, object atol, object ycur, object ewt):
    """dewset(n, itol, rtol, atol, ycur, ewt) -> (n, itol, rtol, atol, ycur, ewt)

    Parameters
    ----------
    n : fwi_integer, intent inout
    itol : fwi_integer, intent inout
    rtol : fwr_dbl, 1D array, dimension(*), intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    ycur : fwr_dbl, 1D array, dimension(n), intent inout
    ewt : fwr_dbl, 1D array, dimension(n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    itol : fwi_integer, intent inout
    rtol : fwr_dbl, 1D array, dimension(*), intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    ycur : fwr_dbl, 1D array, dimension(n), intent inout
    ewt : fwr_dbl, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray rtol_, atol_, ycur_, ewt_
    cdef np.npy_intp rtol_shape[1], atol_shape[1], ycur_shape[1], ewt_shape[1]
    rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    ycur_ = fw_asfortranarray(ycur, fwr_dbl_t_enum, 1, ycur_shape, False, False)
    if not (0 <= n <= ycur_shape[0]):
        raise ValueError("(0 <= n <= ycur.shape[0]) not satisifed")
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    if not (0 <= n <= ewt_shape[0]):
        raise ValueError("(0 <= n <= ewt.shape[0]) not satisifed")
    fc.dewset(&n, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), <fwr_dbl_t*>np.PyArray_DATA(ycur_), <fwr_dbl_t*>np.PyArray_DATA(ewt_))
    return (n, itol, rtol_, atol_, ycur_, ewt_,)


cpdef object dvnorm(fwi_integer_t n, object v, object w):
    """dvnorm(n, v, w) -> (fw_ret_arg, n, v, w)

    Parameters
    ----------
    n : fwi_integer, intent inout
    v : fwr_dbl, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    n : fwi_integer, intent inout
    v : fwr_dbl, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    """
    cdef fwr_dbl_t fw_ret_arg
    cdef np.ndarray v_, w_
    cdef np.npy_intp v_shape[1], w_shape[1]
    v_ = fw_asfortranarray(v, fwr_dbl_t_enum, 1, v_shape, False, False)
    if not (0 <= n <= v_shape[0]):
        raise ValueError("(0 <= n <= v.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, False)
    if not (0 <= n <= w_shape[0]):
        raise ValueError("(0 <= n <= w.shape[0]) not satisifed")
    fw_ret_arg = fc.dvnorm(&n, <fwr_dbl_t*>np.PyArray_DATA(v_), <fwr_dbl_t*>np.PyArray_DATA(w_))
    return (fw_ret_arg, n, v_, w_,)


cpdef object d1mach(fwi_integer_t idum):
    """d1mach(idum) -> (fw_ret_arg, idum)

    Parameters
    ----------
    idum : fwi_integer, intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    idum : fwi_integer, intent inout

    """
    cdef fwr_dbl_t fw_ret_arg
    fw_ret_arg = fc.d1mach(&idum)
    return (fw_ret_arg, idum,)


cpdef object xerrwd(object msg, fwi_integer_t nmes, fwi_integer_t nerr, fwi_integer_t level, fwi_integer_t ni, fwi_integer_t i1, fwi_integer_t i2, fwi_integer_t nr, fwr_dbl_t r1, fwr_dbl_t r2):
    """xerrwd(msg, nmes, nerr, level, ni, i1, i2, nr, r1, r2) -> (msg, nmes, nerr, level, ni, i1, i2, nr, r1, r2)

    Parameters
    ----------
    msg : fw_character_x1, len 1, 1D array, dimension(nmes), intent inout
    nmes : fwi_integer, intent inout
    nerr : fwi_integer, intent inout
    level : fwi_integer, intent inout
    ni : fwi_integer, intent inout
    i1 : fwi_integer, intent inout
    i2 : fwi_integer, intent inout
    nr : fwi_integer, intent inout
    r1 : fwr_dbl, intent inout
    r2 : fwr_dbl, intent inout

    Returns
    -------
    msg : fw_character_x1, len 1, 1D array, dimension(nmes), intent inout
    nmes : fwi_integer, intent inout
    nerr : fwi_integer, intent inout
    level : fwi_integer, intent inout
    ni : fwi_integer, intent inout
    i1 : fwi_integer, intent inout
    i2 : fwi_integer, intent inout
    nr : fwi_integer, intent inout
    r1 : fwr_dbl, intent inout
    r2 : fwr_dbl, intent inout

    """
    cdef fw_shape_t msg__shape[2]
    cdef np.ndarray msg_
    cdef np.npy_intp msg__shape[1]
    msg_ = fw_asfortranarray(msg, fw_character_x1_t_enum, 1, msg__shape, False, False)
    if not (0 <= nmes <= msg__shape[0]):
        raise ValueError("(0 <= nmes <= msg.shape[0]) not satisifed")
    msg__odtype = msg.dtype
    for i in range(1): msg__shape[i+1] = msg.shape[i]
    msg.dtype = 'b'
    msg_ = msg
    msg__shape[0] = <fw_shape_t>(msg.shape[0]/msg__shape[1])
    fc.xerrwd(&msg__shape[0], &msg__shape[1], <fw_character_x1_t*>msg_.data, &nmes, &nerr, &level, &ni, &i1, &i2, &nr, &r1, &r2)
    try:
    finally:
        msg.dtype = msg__odtype
    return (msg_, nmes, nerr, level, ni, i1, i2, nr, r1, r2,)


cpdef object xsetun(fwi_integer_t lun):
    """xsetun(lun) -> lun

    Parameters
    ----------
    lun : fwi_integer, intent inout

    Returns
    -------
    lun : fwi_integer, intent inout

    """
    fc.xsetun(&lun)
    return lun


cpdef object xsetf(fwi_integer_t mflag):
    """xsetf(mflag) -> mflag

    Parameters
    ----------
    mflag : fwi_integer, intent inout

    Returns
    -------
    mflag : fwi_integer, intent inout

    """
    fc.xsetf(&mflag)
    return mflag


cpdef object ixsav(fwi_integer_t ipar, fwi_integer_t ivalue, bint iset):
    """ixsav(ipar, ivalue, iset) -> (fw_ret_arg, ipar, ivalue, iset)

    Parameters
    ----------
    ipar : fwi_integer, intent inout
    ivalue : fwi_integer, intent inout
    iset : fwl_logical, intent inout

    Returns
    -------
    fw_ret_arg : fwi_integer, intent out
    ipar : fwi_integer, intent inout
    ivalue : fwi_integer, intent inout
    iset : fwl_logical, intent inout

    """
    cdef fwi_integer_t fw_ret_arg
    cdef fwl_logical_t iset_
    iset_ = 1 if iset else 0
    fw_ret_arg = fc.ixsav(&ipar, &ivalue, &iset_)
    return (fw_ret_arg, ipar, ivalue, iset_,)



cdef fw_CallbackInfo zvode_f_cb_info
cdef int zvode_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwr_real_t * arg3, fwr_real_t * rpar, fwi_integer_t * ipar):
    global zvode_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], rpar_shape[1], ipar_shape[1]
    info = zvode_f_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_real_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            n[0], t[0], y_ret, arg3[0], rpar_ret, ipar_ret = info.callback(n[0], t[0], y_, arg3[0], rpar_, ipar_)
        else:
            n[0], t[0], y_ret, arg3[0], rpar_ret, ipar_ret = info.callback(n[0], t[0], y_, arg3[0], rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_real_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        zvode_f_cb_info = info
        return 0
    except:
        zvode_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwr_real_t * arg3, fwr_real_t * rpar, fwi_integer_t * ipar):
    if zvode_f_cb_wrapper_core(n, t, y, arg3, rpar, ipar) != 0:
        longjmp(zvode_f_cb_info.jmp, 1)



cdef fw_CallbackInfo zvode_jac_cb_info
cdef int zvode_jac_cb_wrapper_core():
    global zvode_jac_cb_info;
    cdef fw_CallbackInfo info
    info = zvode_jac_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        zvode_jac_cb_info = info
        return 0
    except:
        zvode_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvode_jac_cb_wrapper():
    if zvode_jac_cb_wrapper_core() != 0:
        longjmp(zvode_jac_cb_info.jmp, 1)


cpdef object zvode(object f, fwi_integer_t neq, object y, fwr_dbl_t t, fwr_dbl_t tout, fwi_integer_t itol, object rtol, object atol, fwi_integer_t itask, fwi_integer_t istate, fwi_integer_t iopt, object zwork, fwi_integer_t lzw, object rwork, fwi_integer_t lrw, object iwork, fwi_integer_t liw, object jac, fwi_integer_t mf, object rpar, object ipar):
    """zvode(f, neq, y, t, tout, itol, rtol, atol, itask, istate, iopt, zwork, lzw, rwork, lrw, iwork, liw, jac, mf, rpar, ipar) -> (neq, y, t, tout, itol, rtol, atol, itask, istate, iopt, zwork, lzw, rwork, lrw, iwork, liw, jac, mf, rpar, ipar)

    Parameters
    ----------
    f : object, intent in
    neq : fwi_integer, intent inout
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    t : fwr_dbl, intent inout
    tout : fwr_dbl, intent inout
    itol : fwi_integer, intent inout
    rtol : fwr_dbl, 1D array, dimension(*), intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    itask : fwi_integer, intent inout
    istate : fwi_integer, intent inout
    iopt : fwi_integer, intent inout
    zwork : fwc_dbl_complex, 1D array, dimension(lzw), intent inout
    lzw : fwi_integer, intent inout
    rwork : fwr_dbl, 1D array, dimension(lrw), intent inout
    lrw : fwi_integer, intent inout
    iwork : fwi_integer, 1D array, dimension(liw), intent inout
    liw : fwi_integer, intent inout
    jac : object
    mf : fwi_integer, intent inout
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    neq : fwi_integer, intent inout
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    t : fwr_dbl, intent inout
    tout : fwr_dbl, intent inout
    itol : fwi_integer, intent inout
    rtol : fwr_dbl, 1D array, dimension(*), intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    itask : fwi_integer, intent inout
    istate : fwi_integer, intent inout
    iopt : fwi_integer, intent inout
    zwork : fwc_dbl_complex, 1D array, dimension(lzw), intent inout
    lzw : fwi_integer, intent inout
    rwork : fwr_dbl, 1D array, dimension(lrw), intent inout
    lrw : fwi_integer, intent inout
    iwork : fwi_integer, 1D array, dimension(liw), intent inout
    liw : fwi_integer, intent inout
    jac : object
    mf : fwi_integer, intent inout
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    """
    global zvode_f_cb_info, zvode_jac_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb
    cdef np.ndarray y_, rtol_, atol_, zwork_, rwork_, iwork_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], zwork_shape[1], rwork_shape[1], iwork_shape[1], rpar_shape[1], ipar_shape[1]
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    zwork_ = fw_asfortranarray(zwork, fwc_dbl_complex_t_enum, 1, zwork_shape, False, False)
    if not (0 <= lzw <= zwork_shape[0]):
        raise ValueError("(0 <= lzw <= zwork.shape[0]) not satisifed")
    rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
    if not (0 <= lrw <= rwork_shape[0]):
        raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
    iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
    if not (0 <= liw <= iwork_shape[0]):
        raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
    rpar_ = fw_asfortranarray(rpar, fwr_real_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    zvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    zvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, None)
    try:
        if setjmp(zvode_f_cb_info.jmp) == 0:
            if setjmp(zvode_jac_cb_info.jmp) == 0:
                fc.zvode(&zvode_f_cb_wrapper, &neq, <fwc_dbl_complex_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwc_dbl_complex_t*>np.PyArray_DATA(zwork_), &lzw, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &zvode_jac_cb_wrapper, &mf, <fwr_real_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_))
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
    return (neq, y_, t, tout, itol, rtol_, atol_, itask, istate, iopt, zwork_, lzw, rwork_, lrw, iwork_, liw, jac, mf, rpar_, ipar_,)



cdef fw_CallbackInfo zvhin_f_cb_info
cdef int zvhin_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t1, fwc_dbl_complex_t * y, fwc_dbl_complex_t * temp, fwr_real_t * rpar, fwi_integer_t * ipar):
    global zvhin_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, temp_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], temp_shape[1], rpar_shape[1], ipar_shape[1]
    info = zvhin_f_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        temp_shape[0] = TODO
        temp_ = np.PyArray_New(&np.PyArray_Type, 1, temp_shape, fwc_dbl_complex_t_enum, NULL, <char*>temp, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_real_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            n[0], t1[0], y_ret, temp_ret, rpar_ret, ipar_ret = info.callback(n[0], t1[0], y_, temp_, rpar_, ipar_)
        else:
            n[0], t1[0], y_ret, temp_ret, rpar_ret, ipar_ret = info.callback(n[0], t1[0], y_, temp_, rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if temp_ is not temp_ret:
            temp_ = np.PyArray_FROMANY(temp_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if temp_shape[0] != np.PyArray_DIMS(temp_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(temp, np.PyArray_DATA(temp_), np.PyArray_NBYTES(temp_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_real_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        zvhin_f_cb_info = info
        return 0
    except:
        zvhin_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvhin_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t1, fwc_dbl_complex_t * y, fwc_dbl_complex_t * temp, fwr_real_t * rpar, fwi_integer_t * ipar):
    if zvhin_f_cb_wrapper_core(n, t1, y, temp, rpar, ipar) != 0:
        longjmp(zvhin_f_cb_info.jmp, 1)


cpdef object zvhin(fwi_integer_t n, fwr_dbl_t t0, object y0, object ydot, object f, object rpar, object ipar, fwr_dbl_t tout, fwr_dbl_t uround, object ewt, fwi_integer_t itol, object atol, object y, object temp, fwr_dbl_t h0, fwi_integer_t niter, fwi_integer_t ier):
    """zvhin(n, t0, y0, ydot, f, rpar, ipar, tout, uround, ewt, itol, atol, y, temp, h0, niter, ier) -> (n, t0, y0, ydot, rpar, ipar, tout, uround, ewt, itol, atol, y, temp, h0, niter, ier)

    Parameters
    ----------
    n : fwi_integer, intent inout
    t0 : fwr_dbl, intent inout
    y0 : fwc_dbl_complex, 1D array, dimension(*), intent inout
    ydot : fwc_dbl_complex, 1D array, dimension(*), intent inout
    f : object, intent in
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout
    tout : fwr_dbl, intent inout
    uround : fwr_dbl, intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    itol : fwi_integer, intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    temp : fwc_dbl_complex, 1D array, dimension(*), intent inout
    h0 : fwr_dbl, intent inout
    niter : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    t0 : fwr_dbl, intent inout
    y0 : fwc_dbl_complex, 1D array, dimension(*), intent inout
    ydot : fwc_dbl_complex, 1D array, dimension(*), intent inout
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout
    tout : fwr_dbl, intent inout
    uround : fwr_dbl, intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    itol : fwi_integer, intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    temp : fwc_dbl_complex, 1D array, dimension(*), intent inout
    h0 : fwr_dbl, intent inout
    niter : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    global zvhin_f_cb_info
    cdef fw_CallbackInfo fw_f_cb
    cdef np.ndarray y0_, ydot_, rpar_, ipar_, ewt_, atol_, y_, temp_
    cdef np.npy_intp y0_shape[1], ydot_shape[1], rpar_shape[1], ipar_shape[1], ewt_shape[1], atol_shape[1], y_shape[1], temp_shape[1]
    y0_ = fw_asfortranarray(y0, fwc_dbl_complex_t_enum, 1, y0_shape, False, False)
    ydot_ = fw_asfortranarray(ydot, fwc_dbl_complex_t_enum, 1, ydot_shape, False, False)
    rpar_ = fw_asfortranarray(rpar, fwr_real_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    temp_ = fw_asfortranarray(temp, fwc_dbl_complex_t_enum, 1, temp_shape, False, False)
    zvhin_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    try:
        if setjmp(zvhin_f_cb_info.jmp) == 0:
            fc.zvhin(&n, &t0, <fwc_dbl_complex_t*>np.PyArray_DATA(y0_), <fwc_dbl_complex_t*>np.PyArray_DATA(ydot_), &zvhin_f_cb_wrapper, <fwr_real_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_), &tout, &uround, <fwr_dbl_t*>np.PyArray_DATA(ewt_), &itol, <fwr_dbl_t*>np.PyArray_DATA(atol_), <fwc_dbl_complex_t*>np.PyArray_DATA(y_), <fwc_dbl_complex_t*>np.PyArray_DATA(temp_), &h0, &niter, &ier)
        else:
            fw_exctype, fw_excval, fw_exctb = zvhin_f_cb_info.exc
            zvhin_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        zvhin_f_cb_info = None
    return (n, t0, y0_, ydot_, rpar_, ipar_, tout, uround, ewt_, itol, atol_, y_, temp_, h0, niter, ier,)


cpdef object zvindy(fwr_dbl_t t, fwi_integer_t k, object yh, fwi_integer_t ldyh, object dky, fwi_integer_t iflag):
    """zvindy(t, k, yh, ldyh, dky, iflag) -> (t, k, yh, ldyh, dky, iflag)

    Parameters
    ----------
    t : fwr_dbl, intent inout
    k : fwi_integer, intent inout
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    dky : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iflag : fwi_integer, intent inout

    Returns
    -------
    t : fwr_dbl, intent inout
    k : fwi_integer, intent inout
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    dky : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iflag : fwi_integer, intent inout

    """
    cdef np.ndarray yh_, dky_
    cdef np.npy_intp yh_shape[2], dky_shape[1]
    yh_ = fw_asfortranarray(yh, fwc_dbl_complex_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    dky_ = fw_asfortranarray(dky, fwc_dbl_complex_t_enum, 1, dky_shape, False, False)
    fc.zvindy(&t, &k, <fwc_dbl_complex_t*>np.PyArray_DATA(yh_), &ldyh, <fwc_dbl_complex_t*>np.PyArray_DATA(dky_), &iflag)
    return (t, k, yh_, ldyh, dky_, iflag,)



cdef fw_CallbackInfo zvstep_f_cb_info
cdef int zvstep_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * tn, fwc_dbl_complex_t * y, fwc_dbl_complex_t * savf, fwr_real_t * rpar, fwi_integer_t * ipar):
    global zvstep_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, savf_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], savf_shape[1], rpar_shape[1], ipar_shape[1]
    info = zvstep_f_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        savf_shape[0] = TODO
        savf_ = np.PyArray_New(&np.PyArray_Type, 1, savf_shape, fwc_dbl_complex_t_enum, NULL, <char*>savf, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_real_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            n[0], tn[0], y_ret, savf_ret, rpar_ret, ipar_ret = info.callback(n[0], tn[0], y_, savf_, rpar_, ipar_)
        else:
            n[0], tn[0], y_ret, savf_ret, rpar_ret, ipar_ret = info.callback(n[0], tn[0], y_, savf_, rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if savf_ is not savf_ret:
            savf_ = np.PyArray_FROMANY(savf_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if savf_shape[0] != np.PyArray_DIMS(savf_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(savf, np.PyArray_DATA(savf_), np.PyArray_NBYTES(savf_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_real_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        zvstep_f_cb_info = info
        return 0
    except:
        zvstep_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvstep_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * tn, fwc_dbl_complex_t * y, fwc_dbl_complex_t * savf, fwr_real_t * rpar, fwi_integer_t * ipar):
    if zvstep_f_cb_wrapper_core(n, tn, y, savf, rpar, ipar) != 0:
        longjmp(zvstep_f_cb_info.jmp, 1)



cdef fw_CallbackInfo zvstep_jac_cb_info
cdef int zvstep_jac_cb_wrapper_core():
    global zvstep_jac_cb_info;
    cdef fw_CallbackInfo info
    info = zvstep_jac_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        zvstep_jac_cb_info = info
        return 0
    except:
        zvstep_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvstep_jac_cb_wrapper():
    if zvstep_jac_cb_wrapper_core() != 0:
        longjmp(zvstep_jac_cb_info.jmp, 1)



cdef fw_CallbackInfo zvstep_psol_cb_info
cdef int zvstep_psol_cb_wrapper_core():
    global zvstep_psol_cb_info;
    cdef fw_CallbackInfo info
    info = zvstep_psol_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        zvstep_psol_cb_info = info
        return 0
    except:
        zvstep_psol_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvstep_psol_cb_wrapper():
    if zvstep_psol_cb_wrapper_core() != 0:
        longjmp(zvstep_psol_cb_info.jmp, 1)



cdef fw_CallbackInfo zvstep_vnls_cb_info
cdef int zvstep_vnls_cb_wrapper_core(fwc_dbl_complex_t * y, fwc_dbl_complex_t * yh, fwi_integer_t * ldyh, fwc_dbl_complex_t * vsav, fwc_dbl_complex_t * savf, fwr_dbl_t * ewt, fwc_dbl_complex_t * acor, fwi_integer_t * iwm, fwc_dbl_complex_t * wm, fwr_real_t * f, fwi_integer_t * jac, fwr_real_t * psol, fwi_integer_t * nflag, fwr_real_t * rpar, fwi_integer_t * ipar):
    global zvstep_vnls_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, yh_, vsav_, savf_, ewt_, acor_, iwm_, wm_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], yh_shape[2], vsav_shape[1], savf_shape[1], ewt_shape[1], acor_shape[1], iwm_shape[1], wm_shape[1], rpar_shape[1], ipar_shape[1]
    info = zvstep_vnls_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        yh_shape[0] = ldyh[0]; yh_shape[1] = TODO
        yh_ = np.PyArray_New(&np.PyArray_Type, 2, yh_shape, fwc_dbl_complex_t_enum, NULL, <char*>yh, 0, np.NPY_FARRAY, NULL)
        vsav_shape[0] = TODO
        vsav_ = np.PyArray_New(&np.PyArray_Type, 1, vsav_shape, fwc_dbl_complex_t_enum, NULL, <char*>vsav, 0, np.NPY_FARRAY, NULL)
        savf_shape[0] = TODO
        savf_ = np.PyArray_New(&np.PyArray_Type, 1, savf_shape, fwc_dbl_complex_t_enum, NULL, <char*>savf, 0, np.NPY_FARRAY, NULL)
        ewt_shape[0] = TODO
        ewt_ = np.PyArray_New(&np.PyArray_Type, 1, ewt_shape, fwr_dbl_t_enum, NULL, <char*>ewt, 0, np.NPY_FARRAY, NULL)
        acor_shape[0] = TODO
        acor_ = np.PyArray_New(&np.PyArray_Type, 1, acor_shape, fwc_dbl_complex_t_enum, NULL, <char*>acor, 0, np.NPY_FARRAY, NULL)
        iwm_shape[0] = TODO
        iwm_ = np.PyArray_New(&np.PyArray_Type, 1, iwm_shape, fwi_integer_t_enum, NULL, <char*>iwm, 0, np.NPY_FARRAY, NULL)
        wm_shape[0] = TODO
        wm_ = np.PyArray_New(&np.PyArray_Type, 1, wm_shape, fwc_dbl_complex_t_enum, NULL, <char*>wm, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_real_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            y_ret, yh_ret, ldyh[0], vsav_ret, savf_ret, ewt_ret, acor_ret, iwm_ret, wm_ret, f[0], jac[0], psol[0], nflag[0], rpar_ret, ipar_ret = info.callback(y_, yh_, ldyh[0], vsav_, savf_, ewt_, acor_, iwm_, wm_, f[0], jac[0], psol[0], nflag[0], rpar_, ipar_)
        else:
            y_ret, yh_ret, ldyh[0], vsav_ret, savf_ret, ewt_ret, acor_ret, iwm_ret, wm_ret, f[0], jac[0], psol[0], nflag[0], rpar_ret, ipar_ret = info.callback(y_, yh_, ldyh[0], vsav_, savf_, ewt_, acor_, iwm_, wm_, f[0], jac[0], psol[0], nflag[0], rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if yh_ is not yh_ret:
            yh_ = np.PyArray_FROMANY(yh_ret, fwc_dbl_complex_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
            if yh_shape[0] != np.PyArray_DIMS(yh_)[0] or yh_shape[1] != np.PyArray_DIMS(yh_)[1]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(yh, np.PyArray_DATA(yh_), np.PyArray_NBYTES(yh_))
        if vsav_ is not vsav_ret:
            vsav_ = np.PyArray_FROMANY(vsav_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if vsav_shape[0] != np.PyArray_DIMS(vsav_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(vsav, np.PyArray_DATA(vsav_), np.PyArray_NBYTES(vsav_))
        if savf_ is not savf_ret:
            savf_ = np.PyArray_FROMANY(savf_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if savf_shape[0] != np.PyArray_DIMS(savf_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(savf, np.PyArray_DATA(savf_), np.PyArray_NBYTES(savf_))
        if ewt_ is not ewt_ret:
            ewt_ = np.PyArray_FROMANY(ewt_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ewt_shape[0] != np.PyArray_DIMS(ewt_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ewt, np.PyArray_DATA(ewt_), np.PyArray_NBYTES(ewt_))
        if acor_ is not acor_ret:
            acor_ = np.PyArray_FROMANY(acor_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if acor_shape[0] != np.PyArray_DIMS(acor_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(acor, np.PyArray_DATA(acor_), np.PyArray_NBYTES(acor_))
        if iwm_ is not iwm_ret:
            iwm_ = np.PyArray_FROMANY(iwm_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if iwm_shape[0] != np.PyArray_DIMS(iwm_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(iwm, np.PyArray_DATA(iwm_), np.PyArray_NBYTES(iwm_))
        if wm_ is not wm_ret:
            wm_ = np.PyArray_FROMANY(wm_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if wm_shape[0] != np.PyArray_DIMS(wm_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(wm, np.PyArray_DATA(wm_), np.PyArray_NBYTES(wm_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_real_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        zvstep_vnls_cb_info = info
        return 0
    except:
        zvstep_vnls_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvstep_vnls_cb_wrapper(fwc_dbl_complex_t * y, fwc_dbl_complex_t * yh, fwi_integer_t * ldyh, fwc_dbl_complex_t * vsav, fwc_dbl_complex_t * savf, fwr_dbl_t * ewt, fwc_dbl_complex_t * acor, fwi_integer_t * iwm, fwc_dbl_complex_t * wm, fwr_real_t * f, fwi_integer_t * jac, fwr_real_t * psol, fwi_integer_t * nflag, fwr_real_t * rpar, fwi_integer_t * ipar):
    if zvstep_vnls_cb_wrapper_core(y, yh, ldyh, vsav, savf, ewt, acor, iwm, wm, f, jac, psol, nflag, rpar, ipar) != 0:
        longjmp(zvstep_vnls_cb_info.jmp, 1)


cpdef object zvstep(object y, object yh, fwi_integer_t ldyh, object yh1, object ewt, object savf, object vsav, object acor, object wm, object iwm, object f, object jac, object psol, object vnls, object rpar, object ipar):
    """zvstep(y, yh, ldyh, yh1, ewt, savf, vsav, acor, wm, iwm, f, jac, psol, vnls, rpar, ipar) -> (y, yh, ldyh, yh1, ewt, savf, vsav, acor, wm, iwm, jac, psol, rpar, ipar)

    Parameters
    ----------
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    yh1 : fwc_dbl_complex, 1D array, dimension(*), intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    savf : fwc_dbl_complex, 1D array, dimension(*), intent inout
    vsav : fwc_dbl_complex, 1D array, dimension(*), intent inout
    acor : fwc_dbl_complex, 1D array, dimension(*), intent inout
    wm : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    f : object, intent in
    jac : object
    psol : object
    vnls : object, intent in
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    yh1 : fwc_dbl_complex, 1D array, dimension(*), intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    savf : fwc_dbl_complex, 1D array, dimension(*), intent inout
    vsav : fwc_dbl_complex, 1D array, dimension(*), intent inout
    acor : fwc_dbl_complex, 1D array, dimension(*), intent inout
    wm : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    jac : object
    psol : object
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    """
    global zvstep_f_cb_info, zvstep_jac_cb_info, zvstep_psol_cb_info, zvstep_vnls_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb, fw_psol_cb, fw_vnls_cb
    cdef np.ndarray y_, yh_, yh1_, ewt_, savf_, vsav_, acor_, wm_, iwm_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], yh_shape[2], yh1_shape[1], ewt_shape[1], savf_shape[1], vsav_shape[1], acor_shape[1], wm_shape[1], iwm_shape[1], rpar_shape[1], ipar_shape[1]
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    yh_ = fw_asfortranarray(yh, fwc_dbl_complex_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    yh1_ = fw_asfortranarray(yh1, fwc_dbl_complex_t_enum, 1, yh1_shape, False, False)
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    savf_ = fw_asfortranarray(savf, fwc_dbl_complex_t_enum, 1, savf_shape, False, False)
    vsav_ = fw_asfortranarray(vsav, fwc_dbl_complex_t_enum, 1, vsav_shape, False, False)
    acor_ = fw_asfortranarray(acor, fwc_dbl_complex_t_enum, 1, acor_shape, False, False)
    wm_ = fw_asfortranarray(wm, fwc_dbl_complex_t_enum, 1, wm_shape, False, False)
    iwm_ = fw_asfortranarray(iwm, fwi_integer_t_enum, 1, iwm_shape, False, False)
    rpar_ = fw_asfortranarray(rpar, fwr_real_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    zvstep_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    zvstep_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, None)
    zvstep_psol_cb_info = fw_psol_cb = fw_CallbackInfo(psol, None)
    zvstep_vnls_cb_info = fw_vnls_cb = fw_CallbackInfo(vnls, None)
    try:
        if setjmp(zvstep_f_cb_info.jmp) == 0:
            if setjmp(zvstep_jac_cb_info.jmp) == 0:
                if setjmp(zvstep_psol_cb_info.jmp) == 0:
                    if setjmp(zvstep_vnls_cb_info.jmp) == 0:
                        fc.zvstep(<fwc_dbl_complex_t*>np.PyArray_DATA(y_), <fwc_dbl_complex_t*>np.PyArray_DATA(yh_), &ldyh, <fwc_dbl_complex_t*>np.PyArray_DATA(yh1_), <fwr_dbl_t*>np.PyArray_DATA(ewt_), <fwc_dbl_complex_t*>np.PyArray_DATA(savf_), <fwc_dbl_complex_t*>np.PyArray_DATA(vsav_), <fwc_dbl_complex_t*>np.PyArray_DATA(acor_), <fwc_dbl_complex_t*>np.PyArray_DATA(wm_), <fwi_integer_t*>np.PyArray_DATA(iwm_), &zvstep_f_cb_wrapper, &zvstep_jac_cb_wrapper, &zvstep_psol_cb_wrapper, &zvstep_vnls_cb_wrapper, <fwr_real_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_))
                    else:
                        fw_exctype, fw_excval, fw_exctb = zvstep_vnls_cb_info.exc
                        zvstep_vnls_cb_info.exc = None
                        raise fw_exctype, fw_excval, fw_exctb
                else:
                    fw_exctype, fw_excval, fw_exctb = zvstep_psol_cb_info.exc
                    zvstep_psol_cb_info.exc = None
                    raise fw_exctype, fw_excval, fw_exctb
            else:
                fw_exctype, fw_excval, fw_exctb = zvstep_jac_cb_info.exc
                zvstep_jac_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = zvstep_f_cb_info.exc
            zvstep_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        zvstep_f_cb_info = None
    return (y_, yh_, ldyh, yh1_, ewt_, savf_, vsav_, acor_, wm_, iwm_, jac, psol, rpar_, ipar_,)


cpdef object zvset():
    """zvset()

    Parameters
    ----------
    None

    """
    fc.zvset()


cpdef object zvjust(object yh, fwi_integer_t ldyh, fwi_integer_t iord):
    """zvjust(yh, ldyh, iord) -> (yh, ldyh, iord)

    Parameters
    ----------
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    iord : fwi_integer, intent inout

    Returns
    -------
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    iord : fwi_integer, intent inout

    """
    cdef np.ndarray yh_
    cdef np.npy_intp yh_shape[2]
    yh_ = fw_asfortranarray(yh, fwc_dbl_complex_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    fc.zvjust(<fwc_dbl_complex_t*>np.PyArray_DATA(yh_), &ldyh, &iord)
    return (yh_, ldyh, iord,)



cdef fw_CallbackInfo zvnlsd_f_cb_info
cdef int zvnlsd_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * tn, fwc_dbl_complex_t * y, fwc_dbl_complex_t * savf, fwr_real_t * rpar, fwi_integer_t * ipar):
    global zvnlsd_f_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray y_, savf_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], savf_shape[1], rpar_shape[1], ipar_shape[1]
    info = zvnlsd_f_cb_info
    try:
        y_shape[0] = TODO
        y_ = np.PyArray_New(&np.PyArray_Type, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
        savf_shape[0] = TODO
        savf_ = np.PyArray_New(&np.PyArray_Type, 1, savf_shape, fwc_dbl_complex_t_enum, NULL, <char*>savf, 0, np.NPY_FARRAY, NULL)
        rpar_shape[0] = TODO
        rpar_ = np.PyArray_New(&np.PyArray_Type, 1, rpar_shape, fwr_real_t_enum, NULL, <char*>rpar, 0, np.NPY_FARRAY, NULL)
        ipar_shape[0] = TODO
        ipar_ = np.PyArray_New(&np.PyArray_Type, 1, ipar_shape, fwi_integer_t_enum, NULL, <char*>ipar, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            n[0], tn[0], y_ret, savf_ret, rpar_ret, ipar_ret = info.callback(n[0], tn[0], y_, savf_, rpar_, ipar_)
        else:
            n[0], tn[0], y_ret, savf_ret, rpar_ret, ipar_ret = info.callback(n[0], tn[0], y_, savf_, rpar_, ipar_, *info.extra_args)
        if y_ is not y_ret:
            y_ = np.PyArray_FROMANY(y_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if y_shape[0] != np.PyArray_DIMS(y_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(y, np.PyArray_DATA(y_), np.PyArray_NBYTES(y_))
        if savf_ is not savf_ret:
            savf_ = np.PyArray_FROMANY(savf_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if savf_shape[0] != np.PyArray_DIMS(savf_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(savf, np.PyArray_DATA(savf_), np.PyArray_NBYTES(savf_))
        if rpar_ is not rpar_ret:
            rpar_ = np.PyArray_FROMANY(rpar_ret, fwr_real_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if rpar_shape[0] != np.PyArray_DIMS(rpar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(rpar, np.PyArray_DATA(rpar_), np.PyArray_NBYTES(rpar_))
        if ipar_ is not ipar_ret:
            ipar_ = np.PyArray_FROMANY(ipar_ret, fwi_integer_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
            if ipar_shape[0] != np.PyArray_DIMS(ipar_)[0]:
                raise ValueError("Array returned from callback has illegal shape")
            memcpy(ipar, np.PyArray_DATA(ipar_), np.PyArray_NBYTES(ipar_))
        zvnlsd_f_cb_info = info
        return 0
    except:
        zvnlsd_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvnlsd_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * tn, fwc_dbl_complex_t * y, fwc_dbl_complex_t * savf, fwr_real_t * rpar, fwi_integer_t * ipar):
    if zvnlsd_f_cb_wrapper_core(n, tn, y, savf, rpar, ipar) != 0:
        longjmp(zvnlsd_f_cb_info.jmp, 1)



cdef fw_CallbackInfo zvnlsd_jac_cb_info
cdef int zvnlsd_jac_cb_wrapper_core():
    global zvnlsd_jac_cb_info;
    cdef fw_CallbackInfo info
    info = zvnlsd_jac_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        zvnlsd_jac_cb_info = info
        return 0
    except:
        zvnlsd_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvnlsd_jac_cb_wrapper():
    if zvnlsd_jac_cb_wrapper_core() != 0:
        longjmp(zvnlsd_jac_cb_info.jmp, 1)



cdef fw_CallbackInfo zvnlsd_pdum_cb_info
cdef int zvnlsd_pdum_cb_wrapper_core():
    global zvnlsd_pdum_cb_info;
    cdef fw_CallbackInfo info
    info = zvnlsd_pdum_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        zvnlsd_pdum_cb_info = info
        return 0
    except:
        zvnlsd_pdum_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvnlsd_pdum_cb_wrapper():
    if zvnlsd_pdum_cb_wrapper_core() != 0:
        longjmp(zvnlsd_pdum_cb_info.jmp, 1)


cpdef object zvnlsd(object y, object yh, fwi_integer_t ldyh, object vsav, object savf, object ewt, object acor, object iwm, object wm, object f, object jac, object pdum, fwi_integer_t nflag, object rpar, object ipar):
    """zvnlsd(y, yh, ldyh, vsav, savf, ewt, acor, iwm, wm, f, jac, pdum, nflag, rpar, ipar) -> (y, yh, ldyh, vsav, savf, ewt, acor, iwm, wm, jac, pdum, nflag, rpar, ipar)

    Parameters
    ----------
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    vsav : fwc_dbl_complex, 1D array, dimension(*), intent inout
    savf : fwc_dbl_complex, 1D array, dimension(*), intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    acor : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    wm : fwc_dbl_complex, 1D array, dimension(*), intent inout
    f : object, intent in
    jac : object
    pdum : object
    nflag : fwi_integer, intent inout
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    vsav : fwc_dbl_complex, 1D array, dimension(*), intent inout
    savf : fwc_dbl_complex, 1D array, dimension(*), intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    acor : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    wm : fwc_dbl_complex, 1D array, dimension(*), intent inout
    jac : object
    pdum : object
    nflag : fwi_integer, intent inout
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    """
    global zvnlsd_f_cb_info, zvnlsd_jac_cb_info, zvnlsd_pdum_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb, fw_pdum_cb
    cdef np.ndarray y_, yh_, vsav_, savf_, ewt_, acor_, iwm_, wm_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], yh_shape[2], vsav_shape[1], savf_shape[1], ewt_shape[1], acor_shape[1], iwm_shape[1], wm_shape[1], rpar_shape[1], ipar_shape[1]
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    yh_ = fw_asfortranarray(yh, fwc_dbl_complex_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    vsav_ = fw_asfortranarray(vsav, fwc_dbl_complex_t_enum, 1, vsav_shape, False, False)
    savf_ = fw_asfortranarray(savf, fwc_dbl_complex_t_enum, 1, savf_shape, False, False)
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    acor_ = fw_asfortranarray(acor, fwc_dbl_complex_t_enum, 1, acor_shape, False, False)
    iwm_ = fw_asfortranarray(iwm, fwi_integer_t_enum, 1, iwm_shape, False, False)
    wm_ = fw_asfortranarray(wm, fwc_dbl_complex_t_enum, 1, wm_shape, False, False)
    rpar_ = fw_asfortranarray(rpar, fwr_real_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    zvnlsd_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    zvnlsd_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, None)
    zvnlsd_pdum_cb_info = fw_pdum_cb = fw_CallbackInfo(pdum, None)
    try:
        if setjmp(zvnlsd_f_cb_info.jmp) == 0:
            if setjmp(zvnlsd_jac_cb_info.jmp) == 0:
                if setjmp(zvnlsd_pdum_cb_info.jmp) == 0:
                    fc.zvnlsd(<fwc_dbl_complex_t*>np.PyArray_DATA(y_), <fwc_dbl_complex_t*>np.PyArray_DATA(yh_), &ldyh, <fwc_dbl_complex_t*>np.PyArray_DATA(vsav_), <fwc_dbl_complex_t*>np.PyArray_DATA(savf_), <fwr_dbl_t*>np.PyArray_DATA(ewt_), <fwc_dbl_complex_t*>np.PyArray_DATA(acor_), <fwi_integer_t*>np.PyArray_DATA(iwm_), <fwc_dbl_complex_t*>np.PyArray_DATA(wm_), &zvnlsd_f_cb_wrapper, &zvnlsd_jac_cb_wrapper, &zvnlsd_pdum_cb_wrapper, &nflag, <fwr_real_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_))
                else:
                    fw_exctype, fw_excval, fw_exctb = zvnlsd_pdum_cb_info.exc
                    zvnlsd_pdum_cb_info.exc = None
                    raise fw_exctype, fw_excval, fw_exctb
            else:
                fw_exctype, fw_excval, fw_exctb = zvnlsd_jac_cb_info.exc
                zvnlsd_jac_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = zvnlsd_f_cb_info.exc
            zvnlsd_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        zvnlsd_f_cb_info = None
    return (y_, yh_, ldyh, vsav_, savf_, ewt_, acor_, iwm_, wm_, jac, pdum, nflag, rpar_, ipar_,)



cdef fw_CallbackInfo zvjac_f_cb_info
cdef int zvjac_f_cb_wrapper_core():
    global zvjac_f_cb_info;
    cdef fw_CallbackInfo info
    info = zvjac_f_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        zvjac_f_cb_info = info
        return 0
    except:
        zvjac_f_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvjac_f_cb_wrapper():
    if zvjac_f_cb_wrapper_core() != 0:
        longjmp(zvjac_f_cb_info.jmp, 1)



cdef fw_CallbackInfo zvjac_jac_cb_info
cdef int zvjac_jac_cb_wrapper_core():
    global zvjac_jac_cb_info;
    cdef fw_CallbackInfo info
    info = zvjac_jac_cb_info
    try:
        if info.extra_args is None:
            info.callback()
        else:
            info.callback(*info.extra_args)
        zvjac_jac_cb_info = info
        return 0
    except:
        zvjac_jac_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void zvjac_jac_cb_wrapper():
    if zvjac_jac_cb_wrapper_core() != 0:
        longjmp(zvjac_jac_cb_info.jmp, 1)


cpdef object zvjac(object y, object yh, fwi_integer_t ldyh, object ewt, object ftem, object savf, object wm, object iwm, object f, object jac, fwi_integer_t ierpj, object rpar, object ipar):
    """zvjac(y, yh, ldyh, ewt, ftem, savf, wm, iwm, f, jac, ierpj, rpar, ipar) -> (y, yh, ldyh, ewt, ftem, savf, wm, iwm, f, jac, ierpj, rpar, ipar)

    Parameters
    ----------
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    ftem : fwc_dbl_complex, 1D array, dimension(*), intent inout
    savf : fwc_dbl_complex, 1D array, dimension(*), intent inout
    wm : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    f : object
    jac : object
    ierpj : fwi_integer, intent inout
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    yh : fwc_dbl_complex, 2D array, dimension(ldyh, *), intent inout
    ldyh : fwi_integer, intent inout
    ewt : fwr_dbl, 1D array, dimension(*), intent inout
    ftem : fwc_dbl_complex, 1D array, dimension(*), intent inout
    savf : fwc_dbl_complex, 1D array, dimension(*), intent inout
    wm : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    f : object
    jac : object
    ierpj : fwi_integer, intent inout
    rpar : fwr_real, 1D array, dimension(*), intent inout
    ipar : fwi_integer, 1D array, dimension(*), intent inout

    """
    global zvjac_f_cb_info, zvjac_jac_cb_info
    cdef fw_CallbackInfo fw_f_cb, fw_jac_cb
    cdef np.ndarray y_, yh_, ewt_, ftem_, savf_, wm_, iwm_, rpar_, ipar_
    cdef np.npy_intp y_shape[1], yh_shape[2], ewt_shape[1], ftem_shape[1], savf_shape[1], wm_shape[1], iwm_shape[1], rpar_shape[1], ipar_shape[1]
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    yh_ = fw_asfortranarray(yh, fwc_dbl_complex_t_enum, 2, yh_shape, False, False)
    if ldyh != yh_shape[0]:
        raise ValueError("(ldyh == yh.shape[0]) not satisifed")
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    ftem_ = fw_asfortranarray(ftem, fwc_dbl_complex_t_enum, 1, ftem_shape, False, False)
    savf_ = fw_asfortranarray(savf, fwc_dbl_complex_t_enum, 1, savf_shape, False, False)
    wm_ = fw_asfortranarray(wm, fwc_dbl_complex_t_enum, 1, wm_shape, False, False)
    iwm_ = fw_asfortranarray(iwm, fwi_integer_t_enum, 1, iwm_shape, False, False)
    rpar_ = fw_asfortranarray(rpar, fwr_real_t_enum, 1, rpar_shape, False, False)
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    zvjac_f_cb_info = fw_f_cb = fw_CallbackInfo(f, None)
    zvjac_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, None)
    try:
        if setjmp(zvjac_f_cb_info.jmp) == 0:
            if setjmp(zvjac_jac_cb_info.jmp) == 0:
                fc.zvjac(<fwc_dbl_complex_t*>np.PyArray_DATA(y_), <fwc_dbl_complex_t*>np.PyArray_DATA(yh_), &ldyh, <fwr_dbl_t*>np.PyArray_DATA(ewt_), <fwc_dbl_complex_t*>np.PyArray_DATA(ftem_), <fwc_dbl_complex_t*>np.PyArray_DATA(savf_), <fwc_dbl_complex_t*>np.PyArray_DATA(wm_), <fwi_integer_t*>np.PyArray_DATA(iwm_), &zvjac_f_cb_wrapper, &zvjac_jac_cb_wrapper, &ierpj, <fwr_real_t*>np.PyArray_DATA(rpar_), <fwi_integer_t*>np.PyArray_DATA(ipar_))
            else:
                fw_exctype, fw_excval, fw_exctb = zvjac_jac_cb_info.exc
                zvjac_jac_cb_info.exc = None
                raise fw_exctype, fw_excval, fw_exctb
        else:
            fw_exctype, fw_excval, fw_exctb = zvjac_f_cb_info.exc
            zvjac_f_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        zvjac_f_cb_info = None
    return (y_, yh_, ldyh, ewt_, ftem_, savf_, wm_, iwm_, f, jac, ierpj, rpar_, ipar_,)


cpdef object zacopy(fwi_integer_t nrow, fwi_integer_t ncol, object a, fwi_integer_t nrowa, object b, fwi_integer_t nrowb):
    """zacopy(nrow, ncol, a, nrowa, b, nrowb) -> (nrow, ncol, a, nrowa, b, nrowb)

    Parameters
    ----------
    nrow : fwi_integer, intent inout
    ncol : fwi_integer, intent inout
    a : fwc_dbl_complex, 2D array, dimension(nrowa, ncol), intent inout
    nrowa : fwi_integer, intent inout
    b : fwc_dbl_complex, 2D array, dimension(nrowb, ncol), intent inout
    nrowb : fwi_integer, intent inout

    Returns
    -------
    nrow : fwi_integer, intent inout
    ncol : fwi_integer, intent inout
    a : fwc_dbl_complex, 2D array, dimension(nrowa, ncol), intent inout
    nrowa : fwi_integer, intent inout
    b : fwc_dbl_complex, 2D array, dimension(nrowb, ncol), intent inout
    nrowb : fwi_integer, intent inout

    """
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, False, False)
    if nrowa != a_shape[0]:
        raise ValueError("(nrowa == a.shape[0]) not satisifed")
    if not (0 <= ncol <= a_shape[1]):
        raise ValueError("(0 <= ncol <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, False, False)
    if nrowb != b_shape[0]:
        raise ValueError("(nrowb == b.shape[0]) not satisifed")
    if not (0 <= ncol <= b_shape[1]):
        raise ValueError("(0 <= ncol <= b.shape[1]) not satisifed")
    fc.zacopy(&nrow, &ncol, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &nrowa, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &nrowb)
    return (nrow, ncol, a_, nrowa, b_, nrowb,)


cpdef object zvsol(object wm, object iwm, object x, fwi_integer_t iersl):
    """zvsol(wm, iwm, x, iersl) -> (wm, iwm, x, iersl)

    Parameters
    ----------
    wm : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    x : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iersl : fwi_integer, intent inout

    Returns
    -------
    wm : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iwm : fwi_integer, 1D array, dimension(*), intent inout
    x : fwc_dbl_complex, 1D array, dimension(*), intent inout
    iersl : fwi_integer, intent inout

    """
    cdef np.ndarray wm_, iwm_, x_
    cdef np.npy_intp wm_shape[1], iwm_shape[1], x_shape[1]
    wm_ = fw_asfortranarray(wm, fwc_dbl_complex_t_enum, 1, wm_shape, False, False)
    iwm_ = fw_asfortranarray(iwm, fwi_integer_t_enum, 1, iwm_shape, False, False)
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    fc.zvsol(<fwc_dbl_complex_t*>np.PyArray_DATA(wm_), <fwi_integer_t*>np.PyArray_DATA(iwm_), <fwc_dbl_complex_t*>np.PyArray_DATA(x_), &iersl)
    return (wm_, iwm_, x_, iersl,)


cpdef object zvsrco(object rsav, object isav, fwi_integer_t job):
    """zvsrco(rsav, isav, job) -> (rsav, isav, job)

    Parameters
    ----------
    rsav : fwr_dbl, 1D array, dimension(*), intent inout
    isav : fwi_integer, 1D array, dimension(*), intent inout
    job : fwi_integer, intent inout

    Returns
    -------
    rsav : fwr_dbl, 1D array, dimension(*), intent inout
    isav : fwi_integer, 1D array, dimension(*), intent inout
    job : fwi_integer, intent inout

    """
    cdef np.ndarray rsav_, isav_
    cdef np.npy_intp rsav_shape[1], isav_shape[1]
    rsav_ = fw_asfortranarray(rsav, fwr_dbl_t_enum, 1, rsav_shape, False, False)
    isav_ = fw_asfortranarray(isav, fwi_integer_t_enum, 1, isav_shape, False, False)
    fc.zvsrco(<fwr_dbl_t*>np.PyArray_DATA(rsav_), <fwi_integer_t*>np.PyArray_DATA(isav_), &job)
    return (rsav_, isav_, job,)


cpdef object zewset(fwi_integer_t n, fwi_integer_t itol, object rtol, object atol, object ycur, object ewt):
    """zewset(n, itol, rtol, atol, ycur, ewt) -> (n, itol, rtol, atol, ycur, ewt)

    Parameters
    ----------
    n : fwi_integer, intent inout
    itol : fwi_integer, intent inout
    rtol : fwr_dbl, 1D array, dimension(*), intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    ycur : fwc_dbl_complex, 1D array, dimension(n), intent inout
    ewt : fwr_dbl, 1D array, dimension(n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    itol : fwi_integer, intent inout
    rtol : fwr_dbl, 1D array, dimension(*), intent inout
    atol : fwr_dbl, 1D array, dimension(*), intent inout
    ycur : fwc_dbl_complex, 1D array, dimension(n), intent inout
    ewt : fwr_dbl, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray rtol_, atol_, ycur_, ewt_
    cdef np.npy_intp rtol_shape[1], atol_shape[1], ycur_shape[1], ewt_shape[1]
    rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
    atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
    ycur_ = fw_asfortranarray(ycur, fwc_dbl_complex_t_enum, 1, ycur_shape, False, False)
    if not (0 <= n <= ycur_shape[0]):
        raise ValueError("(0 <= n <= ycur.shape[0]) not satisifed")
    ewt_ = fw_asfortranarray(ewt, fwr_dbl_t_enum, 1, ewt_shape, False, False)
    if not (0 <= n <= ewt_shape[0]):
        raise ValueError("(0 <= n <= ewt.shape[0]) not satisifed")
    fc.zewset(&n, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), <fwc_dbl_complex_t*>np.PyArray_DATA(ycur_), <fwr_dbl_t*>np.PyArray_DATA(ewt_))
    return (n, itol, rtol_, atol_, ycur_, ewt_,)


cpdef object zvnorm(fwi_integer_t n, object v, object w):
    """zvnorm(n, v, w) -> (fw_ret_arg, n, v, w)

    Parameters
    ----------
    n : fwi_integer, intent inout
    v : fwc_dbl_complex, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    n : fwi_integer, intent inout
    v : fwc_dbl_complex, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    """
    cdef fwr_dbl_t fw_ret_arg
    cdef np.ndarray v_, w_
    cdef np.npy_intp v_shape[1], w_shape[1]
    v_ = fw_asfortranarray(v, fwc_dbl_complex_t_enum, 1, v_shape, False, False)
    if not (0 <= n <= v_shape[0]):
        raise ValueError("(0 <= n <= v.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, False)
    if not (0 <= n <= w_shape[0]):
        raise ValueError("(0 <= n <= w.shape[0]) not satisifed")
    fw_ret_arg = fc.zvnorm(&n, <fwc_dbl_complex_t*>np.PyArray_DATA(v_), <fwr_dbl_t*>np.PyArray_DATA(w_))
    return (fw_ret_arg, n, v_, w_,)


cpdef object zabssq(fwc_dbl_complex_t z):
    """zabssq(z) -> (fw_ret_arg, z)

    Parameters
    ----------
    z : fwc_dbl_complex, intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    z : fwc_dbl_complex, intent inout

    """
    cdef fwr_dbl_t fw_ret_arg
    fw_ret_arg = fc.zabssq(&z)
    return (fw_ret_arg, z,)


cpdef object dzscal(fwi_integer_t n, fwr_dbl_t da, object zx, fwi_integer_t incx):
    """dzscal(n, da, zx, incx) -> (n, da, zx, incx)

    Parameters
    ----------
    n : fwi_integer, intent inout
    da : fwr_dbl, intent inout
    zx : fwc_dbl_complex, 1D array, dimension(*), intent inout
    incx : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    da : fwr_dbl, intent inout
    zx : fwc_dbl_complex, 1D array, dimension(*), intent inout
    incx : fwi_integer, intent inout

    """
    cdef np.ndarray zx_
    cdef np.npy_intp zx_shape[1]
    zx_ = fw_asfortranarray(zx, fwc_dbl_complex_t_enum, 1, zx_shape, False, False)
    fc.dzscal(&n, &da, <fwc_dbl_complex_t*>np.PyArray_DATA(zx_), &incx)
    return (n, da, zx_, incx,)


cpdef object dzaxpy(fwi_integer_t n, fwr_dbl_t da, object zx, fwi_integer_t incx, object zy, fwi_integer_t incy):
    """dzaxpy(n, da, zx, incx, zy, incy) -> (n, da, zx, incx, zy, incy)

    Parameters
    ----------
    n : fwi_integer, intent inout
    da : fwr_dbl, intent inout
    zx : fwc_dbl_complex, 1D array, dimension(*), intent inout
    incx : fwi_integer, intent inout
    zy : fwc_dbl_complex, 1D array, dimension(*), intent inout
    incy : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    da : fwr_dbl, intent inout
    zx : fwc_dbl_complex, 1D array, dimension(*), intent inout
    incx : fwi_integer, intent inout
    zy : fwc_dbl_complex, 1D array, dimension(*), intent inout
    incy : fwi_integer, intent inout

    """
    cdef np.ndarray zx_, zy_
    cdef np.npy_intp zx_shape[1], zy_shape[1]
    zx_ = fw_asfortranarray(zx, fwc_dbl_complex_t_enum, 1, zx_shape, False, False)
    zy_ = fw_asfortranarray(zy, fwc_dbl_complex_t_enum, 1, zy_shape, False, False)
    fc.dzaxpy(&n, &da, <fwc_dbl_complex_t*>np.PyArray_DATA(zx_), &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(zy_), &incy)
    return (n, da, zx_, incx, zy_, incy,)


cpdef object dumach():
    """dumach() -> fw_ret_arg

    Parameters
    ----------
    None

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out

    """
    cdef fwr_dbl_t fw_ret_arg
    fw_ret_arg = fc.dumach()
    return fw_ret_arg


cpdef object dumsum(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t c):
    """dumsum(a, b, c) -> (a, b, c)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    c : fwr_dbl, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    c : fwr_dbl, intent inout

    """
    fc.dumsum(&a, &b, &c)
    return (a, b, c,)



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
# Fwrap: version 0.2.0dev_0c427bf
# Fwrap: self-sha1 95cff1f041bdf6557820520320ccd041fb929656
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps odepack/vode.f
# Fwrap:     sha1 e6a4c327447ad9f1405171d2f51a3883c2a02be8
# Fwrap: wraps odepack/zvode.f
# Fwrap:     sha1 70ca8758efa16aee4d10c61dee7b2ca428a250cd
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary vode.pxd
# Fwrap: auxiliary vode_fc.h
# Fwrap: auxiliary vode_fc.pxd

