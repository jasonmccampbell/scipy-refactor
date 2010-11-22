#cython: ccomplex=True

# Fwrap configuration:
# Fwrap: version 0.2.0dev_37a14f7
# Fwrap: vcs git
# Fwrap:     head e0e1bb52f70af762280036653fb4229446d7753d
# Fwrap: wraps specfun/specfun.f
# Fwrap:     sha1 f9d6976b6f8026600b0d4586fa15ad628b2fc87c
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
# Fwrap: auxiliary specfun.pxd
# Fwrap: auxiliary specfun_fc.f
# Fwrap: auxiliary specfun_fc.h
# Fwrap: auxiliary specfun_fc.pxd

"""
The specfun module was generated with Fwrap v0.2.0dev_37a14f7.

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
    cdef np.ndarray[fwr_dbl_t, ndim=2, mode='fortran'] qm_
    cdef fw_shape_t qm_shape_[2]
    cdef np.ndarray[fwr_dbl_t, ndim=2, mode='fortran'] qd_
    cdef fw_shape_t qd_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qm_ = np.PyArray_FROMANY(qm, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
    fw_copyshape(qm_shape_, np.PyArray_DIMS(qm_), 2)
    qd_ = np.PyArray_FROMANY(qd, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 2)
    lqmn_c(&mm, &m, &n, &x, qm_shape_, <fwr_dbl_t*>np.PyArray_DATA(qm_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqmn' wrapper.")
    return (mm, m, n, x, qm_, qd_,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=2, mode='fortran'] cpm_
    cdef fw_shape_t cpm_shape_[2]
    cdef np.ndarray[fwc_complex_x16_t, ndim=2, mode='fortran'] cpd_
    cdef fw_shape_t cpd_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpm_ = np.PyArray_FROMANY(cpm, fwc_complex_x16_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cpm_shape_, np.PyArray_DIMS(cpm_), 2)
    cpd_ = np.PyArray_FROMANY(cpd, fwc_complex_x16_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 2)
    clpmn_c(&mm, &m, &n, &x, &y, cpm_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpm_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clpmn' wrapper.")
    return (mm, m, n, x, y, cpm_, cpd_,)
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
    cdef np.ndarray[fwi_integer_t, ndim=1, mode='fortran'] n_
    cdef fw_shape_t n_shape_[1]
    cdef np.ndarray[fwi_integer_t, ndim=1, mode='fortran'] m_
    cdef fw_shape_t m_shape_[1]
    cdef np.ndarray[fwi_integer_t, ndim=1, mode='fortran'] p_
    cdef fw_shape_t p_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    n_ = np.PyArray_FROMANY(n, fwi_integer_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(n_shape_, np.PyArray_DIMS(n_), 1)
    m_ = np.PyArray_FROMANY(m, fwi_integer_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(m_shape_, np.PyArray_DIMS(m_), 1)
    p_ = np.PyArray_FROMANY(p, fwi_integer_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(p_shape_, np.PyArray_DIMS(p_), 1)
    zo_ = np.PyArray_FROMANY(zo, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    jdzo_c(&nt, n_shape_, <fwi_integer_t*>np.PyArray_DATA(n_), m_shape_, <fwi_integer_t*>np.PyArray_DATA(m_), p_shape_, <fwi_integer_t*>np.PyArray_DATA(p_), zo_shape_, <fwr_dbl_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jdzo' wrapper.")
    return (nt, n_, m_, p_, zo_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] bn_
    cdef fw_shape_t bn_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bn_ = np.PyArray_FROMANY(bn, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(bn_shape_, np.PyArray_DIMS(bn_), 1)
    bernob_c(&n, bn_shape_, <fwr_dbl_t*>np.PyArray_DATA(bn_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bernob' wrapper.")
    return (n, bn_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] bn_
    cdef fw_shape_t bn_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bn_ = np.PyArray_FROMANY(bn, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(bn_shape_, np.PyArray_DIMS(bn_), 1)
    bernoa_c(&n, bn_shape_, <fwr_dbl_t*>np.PyArray_DATA(bn_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'bernoa' wrapper.")
    return (n, bn_,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] csj_
    cdef fw_shape_t csj_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cdj_
    cdef fw_shape_t cdj_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] csy_
    cdef fw_shape_t csy_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cdy_
    cdef fw_shape_t cdy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    csj_ = np.PyArray_FROMANY(csj, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(csj_shape_, np.PyArray_DIMS(csj_), 1)
    cdj_ = np.PyArray_FROMANY(cdj, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cdj_shape_, np.PyArray_DIMS(cdj_), 1)
    csy_ = np.PyArray_FROMANY(csy, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(csy_shape_, np.PyArray_DIMS(csy_), 1)
    cdy_ = np.PyArray_FROMANY(cdy, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cdy_shape_, np.PyArray_DIMS(cdy_), 1)
    csphjy_c(&n, &z, &nm, csj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csj_), cdj_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), csy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csy_), cdy_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'csphjy' wrapper.")
    return (n, z, nm, csj_, cdj_, csy_, cdy_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] pm_
    cdef fw_shape_t pm_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] pd_
    cdef fw_shape_t pd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pm_ = np.PyArray_FROMANY(pm, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pm_shape_, np.PyArray_DIMS(pm_), 1)
    pd_ = np.PyArray_FROMANY(pd, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    lpmns_c(&m, &n, &x, pm_shape_, <fwr_dbl_t*>np.PyArray_DATA(pm_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpmns' wrapper.")
    return (m, n, x, pm_, pd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] en_
    cdef fw_shape_t en_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    en_ = np.PyArray_FROMANY(en, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(en_shape_, np.PyArray_DIMS(en_), 1)
    eulera_c(&n, en_shape_, <fwr_dbl_t*>np.PyArray_DATA(en_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'eulera' wrapper.")
    return (n, en_,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cqn_
    cdef fw_shape_t cqn_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cqd_
    cdef fw_shape_t cqd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cqn_ = np.PyArray_FROMANY(cqn, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cqn_shape_, np.PyArray_DIMS(cqn_), 1)
    cqd_ = np.PyArray_FROMANY(cqd, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cqd_shape_, np.PyArray_DIMS(cqd_), 1)
    clqn_c(&n, &x, &y, cqn_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqn_), cqd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clqn' wrapper.")
    return (n, x, y, cqn_, cqd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] xa_
    cdef fw_shape_t xa_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] xb_
    cdef fw_shape_t xb_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] xc_
    cdef fw_shape_t xc_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] xd_
    cdef fw_shape_t xd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    xa_ = np.PyArray_FROMANY(xa, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(xa_shape_, np.PyArray_DIMS(xa_), 1)
    xb_ = np.PyArray_FROMANY(xb, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(xb_shape_, np.PyArray_DIMS(xb_), 1)
    xc_ = np.PyArray_FROMANY(xc, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(xc_shape_, np.PyArray_DIMS(xc_), 1)
    xd_ = np.PyArray_FROMANY(xd, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(xd_shape_, np.PyArray_DIMS(xd_), 1)
    airyzo_c(&nt, &kf, xa_shape_, <fwr_dbl_t*>np.PyArray_DATA(xa_), xb_shape_, <fwr_dbl_t*>np.PyArray_DATA(xb_), xc_shape_, <fwr_dbl_t*>np.PyArray_DATA(xc_), xd_shape_, <fwr_dbl_t*>np.PyArray_DATA(xd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'airyzo' wrapper.")
    return (nt, kf, xa_, xb_, xc_, xd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] en_
    cdef fw_shape_t en_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    en_ = np.PyArray_FROMANY(en, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(en_shape_, np.PyArray_DIMS(en_), 1)
    eulerb_c(&n, en_shape_, <fwr_dbl_t*>np.PyArray_DATA(en_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'eulerb' wrapper.")
    return (n, en_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] cv_
    cdef fw_shape_t cv_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cv_ = np.PyArray_FROMANY(cv, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cv_shape_, np.PyArray_DIMS(cv_), 1)
    cva1_c(&kd, &m, &q, cv_shape_, <fwr_dbl_t*>np.PyArray_DATA(cv_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cva1' wrapper.")
    return (kd, m, q, cv_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] qn_
    cdef fw_shape_t qn_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qn_ = np.PyArray_FROMANY(qn, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(qn_shape_, np.PyArray_DIMS(qn_), 1)
    qd_ = np.PyArray_FROMANY(qd, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    lqnb_c(&n, &x, qn_shape_, <fwr_dbl_t*>np.PyArray_DATA(qn_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqnb' wrapper.")
    return (n, x, qn_, qd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] vl_
    cdef fw_shape_t vl_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dl_
    cdef fw_shape_t dl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vl_ = np.PyArray_FROMANY(vl, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(vl_shape_, np.PyArray_DIMS(vl_), 1)
    dl_ = np.PyArray_FROMANY(dl, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dl_shape_, np.PyArray_DIMS(dl_), 1)
    lamv_c(&v, &x, &vm, vl_shape_, <fwr_dbl_t*>np.PyArray_DATA(vl_), dl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lamv' wrapper.")
    return (v, x, vm, vl_, dl_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_ = np.PyArray_FROMANY(x, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_ = np.PyArray_FROMANY(w, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    lagzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lagzo' wrapper.")
    return (n, x_, w_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_ = np.PyArray_FROMANY(x, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_ = np.PyArray_FROMANY(w, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    legzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'legzo' wrapper.")
    return (n, x_, w_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dv_
    cdef fw_shape_t dv_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dp_
    cdef fw_shape_t dp_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    dv_ = np.PyArray_FROMANY(dv, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dv_shape_, np.PyArray_DIMS(dv_), 1)
    dp_ = np.PyArray_FROMANY(dp, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dp_shape_, np.PyArray_DIMS(dp_), 1)
    pbdv_c(&v, &x, dv_shape_, <fwr_dbl_t*>np.PyArray_DATA(dv_), dp_shape_, <fwr_dbl_t*>np.PyArray_DATA(dp_), &pdf, &pdd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'pbdv' wrapper.")
    return (v, x, dv_, dp_, pdf, pdd,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_ = np.PyArray_FROMANY(zo, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    cerzo_c(&nt, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cerzo' wrapper.")
    return (nt, zo_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] bl_
    cdef fw_shape_t bl_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dl_
    cdef fw_shape_t dl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    bl_ = np.PyArray_FROMANY(bl, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(bl_shape_, np.PyArray_DIMS(bl_), 1)
    dl_ = np.PyArray_FROMANY(dl, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dl_shape_, np.PyArray_DIMS(dl_), 1)
    lamn_c(&n, &x, &nm, bl_shape_, <fwr_dbl_t*>np.PyArray_DATA(bl_), dl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lamn' wrapper.")
    return (n, x, nm, bl_, dl_,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cpn_
    cdef fw_shape_t cpn_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cpd_
    cdef fw_shape_t cpd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpn_ = np.PyArray_FROMANY(cpn, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cpn_shape_, np.PyArray_DIMS(cpn_), 1)
    cpd_ = np.PyArray_FROMANY(cpd, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 1)
    clpn_c(&n, &x, &y, cpn_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpn_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clpn' wrapper.")
    return (n, x, y, cpn_, cpd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] qm_
    cdef fw_shape_t qm_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qm_ = np.PyArray_FROMANY(qm, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(qm_shape_, np.PyArray_DIMS(qm_), 1)
    qd_ = np.PyArray_FROMANY(qd, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    lqmns_c(&m, &n, &x, qm_shape_, <fwr_dbl_t*>np.PyArray_DATA(qm_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqmns' wrapper.")
    return (m, n, x, qm_, qd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=2, mode='fortran'] pm_
    cdef fw_shape_t pm_shape_[2]
    cdef np.ndarray[fwr_dbl_t, ndim=2, mode='fortran'] pd_
    cdef fw_shape_t pd_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pm_ = np.PyArray_FROMANY(pm, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pm_shape_, np.PyArray_DIMS(pm_), 2)
    pd_ = np.PyArray_FROMANY(pd, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 2)
    lpmn_c(&mm, &m, &n, &x, pm_shape_, <fwr_dbl_t*>np.PyArray_DATA(pm_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpmn' wrapper.")
    return (mm, m, n, x, pm_, pd_,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_ = np.PyArray_FROMANY(zo, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    fcszo_c(&kf, &nt, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'fcszo' wrapper.")
    return (kf, nt, zo_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] qn_
    cdef fw_shape_t qn_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] qd_
    cdef fw_shape_t qd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    qn_ = np.PyArray_FROMANY(qn, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(qn_shape_, np.PyArray_DIMS(qn_), 1)
    qd_ = np.PyArray_FROMANY(qd, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(qd_shape_, np.PyArray_DIMS(qd_), 1)
    lqna_c(&n, &x, qn_shape_, <fwr_dbl_t*>np.PyArray_DATA(qn_), qd_shape_, <fwr_dbl_t*>np.PyArray_DATA(qd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lqna' wrapper.")
    return (n, x, qn_, qd_,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cpb_
    cdef fw_shape_t cpb_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cpd_
    cdef fw_shape_t cpd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cpb_ = np.PyArray_FROMANY(cpb, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cpb_shape_, np.PyArray_DIMS(cpb_), 1)
    cpd_ = np.PyArray_FROMANY(cpd, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cpd_shape_, np.PyArray_DIMS(cpd_), 1)
    cpbdn_c(&n, &z, cpb_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpb_), cpd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cpd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cpbdn' wrapper.")
    return (n, z, cpb_, cpd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] pn_
    cdef fw_shape_t pn_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] pd_
    cdef fw_shape_t pd_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pn_ = np.PyArray_FROMANY(pn, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pn_shape_, np.PyArray_DIMS(pn_), 1)
    pd_ = np.PyArray_FROMANY(pd, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    lpn_c(&n, &x, pn_shape_, <fwr_dbl_t*>np.PyArray_DATA(pn_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpn' wrapper.")
    return (n, x, pn_, pd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] fc_
    cdef fw_shape_t fc_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fc_ = np.PyArray_FROMANY(fc, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(fc_shape_, np.PyArray_DIMS(fc_), 1)
    fcoef_c(&kd, &m, &q, &a, fc_shape_, <fwr_dbl_t*>np.PyArray_DATA(fc_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'fcoef' wrapper.")
    return (kd, m, q, a, fc_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] si_
    cdef fw_shape_t si_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] di_
    cdef fw_shape_t di_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    si_ = np.PyArray_FROMANY(si, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(si_shape_, np.PyArray_DIMS(si_), 1)
    di_ = np.PyArray_FROMANY(di, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(di_shape_, np.PyArray_DIMS(di_), 1)
    sphi_c(&n, &x, &nm, si_shape_, <fwr_dbl_t*>np.PyArray_DATA(si_), di_shape_, <fwr_dbl_t*>np.PyArray_DATA(di_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphi' wrapper.")
    return (n, x, nm, si_, di_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] ry_
    cdef fw_shape_t ry_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    ry_ = np.PyArray_FROMANY(ry, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(ry_shape_, np.PyArray_DIMS(ry_), 1)
    dy_ = np.PyArray_FROMANY(dy, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    rcty_c(&n, &x, &nm, ry_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry_), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rcty' wrapper.")
    return (n, x, nm, ry_, dy_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] pn_
    cdef fw_shape_t pn_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] pd_
    cdef fw_shape_t pd_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] pl_
    cdef fw_shape_t pl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pn_ = np.PyArray_FROMANY(pn, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pn_shape_, np.PyArray_DIMS(pn_), 1)
    pd_ = np.PyArray_FROMANY(pd, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pd_shape_, np.PyArray_DIMS(pd_), 1)
    pl_ = np.PyArray_FROMANY(pl, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pl_shape_, np.PyArray_DIMS(pl_), 1)
    lpni_c(&n, &x, pn_shape_, <fwr_dbl_t*>np.PyArray_DATA(pn_), pd_shape_, <fwr_dbl_t*>np.PyArray_DATA(pd_), pl_shape_, <fwr_dbl_t*>np.PyArray_DATA(pl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'lpni' wrapper.")
    return (n, x, pn_, pd_, pl_,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] zo_
    cdef fw_shape_t zo_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] zv_
    cdef fw_shape_t zv_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_ = np.PyArray_FROMANY(zo, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    zv_ = np.PyArray_FROMANY(zv, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(zv_shape_, np.PyArray_DIMS(zv_), 1)
    cyzo_c(&nt, &kf, &kc, zo_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), zv_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(zv_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'cyzo' wrapper.")
    return (nt, kf, kc, zo_, zv_,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] csi_
    cdef fw_shape_t csi_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cdi_
    cdef fw_shape_t cdi_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] csk_
    cdef fw_shape_t csk_shape_[1]
    cdef np.ndarray[fwc_complex_x16_t, ndim=1, mode='fortran'] cdk_
    cdef fw_shape_t cdk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    csi_ = np.PyArray_FROMANY(csi, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(csi_shape_, np.PyArray_DIMS(csi_), 1)
    cdi_ = np.PyArray_FROMANY(cdi, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cdi_shape_, np.PyArray_DIMS(cdi_), 1)
    csk_ = np.PyArray_FROMANY(csk, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(csk_shape_, np.PyArray_DIMS(csk_), 1)
    cdk_ = np.PyArray_FROMANY(cdk, fwc_complex_x16_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cdk_shape_, np.PyArray_DIMS(cdk_), 1)
    csphik_c(&n, &z, &nm, csi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csi_), cdi_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), csk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(csk_), cdk_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cdk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'csphik' wrapper.")
    return (n, z, nm, csi_, cdi_, csk_, cdk_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] sj_
    cdef fw_shape_t sj_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dj_
    cdef fw_shape_t dj_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sj_ = np.PyArray_FROMANY(sj, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(sj_shape_, np.PyArray_DIMS(sj_), 1)
    dj_ = np.PyArray_FROMANY(dj, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    sphj_c(&n, &x, &nm, sj_shape_, <fwr_dbl_t*>np.PyArray_DATA(sj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphj' wrapper.")
    return (n, x, nm, sj_, dj_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] pl_
    cdef fw_shape_t pl_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dpl_
    cdef fw_shape_t dpl_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    pl_ = np.PyArray_FROMANY(pl, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(pl_shape_, np.PyArray_DIMS(pl_), 1)
    dpl_ = np.PyArray_FROMANY(dpl, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dpl_shape_, np.PyArray_DIMS(dpl_), 1)
    othpl_c(&kf, &n, &x, pl_shape_, <fwr_dbl_t*>np.PyArray_DATA(pl_), dpl_shape_, <fwr_dbl_t*>np.PyArray_DATA(dpl_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'othpl' wrapper.")
    return (kf, n, x, pl_, dpl_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] zo_
    cdef fw_shape_t zo_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    zo_ = np.PyArray_FROMANY(zo, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(zo_shape_, np.PyArray_DIMS(zo_), 1)
    klvnzo_c(&nt, &kd, zo_shape_, <fwr_dbl_t*>np.PyArray_DATA(zo_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'klvnzo' wrapper.")
    return (nt, kd, zo_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] rj0_
    cdef fw_shape_t rj0_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] rj1_
    cdef fw_shape_t rj1_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] ry0_
    cdef fw_shape_t ry0_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] ry1_
    cdef fw_shape_t ry1_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    rj0_ = np.PyArray_FROMANY(rj0, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(rj0_shape_, np.PyArray_DIMS(rj0_), 1)
    rj1_ = np.PyArray_FROMANY(rj1, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(rj1_shape_, np.PyArray_DIMS(rj1_), 1)
    ry0_ = np.PyArray_FROMANY(ry0, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(ry0_shape_, np.PyArray_DIMS(ry0_), 1)
    ry1_ = np.PyArray_FROMANY(ry1, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(ry1_shape_, np.PyArray_DIMS(ry1_), 1)
    jyzo_c(&n, &nt, rj0_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj0_), rj1_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj1_), ry0_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry0_), ry1_shape_, <fwr_dbl_t*>np.PyArray_DATA(ry1_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'jyzo' wrapper.")
    return (n, nt, rj0_, rj1_, ry0_, ry1_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] rj_
    cdef fw_shape_t rj_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dj_
    cdef fw_shape_t dj_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    rj_ = np.PyArray_FROMANY(rj, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(rj_shape_, np.PyArray_DIMS(rj_), 1)
    dj_ = np.PyArray_FROMANY(dj, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dj_shape_, np.PyArray_DIMS(dj_), 1)
    rctj_c(&n, &x, &nm, rj_shape_, <fwr_dbl_t*>np.PyArray_DATA(rj_), dj_shape_, <fwr_dbl_t*>np.PyArray_DATA(dj_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'rctj' wrapper.")
    return (n, x, nm, rj_, dj_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] w_
    cdef fw_shape_t w_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    x_ = np.PyArray_FROMANY(x, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    w_ = np.PyArray_FROMANY(w, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(w_shape_, np.PyArray_DIMS(w_), 1)
    herzo_c(&n, x_shape_, <fwr_dbl_t*>np.PyArray_DATA(x_), w_shape_, <fwr_dbl_t*>np.PyArray_DATA(w_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'herzo' wrapper.")
    return (n, x_, w_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] sk_
    cdef fw_shape_t sk_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dk_
    cdef fw_shape_t dk_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sk_ = np.PyArray_FROMANY(sk, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(sk_shape_, np.PyArray_DIMS(sk_), 1)
    dk_ = np.PyArray_FROMANY(dk, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dk_shape_, np.PyArray_DIMS(dk_), 1)
    sphk_c(&n, &x, &nm, sk_shape_, <fwr_dbl_t*>np.PyArray_DATA(sk_), dk_shape_, <fwr_dbl_t*>np.PyArray_DATA(dk_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphk' wrapper.")
    return (n, x, nm, sk_, dk_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] vv_
    cdef fw_shape_t vv_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] vp_
    cdef fw_shape_t vp_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    vv_ = np.PyArray_FROMANY(vv, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(vv_shape_, np.PyArray_DIMS(vv_), 1)
    vp_ = np.PyArray_FROMANY(vp, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(vp_shape_, np.PyArray_DIMS(vp_), 1)
    pbvv_c(&v, &x, vv_shape_, <fwr_dbl_t*>np.PyArray_DATA(vv_), vp_shape_, <fwr_dbl_t*>np.PyArray_DATA(vp_), &pvf, &pvd, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'pbvv' wrapper.")
    return (v, x, vv_, vp_, pvf, pvd,)
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
    cdef np.ndarray[fwc_complex_x16_t, ndim=2, mode='fortran'] cqm_
    cdef fw_shape_t cqm_shape_[2]
    cdef np.ndarray[fwc_complex_x16_t, ndim=2, mode='fortran'] cqd_
    cdef fw_shape_t cqd_shape_[2]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    cqm_ = np.PyArray_FROMANY(cqm, fwc_complex_x16_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cqm_shape_, np.PyArray_DIMS(cqm_), 2)
    cqd_ = np.PyArray_FROMANY(cqd, fwc_complex_x16_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
    fw_copyshape(cqd_shape_, np.PyArray_DIMS(cqd_), 2)
    clqmn_c(&mm, &m, &n, &x, &y, cqm_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqm_), cqd_shape_, <fwc_complex_x16_t*>np.PyArray_DATA(cqd_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'clqmn' wrapper.")
    return (mm, m, n, x, y, cqm_, cqd_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] eg_
    cdef fw_shape_t eg_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    eg_ = np.PyArray_FROMANY(eg, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(eg_shape_, np.PyArray_DIMS(eg_), 1)
    segv_c(&m, &n, &c, &kd, &cv, eg_shape_, <fwr_dbl_t*>np.PyArray_DATA(eg_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'segv' wrapper.")
    return (m, n, c, kd, cv, eg_,)
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
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] sy_
    cdef fw_shape_t sy_shape_[1]
    cdef np.ndarray[fwr_dbl_t, ndim=1, mode='fortran'] dy_
    cdef fw_shape_t dy_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    sy_ = np.PyArray_FROMANY(sy, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(sy_shape_, np.PyArray_DIMS(sy_), 1)
    dy_ = np.PyArray_FROMANY(dy, fwr_dbl_t_enum, 1, 1, np.NPY_F_CONTIGUOUS)
    fw_copyshape(dy_shape_, np.PyArray_DIMS(dy_), 1)
    sphy_c(&n, &x, &nm, sy_shape_, <fwr_dbl_t*>np.PyArray_DATA(sy_), dy_shape_, <fwr_dbl_t*>np.PyArray_DATA(dy_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'sphy' wrapper.")
    return (n, x, nm, sy_, dy_,)

cdef void fw_copyshape(fw_shape_t *target, np.intp_t *source, int ndim):
    # In f77binding mode, we do not always have fw_shape_t and np.npy_intp
    # as the same type, so must make a copy
    cdef int i
    for i in range(ndim):
        target[i] = source[i]
