#cython: ccomplex=True

"""
The mvn module was generated with Fwrap v0.2.0dev_470490d.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
bvnmvn(...)
bvu(...)
covsrt(...)
dkbvrc(...)
dksmrc(...)
dkswap(...)
mvndfn(...)
mvndst(...)
mvnlms(...)
mvnphi(...)
mvnun(...)
mvnuni(...)
phinvs(...)
rcswp(...)

Data Types
----------
fw_character
fw_shape
fwi_integer
fwr_dbl

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef api object mvnun(fwi_integer_t d, fwi_integer_t n, object lower, object upper, object means, object covar, fwi_integer_t maxpts, fwr_dbl_t abseps, fwr_dbl_t releps, fwr_dbl_t value, fwi_integer_t inform):
    """
    mvnun(d, n, lower, upper, means, covar, maxpts, abseps, releps, value, inform) -> (d, n, lower, upper, means, covar, maxpts, abseps, releps, value, inform)

    Parameters
    ----------
    d : fwi_integer, intent inout
    n : fwi_integer, intent inout
    lower : fwr_dbl, 1D array, dimension(d), intent inout
    upper : fwr_dbl, 1D array, dimension(d), intent inout
    means : fwr_dbl, 2D array, dimension(d, n), intent inout
    covar : fwr_dbl, 2D array, dimension(d, d), intent inout
    maxpts : fwi_integer, intent inout
    abseps : fwr_dbl, intent inout
    releps : fwr_dbl, intent inout
    value : fwr_dbl, intent inout
    inform : fwi_integer, intent inout

    Returns
    -------
    d : fwi_integer, intent inout
    n : fwi_integer, intent inout
    lower : fwr_dbl, 1D array, dimension(d), intent inout
    upper : fwr_dbl, 1D array, dimension(d), intent inout
    means : fwr_dbl, 2D array, dimension(d, n), intent inout
    covar : fwr_dbl, 2D array, dimension(d, d), intent inout
    maxpts : fwi_integer, intent inout
    abseps : fwr_dbl, intent inout
    releps : fwr_dbl, intent inout
    value : fwr_dbl, intent inout
    inform : fwi_integer, intent inout

    """
    cdef np.ndarray lower_
    cdef fw_shape_t lower_shape_[1]
    cdef np.ndarray upper_
    cdef fw_shape_t upper_shape_[1]
    cdef np.ndarray means_
    cdef fw_shape_t means_shape_[2]
    cdef np.ndarray covar_
    cdef fw_shape_t covar_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    lower_, lower = fw_asfortranarray(lower, fwr_dbl_t_enum, 1, False)
    fw_copyshape(lower_shape_, np.PyArray_DIMS(lower_), 1)
    if not (0 <= d <= lower_shape_[0]):
        raise ValueError("(0 <= d <= lower.shape[0]) not satisifed")
    upper_, upper = fw_asfortranarray(upper, fwr_dbl_t_enum, 1, False)
    fw_copyshape(upper_shape_, np.PyArray_DIMS(upper_), 1)
    if not (0 <= d <= upper_shape_[0]):
        raise ValueError("(0 <= d <= upper.shape[0]) not satisifed")
    means_, means = fw_asfortranarray(means, fwr_dbl_t_enum, 2, False)
    fw_copyshape(means_shape_, np.PyArray_DIMS(means_), 2)
    if d != means_shape_[0]:
        raise ValueError("(d == means.shape[0]) not satisifed")
    if not (0 <= n <= means_shape_[1]):
        raise ValueError("(0 <= n <= means.shape[1]) not satisifed")
    covar_, covar = fw_asfortranarray(covar, fwr_dbl_t_enum, 2, False)
    fw_copyshape(covar_shape_, np.PyArray_DIMS(covar_), 2)
    if d != covar_shape_[0]:
        raise ValueError("(d == covar.shape[0]) not satisifed")
    if not (0 <= d <= covar_shape_[1]):
        raise ValueError("(0 <= d <= covar.shape[1]) not satisifed")
    mvnun_c(&d, &n, lower_shape_, <fwr_dbl_t*>np.PyArray_DATA(lower_), upper_shape_, <fwr_dbl_t*>np.PyArray_DATA(upper_), means_shape_, <fwr_dbl_t*>np.PyArray_DATA(means_), covar_shape_, <fwr_dbl_t*>np.PyArray_DATA(covar_), &maxpts, &abseps, &releps, &value, &inform, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mvnun' wrapper.")
    return (d, n, lower, upper, means, covar, maxpts, abseps, releps, value, inform,)


cpdef api object mvndst(fwi_integer_t n, object lower, object upper, object infin, object correl, fwi_integer_t maxpts, fwr_dbl_t abseps, fwr_dbl_t releps, fwr_dbl_t error, fwr_dbl_t value, fwi_integer_t inform):
    """
    mvndst(n, lower, upper, infin, correl, maxpts, abseps, releps, error, value, inform) -> (n, lower, upper, infin, correl, maxpts, abseps, releps, error, value, inform)

    Parameters
    ----------
    n : fwi_integer, intent inout
    lower : fwr_dbl, 1D array, dimension(*), intent inout
    upper : fwr_dbl, 1D array, dimension(*), intent inout
    infin : fwi_integer, 1D array, dimension(*), intent inout
    correl : fwr_dbl, 1D array, dimension(*), intent inout
    maxpts : fwi_integer, intent inout
    abseps : fwr_dbl, intent inout
    releps : fwr_dbl, intent inout
    error : fwr_dbl, intent inout
    value : fwr_dbl, intent inout
    inform : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    lower : fwr_dbl, 1D array, dimension(*), intent inout
    upper : fwr_dbl, 1D array, dimension(*), intent inout
    infin : fwi_integer, 1D array, dimension(*), intent inout
    correl : fwr_dbl, 1D array, dimension(*), intent inout
    maxpts : fwi_integer, intent inout
    abseps : fwr_dbl, intent inout
    releps : fwr_dbl, intent inout
    error : fwr_dbl, intent inout
    value : fwr_dbl, intent inout
    inform : fwi_integer, intent inout

    """
    cdef np.ndarray lower_
    cdef fw_shape_t lower_shape_[1]
    cdef np.ndarray upper_
    cdef fw_shape_t upper_shape_[1]
    cdef np.ndarray infin_
    cdef fw_shape_t infin_shape_[1]
    cdef np.ndarray correl_
    cdef fw_shape_t correl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    lower_, lower = fw_asfortranarray(lower, fwr_dbl_t_enum, 1, False)
    fw_copyshape(lower_shape_, np.PyArray_DIMS(lower_), 1)
    upper_, upper = fw_asfortranarray(upper, fwr_dbl_t_enum, 1, False)
    fw_copyshape(upper_shape_, np.PyArray_DIMS(upper_), 1)
    infin_, infin = fw_asfortranarray(infin, fwi_integer_t_enum, 1, False)
    fw_copyshape(infin_shape_, np.PyArray_DIMS(infin_), 1)
    correl_, correl = fw_asfortranarray(correl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(correl_shape_, np.PyArray_DIMS(correl_), 1)
    mvndst_c(&n, lower_shape_, <fwr_dbl_t*>np.PyArray_DATA(lower_), upper_shape_, <fwr_dbl_t*>np.PyArray_DATA(upper_), infin_shape_, <fwi_integer_t*>np.PyArray_DATA(infin_), correl_shape_, <fwr_dbl_t*>np.PyArray_DATA(correl_), &maxpts, &abseps, &releps, &error, &value, &inform, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mvndst' wrapper.")
    return (n, lower, upper, infin, correl, maxpts, abseps, releps, error, value, inform,)


cpdef api object mvndfn(fwi_integer_t n, object w):
    """
    mvndfn(n, w) -> (fw_ret_arg, n, w)

    Parameters
    ----------
    n : fwi_integer, intent inout
    w : fwr_dbl, 1D array, dimension(*), intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    n : fwi_integer, intent inout
    w : fwr_dbl, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    w_, w = fw_asfortranarray(w, fwr_dbl_t_enum, 1, False)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    mvndfn_c(&fw_ret_arg, &n, w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mvndfn' wrapper.")
    return (fw_ret_arg, n, w,)


cpdef api object mvnlms(fwr_dbl_t a, fwr_dbl_t b, fwi_integer_t infin, fwr_dbl_t lower, fwr_dbl_t upper):
    """
    mvnlms(a, b, infin, lower, upper) -> (a, b, infin, lower, upper)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    infin : fwi_integer, intent inout
    lower : fwr_dbl, intent inout
    upper : fwr_dbl, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    infin : fwi_integer, intent inout
    lower : fwr_dbl, intent inout
    upper : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    mvnlms_c(&a, &b, &infin, &lower, &upper, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mvnlms' wrapper.")
    return (a, b, infin, lower, upper,)


cpdef api object covsrt(fwi_integer_t n, object lower, object upper, object correl, object infin, object y, fwi_integer_t infis, object a, object b, object cov, object infi):
    """
    covsrt(n, lower, upper, correl, infin, y, infis, a, b, cov, infi) -> (n, lower, upper, correl, infin, y, infis, a, b, cov, infi)

    Parameters
    ----------
    n : fwi_integer, intent inout
    lower : fwr_dbl, 1D array, dimension(*), intent inout
    upper : fwr_dbl, 1D array, dimension(*), intent inout
    correl : fwr_dbl, 1D array, dimension(*), intent inout
    infin : fwi_integer, 1D array, dimension(*), intent inout
    y : fwr_dbl, 1D array, dimension(*), intent inout
    infis : fwi_integer, intent inout
    a : fwr_dbl, 1D array, dimension(*), intent inout
    b : fwr_dbl, 1D array, dimension(*), intent inout
    cov : fwr_dbl, 1D array, dimension(*), intent inout
    infi : fwi_integer, 1D array, dimension(*), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    lower : fwr_dbl, 1D array, dimension(*), intent inout
    upper : fwr_dbl, 1D array, dimension(*), intent inout
    correl : fwr_dbl, 1D array, dimension(*), intent inout
    infin : fwi_integer, 1D array, dimension(*), intent inout
    y : fwr_dbl, 1D array, dimension(*), intent inout
    infis : fwi_integer, intent inout
    a : fwr_dbl, 1D array, dimension(*), intent inout
    b : fwr_dbl, 1D array, dimension(*), intent inout
    cov : fwr_dbl, 1D array, dimension(*), intent inout
    infi : fwi_integer, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray lower_
    cdef fw_shape_t lower_shape_[1]
    cdef np.ndarray upper_
    cdef fw_shape_t upper_shape_[1]
    cdef np.ndarray correl_
    cdef fw_shape_t correl_shape_[1]
    cdef np.ndarray infin_
    cdef fw_shape_t infin_shape_[1]
    cdef np.ndarray y_
    cdef fw_shape_t y_shape_[1]
    cdef np.ndarray a_
    cdef fw_shape_t a_shape_[1]
    cdef np.ndarray b_
    cdef fw_shape_t b_shape_[1]
    cdef np.ndarray cov_
    cdef fw_shape_t cov_shape_[1]
    cdef np.ndarray infi_
    cdef fw_shape_t infi_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    lower_, lower = fw_asfortranarray(lower, fwr_dbl_t_enum, 1, False)
    fw_copyshape(lower_shape_, np.PyArray_DIMS(lower_), 1)
    upper_, upper = fw_asfortranarray(upper, fwr_dbl_t_enum, 1, False)
    fw_copyshape(upper_shape_, np.PyArray_DIMS(upper_), 1)
    correl_, correl = fw_asfortranarray(correl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(correl_shape_, np.PyArray_DIMS(correl_), 1)
    infin_, infin = fw_asfortranarray(infin, fwi_integer_t_enum, 1, False)
    fw_copyshape(infin_shape_, np.PyArray_DIMS(infin_), 1)
    y_, y = fw_asfortranarray(y, fwr_dbl_t_enum, 1, False)
    fw_copyshape(y_shape_, np.PyArray_DIMS(y_), 1)
    a_, a = fw_asfortranarray(a, fwr_dbl_t_enum, 1, False)
    fw_copyshape(a_shape_, np.PyArray_DIMS(a_), 1)
    b_, b = fw_asfortranarray(b, fwr_dbl_t_enum, 1, False)
    fw_copyshape(b_shape_, np.PyArray_DIMS(b_), 1)
    cov_, cov = fw_asfortranarray(cov, fwr_dbl_t_enum, 1, False)
    fw_copyshape(cov_shape_, np.PyArray_DIMS(cov_), 1)
    infi_, infi = fw_asfortranarray(infi, fwi_integer_t_enum, 1, False)
    fw_copyshape(infi_shape_, np.PyArray_DIMS(infi_), 1)
    covsrt_c(&n, lower_shape_, <fwr_dbl_t*>np.PyArray_DATA(lower_), upper_shape_, <fwr_dbl_t*>np.PyArray_DATA(upper_), correl_shape_, <fwr_dbl_t*>np.PyArray_DATA(correl_), infin_shape_, <fwi_integer_t*>np.PyArray_DATA(infin_), y_shape_, <fwr_dbl_t*>np.PyArray_DATA(y_), &infis, a_shape_, <fwr_dbl_t*>np.PyArray_DATA(a_), b_shape_, <fwr_dbl_t*>np.PyArray_DATA(b_), cov_shape_, <fwr_dbl_t*>np.PyArray_DATA(cov_), infi_shape_, <fwi_integer_t*>np.PyArray_DATA(infi_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'covsrt' wrapper.")
    return (n, lower, upper, correl, infin, y, infis, a, b, cov, infi,)


cpdef api object dkswap(fwr_dbl_t x, fwr_dbl_t y):
    """
    dkswap(x, y) -> (x, y)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    dkswap_c(&x, &y, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'dkswap' wrapper.")
    return (x, y,)


cpdef api object rcswp(fwi_integer_t p, fwi_integer_t q, object a, object b, object infin, fwi_integer_t n, object c):
    """
    rcswp(p, q, a, b, infin, n, c) -> (p, q, a, b, infin, n, c)

    Parameters
    ----------
    p : fwi_integer, intent inout
    q : fwi_integer, intent inout
    a : fwr_dbl, 1D array, dimension(*), intent inout
    b : fwr_dbl, 1D array, dimension(*), intent inout
    infin : fwi_integer, 1D array, dimension(*), intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, 1D array, dimension(*), intent inout

    Returns
    -------
    p : fwi_integer, intent inout
    q : fwi_integer, intent inout
    a : fwr_dbl, 1D array, dimension(*), intent inout
    b : fwr_dbl, 1D array, dimension(*), intent inout
    infin : fwi_integer, 1D array, dimension(*), intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray a_
    cdef fw_shape_t a_shape_[1]
    cdef np.ndarray b_
    cdef fw_shape_t b_shape_[1]
    cdef np.ndarray infin_
    cdef fw_shape_t infin_shape_[1]
    cdef np.ndarray c_
    cdef fw_shape_t c_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    a_, a = fw_asfortranarray(a, fwr_dbl_t_enum, 1, False)
    fw_copyshape(a_shape_, np.PyArray_DIMS(a_), 1)
    b_, b = fw_asfortranarray(b, fwr_dbl_t_enum, 1, False)
    fw_copyshape(b_shape_, np.PyArray_DIMS(b_), 1)
    infin_, infin = fw_asfortranarray(infin, fwi_integer_t_enum, 1, False)
    fw_copyshape(infin_shape_, np.PyArray_DIMS(infin_), 1)
    c_, c = fw_asfortranarray(c, fwr_dbl_t_enum, 1, False)
    fw_copyshape(c_shape_, np.PyArray_DIMS(c_), 1)
    rcswp_c(&p, &q, a_shape_, <fwr_dbl_t*>np.PyArray_DATA(a_), b_shape_, <fwr_dbl_t*>np.PyArray_DATA(b_), infin_shape_, <fwi_integer_t*>np.PyArray_DATA(infin_), &n, c_shape_, <fwr_dbl_t*>np.PyArray_DATA(c_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rcswp' wrapper.")
    return (p, q, a, b, infin, n, c,)


cpdef api object dkbvrc(fwi_integer_t ndim, fwi_integer_t minvls, fwi_integer_t maxvls, fwr_dbl_t functn, fwr_dbl_t abseps, fwr_dbl_t releps, fwr_dbl_t abserr, fwr_dbl_t finest, fwi_integer_t inform):
    """
    dkbvrc(ndim, minvls, maxvls, functn, abseps, releps, abserr, finest, inform) -> (ndim, minvls, maxvls, functn, abseps, releps, abserr, finest, inform)

    Parameters
    ----------
    ndim : fwi_integer, intent inout
    minvls : fwi_integer, intent inout
    maxvls : fwi_integer, intent inout
    functn : fwr_dbl, intent inout
    abseps : fwr_dbl, intent inout
    releps : fwr_dbl, intent inout
    abserr : fwr_dbl, intent inout
    finest : fwr_dbl, intent inout
    inform : fwi_integer, intent inout

    Returns
    -------
    ndim : fwi_integer, intent inout
    minvls : fwi_integer, intent inout
    maxvls : fwi_integer, intent inout
    functn : fwr_dbl, intent inout
    abseps : fwr_dbl, intent inout
    releps : fwr_dbl, intent inout
    abserr : fwr_dbl, intent inout
    finest : fwr_dbl, intent inout
    inform : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    dkbvrc_c(&ndim, &minvls, &maxvls, &functn, &abseps, &releps, &abserr, &finest, &inform, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'dkbvrc' wrapper.")
    return (ndim, minvls, maxvls, functn, abseps, releps, abserr, finest, inform,)


cpdef api object dksmrc(fwi_integer_t ndim, fwi_integer_t klim, fwr_dbl_t sumkro, fwi_integer_t prime, object vk, fwr_dbl_t functn, object x):
    """
    dksmrc(ndim, klim, sumkro, prime, vk, functn, x) -> (ndim, klim, sumkro, prime, vk, functn, x)

    Parameters
    ----------
    ndim : fwi_integer, intent inout
    klim : fwi_integer, intent inout
    sumkro : fwr_dbl, intent inout
    prime : fwi_integer, intent inout
    vk : fwr_dbl, 1D array, dimension(*), intent inout
    functn : fwr_dbl, intent inout
    x : fwr_dbl, 1D array, dimension(*), intent inout

    Returns
    -------
    ndim : fwi_integer, intent inout
    klim : fwi_integer, intent inout
    sumkro : fwr_dbl, intent inout
    prime : fwi_integer, intent inout
    vk : fwr_dbl, 1D array, dimension(*), intent inout
    functn : fwr_dbl, intent inout
    x : fwr_dbl, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray vk_
    cdef fw_shape_t vk_shape_[1]
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vk_, vk = fw_asfortranarray(vk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(vk_shape_, np.PyArray_DIMS(vk_), 1)
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    dksmrc_c(&ndim, &klim, &sumkro, &prime, vk_shape_, <fwr_dbl_t*>np.PyArray_DATA(vk_), &functn, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'dksmrc' wrapper.")
    return (ndim, klim, sumkro, prime, vk, functn, x,)


cpdef api object mvnphi(fwr_dbl_t z):
    """
    mvnphi(z) -> (fw_ret_arg, z)

    Parameters
    ----------
    z : fwr_dbl, intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    z : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    mvnphi_c(&fw_ret_arg, &z, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mvnphi' wrapper.")
    return (fw_ret_arg, z,)


cpdef api object phinvs(fwr_dbl_t p):
    """
    phinvs(p) -> (fw_ret_arg, p)

    Parameters
    ----------
    p : fwr_dbl, intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    p : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    phinvs_c(&fw_ret_arg, &p, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'phinvs' wrapper.")
    return (fw_ret_arg, p,)


cpdef api object bvnmvn(object lower, object upper, object infin, fwr_dbl_t correl):
    """
    bvnmvn(lower, upper, infin, correl) -> (fw_ret_arg, lower, upper, infin, correl)

    Parameters
    ----------
    lower : fwr_dbl, 1D array, dimension(*), intent inout
    upper : fwr_dbl, 1D array, dimension(*), intent inout
    infin : fwi_integer, 1D array, dimension(*), intent inout
    correl : fwr_dbl, intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    lower : fwr_dbl, 1D array, dimension(*), intent inout
    upper : fwr_dbl, 1D array, dimension(*), intent inout
    infin : fwi_integer, 1D array, dimension(*), intent inout
    correl : fwr_dbl, intent inout

    """
    cdef np.ndarray lower_
    cdef fw_shape_t lower_shape_[1]
    cdef np.ndarray upper_
    cdef fw_shape_t upper_shape_[1]
    cdef np.ndarray infin_
    cdef fw_shape_t infin_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    lower_, lower = fw_asfortranarray(lower, fwr_dbl_t_enum, 1, False)
    fw_copyshape(lower_shape_, np.PyArray_DIMS(lower_), 1)
    upper_, upper = fw_asfortranarray(upper, fwr_dbl_t_enum, 1, False)
    fw_copyshape(upper_shape_, np.PyArray_DIMS(upper_), 1)
    infin_, infin = fw_asfortranarray(infin, fwi_integer_t_enum, 1, False)
    fw_copyshape(infin_shape_, np.PyArray_DIMS(infin_), 1)
    bvnmvn_c(&fw_ret_arg, lower_shape_, <fwr_dbl_t*>np.PyArray_DATA(lower_), upper_shape_, <fwr_dbl_t*>np.PyArray_DATA(upper_), infin_shape_, <fwi_integer_t*>np.PyArray_DATA(infin_), &correl, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bvnmvn' wrapper.")
    return (fw_ret_arg, lower, upper, infin, correl,)


cpdef api object bvu(fwr_dbl_t sh, fwr_dbl_t sk, fwr_dbl_t r):
    """
    bvu(sh, sk, r) -> (fw_ret_arg, sh, sk, r)

    Parameters
    ----------
    sh : fwr_dbl, intent inout
    sk : fwr_dbl, intent inout
    r : fwr_dbl, intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    sh : fwr_dbl, intent inout
    sk : fwr_dbl, intent inout
    r : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bvu_c(&fw_ret_arg, &sh, &sk, &r, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bvu' wrapper.")
    return (fw_ret_arg, sh, sk, r,)


cpdef api object mvnuni():
    """
    mvnuni() -> fw_ret_arg

    Parameters
    ----------
    None

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    mvnuni_c(&fw_ret_arg, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mvnuni' wrapper.")
    return fw_ret_arg



cdef void fw_copyshape(fw_shape_t *target, np.intp_t *source, int ndim):
    # In f77binding mode, we do not always have fw_shape_t and np.npy_intp
    # as the same type, so must make a copy
    cdef int i
    for i in range(ndim):
        target[i] = source[i]

cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy):
    cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST
    if ndim <= 1:
        # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
        flags |= np.NPY_C_CONTIGUOUS
    if copy:
        flags |= np.NPY_ENSURECOPY
    result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)

    if ndim == result.ndim:
        return result, result
    else:
        to_shape = [None] * ndim
        fw_f2py_shape_coercion(ndim, to_shape, result.ndim, result.shape,
                               result.size)
        return result.reshape(to_shape, order='F'), result

cdef object fw_f2py_shape_coercion(int to_ndim, object to_shape,
                                   int from_ndim, object from_shape,
                                   Py_ssize_t from_size):
    # Logic ported from check_and_fix_dimensions in fortranobject.c
    # Todo: optimize
    if to_ndim > from_ndim:
        to_size = 1
        free_ax = -1
        for i in range(from_ndim):
            d = from_shape[i]
            if d == 0:
                d = 1
            to_shape[i] = d
            to_size *= d
        for i in range(from_ndim, to_ndim):
            if free_ax < 0:
                free_ax = i
            else:
                to_shape[i] = 1
        if free_ax >= 0:
            to_shape[free_ax] = from_size // to_size
    elif to_ndim < from_ndim:
        j = 0
        for i in range(from_ndim):
            while j < from_ndim and from_shape[j] < 2:
                j += 1
            if j >= from_ndim:
                d = 1
            else:
                d = from_shape[j]
                j += 1
            if i < to_ndim:
                to_shape[i] = d
            else:
                to_shape[to_ndim - 1] *= d

# Fwrap configuration:
# Fwrap: version 0.2.0dev_470490d
# Fwrap: self-sha1 ae9426402166d8ba0c07ab8f65716a064bddb136
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps src/mvndst.f
# Fwrap:     sha1 3048e094d20be8b3e25e2882c1c93934a6e5881b
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary mvn.pxd
# Fwrap: auxiliary mvn_fc.f
# Fwrap: auxiliary mvn_fc.h
# Fwrap: auxiliary mvn_fc.pxd

