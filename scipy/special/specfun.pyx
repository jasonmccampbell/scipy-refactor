#cython: ccomplex=True

"""The specfun module was generated with Fwrap v0.2.0dev_346d9b8.

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

"""
np.import_array()
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cdef extern from "math.h":
    double fabs(double)
cpdef object lqmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object qm=None, object qd=None):
    """lqmn(m, n, x[, qm, qd]) -> (qm, qd)

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
    cdef fwi_integer_t mm
    cdef np.ndarray qm_, qd_
    cdef np.npy_intp qm_shape[2], qd_shape[2]
    if not (m >= 1):
        raise ValueError('Condition on arguments not satisfied: m >= 1')
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    mm = m
    qm_shape[0] = mm - 0 + 1; qm_shape[1] = n - 0 + 1
    qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 2, qm_shape, False, True)
    if mm - 0 + 1 != qm_shape[0]:
        raise ValueError("(mm - 0 + 1 == qm.shape[0]) not satisifed")
    if n - 0 + 1 != qm_shape[1]:
        raise ValueError("(n - 0 + 1 == qm.shape[1]) not satisifed")
    qd_shape[0] = mm - 0 + 1; qd_shape[1] = n - 0 + 1
    qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 2, qd_shape, False, True)
    if mm - 0 + 1 != qd_shape[0]:
        raise ValueError("(mm - 0 + 1 == qd.shape[0]) not satisifed")
    if n - 0 + 1 != qd_shape[1]:
        raise ValueError("(n - 0 + 1 == qd.shape[1]) not satisifed")
    fc.lqmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
    return (qm_, qd_,)


cpdef object clpmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, fwr_dbl_t y, object cpm=None, object cpd=None):
    """clpmn(m, n, x, y[, cpm, cpd]) -> (cpm, cpd)

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
    cdef fwi_integer_t mm
    cdef np.ndarray cpm_, cpd_
    cdef np.npy_intp cpm_shape[2], cpd_shape[2]
    mm = m
    if not (m >= 0):
        raise ValueError('Condition on arguments not satisfied: m >= 0')
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    cpm_shape[0] = m - 0 + 1; cpm_shape[1] = n - 0 + 1
    cpm_ = fw_asfortranarray(cpm, fwc_complex_x16_t_enum, 2, cpm_shape, False, True)
    if m - 0 + 1 != cpm_shape[0]:
        raise ValueError("(m - 0 + 1 == cpm.shape[0]) not satisifed")
    if n - 0 + 1 != cpm_shape[1]:
        raise ValueError("(n - 0 + 1 == cpm.shape[1]) not satisifed")
    cpd_shape[0] = m - 0 + 1; cpd_shape[1] = n - 0 + 1
    cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 2, cpd_shape, False, True)
    if m - 0 + 1 != cpd_shape[0]:
        raise ValueError("(m - 0 + 1 == cpd.shape[0]) not satisifed")
    if n - 0 + 1 != cpd_shape[1]:
        raise ValueError("(n - 0 + 1 == cpd.shape[1]) not satisifed")
    fc.clpmn(&mm, &m, &n, &x, &y, <fwc_complex_x16_t*>np.PyArray_DATA(cpm_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
    return (cpm_, cpd_,)


cpdef object jdzo(fwi_integer_t nt, object n=None, object m=None, object pcode=None, object zo=None):
    """jdzo(nt[, n, m, pcode, zo]) -> (n, m, pcode, zo)

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
    cdef np.ndarray n_, m_, pcode_, zo_
    cdef np.npy_intp n_shape[1], m_shape[1], pcode_shape[1], zo_shape[1]
    if not ((nt > 0) and (nt <= 1200)):
        raise ValueError('Condition on arguments not satisfied: (nt > 0) and (nt <= 1200)')
    n_shape[0] = 1400
    n_ = fw_asfortranarray(n, fwi_integer_t_enum, 1, n_shape, False, True)
    if not (0 <= 1400 <= n_shape[0]):
        raise ValueError("(0 <= 1400 <= n.shape[0]) not satisifed")
    m_shape[0] = 1400
    m_ = fw_asfortranarray(m, fwi_integer_t_enum, 1, m_shape, False, True)
    if not (0 <= 1400 <= m_shape[0]):
        raise ValueError("(0 <= 1400 <= m.shape[0]) not satisifed")
    pcode_shape[0] = 1400
    pcode_ = fw_asfortranarray(pcode, fwi_integer_t_enum, 1, pcode_shape, False, True)
    if not (0 <= 1400 <= pcode_shape[0]):
        raise ValueError("(0 <= 1400 <= pcode.shape[0]) not satisifed")
    zo_shape[0] = 1400 - 0 + 1
    zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)
    if not (0 <= 1400 - 0 + 1 <= zo_shape[0]):
        raise ValueError("(0 <= 1400 - 0 + 1 <= zo.shape[0]) not satisifed")
    fc.jdzo(&nt, <fwi_integer_t*>np.PyArray_DATA(n_), <fwi_integer_t*>np.PyArray_DATA(m_), <fwi_integer_t*>np.PyArray_DATA(pcode_), <fwr_dbl_t*>np.PyArray_DATA(zo_))
    return (n_, m_, pcode_, zo_,)


cpdef object bernob(fwi_integer_t n, object bn=None):
    """bernob(n[, bn]) -> bn

    Parameters
    ----------
    n : fwi_integer, intent in
    bn : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    bn : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray bn_
    cdef np.npy_intp bn_shape[1]
    if not (n >= 2):
        raise ValueError('Condition on arguments not satisfied: n >= 2')
    bn_shape[0] = n + 1
    bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
    if n + 1 != bn_shape[0]:
        raise ValueError("(n + 1 == bn.shape[0]) not satisifed")
    fc.bernob(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))
    return bn_


cpdef object bernoa(fwi_integer_t n, object bn=None):
    """bernoa(n[, bn]) -> bn

    Parameters
    ----------
    n : fwi_integer, intent in
    bn : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    bn : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray bn_
    cdef np.npy_intp bn_shape[1]
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    bn_shape[0] = n + 1
    bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
    if n + 1 != bn_shape[0]:
        raise ValueError("(n + 1 == bn.shape[0]) not satisifed")
    fc.bernoa(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))
    return bn_


cpdef object csphjy(fwi_integer_t n, fwc_complex_x16_t z, object csj=None, object cdj=None, object csy=None, object cdy=None):
    """csphjy(n, z[, csj, cdj, csy, cdy]) -> (nm, csj, cdj, csy, cdy)

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
    cdef fwi_integer_t nm
    cdef np.ndarray csj_, cdj_, csy_, cdy_
    cdef np.npy_intp csj_shape[1], cdj_shape[1], csy_shape[1], cdy_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    csj_shape[0] = n + 1
    csj_ = fw_asfortranarray(csj, fwc_complex_x16_t_enum, 1, csj_shape, False, True)
    if n + 1 != csj_shape[0]:
        raise ValueError("(n + 1 == csj.shape[0]) not satisifed")
    cdj_shape[0] = n + 1
    cdj_ = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, cdj_shape, False, True)
    if n + 1 != cdj_shape[0]:
        raise ValueError("(n + 1 == cdj.shape[0]) not satisifed")
    csy_shape[0] = n + 1
    csy_ = fw_asfortranarray(csy, fwc_complex_x16_t_enum, 1, csy_shape, False, True)
    if n + 1 != csy_shape[0]:
        raise ValueError("(n + 1 == csy.shape[0]) not satisifed")
    cdy_shape[0] = n + 1
    cdy_ = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, cdy_shape, False, True)
    if n + 1 != cdy_shape[0]:
        raise ValueError("(n + 1 == cdy.shape[0]) not satisifed")
    fc.csphjy(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csj_), <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), <fwc_complex_x16_t*>np.PyArray_DATA(csy_), <fwc_complex_x16_t*>np.PyArray_DATA(cdy_))
    return (nm, csj_, cdj_, csy_, cdy_,)


cpdef object lpmns(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object pm=None, object pd=None):
    """lpmns(m, n, x[, pm, pd]) -> (pm, pd)

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
    cdef np.ndarray pm_, pd_
    cdef np.npy_intp pm_shape[1], pd_shape[1]
    if not ((m >= 0) and (m <= n)):
        raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    pm_shape[0] = n + 1
    pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 1, pm_shape, False, True)
    if n + 1 != pm_shape[0]:
        raise ValueError("(n + 1 == pm.shape[0]) not satisifed")
    pd_shape[0] = n + 1
    pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
    if n + 1 != pd_shape[0]:
        raise ValueError("(n + 1 == pd.shape[0]) not satisifed")
    fc.lpmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
    return (pm_, pd_,)


cpdef object eulera(fwi_integer_t n, object en=None):
    """eulera(n[, en]) -> en

    Parameters
    ----------
    n : fwi_integer, intent in
    en : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    en : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray en_
    cdef np.npy_intp en_shape[1]
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    en_shape[0] = n + 1
    en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
    if n + 1 != en_shape[0]:
        raise ValueError("(n + 1 == en.shape[0]) not satisifed")
    fc.eulera(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))
    return en_


cpdef object clqn(fwi_integer_t n, fwc_complex_x16_t z, object cqn=None, object cqd=None):
    """clqn(n, z[, cqn, cqd]) -> (cqn, cqd)

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
    cdef fwr_dbl_t x_f, y_f
    cdef np.ndarray cqn_, cqd_
    cdef np.npy_intp cqn_shape[1], cqd_shape[1]
    x_f = z.real
    y_f = z.imag
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    cqn_shape[0] = n + 1
    cqn_ = fw_asfortranarray(cqn, fwc_complex_x16_t_enum, 1, cqn_shape, False, True)
    if n + 1 != cqn_shape[0]:
        raise ValueError("(n + 1 == cqn.shape[0]) not satisifed")
    cqd_shape[0] = n + 1
    cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 1, cqd_shape, False, True)
    if n + 1 != cqd_shape[0]:
        raise ValueError("(n + 1 == cqd.shape[0]) not satisifed")
    fc.clqn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqn_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))
    return (cqn_, cqd_,)


cpdef object airyzo(fwi_integer_t nt, fwi_integer_t kf=1, object xa=None, object xb=None, object xc=None, object xd=None):
    """airyzo(nt[, kf, xa, xb, xc, xd]) -> (xa, xb, xc, xd)

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
    cdef np.ndarray xa_, xb_, xc_, xd_
    cdef np.npy_intp xa_shape[1], xb_shape[1], xc_shape[1], xd_shape[1]
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    xa_shape[0] = nt
    xa_ = fw_asfortranarray(xa, fwr_dbl_t_enum, 1, xa_shape, False, True)
    if nt != xa_shape[0]:
        raise ValueError("(nt == xa.shape[0]) not satisifed")
    xb_shape[0] = nt
    xb_ = fw_asfortranarray(xb, fwr_dbl_t_enum, 1, xb_shape, False, True)
    if nt != xb_shape[0]:
        raise ValueError("(nt == xb.shape[0]) not satisifed")
    xc_shape[0] = nt
    xc_ = fw_asfortranarray(xc, fwr_dbl_t_enum, 1, xc_shape, False, True)
    if nt != xc_shape[0]:
        raise ValueError("(nt == xc.shape[0]) not satisifed")
    xd_shape[0] = nt
    xd_ = fw_asfortranarray(xd, fwr_dbl_t_enum, 1, xd_shape, False, True)
    if nt != xd_shape[0]:
        raise ValueError("(nt == xd.shape[0]) not satisifed")
    fc.airyzo(&nt, &kf, <fwr_dbl_t*>np.PyArray_DATA(xa_), <fwr_dbl_t*>np.PyArray_DATA(xb_), <fwr_dbl_t*>np.PyArray_DATA(xc_), <fwr_dbl_t*>np.PyArray_DATA(xd_))
    return (xa_, xb_, xc_, xd_,)


cpdef object eulerb(fwi_integer_t n, object en=None):
    """eulerb(n[, en]) -> en

    Parameters
    ----------
    n : fwi_integer, intent in
    en : fwr_dbl, 1D array, dimension(n+1), intent out

    Returns
    -------
    en : fwr_dbl, 1D array, dimension(n+1), intent out

    """
    cdef np.ndarray en_
    cdef np.npy_intp en_shape[1]
    if not (n >= 2):
        raise ValueError('Condition on arguments not satisfied: n >= 2')
    en_shape[0] = n + 1
    en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
    if n + 1 != en_shape[0]:
        raise ValueError("(n + 1 == en.shape[0]) not satisifed")
    fc.eulerb(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))
    return en_


cpdef object cva1(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, object cv=None):
    """cva1(kd, m, q[, cv]) -> cv

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
    cdef np.npy_intp cv_shape[1]
    if not (m <= 200):
        raise ValueError('Condition on arguments not satisfied: m <= 200')
    if not (q >= 0):
        raise ValueError('Condition on arguments not satisfied: q >= 0')
    cv_shape[0] = m
    cv_ = fw_asfortranarray(cv, fwr_dbl_t_enum, 1, cv_shape, False, True)
    if m != cv_shape[0]:
        raise ValueError("(m == cv.shape[0]) not satisifed")
    fc.cva1(&kd, &m, &q, <fwr_dbl_t*>np.PyArray_DATA(cv_))
    return cv_


cpdef object lqnb(fwi_integer_t n, fwr_dbl_t x, object qn=None, object qd=None):
    """lqnb(n, x[, qn, qd]) -> (qn, qd)

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
    cdef np.ndarray qn_, qd_
    cdef np.npy_intp qn_shape[1], qd_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    qn_shape[0] = n + 1
    qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
    if n + 1 != qn_shape[0]:
        raise ValueError("(n + 1 == qn.shape[0]) not satisifed")
    qd_shape[0] = n + 1
    qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
    if n + 1 != qd_shape[0]:
        raise ValueError("(n + 1 == qd.shape[0]) not satisifed")
    fc.lqnb(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
    return (qn_, qd_,)


cpdef object lamv(fwr_dbl_t v, fwr_dbl_t x, object vl=None, object dl=None):
    """lamv(v, x[, vl, dl]) -> (vm, vl, dl)

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
    cdef fwr_dbl_t vm
    cdef np.ndarray vl_, dl_
    cdef np.npy_intp vl_shape[1], dl_shape[1]
    if not (v >= 1):
        raise ValueError('Condition on arguments not satisfied: v >= 1')
    vl_shape[0] = <int>v + 1
    vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 1, vl_shape, False, True)
    if not (0 <= <int>v + 1 <= vl_shape[0]):
        raise ValueError("(0 <= <int>v + 1 <= vl.shape[0]) not satisifed")
    dl_shape[0] = <int>v + 1
    dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
    if not (0 <= <int>v + 1 <= dl_shape[0]):
        raise ValueError("(0 <= <int>v + 1 <= dl.shape[0]) not satisifed")
    fc.lamv(&v, &x, &vm, <fwr_dbl_t*>np.PyArray_DATA(vl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))
    return (vm, vl_, dl_,)


cpdef object lagzo(fwi_integer_t n, object x=None, object w=None):
    """lagzo(n[, x, w]) -> (x, w)

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
    cdef np.ndarray x_, w_
    cdef np.npy_intp x_shape[1], w_shape[1]
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    x_shape[0] = n
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
    if n != x_shape[0]:
        raise ValueError("(n == x.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fc.lagzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
    return (x_, w_,)


cpdef object legzo(fwi_integer_t n, object x=None, object w=None):
    """legzo(n[, x, w]) -> (x, w)

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
    cdef np.ndarray x_, w_
    cdef np.npy_intp x_shape[1], w_shape[1]
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    x_shape[0] = n
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
    if n != x_shape[0]:
        raise ValueError("(n == x.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fc.legzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
    return (x_, w_,)


cpdef object pbdv(fwr_dbl_t v, fwr_dbl_t x, object dv=None, object dp=None):
    """pbdv(v, x[, dv, dp]) -> (dv, dp, pdf, pdd)

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
    cdef fwr_dbl_t pdf, pdd
    cdef np.ndarray dv_, dp_
    cdef np.npy_intp dv_shape[1], dp_shape[1]
    if not ((abs(<int>v) + 2) >= 2):
        raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
    dv_shape[0] = abs(<int>v) + 2
    dv_ = fw_asfortranarray(dv, fwr_dbl_t_enum, 1, dv_shape, False, True)
    if not (0 <= abs(<int>v) + 2 <= dv_shape[0]):
        raise ValueError("(0 <= abs(<int>v) + 2 <= dv.shape[0]) not satisifed")
    dp_shape[0] = abs(<int>v) + 2
    dp_ = fw_asfortranarray(dp, fwr_dbl_t_enum, 1, dp_shape, False, True)
    if not (0 <= abs(<int>v) + 2 <= dp_shape[0]):
        raise ValueError("(0 <= abs(<int>v) + 2 <= dp.shape[0]) not satisifed")
    fc.pbdv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(dv_), <fwr_dbl_t*>np.PyArray_DATA(dp_), &pdf, &pdd)
    return (dv_, dp_, pdf, pdd,)


cpdef object cerzo(fwi_integer_t nt, object zo=None):
    """cerzo(nt[, zo]) -> zo

    Parameters
    ----------
    nt : fwi_integer, intent in
    zo : fwc_complex_x16, 1D array, dimension(nt), intent out

    Returns
    -------
    zo : fwc_complex_x16, 1D array, dimension(nt), intent out

    """
    cdef np.ndarray zo_
    cdef np.npy_intp zo_shape[1]
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    zo_shape[0] = nt
    zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
    if nt != zo_shape[0]:
        raise ValueError("(nt == zo.shape[0]) not satisifed")
    fc.cerzo(&nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))
    return zo_


cpdef object lamn(fwi_integer_t n, fwr_dbl_t x, object bl=None, object dl=None):
    """lamn(n, x[, bl, dl]) -> (nm, bl, dl)

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
    cdef fwi_integer_t nm
    cdef np.ndarray bl_, dl_
    cdef np.npy_intp bl_shape[1], dl_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    bl_shape[0] = n + 1
    bl_ = fw_asfortranarray(bl, fwr_dbl_t_enum, 1, bl_shape, False, True)
    if n + 1 != bl_shape[0]:
        raise ValueError("(n + 1 == bl.shape[0]) not satisifed")
    dl_shape[0] = n + 1
    dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
    if n + 1 != dl_shape[0]:
        raise ValueError("(n + 1 == dl.shape[0]) not satisifed")
    fc.lamn(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(bl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))
    return (nm, bl_, dl_,)


cpdef object clpn(fwi_integer_t n, fwc_complex_x16_t z, object cpn=None, object cpd=None):
    """clpn(n, z[, cpn, cpd]) -> (cpn, cpd)

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
    cdef fwr_dbl_t x_f, y_f
    cdef np.ndarray cpn_, cpd_
    cdef np.npy_intp cpn_shape[1], cpd_shape[1]
    x_f = z.real
    y_f = z.imag
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    cpn_shape[0] = n + 1
    cpn_ = fw_asfortranarray(cpn, fwc_complex_x16_t_enum, 1, cpn_shape, False, True)
    if n + 1 != cpn_shape[0]:
        raise ValueError("(n + 1 == cpn.shape[0]) not satisifed")
    cpd_shape[0] = n + 1
    cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
    if n + 1 != cpd_shape[0]:
        raise ValueError("(n + 1 == cpd.shape[0]) not satisifed")
    fc.clpn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cpn_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
    return (cpn_, cpd_,)


cpdef object lqmns(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object qm=None, object qd=None):
    """lqmns(m, n, x[, qm, qd]) -> (qm, qd)

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
    cdef np.ndarray qm_, qd_
    cdef np.npy_intp qm_shape[1], qd_shape[1]
    if not (m >= 0):
        raise ValueError('Condition on arguments not satisfied: m >= 0')
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    qm_shape[0] = n + 1
    qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 1, qm_shape, False, True)
    if n + 1 != qm_shape[0]:
        raise ValueError("(n + 1 == qm.shape[0]) not satisifed")
    qd_shape[0] = n + 1
    qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
    if n + 1 != qd_shape[0]:
        raise ValueError("(n + 1 == qd.shape[0]) not satisifed")
    fc.lqmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
    return (qm_, qd_,)


cpdef object chgm(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x):
    """chgm(a, b, x) -> hg

    Parameters
    ----------
    a : fwr_dbl, intent in
    b : fwr_dbl, intent in
    x : fwr_dbl, intent in

    Returns
    -------
    hg : fwr_dbl, intent out

    """
    cdef fwr_dbl_t hg
    fc.chgm(&a, &b, &x, &hg)
    return hg


cpdef object lpmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object pm=None, object pd=None):
    """lpmn(m, n, x[, pm, pd]) -> (pm, pd)

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
    cdef fwi_integer_t mm
    cdef np.ndarray pm_, pd_
    cdef np.npy_intp pm_shape[2], pd_shape[2]
    mm = m
    if not ((m >= 0) and (m <= n)):
        raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    pm_shape[0] = m + 1; pm_shape[1] = n + 1
    pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 2, pm_shape, False, True)
    if m + 1 != pm_shape[0]:
        raise ValueError("(m + 1 == pm.shape[0]) not satisifed")
    if n + 1 != pm_shape[1]:
        raise ValueError("(n + 1 == pm.shape[1]) not satisifed")
    pd_shape[0] = m + 1; pd_shape[1] = n + 1
    pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 2, pd_shape, False, True)
    if m + 1 != pd_shape[0]:
        raise ValueError("(m + 1 == pd.shape[0]) not satisifed")
    if n + 1 != pd_shape[1]:
        raise ValueError("(n + 1 == pd.shape[1]) not satisifed")
    fc.lpmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
    return (pm_, pd_,)


cpdef object fcszo(fwi_integer_t kf, fwi_integer_t nt, object zo=None):
    """fcszo(kf, nt[, zo]) -> zo

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
    cdef np.npy_intp zo_shape[1]
    if not ((kf == 1) or (kf == 2)):
        raise ValueError('Condition on arguments not satisfied: (kf == 1) or (kf == 2)')
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    zo_shape[0] = nt
    zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
    if nt != zo_shape[0]:
        raise ValueError("(nt == zo.shape[0]) not satisifed")
    fc.fcszo(&kf, &nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))
    return zo_


cpdef object aswfb(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwi_integer_t kd, fwr_dbl_t cv):
    """aswfb(m, n, c, x, kd, cv) -> (s1f, s1d)

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
    cdef fwr_dbl_t s1f, s1d
    if not (m >= 0):
        raise ValueError('Condition on arguments not satisfied: m >= 0')
    if not (n >= m):
        raise ValueError('Condition on arguments not satisfied: n >= m')
    if not (fabs(x)<1):
        raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
    if not ((kd == -1) or (kd == 1)):
        raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
    fc.aswfb(&m, &n, &c, &x, &kd, &cv, &s1f, &s1d)
    return (s1f, s1d,)


cpdef object lqna(fwi_integer_t n, fwr_dbl_t x, object qn=None, object qd=None):
    """lqna(n, x[, qn, qd]) -> (qn, qd)

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
    cdef np.ndarray qn_, qd_
    cdef np.npy_intp qn_shape[1], qd_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    if not (fabs(x)<1):
        raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
    qn_shape[0] = n + 1
    qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
    if n + 1 != qn_shape[0]:
        raise ValueError("(n + 1 == qn.shape[0]) not satisifed")
    qd_shape[0] = n + 1
    qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
    if n + 1 != qd_shape[0]:
        raise ValueError("(n + 1 == qd.shape[0]) not satisifed")
    fc.lqna(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
    return (qn_, qd_,)


cpdef object cpbdn(fwi_integer_t n, fwc_complex_x16_t z, object cpb=None, object cpd=None):
    """cpbdn(n, z[, cpb, cpd]) -> (cpb, cpd)

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
    cdef np.ndarray cpb_, cpd_
    cdef np.npy_intp cpb_shape[1], cpd_shape[1]
    if not (abs(n) >= 1):
        raise ValueError('Condition on arguments not satisfied: abs(n) >= 1')
    cpb_shape[0] = abs(n) + 2
    cpb_ = fw_asfortranarray(cpb, fwc_complex_x16_t_enum, 1, cpb_shape, False, True)
    if abs(n) + 2 != cpb_shape[0]:
        raise ValueError("(abs(n) + 2 == cpb.shape[0]) not satisifed")
    cpd_shape[0] = abs(n) + 2
    cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
    if abs(n) + 2 != cpd_shape[0]:
        raise ValueError("(abs(n) + 2 == cpd.shape[0]) not satisifed")
    fc.cpbdn(&n, &z, <fwc_complex_x16_t*>np.PyArray_DATA(cpb_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
    return (cpb_, cpd_,)


cpdef object lpn(fwi_integer_t n, fwr_dbl_t x, object pn=None, object pd=None):
    """lpn(n, x[, pn, pd]) -> (pn, pd)

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
    cdef np.ndarray pn_, pd_
    cdef np.npy_intp pn_shape[1], pd_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    pn_shape[0] = n + 1
    pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
    if n + 1 != pn_shape[0]:
        raise ValueError("(n + 1 == pn.shape[0]) not satisifed")
    pd_shape[0] = n + 1
    pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
    if n + 1 != pd_shape[0]:
        raise ValueError("(n + 1 == pd.shape[0]) not satisifed")
    fc.lpn(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
    return (pn_, pd_,)


cpdef object fcoef(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a, object fc__=None):
    """fcoef(kd, m, q, a[, fc__]) -> fc__

    Parameters
    ----------
    kd : fwi_integer, intent in
    m : fwi_integer, intent in
    q : fwr_dbl, intent in
    a : fwr_dbl, intent in
    fc__ : fwr_dbl, 1D array, dimension(251), intent out

    Returns
    -------
    fc__ : fwr_dbl, 1D array, dimension(251), intent out

    """
    cdef np.ndarray fc___
    cdef np.npy_intp fc___shape[1]
    if not ((kd > 0) and (kd < 5)):
        raise ValueError('Condition on arguments not satisfied: (kd > 0) and (kd < 5)')
    if not (q >= 0):
        raise ValueError('Condition on arguments not satisfied: q >= 0')
    fc___shape[0] = 251
    fc___ = fw_asfortranarray(fc__, fwr_dbl_t_enum, 1, fc___shape, False, True)
    if not (0 <= 251 <= fc___shape[0]):
        raise ValueError("(0 <= 251 <= fc__.shape[0]) not satisifed")
    fc.fcoef(&kd, &m, &q, &a, <fwr_dbl_t*>np.PyArray_DATA(fc___))
    return fc___


cpdef object sphi(fwi_integer_t n, fwr_dbl_t x, object si=None, object di=None):
    """sphi(n, x[, si, di]) -> (nm, si, di)

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
    cdef fwi_integer_t nm
    cdef np.ndarray si_, di_
    cdef np.npy_intp si_shape[1], di_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    si_shape[0] = n + 1
    si_ = fw_asfortranarray(si, fwr_dbl_t_enum, 1, si_shape, False, True)
    if n + 1 != si_shape[0]:
        raise ValueError("(n + 1 == si.shape[0]) not satisifed")
    di_shape[0] = n + 1
    di_ = fw_asfortranarray(di, fwr_dbl_t_enum, 1, di_shape, False, True)
    if n + 1 != di_shape[0]:
        raise ValueError("(n + 1 == di.shape[0]) not satisifed")
    fc.sphi(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(si_), <fwr_dbl_t*>np.PyArray_DATA(di_))
    return (nm, si_, di_,)


cpdef object rcty(fwi_integer_t n, fwr_dbl_t x, object ry=None, object dy=None):
    """rcty(n, x[, ry, dy]) -> (nm, ry, dy)

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
    cdef fwi_integer_t nm
    cdef np.ndarray ry_, dy_
    cdef np.npy_intp ry_shape[1], dy_shape[1]
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    ry_shape[0] = n + 1
    ry_ = fw_asfortranarray(ry, fwr_dbl_t_enum, 1, ry_shape, False, True)
    if n + 1 != ry_shape[0]:
        raise ValueError("(n + 1 == ry.shape[0]) not satisifed")
    dy_shape[0] = n + 1
    dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
    if n + 1 != dy_shape[0]:
        raise ValueError("(n + 1 == dy.shape[0]) not satisifed")
    fc.rcty(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(ry_), <fwr_dbl_t*>np.PyArray_DATA(dy_))
    return (nm, ry_, dy_,)


cpdef object lpni(fwi_integer_t n, fwr_dbl_t x, object pn=None, object pd=None, object pl=None):
    """lpni(n, x[, pn, pd, pl]) -> (pn, pd, pl)

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
    cdef np.ndarray pn_, pd_, pl_
    cdef np.npy_intp pn_shape[1], pd_shape[1], pl_shape[1]
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    pn_shape[0] = n + 1
    pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
    if n + 1 != pn_shape[0]:
        raise ValueError("(n + 1 == pn.shape[0]) not satisifed")
    pd_shape[0] = n + 1
    pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
    if n + 1 != pd_shape[0]:
        raise ValueError("(n + 1 == pd.shape[0]) not satisifed")
    pl_shape[0] = n + 1
    pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
    if n + 1 != pl_shape[0]:
        raise ValueError("(n + 1 == pl.shape[0]) not satisifed")
    fc.lpni(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_), <fwr_dbl_t*>np.PyArray_DATA(pl_))
    return (pn_, pd_, pl_,)


cpdef object cyzo(fwi_integer_t nt, fwi_integer_t kf, fwi_integer_t kc, object zo=None, object zv=None):
    """cyzo(nt, kf, kc[, zo, zv]) -> (zo, zv)

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
    cdef np.ndarray zo_, zv_
    cdef np.npy_intp zo_shape[1], zv_shape[1]
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    if not ((kf >= 0) and (kf <= 2)):
        raise ValueError('Condition on arguments not satisfied: (kf >= 0) and (kf <= 2)')
    if not ((kc == 0) or (kc == 1)):
        raise ValueError('Condition on arguments not satisfied: (kc == 0) or (kc == 1)')
    zo_shape[0] = nt
    zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
    if nt != zo_shape[0]:
        raise ValueError("(nt == zo.shape[0]) not satisifed")
    zv_shape[0] = nt
    zv_ = fw_asfortranarray(zv, fwc_complex_x16_t_enum, 1, zv_shape, False, True)
    if nt != zv_shape[0]:
        raise ValueError("(nt == zv.shape[0]) not satisifed")
    fc.cyzo(&nt, &kf, &kc, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), <fwc_complex_x16_t*>np.PyArray_DATA(zv_))
    return (zo_, zv_,)


cpdef object csphik(fwi_integer_t n, fwc_complex_x16_t z, object csi=None, object cdi=None, object csk=None, object cdk=None):
    """csphik(n, z[, csi, cdi, csk, cdk]) -> (nm, csi, cdi, csk, cdk)

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
    cdef fwi_integer_t nm
    cdef np.ndarray csi_, cdi_, csk_, cdk_
    cdef np.npy_intp csi_shape[1], cdi_shape[1], csk_shape[1], cdk_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    csi_shape[0] = n + 1
    csi_ = fw_asfortranarray(csi, fwc_complex_x16_t_enum, 1, csi_shape, False, True)
    if n + 1 != csi_shape[0]:
        raise ValueError("(n + 1 == csi.shape[0]) not satisifed")
    cdi_shape[0] = n + 1
    cdi_ = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, cdi_shape, False, True)
    if n + 1 != cdi_shape[0]:
        raise ValueError("(n + 1 == cdi.shape[0]) not satisifed")
    csk_shape[0] = n + 1
    csk_ = fw_asfortranarray(csk, fwc_complex_x16_t_enum, 1, csk_shape, False, True)
    if n + 1 != csk_shape[0]:
        raise ValueError("(n + 1 == csk.shape[0]) not satisifed")
    cdk_shape[0] = n + 1
    cdk_ = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, cdk_shape, False, True)
    if n + 1 != cdk_shape[0]:
        raise ValueError("(n + 1 == cdk.shape[0]) not satisifed")
    fc.csphik(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csi_), <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), <fwc_complex_x16_t*>np.PyArray_DATA(csk_), <fwc_complex_x16_t*>np.PyArray_DATA(cdk_))
    return (nm, csi_, cdi_, csk_, cdk_,)


cpdef object sphj(fwi_integer_t n, fwr_dbl_t x, object sj=None, object dj=None):
    """sphj(n, x[, sj, dj]) -> (nm, sj, dj)

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
    cdef fwi_integer_t nm
    cdef np.ndarray sj_, dj_
    cdef np.npy_intp sj_shape[1], dj_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    sj_shape[0] = n + 1
    sj_ = fw_asfortranarray(sj, fwr_dbl_t_enum, 1, sj_shape, False, True)
    if n + 1 != sj_shape[0]:
        raise ValueError("(n + 1 == sj.shape[0]) not satisifed")
    dj_shape[0] = n + 1
    dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
    if n + 1 != dj_shape[0]:
        raise ValueError("(n + 1 == dj.shape[0]) not satisifed")
    fc.sphj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))
    return (nm, sj_, dj_,)


cpdef object othpl(fwi_integer_t kf, fwi_integer_t n, fwr_dbl_t x, object pl=None, object dpl=None):
    """othpl(kf, n, x[, pl, dpl]) -> (pl, dpl)

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
    cdef np.ndarray pl_, dpl_
    cdef np.npy_intp pl_shape[1], dpl_shape[1]
    if not ((kf > 0) and (kf < 5)):
        raise ValueError('Condition on arguments not satisfied: (kf > 0) and (kf < 5)')
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    pl_shape[0] = n + 1
    pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
    if n + 1 != pl_shape[0]:
        raise ValueError("(n + 1 == pl.shape[0]) not satisifed")
    dpl_shape[0] = n + 1
    dpl_ = fw_asfortranarray(dpl, fwr_dbl_t_enum, 1, dpl_shape, False, True)
    if n + 1 != dpl_shape[0]:
        raise ValueError("(n + 1 == dpl.shape[0]) not satisifed")
    fc.othpl(&kf, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pl_), <fwr_dbl_t*>np.PyArray_DATA(dpl_))
    return (pl_, dpl_,)


cpdef object klvnzo(fwi_integer_t nt, fwi_integer_t kd, object zo=None):
    """klvnzo(nt, kd[, zo]) -> zo

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
    cdef np.npy_intp zo_shape[1]
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    if not ((kd >= 1) or (kd <= 8)):
        raise ValueError('Condition on arguments not satisfied: (kd >= 1) or (kd <= 8)')
    zo_shape[0] = nt
    zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)
    if nt != zo_shape[0]:
        raise ValueError("(nt == zo.shape[0]) not satisifed")
    fc.klvnzo(&nt, &kd, <fwr_dbl_t*>np.PyArray_DATA(zo_))
    return zo_


cpdef object jyzo(fwi_integer_t n, fwi_integer_t nt, object rj0=None, object rj1=None, object ry0=None, object ry1=None):
    """jyzo(n, nt[, rj0, rj1, ry0, ry1]) -> (rj0, rj1, ry0, ry1)

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
    cdef np.ndarray rj0_, rj1_, ry0_, ry1_
    cdef np.npy_intp rj0_shape[1], rj1_shape[1], ry0_shape[1], ry1_shape[1]
    if not (n >= 0):
        raise ValueError('Condition on arguments not satisfied: n >= 0')
    if not (nt > 0):
        raise ValueError('Condition on arguments not satisfied: nt > 0')
    rj0_shape[0] = nt
    rj0_ = fw_asfortranarray(rj0, fwr_dbl_t_enum, 1, rj0_shape, False, True)
    if nt != rj0_shape[0]:
        raise ValueError("(nt == rj0.shape[0]) not satisifed")
    rj1_shape[0] = nt
    rj1_ = fw_asfortranarray(rj1, fwr_dbl_t_enum, 1, rj1_shape, False, True)
    if nt != rj1_shape[0]:
        raise ValueError("(nt == rj1.shape[0]) not satisifed")
    ry0_shape[0] = nt
    ry0_ = fw_asfortranarray(ry0, fwr_dbl_t_enum, 1, ry0_shape, False, True)
    if nt != ry0_shape[0]:
        raise ValueError("(nt == ry0.shape[0]) not satisifed")
    ry1_shape[0] = nt
    ry1_ = fw_asfortranarray(ry1, fwr_dbl_t_enum, 1, ry1_shape, False, True)
    if nt != ry1_shape[0]:
        raise ValueError("(nt == ry1.shape[0]) not satisifed")
    fc.jyzo(&n, &nt, <fwr_dbl_t*>np.PyArray_DATA(rj0_), <fwr_dbl_t*>np.PyArray_DATA(rj1_), <fwr_dbl_t*>np.PyArray_DATA(ry0_), <fwr_dbl_t*>np.PyArray_DATA(ry1_))
    return (rj0_, rj1_, ry0_, ry1_,)


cpdef object rctj(fwi_integer_t n, fwr_dbl_t x, object rj=None, object dj=None):
    """rctj(n, x[, rj, dj]) -> (nm, rj, dj)

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
    cdef fwi_integer_t nm
    cdef np.ndarray rj_, dj_
    cdef np.npy_intp rj_shape[1], dj_shape[1]
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    rj_shape[0] = n + 1
    rj_ = fw_asfortranarray(rj, fwr_dbl_t_enum, 1, rj_shape, False, True)
    if n + 1 != rj_shape[0]:
        raise ValueError("(n + 1 == rj.shape[0]) not satisifed")
    dj_shape[0] = n + 1
    dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
    if n + 1 != dj_shape[0]:
        raise ValueError("(n + 1 == dj.shape[0]) not satisifed")
    fc.rctj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(rj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))
    return (nm, rj_, dj_,)


cpdef object herzo(fwi_integer_t n, object x=None, object w=None):
    """herzo(n[, x, w]) -> (x, w)

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
    cdef np.ndarray x_, w_
    cdef np.npy_intp x_shape[1], w_shape[1]
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    x_shape[0] = n
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
    if n != x_shape[0]:
        raise ValueError("(n == x.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fc.herzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
    return (x_, w_,)


cpdef object sphk(fwi_integer_t n, fwr_dbl_t x, object sk=None, object dk=None):
    """sphk(n, x[, sk, dk]) -> (nm, sk, dk)

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
    cdef fwi_integer_t nm
    cdef np.ndarray sk_, dk_
    cdef np.npy_intp sk_shape[1], dk_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    if not (x >= 0):
        raise ValueError('Condition on arguments not satisfied: x >= 0')
    sk_shape[0] = n + 1
    sk_ = fw_asfortranarray(sk, fwr_dbl_t_enum, 1, sk_shape, False, True)
    if n + 1 != sk_shape[0]:
        raise ValueError("(n + 1 == sk.shape[0]) not satisifed")
    dk_shape[0] = n + 1
    dk_ = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, dk_shape, False, True)
    if n + 1 != dk_shape[0]:
        raise ValueError("(n + 1 == dk.shape[0]) not satisifed")
    fc.sphk(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sk_), <fwr_dbl_t*>np.PyArray_DATA(dk_))
    return (nm, sk_, dk_,)


cpdef object pbvv(fwr_dbl_t v, fwr_dbl_t x, object vv=None, object vp=None):
    """pbvv(v, x[, vv, vp]) -> (vv, vp, pvf, pvd)

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
    cdef fwr_dbl_t pvf, pvd
    cdef np.ndarray vv_, vp_
    cdef np.npy_intp vv_shape[1], vp_shape[1]
    if not ((abs(<int>v) + 2) >= 2):
        raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
    vv_shape[0] = abs(<int>v) + 2
    vv_ = fw_asfortranarray(vv, fwr_dbl_t_enum, 1, vv_shape, False, True)
    if not (0 <= abs(<int>v) + 2 <= vv_shape[0]):
        raise ValueError("(0 <= abs(<int>v) + 2 <= vv.shape[0]) not satisifed")
    vp_shape[0] = abs(<int>v) + 2
    vp_ = fw_asfortranarray(vp, fwr_dbl_t_enum, 1, vp_shape, False, True)
    if not (0 <= abs(<int>v) + 2 <= vp_shape[0]):
        raise ValueError("(0 <= abs(<int>v) + 2 <= vp.shape[0]) not satisifed")
    fc.pbvv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(vv_), <fwr_dbl_t*>np.PyArray_DATA(vp_), &pvf, &pvd)
    return (vv_, vp_, pvf, pvd,)


cpdef object clqmn(fwi_integer_t m, fwi_integer_t n, fwc_complex_x16_t z, object cqm=None, object cqd=None):
    """clqmn(m, n, z[, cqm, cqd]) -> (cqm, cqd)

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
    cdef fwi_integer_t mm
    cdef fwr_dbl_t x_f, y_f
    cdef np.ndarray cqm_, cqd_
    cdef np.npy_intp cqm_shape[2], cqd_shape[2]
    x_f = z.real
    y_f = z.imag
    if not (m >= 1):
        raise ValueError('Condition on arguments not satisfied: m >= 1')
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    mm = m
    cqm_shape[0] = mm - 0 + 1; cqm_shape[1] = n - 0 + 1
    cqm_ = fw_asfortranarray(cqm, fwc_complex_x16_t_enum, 2, cqm_shape, False, True)
    if mm - 0 + 1 != cqm_shape[0]:
        raise ValueError("(mm - 0 + 1 == cqm.shape[0]) not satisifed")
    if n - 0 + 1 != cqm_shape[1]:
        raise ValueError("(n - 0 + 1 == cqm.shape[1]) not satisifed")
    cqd_shape[0] = mm - 0 + 1; cqd_shape[1] = n - 0 + 1
    cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 2, cqd_shape, False, True)
    if mm - 0 + 1 != cqd_shape[0]:
        raise ValueError("(mm - 0 + 1 == cqd.shape[0]) not satisifed")
    if n - 0 + 1 != cqd_shape[1]:
        raise ValueError("(n - 0 + 1 == cqd.shape[1]) not satisifed")
    fc.clqmn(&mm, &m, &n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqm_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))
    return (cqm_, cqd_,)


cpdef object segv(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwi_integer_t kd, object eg=None):
    """segv(m, n, c, kd[, eg]) -> (cv, eg)

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
    cdef fwr_dbl_t cv
    cdef np.ndarray eg_
    cdef np.npy_intp eg_shape[1]
    if not ((n >= m) and ((n - m) < 199)):
        raise ValueError('Condition on arguments not satisfied: (n >= m) and ((n - m) < 199)')
    if not ((kd == -1) or (kd == 1)):
        raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
    eg_shape[0] = n - m + 2
    eg_ = fw_asfortranarray(eg, fwr_dbl_t_enum, 1, eg_shape, False, True)
    if not (0 <= n - m + 2 <= eg_shape[0]):
        raise ValueError("(0 <= n - m + 2 <= eg.shape[0]) not satisifed")
    fc.segv(&m, &n, &c, &kd, &cv, <fwr_dbl_t*>np.PyArray_DATA(eg_))
    return (cv, eg_,)


cpdef object sphy(fwi_integer_t n, fwr_dbl_t x, object sy=None, object dy=None):
    """sphy(n, x[, sy, dy]) -> (nm, sy, dy)

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
    cdef fwi_integer_t nm
    cdef np.ndarray sy_, dy_
    cdef np.npy_intp sy_shape[1], dy_shape[1]
    if not (n >= 1):
        raise ValueError('Condition on arguments not satisfied: n >= 1')
    if not (x >= 0):
        raise ValueError('Condition on arguments not satisfied: x >= 0')
    sy_shape[0] = n + 1
    sy_ = fw_asfortranarray(sy, fwr_dbl_t_enum, 1, sy_shape, False, True)
    if n + 1 != sy_shape[0]:
        raise ValueError("(n + 1 == sy.shape[0]) not satisifed")
    dy_shape[0] = n + 1
    dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
    if n + 1 != dy_shape[0]:
        raise ValueError("(n + 1 == dy.shape[0]) not satisifed")
    fc.sphy(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(dy_))
    return (nm, sy_, dy_,)



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
# Fwrap: version 0.2.0dev_346d9b8
# Fwrap: self-sha1 df364bb88062d673b42b68f8ed9cec6b610b855d
# Fwrap: pyf-sha1 748c4a1175d62fe42e2ef7d97468558a905204df
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
# Fwrap: auxiliary specfun_fc.h
# Fwrap: auxiliary specfun_fc.pxd

