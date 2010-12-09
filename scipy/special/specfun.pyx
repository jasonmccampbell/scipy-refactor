#cython: ccomplex=True

"""
The specfun module was generated with Fwrap v0.2.0dev_2a63538.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
airya(...)
airyb(...)
airyzo(...)
ajyik(...)
aswfa(...)
aswfb(...)
bernoa(...)
bernob(...)
beta(...)
bjndd(...)
cbk(...)
cchg(...)
cerf(...)
cerror(...)
cerzo(...)
cfc(...)
cfs(...)
cgama(...)
ch12n(...)
chgm(...)
chgu(...)
chgubi(...)
chguit(...)
chgul(...)
chgus(...)
cik01(...)
ciklv(...)
cikna(...)
ciknb(...)
cikva(...)
cikvb(...)
cisia(...)
cisib(...)
cjk(...)
cjy01(...)
cjylv(...)
cjyna(...)
cjynb(...)
cjyva(...)
cjyvb(...)
clpmn(...)
clpn(...)
clqmn(...)
clqn(...)
comelp(...)
cpbdn(...)
cpdla(...)
cpdsa(...)
cpsi(...)
csphik(...)
csphjy(...)
cv0(...)
cva1(...)
cva2(...)
cvf(...)
cvql(...)
cvqm(...)
cy01(...)
cyzo(...)
dvla(...)
dvsa(...)
e1xa(...)
e1xb(...)
e1z(...)
eix(...)
eixz(...)
elit(...)
elit3(...)
envj(...)
enxa(...)
enxb(...)
error(...)
eulera(...)
eulerb(...)
fcoef(...)
fcs(...)
fcszo(...)
ffk(...)
gaih(...)
gam0(...)
gamma2(...)
gmn(...)
herzo(...)
hygfx(...)
hygfz(...)
ik01a(...)
ik01b(...)
ikna(...)
iknb(...)
ikv(...)
incob(...)
incog(...)
itairy(...)
itika(...)
itikb(...)
itjya(...)
itjyb(...)
itsh0(...)
itsl0(...)
itth0(...)
ittika(...)
ittikb(...)
ittjya(...)
ittjyb(...)
jdzo(...)
jelp(...)
jy01a(...)
jy01b(...)
jyna(...)
jynb(...)
jynbh(...)
jyndd(...)
jyv(...)
jyzo(...)
klvna(...)
klvnb(...)
klvnzo(...)
kmn(...)
lagzo(...)
lamn(...)
lamv(...)
legzo(...)
lgama(...)
lpmn(...)
lpmns(...)
lpmv(...)
lpn(...)
lpni(...)
lqmn(...)
lqmns(...)
lqna(...)
lqnb(...)
msta1(...)
msta2(...)
mtu0(...)
mtu12(...)
othpl(...)
pbdv(...)
pbvv(...)
pbwa(...)
psi_spec(...)
qstar(...)
rctj(...)
rcty(...)
refine(...)
rmn1(...)
rmn2l(...)
rmn2so(...)
rmn2sp(...)
rswfo(...)
rswfp(...)
scka(...)
sckb(...)
sdmn(...)
segv(...)
sphi(...)
sphj(...)
sphk(...)
sphy(...)
stvh0(...)
stvh1(...)
stvhv(...)
stvl0(...)
stvl1(...)
stvlv(...)
vvla(...)
vvsa(...)

Data Types
----------
fw_character
fw_shape
fwc_complex_x16
fwc_dbl_complex
fwi_integer
fwr_dbl
fwr_real_x8

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef api object cpdsa(fwi_integer_t n, fwc_complex_x16_t z, fwc_complex_x16_t cdn):
    """
    cpdsa(n, z, cdn) -> (n, z, cdn)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    cdn : fwc_complex_x16, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    cdn : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpdsa_c(&n, &z, &cdn, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cpdsa' wrapper.")
    return (n, z, cdn,)


cpdef api object cfs(fwc_complex_x16_t z, fwc_complex_x16_t zf, fwc_complex_x16_t zd):
    """
    cfs(z, zf, zd) -> (z, zf, zd)

    Parameters
    ----------
    z : fwc_complex_x16, intent inout
    zf : fwc_complex_x16, intent inout
    zd : fwc_complex_x16, intent inout

    Returns
    -------
    z : fwc_complex_x16, intent inout
    zf : fwc_complex_x16, intent inout
    zd : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cfs_c(&z, &zf, &zd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cfs' wrapper.")
    return (z, zf, zd,)


cpdef api object lqmn(fwi_integer_t mm, fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object qm, object qd):
    """
    lqmn(mm, m, n, x, qm, qd) -> (mm, m, n, x, qm, qd)

    Parameters
    ----------
    mm : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    qm : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent inout
    qd : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent inout

    Returns
    -------
    mm : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    qm : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent inout
    qd : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent inout

    """
    cdef np.ndarray qm_
    cdef fw_shape_t qm_shape_[2]
    cdef np.ndarray qd_
    cdef fw_shape_t qd_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qm_, qm = fw_asfortranarray(qm, fwr_dbl_t_enum, 2, False)
    fw_copyshape(qm_shape_, np.PyArray_DIMS(qm_), 2)
    qd_, qd = fw_asfortranarray(qd, fwr_dbl_t_enum, 2, False)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 2)
    lqmn_c(&mm, &m, &n, &x, qm_shape_, <fwr_dbl_t*>np.PyArray_DATA(qm_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqmn' wrapper.")
    return (mm, m, n, x, qm, qd,)


cpdef api object clpmn(fwi_integer_t mm, fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, fwr_dbl_t y, object cpm, object cpd):
    """
    clpmn(mm, m, n, x, y, cpm, cpd) -> (mm, m, n, x, y, cpm, cpd)

    Parameters
    ----------
    mm : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    cpm : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent inout
    cpd : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent inout

    Returns
    -------
    mm : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    cpm : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent inout
    cpd : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent inout

    """
    cdef np.ndarray cpm_
    cdef fw_shape_t cpm_shape_[2]
    cdef np.ndarray cpd_
    cdef fw_shape_t cpd_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpm_, cpm = fw_asfortranarray(cpm, fwc_complex_x16_t_enum, 2, False)
    fw_copyshape(cpm_shape_, np.PyArray_DIMS(cpm_), 2)
    cpd_, cpd = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 2, False)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 2)
    clpmn_c(&mm, &m, &n, &x, &y, cpm_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpm_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clpmn' wrapper.")
    return (mm, m, n, x, y, cpm, cpd,)


cpdef api object vvsa(fwr_dbl_t va, fwr_dbl_t x, fwr_dbl_t pv):
    """
    vvsa(va, x, pv) -> (va, x, pv)

    Parameters
    ----------
    va : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    pv : fwr_dbl, intent inout

    Returns
    -------
    va : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    pv : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vvsa_c(&va, &x, &pv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'vvsa' wrapper.")
    return (va, x, pv,)


cpdef api object jdzo(fwi_integer_t nt, object n, object m, object p, object zo):
    """
    jdzo(nt, n, m, p, zo) -> (nt, n, m, p, zo)

    Parameters
    ----------
    nt : fwi_integer, intent inout
    n : fwi_integer, 1D array, dimension(1400), intent inout
    m : fwi_integer, 1D array, dimension(1400), intent inout
    p : fwi_integer, 1D array, dimension(1400), intent inout
    zo : fwr_dbl, 1D array, dimension(0:1400), intent inout

    Returns
    -------
    nt : fwi_integer, intent inout
    n : fwi_integer, 1D array, dimension(1400), intent inout
    m : fwi_integer, 1D array, dimension(1400), intent inout
    p : fwi_integer, 1D array, dimension(1400), intent inout
    zo : fwr_dbl, 1D array, dimension(0:1400), intent inout

    """
    cdef np.ndarray n_
    cdef fw_shape_t n_shape_[1]
    cdef np.ndarray m_
    cdef fw_shape_t m_shape_[1]
    cdef np.ndarray p_
    cdef fw_shape_t p_shape_[1]
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    n_, n = fw_asfortranarray(n, fwi_integer_t_enum, 1, False)
    fw_copyshape(n_shape_, np.PyArray_DIMS(n_), 1)
    m_, m = fw_asfortranarray(m, fwi_integer_t_enum, 1, False)
    fw_copyshape(m_shape_, np.PyArray_DIMS(m_), 1)
    p_, p = fw_asfortranarray(p, fwi_integer_t_enum, 1, False)
    fw_copyshape(p_shape_, np.PyArray_DIMS(p_), 1)
    zo_, zo = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    jdzo_c(&nt, n_shape_, <fwi_integer_t*>np.PyArray_DATA(n_), m_shape_, <fwi_integer_t*>np.PyArray_DATA(m_), p_shape_, <fwi_integer_t*>np.PyArray_DATA(p_), zo_shape_, <fwr_dbl_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jdzo' wrapper.")
    return (nt, n, m, p, zo,)


cpdef api object cbk(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t cv, fwr_dbl_t qt, object ck, object bk):
    """
    cbk(m, n, c, cv, qt, ck, bk) -> (m, n, c, cv, qt, ck, bk)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    qt : fwr_dbl, intent inout
    ck : fwr_dbl, 1D array, dimension(200), intent inout
    bk : fwr_dbl, 1D array, dimension(200), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    qt : fwr_dbl, intent inout
    ck : fwr_dbl, 1D array, dimension(200), intent inout
    bk : fwr_dbl, 1D array, dimension(200), intent inout

    """
    cdef np.ndarray ck_
    cdef fw_shape_t ck_shape_[1]
    cdef np.ndarray bk_
    cdef fw_shape_t bk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ck_, ck = fw_asfortranarray(ck, fwr_dbl_t_enum, 1, False)
    fw_copyshape(ck_shape_, np.PyArray_DIMS(ck_), 1)
    bk_, bk = fw_asfortranarray(bk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bk_shape_, np.PyArray_DIMS(bk_), 1)
    cbk_c(&m, &n, &c, &cv, &qt, ck_shape_, <fwr_dbl_t*>np.PyArray_DATA(ck_), bk_shape_, <fwr_dbl_t*>np.PyArray_DATA(bk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cbk' wrapper.")
    return (m, n, c, cv, qt, ck, bk,)


cpdef api object cjy01(fwc_complex_x16_t z, fwc_complex_x16_t cbj0, fwc_complex_x16_t cdj0, fwc_complex_x16_t cbj1, fwc_complex_x16_t cdj1, fwc_complex_x16_t cby0, fwc_complex_x16_t cdy0, fwc_complex_x16_t cby1, fwc_complex_x16_t cdy1):
    """
    cjy01(z, cbj0, cdj0, cbj1, cdj1, cby0, cdy0, cby1, cdy1) -> (z, cbj0, cdj0, cbj1, cdj1, cby0, cdy0, cby1, cdy1)

    Parameters
    ----------
    z : fwc_complex_x16, intent inout
    cbj0 : fwc_complex_x16, intent inout
    cdj0 : fwc_complex_x16, intent inout
    cbj1 : fwc_complex_x16, intent inout
    cdj1 : fwc_complex_x16, intent inout
    cby0 : fwc_complex_x16, intent inout
    cdy0 : fwc_complex_x16, intent inout
    cby1 : fwc_complex_x16, intent inout
    cdy1 : fwc_complex_x16, intent inout

    Returns
    -------
    z : fwc_complex_x16, intent inout
    cbj0 : fwc_complex_x16, intent inout
    cdj0 : fwc_complex_x16, intent inout
    cbj1 : fwc_complex_x16, intent inout
    cdj1 : fwc_complex_x16, intent inout
    cby0 : fwc_complex_x16, intent inout
    cdy0 : fwc_complex_x16, intent inout
    cby1 : fwc_complex_x16, intent inout
    cdy1 : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cjy01_c(&z, &cbj0, &cdj0, &cbj1, &cdj1, &cby0, &cdy0, &cby1, &cdy1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cjy01' wrapper.")
    return (z, cbj0, cdj0, cbj1, cdj1, cby0, cdy0, cby1, cdy1,)


cpdef api object rmn2sp(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwr_dbl_t cv, object df, fwi_integer_t kd, fwr_dbl_t r2f, fwr_dbl_t r2d):
    """
    rmn2sp(m, n, c, x, cv, df, kd, r2f, r2d) -> (m, n, c, x, cv, df, kd, r2f, r2d)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    kd : fwi_integer, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    kd : fwi_integer, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout

    """
    cdef np.ndarray df_
    cdef fw_shape_t df_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    df_, df = fw_asfortranarray(df, fwr_dbl_t_enum, 1, False)
    fw_copyshape(df_shape_, np.PyArray_DIMS(df_), 1)
    rmn2sp_c(&m, &n, &c, &x, &cv, df_shape_, <fwr_dbl_t*>np.PyArray_DATA(df_), &kd, &r2f, &r2d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rmn2sp' wrapper.")
    return (m, n, c, x, cv, df, kd, r2f, r2d,)


cpdef api object bernob(fwi_integer_t n, object bn):
    """
    bernob(n, bn) -> (n, bn)

    Parameters
    ----------
    n : fwi_integer, intent inout
    bn : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    bn : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray bn_
    cdef fw_shape_t bn_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bn_, bn = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bn_shape_, np.PyArray_DIMS(bn_), 1)
    bernob_c(&n, bn_shape_, <fwr_dbl_t*>np.PyArray_DATA(bn_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bernob' wrapper.")
    return (n, bn,)


cpdef api object bernoa(fwi_integer_t n, object bn):
    """
    bernoa(n, bn) -> (n, bn)

    Parameters
    ----------
    n : fwi_integer, intent inout
    bn : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    bn : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray bn_
    cdef fw_shape_t bn_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bn_, bn = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bn_shape_, np.PyArray_DIMS(bn_), 1)
    bernoa_c(&n, bn_shape_, <fwr_dbl_t*>np.PyArray_DATA(bn_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bernoa' wrapper.")
    return (n, bn,)


cpdef api object qstar(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, object ck, fwr_dbl_t ck1, fwr_dbl_t qs, fwr_dbl_t qt):
    """
    qstar(m, n, c, ck, ck1, qs, qt) -> (m, n, c, ck, ck1, qs, qt)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    ck : fwr_dbl, 1D array, dimension(200), intent inout
    ck1 : fwr_dbl, intent inout
    qs : fwr_dbl, intent inout
    qt : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    ck : fwr_dbl, 1D array, dimension(200), intent inout
    ck1 : fwr_dbl, intent inout
    qs : fwr_dbl, intent inout
    qt : fwr_dbl, intent inout

    """
    cdef np.ndarray ck_
    cdef fw_shape_t ck_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ck_, ck = fw_asfortranarray(ck, fwr_dbl_t_enum, 1, False)
    fw_copyshape(ck_shape_, np.PyArray_DIMS(ck_), 1)
    qstar_c(&m, &n, &c, ck_shape_, <fwr_dbl_t*>np.PyArray_DATA(ck_), &ck1, &qs, &qt, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'qstar' wrapper.")
    return (m, n, c, ck, ck1, qs, qt,)


cpdef api object cv0(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a0):
    """
    cv0(kd, m, q, a0) -> (kd, m, q, a0)

    Parameters
    ----------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a0 : fwr_dbl, intent inout

    Returns
    -------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a0 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cv0_c(&kd, &m, &q, &a0, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cv0' wrapper.")
    return (kd, m, q, a0,)


cpdef api object cvqm(fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a0):
    """
    cvqm(m, q, a0) -> (m, q, a0)

    Parameters
    ----------
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a0 : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a0 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cvqm_c(&m, &q, &a0, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cvqm' wrapper.")
    return (m, q, a0,)


cpdef api object cvql(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a0):
    """
    cvql(kd, m, q, a0) -> (kd, m, q, a0)

    Parameters
    ----------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a0 : fwr_dbl, intent inout

    Returns
    -------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a0 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cvql_c(&kd, &m, &q, &a0, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cvql' wrapper.")
    return (kd, m, q, a0,)


cpdef api object csphjy(fwi_integer_t n, fwc_complex_x16_t z, fwi_integer_t nm, object csj, object cdj, object csy, object cdy):
    """
    csphjy(n, z, nm, csj, cdj, csy, cdy) -> (n, z, nm, csj, cdj, csy, cdy)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    csj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    csy : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    csj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    csy : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:n), intent inout

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
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    csj_, csj = fw_asfortranarray(csj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(csj_shape_, np.PyArray_DIMS(csj_), 1)
    cdj_, cdj = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdj_shape_, np.PyArray_DIMS(cdj_), 1)
    csy_, csy = fw_asfortranarray(csy, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(csy_shape_, np.PyArray_DIMS(csy_), 1)
    cdy_, cdy = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdy_shape_, np.PyArray_DIMS(cdy_), 1)
    csphjy_c(&n, &z, &nm, csj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csj_), cdj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), csy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csy_), cdy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'csphjy' wrapper.")
    return (n, z, nm, csj, cdj, csy, cdy,)


cpdef api object msta1(fwr_dbl_t x, fwi_integer_t mp):
    """
    msta1(x, mp) -> (fw_ret_arg, x, mp)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    mp : fwi_integer, intent inout

    Returns
    -------
    fw_ret_arg : fwi_integer, intent out
    x : fwr_dbl, intent inout
    mp : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    msta1_c(&fw_ret_arg, &x, &mp, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'msta1' wrapper.")
    return (fw_ret_arg, x, mp,)


cpdef api object msta2(fwr_dbl_t x, fwi_integer_t n, fwi_integer_t mp):
    """
    msta2(x, n, mp) -> (fw_ret_arg, x, n, mp)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    n : fwi_integer, intent inout
    mp : fwi_integer, intent inout

    Returns
    -------
    fw_ret_arg : fwi_integer, intent out
    x : fwr_dbl, intent inout
    n : fwi_integer, intent inout
    mp : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    msta2_c(&fw_ret_arg, &x, &n, &mp, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'msta2' wrapper.")
    return (fw_ret_arg, x, n, mp,)


cpdef api object envj(fwi_integer_t n, fwr_dbl_t x):
    """
    envj(n, x) -> (fw_ret_arg, n, x)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout

    Returns
    -------
    fw_ret_arg : fwr_real_x8, intent out
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_real_x8_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    envj_c(&fw_ret_arg, &n, &x, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'envj' wrapper.")
    return (fw_ret_arg, n, x,)


cpdef api object ittjyb(fwr_dbl_t x, fwr_dbl_t ttj, fwr_dbl_t tty):
    """
    ittjyb(x, ttj, tty) -> (x, ttj, tty)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ttj : fwr_dbl, intent inout
    tty : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ttj : fwr_dbl, intent inout
    tty : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ittjyb_c(&x, &ttj, &tty, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ittjyb' wrapper.")
    return (x, ttj, tty,)


cpdef api object ittjya(fwr_dbl_t x, fwr_dbl_t ttj, fwr_dbl_t tty):
    """
    ittjya(x, ttj, tty) -> (x, ttj, tty)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ttj : fwr_dbl, intent inout
    tty : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ttj : fwr_dbl, intent inout
    tty : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ittjya_c(&x, &ttj, &tty, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ittjya' wrapper.")
    return (x, ttj, tty,)


cpdef api object cjylv(fwr_dbl_t v, fwc_complex_x16_t z, fwc_complex_x16_t cbjv, fwc_complex_x16_t cdjv, fwc_complex_x16_t cbyv, fwc_complex_x16_t cdyv):
    """
    cjylv(v, z, cbjv, cdjv, cbyv, cdyv) -> (v, z, cbjv, cdjv, cbyv, cdyv)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    cbjv : fwc_complex_x16, intent inout
    cdjv : fwc_complex_x16, intent inout
    cbyv : fwc_complex_x16, intent inout
    cdyv : fwc_complex_x16, intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    cbjv : fwc_complex_x16, intent inout
    cdjv : fwc_complex_x16, intent inout
    cbyv : fwc_complex_x16, intent inout
    cdyv : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cjylv_c(&v, &z, &cbjv, &cdjv, &cbyv, &cdyv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cjylv' wrapper.")
    return (v, z, cbjv, cdjv, cbyv, cdyv,)


cpdef api object rmn2l(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, object df, fwi_integer_t kd, fwr_dbl_t r2f, fwr_dbl_t r2d, fwi_integer_t id):
    """
    rmn2l(m, n, c, x, df, kd, r2f, r2d, id) -> (m, n, c, x, df, kd, r2f, r2d, id)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    kd : fwi_integer, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    kd : fwi_integer, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    """
    cdef np.ndarray df_
    cdef fw_shape_t df_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    df_, df = fw_asfortranarray(df, fwr_dbl_t_enum, 1, False)
    fw_copyshape(df_shape_, np.PyArray_DIMS(df_), 1)
    rmn2l_c(&m, &n, &c, &x, df_shape_, <fwr_dbl_t*>np.PyArray_DATA(df_), &kd, &r2f, &r2d, &id, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rmn2l' wrapper.")
    return (m, n, c, x, df, kd, r2f, r2d, id,)


cpdef api object psi_spec(fwr_dbl_t x, fwr_dbl_t ps):
    """
    psi_spec(x, ps) -> (x, ps)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ps : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ps : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    psi_spec_c(&x, &ps, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'psi_spec' wrapper.")
    return (x, ps,)


cpdef api object cva2(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a):
    """
    cva2(kd, m, q, a) -> (kd, m, q, a)

    Parameters
    ----------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a : fwr_dbl, intent inout

    Returns
    -------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cva2_c(&kd, &m, &q, &a, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cva2' wrapper.")
    return (kd, m, q, a,)


cpdef api object lpmns(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object pm, object pd):
    """
    lpmns(m, n, x, pm, pd) -> (m, n, x, pm, pd)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pm : fwr_dbl, 1D array, dimension(0:n), intent inout
    pd : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pm : fwr_dbl, 1D array, dimension(0:n), intent inout
    pd : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray pm_
    cdef fw_shape_t pm_shape_[1]
    cdef np.ndarray pd_
    cdef fw_shape_t pd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pm_, pm = fw_asfortranarray(pm, fwr_dbl_t_enum, 1, False)
    fw_copyshape(pm_shape_, np.PyArray_DIMS(pm_), 1)
    pd_, pd = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, False)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    lpmns_c(&m, &n, &x, pm_shape_, <fwr_dbl_t*>np.PyArray_DATA(pm_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpmns' wrapper.")
    return (m, n, x, pm, pd,)


cpdef api object cerf(fwc_complex_x16_t z, fwc_complex_x16_t cer, fwc_complex_x16_t cder):
    """
    cerf(z, cer, cder) -> (z, cer, cder)

    Parameters
    ----------
    z : fwc_complex_x16, intent inout
    cer : fwc_complex_x16, intent inout
    cder : fwc_complex_x16, intent inout

    Returns
    -------
    z : fwc_complex_x16, intent inout
    cer : fwc_complex_x16, intent inout
    cder : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cerf_c(&z, &cer, &cder, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cerf' wrapper.")
    return (z, cer, cder,)


cpdef api object rswfp(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwr_dbl_t cv, fwi_integer_t kf, fwr_dbl_t r1f, fwr_dbl_t r1d, fwr_dbl_t r2f, fwr_dbl_t r2d):
    """
    rswfp(m, n, c, x, cv, kf, r1f, r1d, r2f, r2d) -> (m, n, c, x, cv, kf, r1f, r1d, r2f, r2d)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kf : fwi_integer, intent inout
    r1f : fwr_dbl, intent inout
    r1d : fwr_dbl, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kf : fwi_integer, intent inout
    r1f : fwr_dbl, intent inout
    r1d : fwr_dbl, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    rswfp_c(&m, &n, &c, &x, &cv, &kf, &r1f, &r1d, &r2f, &r2d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rswfp' wrapper.")
    return (m, n, c, x, cv, kf, r1f, r1d, r2f, r2d,)


cpdef api object jyndd(fwi_integer_t n, fwr_dbl_t x, fwr_dbl_t bjn, fwr_dbl_t djn, fwr_dbl_t fjn, fwr_dbl_t byn, fwr_dbl_t dyn, fwr_dbl_t fyn):
    """
    jyndd(n, x, bjn, djn, fjn, byn, dyn, fyn) -> (n, x, bjn, djn, fjn, byn, dyn, fyn)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    bjn : fwr_dbl, intent inout
    djn : fwr_dbl, intent inout
    fjn : fwr_dbl, intent inout
    byn : fwr_dbl, intent inout
    dyn : fwr_dbl, intent inout
    fyn : fwr_dbl, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    bjn : fwr_dbl, intent inout
    djn : fwr_dbl, intent inout
    fjn : fwr_dbl, intent inout
    byn : fwr_dbl, intent inout
    dyn : fwr_dbl, intent inout
    fyn : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    jyndd_c(&n, &x, &bjn, &djn, &fjn, &byn, &dyn, &fyn, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jyndd' wrapper.")
    return (n, x, bjn, djn, fjn, byn, dyn, fyn,)


cpdef api object gam0(fwr_dbl_t x, fwr_dbl_t ga):
    """
    gam0(x, ga) -> (x, ga)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ga : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ga : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    gam0_c(&x, &ga, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gam0' wrapper.")
    return (x, ga,)


cpdef api object cisib(fwr_dbl_t x, fwr_dbl_t ci, fwr_dbl_t si):
    """
    cisib(x, ci, si) -> (x, ci, si)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ci : fwr_dbl, intent inout
    si : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ci : fwr_dbl, intent inout
    si : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cisib_c(&x, &ci, &si, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cisib' wrapper.")
    return (x, ci, si,)


cpdef api object eulera(fwi_integer_t n, object en):
    """
    eulera(n, en) -> (n, en)

    Parameters
    ----------
    n : fwi_integer, intent inout
    en : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    en : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray en_
    cdef fw_shape_t en_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    en_, en = fw_asfortranarray(en, fwr_dbl_t_enum, 1, False)
    fw_copyshape(en_shape_, np.PyArray_DIMS(en_), 1)
    eulera_c(&n, en_shape_, <fwr_dbl_t*>np.PyArray_DATA(en_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'eulera' wrapper.")
    return (n, en,)


cpdef api object refine(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a):
    """
    refine(kd, m, q, a) -> (kd, m, q, a)

    Parameters
    ----------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a : fwr_dbl, intent inout

    Returns
    -------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    refine_c(&kd, &m, &q, &a, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'refine' wrapper.")
    return (kd, m, q, a,)


cpdef api object cisia(fwr_dbl_t x, fwr_dbl_t ci, fwr_dbl_t si):
    """
    cisia(x, ci, si) -> (x, ci, si)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ci : fwr_dbl, intent inout
    si : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ci : fwr_dbl, intent inout
    si : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cisia_c(&x, &ci, &si, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cisia' wrapper.")
    return (x, ci, si,)


cpdef api object itsl0(fwr_dbl_t x, fwr_dbl_t tl0):
    """
    itsl0(x, tl0) -> (x, tl0)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    tl0 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    tl0 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    itsl0_c(&x, &tl0, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'itsl0' wrapper.")
    return (x, tl0,)


cpdef api object stvl1(fwr_dbl_t x, fwr_dbl_t sl1):
    """
    stvl1(x, sl1) -> (x, sl1)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    sl1 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    sl1 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    stvl1_c(&x, &sl1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'stvl1' wrapper.")
    return (x, sl1,)


cpdef api object clqn(fwi_integer_t n, fwr_dbl_t x, fwr_dbl_t y, object cqn, object cqd):
    """
    clqn(n, x, y, cqn, cqd) -> (n, x, y, cqn, cqd)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    cqn : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cqd : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    cqn : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cqd : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray cqn_
    cdef fw_shape_t cqn_shape_[1]
    cdef np.ndarray cqd_
    cdef fw_shape_t cqd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cqn_, cqn = fw_asfortranarray(cqn, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cqn_shape_, np.PyArray_DIMS(cqn_), 1)
    cqd_, cqd = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cqd_shape_, np.PyArray_DIMS(cqd_), 1)
    clqn_c(&n, &x, &y, cqn_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqn_), cqd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clqn' wrapper.")
    return (n, x, y, cqn, cqd,)


cpdef api object stvl0(fwr_dbl_t x, fwr_dbl_t sl0):
    """
    stvl0(x, sl0) -> (x, sl0)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    sl0 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    sl0 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    stvl0_c(&x, &sl0, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'stvl0' wrapper.")
    return (x, sl0,)


cpdef api object airyzo(fwi_integer_t nt, fwi_integer_t kf, object xa, object xb, object xc, object xd):
    """
    airyzo(nt, kf, xa, xb, xc, xd) -> (nt, kf, xa, xb, xc, xd)

    Parameters
    ----------
    nt : fwi_integer, intent inout
    kf : fwi_integer, intent inout
    xa : fwr_dbl, 1D array, dimension(nt), intent inout
    xb : fwr_dbl, 1D array, dimension(nt), intent inout
    xc : fwr_dbl, 1D array, dimension(nt), intent inout
    xd : fwr_dbl, 1D array, dimension(nt), intent inout

    Returns
    -------
    nt : fwi_integer, intent inout
    kf : fwi_integer, intent inout
    xa : fwr_dbl, 1D array, dimension(nt), intent inout
    xb : fwr_dbl, 1D array, dimension(nt), intent inout
    xc : fwr_dbl, 1D array, dimension(nt), intent inout
    xd : fwr_dbl, 1D array, dimension(nt), intent inout

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
    xa_, xa = fw_asfortranarray(xa, fwr_dbl_t_enum, 1, False)
    fw_copyshape(xa_shape_, np.PyArray_DIMS(xa_), 1)
    xb_, xb = fw_asfortranarray(xb, fwr_dbl_t_enum, 1, False)
    fw_copyshape(xb_shape_, np.PyArray_DIMS(xb_), 1)
    xc_, xc = fw_asfortranarray(xc, fwr_dbl_t_enum, 1, False)
    fw_copyshape(xc_shape_, np.PyArray_DIMS(xc_), 1)
    xd_, xd = fw_asfortranarray(xd, fwr_dbl_t_enum, 1, False)
    fw_copyshape(xd_shape_, np.PyArray_DIMS(xd_), 1)
    airyzo_c(&nt, &kf, xa_shape_, <fwr_dbl_t*>np.PyArray_DATA(xa_), xb_shape_, <fwr_dbl_t*>np.PyArray_DATA(xb_), xc_shape_, <fwr_dbl_t*>np.PyArray_DATA(xc_), xd_shape_, <fwr_dbl_t*>np.PyArray_DATA(xd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'airyzo' wrapper.")
    return (nt, kf, xa, xb, xc, xd,)


cpdef api object error(fwr_dbl_t x, fwr_dbl_t err):
    """
    error(x, err) -> (x, err)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    err : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    err : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    error_c(&x, &err, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'error' wrapper.")
    return (x, err,)


cpdef api object cerror(fwc_complex_x16_t z, fwc_complex_x16_t cer):
    """
    cerror(z, cer) -> (z, cer)

    Parameters
    ----------
    z : fwc_complex_x16, intent inout
    cer : fwc_complex_x16, intent inout

    Returns
    -------
    z : fwc_complex_x16, intent inout
    cer : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cerror_c(&z, &cer, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cerror' wrapper.")
    return (z, cer,)


cpdef api object eulerb(fwi_integer_t n, object en):
    """
    eulerb(n, en) -> (n, en)

    Parameters
    ----------
    n : fwi_integer, intent inout
    en : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    en : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray en_
    cdef fw_shape_t en_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    en_, en = fw_asfortranarray(en, fwr_dbl_t_enum, 1, False)
    fw_copyshape(en_shape_, np.PyArray_DIMS(en_), 1)
    eulerb_c(&n, en_shape_, <fwr_dbl_t*>np.PyArray_DATA(en_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'eulerb' wrapper.")
    return (n, en,)


cpdef api object cva1(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, object cv):
    """
    cva1(kd, m, q, cv) -> (kd, m, q, cv)

    Parameters
    ----------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    cv : fwr_dbl, 1D array, dimension(200), intent inout

    Returns
    -------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    cv : fwr_dbl, 1D array, dimension(200), intent inout

    """
    cdef np.ndarray cv_
    cdef fw_shape_t cv_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cv_, cv = fw_asfortranarray(cv, fwr_dbl_t_enum, 1, False)
    fw_copyshape(cv_shape_, np.PyArray_DIMS(cv_), 1)
    cva1_c(&kd, &m, &q, cv_shape_, <fwr_dbl_t*>np.PyArray_DATA(cv_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cva1' wrapper.")
    return (kd, m, q, cv,)


cpdef api object ittikb(fwr_dbl_t x, fwr_dbl_t tti, fwr_dbl_t ttk):
    """
    ittikb(x, tti, ttk) -> (x, tti, ttk)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    tti : fwr_dbl, intent inout
    ttk : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    tti : fwr_dbl, intent inout
    ttk : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ittikb_c(&x, &tti, &ttk, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ittikb' wrapper.")
    return (x, tti, ttk,)


cpdef api object lqnb(fwi_integer_t n, fwr_dbl_t x, object qn, object qd):
    """
    lqnb(n, x, qn, qd) -> (n, x, qn, qd)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    qn : fwr_dbl, 1D array, dimension(0:n), intent inout
    qd : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    qn : fwr_dbl, 1D array, dimension(0:n), intent inout
    qd : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray qn_
    cdef fw_shape_t qn_shape_[1]
    cdef np.ndarray qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qn_, qn = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, False)
    fw_copyshape(qn_shape_, np.PyArray_DIMS(qn_), 1)
    qd_, qd = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, False)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    lqnb_c(&n, &x, qn_shape_, <fwr_dbl_t*>np.PyArray_DATA(qn_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqnb' wrapper.")
    return (n, x, qn, qd,)


cpdef api object cjk(fwi_integer_t km, object a):
    """
    cjk(km, a) -> (km, a)

    Parameters
    ----------
    km : fwi_integer, intent inout
    a : fwr_dbl, 1D array, dimension(*), intent inout

    Returns
    -------
    km : fwi_integer, intent inout
    a : fwr_dbl, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray a_
    cdef fw_shape_t a_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    a_, a = fw_asfortranarray(a, fwr_dbl_t_enum, 1, False)
    fw_copyshape(a_shape_, np.PyArray_DIMS(a_), 1)
    cjk_c(&km, a_shape_, <fwr_dbl_t*>np.PyArray_DATA(a_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cjk' wrapper.")
    return (km, a,)


cpdef api object ittika(fwr_dbl_t x, fwr_dbl_t tti, fwr_dbl_t ttk):
    """
    ittika(x, tti, ttk) -> (x, tti, ttk)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    tti : fwr_dbl, intent inout
    ttk : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    tti : fwr_dbl, intent inout
    ttk : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ittika_c(&x, &tti, &ttk, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ittika' wrapper.")
    return (x, tti, ttk,)


cpdef api object lamv(fwr_dbl_t v, fwr_dbl_t x, fwr_dbl_t vm, object vl, object dl):
    """
    lamv(v, x, vm, vl, dl) -> (v, x, vm, vl, dl)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    vm : fwr_dbl, intent inout
    vl : fwr_dbl, 1D array, dimension(0:*), intent inout
    dl : fwr_dbl, 1D array, dimension(0:*), intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    vm : fwr_dbl, intent inout
    vl : fwr_dbl, 1D array, dimension(0:*), intent inout
    dl : fwr_dbl, 1D array, dimension(0:*), intent inout

    """
    cdef np.ndarray vl_
    cdef fw_shape_t vl_shape_[1]
    cdef np.ndarray dl_
    cdef fw_shape_t dl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vl_, vl = fw_asfortranarray(vl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(vl_shape_, np.PyArray_DIMS(vl_), 1)
    dl_, dl = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dl_shape_, np.PyArray_DIMS(dl_), 1)
    lamv_c(&v, &x, &vm, vl_shape_, <fwr_dbl_t*>np.PyArray_DATA(vl_), dl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lamv' wrapper.")
    return (v, x, vm, vl, dl,)


cpdef api object chguit(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x, fwr_dbl_t hu, fwi_integer_t id):
    """
    chguit(a, b, x, hu, id) -> (a, b, x, hu, id)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    chguit_c(&a, &b, &x, &hu, &id, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'chguit' wrapper.")
    return (a, b, x, hu, id,)


cpdef api object kmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t cv, fwi_integer_t kd, object df, object dn, fwr_dbl_t ck1, fwr_dbl_t ck2):
    """
    kmn(m, n, c, cv, kd, df, dn, ck1, ck2) -> (m, n, c, cv, kd, df, dn, ck1, ck2)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    dn : fwr_dbl, 1D array, dimension(200), intent inout
    ck1 : fwr_dbl, intent inout
    ck2 : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    dn : fwr_dbl, 1D array, dimension(200), intent inout
    ck1 : fwr_dbl, intent inout
    ck2 : fwr_dbl, intent inout

    """
    cdef np.ndarray df_
    cdef fw_shape_t df_shape_[1]
    cdef np.ndarray dn_
    cdef fw_shape_t dn_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    df_, df = fw_asfortranarray(df, fwr_dbl_t_enum, 1, False)
    fw_copyshape(df_shape_, np.PyArray_DIMS(df_), 1)
    dn_, dn = fw_asfortranarray(dn, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dn_shape_, np.PyArray_DIMS(dn_), 1)
    kmn_c(&m, &n, &c, &cv, &kd, df_shape_, <fwr_dbl_t*>np.PyArray_DATA(df_), dn_shape_, <fwr_dbl_t*>np.PyArray_DATA(dn_), &ck1, &ck2, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'kmn' wrapper.")
    return (m, n, c, cv, kd, df, dn, ck1, ck2,)


cpdef api object lagzo(fwi_integer_t n, object x, object w):
    """
    lagzo(n, x, w) -> (n, x, w)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_, w = fw_asfortranarray(w, fwr_dbl_t_enum, 1, False)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    lagzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lagzo' wrapper.")
    return (n, x, w,)


cpdef api object vvla(fwr_dbl_t va, fwr_dbl_t x, fwr_dbl_t pv):
    """
    vvla(va, x, pv) -> (va, x, pv)

    Parameters
    ----------
    va : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    pv : fwr_dbl, intent inout

    Returns
    -------
    va : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    pv : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vvla_c(&va, &x, &pv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'vvla' wrapper.")
    return (va, x, pv,)


cpdef api object cjyva(fwr_dbl_t v, fwc_complex_x16_t z, fwr_dbl_t vm, object cbj, object cdj, object cby, object cdy):
    """
    cjyva(v, z, vm, cbj, cdj, cby, cdy) -> (v, z, vm, cbj, cdj, cby, cdy)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    vm : fwr_dbl, intent inout
    cbj : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cby : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    vm : fwr_dbl, intent inout
    cbj : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cby : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    """
    cdef np.ndarray cbj_
    cdef fw_shape_t cbj_shape_[1]
    cdef np.ndarray cdj_
    cdef fw_shape_t cdj_shape_[1]
    cdef np.ndarray cby_
    cdef fw_shape_t cby_shape_[1]
    cdef np.ndarray cdy_
    cdef fw_shape_t cdy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cbj_, cbj = fw_asfortranarray(cbj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbj_shape_, np.PyArray_DIMS(cbj_), 1)
    cdj_, cdj = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdj_shape_, np.PyArray_DIMS(cdj_), 1)
    cby_, cby = fw_asfortranarray(cby, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cby_shape_, np.PyArray_DIMS(cby_), 1)
    cdy_, cdy = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdy_shape_, np.PyArray_DIMS(cdy_), 1)
    cjyva_c(&v, &z, &vm, cbj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbj_), cdj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), cby_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cby_), cdy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cjyva' wrapper.")
    return (v, z, vm, cbj, cdj, cby, cdy,)


cpdef api object cjyvb(fwr_dbl_t v, fwc_complex_x16_t z, fwr_dbl_t vm, object cbj, object cdj, object cby, object cdy):
    """
    cjyvb(v, z, vm, cbj, cdj, cby, cdy) -> (v, z, vm, cbj, cdj, cby, cdy)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    vm : fwr_dbl, intent inout
    cbj : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cby : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    vm : fwr_dbl, intent inout
    cbj : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cby : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    """
    cdef np.ndarray cbj_
    cdef fw_shape_t cbj_shape_[1]
    cdef np.ndarray cdj_
    cdef fw_shape_t cdj_shape_[1]
    cdef np.ndarray cby_
    cdef fw_shape_t cby_shape_[1]
    cdef np.ndarray cdy_
    cdef fw_shape_t cdy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cbj_, cbj = fw_asfortranarray(cbj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbj_shape_, np.PyArray_DIMS(cbj_), 1)
    cdj_, cdj = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdj_shape_, np.PyArray_DIMS(cdj_), 1)
    cby_, cby = fw_asfortranarray(cby, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cby_shape_, np.PyArray_DIMS(cby_), 1)
    cdy_, cdy = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdy_shape_, np.PyArray_DIMS(cdy_), 1)
    cjyvb_c(&v, &z, &vm, cbj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbj_), cdj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), cby_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cby_), cdy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cjyvb' wrapper.")
    return (v, z, vm, cbj, cdj, cby, cdy,)


cpdef api object jy01a(fwr_dbl_t x, fwr_dbl_t bj0, fwr_dbl_t dj0, fwr_dbl_t bj1, fwr_dbl_t dj1, fwr_dbl_t by0, fwr_dbl_t dy0, fwr_dbl_t by1, fwr_dbl_t dy1):
    """
    jy01a(x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1) -> (x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    bj0 : fwr_dbl, intent inout
    dj0 : fwr_dbl, intent inout
    bj1 : fwr_dbl, intent inout
    dj1 : fwr_dbl, intent inout
    by0 : fwr_dbl, intent inout
    dy0 : fwr_dbl, intent inout
    by1 : fwr_dbl, intent inout
    dy1 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    bj0 : fwr_dbl, intent inout
    dj0 : fwr_dbl, intent inout
    bj1 : fwr_dbl, intent inout
    dj1 : fwr_dbl, intent inout
    by0 : fwr_dbl, intent inout
    dy0 : fwr_dbl, intent inout
    by1 : fwr_dbl, intent inout
    dy1 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    jy01a_c(&x, &bj0, &dj0, &bj1, &dj1, &by0, &dy0, &by1, &dy1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jy01a' wrapper.")
    return (x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1,)


cpdef api object incog(fwr_dbl_t a, fwr_dbl_t x, fwr_dbl_t gin, fwr_dbl_t gim, fwr_dbl_t gip):
    """
    incog(a, x, gin, gim, gip) -> (a, x, gin, gim, gip)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    gin : fwr_dbl, intent inout
    gim : fwr_dbl, intent inout
    gip : fwr_dbl, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    gin : fwr_dbl, intent inout
    gim : fwr_dbl, intent inout
    gip : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    incog_c(&a, &x, &gin, &gim, &gip, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'incog' wrapper.")
    return (a, x, gin, gim, gip,)


cpdef api object itikb(fwr_dbl_t x, fwr_dbl_t ti, fwr_dbl_t tk):
    """
    itikb(x, ti, tk) -> (x, ti, tk)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ti : fwr_dbl, intent inout
    tk : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ti : fwr_dbl, intent inout
    tk : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    itikb_c(&x, &ti, &tk, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'itikb' wrapper.")
    return (x, ti, tk,)


cpdef api object itika(fwr_dbl_t x, fwr_dbl_t ti, fwr_dbl_t tk):
    """
    itika(x, ti, tk) -> (x, ti, tk)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ti : fwr_dbl, intent inout
    tk : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ti : fwr_dbl, intent inout
    tk : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    itika_c(&x, &ti, &tk, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'itika' wrapper.")
    return (x, ti, tk,)


cpdef api object jyv(fwr_dbl_t v, fwr_dbl_t x, fwr_dbl_t vm, object bj, object dj, object by__, object dy):
    """
    jyv(v, x, vm, bj, dj, by__, dy) -> (v, x, vm, bj, dj, by__, dy)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    vm : fwr_dbl, intent inout
    bj : fwr_dbl, 1D array, dimension(0:*), intent inout
    dj : fwr_dbl, 1D array, dimension(0:*), intent inout
    by__ : fwr_dbl, 1D array, dimension(0:*), intent inout
    dy : fwr_dbl, 1D array, dimension(0:*), intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    vm : fwr_dbl, intent inout
    bj : fwr_dbl, 1D array, dimension(0:*), intent inout
    dj : fwr_dbl, 1D array, dimension(0:*), intent inout
    by__ : fwr_dbl, 1D array, dimension(0:*), intent inout
    dy : fwr_dbl, 1D array, dimension(0:*), intent inout

    """
    cdef np.ndarray bj_
    cdef fw_shape_t bj_shape_[1]
    cdef np.ndarray dj_
    cdef fw_shape_t dj_shape_[1]
    cdef np.ndarray by___
    cdef fw_shape_t by___shape_[1]
    cdef np.ndarray dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bj_, bj = fw_asfortranarray(bj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bj_shape_, np.PyArray_DIMS(bj_), 1)
    dj_, dj = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    by___, by__ = fw_asfortranarray(by__, fwr_dbl_t_enum, 1, False)
    fw_copyshape(by___shape_, np.PyArray_DIMS(by___), 1)
    dy_, dy = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    jyv_c(&v, &x, &vm, bj_shape_, <fwr_dbl_t*>np.PyArray_DATA(bj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), by___shape_, <fwr_dbl_t*>np.PyArray_DATA(by___), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jyv' wrapper.")
    return (v, x, vm, bj, dj, by__, dy,)


cpdef api object jynb(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object bj, object dj, object by__, object dy):
    """
    jynb(n, x, nm, bj, dj, by__, dy) -> (n, x, nm, bj, dj, by__, dy)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bj : fwr_dbl, 1D array, dimension(0:n), intent inout
    dj : fwr_dbl, 1D array, dimension(0:n), intent inout
    by__ : fwr_dbl, 1D array, dimension(0:n), intent inout
    dy : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bj : fwr_dbl, 1D array, dimension(0:n), intent inout
    dj : fwr_dbl, 1D array, dimension(0:n), intent inout
    by__ : fwr_dbl, 1D array, dimension(0:n), intent inout
    dy : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray bj_
    cdef fw_shape_t bj_shape_[1]
    cdef np.ndarray dj_
    cdef fw_shape_t dj_shape_[1]
    cdef np.ndarray by___
    cdef fw_shape_t by___shape_[1]
    cdef np.ndarray dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bj_, bj = fw_asfortranarray(bj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bj_shape_, np.PyArray_DIMS(bj_), 1)
    dj_, dj = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    by___, by__ = fw_asfortranarray(by__, fwr_dbl_t_enum, 1, False)
    fw_copyshape(by___shape_, np.PyArray_DIMS(by___), 1)
    dy_, dy = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    jynb_c(&n, &x, &nm, bj_shape_, <fwr_dbl_t*>np.PyArray_DATA(bj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), by___shape_, <fwr_dbl_t*>np.PyArray_DATA(by___), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jynb' wrapper.")
    return (n, x, nm, bj, dj, by__, dy,)


cpdef api object jynbh(fwi_integer_t n, fwi_integer_t nmin, fwr_dbl_t x, fwi_integer_t nm, object bj, object by__):
    """
    jynbh(n, nmin, x, nm, bj, by__) -> (n, nmin, x, nm, bj, by__)

    Parameters
    ----------
    n : fwi_integer, intent inout
    nmin : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bj : fwr_dbl, 1D array, dimension(0:n-nmin), intent inout
    by__ : fwr_dbl, 1D array, dimension(0:n-nmin), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    nmin : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bj : fwr_dbl, 1D array, dimension(0:n-nmin), intent inout
    by__ : fwr_dbl, 1D array, dimension(0:n-nmin), intent inout

    """
    cdef np.ndarray bj_
    cdef fw_shape_t bj_shape_[1]
    cdef np.ndarray by___
    cdef fw_shape_t by___shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bj_, bj = fw_asfortranarray(bj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bj_shape_, np.PyArray_DIMS(bj_), 1)
    by___, by__ = fw_asfortranarray(by__, fwr_dbl_t_enum, 1, False)
    fw_copyshape(by___shape_, np.PyArray_DIMS(by___), 1)
    jynbh_c(&n, &nmin, &x, &nm, bj_shape_, <fwr_dbl_t*>np.PyArray_DATA(bj_), by___shape_, <fwr_dbl_t*>np.PyArray_DATA(by___), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jynbh' wrapper.")
    return (n, nmin, x, nm, bj, by__,)


cpdef api object stvh1(fwr_dbl_t x, fwr_dbl_t sh1):
    """
    stvh1(x, sh1) -> (x, sh1)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    sh1 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    sh1 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    stvh1_c(&x, &sh1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'stvh1' wrapper.")
    return (x, sh1,)


cpdef api object legzo(fwi_integer_t n, object x, object w):
    """
    legzo(n, x, w) -> (n, x, w)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_, w = fw_asfortranarray(w, fwr_dbl_t_enum, 1, False)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    legzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'legzo' wrapper.")
    return (n, x, w,)


cpdef api object aswfa(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwi_integer_t kd, fwr_dbl_t cv, fwr_dbl_t s1f, fwr_dbl_t s1d):
    """
    aswfa(m, n, c, x, kd, cv, s1f, s1d) -> (m, n, c, x, kd, cv, s1f, s1d)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    cv : fwr_dbl, intent inout
    s1f : fwr_dbl, intent inout
    s1d : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    cv : fwr_dbl, intent inout
    s1f : fwr_dbl, intent inout
    s1d : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    aswfa_c(&m, &n, &c, &x, &kd, &cv, &s1f, &s1d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'aswfa' wrapper.")
    return (m, n, c, x, kd, cv, s1f, s1d,)


cpdef api object jyna(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object bj, object dj, object by__, object dy):
    """
    jyna(n, x, nm, bj, dj, by__, dy) -> (n, x, nm, bj, dj, by__, dy)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bj : fwr_dbl, 1D array, dimension(0:n), intent inout
    dj : fwr_dbl, 1D array, dimension(0:n), intent inout
    by__ : fwr_dbl, 1D array, dimension(0:n), intent inout
    dy : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bj : fwr_dbl, 1D array, dimension(0:n), intent inout
    dj : fwr_dbl, 1D array, dimension(0:n), intent inout
    by__ : fwr_dbl, 1D array, dimension(0:n), intent inout
    dy : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray bj_
    cdef fw_shape_t bj_shape_[1]
    cdef np.ndarray dj_
    cdef fw_shape_t dj_shape_[1]
    cdef np.ndarray by___
    cdef fw_shape_t by___shape_[1]
    cdef np.ndarray dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bj_, bj = fw_asfortranarray(bj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bj_shape_, np.PyArray_DIMS(bj_), 1)
    dj_, dj = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    by___, by__ = fw_asfortranarray(by__, fwr_dbl_t_enum, 1, False)
    fw_copyshape(by___shape_, np.PyArray_DIMS(by___), 1)
    dy_, dy = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    jyna_c(&n, &x, &nm, bj_shape_, <fwr_dbl_t*>np.PyArray_DATA(bj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), by___shape_, <fwr_dbl_t*>np.PyArray_DATA(by___), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jyna' wrapper.")
    return (n, x, nm, bj, dj, by__, dy,)


cpdef api object pbdv(fwr_dbl_t v, fwr_dbl_t x, object dv, object dp, fwr_dbl_t pdf, fwr_dbl_t pdd):
    """
    pbdv(v, x, dv, dp, pdf, pdd) -> (v, x, dv, dp, pdf, pdd)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    dv : fwr_dbl, 1D array, dimension(0:*), intent inout
    dp : fwr_dbl, 1D array, dimension(0:*), intent inout
    pdf : fwr_dbl, intent inout
    pdd : fwr_dbl, intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    dv : fwr_dbl, 1D array, dimension(0:*), intent inout
    dp : fwr_dbl, 1D array, dimension(0:*), intent inout
    pdf : fwr_dbl, intent inout
    pdd : fwr_dbl, intent inout

    """
    cdef np.ndarray dv_
    cdef fw_shape_t dv_shape_[1]
    cdef np.ndarray dp_
    cdef fw_shape_t dp_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    dv_, dv = fw_asfortranarray(dv, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dv_shape_, np.PyArray_DIMS(dv_), 1)
    dp_, dp = fw_asfortranarray(dp, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dp_shape_, np.PyArray_DIMS(dp_), 1)
    pbdv_c(&v, &x, dv_shape_, <fwr_dbl_t*>np.PyArray_DATA(dv_), dp_shape_, <fwr_dbl_t*>np.PyArray_DATA(dp_), &pdf, &pdd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'pbdv' wrapper.")
    return (v, x, dv, dp, pdf, pdd,)


cpdef api object itsh0(fwr_dbl_t x, fwr_dbl_t th0):
    """
    itsh0(x, th0) -> (x, th0)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    th0 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    th0 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    itsh0_c(&x, &th0, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'itsh0' wrapper.")
    return (x, th0,)


cpdef api object cerzo(fwi_integer_t nt, object zo):
    """
    cerzo(nt, zo) -> (nt, zo)

    Parameters
    ----------
    nt : fwi_integer, intent inout
    zo : fwc_complex_x16, 1D array, dimension(nt), intent inout

    Returns
    -------
    nt : fwi_integer, intent inout
    zo : fwc_complex_x16, 1D array, dimension(nt), intent inout

    """
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_, zo = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    cerzo_c(&nt, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cerzo' wrapper.")
    return (nt, zo,)


cpdef api object gamma2(fwr_dbl_t x, fwr_dbl_t ga):
    """
    gamma2(x, ga) -> (x, ga)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ga : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ga : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    gamma2_c(&x, &ga, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gamma2' wrapper.")
    return (x, ga,)


cpdef api object chgu(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x, fwr_dbl_t hu, fwi_integer_t md):
    """
    chgu(a, b, x, hu, md) -> (a, b, x, hu, md)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    md : fwi_integer, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    md : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    chgu_c(&a, &b, &x, &hu, &md, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'chgu' wrapper.")
    return (a, b, x, hu, md,)


cpdef api object lamn(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object bl, object dl):
    """
    lamn(n, x, nm, bl, dl) -> (n, x, nm, bl, dl)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bl : fwr_dbl, 1D array, dimension(0:n), intent inout
    dl : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bl : fwr_dbl, 1D array, dimension(0:n), intent inout
    dl : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray bl_
    cdef fw_shape_t bl_shape_[1]
    cdef np.ndarray dl_
    cdef fw_shape_t dl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bl_, bl = fw_asfortranarray(bl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bl_shape_, np.PyArray_DIMS(bl_), 1)
    dl_, dl = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dl_shape_, np.PyArray_DIMS(dl_), 1)
    lamn_c(&n, &x, &nm, bl_shape_, <fwr_dbl_t*>np.PyArray_DATA(bl_), dl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lamn' wrapper.")
    return (n, x, nm, bl, dl,)


cpdef api object comelp(fwr_dbl_t hk, fwr_dbl_t ck, fwr_dbl_t ce):
    """
    comelp(hk, ck, ce) -> (hk, ck, ce)

    Parameters
    ----------
    hk : fwr_dbl, intent inout
    ck : fwr_dbl, intent inout
    ce : fwr_dbl, intent inout

    Returns
    -------
    hk : fwr_dbl, intent inout
    ck : fwr_dbl, intent inout
    ce : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    comelp_c(&hk, &ck, &ce, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'comelp' wrapper.")
    return (hk, ck, ce,)


cpdef api object incob(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x, fwr_dbl_t bix):
    """
    incob(a, b, x, bix) -> (a, b, x, bix)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    bix : fwr_dbl, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    bix : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    incob_c(&a, &b, &x, &bix, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'incob' wrapper.")
    return (a, b, x, bix,)


cpdef api object cvf(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a, fwi_integer_t mj, fwr_dbl_t f):
    """
    cvf(kd, m, q, a, mj, f) -> (kd, m, q, a, mj, f)

    Parameters
    ----------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a : fwr_dbl, intent inout
    mj : fwi_integer, intent inout
    f : fwr_dbl, intent inout

    Returns
    -------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a : fwr_dbl, intent inout
    mj : fwi_integer, intent inout
    f : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cvf_c(&kd, &m, &q, &a, &mj, &f, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cvf' wrapper.")
    return (kd, m, q, a, mj, f,)


cpdef api object clpn(fwi_integer_t n, fwr_dbl_t x, fwr_dbl_t y, object cpn, object cpd):
    """
    clpn(n, x, y, cpn, cpd) -> (n, x, y, cpn, cpd)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    cpn : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cpd : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    cpn : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cpd : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray cpn_
    cdef fw_shape_t cpn_shape_[1]
    cdef np.ndarray cpd_
    cdef fw_shape_t cpd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpn_, cpn = fw_asfortranarray(cpn, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cpn_shape_, np.PyArray_DIMS(cpn_), 1)
    cpd_, cpd = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 1)
    clpn_c(&n, &x, &y, cpn_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpn_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clpn' wrapper.")
    return (n, x, y, cpn, cpd,)


cpdef api object lqmns(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object qm, object qd):
    """
    lqmns(m, n, x, qm, qd) -> (m, n, x, qm, qd)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    qm : fwr_dbl, 1D array, dimension(0:n), intent inout
    qd : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    qm : fwr_dbl, 1D array, dimension(0:n), intent inout
    qd : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray qm_
    cdef fw_shape_t qm_shape_[1]
    cdef np.ndarray qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qm_, qm = fw_asfortranarray(qm, fwr_dbl_t_enum, 1, False)
    fw_copyshape(qm_shape_, np.PyArray_DIMS(qm_), 1)
    qd_, qd = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, False)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    lqmns_c(&m, &n, &x, qm_shape_, <fwr_dbl_t*>np.PyArray_DATA(qm_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqmns' wrapper.")
    return (m, n, x, qm, qd,)


cpdef api object ciklv(fwr_dbl_t v, fwc_complex_x16_t z, fwc_complex_x16_t cbiv, fwc_complex_x16_t cdiv, fwc_complex_x16_t cbkv, fwc_complex_x16_t cdkv):
    """
    ciklv(v, z, cbiv, cdiv, cbkv, cdkv) -> (v, z, cbiv, cdiv, cbkv, cdkv)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    cbiv : fwc_complex_x16, intent inout
    cdiv : fwc_complex_x16, intent inout
    cbkv : fwc_complex_x16, intent inout
    cdkv : fwc_complex_x16, intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    cbiv : fwc_complex_x16, intent inout
    cdiv : fwc_complex_x16, intent inout
    cbkv : fwc_complex_x16, intent inout
    cdkv : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ciklv_c(&v, &z, &cbiv, &cdiv, &cbkv, &cdkv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ciklv' wrapper.")
    return (v, z, cbiv, cdiv, cbkv, cdkv,)


cpdef api object elit(fwr_dbl_t hk, fwr_dbl_t phi, fwr_dbl_t fe, fwr_dbl_t ee):
    """
    elit(hk, phi, fe, ee) -> (hk, phi, fe, ee)

    Parameters
    ----------
    hk : fwr_dbl, intent inout
    phi : fwr_dbl, intent inout
    fe : fwr_dbl, intent inout
    ee : fwr_dbl, intent inout

    Returns
    -------
    hk : fwr_dbl, intent inout
    phi : fwr_dbl, intent inout
    fe : fwr_dbl, intent inout
    ee : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    elit_c(&hk, &phi, &fe, &ee, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'elit' wrapper.")
    return (hk, phi, fe, ee,)


cpdef api object elit3(fwr_dbl_t phi, fwr_dbl_t hk, fwr_dbl_t c, fwr_dbl_t el3):
    """
    elit3(phi, hk, c, el3) -> (phi, hk, c, el3)

    Parameters
    ----------
    phi : fwr_dbl, intent inout
    hk : fwr_dbl, intent inout
    c : fwr_dbl, intent inout
    el3 : fwr_dbl, intent inout

    Returns
    -------
    phi : fwr_dbl, intent inout
    hk : fwr_dbl, intent inout
    c : fwr_dbl, intent inout
    el3 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    elit3_c(&phi, &hk, &c, &el3, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'elit3' wrapper.")
    return (phi, hk, c, el3,)


cpdef api object eix(fwr_dbl_t x, fwr_dbl_t ei):
    """
    eix(x, ei) -> (x, ei)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ei : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ei : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    eix_c(&x, &ei, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'eix' wrapper.")
    return (x, ei,)


cpdef api object eixz(fwc_dbl_complex_t z, fwc_dbl_complex_t cei):
    """
    eixz(z, cei) -> (z, cei)

    Parameters
    ----------
    z : fwc_dbl_complex, intent inout
    cei : fwc_dbl_complex, intent inout

    Returns
    -------
    z : fwc_dbl_complex, intent inout
    cei : fwc_dbl_complex, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    eixz_c(&z, &cei, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'eixz' wrapper.")
    return (z, cei,)


cpdef api object e1xb(fwr_dbl_t x, fwr_dbl_t e1):
    """
    e1xb(x, e1) -> (x, e1)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    e1 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    e1 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    e1xb_c(&x, &e1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'e1xb' wrapper.")
    return (x, e1,)


cpdef api object chgm(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x, fwr_dbl_t hg):
    """
    chgm(a, b, x, hg) -> (a, b, x, hg)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hg : fwr_dbl, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hg : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    chgm_c(&a, &b, &x, &hg, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'chgm' wrapper.")
    return (a, b, x, hg,)


cpdef api object stvh0(fwr_dbl_t x, fwr_dbl_t sh0):
    """
    stvh0(x, sh0) -> (x, sh0)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    sh0 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    sh0 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    stvh0_c(&x, &sh0, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'stvh0' wrapper.")
    return (x, sh0,)


cpdef api object hygfx(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t c, fwr_dbl_t x, fwr_dbl_t hf):
    """
    hygfx(a, b, c, x, hf) -> (a, b, c, x, hf)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hf : fwr_dbl, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hf : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    hygfx_c(&a, &b, &c, &x, &hf, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'hygfx' wrapper.")
    return (a, b, c, x, hf,)


cpdef api object cchg(fwr_dbl_t a, fwr_dbl_t b, fwc_complex_x16_t z, fwc_complex_x16_t chg):
    """
    cchg(a, b, z, chg) -> (a, b, z, chg)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    chg : fwc_complex_x16, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    chg : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cchg_c(&a, &b, &z, &chg, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cchg' wrapper.")
    return (a, b, z, chg,)


cpdef api object hygfz(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t c, fwc_complex_x16_t z, fwc_complex_x16_t zhf):
    """
    hygfz(a, b, c, z, zhf) -> (a, b, c, z, zhf)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    c : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    zhf : fwc_complex_x16, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    c : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    zhf : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    hygfz_c(&a, &b, &c, &z, &zhf, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'hygfz' wrapper.")
    return (a, b, c, z, zhf,)


cpdef api object itairy(fwr_dbl_t x, fwr_dbl_t apt, fwr_dbl_t bpt, fwr_dbl_t ant, fwr_dbl_t bnt):
    """
    itairy(x, apt, bpt, ant, bnt) -> (x, apt, bpt, ant, bnt)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    apt : fwr_dbl, intent inout
    bpt : fwr_dbl, intent inout
    ant : fwr_dbl, intent inout
    bnt : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    apt : fwr_dbl, intent inout
    bpt : fwr_dbl, intent inout
    ant : fwr_dbl, intent inout
    bnt : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    itairy_c(&x, &apt, &bpt, &ant, &bnt, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'itairy' wrapper.")
    return (x, apt, bpt, ant, bnt,)


cpdef api object ikna(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object bi, object di, object bk, object dk):
    """
    ikna(n, x, nm, bi, di, bk, dk) -> (n, x, nm, bi, di, bk, dk)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bi : fwr_dbl, 1D array, dimension(0:n), intent inout
    di : fwr_dbl, 1D array, dimension(0:n), intent inout
    bk : fwr_dbl, 1D array, dimension(0:n), intent inout
    dk : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bi : fwr_dbl, 1D array, dimension(0:n), intent inout
    di : fwr_dbl, 1D array, dimension(0:n), intent inout
    bk : fwr_dbl, 1D array, dimension(0:n), intent inout
    dk : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray bi_
    cdef fw_shape_t bi_shape_[1]
    cdef np.ndarray di_
    cdef fw_shape_t di_shape_[1]
    cdef np.ndarray bk_
    cdef fw_shape_t bk_shape_[1]
    cdef np.ndarray dk_
    cdef fw_shape_t dk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bi_, bi = fw_asfortranarray(bi, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bi_shape_, np.PyArray_DIMS(bi_), 1)
    di_, di = fw_asfortranarray(di, fwr_dbl_t_enum, 1, False)
    fw_copyshape(di_shape_, np.PyArray_DIMS(di_), 1)
    bk_, bk = fw_asfortranarray(bk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bk_shape_, np.PyArray_DIMS(bk_), 1)
    dk_, dk = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dk_shape_, np.PyArray_DIMS(dk_), 1)
    ikna_c(&n, &x, &nm, bi_shape_, <fwr_dbl_t*>np.PyArray_DATA(bi_), di_shape_, <fwr_dbl_t*>np.PyArray_DATA(di_), bk_shape_, <fwr_dbl_t*>np.PyArray_DATA(bk_), dk_shape_, <fwr_dbl_t*>np.PyArray_DATA(dk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ikna' wrapper.")
    return (n, x, nm, bi, di, bk, dk,)


cpdef api object cjyna(fwi_integer_t n, fwc_complex_x16_t z, fwi_integer_t nm, object cbj, object cdj, object cby, object cdy):
    """
    cjyna(n, z, nm, cbj, cdj, cby, cdy) -> (n, z, nm, cbj, cdj, cby, cdy)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    cbj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cby : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    cbj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cby : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray cbj_
    cdef fw_shape_t cbj_shape_[1]
    cdef np.ndarray cdj_
    cdef fw_shape_t cdj_shape_[1]
    cdef np.ndarray cby_
    cdef fw_shape_t cby_shape_[1]
    cdef np.ndarray cdy_
    cdef fw_shape_t cdy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cbj_, cbj = fw_asfortranarray(cbj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbj_shape_, np.PyArray_DIMS(cbj_), 1)
    cdj_, cdj = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdj_shape_, np.PyArray_DIMS(cdj_), 1)
    cby_, cby = fw_asfortranarray(cby, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cby_shape_, np.PyArray_DIMS(cby_), 1)
    cdy_, cdy = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdy_shape_, np.PyArray_DIMS(cdy_), 1)
    cjyna_c(&n, &z, &nm, cbj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbj_), cdj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), cby_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cby_), cdy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cjyna' wrapper.")
    return (n, z, nm, cbj, cdj, cby, cdy,)


cpdef api object cjynb(fwi_integer_t n, fwc_complex_x16_t z, fwi_integer_t nm, object cbj, object cdj, object cby, object cdy):
    """
    cjynb(n, z, nm, cbj, cdj, cby, cdy) -> (n, z, nm, cbj, cdj, cby, cdy)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    cbj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cby : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    cbj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdj : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cby : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdy : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray cbj_
    cdef fw_shape_t cbj_shape_[1]
    cdef np.ndarray cdj_
    cdef fw_shape_t cdj_shape_[1]
    cdef np.ndarray cby_
    cdef fw_shape_t cby_shape_[1]
    cdef np.ndarray cdy_
    cdef fw_shape_t cdy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cbj_, cbj = fw_asfortranarray(cbj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbj_shape_, np.PyArray_DIMS(cbj_), 1)
    cdj_, cdj = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdj_shape_, np.PyArray_DIMS(cdj_), 1)
    cby_, cby = fw_asfortranarray(cby, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cby_shape_, np.PyArray_DIMS(cby_), 1)
    cdy_, cdy = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdy_shape_, np.PyArray_DIMS(cdy_), 1)
    cjynb_c(&n, &z, &nm, cbj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbj_), cdj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), cby_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cby_), cdy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cjynb' wrapper.")
    return (n, z, nm, cbj, cdj, cby, cdy,)


cpdef api object iknb(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object bi, object di, object bk, object dk):
    """
    iknb(n, x, nm, bi, di, bk, dk) -> (n, x, nm, bi, di, bk, dk)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bi : fwr_dbl, 1D array, dimension(0:n), intent inout
    di : fwr_dbl, 1D array, dimension(0:n), intent inout
    bk : fwr_dbl, 1D array, dimension(0:n), intent inout
    dk : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    bi : fwr_dbl, 1D array, dimension(0:n), intent inout
    di : fwr_dbl, 1D array, dimension(0:n), intent inout
    bk : fwr_dbl, 1D array, dimension(0:n), intent inout
    dk : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray bi_
    cdef fw_shape_t bi_shape_[1]
    cdef np.ndarray di_
    cdef fw_shape_t di_shape_[1]
    cdef np.ndarray bk_
    cdef fw_shape_t bk_shape_[1]
    cdef np.ndarray dk_
    cdef fw_shape_t dk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bi_, bi = fw_asfortranarray(bi, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bi_shape_, np.PyArray_DIMS(bi_), 1)
    di_, di = fw_asfortranarray(di, fwr_dbl_t_enum, 1, False)
    fw_copyshape(di_shape_, np.PyArray_DIMS(di_), 1)
    bk_, bk = fw_asfortranarray(bk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bk_shape_, np.PyArray_DIMS(bk_), 1)
    dk_, dk = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dk_shape_, np.PyArray_DIMS(dk_), 1)
    iknb_c(&n, &x, &nm, bi_shape_, <fwr_dbl_t*>np.PyArray_DATA(bi_), di_shape_, <fwr_dbl_t*>np.PyArray_DATA(di_), bk_shape_, <fwr_dbl_t*>np.PyArray_DATA(bk_), dk_shape_, <fwr_dbl_t*>np.PyArray_DATA(dk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'iknb' wrapper.")
    return (n, x, nm, bi, di, bk, dk,)


cpdef api object lpmn(fwi_integer_t mm, fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object pm, object pd):
    """
    lpmn(mm, m, n, x, pm, pd) -> (mm, m, n, x, pm, pd)

    Parameters
    ----------
    mm : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pm : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent inout
    pd : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent inout

    Returns
    -------
    mm : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pm : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent inout
    pd : fwr_dbl, 2D array, dimension(0:mm, 0:n), intent inout

    """
    cdef np.ndarray pm_
    cdef fw_shape_t pm_shape_[2]
    cdef np.ndarray pd_
    cdef fw_shape_t pd_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pm_, pm = fw_asfortranarray(pm, fwr_dbl_t_enum, 2, False)
    fw_copyshape(pm_shape_, np.PyArray_DIMS(pm_), 2)
    pd_, pd = fw_asfortranarray(pd, fwr_dbl_t_enum, 2, False)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 2)
    lpmn_c(&mm, &m, &n, &x, pm_shape_, <fwr_dbl_t*>np.PyArray_DATA(pm_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpmn' wrapper.")
    return (mm, m, n, x, pm, pd,)


cpdef api object mtu0(fwi_integer_t kf, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t x, fwr_dbl_t csf, fwr_dbl_t csd):
    """
    mtu0(kf, m, q, x, csf, csd) -> (kf, m, q, x, csf, csd)

    Parameters
    ----------
    kf : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    csf : fwr_dbl, intent inout
    csd : fwr_dbl, intent inout

    Returns
    -------
    kf : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    csf : fwr_dbl, intent inout
    csd : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    mtu0_c(&kf, &m, &q, &x, &csf, &csd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mtu0' wrapper.")
    return (kf, m, q, x, csf, csd,)


cpdef api object cy01(fwi_integer_t kf, fwc_complex_x16_t z, fwc_complex_x16_t zf, fwc_complex_x16_t zd):
    """
    cy01(kf, z, zf, zd) -> (kf, z, zf, zd)

    Parameters
    ----------
    kf : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    zf : fwc_complex_x16, intent inout
    zd : fwc_complex_x16, intent inout

    Returns
    -------
    kf : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    zf : fwc_complex_x16, intent inout
    zd : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cy01_c(&kf, &z, &zf, &zd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cy01' wrapper.")
    return (kf, z, zf, zd,)


cpdef api object ffk(fwi_integer_t ks, fwr_dbl_t x, fwr_dbl_t fr, fwr_dbl_t fi, fwr_dbl_t fm, fwr_dbl_t fa, fwr_dbl_t gr, fwr_dbl_t gi, fwr_dbl_t gm, fwr_dbl_t ga):
    """
    ffk(ks, x, fr, fi, fm, fa, gr, gi, gm, ga) -> (ks, x, fr, fi, fm, fa, gr, gi, gm, ga)

    Parameters
    ----------
    ks : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    fr : fwr_dbl, intent inout
    fi : fwr_dbl, intent inout
    fm : fwr_dbl, intent inout
    fa : fwr_dbl, intent inout
    gr : fwr_dbl, intent inout
    gi : fwr_dbl, intent inout
    gm : fwr_dbl, intent inout
    ga : fwr_dbl, intent inout

    Returns
    -------
    ks : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    fr : fwr_dbl, intent inout
    fi : fwr_dbl, intent inout
    fm : fwr_dbl, intent inout
    fa : fwr_dbl, intent inout
    gr : fwr_dbl, intent inout
    gi : fwr_dbl, intent inout
    gm : fwr_dbl, intent inout
    ga : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ffk_c(&ks, &x, &fr, &fi, &fm, &fa, &gr, &gi, &gm, &ga, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ffk' wrapper.")
    return (ks, x, fr, fi, fm, fa, gr, gi, gm, ga,)


cpdef api object airya(fwr_dbl_t x, fwr_dbl_t ai, fwr_dbl_t bi, fwr_dbl_t ad, fwr_dbl_t bd):
    """
    airya(x, ai, bi, ad, bd) -> (x, ai, bi, ad, bd)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ai : fwr_dbl, intent inout
    bi : fwr_dbl, intent inout
    ad : fwr_dbl, intent inout
    bd : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ai : fwr_dbl, intent inout
    bi : fwr_dbl, intent inout
    ad : fwr_dbl, intent inout
    bd : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    airya_c(&x, &ai, &bi, &ad, &bd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'airya' wrapper.")
    return (x, ai, bi, ad, bd,)


cpdef api object airyb(fwr_dbl_t x, fwr_dbl_t ai, fwr_dbl_t bi, fwr_dbl_t ad, fwr_dbl_t bd):
    """
    airyb(x, ai, bi, ad, bd) -> (x, ai, bi, ad, bd)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ai : fwr_dbl, intent inout
    bi : fwr_dbl, intent inout
    ad : fwr_dbl, intent inout
    bd : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ai : fwr_dbl, intent inout
    bi : fwr_dbl, intent inout
    ad : fwr_dbl, intent inout
    bd : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    airyb_c(&x, &ai, &bi, &ad, &bd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'airyb' wrapper.")
    return (x, ai, bi, ad, bd,)


cpdef api object scka(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t cv, fwi_integer_t kd, object ck):
    """
    scka(m, n, c, cv, kd, ck) -> (m, n, c, cv, kd, ck)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    ck : fwr_dbl, 1D array, dimension(200), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    ck : fwr_dbl, 1D array, dimension(200), intent inout

    """
    cdef np.ndarray ck_
    cdef fw_shape_t ck_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ck_, ck = fw_asfortranarray(ck, fwr_dbl_t_enum, 1, False)
    fw_copyshape(ck_shape_, np.PyArray_DIMS(ck_), 1)
    scka_c(&m, &n, &c, &cv, &kd, ck_shape_, <fwr_dbl_t*>np.PyArray_DATA(ck_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'scka' wrapper.")
    return (m, n, c, cv, kd, ck,)


cpdef api object sckb(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, object df, object ck):
    """
    sckb(m, n, c, df, ck) -> (m, n, c, df, ck)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    ck : fwr_dbl, 1D array, dimension(200), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    ck : fwr_dbl, 1D array, dimension(200), intent inout

    """
    cdef np.ndarray df_
    cdef fw_shape_t df_shape_[1]
    cdef np.ndarray ck_
    cdef fw_shape_t ck_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    df_, df = fw_asfortranarray(df, fwr_dbl_t_enum, 1, False)
    fw_copyshape(df_shape_, np.PyArray_DIMS(df_), 1)
    ck_, ck = fw_asfortranarray(ck, fwr_dbl_t_enum, 1, False)
    fw_copyshape(ck_shape_, np.PyArray_DIMS(ck_), 1)
    sckb_c(&m, &n, &c, df_shape_, <fwr_dbl_t*>np.PyArray_DATA(df_), ck_shape_, <fwr_dbl_t*>np.PyArray_DATA(ck_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sckb' wrapper.")
    return (m, n, c, df, ck,)


cpdef api object cpdla(fwi_integer_t n, fwc_complex_x16_t z, fwc_complex_x16_t cdn):
    """
    cpdla(n, z, cdn) -> (n, z, cdn)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    cdn : fwc_complex_x16, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    cdn : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpdla_c(&n, &z, &cdn, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cpdla' wrapper.")
    return (n, z, cdn,)


cpdef api object fcszo(fwi_integer_t kf, fwi_integer_t nt, object zo):
    """
    fcszo(kf, nt, zo) -> (kf, nt, zo)

    Parameters
    ----------
    kf : fwi_integer, intent inout
    nt : fwi_integer, intent inout
    zo : fwc_complex_x16, 1D array, dimension(nt), intent inout

    Returns
    -------
    kf : fwi_integer, intent inout
    nt : fwi_integer, intent inout
    zo : fwc_complex_x16, 1D array, dimension(nt), intent inout

    """
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_, zo = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    fcszo_c(&kf, &nt, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'fcszo' wrapper.")
    return (kf, nt, zo,)


cpdef api object e1xa(fwr_dbl_t x, fwr_dbl_t e1):
    """
    e1xa(x, e1) -> (x, e1)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    e1 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    e1 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    e1xa_c(&x, &e1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'e1xa' wrapper.")
    return (x, e1,)


cpdef api object lpmv(fwr_dbl_t v, fwi_integer_t m, fwr_dbl_t x, fwr_dbl_t pmv):
    """
    lpmv(v, m, x, pmv) -> (v, m, x, pmv)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    m : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pmv : fwr_dbl, intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    m : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pmv : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    lpmv_c(&v, &m, &x, &pmv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpmv' wrapper.")
    return (v, m, x, pmv,)


cpdef api object cgama(fwr_dbl_t x, fwr_dbl_t y, fwi_integer_t kf, fwr_dbl_t gr, fwr_dbl_t gi):
    """
    cgama(x, y, kf, gr, gi) -> (x, y, kf, gr, gi)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    kf : fwi_integer, intent inout
    gr : fwr_dbl, intent inout
    gi : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    kf : fwi_integer, intent inout
    gr : fwr_dbl, intent inout
    gi : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cgama_c(&x, &y, &kf, &gr, &gi, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cgama' wrapper.")
    return (x, y, kf, gr, gi,)


cpdef api object aswfb(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwi_integer_t kd, fwr_dbl_t cv, fwr_dbl_t s1f, fwr_dbl_t s1d):
    """
    aswfb(m, n, c, x, kd, cv, s1f, s1d) -> (m, n, c, x, kd, cv, s1f, s1d)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    cv : fwr_dbl, intent inout
    s1f : fwr_dbl, intent inout
    s1d : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    cv : fwr_dbl, intent inout
    s1f : fwr_dbl, intent inout
    s1d : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    aswfb_c(&m, &n, &c, &x, &kd, &cv, &s1f, &s1d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'aswfb' wrapper.")
    return (m, n, c, x, kd, cv, s1f, s1d,)


cpdef api object chgus(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x, fwr_dbl_t hu, fwi_integer_t id):
    """
    chgus(a, b, x, hu, id) -> (a, b, x, hu, id)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    chgus_c(&a, &b, &x, &hu, &id, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'chgus' wrapper.")
    return (a, b, x, hu, id,)


cpdef api object itth0(fwr_dbl_t x, fwr_dbl_t tth):
    """
    itth0(x, tth) -> (x, tth)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    tth : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    tth : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    itth0_c(&x, &tth, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'itth0' wrapper.")
    return (x, tth,)


cpdef api object lgama(fwi_integer_t kf, fwr_dbl_t x, fwr_dbl_t gl):
    """
    lgama(kf, x, gl) -> (kf, x, gl)

    Parameters
    ----------
    kf : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    gl : fwr_dbl, intent inout

    Returns
    -------
    kf : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    gl : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    lgama_c(&kf, &x, &gl, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lgama' wrapper.")
    return (kf, x, gl,)


cpdef api object lqna(fwi_integer_t n, fwr_dbl_t x, object qn, object qd):
    """
    lqna(n, x, qn, qd) -> (n, x, qn, qd)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    qn : fwr_dbl, 1D array, dimension(0:n), intent inout
    qd : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    qn : fwr_dbl, 1D array, dimension(0:n), intent inout
    qd : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray qn_
    cdef fw_shape_t qn_shape_[1]
    cdef np.ndarray qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qn_, qn = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, False)
    fw_copyshape(qn_shape_, np.PyArray_DIMS(qn_), 1)
    qd_, qd = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, False)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    lqna_c(&n, &x, qn_shape_, <fwr_dbl_t*>np.PyArray_DATA(qn_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqna' wrapper.")
    return (n, x, qn, qd,)


cpdef api object dvla(fwr_dbl_t va, fwr_dbl_t x, fwr_dbl_t pd):
    """
    dvla(va, x, pd) -> (va, x, pd)

    Parameters
    ----------
    va : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    pd : fwr_dbl, intent inout

    Returns
    -------
    va : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    pd : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    dvla_c(&va, &x, &pd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'dvla' wrapper.")
    return (va, x, pd,)


cpdef api object ik01a(fwr_dbl_t x, fwr_dbl_t bi0, fwr_dbl_t di0, fwr_dbl_t bi1, fwr_dbl_t di1, fwr_dbl_t bk0, fwr_dbl_t dk0, fwr_dbl_t bk1, fwr_dbl_t dk1):
    """
    ik01a(x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1) -> (x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    bi0 : fwr_dbl, intent inout
    di0 : fwr_dbl, intent inout
    bi1 : fwr_dbl, intent inout
    di1 : fwr_dbl, intent inout
    bk0 : fwr_dbl, intent inout
    dk0 : fwr_dbl, intent inout
    bk1 : fwr_dbl, intent inout
    dk1 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    bi0 : fwr_dbl, intent inout
    di0 : fwr_dbl, intent inout
    bi1 : fwr_dbl, intent inout
    di1 : fwr_dbl, intent inout
    bk0 : fwr_dbl, intent inout
    dk0 : fwr_dbl, intent inout
    bk1 : fwr_dbl, intent inout
    dk1 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ik01a_c(&x, &bi0, &di0, &bi1, &di1, &bk0, &dk0, &bk1, &dk1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ik01a' wrapper.")
    return (x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1,)


cpdef api object cpbdn(fwi_integer_t n, fwc_complex_x16_t z, object cpb, object cpd):
    """
    cpbdn(n, z, cpb, cpd) -> (n, z, cpb, cpd)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    cpb : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cpd : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    cpb : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cpd : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    """
    cdef np.ndarray cpb_
    cdef fw_shape_t cpb_shape_[1]
    cdef np.ndarray cpd_
    cdef fw_shape_t cpd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpb_, cpb = fw_asfortranarray(cpb, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cpb_shape_, np.PyArray_DIMS(cpb_), 1)
    cpd_, cpd = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 1)
    cpbdn_c(&n, &z, cpb_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpb_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cpbdn' wrapper.")
    return (n, z, cpb, cpd,)


cpdef api object ik01b(fwr_dbl_t x, fwr_dbl_t bi0, fwr_dbl_t di0, fwr_dbl_t bi1, fwr_dbl_t di1, fwr_dbl_t bk0, fwr_dbl_t dk0, fwr_dbl_t bk1, fwr_dbl_t dk1):
    """
    ik01b(x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1) -> (x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    bi0 : fwr_dbl, intent inout
    di0 : fwr_dbl, intent inout
    bi1 : fwr_dbl, intent inout
    di1 : fwr_dbl, intent inout
    bk0 : fwr_dbl, intent inout
    dk0 : fwr_dbl, intent inout
    bk1 : fwr_dbl, intent inout
    dk1 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    bi0 : fwr_dbl, intent inout
    di0 : fwr_dbl, intent inout
    bi1 : fwr_dbl, intent inout
    di1 : fwr_dbl, intent inout
    bk0 : fwr_dbl, intent inout
    dk0 : fwr_dbl, intent inout
    bk1 : fwr_dbl, intent inout
    dk1 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ik01b_c(&x, &bi0, &di0, &bi1, &di1, &bk0, &dk0, &bk1, &dk1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ik01b' wrapper.")
    return (x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1,)


cpdef api object beta(fwr_dbl_t p, fwr_dbl_t q, fwr_dbl_t bt):
    """
    beta(p, q, bt) -> (p, q, bt)

    Parameters
    ----------
    p : fwr_dbl, intent inout
    q : fwr_dbl, intent inout
    bt : fwr_dbl, intent inout

    Returns
    -------
    p : fwr_dbl, intent inout
    q : fwr_dbl, intent inout
    bt : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    beta_c(&p, &q, &bt, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'beta' wrapper.")
    return (p, q, bt,)


cpdef api object lpn(fwi_integer_t n, fwr_dbl_t x, object pn, object pd):
    """
    lpn(n, x, pn, pd) -> (n, x, pn, pd)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pn : fwr_dbl, 1D array, dimension(0:n), intent inout
    pd : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pn : fwr_dbl, 1D array, dimension(0:n), intent inout
    pd : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray pn_
    cdef fw_shape_t pn_shape_[1]
    cdef np.ndarray pd_
    cdef fw_shape_t pd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pn_, pn = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, False)
    fw_copyshape(pn_shape_, np.PyArray_DIMS(pn_), 1)
    pd_, pd = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, False)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    lpn_c(&n, &x, pn_shape_, <fwr_dbl_t*>np.PyArray_DATA(pn_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpn' wrapper.")
    return (n, x, pn, pd,)


cpdef api object fcoef(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a, object fc):
    """
    fcoef(kd, m, q, a, fc) -> (kd, m, q, a, fc)

    Parameters
    ----------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a : fwr_dbl, intent inout
    fc : fwr_dbl, 1D array, dimension(251), intent inout

    Returns
    -------
    kd : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    a : fwr_dbl, intent inout
    fc : fwr_dbl, 1D array, dimension(251), intent inout

    """
    cdef np.ndarray fc_
    cdef fw_shape_t fc_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fc_, fc = fw_asfortranarray(fc, fwr_dbl_t_enum, 1, False)
    fw_copyshape(fc_shape_, np.PyArray_DIMS(fc_), 1)
    fcoef_c(&kd, &m, &q, &a, fc_shape_, <fwr_dbl_t*>np.PyArray_DATA(fc_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'fcoef' wrapper.")
    return (kd, m, q, a, fc,)


cpdef api object sphi(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object si, object di):
    """
    sphi(n, x, nm, si, di) -> (n, x, nm, si, di)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    si : fwr_dbl, 1D array, dimension(0:n), intent inout
    di : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    si : fwr_dbl, 1D array, dimension(0:n), intent inout
    di : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray si_
    cdef fw_shape_t si_shape_[1]
    cdef np.ndarray di_
    cdef fw_shape_t di_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    si_, si = fw_asfortranarray(si, fwr_dbl_t_enum, 1, False)
    fw_copyshape(si_shape_, np.PyArray_DIMS(si_), 1)
    di_, di = fw_asfortranarray(di, fwr_dbl_t_enum, 1, False)
    fw_copyshape(di_shape_, np.PyArray_DIMS(di_), 1)
    sphi_c(&n, &x, &nm, si_shape_, <fwr_dbl_t*>np.PyArray_DATA(si_), di_shape_, <fwr_dbl_t*>np.PyArray_DATA(di_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphi' wrapper.")
    return (n, x, nm, si, di,)


cpdef api object pbwa(fwr_dbl_t a, fwr_dbl_t x, fwr_dbl_t w1f, fwr_dbl_t w1d, fwr_dbl_t w2f, fwr_dbl_t w2d):
    """
    pbwa(a, x, w1f, w1d, w2f, w2d) -> (a, x, w1f, w1d, w2f, w2d)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    w1f : fwr_dbl, intent inout
    w1d : fwr_dbl, intent inout
    w2f : fwr_dbl, intent inout
    w2d : fwr_dbl, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    w1f : fwr_dbl, intent inout
    w1d : fwr_dbl, intent inout
    w2f : fwr_dbl, intent inout
    w2d : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pbwa_c(&a, &x, &w1f, &w1d, &w2f, &w2d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'pbwa' wrapper.")
    return (a, x, w1f, w1d, w2f, w2d,)


cpdef api object rmn1(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, object df, fwi_integer_t kd, fwr_dbl_t r1f, fwr_dbl_t r1d):
    """
    rmn1(m, n, c, x, df, kd, r1f, r1d) -> (m, n, c, x, df, kd, r1f, r1d)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    kd : fwi_integer, intent inout
    r1f : fwr_dbl, intent inout
    r1d : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    kd : fwi_integer, intent inout
    r1f : fwr_dbl, intent inout
    r1d : fwr_dbl, intent inout

    """
    cdef np.ndarray df_
    cdef fw_shape_t df_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    df_, df = fw_asfortranarray(df, fwr_dbl_t_enum, 1, False)
    fw_copyshape(df_shape_, np.PyArray_DIMS(df_), 1)
    rmn1_c(&m, &n, &c, &x, df_shape_, <fwr_dbl_t*>np.PyArray_DATA(df_), &kd, &r1f, &r1d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rmn1' wrapper.")
    return (m, n, c, x, df, kd, r1f, r1d,)


cpdef api object dvsa(fwr_dbl_t va, fwr_dbl_t x, fwr_dbl_t pd):
    """
    dvsa(va, x, pd) -> (va, x, pd)

    Parameters
    ----------
    va : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    pd : fwr_dbl, intent inout

    Returns
    -------
    va : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    pd : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    dvsa_c(&va, &x, &pd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'dvsa' wrapper.")
    return (va, x, pd,)


cpdef api object e1z(fwc_complex_x16_t z, fwc_complex_x16_t ce1):
    """
    e1z(z, ce1) -> (z, ce1)

    Parameters
    ----------
    z : fwc_complex_x16, intent inout
    ce1 : fwc_complex_x16, intent inout

    Returns
    -------
    z : fwc_complex_x16, intent inout
    ce1 : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    e1z_c(&z, &ce1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'e1z' wrapper.")
    return (z, ce1,)


cpdef api object itjyb(fwr_dbl_t x, fwr_dbl_t tj, fwr_dbl_t ty):
    """
    itjyb(x, tj, ty) -> (x, tj, ty)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    tj : fwr_dbl, intent inout
    ty : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    tj : fwr_dbl, intent inout
    ty : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    itjyb_c(&x, &tj, &ty, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'itjyb' wrapper.")
    return (x, tj, ty,)


cpdef api object chgul(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x, fwr_dbl_t hu, fwi_integer_t id):
    """
    chgul(a, b, x, hu, id) -> (a, b, x, hu, id)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    chgul_c(&a, &b, &x, &hu, &id, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'chgul' wrapper.")
    return (a, b, x, hu, id,)


cpdef api object gmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, object bk, fwr_dbl_t gf, fwr_dbl_t gd):
    """
    gmn(m, n, c, x, bk, gf, gd) -> (m, n, c, x, bk, gf, gd)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    bk : fwr_dbl, 1D array, dimension(200), intent inout
    gf : fwr_dbl, intent inout
    gd : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    bk : fwr_dbl, 1D array, dimension(200), intent inout
    gf : fwr_dbl, intent inout
    gd : fwr_dbl, intent inout

    """
    cdef np.ndarray bk_
    cdef fw_shape_t bk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bk_, bk = fw_asfortranarray(bk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bk_shape_, np.PyArray_DIMS(bk_), 1)
    gmn_c(&m, &n, &c, &x, bk_shape_, <fwr_dbl_t*>np.PyArray_DATA(bk_), &gf, &gd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gmn' wrapper.")
    return (m, n, c, x, bk, gf, gd,)


cpdef api object itjya(fwr_dbl_t x, fwr_dbl_t tj, fwr_dbl_t ty):
    """
    itjya(x, tj, ty) -> (x, tj, ty)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    tj : fwr_dbl, intent inout
    ty : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    tj : fwr_dbl, intent inout
    ty : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    itjya_c(&x, &tj, &ty, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'itjya' wrapper.")
    return (x, tj, ty,)


cpdef api object stvlv(fwr_dbl_t v, fwr_dbl_t x, fwr_dbl_t slv):
    """
    stvlv(v, x, slv) -> (v, x, slv)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    slv : fwr_dbl, intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    slv : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    stvlv_c(&v, &x, &slv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'stvlv' wrapper.")
    return (v, x, slv,)


cpdef api object rcty(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object ry, object dy):
    """
    rcty(n, x, nm, ry, dy) -> (n, x, nm, ry, dy)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    ry : fwr_dbl, 1D array, dimension(0:n), intent inout
    dy : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    ry : fwr_dbl, 1D array, dimension(0:n), intent inout
    dy : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray ry_
    cdef fw_shape_t ry_shape_[1]
    cdef np.ndarray dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ry_, ry = fw_asfortranarray(ry, fwr_dbl_t_enum, 1, False)
    fw_copyshape(ry_shape_, np.PyArray_DIMS(ry_), 1)
    dy_, dy = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    rcty_c(&n, &x, &nm, ry_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry_), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rcty' wrapper.")
    return (n, x, nm, ry, dy,)


cpdef api object lpni(fwi_integer_t n, fwr_dbl_t x, object pn, object pd, object pl):
    """
    lpni(n, x, pn, pd, pl) -> (n, x, pn, pd, pl)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pn : fwr_dbl, 1D array, dimension(0:n), intent inout
    pd : fwr_dbl, 1D array, dimension(0:n), intent inout
    pl : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pn : fwr_dbl, 1D array, dimension(0:n), intent inout
    pd : fwr_dbl, 1D array, dimension(0:n), intent inout
    pl : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray pn_
    cdef fw_shape_t pn_shape_[1]
    cdef np.ndarray pd_
    cdef fw_shape_t pd_shape_[1]
    cdef np.ndarray pl_
    cdef fw_shape_t pl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pn_, pn = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, False)
    fw_copyshape(pn_shape_, np.PyArray_DIMS(pn_), 1)
    pd_, pd = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, False)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    pl_, pl = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(pl_shape_, np.PyArray_DIMS(pl_), 1)
    lpni_c(&n, &x, pn_shape_, <fwr_dbl_t*>np.PyArray_DATA(pn_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), pl_shape_, <fwr_dbl_t*>np.PyArray_DATA(pl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpni' wrapper.")
    return (n, x, pn, pd, pl,)


cpdef api object klvna(fwr_dbl_t x, fwr_dbl_t ber, fwr_dbl_t bei, fwr_dbl_t ger, fwr_dbl_t gei, fwr_dbl_t der, fwr_dbl_t dei, fwr_dbl_t her, fwr_dbl_t hei):
    """
    klvna(x, ber, bei, ger, gei, der, dei, her, hei) -> (x, ber, bei, ger, gei, der, dei, her, hei)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ber : fwr_dbl, intent inout
    bei : fwr_dbl, intent inout
    ger : fwr_dbl, intent inout
    gei : fwr_dbl, intent inout
    der : fwr_dbl, intent inout
    dei : fwr_dbl, intent inout
    her : fwr_dbl, intent inout
    hei : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ber : fwr_dbl, intent inout
    bei : fwr_dbl, intent inout
    ger : fwr_dbl, intent inout
    gei : fwr_dbl, intent inout
    der : fwr_dbl, intent inout
    dei : fwr_dbl, intent inout
    her : fwr_dbl, intent inout
    hei : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    klvna_c(&x, &ber, &bei, &ger, &gei, &der, &dei, &her, &hei, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'klvna' wrapper.")
    return (x, ber, bei, ger, gei, der, dei, her, hei,)


cpdef api object chgubi(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x, fwr_dbl_t hu, fwi_integer_t id):
    """
    chgubi(a, b, x, hu, id) -> (a, b, x, hu, id)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hu : fwr_dbl, intent inout
    id : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    chgubi_c(&a, &b, &x, &hu, &id, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'chgubi' wrapper.")
    return (a, b, x, hu, id,)


cpdef api object cyzo(fwi_integer_t nt, fwi_integer_t kf, fwi_integer_t kc, object zo, object zv):
    """
    cyzo(nt, kf, kc, zo, zv) -> (nt, kf, kc, zo, zv)

    Parameters
    ----------
    nt : fwi_integer, intent inout
    kf : fwi_integer, intent inout
    kc : fwi_integer, intent inout
    zo : fwc_complex_x16, 1D array, dimension(nt), intent inout
    zv : fwc_complex_x16, 1D array, dimension(nt), intent inout

    Returns
    -------
    nt : fwi_integer, intent inout
    kf : fwi_integer, intent inout
    kc : fwi_integer, intent inout
    zo : fwc_complex_x16, 1D array, dimension(nt), intent inout
    zv : fwc_complex_x16, 1D array, dimension(nt), intent inout

    """
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef np.ndarray zv_
    cdef fw_shape_t zv_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_, zo = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    zv_, zv = fw_asfortranarray(zv, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(zv_shape_, np.PyArray_DIMS(zv_), 1)
    cyzo_c(&nt, &kf, &kc, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), zv_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zv_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cyzo' wrapper.")
    return (nt, kf, kc, zo, zv,)


cpdef api object klvnb(fwr_dbl_t x, fwr_dbl_t ber, fwr_dbl_t bei, fwr_dbl_t ger, fwr_dbl_t gei, fwr_dbl_t der, fwr_dbl_t dei, fwr_dbl_t her, fwr_dbl_t hei):
    """
    klvnb(x, ber, bei, ger, gei, der, dei, her, hei) -> (x, ber, bei, ger, gei, der, dei, her, hei)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ber : fwr_dbl, intent inout
    bei : fwr_dbl, intent inout
    ger : fwr_dbl, intent inout
    gei : fwr_dbl, intent inout
    der : fwr_dbl, intent inout
    dei : fwr_dbl, intent inout
    her : fwr_dbl, intent inout
    hei : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ber : fwr_dbl, intent inout
    bei : fwr_dbl, intent inout
    ger : fwr_dbl, intent inout
    gei : fwr_dbl, intent inout
    der : fwr_dbl, intent inout
    dei : fwr_dbl, intent inout
    her : fwr_dbl, intent inout
    hei : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    klvnb_c(&x, &ber, &bei, &ger, &gei, &der, &dei, &her, &hei, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'klvnb' wrapper.")
    return (x, ber, bei, ger, gei, der, dei, her, hei,)


cpdef api object rmn2so(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwr_dbl_t cv, object df, fwi_integer_t kd, fwr_dbl_t r2f, fwr_dbl_t r2d):
    """
    rmn2so(m, n, c, x, cv, df, kd, r2f, r2d) -> (m, n, c, x, cv, df, kd, r2f, r2d)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    kd : fwi_integer, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout
    kd : fwi_integer, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout

    """
    cdef np.ndarray df_
    cdef fw_shape_t df_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    df_, df = fw_asfortranarray(df, fwr_dbl_t_enum, 1, False)
    fw_copyshape(df_shape_, np.PyArray_DIMS(df_), 1)
    rmn2so_c(&m, &n, &c, &x, &cv, df_shape_, <fwr_dbl_t*>np.PyArray_DATA(df_), &kd, &r2f, &r2d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rmn2so' wrapper.")
    return (m, n, c, x, cv, df, kd, r2f, r2d,)


cpdef api object csphik(fwi_integer_t n, fwc_complex_x16_t z, fwi_integer_t nm, object csi, object cdi, object csk, object cdk):
    """
    csphik(n, z, nm, csi, cdi, csk, cdk) -> (n, z, nm, csi, cdi, csk, cdk)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    csi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    csk : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    csi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    csk : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:n), intent inout

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
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    csi_, csi = fw_asfortranarray(csi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(csi_shape_, np.PyArray_DIMS(csi_), 1)
    cdi_, cdi = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdi_shape_, np.PyArray_DIMS(cdi_), 1)
    csk_, csk = fw_asfortranarray(csk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(csk_shape_, np.PyArray_DIMS(csk_), 1)
    cdk_, cdk = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdk_shape_, np.PyArray_DIMS(cdk_), 1)
    csphik_c(&n, &z, &nm, csi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csi_), cdi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), csk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csk_), cdk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'csphik' wrapper.")
    return (n, z, nm, csi, cdi, csk, cdk,)


cpdef api object bjndd(fwi_integer_t n, fwr_dbl_t x, object bj, object dj, object fj):
    """
    bjndd(n, x, bj, dj, fj) -> (n, x, bj, dj, fj)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    bj : fwr_dbl, 1D array, dimension(101), intent inout
    dj : fwr_dbl, 1D array, dimension(101), intent inout
    fj : fwr_dbl, 1D array, dimension(101), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    bj : fwr_dbl, 1D array, dimension(101), intent inout
    dj : fwr_dbl, 1D array, dimension(101), intent inout
    fj : fwr_dbl, 1D array, dimension(101), intent inout

    """
    cdef np.ndarray bj_
    cdef fw_shape_t bj_shape_[1]
    cdef np.ndarray dj_
    cdef fw_shape_t dj_shape_[1]
    cdef np.ndarray fj_
    cdef fw_shape_t fj_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bj_, bj = fw_asfortranarray(bj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bj_shape_, np.PyArray_DIMS(bj_), 1)
    dj_, dj = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    fj_, fj = fw_asfortranarray(fj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(fj_shape_, np.PyArray_DIMS(fj_), 1)
    bjndd_c(&n, &x, bj_shape_, <fwr_dbl_t*>np.PyArray_DATA(bj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), fj_shape_, <fwr_dbl_t*>np.PyArray_DATA(fj_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bjndd' wrapper.")
    return (n, x, bj, dj, fj,)


cpdef api object sphj(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object sj, object dj):
    """
    sphj(n, x, nm, sj, dj) -> (n, x, nm, sj, dj)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    sj : fwr_dbl, 1D array, dimension(0:n), intent inout
    dj : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    sj : fwr_dbl, 1D array, dimension(0:n), intent inout
    dj : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray sj_
    cdef fw_shape_t sj_shape_[1]
    cdef np.ndarray dj_
    cdef fw_shape_t dj_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sj_, sj = fw_asfortranarray(sj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(sj_shape_, np.PyArray_DIMS(sj_), 1)
    dj_, dj = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    sphj_c(&n, &x, &nm, sj_shape_, <fwr_dbl_t*>np.PyArray_DATA(sj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphj' wrapper.")
    return (n, x, nm, sj, dj,)


cpdef api object othpl(fwi_integer_t kf, fwi_integer_t n, fwr_dbl_t x, object pl, object dpl):
    """
    othpl(kf, n, x, pl, dpl) -> (kf, n, x, pl, dpl)

    Parameters
    ----------
    kf : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pl : fwr_dbl, 1D array, dimension(0:n), intent inout
    dpl : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    kf : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    pl : fwr_dbl, 1D array, dimension(0:n), intent inout
    dpl : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray pl_
    cdef fw_shape_t pl_shape_[1]
    cdef np.ndarray dpl_
    cdef fw_shape_t dpl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pl_, pl = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(pl_shape_, np.PyArray_DIMS(pl_), 1)
    dpl_, dpl = fw_asfortranarray(dpl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dpl_shape_, np.PyArray_DIMS(dpl_), 1)
    othpl_c(&kf, &n, &x, pl_shape_, <fwr_dbl_t*>np.PyArray_DATA(pl_), dpl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dpl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'othpl' wrapper.")
    return (kf, n, x, pl, dpl,)


cpdef api object klvnzo(fwi_integer_t nt, fwi_integer_t kd, object zo):
    """
    klvnzo(nt, kd, zo) -> (nt, kd, zo)

    Parameters
    ----------
    nt : fwi_integer, intent inout
    kd : fwi_integer, intent inout
    zo : fwr_dbl, 1D array, dimension(nt), intent inout

    Returns
    -------
    nt : fwi_integer, intent inout
    kd : fwi_integer, intent inout
    zo : fwr_dbl, 1D array, dimension(nt), intent inout

    """
    cdef np.ndarray zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_, zo = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, False)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    klvnzo_c(&nt, &kd, zo_shape_, <fwr_dbl_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'klvnzo' wrapper.")
    return (nt, kd, zo,)


cpdef api object rswfo(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwr_dbl_t cv, fwi_integer_t kf, fwr_dbl_t r1f, fwr_dbl_t r1d, fwr_dbl_t r2f, fwr_dbl_t r2d):
    """
    rswfo(m, n, c, x, cv, kf, r1f, r1d, r2f, r2d) -> (m, n, c, x, cv, kf, r1f, r1d, r2f, r2d)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kf : fwi_integer, intent inout
    r1f : fwr_dbl, intent inout
    r1d : fwr_dbl, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kf : fwi_integer, intent inout
    r1f : fwr_dbl, intent inout
    r1d : fwr_dbl, intent inout
    r2f : fwr_dbl, intent inout
    r2d : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    rswfo_c(&m, &n, &c, &x, &cv, &kf, &r1f, &r1d, &r2f, &r2d, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rswfo' wrapper.")
    return (m, n, c, x, cv, kf, r1f, r1d, r2f, r2d,)


cpdef api object ch12n(fwi_integer_t n, fwc_complex_x16_t z, fwi_integer_t nm, object chf1, object chd1, object chf2, object chd2):
    """
    ch12n(n, z, nm, chf1, chd1, chf2, chd2) -> (n, z, nm, chf1, chd1, chf2, chd2)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    chf1 : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    chd1 : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    chf2 : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    chd2 : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    chf1 : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    chd1 : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    chf2 : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    chd2 : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray chf1_
    cdef fw_shape_t chf1_shape_[1]
    cdef np.ndarray chd1_
    cdef fw_shape_t chd1_shape_[1]
    cdef np.ndarray chf2_
    cdef fw_shape_t chf2_shape_[1]
    cdef np.ndarray chd2_
    cdef fw_shape_t chd2_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    chf1_, chf1 = fw_asfortranarray(chf1, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(chf1_shape_, np.PyArray_DIMS(chf1_), 1)
    chd1_, chd1 = fw_asfortranarray(chd1, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(chd1_shape_, np.PyArray_DIMS(chd1_), 1)
    chf2_, chf2 = fw_asfortranarray(chf2, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(chf2_shape_, np.PyArray_DIMS(chf2_), 1)
    chd2_, chd2 = fw_asfortranarray(chd2, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(chd2_shape_, np.PyArray_DIMS(chd2_), 1)
    ch12n_c(&n, &z, &nm, chf1_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(chf1_), chd1_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(chd1_), chf2_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(chf2_), chd2_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(chd2_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ch12n' wrapper.")
    return (n, z, nm, chf1, chd1, chf2, chd2,)


cpdef api object jyzo(fwi_integer_t n, fwi_integer_t nt, object rj0, object rj1, object ry0, object ry1):
    """
    jyzo(n, nt, rj0, rj1, ry0, ry1) -> (n, nt, rj0, rj1, ry0, ry1)

    Parameters
    ----------
    n : fwi_integer, intent inout
    nt : fwi_integer, intent inout
    rj0 : fwr_dbl, 1D array, dimension(nt), intent inout
    rj1 : fwr_dbl, 1D array, dimension(nt), intent inout
    ry0 : fwr_dbl, 1D array, dimension(nt), intent inout
    ry1 : fwr_dbl, 1D array, dimension(nt), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    nt : fwi_integer, intent inout
    rj0 : fwr_dbl, 1D array, dimension(nt), intent inout
    rj1 : fwr_dbl, 1D array, dimension(nt), intent inout
    ry0 : fwr_dbl, 1D array, dimension(nt), intent inout
    ry1 : fwr_dbl, 1D array, dimension(nt), intent inout

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
    rj0_, rj0 = fw_asfortranarray(rj0, fwr_dbl_t_enum, 1, False)
    fw_copyshape(rj0_shape_, np.PyArray_DIMS(rj0_), 1)
    rj1_, rj1 = fw_asfortranarray(rj1, fwr_dbl_t_enum, 1, False)
    fw_copyshape(rj1_shape_, np.PyArray_DIMS(rj1_), 1)
    ry0_, ry0 = fw_asfortranarray(ry0, fwr_dbl_t_enum, 1, False)
    fw_copyshape(ry0_shape_, np.PyArray_DIMS(ry0_), 1)
    ry1_, ry1 = fw_asfortranarray(ry1, fwr_dbl_t_enum, 1, False)
    fw_copyshape(ry1_shape_, np.PyArray_DIMS(ry1_), 1)
    jyzo_c(&n, &nt, rj0_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj0_), rj1_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj1_), ry0_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry0_), ry1_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry1_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jyzo' wrapper.")
    return (n, nt, rj0, rj1, ry0, ry1,)


cpdef api object ikv(fwr_dbl_t v, fwr_dbl_t x, fwr_dbl_t vm, object bi, object di, object bk, object dk):
    """
    ikv(v, x, vm, bi, di, bk, dk) -> (v, x, vm, bi, di, bk, dk)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    vm : fwr_dbl, intent inout
    bi : fwr_dbl, 1D array, dimension(0:*), intent inout
    di : fwr_dbl, 1D array, dimension(0:*), intent inout
    bk : fwr_dbl, 1D array, dimension(0:*), intent inout
    dk : fwr_dbl, 1D array, dimension(0:*), intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    vm : fwr_dbl, intent inout
    bi : fwr_dbl, 1D array, dimension(0:*), intent inout
    di : fwr_dbl, 1D array, dimension(0:*), intent inout
    bk : fwr_dbl, 1D array, dimension(0:*), intent inout
    dk : fwr_dbl, 1D array, dimension(0:*), intent inout

    """
    cdef np.ndarray bi_
    cdef fw_shape_t bi_shape_[1]
    cdef np.ndarray di_
    cdef fw_shape_t di_shape_[1]
    cdef np.ndarray bk_
    cdef fw_shape_t bk_shape_[1]
    cdef np.ndarray dk_
    cdef fw_shape_t dk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bi_, bi = fw_asfortranarray(bi, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bi_shape_, np.PyArray_DIMS(bi_), 1)
    di_, di = fw_asfortranarray(di, fwr_dbl_t_enum, 1, False)
    fw_copyshape(di_shape_, np.PyArray_DIMS(di_), 1)
    bk_, bk = fw_asfortranarray(bk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(bk_shape_, np.PyArray_DIMS(bk_), 1)
    dk_, dk = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dk_shape_, np.PyArray_DIMS(dk_), 1)
    ikv_c(&v, &x, &vm, bi_shape_, <fwr_dbl_t*>np.PyArray_DATA(bi_), di_shape_, <fwr_dbl_t*>np.PyArray_DATA(di_), bk_shape_, <fwr_dbl_t*>np.PyArray_DATA(bk_), dk_shape_, <fwr_dbl_t*>np.PyArray_DATA(dk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ikv' wrapper.")
    return (v, x, vm, bi, di, bk, dk,)


cpdef api object sdmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t cv, fwi_integer_t kd, object df):
    """
    sdmn(m, n, c, cv, kd, df) -> (m, n, c, cv, kd, df)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    cv : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    df : fwr_dbl, 1D array, dimension(200), intent inout

    """
    cdef np.ndarray df_
    cdef fw_shape_t df_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    df_, df = fw_asfortranarray(df, fwr_dbl_t_enum, 1, False)
    fw_copyshape(df_shape_, np.PyArray_DIMS(df_), 1)
    sdmn_c(&m, &n, &c, &cv, &kd, df_shape_, <fwr_dbl_t*>np.PyArray_DATA(df_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sdmn' wrapper.")
    return (m, n, c, cv, kd, df,)


cpdef api object ajyik(fwr_dbl_t x, fwr_dbl_t vj1, fwr_dbl_t vj2, fwr_dbl_t vy1, fwr_dbl_t vy2, fwr_dbl_t vi1, fwr_dbl_t vi2, fwr_dbl_t vk1, fwr_dbl_t vk2):
    """
    ajyik(x, vj1, vj2, vy1, vy2, vi1, vi2, vk1, vk2) -> (x, vj1, vj2, vy1, vy2, vi1, vi2, vk1, vk2)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    vj1 : fwr_dbl, intent inout
    vj2 : fwr_dbl, intent inout
    vy1 : fwr_dbl, intent inout
    vy2 : fwr_dbl, intent inout
    vi1 : fwr_dbl, intent inout
    vi2 : fwr_dbl, intent inout
    vk1 : fwr_dbl, intent inout
    vk2 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    vj1 : fwr_dbl, intent inout
    vj2 : fwr_dbl, intent inout
    vy1 : fwr_dbl, intent inout
    vy2 : fwr_dbl, intent inout
    vi1 : fwr_dbl, intent inout
    vi2 : fwr_dbl, intent inout
    vk1 : fwr_dbl, intent inout
    vk2 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ajyik_c(&x, &vj1, &vj2, &vy1, &vy2, &vi1, &vi2, &vk1, &vk2, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ajyik' wrapper.")
    return (x, vj1, vj2, vy1, vy2, vi1, vi2, vk1, vk2,)


cpdef api object cikvb(fwr_dbl_t v, fwc_complex_x16_t z, fwr_dbl_t vm, object cbi, object cdi, object cbk, object cdk):
    """
    cikvb(v, z, vm, cbi, cdi, cbk, cdk) -> (v, z, vm, cbi, cdi, cbk, cdk)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    vm : fwr_dbl, intent inout
    cbi : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cbk : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    vm : fwr_dbl, intent inout
    cbi : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cbk : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    """
    cdef np.ndarray cbi_
    cdef fw_shape_t cbi_shape_[1]
    cdef np.ndarray cdi_
    cdef fw_shape_t cdi_shape_[1]
    cdef np.ndarray cbk_
    cdef fw_shape_t cbk_shape_[1]
    cdef np.ndarray cdk_
    cdef fw_shape_t cdk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cbi_, cbi = fw_asfortranarray(cbi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbi_shape_, np.PyArray_DIMS(cbi_), 1)
    cdi_, cdi = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdi_shape_, np.PyArray_DIMS(cdi_), 1)
    cbk_, cbk = fw_asfortranarray(cbk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbk_shape_, np.PyArray_DIMS(cbk_), 1)
    cdk_, cdk = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdk_shape_, np.PyArray_DIMS(cdk_), 1)
    cikvb_c(&v, &z, &vm, cbi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbi_), cdi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), cbk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbk_), cdk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cikvb' wrapper.")
    return (v, z, vm, cbi, cdi, cbk, cdk,)


cpdef api object cikva(fwr_dbl_t v, fwc_complex_x16_t z, fwr_dbl_t vm, object cbi, object cdi, object cbk, object cdk):
    """
    cikva(v, z, vm, cbi, cdi, cbk, cdk) -> (v, z, vm, cbi, cdi, cbk, cdk)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    vm : fwr_dbl, intent inout
    cbi : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cbk : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    z : fwc_complex_x16, intent inout
    vm : fwr_dbl, intent inout
    cbi : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cbk : fwc_complex_x16, 1D array, dimension(0:*), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:*), intent inout

    """
    cdef np.ndarray cbi_
    cdef fw_shape_t cbi_shape_[1]
    cdef np.ndarray cdi_
    cdef fw_shape_t cdi_shape_[1]
    cdef np.ndarray cbk_
    cdef fw_shape_t cbk_shape_[1]
    cdef np.ndarray cdk_
    cdef fw_shape_t cdk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cbi_, cbi = fw_asfortranarray(cbi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbi_shape_, np.PyArray_DIMS(cbi_), 1)
    cdi_, cdi = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdi_shape_, np.PyArray_DIMS(cdi_), 1)
    cbk_, cbk = fw_asfortranarray(cbk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbk_shape_, np.PyArray_DIMS(cbk_), 1)
    cdk_, cdk = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdk_shape_, np.PyArray_DIMS(cdk_), 1)
    cikva_c(&v, &z, &vm, cbi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbi_), cdi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), cbk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbk_), cdk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cikva' wrapper.")
    return (v, z, vm, cbi, cdi, cbk, cdk,)


cpdef api object cfc(fwc_complex_x16_t z, fwc_complex_x16_t zf, fwc_complex_x16_t zd):
    """
    cfc(z, zf, zd) -> (z, zf, zd)

    Parameters
    ----------
    z : fwc_complex_x16, intent inout
    zf : fwc_complex_x16, intent inout
    zd : fwc_complex_x16, intent inout

    Returns
    -------
    z : fwc_complex_x16, intent inout
    zf : fwc_complex_x16, intent inout
    zd : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cfc_c(&z, &zf, &zd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cfc' wrapper.")
    return (z, zf, zd,)


cpdef api object fcs(fwr_dbl_t x, fwr_dbl_t c, fwr_dbl_t s):
    """
    fcs(x, c, s) -> (x, c, s)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    c : fwr_dbl, intent inout
    s : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    c : fwr_dbl, intent inout
    s : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fcs_c(&x, &c, &s, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'fcs' wrapper.")
    return (x, c, s,)


cpdef api object rctj(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object rj, object dj):
    """
    rctj(n, x, nm, rj, dj) -> (n, x, nm, rj, dj)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    rj : fwr_dbl, 1D array, dimension(0:n), intent inout
    dj : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    rj : fwr_dbl, 1D array, dimension(0:n), intent inout
    dj : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray rj_
    cdef fw_shape_t rj_shape_[1]
    cdef np.ndarray dj_
    cdef fw_shape_t dj_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    rj_, rj = fw_asfortranarray(rj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(rj_shape_, np.PyArray_DIMS(rj_), 1)
    dj_, dj = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    rctj_c(&n, &x, &nm, rj_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rctj' wrapper.")
    return (n, x, nm, rj, dj,)


cpdef api object herzo(fwi_integer_t n, object x, object w):
    """
    herzo(n, x, w) -> (n, x, w)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    w : fwr_dbl, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_, w = fw_asfortranarray(w, fwr_dbl_t_enum, 1, False)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    herzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'herzo' wrapper.")
    return (n, x, w,)


cpdef api object jy01b(fwr_dbl_t x, fwr_dbl_t bj0, fwr_dbl_t dj0, fwr_dbl_t bj1, fwr_dbl_t dj1, fwr_dbl_t by0, fwr_dbl_t dy0, fwr_dbl_t by1, fwr_dbl_t dy1):
    """
    jy01b(x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1) -> (x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    bj0 : fwr_dbl, intent inout
    dj0 : fwr_dbl, intent inout
    bj1 : fwr_dbl, intent inout
    dj1 : fwr_dbl, intent inout
    by0 : fwr_dbl, intent inout
    dy0 : fwr_dbl, intent inout
    by1 : fwr_dbl, intent inout
    dy1 : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    bj0 : fwr_dbl, intent inout
    dj0 : fwr_dbl, intent inout
    bj1 : fwr_dbl, intent inout
    dj1 : fwr_dbl, intent inout
    by0 : fwr_dbl, intent inout
    dy0 : fwr_dbl, intent inout
    by1 : fwr_dbl, intent inout
    dy1 : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    jy01b_c(&x, &bj0, &dj0, &bj1, &dj1, &by0, &dy0, &by1, &dy1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jy01b' wrapper.")
    return (x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1,)


cpdef api object enxb(fwi_integer_t n, fwr_dbl_t x, object en):
    """
    enxb(n, x, en) -> (n, x, en)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    en : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    en : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray en_
    cdef fw_shape_t en_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    en_, en = fw_asfortranarray(en, fwr_dbl_t_enum, 1, False)
    fw_copyshape(en_shape_, np.PyArray_DIMS(en_), 1)
    enxb_c(&n, &x, en_shape_, <fwr_dbl_t*>np.PyArray_DATA(en_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'enxb' wrapper.")
    return (n, x, en,)


cpdef api object sphk(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object sk, object dk):
    """
    sphk(n, x, nm, sk, dk) -> (n, x, nm, sk, dk)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    sk : fwr_dbl, 1D array, dimension(0:n), intent inout
    dk : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    sk : fwr_dbl, 1D array, dimension(0:n), intent inout
    dk : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray sk_
    cdef fw_shape_t sk_shape_[1]
    cdef np.ndarray dk_
    cdef fw_shape_t dk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sk_, sk = fw_asfortranarray(sk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(sk_shape_, np.PyArray_DIMS(sk_), 1)
    dk_, dk = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dk_shape_, np.PyArray_DIMS(dk_), 1)
    sphk_c(&n, &x, &nm, sk_shape_, <fwr_dbl_t*>np.PyArray_DATA(sk_), dk_shape_, <fwr_dbl_t*>np.PyArray_DATA(dk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphk' wrapper.")
    return (n, x, nm, sk, dk,)


cpdef api object enxa(fwi_integer_t n, fwr_dbl_t x, object en):
    """
    enxa(n, x, en) -> (n, x, en)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    en : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    en : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray en_
    cdef fw_shape_t en_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    en_, en = fw_asfortranarray(en, fwr_dbl_t_enum, 1, False)
    fw_copyshape(en_shape_, np.PyArray_DIMS(en_), 1)
    enxa_c(&n, &x, en_shape_, <fwr_dbl_t*>np.PyArray_DATA(en_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'enxa' wrapper.")
    return (n, x, en,)


cpdef api object gaih(fwr_dbl_t x, fwr_dbl_t ga):
    """
    gaih(x, ga) -> (x, ga)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    ga : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    ga : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    gaih_c(&x, &ga, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gaih' wrapper.")
    return (x, ga,)


cpdef api object pbvv(fwr_dbl_t v, fwr_dbl_t x, object vv, object vp, fwr_dbl_t pvf, fwr_dbl_t pvd):
    """
    pbvv(v, x, vv, vp, pvf, pvd) -> (v, x, vv, vp, pvf, pvd)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    vv : fwr_dbl, 1D array, dimension(0:*), intent inout
    vp : fwr_dbl, 1D array, dimension(0:*), intent inout
    pvf : fwr_dbl, intent inout
    pvd : fwr_dbl, intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    vv : fwr_dbl, 1D array, dimension(0:*), intent inout
    vp : fwr_dbl, 1D array, dimension(0:*), intent inout
    pvf : fwr_dbl, intent inout
    pvd : fwr_dbl, intent inout

    """
    cdef np.ndarray vv_
    cdef fw_shape_t vv_shape_[1]
    cdef np.ndarray vp_
    cdef fw_shape_t vp_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vv_, vv = fw_asfortranarray(vv, fwr_dbl_t_enum, 1, False)
    fw_copyshape(vv_shape_, np.PyArray_DIMS(vv_), 1)
    vp_, vp = fw_asfortranarray(vp, fwr_dbl_t_enum, 1, False)
    fw_copyshape(vp_shape_, np.PyArray_DIMS(vp_), 1)
    pbvv_c(&v, &x, vv_shape_, <fwr_dbl_t*>np.PyArray_DATA(vv_), vp_shape_, <fwr_dbl_t*>np.PyArray_DATA(vp_), &pvf, &pvd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'pbvv' wrapper.")
    return (v, x, vv, vp, pvf, pvd,)


cpdef api object clqmn(fwi_integer_t mm, fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, fwr_dbl_t y, object cqm, object cqd):
    """
    clqmn(mm, m, n, x, y, cqm, cqd) -> (mm, m, n, x, y, cqm, cqd)

    Parameters
    ----------
    mm : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    cqm : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent inout
    cqd : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent inout

    Returns
    -------
    mm : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    cqm : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent inout
    cqd : fwc_complex_x16, 2D array, dimension(0:mm, 0:n), intent inout

    """
    cdef np.ndarray cqm_
    cdef fw_shape_t cqm_shape_[2]
    cdef np.ndarray cqd_
    cdef fw_shape_t cqd_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cqm_, cqm = fw_asfortranarray(cqm, fwc_complex_x16_t_enum, 2, False)
    fw_copyshape(cqm_shape_, np.PyArray_DIMS(cqm_), 2)
    cqd_, cqd = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 2, False)
    fw_copyshape(cqd_shape_, np.PyArray_DIMS(cqd_), 2)
    clqmn_c(&mm, &m, &n, &x, &y, cqm_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqm_), cqd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clqmn' wrapper.")
    return (mm, m, n, x, y, cqm, cqd,)


cpdef api object segv(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwi_integer_t kd, fwr_dbl_t cv, object eg):
    """
    segv(m, n, c, kd, cv, eg) -> (m, n, c, kd, cv, eg)

    Parameters
    ----------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    cv : fwr_dbl, intent inout
    eg : fwr_dbl, 1D array, dimension(200), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    c : fwr_dbl, intent inout
    kd : fwi_integer, intent inout
    cv : fwr_dbl, intent inout
    eg : fwr_dbl, 1D array, dimension(200), intent inout

    """
    cdef np.ndarray eg_
    cdef fw_shape_t eg_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    eg_, eg = fw_asfortranarray(eg, fwr_dbl_t_enum, 1, False)
    fw_copyshape(eg_shape_, np.PyArray_DIMS(eg_), 1)
    segv_c(&m, &n, &c, &kd, &cv, eg_shape_, <fwr_dbl_t*>np.PyArray_DATA(eg_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'segv' wrapper.")
    return (m, n, c, kd, cv, eg,)


cpdef api object ciknb(fwi_integer_t n, fwc_complex_x16_t z, fwi_integer_t nm, object cbi, object cdi, object cbk, object cdk):
    """
    ciknb(n, z, nm, cbi, cdi, cbk, cdk) -> (n, z, nm, cbi, cdi, cbk, cdk)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    cbi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cbk : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    cbi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cbk : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray cbi_
    cdef fw_shape_t cbi_shape_[1]
    cdef np.ndarray cdi_
    cdef fw_shape_t cdi_shape_[1]
    cdef np.ndarray cbk_
    cdef fw_shape_t cbk_shape_[1]
    cdef np.ndarray cdk_
    cdef fw_shape_t cdk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cbi_, cbi = fw_asfortranarray(cbi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbi_shape_, np.PyArray_DIMS(cbi_), 1)
    cdi_, cdi = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdi_shape_, np.PyArray_DIMS(cdi_), 1)
    cbk_, cbk = fw_asfortranarray(cbk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbk_shape_, np.PyArray_DIMS(cbk_), 1)
    cdk_, cdk = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdk_shape_, np.PyArray_DIMS(cdk_), 1)
    ciknb_c(&n, &z, &nm, cbi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbi_), cdi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), cbk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbk_), cdk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'ciknb' wrapper.")
    return (n, z, nm, cbi, cdi, cbk, cdk,)


cpdef api object cikna(fwi_integer_t n, fwc_complex_x16_t z, fwi_integer_t nm, object cbi, object cdi, object cbk, object cdk):
    """
    cikna(n, z, nm, cbi, cdi, cbk, cdk) -> (n, z, nm, cbi, cdi, cbk, cdk)

    Parameters
    ----------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    cbi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cbk : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    z : fwc_complex_x16, intent inout
    nm : fwi_integer, intent inout
    cbi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdi : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cbk : fwc_complex_x16, 1D array, dimension(0:n), intent inout
    cdk : fwc_complex_x16, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray cbi_
    cdef fw_shape_t cbi_shape_[1]
    cdef np.ndarray cdi_
    cdef fw_shape_t cdi_shape_[1]
    cdef np.ndarray cbk_
    cdef fw_shape_t cbk_shape_[1]
    cdef np.ndarray cdk_
    cdef fw_shape_t cdk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cbi_, cbi = fw_asfortranarray(cbi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbi_shape_, np.PyArray_DIMS(cbi_), 1)
    cdi_, cdi = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdi_shape_, np.PyArray_DIMS(cdi_), 1)
    cbk_, cbk = fw_asfortranarray(cbk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cbk_shape_, np.PyArray_DIMS(cbk_), 1)
    cdk_, cdk = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, False)
    fw_copyshape(cdk_shape_, np.PyArray_DIMS(cdk_), 1)
    cikna_c(&n, &z, &nm, cbi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbi_), cdi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), cbk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cbk_), cdk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cikna' wrapper.")
    return (n, z, nm, cbi, cdi, cbk, cdk,)


cpdef api object mtu12(fwi_integer_t kf, fwi_integer_t kc, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t x, fwr_dbl_t f1r, fwr_dbl_t d1r, fwr_dbl_t f2r, fwr_dbl_t d2r):
    """
    mtu12(kf, kc, m, q, x, f1r, d1r, f2r, d2r) -> (kf, kc, m, q, x, f1r, d1r, f2r, d2r)

    Parameters
    ----------
    kf : fwi_integer, intent inout
    kc : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    f1r : fwr_dbl, intent inout
    d1r : fwr_dbl, intent inout
    f2r : fwr_dbl, intent inout
    d2r : fwr_dbl, intent inout

    Returns
    -------
    kf : fwi_integer, intent inout
    kc : fwi_integer, intent inout
    m : fwi_integer, intent inout
    q : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    f1r : fwr_dbl, intent inout
    d1r : fwr_dbl, intent inout
    f2r : fwr_dbl, intent inout
    d2r : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    mtu12_c(&kf, &kc, &m, &q, &x, &f1r, &d1r, &f2r, &d2r, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mtu12' wrapper.")
    return (kf, kc, m, q, x, f1r, d1r, f2r, d2r,)


cpdef api object cik01(fwc_complex_x16_t z, fwc_complex_x16_t cbi0, fwc_complex_x16_t cdi0, fwc_complex_x16_t cbi1, fwc_complex_x16_t cdi1, fwc_complex_x16_t cbk0, fwc_complex_x16_t cdk0, fwc_complex_x16_t cbk1, fwc_complex_x16_t cdk1):
    """
    cik01(z, cbi0, cdi0, cbi1, cdi1, cbk0, cdk0, cbk1, cdk1) -> (z, cbi0, cdi0, cbi1, cdi1, cbk0, cdk0, cbk1, cdk1)

    Parameters
    ----------
    z : fwc_complex_x16, intent inout
    cbi0 : fwc_complex_x16, intent inout
    cdi0 : fwc_complex_x16, intent inout
    cbi1 : fwc_complex_x16, intent inout
    cdi1 : fwc_complex_x16, intent inout
    cbk0 : fwc_complex_x16, intent inout
    cdk0 : fwc_complex_x16, intent inout
    cbk1 : fwc_complex_x16, intent inout
    cdk1 : fwc_complex_x16, intent inout

    Returns
    -------
    z : fwc_complex_x16, intent inout
    cbi0 : fwc_complex_x16, intent inout
    cdi0 : fwc_complex_x16, intent inout
    cbi1 : fwc_complex_x16, intent inout
    cdi1 : fwc_complex_x16, intent inout
    cbk0 : fwc_complex_x16, intent inout
    cdk0 : fwc_complex_x16, intent inout
    cbk1 : fwc_complex_x16, intent inout
    cdk1 : fwc_complex_x16, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cik01_c(&z, &cbi0, &cdi0, &cbi1, &cdi1, &cbk0, &cdk0, &cbk1, &cdk1, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cik01' wrapper.")
    return (z, cbi0, cdi0, cbi1, cdi1, cbk0, cdk0, cbk1, cdk1,)


cpdef api object cpsi(fwr_dbl_t x, fwr_dbl_t y, fwr_dbl_t psr, fwr_dbl_t psi):
    """
    cpsi(x, y, psr, psi) -> (x, y, psr, psi)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    psr : fwr_dbl, intent inout
    psi : fwr_dbl, intent inout

    Returns
    -------
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout
    psr : fwr_dbl, intent inout
    psi : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpsi_c(&x, &y, &psr, &psi, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cpsi' wrapper.")
    return (x, y, psr, psi,)


cpdef api object sphy(fwi_integer_t n, fwr_dbl_t x, fwi_integer_t nm, object sy, object dy):
    """
    sphy(n, x, nm, sy, dy) -> (n, x, nm, sy, dy)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    sy : fwr_dbl, 1D array, dimension(0:n), intent inout
    dy : fwr_dbl, 1D array, dimension(0:n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, intent inout
    nm : fwi_integer, intent inout
    sy : fwr_dbl, 1D array, dimension(0:n), intent inout
    dy : fwr_dbl, 1D array, dimension(0:n), intent inout

    """
    cdef np.ndarray sy_
    cdef fw_shape_t sy_shape_[1]
    cdef np.ndarray dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sy_, sy = fw_asfortranarray(sy, fwr_dbl_t_enum, 1, False)
    fw_copyshape(sy_shape_, np.PyArray_DIMS(sy_), 1)
    dy_, dy = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, False)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    sphy_c(&n, &x, &nm, sy_shape_, <fwr_dbl_t*>np.PyArray_DATA(sy_), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphy' wrapper.")
    return (n, x, nm, sy, dy,)


cpdef api object jelp(fwr_dbl_t u, fwr_dbl_t hk, fwr_dbl_t esn, fwr_dbl_t ecn, fwr_dbl_t edn, fwr_dbl_t eph):
    """
    jelp(u, hk, esn, ecn, edn, eph) -> (u, hk, esn, ecn, edn, eph)

    Parameters
    ----------
    u : fwr_dbl, intent inout
    hk : fwr_dbl, intent inout
    esn : fwr_dbl, intent inout
    ecn : fwr_dbl, intent inout
    edn : fwr_dbl, intent inout
    eph : fwr_dbl, intent inout

    Returns
    -------
    u : fwr_dbl, intent inout
    hk : fwr_dbl, intent inout
    esn : fwr_dbl, intent inout
    ecn : fwr_dbl, intent inout
    edn : fwr_dbl, intent inout
    eph : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    jelp_c(&u, &hk, &esn, &ecn, &edn, &eph, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jelp' wrapper.")
    return (u, hk, esn, ecn, edn, eph,)


cpdef api object stvhv(fwr_dbl_t v, fwr_dbl_t x, fwr_dbl_t hv):
    """
    stvhv(v, x, hv) -> (v, x, hv)

    Parameters
    ----------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hv : fwr_dbl, intent inout

    Returns
    -------
    v : fwr_dbl, intent inout
    x : fwr_dbl, intent inout
    hv : fwr_dbl, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    stvhv_c(&v, &x, &hv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'stvhv' wrapper.")
    return (v, x, hv,)



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

# Fwrap configuration:
# Fwrap: version 0.2.0dev_2a63538
# Fwrap: self-sha1 e41b25911678fac96c9e19d0dc497c5380a3fdf7
# Fwrap: wraps specfun/specfun.f
# Fwrap:     sha1 975d5e3c152da9ce29774e9c581efe5511a6dba5
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary specfun.pxd
# Fwrap: auxiliary specfun_fc.f
# Fwrap: auxiliary specfun_fc.h
# Fwrap: auxiliary specfun_fc.pxd

