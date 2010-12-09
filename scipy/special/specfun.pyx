#cython: ccomplex=True

"""
The specfun module was generated with Fwrap v0.2.0dev_2a63538.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
airyzo(...)
aswfb(...)
bernoa(...)
bernob(...)
cerzo(...)
chgm(...)
clpmn(...)
clpn(...)
clqmn(...)
clqn(...)
cpbdn(...)
csphik(...)
csphjy(...)
cva1(...)
cyzo(...)
eulera(...)
eulerb(...)
fcoef(...)
fcszo(...)
herzo(...)
jdzo(...)
jyzo(...)
klvnzo(...)
lagzo(...)
lamn(...)
lamv(...)
legzo(...)
lpmn(...)
lpmns(...)
lpn(...)
lpni(...)
lqmn(...)
lqmns(...)
lqna(...)
lqnb(...)
othpl(...)
pbdv(...)
pbvv(...)
rctj(...)
rcty(...)
segv(...)
sphi(...)
sphj(...)
sphk(...)
sphy(...)

Data Types
----------
fw_character
fw_shape
fwc_complex_x16
fwi_integer
fwr_dbl

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cdef extern from "math.h":
    double fabs(double)
cpdef api object lqmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object qm=None, object qd=None):
    """
    lqmn(m, n, x, [qm, qd]) -> (qm, qd)

    Parameters
    ----------
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    qm : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent out
    qd : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent out

    Returns
    -------
    qm : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent out
    qd : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent out

    """
    cdef np.ndarray qm_
    cdef fw_shape_t qm_shape_[2]
    cdef np.ndarray qd_
    cdef fw_shape_t qd_shape_[2]
    cdef fwi_integer_t mm
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    mm = m
    qm_, qm = fw_explicitshapearray(qm, fwr_dbl_t_enum, 2, [mm - 0 + 1, n - 0 + 1], False)
    fw_copyshape(qm_shape_, np.PyArray_DIMS(qm_), 2)
    qd_, qd = fw_explicitshapearray(qd, fwr_dbl_t_enum, 2, [mm - 0 + 1, n - 0 + 1], False)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 2)
    if not (m >= 1):
        raise ValueError('Condition on arguments not satisfied: m >= 1')
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    lqmn_c(&mm, &m, &n, &x, qm_shape_, <fwr_dbl_t*>np.PyArray_DATA(qm_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqmn' wrapper.")
    return (qm, qd,)


cpdef api object clpmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, fwr_dbl_t y, object cpm=None, object cpd=None):
    """
    clpmn(m, n, x, y, [cpm, cpd]) -> (cpm, cpd)

    Parameters
    ----------
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    y : fwr_dbl, intent in
    cpm : fwc_complex_x16, 2D array, dimension(0:m, 0:n), intent out
    cpd : fwc_complex_x16, 2D array, dimension(0:m, 0:n), intent out

    Returns
    -------
    cpm : fwc_complex_x16, 2D array, dimension(0:m, 0:n), intent out
    cpd : fwc_complex_x16, 2D array, dimension(0:m, 0:n), intent out

    """
    cdef np.ndarray cpm_
    cdef fw_shape_t cpm_shape_[2]
    cdef np.ndarray cpd_
    cdef fw_shape_t cpd_shape_[2]
    cdef fwi_integer_t mm
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpm_, cpm = fw_explicitshapearray(cpm, fwc_complex_x16_t_enum, 2, [m - 0 + 1, n - 0 + 1], False)
    fw_copyshape(cpm_shape_, np.PyArray_DIMS(cpm_), 2)
    cpd_, cpd = fw_explicitshapearray(cpd, fwc_complex_x16_t_enum, 2, [m - 0 + 1, n - 0 + 1], False)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 2)
    mm = m
    if not (m >= 0):
        raise ValueError('Condition on arguments not satisfied: m >= 0')
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    clpmn_c(&mm, &m, &n, &x, &y, cpm_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpm_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clpmn' wrapper.")
    return (cpm, cpd,)


cpdef api object jdzo(fwi_integer_t nt, object n=None, object m=None, object pcode=None, object zo=None):
    """
    jdzo(nt, [n, m, pcode, zo]) -> (n, m, pcode, zo)

    Parameters
    ----------
    nt : fwi_integer, intent in
    n : fwi_integer, 1D array, dimension(1400), intent out
    m : fwi_integer, 1D array, dimension(1400), intent out
    pcode : fwi_integer, 1D array, dimension(1400), intent out
    zo : fwr_dbl, 1D array, dimension(0:1400), intent out

    Returns
    -------
    n : fwi_integer, 1D array, dimension(1400), intent out
    m : fwi_integer, 1D array, dimension(1400), intent out
    pcode : fwi_integer, 1D array, dimension(1400), intent out
    zo : fwr_dbl, 1D array, dimension(0:1400), intent out

    """
    cdef np.ndarray n_
    cdef fw_shape_t n_shape_[1]
    cdef np.ndarray m_
    cdef fw_shape_t m_shape_[1]
    cdef np.ndarray pcode_
    cdef fw_shape_t pcode_shape_[1]
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    n_, n = fw_explicitshapearray(n, fwi_integer_t_enum, 1, [1400], False)
    fw_copyshape(n_shape_, np.PyArray_DIMS(n_), 1)
    m_, m = fw_explicitshapearray(m, fwi_integer_t_enum, 1, [1400], False)
    fw_copyshape(m_shape_, np.PyArray_DIMS(m_), 1)
    pcode_, pcode = fw_explicitshapearray(pcode, fwi_integer_t_enum, 1, [1400], False)
    fw_copyshape(pcode_shape_, np.PyArray_DIMS(pcode_), 1)
    zo_, zo = fw_explicitshapearray(zo, fwr_dbl_t_enum, 1, [1400 - 0 + 1], False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    if not ((nt > 0) and (nt <= 1200)):
        raise ValueError('Condition on arguments not satisfied: (nt > 0) and (nt <= 1200)')
    jdzo_c(&nt, n_shape_, <fwi_integer_t*>np.PyArray_DATA(n_), m_shape_, <fwi_integer_t*>np.PyArray_DATA(m_), pcode_shape_, <fwi_integer_t*>np.PyArray_DATA(pcode_), zo_shape_, <fwr_dbl_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jdzo' wrapper.")
    return (n, m, pcode, zo,)


cpdef api object bernob(fwi_integer_t n, object bn=None):
    """
    bernob(n, [bn]) -> bn

    Parameters
    ----------
    n : fwi_integer, intent in
    bn : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    bn : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray bn_
    cdef fw_shape_t bn_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bn_, bn = fw_explicitshapearray(bn, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(bn_shape_, np.PyArray_DIMS(bn_), 1)
    if not (n >= 2):
        raise ValueError('Condition on arguments not satisfied: n >= 2')
    bernob_c(&n, bn_shape_, <fwr_dbl_t*>np.PyArray_DATA(bn_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bernob' wrapper.")
    return bn


cpdef api object bernoa(fwi_integer_t n, object bn=None):
    """
    bernoa(n, [bn]) -> bn

    Parameters
    ----------
    n : fwi_integer, intent in
    bn : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    bn : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray bn_
    cdef fw_shape_t bn_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bn_, bn = fw_explicitshapearray(bn, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(bn_shape_, np.PyArray_DIMS(bn_), 1)
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    bernoa_c(&n, bn_shape_, <fwr_dbl_t*>np.PyArray_DATA(bn_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bernoa' wrapper.")
    return bn


cpdef api object csphjy(fwi_integer_t n, fwc_complex_x16_t z, object csj=None, object cdj=None, object csy=None, object cdy=None):
    """
    csphjy(n, z, [csj, cdj, csy, cdy]) -> (nm, csj, cdj, csy, cdy)

    Parameters
    ----------
    n : fwi_integer, intent in
    z : fwc_complex_x16, intent in
    csj : fwc_complex_x16, 1D array, dimension(n + 1), intent out
    cdj : fwc_complex_x16, 1D array, dimension(n + 1), intent out
    csy : fwc_complex_x16, 1D array, dimension(n + 1), intent out
    cdy : fwc_complex_x16, 1D array, dimension(n + 1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    csj : fwc_complex_x16, 1D array, dimension(n + 1), intent out
    cdj : fwc_complex_x16, 1D array, dimension(n + 1), intent out
    csy : fwc_complex_x16, 1D array, dimension(n + 1), intent out
    cdy : fwc_complex_x16, 1D array, dimension(n + 1), intent out

    """
    cdef np.ndarray csj_
    cdef fw_shape_t csj_shape_[1]
    cdef np.ndarray cdj_
    cdef fw_shape_t cdj_shape_[1]
    cdef np.ndarray csy_
    cdef fw_shape_t csy_shape_[1]
    cdef np.ndarray cdy_
    cdef fw_shape_t cdy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    csj_, csj = fw_explicitshapearray(csj, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(csj_shape_, np.PyArray_DIMS(csj_), 1)
    cdj_, cdj = fw_explicitshapearray(cdj, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(cdj_shape_, np.PyArray_DIMS(cdj_), 1)
    csy_, csy = fw_explicitshapearray(csy, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(csy_shape_, np.PyArray_DIMS(csy_), 1)
    cdy_, cdy = fw_explicitshapearray(cdy, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(cdy_shape_, np.PyArray_DIMS(cdy_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    csphjy_c(&n, &z, &nm, csj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csj_), cdj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), csy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csy_), cdy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'csphjy' wrapper.")
    return (nm, csj, cdj, csy, cdy,)


cpdef api object lpmns(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object pm=None, object pd=None):
    """
    lpmns(m, n, x, [pm, pd]) -> (pm, pd)

    Parameters
    ----------
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    pm : fwr_dbl, 1D array, dimension(n+1), intent out
    pd : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    pm : fwr_dbl, 1D array, dimension(n+1), intent out
    pd : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray pm_
    cdef fw_shape_t pm_shape_[1]
    cdef np.ndarray pd_
    cdef fw_shape_t pd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pm_, pm = fw_explicitshapearray(pm, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(pm_shape_, np.PyArray_DIMS(pm_), 1)
    pd_, pd = fw_explicitshapearray(pd, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    if not ((m >= 0) and (m <= n)):
        raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    lpmns_c(&m, &n, &x, pm_shape_, <fwr_dbl_t*>np.PyArray_DATA(pm_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpmns' wrapper.")
    return (pm, pd,)


cpdef api object eulera(fwi_integer_t n, object en=None):
    """
    eulera(n, [en]) -> en

    Parameters
    ----------
    n : fwi_integer, intent in
    en : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    en : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray en_
    cdef fw_shape_t en_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    en_, en = fw_explicitshapearray(en, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(en_shape_, np.PyArray_DIMS(en_), 1)
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    eulera_c(&n, en_shape_, <fwr_dbl_t*>np.PyArray_DATA(en_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'eulera' wrapper.")
    return en


cpdef api object clqn(fwi_integer_t n, fwc_complex_x16_t z, object cqn=None, object cqd=None):
    """
    clqn(n, z, [cqn, cqd]) -> (cqn, cqd)

    Parameters
    ----------
    n : fwi_integer, intent in
    z : fwc_complex_x16, intent in
    cqn : fwc_complex_x16, 1D array, dimension(n+1), intent out
    cqd : fwc_complex_x16, 1D array, dimension(n+1), intent out

    Returns
    -------
    cqn : fwc_complex_x16, 1D array, dimension(n+1), intent out
    cqd : fwc_complex_x16, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray cqn_
    cdef fw_shape_t cqn_shape_[1]
    cdef np.ndarray cqd_
    cdef fw_shape_t cqd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t x_f
    cdef fwr_dbl_t y_f
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cqn_, cqn = fw_explicitshapearray(cqn, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(cqn_shape_, np.PyArray_DIMS(cqn_), 1)
    cqd_, cqd = fw_explicitshapearray(cqd, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(cqd_shape_, np.PyArray_DIMS(cqd_), 1)
    x_f = z.real
    y_f = z.imag
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    clqn_c(&n, &x_f, &y_f, cqn_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqn_), cqd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clqn' wrapper.")
    return (cqn, cqd,)


cpdef api object airyzo(fwi_integer_t nt, fwi_integer_t kf=1, object xa=None, object xb=None, object xc=None, object xd=None):
    """
    airyzo(nt, kf, [xa, xb, xc, xd]) -> (xa, xb, xc, xd)

    Parameters
    ----------
    nt : fwi_integer, intent in
    kf : fwi_integer, intent in
    xa : fwr_dbl, 1D array, dimension(nt), intent out
    xb : fwr_dbl, 1D array, dimension(nt), intent out
    xc : fwr_dbl, 1D array, dimension(nt), intent out
    xd : fwr_dbl, 1D array, dimension(nt), intent out

    Returns
    -------
    xa : fwr_dbl, 1D array, dimension(nt), intent out
    xb : fwr_dbl, 1D array, dimension(nt), intent out
    xc : fwr_dbl, 1D array, dimension(nt), intent out
    xd : fwr_dbl, 1D array, dimension(nt), intent out

    """
    cdef np.ndarray xa_
    cdef fw_shape_t xa_shape_[1]
    cdef np.ndarray xb_
    cdef fw_shape_t xb_shape_[1]
    cdef np.ndarray xc_
    cdef fw_shape_t xc_shape_[1]
    cdef np.ndarray xd_
    cdef fw_shape_t xd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    xa_, xa = fw_explicitshapearray(xa, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(xa_shape_, np.PyArray_DIMS(xa_), 1)
    xb_, xb = fw_explicitshapearray(xb, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(xb_shape_, np.PyArray_DIMS(xb_), 1)
    xc_, xc = fw_explicitshapearray(xc, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(xc_shape_, np.PyArray_DIMS(xc_), 1)
    xd_, xd = fw_explicitshapearray(xd, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(xd_shape_, np.PyArray_DIMS(xd_), 1)
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    airyzo_c(&nt, &kf, xa_shape_, <fwr_dbl_t*>np.PyArray_DATA(xa_), xb_shape_, <fwr_dbl_t*>np.PyArray_DATA(xb_), xc_shape_, <fwr_dbl_t*>np.PyArray_DATA(xc_), xd_shape_, <fwr_dbl_t*>np.PyArray_DATA(xd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'airyzo' wrapper.")
    return (xa, xb, xc, xd,)


cpdef api object eulerb(fwi_integer_t n, object en=None):
    """
    eulerb(n, [en]) -> en

    Parameters
    ----------
    n : fwi_integer, intent in
    en : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    en : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray en_
    cdef fw_shape_t en_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    en_, en = fw_explicitshapearray(en, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(en_shape_, np.PyArray_DIMS(en_), 1)
    if not (n >= 2):
        raise ValueError('Condition on arguments not satisfied: n >= 2')
    eulerb_c(&n, en_shape_, <fwr_dbl_t*>np.PyArray_DATA(en_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'eulerb' wrapper.")
    return en


cpdef api object cva1(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, object cv=None):
    """
    cva1(kd, m, q, [cv]) -> cv

    Parameters
    ----------
    kd : fwi_integer, intent in
    m : fwi_integer, intent in
    q : fwr_dbl, intent in
    cv : fwr_dbl, 1D array, dimension(m), intent out

    Returns
    -------
    cv : fwr_dbl, 1D array, dimension(m), intent out

    """
    cdef np.ndarray cv_
    cdef fw_shape_t cv_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cv_, cv = fw_explicitshapearray(cv, fwr_dbl_t_enum, 1, [m], False)
    fw_copyshape(cv_shape_, np.PyArray_DIMS(cv_), 1)
    if not (m <= 200):
        raise ValueError('Condition on arguments not satisfied: m <= 200')
    if not (q >= 0):
        raise ValueError('Condition on arguments not satisfied: q >= 0')
    cva1_c(&kd, &m, &q, cv_shape_, <fwr_dbl_t*>np.PyArray_DATA(cv_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cva1' wrapper.")
    return cv


cpdef api object lqnb(fwi_integer_t n, fwr_dbl_t x, object qn=None, object qd=None):
    """
    lqnb(n, x, [qn, qd]) -> (qn, qd)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    qn : fwr_dbl, 1D array, dimension(n+1), intent out
    qd : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    qn : fwr_dbl, 1D array, dimension(n+1), intent out
    qd : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray qn_
    cdef fw_shape_t qn_shape_[1]
    cdef np.ndarray qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qn_, qn = fw_explicitshapearray(qn, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(qn_shape_, np.PyArray_DIMS(qn_), 1)
    qd_, qd = fw_explicitshapearray(qd, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    lqnb_c(&n, &x, qn_shape_, <fwr_dbl_t*>np.PyArray_DATA(qn_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqnb' wrapper.")
    return (qn, qd,)


cpdef api object lamv(fwr_dbl_t v, fwr_dbl_t x, object vl=None, object dl=None):
    """
    lamv(v, x, [vl, dl]) -> (vm, vl, dl)

    Parameters
    ----------
    v : fwr_dbl, intent in
    x : fwr_dbl, intent in
    vl : fwr_dbl, 1D array, dimension((int)v+1), intent out
    dl : fwr_dbl, 1D array, dimension((int)v+1), intent out

    Returns
    -------
    vm : fwr_dbl, intent out
    vl : fwr_dbl, 1D array, dimension((int)v+1), intent out
    dl : fwr_dbl, 1D array, dimension((int)v+1), intent out

    """
    cdef np.ndarray vl_
    cdef fw_shape_t vl_shape_[1]
    cdef np.ndarray dl_
    cdef fw_shape_t dl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t vm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vl_, vl = fw_explicitshapearray(vl, fwr_dbl_t_enum, 1, [<int>v + 1], False)
    fw_copyshape(vl_shape_, np.PyArray_DIMS(vl_), 1)
    dl_, dl = fw_explicitshapearray(dl, fwr_dbl_t_enum, 1, [<int>v + 1], False)
    fw_copyshape(dl_shape_, np.PyArray_DIMS(dl_), 1)
    if not (v >= 1):
        raise ValueError('Condition on arguments not satisfied: v >= 1')
    lamv_c(&v, &x, &vm, vl_shape_, <fwr_dbl_t*>np.PyArray_DATA(vl_), dl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lamv' wrapper.")
    return (vm, vl, dl,)


cpdef api object lagzo(fwi_integer_t n, object x=None, object w=None):
    """
    lagzo(n, [x, w]) -> (x, w)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, 1D array, dimension(n), intent out
    w : fwr_dbl, 1D array, dimension(n), intent out

    Returns
    -------
    x : fwr_dbl, 1D array, dimension(n), intent out
    w : fwr_dbl, 1D array, dimension(n), intent out

    """
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_, x = fw_explicitshapearray(x, fwr_dbl_t_enum, 1, [n], False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_, w = fw_explicitshapearray(w, fwr_dbl_t_enum, 1, [n], False)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    lagzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lagzo' wrapper.")
    return (x, w,)


cpdef api object legzo(fwi_integer_t n, object x=None, object w=None):
    """
    legzo(n, [x, w]) -> (x, w)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, 1D array, dimension(n), intent out
    w : fwr_dbl, 1D array, dimension(n), intent out

    Returns
    -------
    x : fwr_dbl, 1D array, dimension(n), intent out
    w : fwr_dbl, 1D array, dimension(n), intent out

    """
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_, x = fw_explicitshapearray(x, fwr_dbl_t_enum, 1, [n], False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_, w = fw_explicitshapearray(w, fwr_dbl_t_enum, 1, [n], False)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    legzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'legzo' wrapper.")
    return (x, w,)


cpdef api object pbdv(fwr_dbl_t v, fwr_dbl_t x, object dv=None, object dp=None):
    """
    pbdv(v, x, [dv, dp]) -> (dv, dp, pdf, pdd)

    Parameters
    ----------
    v : fwr_dbl, intent in
    x : fwr_dbl, intent in
    dv : fwr_dbl, 1D array, dimension(abs((int)v)+2), intent out
    dp : fwr_dbl, 1D array, dimension(abs((int)v)+2), intent out

    Returns
    -------
    dv : fwr_dbl, 1D array, dimension(abs((int)v)+2), intent out
    dp : fwr_dbl, 1D array, dimension(abs((int)v)+2), intent out
    pdf : fwr_dbl, intent out
    pdd : fwr_dbl, intent out

    """
    cdef np.ndarray dv_
    cdef fw_shape_t dv_shape_[1]
    cdef np.ndarray dp_
    cdef fw_shape_t dp_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t pdf
    cdef fwr_dbl_t pdd
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    dv_, dv = fw_explicitshapearray(dv, fwr_dbl_t_enum, 1, [abs(<int>v) + 2], False)
    fw_copyshape(dv_shape_, np.PyArray_DIMS(dv_), 1)
    dp_, dp = fw_explicitshapearray(dp, fwr_dbl_t_enum, 1, [abs(<int>v) + 2], False)
    fw_copyshape(dp_shape_, np.PyArray_DIMS(dp_), 1)
    if not ((abs(<int>v) + 2) >= 2):
        raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
    pbdv_c(&v, &x, dv_shape_, <fwr_dbl_t*>np.PyArray_DATA(dv_), dp_shape_, <fwr_dbl_t*>np.PyArray_DATA(dp_), &pdf, &pdd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'pbdv' wrapper.")
    return (dv, dp, pdf, pdd,)


cpdef api object cerzo(fwi_integer_t nt, object zo=None):
    """
    cerzo(nt, [zo]) -> zo

    Parameters
    ----------
    nt : fwi_integer, intent in
    zo : fwc_complex_x16, 1D array, dimension(nt), intent out

    Returns
    -------
    zo : fwc_complex_x16, 1D array, dimension(nt), intent out

    """
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_, zo = fw_explicitshapearray(zo, fwc_complex_x16_t_enum, 1, [nt], False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    cerzo_c(&nt, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cerzo' wrapper.")
    return zo


cpdef api object lamn(fwi_integer_t n, fwr_dbl_t x, object bl=None, object dl=None):
    """
    lamn(n, x, [bl, dl]) -> (nm, bl, dl)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    bl : fwr_dbl, 1D array, dimension(n+1), intent out
    dl : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    bl : fwr_dbl, 1D array, dimension(n+1), intent out
    dl : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray bl_
    cdef fw_shape_t bl_shape_[1]
    cdef np.ndarray dl_
    cdef fw_shape_t dl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bl_, bl = fw_explicitshapearray(bl, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(bl_shape_, np.PyArray_DIMS(bl_), 1)
    dl_, dl = fw_explicitshapearray(dl, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(dl_shape_, np.PyArray_DIMS(dl_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    lamn_c(&n, &x, &nm, bl_shape_, <fwr_dbl_t*>np.PyArray_DATA(bl_), dl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lamn' wrapper.")
    return (nm, bl, dl,)


cpdef api object clpn(fwi_integer_t n, fwc_complex_x16_t z, object cpn=None, object cpd=None):
    """
    clpn(n, z, [cpn, cpd]) -> (cpn, cpd)

    Parameters
    ----------
    n : fwi_integer, intent in
    z : fwc_complex_x16, intent in
    cpn : fwc_complex_x16, 1D array, dimension(n+1), intent out
    cpd : fwc_complex_x16, 1D array, dimension(n+1), intent out

    Returns
    -------
    cpn : fwc_complex_x16, 1D array, dimension(n+1), intent out
    cpd : fwc_complex_x16, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray cpn_
    cdef fw_shape_t cpn_shape_[1]
    cdef np.ndarray cpd_
    cdef fw_shape_t cpd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t x_f
    cdef fwr_dbl_t y_f
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpn_, cpn = fw_explicitshapearray(cpn, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(cpn_shape_, np.PyArray_DIMS(cpn_), 1)
    cpd_, cpd = fw_explicitshapearray(cpd, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 1)
    x_f = z.real
    y_f = z.imag
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    clpn_c(&n, &x_f, &y_f, cpn_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpn_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clpn' wrapper.")
    return (cpn, cpd,)


cpdef api object lqmns(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object qm=None, object qd=None):
    """
    lqmns(m, n, x, [qm, qd]) -> (qm, qd)

    Parameters
    ----------
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    qm : fwr_dbl, 1D array, dimension(n+1), intent out
    qd : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    qm : fwr_dbl, 1D array, dimension(n+1), intent out
    qd : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray qm_
    cdef fw_shape_t qm_shape_[1]
    cdef np.ndarray qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qm_, qm = fw_explicitshapearray(qm, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(qm_shape_, np.PyArray_DIMS(qm_), 1)
    qd_, qd = fw_explicitshapearray(qd, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    if not (m >= 0):
        raise ValueError('Condition on arguments not satisfied: m >= 0')
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    lqmns_c(&m, &n, &x, qm_shape_, <fwr_dbl_t*>np.PyArray_DATA(qm_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqmns' wrapper.")
    return (qm, qd,)


cpdef api object chgm(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x):
    """
    chgm(a, b, x) -> hg

    Parameters
    ----------
    a : fwr_dbl, intent in
    b : fwr_dbl, intent in
    x : fwr_dbl, intent in

    Returns
    -------
    hg : fwr_dbl, intent out

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t hg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    chgm_c(&a, &b, &x, &hg, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'chgm' wrapper.")
    return hg


cpdef api object lpmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object pm=None, object pd=None):
    """
    lpmn(m, n, x, [pm, pd]) -> (pm, pd)

    Parameters
    ----------
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    pm : fwr_dbl, 2D array, dimension(m+1, n+1), intent out
    pd : fwr_dbl, 2D array, dimension(m+1, n+1), intent out

    Returns
    -------
    pm : fwr_dbl, 2D array, dimension(m+1, n+1), intent out
    pd : fwr_dbl, 2D array, dimension(m+1, n+1), intent out

    """
    cdef np.ndarray pm_
    cdef fw_shape_t pm_shape_[2]
    cdef np.ndarray pd_
    cdef fw_shape_t pd_shape_[2]
    cdef fwi_integer_t mm
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pm_, pm = fw_explicitshapearray(pm, fwr_dbl_t_enum, 2, [m + 1, n + 1], False)
    fw_copyshape(pm_shape_, np.PyArray_DIMS(pm_), 2)
    pd_, pd = fw_explicitshapearray(pd, fwr_dbl_t_enum, 2, [m + 1, n + 1], False)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 2)
    mm = m
    if not ((m >= 0) and (m <= n)):
        raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    lpmn_c(&mm, &m, &n, &x, pm_shape_, <fwr_dbl_t*>np.PyArray_DATA(pm_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpmn' wrapper.")
    return (pm, pd,)


cpdef api object fcszo(fwi_integer_t kf, fwi_integer_t nt, object zo=None):
    """
    fcszo(kf, nt, [zo]) -> zo

    Parameters
    ----------
    kf : fwi_integer, intent in
    nt : fwi_integer, intent in
    zo : fwc_complex_x16, 1D array, dimension(nt), intent out

    Returns
    -------
    zo : fwc_complex_x16, 1D array, dimension(nt), intent out

    """
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_, zo = fw_explicitshapearray(zo, fwc_complex_x16_t_enum, 1, [nt], False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    if not ((kf == 1) or (kf == 2)):
        raise ValueError('Condition on arguments not satisfied: (kf == 1) or (kf == 2)')
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    fcszo_c(&kf, &nt, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'fcszo' wrapper.")
    return zo


cpdef api object aswfb(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwi_integer_t kd, fwr_dbl_t cv):
    """
    aswfb(m, n, c, x, kd, cv) -> (s1f, s1d)

    Parameters
    ----------
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    c : fwr_dbl, intent in
    x : fwr_dbl, intent in
    kd : fwi_integer, intent in
    cv : fwr_dbl, intent in

    Returns
    -------
    s1f : fwr_dbl, intent out
    s1d : fwr_dbl, intent out

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t s1f
    cdef fwr_dbl_t s1d
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    if not (m >= 0):
        raise ValueError('Condition on arguments not satisfied: m >= 0')
    if not (n >= m):
        raise ValueError('Condition on arguments not satisfied: n >= m')
    if not (fabs(x)<1):
        raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
    if not ((kd == -1) or (kd == 1)):
        raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
    aswfb_c(&m, &n, &c, &x, &kd, &cv, &s1f, &s1d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'aswfb' wrapper.")
    return (s1f, s1d,)


cpdef api object lqna(fwi_integer_t n, fwr_dbl_t x, object qn=None, object qd=None):
    """
    lqna(n, x, [qn, qd]) -> (qn, qd)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    qn : fwr_dbl, 1D array, dimension(n+1), intent out
    qd : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    qn : fwr_dbl, 1D array, dimension(n+1), intent out
    qd : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray qn_
    cdef fw_shape_t qn_shape_[1]
    cdef np.ndarray qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qn_, qn = fw_explicitshapearray(qn, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(qn_shape_, np.PyArray_DIMS(qn_), 1)
    qd_, qd = fw_explicitshapearray(qd, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    if not (fabs(x)<1):
        raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
    lqna_c(&n, &x, qn_shape_, <fwr_dbl_t*>np.PyArray_DATA(qn_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqna' wrapper.")
    return (qn, qd,)


cpdef api object cpbdn(fwi_integer_t n, fwc_complex_x16_t z, object cpb=None, object cpd=None):
    """
    cpbdn(n, z, [cpb, cpd]) -> (cpb, cpd)

    Parameters
    ----------
    n : fwi_integer, intent in
    z : fwc_complex_x16, intent in
    cpb : fwc_complex_x16, 1D array, dimension(abs(n)+2), intent out
    cpd : fwc_complex_x16, 1D array, dimension(abs(n)+2), intent out

    Returns
    -------
    cpb : fwc_complex_x16, 1D array, dimension(abs(n)+2), intent out
    cpd : fwc_complex_x16, 1D array, dimension(abs(n)+2), intent out

    """
    cdef np.ndarray cpb_
    cdef fw_shape_t cpb_shape_[1]
    cdef np.ndarray cpd_
    cdef fw_shape_t cpd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpb_, cpb = fw_explicitshapearray(cpb, fwc_complex_x16_t_enum, 1, [abs(n) + 2], False)
    fw_copyshape(cpb_shape_, np.PyArray_DIMS(cpb_), 1)
    cpd_, cpd = fw_explicitshapearray(cpd, fwc_complex_x16_t_enum, 1, [abs(n) + 2], False)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 1)
    if not (abs(n) >= 1):
        raise ValueError('Condition on arguments not satisfied: abs(n) >= 1')
    cpbdn_c(&n, &z, cpb_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpb_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cpbdn' wrapper.")
    return (cpb, cpd,)


cpdef api object lpn(fwi_integer_t n, fwr_dbl_t x, object pn=None, object pd=None):
    """
    lpn(n, x, [pn, pd]) -> (pn, pd)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    pn : fwr_dbl, 1D array, dimension(n+1), intent out
    pd : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    pn : fwr_dbl, 1D array, dimension(n+1), intent out
    pd : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray pn_
    cdef fw_shape_t pn_shape_[1]
    cdef np.ndarray pd_
    cdef fw_shape_t pd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pn_, pn = fw_explicitshapearray(pn, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(pn_shape_, np.PyArray_DIMS(pn_), 1)
    pd_, pd = fw_explicitshapearray(pd, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    lpn_c(&n, &x, pn_shape_, <fwr_dbl_t*>np.PyArray_DATA(pn_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpn' wrapper.")
    return (pn, pd,)


cpdef api object fcoef(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a, object fc=None):
    """
    fcoef(kd, m, q, a, [fc]) -> fc

    Parameters
    ----------
    kd : fwi_integer, intent in
    m : fwi_integer, intent in
    q : fwr_dbl, intent in
    a : fwr_dbl, intent in
    fc : fwr_dbl, 1D array, dimension(251), intent out

    Returns
    -------
    fc : fwr_dbl, 1D array, dimension(251), intent out

    """
    cdef np.ndarray fc_
    cdef fw_shape_t fc_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fc_, fc = fw_explicitshapearray(fc, fwr_dbl_t_enum, 1, [251], False)
    fw_copyshape(fc_shape_, np.PyArray_DIMS(fc_), 1)
    if not ((kd > 0) and (kd < 5)):
        raise ValueError('Condition on arguments not satisfied: (kd > 0) and (kd < 5)')
    if not (q >= 0):
        raise ValueError('Condition on arguments not satisfied: q >= 0')
    fcoef_c(&kd, &m, &q, &a, fc_shape_, <fwr_dbl_t*>np.PyArray_DATA(fc_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'fcoef' wrapper.")
    return fc


cpdef api object sphi(fwi_integer_t n, fwr_dbl_t x, object si=None, object di=None):
    """
    sphi(n, x, [si, di]) -> (nm, si, di)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    si : fwr_dbl, 1D array, dimension(n + 1), intent out
    di : fwr_dbl, 1D array, dimension(n + 1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    si : fwr_dbl, 1D array, dimension(n + 1), intent out
    di : fwr_dbl, 1D array, dimension(n + 1), intent out

    """
    cdef np.ndarray si_
    cdef fw_shape_t si_shape_[1]
    cdef np.ndarray di_
    cdef fw_shape_t di_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    si_, si = fw_explicitshapearray(si, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(si_shape_, np.PyArray_DIMS(si_), 1)
    di_, di = fw_explicitshapearray(di, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(di_shape_, np.PyArray_DIMS(di_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    sphi_c(&n, &x, &nm, si_shape_, <fwr_dbl_t*>np.PyArray_DATA(si_), di_shape_, <fwr_dbl_t*>np.PyArray_DATA(di_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphi' wrapper.")
    return (nm, si, di,)


cpdef api object rcty(fwi_integer_t n, fwr_dbl_t x, object ry=None, object dy=None):
    """
    rcty(n, x, [ry, dy]) -> (nm, ry, dy)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    ry : fwr_dbl, 1D array, dimension(n+1), intent out
    dy : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    ry : fwr_dbl, 1D array, dimension(n+1), intent out
    dy : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray ry_
    cdef fw_shape_t ry_shape_[1]
    cdef np.ndarray dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ry_, ry = fw_explicitshapearray(ry, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(ry_shape_, np.PyArray_DIMS(ry_), 1)
    dy_, dy = fw_explicitshapearray(dy, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    rcty_c(&n, &x, &nm, ry_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry_), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rcty' wrapper.")
    return (nm, ry, dy,)


cpdef api object lpni(fwi_integer_t n, fwr_dbl_t x, object pn=None, object pd=None, object pl=None):
    """
    lpni(n, x, [pn, pd, pl]) -> (pn, pd, pl)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    pn : fwr_dbl, 1D array, dimension(n+1), intent out
    pd : fwr_dbl, 1D array, dimension(n+1), intent out
    pl : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    pn : fwr_dbl, 1D array, dimension(n+1), intent out
    pd : fwr_dbl, 1D array, dimension(n+1), intent out
    pl : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray pn_
    cdef fw_shape_t pn_shape_[1]
    cdef np.ndarray pd_
    cdef fw_shape_t pd_shape_[1]
    cdef np.ndarray pl_
    cdef fw_shape_t pl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pn_, pn = fw_explicitshapearray(pn, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(pn_shape_, np.PyArray_DIMS(pn_), 1)
    pd_, pd = fw_explicitshapearray(pd, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    pl_, pl = fw_explicitshapearray(pl, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(pl_shape_, np.PyArray_DIMS(pl_), 1)
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    lpni_c(&n, &x, pn_shape_, <fwr_dbl_t*>np.PyArray_DATA(pn_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), pl_shape_, <fwr_dbl_t*>np.PyArray_DATA(pl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpni' wrapper.")
    return (pn, pd, pl,)


cpdef api object cyzo(fwi_integer_t nt, fwi_integer_t kf, fwi_integer_t kc, object zo=None, object zv=None):
    """
    cyzo(nt, kf, kc, [zo, zv]) -> (zo, zv)

    Parameters
    ----------
    nt : fwi_integer, intent in
    kf : fwi_integer, intent in
    kc : fwi_integer, intent in
    zo : fwc_complex_x16, 1D array, dimension(nt), intent out
    zv : fwc_complex_x16, 1D array, dimension(nt), intent out

    Returns
    -------
    zo : fwc_complex_x16, 1D array, dimension(nt), intent out
    zv : fwc_complex_x16, 1D array, dimension(nt), intent out

    """
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef np.ndarray zv_
    cdef fw_shape_t zv_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_, zo = fw_explicitshapearray(zo, fwc_complex_x16_t_enum, 1, [nt], False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    zv_, zv = fw_explicitshapearray(zv, fwc_complex_x16_t_enum, 1, [nt], False)
    fw_copyshape(zv_shape_, np.PyArray_DIMS(zv_), 1)
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    if not ((kf >= 0) and (kf <= 2)):
        raise ValueError('Condition on arguments not satisfied: (kf >= 0) and (kf <= 2)')
    if not ((kc == 0) or (kc == 1)):
        raise ValueError('Condition on arguments not satisfied: (kc == 0) or (kc == 1)')
    cyzo_c(&nt, &kf, &kc, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), zv_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zv_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cyzo' wrapper.")
    return (zo, zv,)


cpdef api object csphik(fwi_integer_t n, fwc_complex_x16_t z, object csi=None, object cdi=None, object csk=None, object cdk=None):
    """
    csphik(n, z, [csi, cdi, csk, cdk]) -> (nm, csi, cdi, csk, cdk)

    Parameters
    ----------
    n : fwi_integer, intent in
    z : fwc_complex_x16, intent in
    csi : fwc_complex_x16, 1D array, dimension(n+1), intent out
    cdi : fwc_complex_x16, 1D array, dimension(n+1), intent out
    csk : fwc_complex_x16, 1D array, dimension(n+1), intent out
    cdk : fwc_complex_x16, 1D array, dimension(n+1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    csi : fwc_complex_x16, 1D array, dimension(n+1), intent out
    cdi : fwc_complex_x16, 1D array, dimension(n+1), intent out
    csk : fwc_complex_x16, 1D array, dimension(n+1), intent out
    cdk : fwc_complex_x16, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray csi_
    cdef fw_shape_t csi_shape_[1]
    cdef np.ndarray cdi_
    cdef fw_shape_t cdi_shape_[1]
    cdef np.ndarray csk_
    cdef fw_shape_t csk_shape_[1]
    cdef np.ndarray cdk_
    cdef fw_shape_t cdk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    csi_, csi = fw_explicitshapearray(csi, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(csi_shape_, np.PyArray_DIMS(csi_), 1)
    cdi_, cdi = fw_explicitshapearray(cdi, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(cdi_shape_, np.PyArray_DIMS(cdi_), 1)
    csk_, csk = fw_explicitshapearray(csk, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(csk_shape_, np.PyArray_DIMS(csk_), 1)
    cdk_, cdk = fw_explicitshapearray(cdk, fwc_complex_x16_t_enum, 1, [n + 1], False)
    fw_copyshape(cdk_shape_, np.PyArray_DIMS(cdk_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    csphik_c(&n, &z, &nm, csi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csi_), cdi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), csk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csk_), cdk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'csphik' wrapper.")
    return (nm, csi, cdi, csk, cdk,)


cpdef api object sphj(fwi_integer_t n, fwr_dbl_t x, object sj=None, object dj=None):
    """
    sphj(n, x, [sj, dj]) -> (nm, sj, dj)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    sj : fwr_dbl, 1D array, dimension(n+1), intent out
    dj : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    sj : fwr_dbl, 1D array, dimension(n+1), intent out
    dj : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray sj_
    cdef fw_shape_t sj_shape_[1]
    cdef np.ndarray dj_
    cdef fw_shape_t dj_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sj_, sj = fw_explicitshapearray(sj, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(sj_shape_, np.PyArray_DIMS(sj_), 1)
    dj_, dj = fw_explicitshapearray(dj, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    sphj_c(&n, &x, &nm, sj_shape_, <fwr_dbl_t*>np.PyArray_DATA(sj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphj' wrapper.")
    return (nm, sj, dj,)


cpdef api object othpl(fwi_integer_t kf, fwi_integer_t n, fwr_dbl_t x, object pl=None, object dpl=None):
    """
    othpl(kf, n, x, [pl, dpl]) -> (pl, dpl)

    Parameters
    ----------
    kf : fwi_integer, intent in
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    pl : fwr_dbl, 1D array, dimension(n+1), intent out
    dpl : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    pl : fwr_dbl, 1D array, dimension(n+1), intent out
    dpl : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray pl_
    cdef fw_shape_t pl_shape_[1]
    cdef np.ndarray dpl_
    cdef fw_shape_t dpl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pl_, pl = fw_explicitshapearray(pl, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(pl_shape_, np.PyArray_DIMS(pl_), 1)
    dpl_, dpl = fw_explicitshapearray(dpl, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(dpl_shape_, np.PyArray_DIMS(dpl_), 1)
    if not ((kf > 0) and (kf < 5)):
        raise ValueError('Condition on arguments not satisfied: (kf > 0) and (kf < 5)')
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    othpl_c(&kf, &n, &x, pl_shape_, <fwr_dbl_t*>np.PyArray_DATA(pl_), dpl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dpl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'othpl' wrapper.")
    return (pl, dpl,)


cpdef api object klvnzo(fwi_integer_t nt, fwi_integer_t kd, object zo=None):
    """
    klvnzo(nt, kd, [zo]) -> zo

    Parameters
    ----------
    nt : fwi_integer, intent in
    kd : fwi_integer, intent in
    zo : fwr_dbl, 1D array, dimension(nt), intent out

    Returns
    -------
    zo : fwr_dbl, 1D array, dimension(nt), intent out

    """
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_, zo = fw_explicitshapearray(zo, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    if not ((kd >= 1) or (kd <= 8)):
        raise ValueError('Condition on arguments not satisfied: (kd >= 1) or (kd <= 8)')
    klvnzo_c(&nt, &kd, zo_shape_, <fwr_dbl_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'klvnzo' wrapper.")
    return zo


cpdef api object jyzo(fwi_integer_t n, fwi_integer_t nt, object rj0=None, object rj1=None, object ry0=None, object ry1=None):
    """
    jyzo(n, nt, [rj0, rj1, ry0, ry1]) -> (rj0, rj1, ry0, ry1)

    Parameters
    ----------
    n : fwi_integer, intent in
    nt : fwi_integer, intent in
    rj0 : fwr_dbl, 1D array, dimension(nt), intent out
    rj1 : fwr_dbl, 1D array, dimension(nt), intent out
    ry0 : fwr_dbl, 1D array, dimension(nt), intent out
    ry1 : fwr_dbl, 1D array, dimension(nt), intent out

    Returns
    -------
    rj0 : fwr_dbl, 1D array, dimension(nt), intent out
    rj1 : fwr_dbl, 1D array, dimension(nt), intent out
    ry0 : fwr_dbl, 1D array, dimension(nt), intent out
    ry1 : fwr_dbl, 1D array, dimension(nt), intent out

    """
    cdef np.ndarray rj0_
    cdef fw_shape_t rj0_shape_[1]
    cdef np.ndarray rj1_
    cdef fw_shape_t rj1_shape_[1]
    cdef np.ndarray ry0_
    cdef fw_shape_t ry0_shape_[1]
    cdef np.ndarray ry1_
    cdef fw_shape_t ry1_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    rj0_, rj0 = fw_explicitshapearray(rj0, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(rj0_shape_, np.PyArray_DIMS(rj0_), 1)
    rj1_, rj1 = fw_explicitshapearray(rj1, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(rj1_shape_, np.PyArray_DIMS(rj1_), 1)
    ry0_, ry0 = fw_explicitshapearray(ry0, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(ry0_shape_, np.PyArray_DIMS(ry0_), 1)
    ry1_, ry1 = fw_explicitshapearray(ry1, fwr_dbl_t_enum, 1, [nt], False)
    fw_copyshape(ry1_shape_, np.PyArray_DIMS(ry1_), 1)
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    jyzo_c(&n, &nt, rj0_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj0_), rj1_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj1_), ry0_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry0_), ry1_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry1_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jyzo' wrapper.")
    return (rj0, rj1, ry0, ry1,)


cpdef api object rctj(fwi_integer_t n, fwr_dbl_t x, object rj=None, object dj=None):
    """
    rctj(n, x, [rj, dj]) -> (nm, rj, dj)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    rj : fwr_dbl, 1D array, dimension(n+1), intent out
    dj : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    rj : fwr_dbl, 1D array, dimension(n+1), intent out
    dj : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray rj_
    cdef fw_shape_t rj_shape_[1]
    cdef np.ndarray dj_
    cdef fw_shape_t dj_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    rj_, rj = fw_explicitshapearray(rj, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(rj_shape_, np.PyArray_DIMS(rj_), 1)
    dj_, dj = fw_explicitshapearray(dj, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    rctj_c(&n, &x, &nm, rj_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rctj' wrapper.")
    return (nm, rj, dj,)


cpdef api object herzo(fwi_integer_t n, object x=None, object w=None):
    """
    herzo(n, [x, w]) -> (x, w)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, 1D array, dimension(n), intent out
    w : fwr_dbl, 1D array, dimension(n), intent out

    Returns
    -------
    x : fwr_dbl, 1D array, dimension(n), intent out
    w : fwr_dbl, 1D array, dimension(n), intent out

    """
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_, x = fw_explicitshapearray(x, fwr_dbl_t_enum, 1, [n], False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_, w = fw_explicitshapearray(w, fwr_dbl_t_enum, 1, [n], False)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    herzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'herzo' wrapper.")
    return (x, w,)


cpdef api object sphk(fwi_integer_t n, fwr_dbl_t x, object sk=None, object dk=None):
    """
    sphk(n, x, [sk, dk]) -> (nm, sk, dk)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    sk : fwr_dbl, 1D array, dimension(n+1), intent out
    dk : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    sk : fwr_dbl, 1D array, dimension(n+1), intent out
    dk : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray sk_
    cdef fw_shape_t sk_shape_[1]
    cdef np.ndarray dk_
    cdef fw_shape_t dk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sk_, sk = fw_explicitshapearray(sk, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(sk_shape_, np.PyArray_DIMS(sk_), 1)
    dk_, dk = fw_explicitshapearray(dk, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(dk_shape_, np.PyArray_DIMS(dk_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    if not (x >= 0):
        raise ValueError('Condition on arguments not satisfied: x >= 0')
    sphk_c(&n, &x, &nm, sk_shape_, <fwr_dbl_t*>np.PyArray_DATA(sk_), dk_shape_, <fwr_dbl_t*>np.PyArray_DATA(dk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphk' wrapper.")
    return (nm, sk, dk,)


cpdef api object pbvv(fwr_dbl_t v, fwr_dbl_t x, object vv=None, object vp=None):
    """
    pbvv(v, x, [vv, vp]) -> (vv, vp, pvf, pvd)

    Parameters
    ----------
    v : fwr_dbl, intent in
    x : fwr_dbl, intent in
    vv : fwr_dbl, 1D array, dimension(abs((int)v)+2), intent out
    vp : fwr_dbl, 1D array, dimension(abs((int)v)+2), intent out

    Returns
    -------
    vv : fwr_dbl, 1D array, dimension(abs((int)v)+2), intent out
    vp : fwr_dbl, 1D array, dimension(abs((int)v)+2), intent out
    pvf : fwr_dbl, intent out
    pvd : fwr_dbl, intent out

    """
    cdef np.ndarray vv_
    cdef fw_shape_t vv_shape_[1]
    cdef np.ndarray vp_
    cdef fw_shape_t vp_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t pvf
    cdef fwr_dbl_t pvd
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vv_, vv = fw_explicitshapearray(vv, fwr_dbl_t_enum, 1, [abs(<int>v) + 2], False)
    fw_copyshape(vv_shape_, np.PyArray_DIMS(vv_), 1)
    vp_, vp = fw_explicitshapearray(vp, fwr_dbl_t_enum, 1, [abs(<int>v) + 2], False)
    fw_copyshape(vp_shape_, np.PyArray_DIMS(vp_), 1)
    if not ((abs(<int>v) + 2) >= 2):
        raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
    pbvv_c(&v, &x, vv_shape_, <fwr_dbl_t*>np.PyArray_DATA(vv_), vp_shape_, <fwr_dbl_t*>np.PyArray_DATA(vp_), &pvf, &pvd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'pbvv' wrapper.")
    return (vv, vp, pvf, pvd,)


cpdef api object clqmn(fwi_integer_t m, fwi_integer_t n, fwc_complex_x16_t z, object cqm=None, object cqd=None):
    """
    clqmn(m, n, z, [cqm, cqd]) -> (cqm, cqd)

    Parameters
    ----------
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    z : fwc_complex_x16, intent in
    cqm : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent out
    cqd : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent out

    Returns
    -------
    cqm : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent out
    cqd : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent out

    """
    cdef np.ndarray cqm_
    cdef fw_shape_t cqm_shape_[2]
    cdef np.ndarray cqd_
    cdef fw_shape_t cqd_shape_[2]
    cdef fwi_integer_t mm
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t x_f
    cdef fwr_dbl_t y_f
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    mm = m
    cqm_, cqm = fw_explicitshapearray(cqm, fwc_complex_x16_t_enum, 2, [mm - 0 + 1, n - 0 + 1], False)
    fw_copyshape(cqm_shape_, np.PyArray_DIMS(cqm_), 2)
    cqd_, cqd = fw_explicitshapearray(cqd, fwc_complex_x16_t_enum, 2, [mm - 0 + 1, n - 0 + 1], False)
    fw_copyshape(cqd_shape_, np.PyArray_DIMS(cqd_), 2)
    x_f = z.real
    y_f = z.imag
    if not (m >= 1):
        raise ValueError('Condition on arguments not satisfied: m >= 1')
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    clqmn_c(&mm, &m, &n, &x_f, &y_f, cqm_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqm_), cqd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clqmn' wrapper.")
    return (cqm, cqd,)


cpdef api object segv(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwi_integer_t kd, object eg=None):
    """
    segv(m, n, c, kd, [eg]) -> (cv, eg)

    Parameters
    ----------
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    c : fwr_dbl, intent in
    kd : fwi_integer, intent in
    eg : fwr_dbl, 1D array, dimension(n-m+2), intent out

    Returns
    -------
    cv : fwr_dbl, intent out
    eg : fwr_dbl, 1D array, dimension(n-m+2), intent out

    """
    cdef np.ndarray eg_
    cdef fw_shape_t eg_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t cv
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    eg_, eg = fw_explicitshapearray(eg, fwr_dbl_t_enum, 1, [n - m + 2], False)
    fw_copyshape(eg_shape_, np.PyArray_DIMS(eg_), 1)
    if not ((n >= m) and ((n - m) < 199)):
        raise ValueError('Condition on arguments not satisfied: (n >= m) and ((n - m) < 199)')
    if not ((kd == -1) or (kd == 1)):
        raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
    segv_c(&m, &n, &c, &kd, &cv, eg_shape_, <fwr_dbl_t*>np.PyArray_DATA(eg_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'segv' wrapper.")
    return (cv, eg,)


cpdef api object sphy(fwi_integer_t n, fwr_dbl_t x, object sy=None, object dy=None):
    """
    sphy(n, x, [sy, dy]) -> (nm, sy, dy)

    Parameters
    ----------
    n : fwi_integer, intent in
    x : fwr_dbl, intent in
    sy : fwr_dbl, 1D array, dimension(n+1), intent out
    dy : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    nm : fwi_integer, intent out
    sy : fwr_dbl, 1D array, dimension(n+1), intent out
    dy : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray sy_
    cdef fw_shape_t sy_shape_[1]
    cdef np.ndarray dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t nm
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sy_, sy = fw_explicitshapearray(sy, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(sy_shape_, np.PyArray_DIMS(sy_), 1)
    dy_, dy = fw_explicitshapearray(dy, fwr_dbl_t_enum, 1, [n + 1], False)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    if not (x >= 0):
        raise ValueError('Condition on arguments not satisfied: x >= 0')
    sphy_c(&n, &x, &nm, sy_shape_, <fwr_dbl_t*>np.PyArray_DATA(sy_), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphy' wrapper.")
    return (nm, sy, dy,)



cdef void fw_copyshape(fw_shape_t *target, np.intp_t *source, int ndim):
    # In f77binding mode, we do not always have fw_shape_t and np.npy_intp
    # as the same type, so must make a copy
    cdef int i
    for i in range(ndim):
        target[i] = source[i]

cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy):
    cdef int flags = np.NPY_F_CONTIGUOUS
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

cdef object fw_explicitshapearray(object value, int typenum, int ndim,
                                  np.intp_t *shape, bint copy):
    if value is None:
        result = np.PyArray_ZEROS(ndim, shape, typenum, 1)
        return result, result
    else:
        return fw_asfortranarray(value, typenum, ndim, copy)

# Fwrap configuration:
# Fwrap: version 0.2.0dev_2a63538
# Fwrap: self-sha1 df364bb88062d673b42b68f8ed9cec6b610b855d
# Fwrap: wraps specfun/specfun.f
# Fwrap:     sha1 975d5e3c152da9ce29774e9c581efe5511a6dba5
# Fwrap: exclude airya
# Fwrap: exclude airyb
# Fwrap: exclude ajyik
# Fwrap: exclude aswfa
# Fwrap: exclude beta
# Fwrap: exclude bjndd
# Fwrap: exclude cbk
# Fwrap: exclude cchg
# Fwrap: exclude cerf
# Fwrap: exclude cerror
# Fwrap: exclude cfc
# Fwrap: exclude cfs
# Fwrap: exclude cgama
# Fwrap: exclude ch12n
# Fwrap: exclude chgu
# Fwrap: exclude chgubi
# Fwrap: exclude chguit
# Fwrap: exclude chgul
# Fwrap: exclude chgus
# Fwrap: exclude cik01
# Fwrap: exclude ciklv
# Fwrap: exclude cikna
# Fwrap: exclude ciknb
# Fwrap: exclude cikva
# Fwrap: exclude cikvb
# Fwrap: exclude cisia
# Fwrap: exclude cisib
# Fwrap: exclude cjk
# Fwrap: exclude cjy01
# Fwrap: exclude cjylv
# Fwrap: exclude cjyna
# Fwrap: exclude cjynb
# Fwrap: exclude cjyva
# Fwrap: exclude cjyvb
# Fwrap: exclude comelp
# Fwrap: exclude cpdla
# Fwrap: exclude cpdsa
# Fwrap: exclude cpsi
# Fwrap: exclude cv0
# Fwrap: exclude cva2
# Fwrap: exclude cvf
# Fwrap: exclude cvql
# Fwrap: exclude cvqm
# Fwrap: exclude cy01
# Fwrap: exclude dvla
# Fwrap: exclude dvsa
# Fwrap: exclude e1xa
# Fwrap: exclude e1xb
# Fwrap: exclude e1z
# Fwrap: exclude eix
# Fwrap: exclude eixz
# Fwrap: exclude elit
# Fwrap: exclude elit3
# Fwrap: exclude envj
# Fwrap: exclude enxa
# Fwrap: exclude enxb
# Fwrap: exclude error
# Fwrap: exclude fcs
# Fwrap: exclude ffk
# Fwrap: exclude gaih
# Fwrap: exclude gam0
# Fwrap: exclude gamma2
# Fwrap: exclude gmn
# Fwrap: exclude hygfx
# Fwrap: exclude hygfz
# Fwrap: exclude ik01a
# Fwrap: exclude ik01b
# Fwrap: exclude ikna
# Fwrap: exclude iknb
# Fwrap: exclude ikv
# Fwrap: exclude incob
# Fwrap: exclude incog
# Fwrap: exclude itairy
# Fwrap: exclude itika
# Fwrap: exclude itikb
# Fwrap: exclude itjya
# Fwrap: exclude itjyb
# Fwrap: exclude itsh0
# Fwrap: exclude itsl0
# Fwrap: exclude itth0
# Fwrap: exclude ittika
# Fwrap: exclude ittikb
# Fwrap: exclude ittjya
# Fwrap: exclude ittjyb
# Fwrap: exclude jelp
# Fwrap: exclude jy01a
# Fwrap: exclude jy01b
# Fwrap: exclude jyna
# Fwrap: exclude jynb
# Fwrap: exclude jynbh
# Fwrap: exclude jyndd
# Fwrap: exclude jyv
# Fwrap: exclude klvna
# Fwrap: exclude klvnb
# Fwrap: exclude kmn
# Fwrap: exclude lgama
# Fwrap: exclude lpmv
# Fwrap: exclude msta1
# Fwrap: exclude msta2
# Fwrap: exclude mtu0
# Fwrap: exclude mtu12
# Fwrap: exclude pbwa
# Fwrap: exclude psi_spec
# Fwrap: exclude qstar
# Fwrap: exclude refine
# Fwrap: exclude rmn1
# Fwrap: exclude rmn2l
# Fwrap: exclude rmn2so
# Fwrap: exclude rmn2sp
# Fwrap: exclude rswfo
# Fwrap: exclude rswfp
# Fwrap: exclude scka
# Fwrap: exclude sckb
# Fwrap: exclude sdmn
# Fwrap: exclude stvh0
# Fwrap: exclude stvh1
# Fwrap: exclude stvhv
# Fwrap: exclude stvl0
# Fwrap: exclude stvl1
# Fwrap: exclude stvlv
# Fwrap: exclude vvla
# Fwrap: exclude vvsa
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary specfun.pxd
# Fwrap: auxiliary specfun_fc.f
# Fwrap: auxiliary specfun_fc.h
# Fwrap: auxiliary specfun_fc.pxd

