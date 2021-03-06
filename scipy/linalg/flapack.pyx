#cython: ccomplex=True

"""The flapack module was generated with Fwrap v0.2.0dev_00843a8.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
cgees, zgees(...)
cgeev(...)
cgegv(...)
cgelss(...)
cgesdd(...)
cggev(...)
chbevd, zhbevd(...)
chbevx, zhbevx(...)
cheev, zheev(...)
cheevr, zheevr(...)
chegv, zhegv(...)
chegvd, zhegvd(...)
chegvx, zhegvx(...)
cungqr, zungqr(...)
cungrq, zungrq(...)
dgeev(...)
dgegv(...)
dgelss(...)
dgesdd(...)
dggev(...)
sgbsv, dgbsv, cgbsv, zgbsv(...)
sgbtrf, dgbtrf, cgbtrf, zgbtrf(...)
sgbtrs, dgbtrs, cgbtrs, zgbtrs(...)
sgebal, dgebal, cgebal, zgebal(...)
sgees, dgees(...)
sgeev(...)
sgegv(...)
sgehrd, dgehrd, cgehrd, zgehrd(...)
sgelss(...)
sgeqrf, dgeqrf, cgeqrf, zgeqrf(...)
sgerqf, dgerqf, cgerqf, zgerqf(...)
sgesdd(...)
sgesv, dgesv, cgesv, zgesv(...)
sgetrf, dgetrf, cgetrf, zgetrf(...)
sgetri, dgetri, cgetri, zgetri(...)
sgetrs, dgetrs, cgetrs, zgetrs(...)
sggev(...)
slamch, dlamch(...)
slaswp, dlaswp, claswp, zlaswp(...)
slauum, dlauum, clauum, zlauum(...)
sorgqr, dorgqr(...)
sorgrq, dorgrq(...)
spbsv, dpbsv, cpbsv, zpbsv(...)
spbtrf, dpbtrf, cpbtrf, zpbtrf(...)
spbtrs, dpbtrs, cpbtrs, zpbtrs(...)
sposv, dposv, cposv, zposv(...)
spotrf, dpotrf, cpotrf, zpotrf(...)
spotri, dpotri, cpotri, zpotri(...)
spotrs, dpotrs, cpotrs, zpotrs(...)
ssbev, dsbev(...)
ssbevd, dsbevd(...)
ssbevx, dsbevx(...)
ssyev, dsyev(...)
ssyevr, dsyevr(...)
ssygv, dsygv(...)
ssygvd, dsygvd(...)
ssygvx, dsygvx(...)
strtri, dtrtri, ctrtri, ztrtri(...)
strtrs, dtrtrs, ctrtrs, ztrtrs(...)
zgeev(...)
zgegv(...)
zgelss(...)
zgesdd(...)
zggev(...)

"""
cimport numpy as np
from fwrap_ktp cimport *
cimport flapack_fc as fc

np.import_array()
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
def cgees(object select, object a, fwi_integer_t compute_v=1, fwi_integer_t sort_t=0, object lwork=None, bint overwrite_a=False, object w=None, object vs=None, object work=None):
    """cgees(select, a[, compute_v, sort_t, lwork, overwrite_a, w, vs, work]) -> (a, sdim, w, vs, work, info)

    Parameters
    ----------
    select : callback
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    compute_v : fwi_integer, intent in
    sort_t : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwc_complex_t_, 1D array, dimension(n), intent out
    vs : fwc_complex_t_, 2D array, dimension(ldvs, n), intent out
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    sdim : fwi_integer, intent out
    w : fwc_complex_t_, 1D array, dimension(n), intent out
    vs : fwc_complex_t_, 2D array, dimension(ldvs, n), intent out
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvs_f = [0, 0], *fw_sort_f = [0, 0]
    cdef fwi_integer_t lwork_, n, nrows, ldvs, sdim, info
    cdef np.ndarray a_, w_, vs_, work_, rwork_, bwork_
    cdef np.npy_intp a_shape[2], w_shape[1], vs_shape[2], work_shape[1], rwork_shape[1], bwork_shape[1]
    jobvs_f = "V" if compute_v else "N"
    sort_f = "S" if sort_t else "N"
    if sort_t:
        raise NotImplementedError('select callback not yet implemented')
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    nrows = a_shape[0]
    sdim = 0
    n = a_shape[1]
    rwork_shape[0] = n
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    bwork_shape[0] = n
    bwork_ = fw_asfortranarray(None, fwl_logical_t_enum, 1, bwork_shape, False, True)
    info = 0
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_v == 0) or (compute_v == 1)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 0) or (compute_v == 1)')
    if not ((sort_t == 0) or (sort_t == 1)):
        raise ValueError('Condition on arguments not satisfied: (sort_t == 0) or (sort_t == 1)')
    if not ((lwork_ == -1) or (lwork_ >= max(1, (2 * n)))):
        raise ValueError('Condition on arguments not satisfied: (lwork == -1) or (lwork >= max(1, (2 * n)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwc_complex_t_enum, 1, w_shape, False, True)
    if not (0 <= n <= w_shape[0]):
        raise ValueError("(0 <= n <= w.shape[0]) not satisifed")
    ldvs = n if (compute_v == 1) else 1
    vs_shape[0] = ldvs; vs_shape[1] = n
    vs_ = fw_asfortranarray(vs, fwc_complex_t_enum, 2, vs_shape, False, True)
    if ldvs != vs_shape[0]:
        raise ValueError("(ldvs == vs.shape[0]) not satisifed")
    if n != vs_shape[1]:
        raise ValueError("(n == vs.shape[1]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fw_jobvs_f[0] = fw_aschar(jobvs_f)
    if fw_jobvs_f[0] == 0:
        raise ValueError("len(jobvs_f) != 1")
    fw_sort_f[0] = fw_aschar(sort_f)
    if fw_sort_f[0] == 0:
        raise ValueError("len(sort_f) != 1")
    fc.cgees(fw_jobvs_f, fw_sort_f, NULL, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &nrows, &sdim, <fwc_complex_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(vs_), &ldvs, <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), <fwl_logical_t*>np.PyArray_DATA(bwork_), &info, 1, 1)
    return (a_, sdim, w_, vs_, work_, info,)
def zgees(object select, object a, fwi_integer_t compute_v=1, fwi_integer_t sort_t=0, object lwork=None, bint overwrite_a=False, object w=None, object vs=None, object work=None):
    """zgees(select, a[, compute_v, sort_t, lwork, overwrite_a, w, vs, work]) -> (a, sdim, w, vs, work, info)

    Parameters
    ----------
    select : callback
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    compute_v : fwi_integer, intent in
    sort_t : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwc_dbl_complex_t_, 1D array, dimension(n), intent out
    vs : fwc_dbl_complex_t_, 2D array, dimension(ldvs, n), intent out
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    sdim : fwi_integer, intent out
    w : fwc_dbl_complex_t_, 1D array, dimension(n), intent out
    vs : fwc_dbl_complex_t_, 2D array, dimension(ldvs, n), intent out
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvs_f = [0, 0], *fw_sort_f = [0, 0]
    cdef fwi_integer_t lwork_, n, nrows, ldvs, sdim, info
    cdef np.ndarray a_, w_, vs_, work_, rwork_, bwork_
    cdef np.npy_intp a_shape[2], w_shape[1], vs_shape[2], work_shape[1], rwork_shape[1], bwork_shape[1]
    jobvs_f = "V" if compute_v else "N"
    sort_f = "S" if sort_t else "N"
    if sort_t:
        raise NotImplementedError('select callback not yet implemented')
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    nrows = a_shape[0]
    sdim = 0
    n = a_shape[1]
    rwork_shape[0] = n
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    bwork_shape[0] = n
    bwork_ = fw_asfortranarray(None, fwl_logical_t_enum, 1, bwork_shape, False, True)
    info = 0
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_v == 0) or (compute_v == 1)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 0) or (compute_v == 1)')
    if not ((sort_t == 0) or (sort_t == 1)):
        raise ValueError('Condition on arguments not satisfied: (sort_t == 0) or (sort_t == 1)')
    if not ((lwork_ == -1) or (lwork_ >= max(1, (2 * n)))):
        raise ValueError('Condition on arguments not satisfied: (lwork == -1) or (lwork >= max(1, (2 * n)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwc_dbl_complex_t_enum, 1, w_shape, False, True)
    if not (0 <= n <= w_shape[0]):
        raise ValueError("(0 <= n <= w.shape[0]) not satisifed")
    ldvs = n if (compute_v == 1) else 1
    vs_shape[0] = ldvs; vs_shape[1] = n
    vs_ = fw_asfortranarray(vs, fwc_dbl_complex_t_enum, 2, vs_shape, False, True)
    if ldvs != vs_shape[0]:
        raise ValueError("(ldvs == vs.shape[0]) not satisifed")
    if n != vs_shape[1]:
        raise ValueError("(n == vs.shape[1]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fw_jobvs_f[0] = fw_aschar(jobvs_f)
    if fw_jobvs_f[0] == 0:
        raise ValueError("len(jobvs_f) != 1")
    fw_sort_f[0] = fw_aschar(sort_f)
    if fw_sort_f[0] == 0:
        raise ValueError("len(sort_f) != 1")
    fc.zgees(fw_jobvs_f, fw_sort_f, NULL, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &nrows, &sdim, <fwc_dbl_complex_t*>np.PyArray_DATA(w_), <fwc_dbl_complex_t*>np.PyArray_DATA(vs_), &ldvs, <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), <fwl_logical_t*>np.PyArray_DATA(bwork_), &info, 1, 1)
    return (a_, sdim, w_, vs_, work_, info,)


def cgeev(object a, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, object w=None, object vl=None, object vr=None):
    """cgeev(a[, compute_vl, compute_vr, lwork, overwrite_a, w, vl, vr]) -> (w, vl, vr, info)

    Parameters
    ----------
    a : fwc_complex, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwc_complex, 1D array, dimension(n), intent out
    vl : fwc_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_complex, 2D array, dimension(ldvr, n), intent out

    Returns
    -------
    w : fwc_complex, 1D array, dimension(n), intent out
    vl : fwc_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_complex, 2D array, dimension(ldvr, n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, w_, vl_, vr_, work_, rwork_
    cdef np.npy_intp a_shape[2], w_shape[1], vl_shape[2], vr_shape[2], work_shape[1], rwork_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 2 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = 2 * n
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not (lwork_ >= (2 * n)):
        raise ValueError('Condition on arguments not satisfied: lwork >= (2 * n)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwc_complex_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwc_complex_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if not (0 <= n <= vl_shape[1]):
        raise ValueError("(0 <= n <= vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwc_complex_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if not (0 <= n <= vr_shape[1]):
        raise ValueError("(0 <= n <= vr.shape[1]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.cgeev(fw_jobvl_f, fw_jobvr_f, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwc_complex_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(vl_), &ldvl, <fwc_complex_t*>np.PyArray_DATA(vr_), &ldvr, <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (w_, vl_, vr_, info,)


def cgegv(object a, object b, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object alpha=None, object beta=None, object vl=None, object vr=None):
    """cgegv(a, b[, compute_vl, compute_vr, lwork, overwrite_a, overwrite_b, alpha, beta, vl, vr]) -> (alpha, beta, vl, vr, info)

    Parameters
    ----------
    a : fwc_complex, 2D array, dimension(n, n), intent in
    b : fwc_complex, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    alpha : fwc_complex, 1D array, dimension(n), intent out
    beta : fwc_complex, 1D array, dimension(n), intent out
    vl : fwc_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_complex, 2D array, dimension(ldvr, n), intent out

    Returns
    -------
    alpha : fwc_complex, 1D array, dimension(n), intent out
    beta : fwc_complex, 1D array, dimension(n), intent out
    vl : fwc_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_complex, 2D array, dimension(ldvr, n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, b_, alpha_, beta_, vl_, vr_, work_, rwork_
    cdef np.npy_intp a_shape[2], b_shape[2], alpha_shape[1], beta_shape[1], vl_shape[2], vr_shape[2], work_shape[1], rwork_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 2 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = 8 * n
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    info = 0
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((b_shape[0] == b_shape[1]) and (b_shape[0] == n)):
        raise ValueError('Condition on arguments not satisfied: (b.shape[0] == b.shape[1]) and (b.shape[0] == n)')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not (lwork_ >= (2 * n)):
        raise ValueError('Condition on arguments not satisfied: lwork >= (2 * n)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if n != b_shape[1]:
        raise ValueError("(n == b.shape[1]) not satisifed")
    alpha_shape[0] = n
    alpha_ = fw_asfortranarray(alpha, fwc_complex_t_enum, 1, alpha_shape, False, True)
    if n != alpha_shape[0]:
        raise ValueError("(n == alpha.shape[0]) not satisifed")
    beta_shape[0] = n
    beta_ = fw_asfortranarray(beta, fwc_complex_t_enum, 1, beta_shape, False, True)
    if n != beta_shape[0]:
        raise ValueError("(n == beta.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwc_complex_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if not (0 <= n <= vl_shape[1]):
        raise ValueError("(0 <= n <= vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwc_complex_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if not (0 <= n <= vr_shape[1]):
        raise ValueError("(0 <= n <= vr.shape[1]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.cgegv(fw_jobvl_f, fw_jobvr_f, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwc_complex_t*>np.PyArray_DATA(b_), &n, <fwc_complex_t*>np.PyArray_DATA(alpha_), <fwc_complex_t*>np.PyArray_DATA(beta_), <fwc_complex_t*>np.PyArray_DATA(vl_), &ldvl, <fwc_complex_t*>np.PyArray_DATA(vr_), &ldvr, <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (alpha_, beta_, vl_, vr_, info,)


def cgelss(object a, object b, object cond=None, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object s=None):
    """cgelss(a, b[, cond, lwork, overwrite_a, overwrite_b, s]) -> (a, b, s, r, info)

    Parameters
    ----------
    a : fwc_complex, 2D array, dimension(m, n), intent inout
    b : fwc_complex, 2D array, dimension(maxmn, nrhs), intent inout
    cond : fwr_real, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    s : fwr_real, 1D array, dimension(minmn), intent out

    Returns
    -------
    a : fwc_complex, 2D array, dimension(m, n), intent inout
    b : fwc_complex, 2D array, dimension(maxmn, nrhs), intent inout
    s : fwr_real, 1D array, dimension(minmn), intent out
    r : fwi_integer, intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, minmn, maxmn, nrhs, r, info
    cdef fwr_real_t cond_
    cdef np.ndarray a_, b_, s_, work_, rwork_
    cdef np.npy_intp a_shape[2], b_shape[2], s_shape[1], work_shape[1], rwork_shape[1]
    r = 0
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    maxmn = max(m, n)
    minmn = min(m, n)
    cond_ = cond if (cond is not None) else -1.0
    lwork_ = lwork if (lwork is not None) else (2 * minmn) + max(maxmn, nrhs)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = (5 * minmn) - 1
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    info = 0
    if not (maxmn == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: maxmn == b.shape[0]')
    if not (lwork_ >= 1):
        raise ValueError('Condition on arguments not satisfied: lwork >= 1')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if maxmn != b_shape[0]:
        raise ValueError("(maxmn == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    s_shape[0] = minmn
    s_ = fw_asfortranarray(s, fwr_real_t_enum, 1, s_shape, False, True)
    if minmn != s_shape[0]:
        raise ValueError("(minmn == s.shape[0]) not satisifed")
    fc.cgelss(&m, &n, &nrhs, <fwc_complex_t*>np.PyArray_DATA(a_), &m, <fwc_complex_t*>np.PyArray_DATA(b_), &maxmn, <fwr_real_t*>np.PyArray_DATA(s_), &cond_, &r, <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), &info)
    return (a_, b_, s_, r, info,)


def cgesdd(object a, fwi_integer_t compute_uv=1, object lwork=None, bint overwrite_a=False, object u=None, object s=None, object vt=None):
    """cgesdd(a[, compute_uv, lwork, overwrite_a, u, s, vt]) -> (u, s, vt, info)

    Parameters
    ----------
    a : fwc_complex, 2D array, dimension(m, n), intent in
    compute_uv : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    u : fwc_complex, 2D array, dimension(du, du), intent out
    s : fwr_real, 1D array, dimension(minmn), intent out
    vt : fwc_complex, 2D array, dimension(dvt, dvt), intent out

    Returns
    -------
    u : fwc_complex, 2D array, dimension(du, du), intent out
    s : fwr_real, 1D array, dimension(minmn), intent out
    vt : fwc_complex, 2D array, dimension(dvt, dvt), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0]
    cdef fwi_integer_t lwork_, m, n, minmn, du, dvt, rwork_len, info
    cdef np.ndarray a_, u_, s_, vt_, work_, rwork_, iwork_
    cdef np.npy_intp a_shape[2], u_shape[2], s_shape[1], vt_shape[2], work_shape[1], rwork_shape[1], iwork_shape[1]
    jobz_f = "A" if compute_uv else "N"
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    minmn = min(m, n)
    lwork_ = lwork if (lwork is not None) else ((2 * minmn * minmn) + max(m, n) + (2 * minmn)) if compute_uv else ((2 * minmn) + max(m, n))
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    rwork_len = ((5 * minmn * minmn) + (7 * minmn)) if compute_uv else (5 * minmn)
    rwork_shape[0] = rwork_len
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    iwork_shape[0] = 8 * minmn
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    if not ((compute_uv == 0) or (compute_uv == 1)):
        raise ValueError('Condition on arguments not satisfied: (compute_uv == 0) or (compute_uv == 1)')
    if not (lwork_ >= (((2 * minmn * minmn) + max(m, n) + (2 * minmn)) if compute_uv else ((2 * minmn) + max(m, n)))):
        raise ValueError('Condition on arguments not satisfied: lwork >= (((2 * minmn * minmn) + max(m, n) + (2 * minmn)) if compute_uv else ((2 * minmn) + max(m, n)))')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    du = m if compute_uv else 1
    u_shape[0] = du; u_shape[1] = du
    u_ = fw_asfortranarray(u, fwc_complex_t_enum, 2, u_shape, False, True)
    if du != u_shape[0]:
        raise ValueError("(du == u.shape[0]) not satisifed")
    if du != u_shape[1]:
        raise ValueError("(du == u.shape[1]) not satisifed")
    s_shape[0] = minmn
    s_ = fw_asfortranarray(s, fwr_real_t_enum, 1, s_shape, False, True)
    if minmn != s_shape[0]:
        raise ValueError("(minmn == s.shape[0]) not satisifed")
    dvt = n if compute_uv else 1
    vt_shape[0] = dvt; vt_shape[1] = dvt
    vt_ = fw_asfortranarray(vt, fwc_complex_t_enum, 2, vt_shape, False, True)
    if dvt != vt_shape[0]:
        raise ValueError("(dvt == vt.shape[0]) not satisifed")
    if dvt != vt_shape[1]:
        raise ValueError("(dvt == vt.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fc.cgesdd(fw_jobz_f, &m, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &m, <fwr_real_t*>np.PyArray_DATA(s_), <fwc_complex_t*>np.PyArray_DATA(u_), &du, <fwc_complex_t*>np.PyArray_DATA(vt_), &dvt, <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), <fwi_integer_t*>np.PyArray_DATA(iwork_), &info, 1)
    return (u_, s_, vt_, info,)


def cggev(object a, object b, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object alpha=None, object beta=None, object vl=None, object vr=None, object work=None):
    """cggev(a, b[, compute_vl, compute_vr, lwork, overwrite_a, overwrite_b, alpha, beta, vl, vr, work]) -> (alpha, beta, vl, vr, work, info)

    Parameters
    ----------
    a : fwc_complex, 2D array, dimension(n, n), intent in
    b : fwc_complex, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    alpha : fwc_complex, 1D array, dimension(n), intent out
    beta : fwc_complex, 1D array, dimension(n), intent out
    vl : fwc_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_complex, 2D array, dimension(ldvr, n), intent out
    work : fwc_complex, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    alpha : fwc_complex, 1D array, dimension(n), intent out
    beta : fwc_complex, 1D array, dimension(n), intent out
    vl : fwc_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_complex, 2D array, dimension(ldvr, n), intent out
    work : fwc_complex, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, b_, alpha_, beta_, vl_, vr_, work_, rwork_
    cdef np.npy_intp a_shape[2], b_shape[2], alpha_shape[1], beta_shape[1], vl_shape[2], vr_shape[2], work_shape[1], rwork_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    rwork_shape[0] = 8 * n
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    info = 0
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    lwork_ = lwork if (lwork is not None) else 2 * n
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (b_shape[0] == b_shape[1]):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == b.shape[1]')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not ((lwork_ == -1) or (lwork_ >= max(1, (2 * n)))):
        raise ValueError('Condition on arguments not satisfied: (lwork == -1) or (lwork >= max(1, (2 * n)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    alpha_shape[0] = n
    alpha_ = fw_asfortranarray(alpha, fwc_complex_t_enum, 1, alpha_shape, False, True)
    if n != alpha_shape[0]:
        raise ValueError("(n == alpha.shape[0]) not satisifed")
    beta_shape[0] = n
    beta_ = fw_asfortranarray(beta, fwc_complex_t_enum, 1, beta_shape, False, True)
    if n != beta_shape[0]:
        raise ValueError("(n == beta.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwc_complex_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if n != vl_shape[1]:
        raise ValueError("(n == vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwc_complex_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if n != vr_shape[1]:
        raise ValueError("(n == vr.shape[1]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.cggev(fw_jobvl_f, fw_jobvr_f, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwc_complex_t*>np.PyArray_DATA(b_), &n, <fwc_complex_t*>np.PyArray_DATA(alpha_), <fwc_complex_t*>np.PyArray_DATA(beta_), <fwc_complex_t*>np.PyArray_DATA(vl_), &ldvl, <fwc_complex_t*>np.PyArray_DATA(vr_), &ldvr, <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (alpha_, beta_, vl_, vr_, work_, info,)

def chbevd(object ab, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object ldab=None, object lrwork=None, object liwork=None, bint overwrite_ab=True, object w=None, object z=None):
    """chbevd(ab[, compute_v, lower, ldab, lrwork, liwork, overwrite_ab, w, z]) -> (w, z, info)

    Parameters
    ----------
    ab : fwc_complex_t_, 2D array, dimension(ldab, *), intent in
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    lrwork : fwi_integer, intent in
    liwork : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwc_complex_t_, 2D array, dimension(ldz, ldz), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwc_complex_t_, 2D array, dimension(ldz, ldz), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, lrwork_, liwork_, n, kd, ldz, lwork, info
    cdef np.ndarray ab_, w_, z_, work_, rwork_, iwork_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], work_shape[1], rwork_shape[1], iwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    lwork = (2 * n * n) if compute_v else n
    work_shape[0] = lwork
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    lrwork_ = lrwork if (lrwork is not None) else (1 + (5 * n) + (2 * n * n)) if compute_v else n
    rwork_shape[0] = lrwork_
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    liwork_ = liwork if (liwork is not None) else (3 + (5 * n)) if compute_v else 1
    iwork_shape[0] = liwork_
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not (lrwork_ >= ((1 + (5 * n) + (2 * n * n)) if compute_v else n)):
        raise ValueError('Condition on arguments not satisfied: lrwork >= ((1 + (5 * n) + (2 * n * n)) if compute_v else n)')
    if not (liwork_ >= ((3 + (5 * n)) if compute_v else 1)):
        raise ValueError('Condition on arguments not satisfied: liwork >= ((3 + (5 * n)) if compute_v else 1)')
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = ldz
    z_ = fw_asfortranarray(z, fwc_complex_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if ldz != z_shape[1]:
        raise ValueError("(ldz == z.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.chbevd(fw_jobz_f, fw_uplo_f, &n, &kd, <fwc_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_real_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(z_), &ldz, <fwc_complex_t*>np.PyArray_DATA(work_), &lwork, <fwr_real_t*>np.PyArray_DATA(rwork_), &lrwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork_, &info, 1, 1)
    return (w_, z_, info,)
def zhbevd(object ab, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object ldab=None, object lrwork=None, object liwork=None, bint overwrite_ab=True, object w=None, object z=None):
    """zhbevd(ab[, compute_v, lower, ldab, lrwork, liwork, overwrite_ab, w, z]) -> (w, z, info)

    Parameters
    ----------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, *), intent in
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    lrwork : fwi_integer, intent in
    liwork : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwc_dbl_complex_t_, 2D array, dimension(ldz, ldz), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwc_dbl_complex_t_, 2D array, dimension(ldz, ldz), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, lrwork_, liwork_, n, kd, ldz, lwork, info
    cdef np.ndarray ab_, w_, z_, work_, rwork_, iwork_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], work_shape[1], rwork_shape[1], iwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_dbl_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    lwork = (2 * n * n) if compute_v else n
    work_shape[0] = lwork
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    lrwork_ = lrwork if (lrwork is not None) else (1 + (5 * n) + (2 * n * n)) if compute_v else n
    rwork_shape[0] = lrwork_
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    liwork_ = liwork if (liwork is not None) else (3 + (5 * n)) if compute_v else 1
    iwork_shape[0] = liwork_
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not (lrwork_ >= ((1 + (5 * n) + (2 * n * n)) if compute_v else n)):
        raise ValueError('Condition on arguments not satisfied: lrwork >= ((1 + (5 * n) + (2 * n * n)) if compute_v else n)')
    if not (liwork_ >= ((3 + (5 * n)) if compute_v else 1)):
        raise ValueError('Condition on arguments not satisfied: liwork >= ((3 + (5 * n)) if compute_v else 1)')
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = ldz
    z_ = fw_asfortranarray(z, fwc_dbl_complex_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if ldz != z_shape[1]:
        raise ValueError("(ldz == z.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zhbevd(fw_jobz_f, fw_uplo_f, &n, &kd, <fwc_dbl_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwc_dbl_complex_t*>np.PyArray_DATA(z_), &ldz, <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork_, &info, 1, 1)
    return (w_, z_, info,)

def chbevx(object ab, fwr_real_t vl, fwr_real_t vu, fwi_integer_t il, fwi_integer_t iu, object ldab=None, fwi_integer_t compute_v=1, fwi_integer_t range=0, fwi_integer_t lower=0, fwr_real_t abstol=0.0, object mmax=None, bint overwrite_ab=True, object w=None, object z=None, object ifail=None):
    """chbevx(ab, vl, vu, il, iu[, ldab, compute_v, range, lower, abstol, mmax, overwrite_ab, w, z, ifail]) -> (w, z, m, ifail, info)

    Parameters
    ----------
    ab : fwc_complex_t_, 2D array, dimension(ldab, *), intent in
    vl : fwr_real_t_, intent in
    vu : fwr_real_t_, intent in
    il : fwi_integer, intent in
    iu : fwi_integer, intent in
    ldab : fwi_integer, intent in
    compute_v : fwi_integer, intent in
    range : fwi_integer, intent in
    lower : fwi_integer, intent in
    abstol : fwr_real_t_, intent in
    mmax : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwc_complex_t_, 2D array, dimension(ldz, mmax), intent out
    ifail : fwi_integer, 1D array, dimension(ifail_len), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwc_complex_t_, 2D array, dimension(ldz, mmax), intent out
    m : fwi_integer, intent out
    ifail : fwi_integer, 1D array, dimension(ifail_len), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_range_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, mmax_, n, kd, ldq, ldz, ifail_len, m, info
    cdef np.ndarray ab_, w_, z_, ifail_, q_, work_, rwork_, iwork_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], ifail_shape[1], q_shape[2], work_shape[1], rwork_shape[1], iwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    range_f = ("V" if (range == 1) else "I") if (range > 0) else "A"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    ldq = n if compute_v else 1
    q_shape[0] = ldq; q_shape[1] = ldq
    q_ = fw_asfortranarray(None, fwc_complex_t_enum, 2, q_shape, False, True)
    m = 0
    work_shape[0] = n
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = 7 * n
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    iwork_shape[0] = 5 * n
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((il >= 1) and (il <= n)):
        raise ValueError('Condition on arguments not satisfied: (il >= 1) and (il <= n)')
    if not ((iu >= 1) and (iu <= n) and (iu >= il)):
        raise ValueError('Condition on arguments not satisfied: (iu >= 1) and (iu <= n) and (iu >= il)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((range == 2) or (range == 1) or (range == 0)):
        raise ValueError('Condition on arguments not satisfied: (range == 2) or (range == 1) or (range == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    mmax_ = mmax if (mmax is not None) else ((iu - il + 1) if (range == 2) else n) if compute_v else 1
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = mmax_
    z_ = fw_asfortranarray(z, fwc_complex_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if not (0 <= mmax_ <= z_shape[1]):
        raise ValueError("(0 <= mmax <= z.shape[1]) not satisifed")
    ifail_len = n if compute_v else 1
    ifail_shape[0] = ifail_len
    ifail_ = fw_asfortranarray(ifail, fwi_integer_t_enum, 1, ifail_shape, False, True)
    if not (0 <= ifail_len <= ifail_shape[0]):
        raise ValueError("(0 <= ifail_len <= ifail.shape[0]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_range_f[0] = fw_aschar(range_f)
    if fw_range_f[0] == 0:
        raise ValueError("len(range_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.chbevx(fw_jobz_f, fw_range_f, fw_uplo_f, &n, &kd, <fwc_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwc_complex_t*>np.PyArray_DATA(q_), &ldq, &vl, &vu, &il, &iu, &abstol, &m, <fwr_real_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(z_), &ldz, <fwc_complex_t*>np.PyArray_DATA(work_), <fwr_real_t*>np.PyArray_DATA(rwork_), <fwi_integer_t*>np.PyArray_DATA(iwork_), <fwi_integer_t*>np.PyArray_DATA(ifail_), &info, 1, 1, 1)
    return (w_, z_, m, ifail_, info,)
def zhbevx(object ab, fwr_dbl_t vl, fwr_dbl_t vu, fwi_integer_t il, fwi_integer_t iu, object ldab=None, fwi_integer_t compute_v=1, fwi_integer_t range=0, fwi_integer_t lower=0, fwr_dbl_t abstol=0.0, object mmax=None, bint overwrite_ab=True, object w=None, object z=None, object ifail=None):
    """zhbevx(ab, vl, vu, il, iu[, ldab, compute_v, range, lower, abstol, mmax, overwrite_ab, w, z, ifail]) -> (w, z, m, ifail, info)

    Parameters
    ----------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, *), intent in
    vl : fwr_dbl_t_, intent in
    vu : fwr_dbl_t_, intent in
    il : fwi_integer, intent in
    iu : fwi_integer, intent in
    ldab : fwi_integer, intent in
    compute_v : fwi_integer, intent in
    range : fwi_integer, intent in
    lower : fwi_integer, intent in
    abstol : fwr_dbl_t_, intent in
    mmax : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwc_dbl_complex_t_, 2D array, dimension(ldz, mmax), intent out
    ifail : fwi_integer, 1D array, dimension(ifail_len), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwc_dbl_complex_t_, 2D array, dimension(ldz, mmax), intent out
    m : fwi_integer, intent out
    ifail : fwi_integer, 1D array, dimension(ifail_len), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_range_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, mmax_, n, kd, ldq, ldz, ifail_len, m, info
    cdef np.ndarray ab_, w_, z_, ifail_, q_, work_, rwork_, iwork_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], ifail_shape[1], q_shape[2], work_shape[1], rwork_shape[1], iwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    range_f = ("V" if (range == 1) else "I") if (range > 0) else "A"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_dbl_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    ldq = n if compute_v else 1
    q_shape[0] = ldq; q_shape[1] = ldq
    q_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 2, q_shape, False, True)
    m = 0
    work_shape[0] = n
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = 7 * n
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    iwork_shape[0] = 5 * n
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((il >= 1) and (il <= n)):
        raise ValueError('Condition on arguments not satisfied: (il >= 1) and (il <= n)')
    if not ((iu >= 1) and (iu <= n) and (iu >= il)):
        raise ValueError('Condition on arguments not satisfied: (iu >= 1) and (iu <= n) and (iu >= il)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((range == 2) or (range == 1) or (range == 0)):
        raise ValueError('Condition on arguments not satisfied: (range == 2) or (range == 1) or (range == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    mmax_ = mmax if (mmax is not None) else ((iu - il + 1) if (range == 2) else n) if compute_v else 1
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = mmax_
    z_ = fw_asfortranarray(z, fwc_dbl_complex_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if not (0 <= mmax_ <= z_shape[1]):
        raise ValueError("(0 <= mmax <= z.shape[1]) not satisifed")
    ifail_len = n if compute_v else 1
    ifail_shape[0] = ifail_len
    ifail_ = fw_asfortranarray(ifail, fwi_integer_t_enum, 1, ifail_shape, False, True)
    if not (0 <= ifail_len <= ifail_shape[0]):
        raise ValueError("(0 <= ifail_len <= ifail.shape[0]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_range_f[0] = fw_aschar(range_f)
    if fw_range_f[0] == 0:
        raise ValueError("len(range_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zhbevx(fw_jobz_f, fw_range_f, fw_uplo_f, &n, &kd, <fwc_dbl_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwc_dbl_complex_t*>np.PyArray_DATA(q_), &ldq, &vl, &vu, &il, &iu, &abstol, &m, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwc_dbl_complex_t*>np.PyArray_DATA(z_), &ldz, <fwc_dbl_complex_t*>np.PyArray_DATA(work_), <fwr_dbl_t*>np.PyArray_DATA(rwork_), <fwi_integer_t*>np.PyArray_DATA(iwork_), <fwi_integer_t*>np.PyArray_DATA(ifail_), &info, 1, 1, 1)
    return (w_, z_, m, ifail_, info,)

def cheev(object a, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object lwork=None, bint overwrite_a=False, object w=None):
    """cheev(a[, compute_v, lower, lwork, overwrite_a, w]) -> (w, a, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t lwork_, n, info
    cdef np.ndarray a_, w_, work_, rwork_
    cdef np.npy_intp a_shape[2], w_shape[1], work_shape[1], rwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else (2 * n) - 1
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = (3 * n) - 1
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (lwork_ >= ((2 * n) - 1)):
        raise ValueError('Condition on arguments not satisfied: lwork >= ((2 * n) - 1)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.cheev(fw_jobz_f, fw_uplo_f, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (w_, a_, info,)
def zheev(object a, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object lwork=None, bint overwrite_a=False, object w=None):
    """zheev(a[, compute_v, lower, lwork, overwrite_a, w]) -> (w, a, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t lwork_, n, info
    cdef np.ndarray a_, w_, work_, rwork_
    cdef np.npy_intp a_shape[2], w_shape[1], work_shape[1], rwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else (2 * n) - 1
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = (3 * n) - 1
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (lwork_ >= ((2 * n) - 1)):
        raise ValueError('Condition on arguments not satisfied: lwork >= ((2 * n) - 1)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zheev(fw_jobz_f, fw_uplo_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (w_, a_, info,)

def cheevr(object a, object jobz='V', object range='A', object uplo='L', fwi_integer_t il=1, object iu=None, object lwork=None, bint overwrite_a=False, object w=None, object z=None):
    """cheevr(a[, jobz, range, uplo, il, iu, lwork, overwrite_a, w, z]) -> (w, z, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent in
    jobz : object_, intent in
    range : object_, intent in
    uplo : object_, intent in
    il : fwi_integer, intent in
    iu : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwc_complex_t_, 2D array, dimension(n, m), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwc_complex_t_, 2D array, dimension(n, m), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_range = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t iu_, lwork_, n, lda, m, ldz, lrwork, liwork, info
    cdef np.ndarray a_, w_, z_, isuppz_, work_, rwork_, iwork_
    cdef np.npy_intp a_shape[2], w_shape[1], z_shape[2], isuppz_shape[1], work_shape[1], rwork_shape[1], iwork_shape[1]
    cdef fwr_real_t vl, vu, abstol
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    vl = 0
    vu = 1
    abstol = 0.
    iu_ = iu if (iu is not None) else n
    m = iu_ - il + 1
    isuppz_shape[0] = 2 * m
    isuppz_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, isuppz_shape, False, True)
    lwork_ = lwork if (lwork is not None) else 18 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    lrwork = 24 * n
    rwork_shape[0] = lrwork
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    liwork = 10 * n
    iwork_shape[0] = liwork
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    z_shape[0] = n; z_shape[1] = m
    z_ = fw_asfortranarray(z, fwc_complex_t_enum, 2, z_shape, False, True)
    ldz = n
    if not (z_shape[0] == ldz):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == ldz')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    if n != z_shape[0]:
        raise ValueError("(n == z.shape[0]) not satisifed")
    if m != z_shape[1]:
        raise ValueError("(m == z.shape[1]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_range[0] = fw_aschar(range)
    if fw_range[0] == 0:
        raise ValueError("len(range) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.cheevr(fw_jobz, fw_range, fw_uplo, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &lda, &vl, &vu, &il, &iu_, &abstol, &m, <fwr_real_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(z_), &ldz, <fwi_integer_t*>np.PyArray_DATA(isuppz_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), &lrwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &info, 1, 1, 1)
    return (w_, z_, info,)
def zheevr(object a, object jobz='V', object range='A', object uplo='L', fwi_integer_t il=1, object iu=None, object lwork=None, bint overwrite_a=False, object w=None, object z=None):
    """zheevr(a[, jobz, range, uplo, il, iu, lwork, overwrite_a, w, z]) -> (w, z, info)

    Parameters
    ----------
    a : fwc_complex_x16_t_, 2D array, dimension(n, n), intent in
    jobz : object_, intent in
    range : object_, intent in
    uplo : object_, intent in
    il : fwi_integer, intent in
    iu : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwc_complex_x16_t_, 2D array, dimension(n, m), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwc_complex_x16_t_, 2D array, dimension(n, m), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_range = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t iu_, lwork_, n, lda, m, ldz, lrwork, liwork, info
    cdef np.ndarray a_, w_, z_, isuppz_, work_, rwork_, iwork_
    cdef np.npy_intp a_shape[2], w_shape[1], z_shape[2], isuppz_shape[1], work_shape[1], rwork_shape[1], iwork_shape[1]
    cdef fwr_dbl_t vl, vu, abstol
    a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    vl = 0
    vu = 1
    abstol = 0.
    iu_ = iu if (iu is not None) else n
    m = iu_ - il + 1
    isuppz_shape[0] = 2 * m
    isuppz_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, isuppz_shape, False, True)
    lwork_ = lwork if (lwork is not None) else 18 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_x16_t_enum, 1, work_shape, False, True)
    lrwork = 24 * n
    rwork_shape[0] = lrwork
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    liwork = 10 * n
    iwork_shape[0] = liwork
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    z_shape[0] = n; z_shape[1] = m
    z_ = fw_asfortranarray(z, fwc_complex_x16_t_enum, 2, z_shape, False, True)
    ldz = n
    if not (z_shape[0] == ldz):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == ldz')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    if n != z_shape[0]:
        raise ValueError("(n == z.shape[0]) not satisifed")
    if m != z_shape[1]:
        raise ValueError("(m == z.shape[1]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_range[0] = fw_aschar(range)
    if fw_range[0] == 0:
        raise ValueError("len(range) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.zheevr(fw_jobz, fw_range, fw_uplo, &n, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &lda, &vl, &vu, &il, &iu_, &abstol, &m, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwc_complex_x16_t*>np.PyArray_DATA(z_), &ldz, <fwi_integer_t*>np.PyArray_DATA(isuppz_), <fwc_complex_x16_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &info, 1, 1, 1)
    return (w_, z_, info,)

def chegv(object a, object b, fwi_integer_t itype=1, object jobz='V', object uplo='L', bint overwrite_a=False, bint overwrite_b=False, object w=None):
    """chegv(a, b[, itype, jobz, uplo, overwrite_a, overwrite_b, w]) -> (a, w, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    b : fwc_complex_t_, 2D array, dimension(n, n), intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    w : fwr_real_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t n, lda, ldb, lwork, info
    cdef np.ndarray a_, b_, w_, work_, rwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], work_shape[1], rwork_shape[1]
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    lwork = (18 * n) - 1
    work_shape[0] = lwork
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = (3 * n) - 2
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    info = 0
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.chegv(&itype, fw_jobz, fw_uplo, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &lda, <fwc_complex_t*>np.PyArray_DATA(b_), &ldb, <fwr_real_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork, <fwr_real_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (a_, w_, info,)
def zhegv(object a, object b, fwi_integer_t itype=1, object jobz='V', object uplo='L', bint overwrite_a=False, bint overwrite_b=False, object w=None):
    """zhegv(a, b[, itype, jobz, uplo, overwrite_a, overwrite_b, w]) -> (a, w, info)

    Parameters
    ----------
    a : fwc_complex_x16_t_, 2D array, dimension(n, n), intent inout
    b : fwc_complex_x16_t_, 2D array, dimension(n, n), intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwc_complex_x16_t_, 2D array, dimension(n, n), intent inout
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t n, lda, ldb, lwork, info
    cdef np.ndarray a_, b_, w_, work_, rwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], work_shape[1], rwork_shape[1]
    a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    lwork = (18 * n) - 1
    work_shape[0] = lwork
    work_ = fw_asfortranarray(None, fwc_complex_x16_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = (3 * n) - 2
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    info = 0
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_x16_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.zhegv(&itype, fw_jobz, fw_uplo, &n, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &lda, <fwc_complex_x16_t*>np.PyArray_DATA(b_), &ldb, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwc_complex_x16_t*>np.PyArray_DATA(work_), &lwork, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (a_, w_, info,)

def chegvd(object a, object b, fwi_integer_t itype=1, object jobz='V', object uplo='L', object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object w=None):
    """chegvd(a, b[, itype, jobz, uplo, lwork, overwrite_a, overwrite_b, w]) -> (a, w, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    b : fwc_complex_t_, 2D array, dimension(n, n), intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    w : fwr_real_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t lwork_, n, lda, ldb, lrwork, liwork, info
    cdef np.ndarray a_, b_, w_, work_, rwork_, iwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], work_shape[1], rwork_shape[1], iwork_shape[1]
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    lwork_ = lwork if (lwork is not None) else (2 * n) + (n * n)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    lrwork = 1 + (5 * n) + (2 * n * n)
    rwork_shape[0] = lrwork
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    liwork = 3 + (5 * n)
    iwork_shape[0] = liwork
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.chegvd(&itype, fw_jobz, fw_uplo, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &lda, <fwc_complex_t*>np.PyArray_DATA(b_), &ldb, <fwr_real_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), &lrwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &info, 1, 1)
    return (a_, w_, info,)
def zhegvd(object a, object b, fwi_integer_t itype=1, object jobz='V', object uplo='L', object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object w=None):
    """zhegvd(a, b[, itype, jobz, uplo, lwork, overwrite_a, overwrite_b, w]) -> (a, w, info)

    Parameters
    ----------
    a : fwc_complex_x16_t_, 2D array, dimension(n, n), intent inout
    b : fwc_complex_x16_t_, 2D array, dimension(n, n), intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwc_complex_x16_t_, 2D array, dimension(n, n), intent inout
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t lwork_, n, lda, ldb, lrwork, liwork, info
    cdef np.ndarray a_, b_, w_, work_, rwork_, iwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], work_shape[1], rwork_shape[1], iwork_shape[1]
    a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    lwork_ = lwork if (lwork is not None) else (2 * n) + (n * n)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_x16_t_enum, 1, work_shape, False, True)
    lrwork = 1 + (5 * n) + (2 * n * n)
    rwork_shape[0] = lrwork
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    liwork = 3 + (5 * n)
    iwork_shape[0] = liwork
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_x16_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.zhegvd(&itype, fw_jobz, fw_uplo, &n, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &lda, <fwc_complex_x16_t*>np.PyArray_DATA(b_), &ldb, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwc_complex_x16_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &info, 1, 1)
    return (a_, w_, info,)

def chegvx(object a, object b, fwi_integer_t iu, fwi_integer_t itype=1, object jobz='V', object uplo='L', fwi_integer_t il=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object w=None, object z=None, object ifail=None):
    """chegvx(a, b, iu[, itype, jobz, uplo, il, lwork, overwrite_a, overwrite_b, w, z, ifail]) -> (w, z, ifail, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent in
    b : fwc_complex_t_, 2D array, dimension(n, n), intent in
    iu : fwi_integer, intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    il : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwc_complex_t_, 2D array, dimension(n, m), intent out
    ifail : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwc_complex_t_, 2D array, dimension(n, m), intent out
    ifail : fwi_integer, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0], *fw_range = [0, 0]
    cdef fwi_integer_t lwork_, n, lda, ldb, m, ldz, info
    cdef np.ndarray a_, b_, w_, z_, ifail_, work_, rwork_, iwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], z_shape[2], ifail_shape[1], work_shape[1], rwork_shape[1], iwork_shape[1]
    cdef fwr_real_t vl, vu, abstol
    range = 'I'
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    vl = 0.
    vu = 0.
    abstol = 0.
    lwork_ = lwork if (lwork is not None) else (18 * n) - 1
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = 7 * n
    rwork_ = fw_asfortranarray(None, fwr_real_t_enum, 1, rwork_shape, False, True)
    iwork_shape[0] = 5 * n
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    m = iu - il + 1
    z_shape[0] = n; z_shape[1] = m
    z_ = fw_asfortranarray(z, fwc_complex_t_enum, 2, z_shape, False, True)
    ldz = n
    if not (z_shape[0] == ldz):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == ldz')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    if n != z_shape[0]:
        raise ValueError("(n == z.shape[0]) not satisifed")
    if m != z_shape[1]:
        raise ValueError("(m == z.shape[1]) not satisifed")
    ifail_shape[0] = n
    ifail_ = fw_asfortranarray(ifail, fwi_integer_t_enum, 1, ifail_shape, False, True)
    if n != ifail_shape[0]:
        raise ValueError("(n == ifail.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_range[0] = fw_aschar(range)
    if fw_range[0] == 0:
        raise ValueError("len(range) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.chegvx(&itype, fw_jobz, fw_range, fw_uplo, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &lda, <fwc_complex_t*>np.PyArray_DATA(b_), &ldb, &vl, &vu, &il, &iu, &abstol, &m, <fwr_real_t*>np.PyArray_DATA(w_), <fwc_complex_t*>np.PyArray_DATA(z_), &ldz, <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_real_t*>np.PyArray_DATA(rwork_), <fwi_integer_t*>np.PyArray_DATA(iwork_), <fwi_integer_t*>np.PyArray_DATA(ifail_), &info, 1, 1, 1)
    return (w_, z_, ifail_, info,)
def zhegvx(object a, object b, fwi_integer_t iu, fwi_integer_t itype=1, object jobz='V', object uplo='L', fwi_integer_t il=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object w=None, object z=None, object ifail=None):
    """zhegvx(a, b, iu[, itype, jobz, uplo, il, lwork, overwrite_a, overwrite_b, w, z, ifail]) -> (w, z, ifail, info)

    Parameters
    ----------
    a : fwc_complex_x16_t_, 2D array, dimension(n, n), intent in
    b : fwc_complex_x16_t_, 2D array, dimension(n, n), intent in
    iu : fwi_integer, intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    il : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwc_complex_x16_t_, 2D array, dimension(n, m), intent out
    ifail : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwc_complex_x16_t_, 2D array, dimension(n, m), intent out
    ifail : fwi_integer, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0], *fw_range = [0, 0]
    cdef fwi_integer_t lwork_, n, lda, ldb, m, ldz, info
    cdef np.ndarray a_, b_, w_, z_, ifail_, work_, rwork_, iwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], z_shape[2], ifail_shape[1], work_shape[1], rwork_shape[1], iwork_shape[1]
    cdef fwr_dbl_t vl, vu, abstol
    range = 'I'
    a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    vl = 0.
    vu = 0.
    abstol = 0.
    lwork_ = lwork if (lwork is not None) else (18 * n) - 1
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_x16_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = 7 * n
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    iwork_shape[0] = 5 * n
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    m = iu - il + 1
    z_shape[0] = n; z_shape[1] = m
    z_ = fw_asfortranarray(z, fwc_complex_x16_t_enum, 2, z_shape, False, True)
    ldz = n
    if not (z_shape[0] == ldz):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == ldz')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_x16_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    if n != z_shape[0]:
        raise ValueError("(n == z.shape[0]) not satisifed")
    if m != z_shape[1]:
        raise ValueError("(m == z.shape[1]) not satisifed")
    ifail_shape[0] = n
    ifail_ = fw_asfortranarray(ifail, fwi_integer_t_enum, 1, ifail_shape, False, True)
    if n != ifail_shape[0]:
        raise ValueError("(n == ifail.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_range[0] = fw_aschar(range)
    if fw_range[0] == 0:
        raise ValueError("len(range) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.zhegvx(&itype, fw_jobz, fw_range, fw_uplo, &n, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &lda, <fwc_complex_x16_t*>np.PyArray_DATA(b_), &ldb, &vl, &vu, &il, &iu, &abstol, &m, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwc_complex_x16_t*>np.PyArray_DATA(z_), &ldz, <fwc_complex_x16_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), <fwi_integer_t*>np.PyArray_DATA(iwork_), <fwi_integer_t*>np.PyArray_DATA(ifail_), &info, 1, 1, 1)
    return (w_, z_, ifail_, info,)

def cungqr(object a, object tau, object lwork=None, bint overwrite_a=False, object work=None):
    """cungqr(a, tau[, lwork, overwrite_a, work]) -> (a, work, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    tau : fwc_complex_t_, 1D array, dimension(k), intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, k, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_ = fw_asfortranarray(tau, fwc_complex_t_enum, 1, tau_shape, False, False)
    k = tau_shape[0]
    if not (0 <= k <= tau_shape[0]):
        raise ValueError("(0 <= k <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.cungqr(&m, &n, &k, <fwc_complex_t*>np.PyArray_DATA(a_), &m, <fwc_complex_t*>np.PyArray_DATA(tau_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, work_, info,)
def zungqr(object a, object tau, object lwork=None, bint overwrite_a=False, object work=None):
    """zungqr(a, tau[, lwork, overwrite_a, work]) -> (a, work, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    tau : fwc_dbl_complex_t_, 1D array, dimension(k), intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, k, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_ = fw_asfortranarray(tau, fwc_dbl_complex_t_enum, 1, tau_shape, False, False)
    k = tau_shape[0]
    if not (0 <= k <= tau_shape[0]):
        raise ValueError("(0 <= k <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.zungqr(&m, &n, &k, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, <fwc_dbl_complex_t*>np.PyArray_DATA(tau_), <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, work_, info,)

def cungrq(object a, object tau, object lwork=None, bint overwrite_a=False, object work=None):
    """cungrq(a, tau[, lwork, overwrite_a, work]) -> (a, work, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    tau : fwc_complex_t_, 1D array, dimension(k), intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, k, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_ = fw_asfortranarray(tau, fwc_complex_t_enum, 1, tau_shape, False, False)
    k = tau_shape[0]
    if not (0 <= k <= tau_shape[0]):
        raise ValueError("(0 <= k <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.cungrq(&m, &n, &k, <fwc_complex_t*>np.PyArray_DATA(a_), &m, <fwc_complex_t*>np.PyArray_DATA(tau_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, work_, info,)
def zungrq(object a, object tau, object lwork=None, bint overwrite_a=False, object work=None):
    """zungrq(a, tau[, lwork, overwrite_a, work]) -> (a, work, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    tau : fwc_dbl_complex_t_, 1D array, dimension(k), intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, k, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_ = fw_asfortranarray(tau, fwc_dbl_complex_t_enum, 1, tau_shape, False, False)
    k = tau_shape[0]
    if not (0 <= k <= tau_shape[0]):
        raise ValueError("(0 <= k <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.zungrq(&m, &n, &k, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, <fwc_dbl_complex_t*>np.PyArray_DATA(tau_), <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, work_, info,)

def dgeev(object a, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, object wr=None, object wi=None, object vl=None, object vr=None):
    """dgeev(a[, compute_vl, compute_vr, lwork, overwrite_a, wr, wi, vl, vr]) -> (wr, wi, vl, vr, info)

    Parameters
    ----------
    a : fwr_dbl, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    wr : fwr_dbl, 1D array, dimension(n), intent out
    wi : fwr_dbl, 1D array, dimension(n), intent out
    vl : fwr_dbl, 2D array, dimension(ldvl, n), intent out
    vr : fwr_dbl, 2D array, dimension(ldvr, n), intent out

    Returns
    -------
    wr : fwr_dbl, 1D array, dimension(n), intent out
    wi : fwr_dbl, 1D array, dimension(n), intent out
    vl : fwr_dbl, 2D array, dimension(ldvl, n), intent out
    vr : fwr_dbl, 2D array, dimension(ldvr, n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, wr_, wi_, vl_, vr_, work_
    cdef np.npy_intp a_shape[2], wr_shape[1], wi_shape[1], vl_shape[2], vr_shape[2], work_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 4 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not (lwork_ >= ((4 * n) if (compute_vl or compute_vr) else (3 * n))):
        raise ValueError('Condition on arguments not satisfied: lwork >= ((4 * n) if (compute_vl or compute_vr) else (3 * n))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    wr_shape[0] = n
    wr_ = fw_asfortranarray(wr, fwr_dbl_t_enum, 1, wr_shape, False, True)
    if n != wr_shape[0]:
        raise ValueError("(n == wr.shape[0]) not satisifed")
    wi_shape[0] = n
    wi_ = fw_asfortranarray(wi, fwr_dbl_t_enum, 1, wi_shape, False, True)
    if n != wi_shape[0]:
        raise ValueError("(n == wi.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if not (0 <= n <= vl_shape[1]):
        raise ValueError("(0 <= n <= vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwr_dbl_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if not (0 <= n <= vr_shape[1]):
        raise ValueError("(0 <= n <= vr.shape[1]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.dgeev(fw_jobvl_f, fw_jobvr_f, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(wr_), <fwr_dbl_t*>np.PyArray_DATA(wi_), <fwr_dbl_t*>np.PyArray_DATA(vl_), &ldvl, <fwr_dbl_t*>np.PyArray_DATA(vr_), &ldvr, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info, 1, 1)
    return (wr_, wi_, vl_, vr_, info,)


def dgegv(object a, object b, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object alphar=None, object alphai=None, object beta=None, object vl=None, object vr=None):
    """dgegv(a, b[, compute_vl, compute_vr, lwork, overwrite_a, overwrite_b, alphar, alphai, beta, vl, vr]) -> (alphar, alphai, beta, vl, vr, info)

    Parameters
    ----------
    a : fwr_dbl, 2D array, dimension(n, n), intent in
    b : fwr_dbl, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    alphar : fwr_dbl, 1D array, dimension(n), intent out
    alphai : fwr_dbl, 1D array, dimension(n), intent out
    beta : fwr_dbl, 1D array, dimension(n), intent out
    vl : fwr_dbl, 2D array, dimension(ldvl, n), intent out
    vr : fwr_dbl, 2D array, dimension(ldvr, n), intent out

    Returns
    -------
    alphar : fwr_dbl, 1D array, dimension(n), intent out
    alphai : fwr_dbl, 1D array, dimension(n), intent out
    beta : fwr_dbl, 1D array, dimension(n), intent out
    vl : fwr_dbl, 2D array, dimension(ldvl, n), intent out
    vr : fwr_dbl, 2D array, dimension(ldvr, n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, b_, alphar_, alphai_, beta_, vl_, vr_, work_
    cdef np.npy_intp a_shape[2], b_shape[2], alphar_shape[1], alphai_shape[1], beta_shape[1], vl_shape[2], vr_shape[2], work_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 8 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    info = 0
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((b_shape[0] == b_shape[1]) and (b_shape[0] == n)):
        raise ValueError('Condition on arguments not satisfied: (b.shape[0] == b.shape[1]) and (b.shape[0] == n)')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not (lwork_ >= (8 * n)):
        raise ValueError('Condition on arguments not satisfied: lwork >= (8 * n)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if n != b_shape[1]:
        raise ValueError("(n == b.shape[1]) not satisifed")
    alphar_shape[0] = n
    alphar_ = fw_asfortranarray(alphar, fwr_dbl_t_enum, 1, alphar_shape, False, True)
    if n != alphar_shape[0]:
        raise ValueError("(n == alphar.shape[0]) not satisifed")
    alphai_shape[0] = n
    alphai_ = fw_asfortranarray(alphai, fwr_dbl_t_enum, 1, alphai_shape, False, True)
    if n != alphai_shape[0]:
        raise ValueError("(n == alphai.shape[0]) not satisifed")
    beta_shape[0] = n
    beta_ = fw_asfortranarray(beta, fwr_dbl_t_enum, 1, beta_shape, False, True)
    if n != beta_shape[0]:
        raise ValueError("(n == beta.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if not (0 <= n <= vl_shape[1]):
        raise ValueError("(0 <= n <= vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwr_dbl_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if not (0 <= n <= vr_shape[1]):
        raise ValueError("(0 <= n <= vr.shape[1]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.dgegv(fw_jobvl_f, fw_jobvr_f, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(b_), &n, <fwr_dbl_t*>np.PyArray_DATA(alphar_), <fwr_dbl_t*>np.PyArray_DATA(alphai_), <fwr_dbl_t*>np.PyArray_DATA(beta_), <fwr_dbl_t*>np.PyArray_DATA(vl_), &ldvl, <fwr_dbl_t*>np.PyArray_DATA(vr_), &ldvr, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info, 1, 1)
    return (alphar_, alphai_, beta_, vl_, vr_, info,)


def dgelss(object a, object b, object cond=None, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object s=None):
    """dgelss(a, b[, cond, lwork, overwrite_a, overwrite_b, s]) -> (a, b, s, r, info)

    Parameters
    ----------
    a : fwr_dbl, 2D array, dimension(m, n), intent inout
    b : fwr_dbl, 2D array, dimension(maxmn, nrhs), intent inout
    cond : fwr_dbl, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    s : fwr_dbl, 1D array, dimension(minmn), intent out

    Returns
    -------
    a : fwr_dbl, 2D array, dimension(m, n), intent inout
    b : fwr_dbl, 2D array, dimension(maxmn, nrhs), intent inout
    s : fwr_dbl, 1D array, dimension(minmn), intent out
    r : fwi_integer, intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, minmn, maxmn, nrhs, r, info
    cdef fwr_dbl_t cond_
    cdef np.ndarray a_, b_, s_, work_
    cdef np.npy_intp a_shape[2], b_shape[2], s_shape[1], work_shape[1]
    r = 0
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    maxmn = max(m, n)
    minmn = min(m, n)
    cond_ = cond if (cond is not None) else -1.0
    lwork_ = lwork if (lwork is not None) else (3 * minmn) + max((2 * minmn), max(maxmn, nrhs))
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    info = 0
    if not (maxmn == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: maxmn == b.shape[0]')
    if not (lwork_ >= 1):
        raise ValueError('Condition on arguments not satisfied: lwork >= 1')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if maxmn != b_shape[0]:
        raise ValueError("(maxmn == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    s_shape[0] = minmn
    s_ = fw_asfortranarray(s, fwr_dbl_t_enum, 1, s_shape, False, True)
    if minmn != s_shape[0]:
        raise ValueError("(minmn == s.shape[0]) not satisifed")
    fc.dgelss(&m, &n, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, <fwr_dbl_t*>np.PyArray_DATA(b_), &maxmn, <fwr_dbl_t*>np.PyArray_DATA(s_), &cond_, &r, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, b_, s_, r, info,)


def dgesdd(object a, fwi_integer_t compute_uv=1, object lwork=None, bint overwrite_a=False, object u=None, object s=None, object vt=None):
    """dgesdd(a[, compute_uv, lwork, overwrite_a, u, s, vt]) -> (u, s, vt, info)

    Parameters
    ----------
    a : fwr_dbl, 2D array, dimension(m, n), intent in
    compute_uv : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    u : fwr_dbl, 2D array, dimension(du, du), intent out
    s : fwr_dbl, 1D array, dimension(minmn), intent out
    vt : fwr_dbl, 2D array, dimension(dvt, dvt), intent out

    Returns
    -------
    u : fwr_dbl, 2D array, dimension(du, du), intent out
    s : fwr_dbl, 1D array, dimension(minmn), intent out
    vt : fwr_dbl, 2D array, dimension(dvt, dvt), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0]
    cdef fwi_integer_t lwork_, m, n, minmn, du, dvt, info
    cdef np.ndarray a_, u_, s_, vt_, work_, iwork_
    cdef np.npy_intp a_shape[2], u_shape[2], s_shape[1], vt_shape[2], work_shape[1], iwork_shape[1]
    jobz_f = "A" if compute_uv else "N"
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    m = a_shape[0]
    n = a_shape[1]
    minmn = min(m, n)
    lwork_ = lwork if (lwork is not None) else ((4 * minmn * minmn) + max(m, n) + (9 * minmn)) if compute_uv else (max(((14 * minmn) + 4), ((10 * minmn) + 2 + (25 * (25 + 8)))) + max(m, n))
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    iwork_shape[0] = 8 * minmn
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    if not ((compute_uv == 0) or (compute_uv == 1)):
        raise ValueError('Condition on arguments not satisfied: (compute_uv == 0) or (compute_uv == 1)')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    du = m if compute_uv else 1
    u_shape[0] = du; u_shape[1] = du
    u_ = fw_asfortranarray(u, fwr_dbl_t_enum, 2, u_shape, False, True)
    if du != u_shape[0]:
        raise ValueError("(du == u.shape[0]) not satisifed")
    if du != u_shape[1]:
        raise ValueError("(du == u.shape[1]) not satisifed")
    s_shape[0] = minmn
    s_ = fw_asfortranarray(s, fwr_dbl_t_enum, 1, s_shape, False, True)
    if minmn != s_shape[0]:
        raise ValueError("(minmn == s.shape[0]) not satisifed")
    dvt = n if compute_uv else 1
    vt_shape[0] = dvt; vt_shape[1] = dvt
    vt_ = fw_asfortranarray(vt, fwr_dbl_t_enum, 2, vt_shape, False, True)
    if dvt != vt_shape[0]:
        raise ValueError("(dvt == vt.shape[0]) not satisifed")
    if dvt != vt_shape[1]:
        raise ValueError("(dvt == vt.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fc.dgesdd(fw_jobz_f, &m, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, <fwr_dbl_t*>np.PyArray_DATA(s_), <fwr_dbl_t*>np.PyArray_DATA(u_), &du, <fwr_dbl_t*>np.PyArray_DATA(vt_), &dvt, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), &info, 1)
    return (u_, s_, vt_, info,)


def dggev(object a, object b, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object alphar=None, object alphai=None, object beta=None, object vl=None, object vr=None, object work=None):
    """dggev(a, b[, compute_vl, compute_vr, lwork, overwrite_a, overwrite_b, alphar, alphai, beta, vl, vr, work]) -> (alphar, alphai, beta, vl, vr, work, info)

    Parameters
    ----------
    a : fwr_dbl, 2D array, dimension(n, n), intent in
    b : fwr_dbl, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    alphar : fwr_dbl, 1D array, dimension(n), intent out
    alphai : fwr_dbl, 1D array, dimension(n), intent out
    beta : fwr_dbl, 1D array, dimension(n), intent out
    vl : fwr_dbl, 2D array, dimension(ldvl, n), intent out
    vr : fwr_dbl, 2D array, dimension(ldvr, n), intent out
    work : fwr_dbl, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    alphar : fwr_dbl, 1D array, dimension(n), intent out
    alphai : fwr_dbl, 1D array, dimension(n), intent out
    beta : fwr_dbl, 1D array, dimension(n), intent out
    vl : fwr_dbl, 2D array, dimension(ldvl, n), intent out
    vr : fwr_dbl, 2D array, dimension(ldvr, n), intent out
    work : fwr_dbl, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, b_, alphar_, alphai_, beta_, vl_, vr_, work_
    cdef np.npy_intp a_shape[2], b_shape[2], alphar_shape[1], alphai_shape[1], beta_shape[1], vl_shape[2], vr_shape[2], work_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 8 * n
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (b_shape[0] == b_shape[1]):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == b.shape[1]')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not ((lwork_ == -1) or (lwork_ >= max(1, (8 * n)))):
        raise ValueError('Condition on arguments not satisfied: (lwork == -1) or (lwork >= max(1, (8 * n)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    alphar_shape[0] = n
    alphar_ = fw_asfortranarray(alphar, fwr_dbl_t_enum, 1, alphar_shape, False, True)
    if n != alphar_shape[0]:
        raise ValueError("(n == alphar.shape[0]) not satisifed")
    alphai_shape[0] = n
    alphai_ = fw_asfortranarray(alphai, fwr_dbl_t_enum, 1, alphai_shape, False, True)
    if n != alphai_shape[0]:
        raise ValueError("(n == alphai.shape[0]) not satisifed")
    beta_shape[0] = n
    beta_ = fw_asfortranarray(beta, fwr_dbl_t_enum, 1, beta_shape, False, True)
    if n != beta_shape[0]:
        raise ValueError("(n == beta.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if n != vl_shape[1]:
        raise ValueError("(n == vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwr_dbl_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if n != vr_shape[1]:
        raise ValueError("(n == vr.shape[1]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.dggev(fw_jobvl_f, fw_jobvr_f, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(b_), &n, <fwr_dbl_t*>np.PyArray_DATA(alphar_), <fwr_dbl_t*>np.PyArray_DATA(alphai_), <fwr_dbl_t*>np.PyArray_DATA(beta_), <fwr_dbl_t*>np.PyArray_DATA(vl_), &ldvl, <fwr_dbl_t*>np.PyArray_DATA(vr_), &ldvr, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info, 1, 1)
    return (alphar_, alphai_, beta_, vl_, vr_, work_, info,)

def sgbsv(fwi_integer_t kl, fwi_integer_t ku, object ab, object b, bint overwrite_ab=False, bint overwrite_b=False, object piv=None):
    """sgbsv(kl, ku, ab, b[, overwrite_ab, overwrite_b, piv]) -> (ab, piv, b, info)

    Parameters
    ----------
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    ab : fwr_real_t_, 2D array, dimension(2*kl+ku+1, n), intent inout
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    overwrite_ab : bint_, intent in
    overwrite_b : bint_, intent in
    piv : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    ab : fwr_real_t_, 2D array, dimension(2*kl+ku+1, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent out
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nrhs, ldab_f, info
    cdef np.ndarray ab_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp ab_shape[2], b_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, not overwrite_ab, False)
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    if not (((2 * kl) + ku + 1) == ab_shape[0]):
        raise ValueError('Condition on arguments not satisfied: ((2 * kl) + ku + 1) == ab.shape[0]')
    if not (ab_shape[1] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: ab.shape[1] == b.shape[0]')
    n = ab_shape[1]
    if (2 * kl) + ku + 1 != ab_shape[0]:
        raise ValueError("((2 * kl) + ku + 1 == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    piv_shape[0] = n
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    ldab_f = 2*kl+ku+1
    fc.sgbsv(&n, &kl, &ku, &nrhs, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_f, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwr_real_t*>np.PyArray_DATA(b_), &n, &info)
    for i in range(0, piv_shape[0]):
        piv_[i] -= 1
    return (ab_, piv_, b_, info,)
def dgbsv(fwi_integer_t kl, fwi_integer_t ku, object ab, object b, bint overwrite_ab=False, bint overwrite_b=False, object piv=None):
    """dgbsv(kl, ku, ab, b[, overwrite_ab, overwrite_b, piv]) -> (ab, piv, b, info)

    Parameters
    ----------
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    ab : fwr_dbl_t_, 2D array, dimension(2*kl+ku+1, n), intent inout
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    overwrite_ab : bint_, intent in
    overwrite_b : bint_, intent in
    piv : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    ab : fwr_dbl_t_, 2D array, dimension(2*kl+ku+1, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent out
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nrhs, ldab_f, info
    cdef np.ndarray ab_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp ab_shape[2], b_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, not overwrite_ab, False)
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    if not (((2 * kl) + ku + 1) == ab_shape[0]):
        raise ValueError('Condition on arguments not satisfied: ((2 * kl) + ku + 1) == ab.shape[0]')
    if not (ab_shape[1] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: ab.shape[1] == b.shape[0]')
    n = ab_shape[1]
    if (2 * kl) + ku + 1 != ab_shape[0]:
        raise ValueError("((2 * kl) + ku + 1 == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    piv_shape[0] = n
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    ldab_f = 2*kl+ku+1
    fc.dgbsv(&n, &kl, &ku, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_f, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwr_dbl_t*>np.PyArray_DATA(b_), &n, &info)
    for i in range(0, piv_shape[0]):
        piv_[i] -= 1
    return (ab_, piv_, b_, info,)
def cgbsv(fwi_integer_t kl, fwi_integer_t ku, object ab, object b, bint overwrite_ab=False, bint overwrite_b=False, object piv=None):
    """cgbsv(kl, ku, ab, b[, overwrite_ab, overwrite_b, piv]) -> (ab, piv, b, info)

    Parameters
    ----------
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    ab : fwc_complex_t_, 2D array, dimension(2*kl+ku+1, n), intent inout
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    overwrite_ab : bint_, intent in
    overwrite_b : bint_, intent in
    piv : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    ab : fwc_complex_t_, 2D array, dimension(2*kl+ku+1, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent out
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nrhs, ldab_f, info
    cdef np.ndarray ab_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp ab_shape[2], b_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    ab_ = fw_asfortranarray(ab, fwc_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (((2 * kl) + ku + 1) == ab_shape[0]):
        raise ValueError('Condition on arguments not satisfied: ((2 * kl) + ku + 1) == ab.shape[0]')
    if not (ab_shape[1] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: ab.shape[1] == b.shape[0]')
    n = ab_shape[1]
    if (2 * kl) + ku + 1 != ab_shape[0]:
        raise ValueError("((2 * kl) + ku + 1 == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    piv_shape[0] = n
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    ldab_f = 2*kl+ku+1
    fc.cgbsv(&n, &kl, &ku, &nrhs, <fwc_complex_t*>np.PyArray_DATA(ab_), &ldab_f, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwc_complex_t*>np.PyArray_DATA(b_), &n, &info)
    for i in range(0, piv_shape[0]):
        piv_[i] -= 1
    return (ab_, piv_, b_, info,)
def zgbsv(fwi_integer_t kl, fwi_integer_t ku, object ab, object b, bint overwrite_ab=False, bint overwrite_b=False, object piv=None):
    """zgbsv(kl, ku, ab, b[, overwrite_ab, overwrite_b, piv]) -> (ab, piv, b, info)

    Parameters
    ----------
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    ab : fwc_dbl_complex_t_, 2D array, dimension(2*kl+ku+1, n), intent inout
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    overwrite_ab : bint_, intent in
    overwrite_b : bint_, intent in
    piv : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    ab : fwc_dbl_complex_t_, 2D array, dimension(2*kl+ku+1, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent out
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nrhs, ldab_f, info
    cdef np.ndarray ab_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp ab_shape[2], b_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    ab_ = fw_asfortranarray(ab, fwc_dbl_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (((2 * kl) + ku + 1) == ab_shape[0]):
        raise ValueError('Condition on arguments not satisfied: ((2 * kl) + ku + 1) == ab.shape[0]')
    if not (ab_shape[1] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: ab.shape[1] == b.shape[0]')
    n = ab_shape[1]
    if (2 * kl) + ku + 1 != ab_shape[0]:
        raise ValueError("((2 * kl) + ku + 1 == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    piv_shape[0] = n
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    ldab_f = 2*kl+ku+1
    fc.zgbsv(&n, &kl, &ku, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(ab_), &ldab_f, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &n, &info)
    for i in range(0, piv_shape[0]):
        piv_[i] -= 1
    return (ab_, piv_, b_, info,)

def sgbtrf(object ab, fwi_integer_t kl, fwi_integer_t ku, object m=None, object n=None, object ldab=None, bint overwrite_ab=False, object ipiv=None):
    """sgbtrf(ab, kl, ku[, m, n, ldab, overwrite_ab, ipiv]) -> (ab, ipiv, info)

    Parameters
    ----------
    ab : fwr_real_t_, 2D array, dimension(ldab, *), intent inout
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    ipiv : fwi_integer, 1D array, dimension(min(m,n)), intent out

    Returns
    -------
    ab : fwr_real_t_, 2D array, dimension(ldab, *), intent inout
    ipiv : fwi_integer, 1D array, dimension(min(m,n)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m_, n_, ldab_, info
    cdef np.ndarray ab_
    cdef np.ndarray[int, ndim=1, mode='fortran'] ipiv_
    cdef np.npy_intp ab_shape[2], ipiv_shape[1]
    cdef Py_ssize_t i
    info = 0
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, not overwrite_ab, False)
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    m_ = m if (m is not None) else ab_shape[1]
    n_ = n if (n is not None) else ab_shape[1]
    ipiv_shape[0] = min(m_, n_)
    ipiv_ = fw_asfortranarray(ipiv, fwi_integer_t_enum, 1, ipiv_shape, False, True)
    if min(m_, n_) != ipiv_shape[0]:
        raise ValueError("(min(m, n) == ipiv.shape[0]) not satisifed")
    fc.sgbtrf(&m_, &n_, &kl, &ku, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_, <fwi_integer_t*>np.PyArray_DATA(ipiv_), &info)
    for i in range(ipiv_shape[0]):
        ipiv_[i] -= 1
    return (ab_, ipiv_, info,)
def dgbtrf(object ab, fwi_integer_t kl, fwi_integer_t ku, object m=None, object n=None, object ldab=None, bint overwrite_ab=False, object ipiv=None):
    """dgbtrf(ab, kl, ku[, m, n, ldab, overwrite_ab, ipiv]) -> (ab, ipiv, info)

    Parameters
    ----------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, *), intent inout
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    ipiv : fwi_integer, 1D array, dimension(min(m,n)), intent out

    Returns
    -------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, *), intent inout
    ipiv : fwi_integer, 1D array, dimension(min(m,n)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m_, n_, ldab_, info
    cdef np.ndarray ab_
    cdef np.ndarray[int, ndim=1, mode='fortran'] ipiv_
    cdef np.npy_intp ab_shape[2], ipiv_shape[1]
    cdef Py_ssize_t i
    info = 0
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, not overwrite_ab, False)
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    m_ = m if (m is not None) else ab_shape[1]
    n_ = n if (n is not None) else ab_shape[1]
    ipiv_shape[0] = min(m_, n_)
    ipiv_ = fw_asfortranarray(ipiv, fwi_integer_t_enum, 1, ipiv_shape, False, True)
    if min(m_, n_) != ipiv_shape[0]:
        raise ValueError("(min(m, n) == ipiv.shape[0]) not satisifed")
    fc.dgbtrf(&m_, &n_, &kl, &ku, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_, <fwi_integer_t*>np.PyArray_DATA(ipiv_), &info)
    for i in range(ipiv_shape[0]):
        ipiv_[i] -= 1
    return (ab_, ipiv_, info,)
def cgbtrf(object ab, fwi_integer_t kl, fwi_integer_t ku, object m=None, object n=None, object ldab=None, bint overwrite_ab=False, object ipiv=None):
    """cgbtrf(ab, kl, ku[, m, n, ldab, overwrite_ab, ipiv]) -> (ab, ipiv, info)

    Parameters
    ----------
    ab : fwc_complex_t_, 2D array, dimension(ldab, *), intent inout
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    ipiv : fwi_integer, 1D array, dimension(min(m,n)), intent out

    Returns
    -------
    ab : fwc_complex_t_, 2D array, dimension(ldab, *), intent inout
    ipiv : fwi_integer, 1D array, dimension(min(m,n)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m_, n_, ldab_, info
    cdef np.ndarray ab_
    cdef np.ndarray[int, ndim=1, mode='fortran'] ipiv_
    cdef np.npy_intp ab_shape[2], ipiv_shape[1]
    cdef Py_ssize_t i
    info = 0
    ab_ = fw_asfortranarray(ab, fwc_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    m_ = m if (m is not None) else ab_shape[1]
    n_ = n if (n is not None) else ab_shape[1]
    ipiv_shape[0] = min(m_, n_)
    ipiv_ = fw_asfortranarray(ipiv, fwi_integer_t_enum, 1, ipiv_shape, False, True)
    if min(m_, n_) != ipiv_shape[0]:
        raise ValueError("(min(m, n) == ipiv.shape[0]) not satisifed")
    fc.cgbtrf(&m_, &n_, &kl, &ku, <fwc_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwi_integer_t*>np.PyArray_DATA(ipiv_), &info)
    for i in range(ipiv_shape[0]):
        ipiv_[i] -= 1
    return (ab_, ipiv_, info,)
def zgbtrf(object ab, fwi_integer_t kl, fwi_integer_t ku, object m=None, object n=None, object ldab=None, bint overwrite_ab=False, object ipiv=None):
    """zgbtrf(ab, kl, ku[, m, n, ldab, overwrite_ab, ipiv]) -> (ab, ipiv, info)

    Parameters
    ----------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, *), intent inout
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    ipiv : fwi_integer, 1D array, dimension(min(m,n)), intent out

    Returns
    -------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, *), intent inout
    ipiv : fwi_integer, 1D array, dimension(min(m,n)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m_, n_, ldab_, info
    cdef np.ndarray ab_
    cdef np.ndarray[int, ndim=1, mode='fortran'] ipiv_
    cdef np.npy_intp ab_shape[2], ipiv_shape[1]
    cdef Py_ssize_t i
    info = 0
    ab_ = fw_asfortranarray(ab, fwc_dbl_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    m_ = m if (m is not None) else ab_shape[1]
    n_ = n if (n is not None) else ab_shape[1]
    ipiv_shape[0] = min(m_, n_)
    ipiv_ = fw_asfortranarray(ipiv, fwi_integer_t_enum, 1, ipiv_shape, False, True)
    if min(m_, n_) != ipiv_shape[0]:
        raise ValueError("(min(m, n) == ipiv.shape[0]) not satisifed")
    fc.zgbtrf(&m_, &n_, &kl, &ku, <fwc_dbl_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwi_integer_t*>np.PyArray_DATA(ipiv_), &info)
    for i in range(ipiv_shape[0]):
        ipiv_[i] -= 1
    return (ab_, ipiv_, info,)

def sgbtrs(object ab, fwi_integer_t kl, fwi_integer_t ku, object b, object ipiv, fwi_integer_t trans=0, object n=None, object ldab=None, object ldb=None, bint overwrite_b=False):
    """sgbtrs(ab, kl, ku, b, ipiv[, trans, n, ldab, ldb, overwrite_b]) -> (b, info)

    Parameters
    ----------
    ab : fwr_real_t_, 2D array, dimension(ldab, *), intent in
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    b : fwr_real_t_, 2D array, dimension(ldb, *), intent inout
    ipiv : fwi_integer, 1D array, dimension(n), intent in
    trans : fwi_integer, intent in
    n : fwi_integer, intent in
    ldab : fwi_integer, intent in
    ldb : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_real_t_, 2D array, dimension(ldb, *), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t n_, ldab_, ldb_, nrhs, info
    cdef np.ndarray ab_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] ipiv_
    cdef np.npy_intp ab_shape[2], b_shape[2], ipiv_shape[1]
    cdef Py_ssize_t i
    trans_f = ("T" if (trans == 1) else "C") if (trans > 0) else "N"
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    info = 0
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, False, False)
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    ldb_ = ldb if (ldb is not None) else b_shape[0]
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not (b_shape[0] == ldb_):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == ldb')
    if not (b_shape[0] == ldb_):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == ldb')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if ldb_ != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    ipiv_ = fw_asfortranarray(ipiv, fwi_integer_t_enum, 1, ipiv_shape, False, False)
    n_ = n if (n is not None) else ab_shape[1]
    if not (0 <= n_ <= ipiv_shape[0]):
        raise ValueError("(0 <= n <= ipiv.shape[0]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    for i in range(ipiv_shape[0]):
        ipiv_[i] += 1
    fc.sgbtrs(fw_trans_f, &n_, &kl, &ku, &nrhs, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_, <fwi_integer_t*>np.PyArray_DATA(ipiv_), <fwr_real_t*>np.PyArray_DATA(b_), &ldb_, &info, 1)
    for i in range(ipiv_shape[0]):
        ipiv_[i] -= 1
    return (b_, info,)
def dgbtrs(object ab, fwi_integer_t kl, fwi_integer_t ku, object b, object ipiv, fwi_integer_t trans=0, object n=None, object ldab=None, object ldb=None, bint overwrite_b=False):
    """dgbtrs(ab, kl, ku, b, ipiv[, trans, n, ldab, ldb, overwrite_b]) -> (b, info)

    Parameters
    ----------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, *), intent in
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    b : fwr_dbl_t_, 2D array, dimension(ldb, *), intent inout
    ipiv : fwi_integer, 1D array, dimension(n), intent in
    trans : fwi_integer, intent in
    n : fwi_integer, intent in
    ldab : fwi_integer, intent in
    ldb : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_dbl_t_, 2D array, dimension(ldb, *), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t n_, ldab_, ldb_, nrhs, info
    cdef np.ndarray ab_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] ipiv_
    cdef np.npy_intp ab_shape[2], b_shape[2], ipiv_shape[1]
    cdef Py_ssize_t i
    trans_f = ("T" if (trans == 1) else "C") if (trans > 0) else "N"
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    info = 0
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, False, False)
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    ldb_ = ldb if (ldb is not None) else b_shape[0]
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not (b_shape[0] == ldb_):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == ldb')
    if not (b_shape[0] == ldb_):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == ldb')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if ldb_ != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    ipiv_ = fw_asfortranarray(ipiv, fwi_integer_t_enum, 1, ipiv_shape, False, False)
    n_ = n if (n is not None) else ab_shape[1]
    if not (0 <= n_ <= ipiv_shape[0]):
        raise ValueError("(0 <= n <= ipiv.shape[0]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    for i in range(ipiv_shape[0]):
        ipiv_[i] += 1
    fc.dgbtrs(fw_trans_f, &n_, &kl, &ku, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_, <fwi_integer_t*>np.PyArray_DATA(ipiv_), <fwr_dbl_t*>np.PyArray_DATA(b_), &ldb_, &info, 1)
    for i in range(ipiv_shape[0]):
        ipiv_[i] -= 1
    return (b_, info,)
def cgbtrs(object ab, fwi_integer_t kl, fwi_integer_t ku, object b, object ipiv, fwi_integer_t trans=0, object n=None, object ldab=None, object ldb=None, bint overwrite_b=False):
    """cgbtrs(ab, kl, ku, b, ipiv[, trans, n, ldab, ldb, overwrite_b]) -> (b, info)

    Parameters
    ----------
    ab : fwc_complex_t_, 2D array, dimension(ldab, *), intent in
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    b : fwc_complex_t_, 2D array, dimension(ldb, *), intent inout
    ipiv : fwi_integer, 1D array, dimension(n), intent in
    trans : fwi_integer, intent in
    n : fwi_integer, intent in
    ldab : fwi_integer, intent in
    ldb : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_complex_t_, 2D array, dimension(ldb, *), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t n_, ldab_, ldb_, nrhs, info
    cdef np.ndarray ab_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] ipiv_
    cdef np.npy_intp ab_shape[2], b_shape[2], ipiv_shape[1]
    cdef Py_ssize_t i
    trans_f = ("T" if (trans == 1) else "C") if (trans > 0) else "N"
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    info = 0
    ab_ = fw_asfortranarray(ab, fwc_complex_t_enum, 2, ab_shape, False, False)
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    ldb_ = ldb if (ldb is not None) else b_shape[0]
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not (b_shape[0] == ldb_):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == ldb')
    if not (b_shape[0] == ldb_):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == ldb')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if ldb_ != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    ipiv_ = fw_asfortranarray(ipiv, fwi_integer_t_enum, 1, ipiv_shape, False, False)
    n_ = n if (n is not None) else ab_shape[1]
    if not (0 <= n_ <= ipiv_shape[0]):
        raise ValueError("(0 <= n <= ipiv.shape[0]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    for i in range(ipiv_shape[0]):
        ipiv_[i] += 1
    fc.cgbtrs(fw_trans_f, &n_, &kl, &ku, &nrhs, <fwc_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwi_integer_t*>np.PyArray_DATA(ipiv_), <fwc_complex_t*>np.PyArray_DATA(b_), &ldb_, &info, 1)
    for i in range(ipiv_shape[0]):
        ipiv_[i] -= 1
    return (b_, info,)
def zgbtrs(object ab, fwi_integer_t kl, fwi_integer_t ku, object b, object ipiv, fwi_integer_t trans=0, object n=None, object ldab=None, object ldb=None, bint overwrite_b=False):
    """zgbtrs(ab, kl, ku, b, ipiv[, trans, n, ldab, ldb, overwrite_b]) -> (b, info)

    Parameters
    ----------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, *), intent in
    kl : fwi_integer, intent in
    ku : fwi_integer, intent in
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, *), intent inout
    ipiv : fwi_integer, 1D array, dimension(n), intent in
    trans : fwi_integer, intent in
    n : fwi_integer, intent in
    ldab : fwi_integer, intent in
    ldb : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, *), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t n_, ldab_, ldb_, nrhs, info
    cdef np.ndarray ab_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] ipiv_
    cdef np.npy_intp ab_shape[2], b_shape[2], ipiv_shape[1]
    cdef Py_ssize_t i
    trans_f = ("T" if (trans == 1) else "C") if (trans > 0) else "N"
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    info = 0
    ab_ = fw_asfortranarray(ab, fwc_dbl_complex_t_enum, 2, ab_shape, False, False)
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    ldb_ = ldb if (ldb is not None) else b_shape[0]
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not (b_shape[0] == ldb_):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == ldb')
    if not (b_shape[0] == ldb_):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == ldb')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if ldb_ != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    ipiv_ = fw_asfortranarray(ipiv, fwi_integer_t_enum, 1, ipiv_shape, False, False)
    n_ = n if (n is not None) else ab_shape[1]
    if not (0 <= n_ <= ipiv_shape[0]):
        raise ValueError("(0 <= n <= ipiv.shape[0]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    for i in range(ipiv_shape[0]):
        ipiv_[i] += 1
    fc.zgbtrs(fw_trans_f, &n_, &kl, &ku, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwi_integer_t*>np.PyArray_DATA(ipiv_), <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &ldb_, &info, 1)
    for i in range(ipiv_shape[0]):
        ipiv_[i] -= 1
    return (b_, info,)

def sgebal(object a, fwi_integer_t scale=0, fwi_integer_t permute=0, bint overwrite_a=False, object pivscale=None):
    """sgebal(a[, scale, permute, overwrite_a, pivscale]) -> (a, lo, hi, pivscale, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    scale : fwi_integer, intent in
    permute : fwi_integer, intent in
    overwrite_a : bint_, intent in
    pivscale : fwr_real_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    lo : fwi_integer, intent out
    hi : fwi_integer, intent out
    pivscale : fwr_real_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_job_f = [0, 0]
    cdef fwi_integer_t n, m, lo, hi, info
    cdef np.ndarray a_, pivscale_
    cdef np.npy_intp a_shape[2], pivscale_shape[1]
    job_f = ("B" if scale else "P") if permute else ("S" if scale else "N")
    lo = 0
    hi = 0
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    m = a_shape[0]
    if not (m >= n):
        raise ValueError('Condition on arguments not satisfied: m >= n')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    pivscale_shape[0] = n
    pivscale_ = fw_asfortranarray(pivscale, fwr_real_t_enum, 1, pivscale_shape, False, True)
    if n != pivscale_shape[0]:
        raise ValueError("(n == pivscale.shape[0]) not satisifed")
    fw_job_f[0] = fw_aschar(job_f)
    if fw_job_f[0] == 0:
        raise ValueError("len(job_f) != 1")
    fc.sgebal(fw_job_f, &n, <fwr_real_t*>np.PyArray_DATA(a_), &m, &lo, &hi, <fwr_real_t*>np.PyArray_DATA(pivscale_), &info, 1)
    hi -= 1
    lo -= 1
    return (a_, lo, hi, pivscale_, info,)
def dgebal(object a, fwi_integer_t scale=0, fwi_integer_t permute=0, bint overwrite_a=False, object pivscale=None):
    """dgebal(a[, scale, permute, overwrite_a, pivscale]) -> (a, lo, hi, pivscale, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    scale : fwi_integer, intent in
    permute : fwi_integer, intent in
    overwrite_a : bint_, intent in
    pivscale : fwr_dbl_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    lo : fwi_integer, intent out
    hi : fwi_integer, intent out
    pivscale : fwr_dbl_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_job_f = [0, 0]
    cdef fwi_integer_t n, m, lo, hi, info
    cdef np.ndarray a_, pivscale_
    cdef np.npy_intp a_shape[2], pivscale_shape[1]
    job_f = ("B" if scale else "P") if permute else ("S" if scale else "N")
    lo = 0
    hi = 0
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    m = a_shape[0]
    if not (m >= n):
        raise ValueError('Condition on arguments not satisfied: m >= n')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    pivscale_shape[0] = n
    pivscale_ = fw_asfortranarray(pivscale, fwr_dbl_t_enum, 1, pivscale_shape, False, True)
    if n != pivscale_shape[0]:
        raise ValueError("(n == pivscale.shape[0]) not satisifed")
    fw_job_f[0] = fw_aschar(job_f)
    if fw_job_f[0] == 0:
        raise ValueError("len(job_f) != 1")
    fc.dgebal(fw_job_f, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, &lo, &hi, <fwr_dbl_t*>np.PyArray_DATA(pivscale_), &info, 1)
    hi -= 1
    lo -= 1
    return (a_, lo, hi, pivscale_, info,)
def cgebal(object a, fwi_integer_t scale=0, fwi_integer_t permute=0, bint overwrite_a=False, object pivscale=None):
    """cgebal(a[, scale, permute, overwrite_a, pivscale]) -> (a, lo, hi, pivscale, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    scale : fwi_integer, intent in
    permute : fwi_integer, intent in
    overwrite_a : bint_, intent in
    pivscale : fwr_real_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    lo : fwi_integer, intent out
    hi : fwi_integer, intent out
    pivscale : fwr_real_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_job_f = [0, 0]
    cdef fwi_integer_t n, m, lo, hi, info
    cdef np.ndarray a_, pivscale_
    cdef np.npy_intp a_shape[2], pivscale_shape[1]
    job_f = ("B" if scale else "P") if permute else ("S" if scale else "N")
    lo = 0
    hi = 0
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    m = a_shape[0]
    if not (m >= n):
        raise ValueError('Condition on arguments not satisfied: m >= n')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    pivscale_shape[0] = n
    pivscale_ = fw_asfortranarray(pivscale, fwr_real_t_enum, 1, pivscale_shape, False, True)
    if n != pivscale_shape[0]:
        raise ValueError("(n == pivscale.shape[0]) not satisifed")
    fw_job_f[0] = fw_aschar(job_f)
    if fw_job_f[0] == 0:
        raise ValueError("len(job_f) != 1")
    fc.cgebal(fw_job_f, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &m, &lo, &hi, <fwr_real_t*>np.PyArray_DATA(pivscale_), &info, 1)
    hi -= 1
    lo -= 1
    return (a_, lo, hi, pivscale_, info,)
def zgebal(object a, fwi_integer_t scale=0, fwi_integer_t permute=0, bint overwrite_a=False, object pivscale=None):
    """zgebal(a[, scale, permute, overwrite_a, pivscale]) -> (a, lo, hi, pivscale, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    scale : fwi_integer, intent in
    permute : fwi_integer, intent in
    overwrite_a : bint_, intent in
    pivscale : fwr_dbl_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    lo : fwi_integer, intent out
    hi : fwi_integer, intent out
    pivscale : fwr_dbl_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_job_f = [0, 0]
    cdef fwi_integer_t n, m, lo, hi, info
    cdef np.ndarray a_, pivscale_
    cdef np.npy_intp a_shape[2], pivscale_shape[1]
    job_f = ("B" if scale else "P") if permute else ("S" if scale else "N")
    lo = 0
    hi = 0
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    m = a_shape[0]
    if not (m >= n):
        raise ValueError('Condition on arguments not satisfied: m >= n')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    pivscale_shape[0] = n
    pivscale_ = fw_asfortranarray(pivscale, fwr_dbl_t_enum, 1, pivscale_shape, False, True)
    if n != pivscale_shape[0]:
        raise ValueError("(n == pivscale.shape[0]) not satisifed")
    fw_job_f[0] = fw_aschar(job_f)
    if fw_job_f[0] == 0:
        raise ValueError("len(job_f) != 1")
    fc.zgebal(fw_job_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, &lo, &hi, <fwr_dbl_t*>np.PyArray_DATA(pivscale_), &info, 1)
    hi -= 1
    lo -= 1
    return (a_, lo, hi, pivscale_, info,)

def sgees(object select, object a, fwi_integer_t compute_v=1, fwi_integer_t sort_t=0, object lwork=None, bint overwrite_a=False, object wr=None, object wi=None, object vs=None, object work=None):
    """sgees(select, a[, compute_v, sort_t, lwork, overwrite_a, wr, wi, vs, work]) -> (a, sdim, wr, wi, vs, work, info)

    Parameters
    ----------
    select : callback function
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    compute_v : fwi_integer, intent in
    sort_t : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    wr : fwr_real_t_, 1D array, dimension(n), intent out
    wi : fwr_real_t_, 1D array, dimension(n), intent out
    vs : fwr_real_t_, 2D array, dimension(ldvs, n), intent out
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    sdim : fwi_integer, intent out
    wr : fwr_real_t_, 1D array, dimension(n), intent out
    wi : fwr_real_t_, 1D array, dimension(n), intent out
    vs : fwr_real_t_, 2D array, dimension(ldvs, n), intent out
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvs_f = [0, 0], *fw_sort_f = [0, 0]
    cdef fwi_integer_t lwork_, n, nrows, ldvs, sdim, info
    cdef np.ndarray a_, wr_, wi_, vs_, work_, bwork_
    cdef np.npy_intp a_shape[2], wr_shape[1], wi_shape[1], vs_shape[2], work_shape[1], bwork_shape[1]
    cdef fwl_logical_t select_f
    jobvs_f = "V" if compute_v else "N"
    sort_f = "S" if sort_t else "N"
    if sort_t:
        raise NotImplementedError('select callback not yet implemented')    
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    nrows = a_shape[0]
    sdim = 0
    n = a_shape[1]
    bwork_shape[0] = n
    bwork_ = fw_asfortranarray(None, fwl_logical_t_enum, 1, bwork_shape, False, True)
    info = 0
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_v == 0) or (compute_v == 1)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 0) or (compute_v == 1)')
    if not ((sort_t == 0) or (sort_t == 1)):
        raise ValueError('Condition on arguments not satisfied: (sort_t == 0) or (sort_t == 1)')
    if not ((lwork_ == -1) or (lwork_ >= max(1, (2 * n)))):
        raise ValueError('Condition on arguments not satisfied: (lwork == -1) or (lwork >= max(1, (2 * n)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    wr_shape[0] = n
    wr_ = fw_asfortranarray(wr, fwr_real_t_enum, 1, wr_shape, False, True)
    if not (0 <= n <= wr_shape[0]):
        raise ValueError("(0 <= n <= wr.shape[0]) not satisifed")
    wi_shape[0] = n
    wi_ = fw_asfortranarray(wi, fwr_real_t_enum, 1, wi_shape, False, True)
    if not (0 <= n <= wi_shape[0]):
        raise ValueError("(0 <= n <= wi.shape[0]) not satisifed")
    ldvs = n if (compute_v == 1) else 1
    vs_shape[0] = ldvs; vs_shape[1] = n
    vs_ = fw_asfortranarray(vs, fwr_real_t_enum, 2, vs_shape, False, True)
    if ldvs != vs_shape[0]:
        raise ValueError("(ldvs == vs.shape[0]) not satisifed")
    if n != vs_shape[1]:
        raise ValueError("(n == vs.shape[1]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_real_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fw_jobvs_f[0] = fw_aschar(jobvs_f)
    if fw_jobvs_f[0] == 0:
        raise ValueError("len(jobvs_f) != 1")
    fw_sort_f[0] = fw_aschar(sort_f)
    if fw_sort_f[0] == 0:
        raise ValueError("len(sort_f) != 1")
    fc.sgees(fw_jobvs_f, fw_sort_f, NULL, &n, <fwr_real_t*>np.PyArray_DATA(a_), &nrows, &sdim, <fwr_real_t*>np.PyArray_DATA(wr_), <fwr_real_t*>np.PyArray_DATA(wi_), <fwr_real_t*>np.PyArray_DATA(vs_), &ldvs, <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, <fwl_logical_t*>np.PyArray_DATA(bwork_), &info, 1, 1)
    return (a_, sdim, wr_, wi_, vs_, work_, info,)
def dgees(object select, object a, fwi_integer_t compute_v=1, fwi_integer_t sort_t=0, object lwork=None, bint overwrite_a=False, object wr=None, object wi=None, object vs=None, object work=None):
    """dgees(select, a[, compute_v, sort_t, lwork, overwrite_a, wr, wi, vs, work]) -> (a, sdim, wr, wi, vs, work, info)

    Parameters
    ----------
    select : callback function
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    compute_v : fwi_integer, intent in
    sort_t : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    wr : fwr_dbl_t_, 1D array, dimension(n), intent out
    wi : fwr_dbl_t_, 1D array, dimension(n), intent out
    vs : fwr_dbl_t_, 2D array, dimension(ldvs, n), intent out
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    sdim : fwi_integer, intent out
    wr : fwr_dbl_t_, 1D array, dimension(n), intent out
    wi : fwr_dbl_t_, 1D array, dimension(n), intent out
    vs : fwr_dbl_t_, 2D array, dimension(ldvs, n), intent out
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvs_f = [0, 0], *fw_sort_f = [0, 0]
    cdef fwi_integer_t lwork_, n, nrows, ldvs, sdim, info
    cdef np.ndarray a_, wr_, wi_, vs_, work_, bwork_
    cdef np.npy_intp a_shape[2], wr_shape[1], wi_shape[1], vs_shape[2], work_shape[1], bwork_shape[1]
    cdef fwl_logical_t select_f
    jobvs_f = "V" if compute_v else "N"
    sort_f = "S" if sort_t else "N"
    if sort_t:
        raise NotImplementedError('select callback not yet implemented')    
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    nrows = a_shape[0]
    sdim = 0
    n = a_shape[1]
    bwork_shape[0] = n
    bwork_ = fw_asfortranarray(None, fwl_logical_t_enum, 1, bwork_shape, False, True)
    info = 0
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_v == 0) or (compute_v == 1)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 0) or (compute_v == 1)')
    if not ((sort_t == 0) or (sort_t == 1)):
        raise ValueError('Condition on arguments not satisfied: (sort_t == 0) or (sort_t == 1)')
    if not ((lwork_ == -1) or (lwork_ >= max(1, (2 * n)))):
        raise ValueError('Condition on arguments not satisfied: (lwork == -1) or (lwork >= max(1, (2 * n)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    wr_shape[0] = n
    wr_ = fw_asfortranarray(wr, fwr_dbl_t_enum, 1, wr_shape, False, True)
    if not (0 <= n <= wr_shape[0]):
        raise ValueError("(0 <= n <= wr.shape[0]) not satisifed")
    wi_shape[0] = n
    wi_ = fw_asfortranarray(wi, fwr_dbl_t_enum, 1, wi_shape, False, True)
    if not (0 <= n <= wi_shape[0]):
        raise ValueError("(0 <= n <= wi.shape[0]) not satisifed")
    ldvs = n if (compute_v == 1) else 1
    vs_shape[0] = ldvs; vs_shape[1] = n
    vs_ = fw_asfortranarray(vs, fwr_dbl_t_enum, 2, vs_shape, False, True)
    if ldvs != vs_shape[0]:
        raise ValueError("(ldvs == vs.shape[0]) not satisifed")
    if n != vs_shape[1]:
        raise ValueError("(n == vs.shape[1]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fw_jobvs_f[0] = fw_aschar(jobvs_f)
    if fw_jobvs_f[0] == 0:
        raise ValueError("len(jobvs_f) != 1")
    fw_sort_f[0] = fw_aschar(sort_f)
    if fw_sort_f[0] == 0:
        raise ValueError("len(sort_f) != 1")
    fc.dgees(fw_jobvs_f, fw_sort_f, NULL, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &nrows, &sdim, <fwr_dbl_t*>np.PyArray_DATA(wr_), <fwr_dbl_t*>np.PyArray_DATA(wi_), <fwr_dbl_t*>np.PyArray_DATA(vs_), &ldvs, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, <fwl_logical_t*>np.PyArray_DATA(bwork_), &info, 1, 1)
    return (a_, sdim, wr_, wi_, vs_, work_, info,)


def sgeev(object a, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, object wr=None, object wi=None, object vl=None, object vr=None):
    """sgeev(a[, compute_vl, compute_vr, lwork, overwrite_a, wr, wi, vl, vr]) -> (wr, wi, vl, vr, info)

    Parameters
    ----------
    a : fwr_real, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    wr : fwr_real, 1D array, dimension(n), intent out
    wi : fwr_real, 1D array, dimension(n), intent out
    vl : fwr_real, 2D array, dimension(ldvl, n), intent out
    vr : fwr_real, 2D array, dimension(ldvr, n), intent out

    Returns
    -------
    wr : fwr_real, 1D array, dimension(n), intent out
    wi : fwr_real, 1D array, dimension(n), intent out
    vl : fwr_real, 2D array, dimension(ldvl, n), intent out
    vr : fwr_real, 2D array, dimension(ldvr, n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, wr_, wi_, vl_, vr_, work_
    cdef np.npy_intp a_shape[2], wr_shape[1], wi_shape[1], vl_shape[2], vr_shape[2], work_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 4 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not (lwork_ >= ((4 * n) if (compute_vl or compute_vr) else (3 * n))):
        raise ValueError('Condition on arguments not satisfied: lwork >= ((4 * n) if (compute_vl or compute_vr) else (3 * n))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    wr_shape[0] = n
    wr_ = fw_asfortranarray(wr, fwr_real_t_enum, 1, wr_shape, False, True)
    if n != wr_shape[0]:
        raise ValueError("(n == wr.shape[0]) not satisifed")
    wi_shape[0] = n
    wi_ = fw_asfortranarray(wi, fwr_real_t_enum, 1, wi_shape, False, True)
    if n != wi_shape[0]:
        raise ValueError("(n == wi.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwr_real_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if not (0 <= n <= vl_shape[1]):
        raise ValueError("(0 <= n <= vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwr_real_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if not (0 <= n <= vr_shape[1]):
        raise ValueError("(0 <= n <= vr.shape[1]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.sgeev(fw_jobvl_f, fw_jobvr_f, &n, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(wr_), <fwr_real_t*>np.PyArray_DATA(wi_), <fwr_real_t*>np.PyArray_DATA(vl_), &ldvl, <fwr_real_t*>np.PyArray_DATA(vr_), &ldvr, <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info, 1, 1)
    return (wr_, wi_, vl_, vr_, info,)


def sgegv(object a, object b, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object alphar=None, object alphai=None, object beta=None, object vl=None, object vr=None):
    """sgegv(a, b[, compute_vl, compute_vr, lwork, overwrite_a, overwrite_b, alphar, alphai, beta, vl, vr]) -> (alphar, alphai, beta, vl, vr, info)

    Parameters
    ----------
    a : fwr_real, 2D array, dimension(n, n), intent in
    b : fwr_real, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    alphar : fwr_real, 1D array, dimension(n), intent out
    alphai : fwr_real, 1D array, dimension(n), intent out
    beta : fwr_real, 1D array, dimension(n), intent out
    vl : fwr_real, 2D array, dimension(ldvl, n), intent out
    vr : fwr_real, 2D array, dimension(ldvr, n), intent out

    Returns
    -------
    alphar : fwr_real, 1D array, dimension(n), intent out
    alphai : fwr_real, 1D array, dimension(n), intent out
    beta : fwr_real, 1D array, dimension(n), intent out
    vl : fwr_real, 2D array, dimension(ldvl, n), intent out
    vr : fwr_real, 2D array, dimension(ldvr, n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, b_, alphar_, alphai_, beta_, vl_, vr_, work_
    cdef np.npy_intp a_shape[2], b_shape[2], alphar_shape[1], alphai_shape[1], beta_shape[1], vl_shape[2], vr_shape[2], work_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 8 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    info = 0
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((b_shape[0] == b_shape[1]) and (b_shape[0] == n)):
        raise ValueError('Condition on arguments not satisfied: (b.shape[0] == b.shape[1]) and (b.shape[0] == n)')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not (lwork_ >= (8 * n)):
        raise ValueError('Condition on arguments not satisfied: lwork >= (8 * n)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if n != b_shape[1]:
        raise ValueError("(n == b.shape[1]) not satisifed")
    alphar_shape[0] = n
    alphar_ = fw_asfortranarray(alphar, fwr_real_t_enum, 1, alphar_shape, False, True)
    if n != alphar_shape[0]:
        raise ValueError("(n == alphar.shape[0]) not satisifed")
    alphai_shape[0] = n
    alphai_ = fw_asfortranarray(alphai, fwr_real_t_enum, 1, alphai_shape, False, True)
    if n != alphai_shape[0]:
        raise ValueError("(n == alphai.shape[0]) not satisifed")
    beta_shape[0] = n
    beta_ = fw_asfortranarray(beta, fwr_real_t_enum, 1, beta_shape, False, True)
    if n != beta_shape[0]:
        raise ValueError("(n == beta.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwr_real_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if not (0 <= n <= vl_shape[1]):
        raise ValueError("(0 <= n <= vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwr_real_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if not (0 <= n <= vr_shape[1]):
        raise ValueError("(0 <= n <= vr.shape[1]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.sgegv(fw_jobvl_f, fw_jobvr_f, &n, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(b_), &n, <fwr_real_t*>np.PyArray_DATA(alphar_), <fwr_real_t*>np.PyArray_DATA(alphai_), <fwr_real_t*>np.PyArray_DATA(beta_), <fwr_real_t*>np.PyArray_DATA(vl_), &ldvl, <fwr_real_t*>np.PyArray_DATA(vr_), &ldvr, <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info, 1, 1)
    return (alphar_, alphai_, beta_, vl_, vr_, info,)

def sgehrd(object a, fwi_integer_t lo=0, object hi=None, object lwork=None, bint overwrite_a=False, object tau=None):
    """sgehrd(a[, lo, hi, lwork, overwrite_a, tau]) -> (a, tau, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    lo : fwi_integer, intent in
    hi : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwr_real_t_, 1D array, dimension(n-1), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    tau : fwr_real_t_, 1D array, dimension(n-1), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t hi_, lwork_, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    hi_ = hi if (hi is not None) else n - 1
    lwork_ = lwork if (lwork is not None) else max(n, 1)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (lwork_ >= max(n, 1)):
        raise ValueError('Condition on arguments not satisfied: lwork >= max(n, 1)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = n - 1
    tau_ = fw_asfortranarray(tau, fwr_real_t_enum, 1, tau_shape, False, True)
    if n - 1 != tau_shape[0]:
        raise ValueError("(n - 1 == tau.shape[0]) not satisifed")
    lo += 1
    hi_ += 1
    fc.sgehrd(&n, &lo, &hi_, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(tau_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, info,)
def dgehrd(object a, fwi_integer_t lo=0, object hi=None, object lwork=None, bint overwrite_a=False, object tau=None):
    """dgehrd(a[, lo, hi, lwork, overwrite_a, tau]) -> (a, tau, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    lo : fwi_integer, intent in
    hi : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwr_dbl_t_, 1D array, dimension(n-1), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    tau : fwr_dbl_t_, 1D array, dimension(n-1), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t hi_, lwork_, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    hi_ = hi if (hi is not None) else n - 1
    lwork_ = lwork if (lwork is not None) else max(n, 1)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (lwork_ >= max(n, 1)):
        raise ValueError('Condition on arguments not satisfied: lwork >= max(n, 1)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = n - 1
    tau_ = fw_asfortranarray(tau, fwr_dbl_t_enum, 1, tau_shape, False, True)
    if n - 1 != tau_shape[0]:
        raise ValueError("(n - 1 == tau.shape[0]) not satisifed")
    lo += 1
    hi_ += 1
    fc.dgehrd(&n, &lo, &hi_, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(tau_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, info,)
def cgehrd(object a, fwi_integer_t lo=0, object hi=None, object lwork=None, bint overwrite_a=False, object tau=None):
    """cgehrd(a[, lo, hi, lwork, overwrite_a, tau]) -> (a, tau, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    lo : fwi_integer, intent in
    hi : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwc_complex_t_, 1D array, dimension(n-1), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    tau : fwc_complex_t_, 1D array, dimension(n-1), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t hi_, lwork_, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    hi_ = hi if (hi is not None) else n - 1
    lwork_ = lwork if (lwork is not None) else max(n, 1)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (lwork_ >= max(n, 1)):
        raise ValueError('Condition on arguments not satisfied: lwork >= max(n, 1)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = n - 1
    tau_ = fw_asfortranarray(tau, fwc_complex_t_enum, 1, tau_shape, False, True)
    if n - 1 != tau_shape[0]:
        raise ValueError("(n - 1 == tau.shape[0]) not satisifed")
    lo += 1
    hi_ += 1
    fc.cgehrd(&n, &lo, &hi_, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwc_complex_t*>np.PyArray_DATA(tau_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, info,)
def zgehrd(object a, fwi_integer_t lo=0, object hi=None, object lwork=None, bint overwrite_a=False, object tau=None):
    """zgehrd(a[, lo, hi, lwork, overwrite_a, tau]) -> (a, tau, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    lo : fwi_integer, intent in
    hi : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwc_dbl_complex_t_, 1D array, dimension(n-1), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    tau : fwc_dbl_complex_t_, 1D array, dimension(n-1), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t hi_, lwork_, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    hi_ = hi if (hi is not None) else n - 1
    lwork_ = lwork if (lwork is not None) else max(n, 1)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (lwork_ >= max(n, 1)):
        raise ValueError('Condition on arguments not satisfied: lwork >= max(n, 1)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = n - 1
    tau_ = fw_asfortranarray(tau, fwc_dbl_complex_t_enum, 1, tau_shape, False, True)
    if n - 1 != tau_shape[0]:
        raise ValueError("(n - 1 == tau.shape[0]) not satisifed")
    lo += 1
    hi_ += 1
    fc.zgehrd(&n, &lo, &hi_, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(tau_), <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, info,)


def sgelss(object a, object b, object cond=None, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object s=None):
    """sgelss(a, b[, cond, lwork, overwrite_a, overwrite_b, s]) -> (a, b, s, r, info)

    Parameters
    ----------
    a : fwr_real, 2D array, dimension(m, n), intent inout
    b : fwr_real, 2D array, dimension(maxmn, nrhs), intent inout
    cond : fwr_real, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    s : fwr_real, 1D array, dimension(minmn), intent out

    Returns
    -------
    a : fwr_real, 2D array, dimension(m, n), intent inout
    b : fwr_real, 2D array, dimension(maxmn, nrhs), intent inout
    s : fwr_real, 1D array, dimension(minmn), intent out
    r : fwi_integer, intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, minmn, maxmn, nrhs, r, info
    cdef fwr_real_t cond_
    cdef np.ndarray a_, b_, s_, work_
    cdef np.npy_intp a_shape[2], b_shape[2], s_shape[1], work_shape[1]
    r = 0
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    maxmn = max(m, n)
    minmn = min(m, n)
    cond_ = cond if (cond is not None) else -1.0
    lwork_ = lwork if (lwork is not None) else (3 * minmn) + max((2 * minmn), max(maxmn, nrhs))
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    info = 0
    if not (maxmn == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: maxmn == b.shape[0]')
    if not (lwork_ >= 1):
        raise ValueError('Condition on arguments not satisfied: lwork >= 1')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if maxmn != b_shape[0]:
        raise ValueError("(maxmn == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    s_shape[0] = minmn
    s_ = fw_asfortranarray(s, fwr_real_t_enum, 1, s_shape, False, True)
    if minmn != s_shape[0]:
        raise ValueError("(minmn == s.shape[0]) not satisifed")
    fc.sgelss(&m, &n, &nrhs, <fwr_real_t*>np.PyArray_DATA(a_), &m, <fwr_real_t*>np.PyArray_DATA(b_), &maxmn, <fwr_real_t*>np.PyArray_DATA(s_), &cond_, &r, <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, b_, s_, r, info,)

def sgeqrf(object a, object lwork=None, bint overwrite_a=False, object tau=None, object work=None):
    """sgeqrf(a[, lwork, overwrite_a, tau, work]) -> (a, tau, work, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwr_real_t_, 1D array, dimension(min(m,n)), intent out
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    tau : fwr_real_t_, 1D array, dimension(min(m,n)), intent out
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = min(m, n)
    tau_ = fw_asfortranarray(tau, fwr_real_t_enum, 1, tau_shape, False, True)
    if not (0 <= min(m, n) <= tau_shape[0]):
        raise ValueError("(0 <= min(m, n) <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_real_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.sgeqrf(&m, &n, <fwr_real_t*>np.PyArray_DATA(a_), &m, <fwr_real_t*>np.PyArray_DATA(tau_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, work_, info,)
def dgeqrf(object a, object lwork=None, bint overwrite_a=False, object tau=None, object work=None):
    """dgeqrf(a[, lwork, overwrite_a, tau, work]) -> (a, tau, work, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwr_dbl_t_, 1D array, dimension(min(m,n)), intent out
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    tau : fwr_dbl_t_, 1D array, dimension(min(m,n)), intent out
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = min(m, n)
    tau_ = fw_asfortranarray(tau, fwr_dbl_t_enum, 1, tau_shape, False, True)
    if not (0 <= min(m, n) <= tau_shape[0]):
        raise ValueError("(0 <= min(m, n) <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.dgeqrf(&m, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, <fwr_dbl_t*>np.PyArray_DATA(tau_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, work_, info,)
def cgeqrf(object a, object lwork=None, bint overwrite_a=False, object tau=None, object work=None):
    """cgeqrf(a[, lwork, overwrite_a, tau, work]) -> (a, tau, work, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwc_complex_t_, 1D array, dimension(min(m,n)), intent out
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    tau : fwc_complex_t_, 1D array, dimension(min(m,n)), intent out
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = min(m, n)
    tau_ = fw_asfortranarray(tau, fwc_complex_t_enum, 1, tau_shape, False, True)
    if not (0 <= min(m, n) <= tau_shape[0]):
        raise ValueError("(0 <= min(m, n) <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.cgeqrf(&m, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &m, <fwc_complex_t*>np.PyArray_DATA(tau_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, work_, info,)
def zgeqrf(object a, object lwork=None, bint overwrite_a=False, object tau=None, object work=None):
    """zgeqrf(a[, lwork, overwrite_a, tau, work]) -> (a, tau, work, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwc_dbl_complex_t_, 1D array, dimension(min(m,n)), intent out
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    tau : fwc_dbl_complex_t_, 1D array, dimension(min(m,n)), intent out
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = min(m, n)
    tau_ = fw_asfortranarray(tau, fwc_dbl_complex_t_enum, 1, tau_shape, False, True)
    if not (0 <= min(m, n) <= tau_shape[0]):
        raise ValueError("(0 <= min(m, n) <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.zgeqrf(&m, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, <fwc_dbl_complex_t*>np.PyArray_DATA(tau_), <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, work_, info,)

def sgerqf(object a, object lwork=None, bint overwrite_a=False, object tau=None, object work=None):
    """sgerqf(a[, lwork, overwrite_a, tau, work]) -> (a, tau, work, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwr_real_t_, 1D array, dimension(min(m,n)), intent out
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    tau : fwr_real_t_, 1D array, dimension(min(m,n)), intent out
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = min(m, n)
    tau_ = fw_asfortranarray(tau, fwr_real_t_enum, 1, tau_shape, False, True)
    if not (0 <= min(m, n) <= tau_shape[0]):
        raise ValueError("(0 <= min(m, n) <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_real_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.sgerqf(&m, &n, <fwr_real_t*>np.PyArray_DATA(a_), &m, <fwr_real_t*>np.PyArray_DATA(tau_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, work_, info,)
def dgerqf(object a, object lwork=None, bint overwrite_a=False, object tau=None, object work=None):
    """dgerqf(a[, lwork, overwrite_a, tau, work]) -> (a, tau, work, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwr_dbl_t_, 1D array, dimension(min(m,n)), intent out
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    tau : fwr_dbl_t_, 1D array, dimension(min(m,n)), intent out
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = min(m, n)
    tau_ = fw_asfortranarray(tau, fwr_dbl_t_enum, 1, tau_shape, False, True)
    if not (0 <= min(m, n) <= tau_shape[0]):
        raise ValueError("(0 <= min(m, n) <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.dgerqf(&m, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, <fwr_dbl_t*>np.PyArray_DATA(tau_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, work_, info,)
def cgerqf(object a, object lwork=None, bint overwrite_a=False, object tau=None, object work=None):
    """cgerqf(a[, lwork, overwrite_a, tau, work]) -> (a, tau, work, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwc_complex_t_, 1D array, dimension(min(m,n)), intent out
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    tau : fwc_complex_t_, 1D array, dimension(min(m,n)), intent out
    work : fwc_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = min(m, n)
    tau_ = fw_asfortranarray(tau, fwc_complex_t_enum, 1, tau_shape, False, True)
    if not (0 <= min(m, n) <= tau_shape[0]):
        raise ValueError("(0 <= min(m, n) <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.cgerqf(&m, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &m, <fwc_complex_t*>np.PyArray_DATA(tau_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, work_, info,)
def zgerqf(object a, object lwork=None, bint overwrite_a=False, object tau=None, object work=None):
    """zgerqf(a[, lwork, overwrite_a, tau, work]) -> (a, tau, work, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    tau : fwc_dbl_complex_t_, 1D array, dimension(min(m,n)), intent out
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    tau : fwc_dbl_complex_t_, 1D array, dimension(min(m,n)), intent out
    work : fwc_dbl_complex_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_shape[0] = min(m, n)
    tau_ = fw_asfortranarray(tau, fwc_dbl_complex_t_enum, 1, tau_shape, False, True)
    if not (0 <= min(m, n) <= tau_shape[0]):
        raise ValueError("(0 <= min(m, n) <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.zgerqf(&m, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, <fwc_dbl_complex_t*>np.PyArray_DATA(tau_), <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, tau_, work_, info,)


def sgesdd(object a, fwi_integer_t compute_uv=1, object lwork=None, bint overwrite_a=False, object u=None, object s=None, object vt=None):
    """sgesdd(a[, compute_uv, lwork, overwrite_a, u, s, vt]) -> (u, s, vt, info)

    Parameters
    ----------
    a : fwr_real, 2D array, dimension(m, n), intent in
    compute_uv : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    u : fwr_real, 2D array, dimension(du, du), intent out
    s : fwr_real, 1D array, dimension(minmn), intent out
    vt : fwr_real, 2D array, dimension(dvt, dvt), intent out

    Returns
    -------
    u : fwr_real, 2D array, dimension(du, du), intent out
    s : fwr_real, 1D array, dimension(minmn), intent out
    vt : fwr_real, 2D array, dimension(dvt, dvt), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0]
    cdef fwi_integer_t lwork_, m, n, minmn, du, dvt, info
    cdef np.ndarray a_, u_, s_, vt_, work_, iwork_
    cdef np.npy_intp a_shape[2], u_shape[2], s_shape[1], vt_shape[2], work_shape[1], iwork_shape[1]
    jobz_f = "A" if compute_uv else "N"
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    m = a_shape[0]
    n = a_shape[1]
    minmn = min(m, n)
    lwork_ = lwork if (lwork is not None) else ((4 * minmn * minmn) + max(m, n) + (9 * minmn)) if compute_uv else (max(((14 * minmn) + 4), ((10 * minmn) + 2 + (25 * (25 + 8)))) + max(m, n))
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    iwork_shape[0] = 8 * minmn
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    if not ((compute_uv == 0) or (compute_uv == 1)):
        raise ValueError('Condition on arguments not satisfied: (compute_uv == 0) or (compute_uv == 1)')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    du = m if compute_uv else 1
    u_shape[0] = du; u_shape[1] = du
    u_ = fw_asfortranarray(u, fwr_real_t_enum, 2, u_shape, False, True)
    if du != u_shape[0]:
        raise ValueError("(du == u.shape[0]) not satisifed")
    if du != u_shape[1]:
        raise ValueError("(du == u.shape[1]) not satisifed")
    s_shape[0] = minmn
    s_ = fw_asfortranarray(s, fwr_real_t_enum, 1, s_shape, False, True)
    if minmn != s_shape[0]:
        raise ValueError("(minmn == s.shape[0]) not satisifed")
    dvt = n if compute_uv else 1
    vt_shape[0] = dvt; vt_shape[1] = dvt
    vt_ = fw_asfortranarray(vt, fwr_real_t_enum, 2, vt_shape, False, True)
    if dvt != vt_shape[0]:
        raise ValueError("(dvt == vt.shape[0]) not satisifed")
    if dvt != vt_shape[1]:
        raise ValueError("(dvt == vt.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fc.sgesdd(fw_jobz_f, &m, &n, <fwr_real_t*>np.PyArray_DATA(a_), &m, <fwr_real_t*>np.PyArray_DATA(s_), <fwr_real_t*>np.PyArray_DATA(u_), &du, <fwr_real_t*>np.PyArray_DATA(vt_), &dvt, <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), &info, 1)
    return (u_, s_, vt_, info,)

def sgesv(object a, object b, bint overwrite_a=False, bint overwrite_b=False, object piv=None):
    """sgesv(a, b[, overwrite_a, overwrite_b, piv]) -> (a, piv, b, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    piv : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent out
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray a_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], b_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (a_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == b.shape[0]')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    piv_shape[0] = n
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    fc.sgesv(&n, &nrhs, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwr_real_t*>np.PyArray_DATA(b_), &n, &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (a_, piv_, b_, info,)
def dgesv(object a, object b, bint overwrite_a=False, bint overwrite_b=False, object piv=None):
    """dgesv(a, b[, overwrite_a, overwrite_b, piv]) -> (a, piv, b, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    piv : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent out
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray a_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], b_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (a_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == b.shape[0]')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    piv_shape[0] = n
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    fc.dgesv(&n, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwr_dbl_t*>np.PyArray_DATA(b_), &n, &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (a_, piv_, b_, info,)
def cgesv(object a, object b, bint overwrite_a=False, bint overwrite_b=False, object piv=None):
    """cgesv(a, b[, overwrite_a, overwrite_b, piv]) -> (a, piv, b, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    piv : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent out
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray a_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], b_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (a_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == b.shape[0]')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    piv_shape[0] = n
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    fc.cgesv(&n, &nrhs, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwc_complex_t*>np.PyArray_DATA(b_), &n, &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (a_, piv_, b_, info,)
def zgesv(object a, object b, bint overwrite_a=False, bint overwrite_b=False, object piv=None):
    """zgesv(a, b[, overwrite_a, overwrite_b, piv]) -> (a, piv, b, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    piv : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent out
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray a_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], b_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (a_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == b.shape[0]')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    piv_shape[0] = n
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    fc.zgesv(&n, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &n, &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (a_, piv_, b_, info,)

def sgetrf(object a, bint overwrite_a=False, object piv=None):
    """sgetrf(a[, overwrite_a, piv]) -> (a, piv, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    overwrite_a : bint_, intent in
    piv : fwi_integer, 1D array, dimension(min(m,n)), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    piv : fwi_integer, 1D array, dimension(min(m,n)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m, n, info
    cdef np.ndarray a_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    piv_shape[0] = min(m, n)
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if min(m, n) != piv_shape[0]:
        raise ValueError("(min(m, n) == piv.shape[0]) not satisifed")
    fc.sgetrf(&m, &n, <fwr_real_t*>np.PyArray_DATA(a_), &m, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (a_, piv_, info,)
def dgetrf(object a, bint overwrite_a=False, object piv=None):
    """dgetrf(a[, overwrite_a, piv]) -> (a, piv, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    overwrite_a : bint_, intent in
    piv : fwi_integer, 1D array, dimension(min(m,n)), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    piv : fwi_integer, 1D array, dimension(min(m,n)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m, n, info
    cdef np.ndarray a_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    piv_shape[0] = min(m, n)
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if min(m, n) != piv_shape[0]:
        raise ValueError("(min(m, n) == piv.shape[0]) not satisifed")
    fc.dgetrf(&m, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (a_, piv_, info,)
def cgetrf(object a, bint overwrite_a=False, object piv=None):
    """cgetrf(a[, overwrite_a, piv]) -> (a, piv, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    overwrite_a : bint_, intent in
    piv : fwi_integer, 1D array, dimension(min(m,n)), intent out

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    piv : fwi_integer, 1D array, dimension(min(m,n)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m, n, info
    cdef np.ndarray a_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    piv_shape[0] = min(m, n)
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if min(m, n) != piv_shape[0]:
        raise ValueError("(min(m, n) == piv.shape[0]) not satisifed")
    fc.cgetrf(&m, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &m, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (a_, piv_, info,)
def zgetrf(object a, bint overwrite_a=False, object piv=None):
    """zgetrf(a[, overwrite_a, piv]) -> (a, piv, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    overwrite_a : bint_, intent in
    piv : fwi_integer, 1D array, dimension(min(m,n)), intent out

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    piv : fwi_integer, 1D array, dimension(min(m,n)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m, n, info
    cdef np.ndarray a_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    piv_shape[0] = min(m, n)
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, True)
    if min(m, n) != piv_shape[0]:
        raise ValueError("(min(m, n) == piv.shape[0]) not satisifed")
    fc.zgetrf(&m, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (a_, piv_, info,)

def sgetri(object lu, object piv, object lwork=None, bint overwrite_lu=False):
    """sgetri(lu, piv[, lwork, overwrite_lu]) -> (lu, info)

    Parameters
    ----------
    lu : fwr_real_t_, 2D array, dimension(n, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent in
    lwork : fwi_integer, intent in
    overwrite_lu : bint_, intent in

    Returns
    -------
    lu : fwr_real_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, n, info
    cdef np.ndarray lu_, work_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp lu_shape[2], piv_shape[1], work_shape[1]
    cdef Py_ssize_t i
    lu_ = fw_asfortranarray(lu, fwr_real_t_enum, 2, lu_shape, not overwrite_lu, False)
    n = lu_shape[0]
    lwork_ = lwork if (lwork is not None) else 3 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    info = 0
    if not (lu_shape[0] == lu_shape[1]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == lu.shape[1]')
    if not (lwork_ >= n):
        raise ValueError('Condition on arguments not satisfied: lwork >= n')
    if n != lu_shape[0]:
        raise ValueError("(n == lu.shape[0]) not satisifed")
    if not (0 <= n <= lu_shape[1]):
        raise ValueError("(0 <= n <= lu.shape[1]) not satisifed")
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    fc.sgetri(&n, <fwr_real_t*>np.PyArray_DATA(lu_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (lu_, info,)
def dgetri(object lu, object piv, object lwork=None, bint overwrite_lu=False):
    """dgetri(lu, piv[, lwork, overwrite_lu]) -> (lu, info)

    Parameters
    ----------
    lu : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent in
    lwork : fwi_integer, intent in
    overwrite_lu : bint_, intent in

    Returns
    -------
    lu : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, n, info
    cdef np.ndarray lu_, work_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp lu_shape[2], piv_shape[1], work_shape[1]
    cdef Py_ssize_t i
    lu_ = fw_asfortranarray(lu, fwr_dbl_t_enum, 2, lu_shape, not overwrite_lu, False)
    n = lu_shape[0]
    lwork_ = lwork if (lwork is not None) else 3 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    info = 0
    if not (lu_shape[0] == lu_shape[1]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == lu.shape[1]')
    if not (lwork_ >= n):
        raise ValueError('Condition on arguments not satisfied: lwork >= n')
    if n != lu_shape[0]:
        raise ValueError("(n == lu.shape[0]) not satisifed")
    if not (0 <= n <= lu_shape[1]):
        raise ValueError("(0 <= n <= lu.shape[1]) not satisifed")
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    fc.dgetri(&n, <fwr_dbl_t*>np.PyArray_DATA(lu_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (lu_, info,)
def cgetri(object lu, object piv, object lwork=None, bint overwrite_lu=False):
    """cgetri(lu, piv[, lwork, overwrite_lu]) -> (lu, info)

    Parameters
    ----------
    lu : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent in
    lwork : fwi_integer, intent in
    overwrite_lu : bint_, intent in

    Returns
    -------
    lu : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, n, info
    cdef np.ndarray lu_, work_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp lu_shape[2], piv_shape[1], work_shape[1]
    cdef Py_ssize_t i
    lu_ = fw_asfortranarray(lu, fwc_complex_t_enum, 2, lu_shape, not overwrite_lu, False)
    n = lu_shape[0]
    lwork_ = lwork if (lwork is not None) else 3 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_complex_t_enum, 1, work_shape, False, True)
    info = 0
    if not (lu_shape[0] == lu_shape[1]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == lu.shape[1]')
    if not (lwork_ >= n):
        raise ValueError('Condition on arguments not satisfied: lwork >= n')
    if n != lu_shape[0]:
        raise ValueError("(n == lu.shape[0]) not satisifed")
    if not (0 <= n <= lu_shape[1]):
        raise ValueError("(0 <= n <= lu.shape[1]) not satisifed")
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    fc.cgetri(&n, <fwc_complex_t*>np.PyArray_DATA(lu_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwc_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (lu_, info,)
def zgetri(object lu, object piv, object lwork=None, bint overwrite_lu=False):
    """zgetri(lu, piv[, lwork, overwrite_lu]) -> (lu, info)

    Parameters
    ----------
    lu : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    piv : fwi_integer, 1D array, dimension(n), intent in
    lwork : fwi_integer, intent in
    overwrite_lu : bint_, intent in

    Returns
    -------
    lu : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, n, info
    cdef np.ndarray lu_, work_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp lu_shape[2], piv_shape[1], work_shape[1]
    cdef Py_ssize_t i
    lu_ = fw_asfortranarray(lu, fwc_dbl_complex_t_enum, 2, lu_shape, not overwrite_lu, False)
    n = lu_shape[0]
    lwork_ = lwork if (lwork is not None) else 3 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    info = 0
    if not (lu_shape[0] == lu_shape[1]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == lu.shape[1]')
    if not (lwork_ >= n):
        raise ValueError('Condition on arguments not satisfied: lwork >= n')
    if n != lu_shape[0]:
        raise ValueError("(n == lu.shape[0]) not satisifed")
    if not (0 <= n <= lu_shape[1]):
        raise ValueError("(0 <= n <= lu.shape[1]) not satisifed")
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    fc.zgetri(&n, <fwc_dbl_complex_t*>np.PyArray_DATA(lu_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, &info)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (lu_, info,)

def sgetrs(object lu, object piv, object b, fwi_integer_t trans=0, bint overwrite_b=False):
    """sgetrs(lu, piv, b[, trans, overwrite_b]) -> (b, info)

    Parameters
    ----------
    lu : fwr_real_t_, 2D array, dimension(n, n), intent in
    piv : fwi_integer, 1D array, dimension(n), intent in
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    trans : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray lu_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_    
    cdef np.npy_intp lu_shape[2], piv_shape[1], b_shape[2]
    cdef Py_ssize_t i
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    info = 0
    lu_ = fw_asfortranarray(lu, fwr_real_t_enum, 2, lu_shape, False, False)
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    if not (lu_shape[0] == lu_shape[1]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == lu.shape[1]')
    if not (lu_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == b.shape[0]')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    n = lu_shape[0]
    if n != lu_shape[0]:
        raise ValueError("(n == lu.shape[0]) not satisifed")
    if not (0 <= n <= lu_shape[1]):
        raise ValueError("(0 <= n <= lu.shape[1]) not satisifed")
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    fc.sgetrs(fw_trans_f, &n, &nrhs, <fwr_real_t*>np.PyArray_DATA(lu_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwr_real_t*>np.PyArray_DATA(b_), &n, &info, 1)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (b_, info,)
def dgetrs(object lu, object piv, object b, fwi_integer_t trans=0, bint overwrite_b=False):
    """dgetrs(lu, piv, b[, trans, overwrite_b]) -> (b, info)

    Parameters
    ----------
    lu : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    piv : fwi_integer, 1D array, dimension(n), intent in
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    trans : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray lu_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_    
    cdef np.npy_intp lu_shape[2], piv_shape[1], b_shape[2]
    cdef Py_ssize_t i
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    info = 0
    lu_ = fw_asfortranarray(lu, fwr_dbl_t_enum, 2, lu_shape, False, False)
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    if not (lu_shape[0] == lu_shape[1]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == lu.shape[1]')
    if not (lu_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == b.shape[0]')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    n = lu_shape[0]
    if n != lu_shape[0]:
        raise ValueError("(n == lu.shape[0]) not satisifed")
    if not (0 <= n <= lu_shape[1]):
        raise ValueError("(0 <= n <= lu.shape[1]) not satisifed")
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    fc.dgetrs(fw_trans_f, &n, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(lu_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwr_dbl_t*>np.PyArray_DATA(b_), &n, &info, 1)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (b_, info,)
def cgetrs(object lu, object piv, object b, fwi_integer_t trans=0, bint overwrite_b=False):
    """cgetrs(lu, piv, b[, trans, overwrite_b]) -> (b, info)

    Parameters
    ----------
    lu : fwc_complex_t_, 2D array, dimension(n, n), intent in
    piv : fwi_integer, 1D array, dimension(n), intent in
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    trans : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray lu_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_    
    cdef np.npy_intp lu_shape[2], piv_shape[1], b_shape[2]
    cdef Py_ssize_t i
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    info = 0
    lu_ = fw_asfortranarray(lu, fwc_complex_t_enum, 2, lu_shape, False, False)
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (lu_shape[0] == lu_shape[1]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == lu.shape[1]')
    if not (lu_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == b.shape[0]')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    n = lu_shape[0]
    if n != lu_shape[0]:
        raise ValueError("(n == lu.shape[0]) not satisifed")
    if not (0 <= n <= lu_shape[1]):
        raise ValueError("(0 <= n <= lu.shape[1]) not satisifed")
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    fc.cgetrs(fw_trans_f, &n, &nrhs, <fwc_complex_t*>np.PyArray_DATA(lu_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwc_complex_t*>np.PyArray_DATA(b_), &n, &info, 1)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (b_, info,)
def zgetrs(object lu, object piv, object b, fwi_integer_t trans=0, bint overwrite_b=False):
    """zgetrs(lu, piv, b[, trans, overwrite_b]) -> (b, info)

    Parameters
    ----------
    lu : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent in
    piv : fwi_integer, 1D array, dimension(n), intent in
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    trans : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray lu_, b_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_    
    cdef np.npy_intp lu_shape[2], piv_shape[1], b_shape[2]
    cdef Py_ssize_t i
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    info = 0
    lu_ = fw_asfortranarray(lu, fwc_dbl_complex_t_enum, 2, lu_shape, False, False)
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (lu_shape[0] == lu_shape[1]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == lu.shape[1]')
    if not (lu_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: lu.shape[0] == b.shape[0]')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    n = lu_shape[0]
    if n != lu_shape[0]:
        raise ValueError("(n == lu.shape[0]) not satisifed")
    if not (0 <= n <= lu_shape[1]):
        raise ValueError("(0 <= n <= lu.shape[1]) not satisifed")
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    if n != piv_shape[0]:
        raise ValueError("(n == piv.shape[0]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    fc.zgetrs(fw_trans_f, &n, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(lu_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &n, &info, 1)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return (b_, info,)


def sggev(object a, object b, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object alphar=None, object alphai=None, object beta=None, object vl=None, object vr=None, object work=None):
    """sggev(a, b[, compute_vl, compute_vr, lwork, overwrite_a, overwrite_b, alphar, alphai, beta, vl, vr, work]) -> (alphar, alphai, beta, vl, vr, work, info)

    Parameters
    ----------
    a : fwr_real, 2D array, dimension(n, n), intent in
    b : fwr_real, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    alphar : fwr_real, 1D array, dimension(n), intent out
    alphai : fwr_real, 1D array, dimension(n), intent out
    beta : fwr_real, 1D array, dimension(n), intent out
    vl : fwr_real, 2D array, dimension(ldvl, n), intent out
    vr : fwr_real, 2D array, dimension(ldvr, n), intent out
    work : fwr_real, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    alphar : fwr_real, 1D array, dimension(n), intent out
    alphai : fwr_real, 1D array, dimension(n), intent out
    beta : fwr_real, 1D array, dimension(n), intent out
    vl : fwr_real, 2D array, dimension(ldvl, n), intent out
    vr : fwr_real, 2D array, dimension(ldvr, n), intent out
    work : fwr_real, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, b_, alphar_, alphai_, beta_, vl_, vr_, work_
    cdef np.npy_intp a_shape[2], b_shape[2], alphar_shape[1], alphai_shape[1], beta_shape[1], vl_shape[2], vr_shape[2], work_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 8 * n
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (b_shape[0] == b_shape[1]):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == b.shape[1]')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not ((lwork_ == -1) or (lwork_ >= max(1, (8 * n)))):
        raise ValueError('Condition on arguments not satisfied: (lwork == -1) or (lwork >= max(1, (8 * n)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    alphar_shape[0] = n
    alphar_ = fw_asfortranarray(alphar, fwr_real_t_enum, 1, alphar_shape, False, True)
    if n != alphar_shape[0]:
        raise ValueError("(n == alphar.shape[0]) not satisifed")
    alphai_shape[0] = n
    alphai_ = fw_asfortranarray(alphai, fwr_real_t_enum, 1, alphai_shape, False, True)
    if n != alphai_shape[0]:
        raise ValueError("(n == alphai.shape[0]) not satisifed")
    beta_shape[0] = n
    beta_ = fw_asfortranarray(beta, fwr_real_t_enum, 1, beta_shape, False, True)
    if n != beta_shape[0]:
        raise ValueError("(n == beta.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwr_real_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if n != vl_shape[1]:
        raise ValueError("(n == vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwr_real_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if n != vr_shape[1]:
        raise ValueError("(n == vr.shape[1]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_real_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.sggev(fw_jobvl_f, fw_jobvr_f, &n, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(b_), &n, <fwr_real_t*>np.PyArray_DATA(alphar_), <fwr_real_t*>np.PyArray_DATA(alphai_), <fwr_real_t*>np.PyArray_DATA(beta_), <fwr_real_t*>np.PyArray_DATA(vl_), &ldvl, <fwr_real_t*>np.PyArray_DATA(vr_), &ldvr, <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info, 1, 1)
    return (alphar_, alphai_, beta_, vl_, vr_, work_, info,)

def slamch(object cmach):
    """slamch(cmach) -> fw_ret_arg

    Parameters
    ----------
    cmach : object_, intent in

    Returns
    -------
    fw_ret_arg : fwr_real_t_, intent out

    """
    cdef char *fw_cmach = [0, 0]
    cdef fwr_real_t fw_ret_arg
    fw_cmach[0] = fw_aschar(cmach)
    if fw_cmach[0] == 0:
        raise ValueError("len(cmach) != 1")
    fw_ret_arg = fc.slamch(fw_cmach, 1)
    return fw_ret_arg
def dlamch(object cmach):
    """dlamch(cmach) -> fw_ret_arg

    Parameters
    ----------
    cmach : object_, intent in

    Returns
    -------
    fw_ret_arg : fwr_dbl_t_, intent out

    """
    cdef char *fw_cmach = [0, 0]
    cdef fwr_dbl_t fw_ret_arg
    fw_cmach[0] = fw_aschar(cmach)
    if fw_cmach[0] == 0:
        raise ValueError("len(cmach) != 1")
    fw_ret_arg = fc.dlamch(fw_cmach, 1)
    return fw_ret_arg

def slaswp(object a, object piv, fwi_integer_t k1=0, object k2=None, fwi_integer_t off=0, fwi_integer_t inc=1, bint overwrite_a=False):
    """slaswp(a, piv[, k1, k2, off, inc, overwrite_a]) -> a

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(nrows, n), intent inout
    piv : fwi_integer, 1D array, dimension(*), intent in
    k1 : fwi_integer, intent in
    k2 : fwi_integer, intent in
    off : fwi_integer, intent in
    inc : fwi_integer, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(nrows, n), intent inout

    """
    cdef fwi_integer_t k2_, n, nrows, m
    cdef np.ndarray a_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    k2_ = k2 if (k2 is not None) else piv_shape[0] - 1
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    nrows = a_shape[0]
    m = (piv_shape[0] - off) // abs(inc)
    if not (piv_shape[0] <= nrows):
        raise ValueError('Condition on arguments not satisfied: piv.shape[0] <= nrows')
    if not (0 <= k1):
        raise ValueError('Condition on arguments not satisfied: 0 <= k1')
    if not ((k1 <= k2_) and (k2_ < (piv_shape[0] - off))):
        raise ValueError('Condition on arguments not satisfied: (k1 <= k2) and (k2 < (piv.shape[0] - off))')
    if not ((off >= 0) and (off < piv_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (off >= 0) and (off < piv.shape[0])')
    if not ((inc > 0) or (inc < 0)):
        raise ValueError('Condition on arguments not satisfied: (inc > 0) or (inc < 0)')
    if not ((piv_shape[0] - off) > ((m - 1) * abs(inc))):
        raise ValueError('Condition on arguments not satisfied: (piv.shape[0] - off) > ((m - 1) * abs(inc))')
    n = a_shape[1]
    if nrows != a_shape[0]:
        raise ValueError("(nrows == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    k1 += 1
    k2_ += 1
    fc.slaswp(&n, <fwr_real_t*>np.PyArray_DATA(a_), &nrows, &k1, &k2_, <fwi_integer_t*>np.PyArray_DATA(piv_) + off, &inc)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return a_
def dlaswp(object a, object piv, fwi_integer_t k1=0, object k2=None, fwi_integer_t off=0, fwi_integer_t inc=1, bint overwrite_a=False):
    """dlaswp(a, piv[, k1, k2, off, inc, overwrite_a]) -> a

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(nrows, n), intent inout
    piv : fwi_integer, 1D array, dimension(*), intent in
    k1 : fwi_integer, intent in
    k2 : fwi_integer, intent in
    off : fwi_integer, intent in
    inc : fwi_integer, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(nrows, n), intent inout

    """
    cdef fwi_integer_t k2_, n, nrows, m
    cdef np.ndarray a_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    k2_ = k2 if (k2 is not None) else piv_shape[0] - 1
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    nrows = a_shape[0]
    m = (piv_shape[0] - off) // abs(inc)
    if not (piv_shape[0] <= nrows):
        raise ValueError('Condition on arguments not satisfied: piv.shape[0] <= nrows')
    if not (0 <= k1):
        raise ValueError('Condition on arguments not satisfied: 0 <= k1')
    if not ((k1 <= k2_) and (k2_ < (piv_shape[0] - off))):
        raise ValueError('Condition on arguments not satisfied: (k1 <= k2) and (k2 < (piv.shape[0] - off))')
    if not ((off >= 0) and (off < piv_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (off >= 0) and (off < piv.shape[0])')
    if not ((inc > 0) or (inc < 0)):
        raise ValueError('Condition on arguments not satisfied: (inc > 0) or (inc < 0)')
    if not ((piv_shape[0] - off) > ((m - 1) * abs(inc))):
        raise ValueError('Condition on arguments not satisfied: (piv.shape[0] - off) > ((m - 1) * abs(inc))')
    n = a_shape[1]
    if nrows != a_shape[0]:
        raise ValueError("(nrows == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    k1 += 1
    k2_ += 1
    fc.dlaswp(&n, <fwr_dbl_t*>np.PyArray_DATA(a_), &nrows, &k1, &k2_, <fwi_integer_t*>np.PyArray_DATA(piv_) + off, &inc)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return a_
def claswp(object a, object piv, fwi_integer_t k1=0, object k2=None, fwi_integer_t off=0, fwi_integer_t inc=1, bint overwrite_a=False):
    """claswp(a, piv[, k1, k2, off, inc, overwrite_a]) -> a

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(nrows, n), intent inout
    piv : fwi_integer, 1D array, dimension(*), intent in
    k1 : fwi_integer, intent in
    k2 : fwi_integer, intent in
    off : fwi_integer, intent in
    inc : fwi_integer, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(nrows, n), intent inout

    """
    cdef fwi_integer_t k2_, n, nrows, m
    cdef np.ndarray a_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    k2_ = k2 if (k2 is not None) else piv_shape[0] - 1
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    nrows = a_shape[0]
    m = (piv_shape[0] - off) // abs(inc)
    if not (piv_shape[0] <= nrows):
        raise ValueError('Condition on arguments not satisfied: piv.shape[0] <= nrows')
    if not (0 <= k1):
        raise ValueError('Condition on arguments not satisfied: 0 <= k1')
    if not ((k1 <= k2_) and (k2_ < (piv_shape[0] - off))):
        raise ValueError('Condition on arguments not satisfied: (k1 <= k2) and (k2 < (piv.shape[0] - off))')
    if not ((off >= 0) and (off < piv_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (off >= 0) and (off < piv.shape[0])')
    if not ((inc > 0) or (inc < 0)):
        raise ValueError('Condition on arguments not satisfied: (inc > 0) or (inc < 0)')
    if not ((piv_shape[0] - off) > ((m - 1) * abs(inc))):
        raise ValueError('Condition on arguments not satisfied: (piv.shape[0] - off) > ((m - 1) * abs(inc))')
    n = a_shape[1]
    if nrows != a_shape[0]:
        raise ValueError("(nrows == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    k1 += 1
    k2_ += 1
    fc.claswp(&n, <fwc_complex_t*>np.PyArray_DATA(a_), &nrows, &k1, &k2_, <fwi_integer_t*>np.PyArray_DATA(piv_) + off, &inc)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return a_
def zlaswp(object a, object piv, fwi_integer_t k1=0, object k2=None, fwi_integer_t off=0, fwi_integer_t inc=1, bint overwrite_a=False):
    """zlaswp(a, piv[, k1, k2, off, inc, overwrite_a]) -> a

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(nrows, n), intent inout
    piv : fwi_integer, 1D array, dimension(*), intent in
    k1 : fwi_integer, intent in
    k2 : fwi_integer, intent in
    off : fwi_integer, intent in
    inc : fwi_integer, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(nrows, n), intent inout

    """
    cdef fwi_integer_t k2_, n, nrows, m
    cdef np.ndarray a_
    cdef np.ndarray[int, ndim=1, mode='fortran'] piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    cdef Py_ssize_t i
    piv_ = fw_asfortranarray(piv, fwi_integer_t_enum, 1, piv_shape, False, False)
    k2_ = k2 if (k2 is not None) else piv_shape[0] - 1
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    nrows = a_shape[0]
    m = (piv_shape[0] - off) // abs(inc)
    if not (piv_shape[0] <= nrows):
        raise ValueError('Condition on arguments not satisfied: piv.shape[0] <= nrows')
    if not (0 <= k1):
        raise ValueError('Condition on arguments not satisfied: 0 <= k1')
    if not ((k1 <= k2_) and (k2_ < (piv_shape[0] - off))):
        raise ValueError('Condition on arguments not satisfied: (k1 <= k2) and (k2 < (piv.shape[0] - off))')
    if not ((off >= 0) and (off < piv_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (off >= 0) and (off < piv.shape[0])')
    if not ((inc > 0) or (inc < 0)):
        raise ValueError('Condition on arguments not satisfied: (inc > 0) or (inc < 0)')
    if not ((piv_shape[0] - off) > ((m - 1) * abs(inc))):
        raise ValueError('Condition on arguments not satisfied: (piv.shape[0] - off) > ((m - 1) * abs(inc))')
    n = a_shape[1]
    if nrows != a_shape[0]:
        raise ValueError("(nrows == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    for i in range(piv_shape[0]):
        piv_[i] += 1
    k1 += 1
    k2_ += 1
    fc.zlaswp(&n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &nrows, &k1, &k2_, <fwi_integer_t*>np.PyArray_DATA(piv_) + off, &inc)
    for i in range(piv_shape[0]):
        piv_[i] -= 1
    return a_

def slauum(object c, fwi_integer_t lower=0, bint overwrite_c=False):
    """slauum(c[, lower, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwr_real_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwr_real_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwr_real_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.slauum(fw_uplo_f, &n, <fwr_real_t*>np.PyArray_DATA(c_), &n, &info, 1)
    return (c_, info,)
def dlauum(object c, fwi_integer_t lower=0, bint overwrite_c=False):
    """dlauum(c[, lower, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwr_dbl_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dlauum(fw_uplo_f, &n, <fwr_dbl_t*>np.PyArray_DATA(c_), &n, &info, 1)
    return (c_, info,)
def clauum(object c, fwi_integer_t lower=0, bint overwrite_c=False):
    """clauum(c[, lower, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwc_complex_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.clauum(fw_uplo_f, &n, <fwc_complex_t*>np.PyArray_DATA(c_), &n, &info, 1)
    return (c_, info,)
def zlauum(object c, fwi_integer_t lower=0, bint overwrite_c=False):
    """zlauum(c[, lower, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwc_dbl_complex_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zlauum(fw_uplo_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(c_), &n, &info, 1)
    return (c_, info,)

def sorgqr(object a, object tau, object lwork=None, bint overwrite_a=False, object work=None):
    """sorgqr(a, tau[, lwork, overwrite_a, work]) -> (a, work, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    tau : fwr_real_t_, 1D array, dimension(k), intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, k, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_ = fw_asfortranarray(tau, fwr_real_t_enum, 1, tau_shape, False, False)
    k = tau_shape[0]
    if not (0 <= k <= tau_shape[0]):
        raise ValueError("(0 <= k <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_real_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.sorgqr(&m, &n, &k, <fwr_real_t*>np.PyArray_DATA(a_), &m, <fwr_real_t*>np.PyArray_DATA(tau_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, work_, info,)
def dorgqr(object a, object tau, object lwork=None, bint overwrite_a=False, object work=None):
    """dorgqr(a, tau[, lwork, overwrite_a, work]) -> (a, work, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    tau : fwr_dbl_t_, 1D array, dimension(k), intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, k, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_ = fw_asfortranarray(tau, fwr_dbl_t_enum, 1, tau_shape, False, False)
    k = tau_shape[0]
    if not (0 <= k <= tau_shape[0]):
        raise ValueError("(0 <= k <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.dorgqr(&m, &n, &k, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, <fwr_dbl_t*>np.PyArray_DATA(tau_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, work_, info,)

def sorgrq(object a, object tau, object lwork=None, bint overwrite_a=False, object work=None):
    """sorgrq(a, tau[, lwork, overwrite_a, work]) -> (a, work, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    tau : fwr_real_t_, 1D array, dimension(k), intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    work : fwr_real_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, k, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_ = fw_asfortranarray(tau, fwr_real_t_enum, 1, tau_shape, False, False)
    k = tau_shape[0]
    if not (0 <= k <= tau_shape[0]):
        raise ValueError("(0 <= k <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_real_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.sorgrq(&m, &n, &k, <fwr_real_t*>np.PyArray_DATA(a_), &m, <fwr_real_t*>np.PyArray_DATA(tau_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, work_, info,)
def dorgrq(object a, object tau, object lwork=None, bint overwrite_a=False, object work=None):
    """dorgrq(a, tau[, lwork, overwrite_a, work]) -> (a, work, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    tau : fwr_dbl_t_, 1D array, dimension(k), intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    work : fwr_dbl_t_, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, k, info
    cdef np.ndarray a_, tau_, work_
    cdef np.npy_intp a_shape[2], tau_shape[1], work_shape[1]
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[1]
    lwork_ = lwork if (lwork is not None) else 3 * n
    if not ((lwork_ >= n) or (lwork_ == -1)):
        raise ValueError('Condition on arguments not satisfied: (lwork >= n) or (lwork == -1)')
    m = a_shape[0]
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    tau_ = fw_asfortranarray(tau, fwr_dbl_t_enum, 1, tau_shape, False, False)
    k = tau_shape[0]
    if not (0 <= k <= tau_shape[0]):
        raise ValueError("(0 <= k <= tau.shape[0]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fc.dorgrq(&m, &n, &k, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, <fwr_dbl_t*>np.PyArray_DATA(tau_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info)
    return (a_, work_, info,)

def spbsv(object ab, object b, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=False, bint overwrite_b=False):
    """spbsv(ab, b[, lower, ldab, overwrite_ab, overwrite_b]) -> (ab, b, info)

    Parameters
    ----------
    ab : fwr_real_t_, 2D array, dimension(ldab, n), intent inout
    b : fwr_real_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    ab : fwr_real_t_, 2D array, dimension(ldab, n), intent inout
    b : fwr_real_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, nrhs, ldb, info
    cdef np.ndarray ab_, b_
    cdef np.npy_intp ab_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.spbsv(fw_uplo_f, &n, &kd, &nrhs, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_real_t*>np.PyArray_DATA(b_), &ldb, &info, 1)
    return (ab_, b_, info,)
def dpbsv(object ab, object b, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=False, bint overwrite_b=False):
    """dpbsv(ab, b[, lower, ldab, overwrite_ab, overwrite_b]) -> (ab, b, info)

    Parameters
    ----------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, n), intent inout
    b : fwr_dbl_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, n), intent inout
    b : fwr_dbl_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, nrhs, ldb, info
    cdef np.ndarray ab_, b_
    cdef np.npy_intp ab_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dpbsv(fw_uplo_f, &n, &kd, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_dbl_t*>np.PyArray_DATA(b_), &ldb, &info, 1)
    return (ab_, b_, info,)
def cpbsv(object ab, object b, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=False, bint overwrite_b=False):
    """cpbsv(ab, b[, lower, ldab, overwrite_ab, overwrite_b]) -> (ab, b, info)

    Parameters
    ----------
    ab : fwc_complex_t_, 2D array, dimension(ldab, n), intent inout
    b : fwc_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    ab : fwc_complex_t_, 2D array, dimension(ldab, n), intent inout
    b : fwc_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, nrhs, ldb, info
    cdef np.ndarray ab_, b_
    cdef np.npy_intp ab_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.cpbsv(fw_uplo_f, &n, &kd, &nrhs, <fwc_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwc_complex_t*>np.PyArray_DATA(b_), &ldb, &info, 1)
    return (ab_, b_, info,)
def zpbsv(object ab, object b, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=False, bint overwrite_b=False):
    """zpbsv(ab, b[, lower, ldab, overwrite_ab, overwrite_b]) -> (ab, b, info)

    Parameters
    ----------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, n), intent inout
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, n), intent inout
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, nrhs, ldb, info
    cdef np.ndarray ab_, b_
    cdef np.npy_intp ab_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_dbl_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zpbsv(fw_uplo_f, &n, &kd, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &ldb, &info, 1)
    return (ab_, b_, info,)

def spbtrf(object ab, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=False):
    """spbtrf(ab[, lower, ldab, overwrite_ab]) -> (ab, info)

    Parameters
    ----------
    ab : fwr_real_t_, 2D array, dimension(ldab, n), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in

    Returns
    -------
    ab : fwr_real_t_, 2D array, dimension(ldab, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, info
    cdef np.ndarray ab_
    cdef np.npy_intp ab_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.spbtrf(fw_uplo_f, &n, &kd, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_, &info, 1)
    return (ab_, info,)
def dpbtrf(object ab, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=False):
    """dpbtrf(ab[, lower, ldab, overwrite_ab]) -> (ab, info)

    Parameters
    ----------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, n), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in

    Returns
    -------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, info
    cdef np.ndarray ab_
    cdef np.npy_intp ab_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dpbtrf(fw_uplo_f, &n, &kd, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_, &info, 1)
    return (ab_, info,)
def cpbtrf(object ab, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=False):
    """cpbtrf(ab[, lower, ldab, overwrite_ab]) -> (ab, info)

    Parameters
    ----------
    ab : fwc_complex_t_, 2D array, dimension(ldab, n), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in

    Returns
    -------
    ab : fwc_complex_t_, 2D array, dimension(ldab, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, info
    cdef np.ndarray ab_
    cdef np.npy_intp ab_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.cpbtrf(fw_uplo_f, &n, &kd, <fwc_complex_t*>np.PyArray_DATA(ab_), &ldab_, &info, 1)
    return (ab_, info,)
def zpbtrf(object ab, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=False):
    """zpbtrf(ab[, lower, ldab, overwrite_ab]) -> (ab, info)

    Parameters
    ----------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, n), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in

    Returns
    -------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, info
    cdef np.ndarray ab_
    cdef np.npy_intp ab_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_dbl_complex_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zpbtrf(fw_uplo_f, &n, &kd, <fwc_dbl_complex_t*>np.PyArray_DATA(ab_), &ldab_, &info, 1)
    return (ab_, info,)

def spbtrs(object ab, object b, fwi_integer_t lower=0, object ldab=None, bint overwrite_b=False):
    """spbtrs(ab, b[, lower, ldab, overwrite_b]) -> (b, info)

    Parameters
    ----------
    ab : fwr_real_t_, 2D array, dimension(ldab, n), intent in
    b : fwr_real_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_real_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, nrhs, ldb, info
    cdef np.ndarray ab_, b_
    cdef np.npy_intp ab_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, False, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.spbtrs(fw_uplo_f, &n, &kd, &nrhs, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_real_t*>np.PyArray_DATA(b_), &ldb, &info, 1)
    return (b_, info,)
def dpbtrs(object ab, object b, fwi_integer_t lower=0, object ldab=None, bint overwrite_b=False):
    """dpbtrs(ab, b[, lower, ldab, overwrite_b]) -> (b, info)

    Parameters
    ----------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, n), intent in
    b : fwr_dbl_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_dbl_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, nrhs, ldb, info
    cdef np.ndarray ab_, b_
    cdef np.npy_intp ab_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, False, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dpbtrs(fw_uplo_f, &n, &kd, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_dbl_t*>np.PyArray_DATA(b_), &ldb, &info, 1)
    return (b_, info,)
def cpbtrs(object ab, object b, fwi_integer_t lower=0, object ldab=None, bint overwrite_b=False):
    """cpbtrs(ab, b[, lower, ldab, overwrite_b]) -> (b, info)

    Parameters
    ----------
    ab : fwc_complex_t_, 2D array, dimension(ldab, n), intent in
    b : fwc_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, nrhs, ldb, info
    cdef np.ndarray ab_, b_
    cdef np.npy_intp ab_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_complex_t_enum, 2, ab_shape, False, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.cpbtrs(fw_uplo_f, &n, &kd, &nrhs, <fwc_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwc_complex_t*>np.PyArray_DATA(b_), &ldb, &info, 1)
    return (b_, info,)
def zpbtrs(object ab, object b, fwi_integer_t lower=0, object ldab=None, bint overwrite_b=False):
    """zpbtrs(ab, b[, lower, ldab, overwrite_b]) -> (b, info)

    Parameters
    ----------
    ab : fwc_dbl_complex_t_, 2D array, dimension(ldab, n), intent in
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, nrhs, ldb, info
    cdef np.ndarray ab_, b_
    cdef np.npy_intp ab_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwc_dbl_complex_t_enum, 2, ab_shape, False, False)
    kd = ab_shape[0] - 1
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    n = ab_shape[1]
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    if not (0 <= n <= ab_shape[1]):
        raise ValueError("(0 <= n <= ab.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zpbtrs(fw_uplo_f, &n, &kd, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(ab_), &ldab_, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &ldb, &info, 1)
    return (b_, info,)

def sposv(object a, object b, fwi_integer_t lower=0, bint overwrite_a=False, bint overwrite_b=False):
    """sposv(a, b[, lower, overwrite_a, overwrite_b]) -> (a, b, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    lower : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (a_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == b.shape[0]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.sposv(fw_uplo_f, &n, &nrhs, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(b_), &n, &info, 1)
    return (a_, b_, info,)
def dposv(object a, object b, fwi_integer_t lower=0, bint overwrite_a=False, bint overwrite_b=False):
    """dposv(a, b[, lower, overwrite_a, overwrite_b]) -> (a, b, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    lower : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (a_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == b.shape[0]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dposv(fw_uplo_f, &n, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(b_), &n, &info, 1)
    return (a_, b_, info,)
def cposv(object a, object b, fwi_integer_t lower=0, bint overwrite_a=False, bint overwrite_b=False):
    """cposv(a, b[, lower, overwrite_a, overwrite_b]) -> (a, b, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    lower : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (a_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == b.shape[0]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.cposv(fw_uplo_f, &n, &nrhs, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwc_complex_t*>np.PyArray_DATA(b_), &n, &info, 1)
    return (a_, b_, info,)
def zposv(object a, object b, fwi_integer_t lower=0, bint overwrite_a=False, bint overwrite_b=False):
    """zposv(a, b[, lower, overwrite_a, overwrite_b]) -> (a, b, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    lower : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (a_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == b.shape[0]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zposv(fw_uplo_f, &n, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &n, &info, 1)
    return (a_, b_, info,)

def spotrf(object a, fwi_integer_t lower=0, fwi_integer_t clean=1, bint overwrite_a=False):
    """spotrf(a[, lower, clean, overwrite_a]) -> (a, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    clean : fwi_integer, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray[fwr_real_t, ndim=2, mode='fortran'] a_
    cdef np.npy_intp a_shape[2]
    cdef Py_ssize_t i, j
    uplo_f = "L" if lower else "U"
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((clean == 0) or (clean == 1)):
        raise ValueError('Condition on arguments not satisfied: (clean == 0) or (clean == 1)')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.spotrf(fw_uplo_f, &n, <fwr_real_t*>np.PyArray_DATA(a_), &n, &info, 1)
    if clean != 0:
        if lower != 0:
            for j in range(n):
                for i in range(j):
                    a_[i, j] = 0
        else:
            for j in range(n):
                for i in range(j + 1, n):
                    a_[i, j] = 0
    return (a_, info,)
def dpotrf(object a, fwi_integer_t lower=0, fwi_integer_t clean=1, bint overwrite_a=False):
    """dpotrf(a[, lower, clean, overwrite_a]) -> (a, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    clean : fwi_integer, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray[fwr_dbl_t, ndim=2, mode='fortran'] a_
    cdef np.npy_intp a_shape[2]
    cdef Py_ssize_t i, j
    uplo_f = "L" if lower else "U"
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((clean == 0) or (clean == 1)):
        raise ValueError('Condition on arguments not satisfied: (clean == 0) or (clean == 1)')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dpotrf(fw_uplo_f, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, &info, 1)
    if clean != 0:
        if lower != 0:
            for j in range(n):
                for i in range(j):
                    a_[i, j] = 0
        else:
            for j in range(n):
                for i in range(j + 1, n):
                    a_[i, j] = 0
    return (a_, info,)
def cpotrf(object a, fwi_integer_t lower=0, fwi_integer_t clean=1, bint overwrite_a=False):
    """cpotrf(a[, lower, clean, overwrite_a]) -> (a, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    clean : fwi_integer, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray[fwc_complex_t, ndim=2, mode='fortran'] a_
    cdef np.npy_intp a_shape[2]
    cdef Py_ssize_t i, j
    uplo_f = "L" if lower else "U"
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((clean == 0) or (clean == 1)):
        raise ValueError('Condition on arguments not satisfied: (clean == 0) or (clean == 1)')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.cpotrf(fw_uplo_f, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &n, &info, 1)
    if clean != 0:
        if lower != 0:
            for j in range(n):
                for i in range(j):
                    a_[i, j] = 0
        else:
            for j in range(n):
                for i in range(j + 1, n):
                    a_[i, j] = 0
    return (a_, info,)
def zpotrf(object a, fwi_integer_t lower=0, fwi_integer_t clean=1, bint overwrite_a=False):
    """zpotrf(a[, lower, clean, overwrite_a]) -> (a, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    clean : fwi_integer, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray[fwc_dbl_complex_t, ndim=2, mode='fortran'] a_
    cdef np.npy_intp a_shape[2]
    cdef Py_ssize_t i, j
    uplo_f = "L" if lower else "U"
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((clean == 0) or (clean == 1)):
        raise ValueError('Condition on arguments not satisfied: (clean == 0) or (clean == 1)')
    n = a_shape[0]
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zpotrf(fw_uplo_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, &info, 1)
    if clean != 0:
        if lower != 0:
            for j in range(n):
                for i in range(j):
                    a_[i, j] = 0
        else:
            for j in range(n):
                for i in range(j + 1, n):
                    a_[i, j] = 0
    return (a_, info,)

def spotri(object c, fwi_integer_t lower=0, bint overwrite_c=False):
    """spotri(c[, lower, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwr_real_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwr_real_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwr_real_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.spotri(fw_uplo_f, &n, <fwr_real_t*>np.PyArray_DATA(c_), &n, &info, 1)
    return (c_, info,)
def dpotri(object c, fwi_integer_t lower=0, bint overwrite_c=False):
    """dpotri(c[, lower, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwr_dbl_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dpotri(fw_uplo_f, &n, <fwr_dbl_t*>np.PyArray_DATA(c_), &n, &info, 1)
    return (c_, info,)
def cpotri(object c, fwi_integer_t lower=0, bint overwrite_c=False):
    """cpotri(c[, lower, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwc_complex_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.cpotri(fw_uplo_f, &n, <fwc_complex_t*>np.PyArray_DATA(c_), &n, &info, 1)
    return (c_, info,)
def zpotri(object c, fwi_integer_t lower=0, bint overwrite_c=False):
    """zpotri(c[, lower, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwc_dbl_complex_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zpotri(fw_uplo_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(c_), &n, &info, 1)
    return (c_, info,)

def spotrs(object c, object b, fwi_integer_t lower=0, bint overwrite_b=False):
    """spotrs(c, b[, lower, overwrite_b]) -> (b, info)

    Parameters
    ----------
    c : fwr_real_t_, 2D array, dimension(n, n), intent in
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    lower : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_real_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray c_, b_
    cdef np.npy_intp c_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwr_real_t_enum, 2, c_shape, False, False)
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not (c_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == b.shape[0]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.spotrs(fw_uplo_f, &n, &nrhs, <fwr_real_t*>np.PyArray_DATA(c_), &n, <fwr_real_t*>np.PyArray_DATA(b_), &n, &info, 1)
    return (b_, info,)
def dpotrs(object c, object b, fwi_integer_t lower=0, bint overwrite_b=False):
    """dpotrs(c, b[, lower, overwrite_b]) -> (b, info)

    Parameters
    ----------
    c : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    lower : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_dbl_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray c_, b_
    cdef np.npy_intp c_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwr_dbl_t_enum, 2, c_shape, False, False)
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not (c_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == b.shape[0]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dpotrs(fw_uplo_f, &n, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(c_), &n, <fwr_dbl_t*>np.PyArray_DATA(b_), &n, &info, 1)
    return (b_, info,)
def cpotrs(object c, object b, fwi_integer_t lower=0, bint overwrite_b=False):
    """cpotrs(c, b[, lower, overwrite_b]) -> (b, info)

    Parameters
    ----------
    c : fwc_complex_t_, 2D array, dimension(n, n), intent in
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    lower : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray c_, b_
    cdef np.npy_intp c_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwc_complex_t_enum, 2, c_shape, False, False)
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not (c_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == b.shape[0]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.cpotrs(fw_uplo_f, &n, &nrhs, <fwc_complex_t*>np.PyArray_DATA(c_), &n, <fwc_complex_t*>np.PyArray_DATA(b_), &n, &info, 1)
    return (b_, info,)
def zpotrs(object c, object b, fwi_integer_t lower=0, bint overwrite_b=False):
    """zpotrs(c, b[, lower, overwrite_b]) -> (b, info)

    Parameters
    ----------
    c : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent in
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    lower : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_dbl_complex_t_, 2D array, dimension(n, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n, nrhs, info
    cdef np.ndarray c_, b_
    cdef np.npy_intp c_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    info = 0
    c_ = fw_asfortranarray(c, fwc_dbl_complex_t_enum, 2, c_shape, False, False)
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not (c_shape[0] == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == b.shape[0]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    nrhs = b_shape[1]
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zpotrs(fw_uplo_f, &n, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(c_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &n, &info, 1)
    return (b_, info,)

def ssbev(object ab, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=True, object w=None, object z=None):
    """ssbev(ab[, compute_v, lower, ldab, overwrite_ab, w, z]) -> (w, z, info)

    Parameters
    ----------
    ab : fwr_real_t_, 2D array, dimension(ldab, *), intent in
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(ldz, ldz), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(ldz, ldz), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, ldz, info
    cdef np.ndarray ab_, w_, z_, work_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], work_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    work_shape[0] = max(1, ((3 * n) - 1))
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = ldz
    z_ = fw_asfortranarray(z, fwr_real_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if ldz != z_shape[1]:
        raise ValueError("(ldz == z.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.ssbev(fw_jobz_f, fw_uplo_f, &n, &kd, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_real_t*>np.PyArray_DATA(w_), <fwr_real_t*>np.PyArray_DATA(z_), &ldz, <fwr_real_t*>np.PyArray_DATA(work_), &info, 1, 1)
    return (w_, z_, info,)
def dsbev(object ab, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object ldab=None, bint overwrite_ab=True, object w=None, object z=None):
    """dsbev(ab[, compute_v, lower, ldab, overwrite_ab, w, z]) -> (w, z, info)

    Parameters
    ----------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, *), intent in
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(ldz, ldz), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(ldz, ldz), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, n, kd, ldz, info
    cdef np.ndarray ab_, w_, z_, work_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], work_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    work_shape[0] = max(1, ((3 * n) - 1))
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = ldz
    z_ = fw_asfortranarray(z, fwr_dbl_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if ldz != z_shape[1]:
        raise ValueError("(ldz == z.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dsbev(fw_jobz_f, fw_uplo_f, &n, &kd, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(z_), &ldz, <fwr_dbl_t*>np.PyArray_DATA(work_), &info, 1, 1)
    return (w_, z_, info,)

def ssbevd(object ab, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object ldab=None, object liwork=None, bint overwrite_ab=True, object w=None, object z=None):
    """ssbevd(ab[, compute_v, lower, ldab, liwork, overwrite_ab, w, z]) -> (w, z, info)

    Parameters
    ----------
    ab : fwr_real_t_, 2D array, dimension(ldab, *), intent in
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    liwork : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(ldz, ldz), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(ldz, ldz), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, liwork_, n, kd, ldz, lwork, info
    cdef np.ndarray ab_, w_, z_, work_, iwork_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], work_shape[1], iwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    lwork = (1 + (5 * n) + (2 * n * n)) if compute_v else (2 * n)
    work_shape[0] = lwork
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    liwork_ = liwork if (liwork is not None) else (3 + (5 * n)) if compute_v else 1
    iwork_shape[0] = liwork_
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not (liwork_ >= ((3 + (5 * n)) if compute_v else 1)):
        raise ValueError('Condition on arguments not satisfied: liwork >= ((3 + (5 * n)) if compute_v else 1)')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = ldz
    z_ = fw_asfortranarray(z, fwr_real_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if ldz != z_shape[1]:
        raise ValueError("(ldz == z.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.ssbevd(fw_jobz_f, fw_uplo_f, &n, &kd, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_real_t*>np.PyArray_DATA(w_), <fwr_real_t*>np.PyArray_DATA(z_), &ldz, <fwr_real_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork_, &info, 1, 1)
    return (w_, z_, info,)
def dsbevd(object ab, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object ldab=None, object liwork=None, bint overwrite_ab=True, object w=None, object z=None):
    """dsbevd(ab[, compute_v, lower, ldab, liwork, overwrite_ab, w, z]) -> (w, z, info)

    Parameters
    ----------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, *), intent in
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    ldab : fwi_integer, intent in
    liwork : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(ldz, ldz), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(ldz, ldz), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, liwork_, n, kd, ldz, lwork, info
    cdef np.ndarray ab_, w_, z_, work_, iwork_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], work_shape[1], iwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    lwork = (1 + (5 * n) + (2 * n * n)) if compute_v else (2 * n)
    work_shape[0] = lwork
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    liwork_ = liwork if (liwork is not None) else (3 + (5 * n)) if compute_v else 1
    iwork_shape[0] = liwork_
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not (liwork_ >= ((3 + (5 * n)) if compute_v else 1)):
        raise ValueError('Condition on arguments not satisfied: liwork >= ((3 + (5 * n)) if compute_v else 1)')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = ldz
    z_ = fw_asfortranarray(z, fwr_dbl_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if ldz != z_shape[1]:
        raise ValueError("(ldz == z.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dsbevd(fw_jobz_f, fw_uplo_f, &n, &kd, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(z_), &ldz, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork_, &info, 1, 1)
    return (w_, z_, info,)

def ssbevx(object ab, fwr_real_t vl, fwr_real_t vu, fwi_integer_t il, fwi_integer_t iu, object ldab=None, fwi_integer_t compute_v=1, fwi_integer_t range=0, fwi_integer_t lower=0, fwr_real_t abstol=0.0, object mmax=None, bint overwrite_ab=True, object w=None, object z=None, object ifail=None):
    """ssbevx(ab, vl, vu, il, iu[, ldab, compute_v, range, lower, abstol, mmax, overwrite_ab, w, z, ifail]) -> (w, z, m, ifail, info)

    Parameters
    ----------
    ab : fwr_real_t_, 2D array, dimension(ldab, *), intent in
    vl : fwr_real_t_, intent in
    vu : fwr_real_t_, intent in
    il : fwi_integer, intent in
    iu : fwi_integer, intent in
    ldab : fwi_integer, intent in
    compute_v : fwi_integer, intent in
    range : fwi_integer, intent in
    lower : fwi_integer, intent in
    abstol : fwr_real_t_, intent in
    mmax : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(ldz, mmax), intent out
    ifail : fwi_integer, 1D array, dimension(ifail_len), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(ldz, mmax), intent out
    m : fwi_integer, intent out
    ifail : fwi_integer, 1D array, dimension(ifail_len), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_range_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, mmax_, n, kd, ldq, ldz, ifail_len, m, info
    cdef np.ndarray ab_, w_, z_, ifail_, q_, work_, iwork_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], ifail_shape[1], q_shape[2], work_shape[1], iwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    range_f = ("V" if (range == 1) else "I") if (range > 0) else "A"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_real_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    ldq = n if compute_v else 1
    q_shape[0] = ldq; q_shape[1] = ldq
    q_ = fw_asfortranarray(None, fwr_real_t_enum, 2, q_shape, False, True)
    m = 0
    work_shape[0] = 7 * n
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    iwork_shape[0] = 5 * n
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((il >= 1) and (il <= n)):
        raise ValueError('Condition on arguments not satisfied: (il >= 1) and (il <= n)')
    if not ((iu >= 1) and (iu <= n) and (iu >= il)):
        raise ValueError('Condition on arguments not satisfied: (iu >= 1) and (iu <= n) and (iu >= il)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((range == 2) or (range == 1) or (range == 0)):
        raise ValueError('Condition on arguments not satisfied: (range == 2) or (range == 1) or (range == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    mmax_ = mmax if (mmax is not None) else ((iu - il + 1) if (range == 2) else n) if compute_v else 1
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = mmax_
    z_ = fw_asfortranarray(z, fwr_real_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if not (0 <= mmax_ <= z_shape[1]):
        raise ValueError("(0 <= mmax <= z.shape[1]) not satisifed")
    ifail_len = n if compute_v else 1
    ifail_shape[0] = ifail_len
    ifail_ = fw_asfortranarray(ifail, fwi_integer_t_enum, 1, ifail_shape, False, True)
    if not (0 <= ifail_len <= ifail_shape[0]):
        raise ValueError("(0 <= ifail_len <= ifail.shape[0]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_range_f[0] = fw_aschar(range_f)
    if fw_range_f[0] == 0:
        raise ValueError("len(range_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.ssbevx(fw_jobz_f, fw_range_f, fw_uplo_f, &n, &kd, <fwr_real_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_real_t*>np.PyArray_DATA(q_), &ldq, &vl, &vu, &il, &iu, &abstol, &m, <fwr_real_t*>np.PyArray_DATA(w_), <fwr_real_t*>np.PyArray_DATA(z_), &ldz, <fwr_real_t*>np.PyArray_DATA(work_), <fwi_integer_t*>np.PyArray_DATA(iwork_), <fwi_integer_t*>np.PyArray_DATA(ifail_), &info, 1, 1, 1)
    return (w_, z_, m, ifail_, info,)
def dsbevx(object ab, fwr_dbl_t vl, fwr_dbl_t vu, fwi_integer_t il, fwi_integer_t iu, object ldab=None, fwi_integer_t compute_v=1, fwi_integer_t range=0, fwi_integer_t lower=0, fwr_dbl_t abstol=0.0, object mmax=None, bint overwrite_ab=True, object w=None, object z=None, object ifail=None):
    """dsbevx(ab, vl, vu, il, iu[, ldab, compute_v, range, lower, abstol, mmax, overwrite_ab, w, z, ifail]) -> (w, z, m, ifail, info)

    Parameters
    ----------
    ab : fwr_dbl_t_, 2D array, dimension(ldab, *), intent in
    vl : fwr_dbl_t_, intent in
    vu : fwr_dbl_t_, intent in
    il : fwi_integer, intent in
    iu : fwi_integer, intent in
    ldab : fwi_integer, intent in
    compute_v : fwi_integer, intent in
    range : fwi_integer, intent in
    lower : fwi_integer, intent in
    abstol : fwr_dbl_t_, intent in
    mmax : fwi_integer, intent in
    overwrite_ab : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(ldz, mmax), intent out
    ifail : fwi_integer, 1D array, dimension(ifail_len), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(ldz, mmax), intent out
    m : fwi_integer, intent out
    ifail : fwi_integer, 1D array, dimension(ifail_len), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_range_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t ldab_, mmax_, n, kd, ldq, ldz, ifail_len, m, info
    cdef np.ndarray ab_, w_, z_, ifail_, q_, work_, iwork_
    cdef np.npy_intp ab_shape[2], w_shape[1], z_shape[2], ifail_shape[1], q_shape[2], work_shape[1], iwork_shape[1]
    jobz_f = "V" if compute_v else "N"
    range_f = ("V" if (range == 1) else "I") if (range > 0) else "A"
    uplo_f = "L" if lower else "U"
    ab_ = fw_asfortranarray(ab, fwr_dbl_t_enum, 2, ab_shape, not overwrite_ab, False)
    kd = ab_shape[0] - 1
    n = ab_shape[1]
    ldq = n if compute_v else 1
    q_shape[0] = ldq; q_shape[1] = ldq
    q_ = fw_asfortranarray(None, fwr_dbl_t_enum, 2, q_shape, False, True)
    m = 0
    work_shape[0] = 7 * n
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    iwork_shape[0] = 5 * n
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    ldab_ = ldab if (ldab is not None) else ab_shape[0]
    if not ((il >= 1) and (il <= n)):
        raise ValueError('Condition on arguments not satisfied: (il >= 1) and (il <= n)')
    if not ((iu >= 1) and (iu <= n) and (iu >= il)):
        raise ValueError('Condition on arguments not satisfied: (iu >= 1) and (iu <= n) and (iu >= il)')
    if not (ab_shape[0] == ldab_):
        raise ValueError('Condition on arguments not satisfied: ab.shape[0] == ldab')
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((range == 2) or (range == 1) or (range == 0)):
        raise ValueError('Condition on arguments not satisfied: (range == 2) or (range == 1) or (range == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if ldab_ != ab_shape[0]:
        raise ValueError("(ldab == ab.shape[0]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    mmax_ = mmax if (mmax is not None) else ((iu - il + 1) if (range == 2) else n) if compute_v else 1
    ldz = n if compute_v else 1
    z_shape[0] = ldz; z_shape[1] = mmax_
    z_ = fw_asfortranarray(z, fwr_dbl_t_enum, 2, z_shape, False, True)
    if ldz != z_shape[0]:
        raise ValueError("(ldz == z.shape[0]) not satisifed")
    if not (0 <= mmax_ <= z_shape[1]):
        raise ValueError("(0 <= mmax <= z.shape[1]) not satisifed")
    ifail_len = n if compute_v else 1
    ifail_shape[0] = ifail_len
    ifail_ = fw_asfortranarray(ifail, fwi_integer_t_enum, 1, ifail_shape, False, True)
    if not (0 <= ifail_len <= ifail_shape[0]):
        raise ValueError("(0 <= ifail_len <= ifail.shape[0]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_range_f[0] = fw_aschar(range_f)
    if fw_range_f[0] == 0:
        raise ValueError("len(range_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dsbevx(fw_jobz_f, fw_range_f, fw_uplo_f, &n, &kd, <fwr_dbl_t*>np.PyArray_DATA(ab_), &ldab_, <fwr_dbl_t*>np.PyArray_DATA(q_), &ldq, &vl, &vu, &il, &iu, &abstol, &m, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(z_), &ldz, <fwr_dbl_t*>np.PyArray_DATA(work_), <fwi_integer_t*>np.PyArray_DATA(iwork_), <fwi_integer_t*>np.PyArray_DATA(ifail_), &info, 1, 1, 1)
    return (w_, z_, m, ifail_, info,)

def ssyev(object a, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object lwork=None, bint overwrite_a=False, object w=None):
    """ssyev(a[, compute_v, lower, lwork, overwrite_a, w]) -> (w, a, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t lwork_, n, info
    cdef np.ndarray a_, w_, work_
    cdef np.npy_intp a_shape[2], w_shape[1], work_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else (3 * n) - 1
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (lwork_ >= ((3 * n) - 1)):
        raise ValueError('Condition on arguments not satisfied: lwork >= ((3 * n) - 1)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.ssyev(fw_jobz_f, fw_uplo_f, &n, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(w_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, &info, 1, 1)
    return (w_, a_, info,)
def dsyev(object a, fwi_integer_t compute_v=1, fwi_integer_t lower=0, object lwork=None, bint overwrite_a=False, object w=None):
    """dsyev(a[, compute_v, lower, lwork, overwrite_a, w]) -> (w, a, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    compute_v : fwi_integer, intent in
    lower : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0], *fw_uplo_f = [0, 0]
    cdef fwi_integer_t lwork_, n, info
    cdef np.ndarray a_, w_, work_
    cdef np.npy_intp a_shape[2], w_shape[1], work_shape[1]
    jobz_f = "V" if compute_v else "N"
    uplo_f = "L" if lower else "U"
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else (3 * n) - 1
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_v == 1) or (compute_v == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_v == 1) or (compute_v == 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (lwork_ >= ((3 * n) - 1)):
        raise ValueError('Condition on arguments not satisfied: lwork >= ((3 * n) - 1)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dsyev(fw_jobz_f, fw_uplo_f, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, &info, 1, 1)
    return (w_, a_, info,)

def ssyevr(object a, object jobz='V', object range='A', object uplo='L', fwi_integer_t il=1, object iu=None, object lwork=None, bint overwrite_a=False, object w=None, object z=None):
    """ssyevr(a[, jobz, range, uplo, il, iu, lwork, overwrite_a, w, z]) -> (w, z, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent in
    jobz : object_, intent in
    range : object_, intent in
    uplo : object_, intent in
    il : fwi_integer, intent in
    iu : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(n, m), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(n, m), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_range = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t iu_, lwork_, n, lda, m, ldz, liwork, info
    cdef np.ndarray a_, w_, z_, isuppz_, work_, iwork_
    cdef np.npy_intp a_shape[2], w_shape[1], z_shape[2], isuppz_shape[1], work_shape[1], iwork_shape[1]
    cdef fwr_real_t vl, vu, abstol
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    vl = 0
    vu = 1
    abstol = 0.
    iu_ = iu if (iu is not None) else n
    m = iu_ - il + 1
    isuppz_shape[0] = 2 * m
    isuppz_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, isuppz_shape, False, True)
    lwork_ = lwork if (lwork is not None) else 26 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    liwork = 10 * n
    iwork_shape[0] = liwork
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    z_shape[0] = n; z_shape[1] = m
    z_ = fw_asfortranarray(z, fwr_real_t_enum, 2, z_shape, False, True)
    ldz = n
    if not (z_shape[0] == ldz):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == ldz')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    if n != z_shape[0]:
        raise ValueError("(n == z.shape[0]) not satisifed")
    if m != z_shape[1]:
        raise ValueError("(m == z.shape[1]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_range[0] = fw_aschar(range)
    if fw_range[0] == 0:
        raise ValueError("len(range) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.ssyevr(fw_jobz, fw_range, fw_uplo, &n, <fwr_real_t*>np.PyArray_DATA(a_), &lda, &vl, &vu, &il, &iu_, &abstol, &m, <fwr_real_t*>np.PyArray_DATA(w_), <fwr_real_t*>np.PyArray_DATA(z_), &ldz, <fwi_integer_t*>np.PyArray_DATA(isuppz_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &info, 1, 1, 1)
    return (w_, z_, info,)
def dsyevr(object a, object jobz='V', object range='A', object uplo='L', fwi_integer_t il=1, object iu=None, object lwork=None, bint overwrite_a=False, object w=None, object z=None):
    """dsyevr(a[, jobz, range, uplo, il, iu, lwork, overwrite_a, w, z]) -> (w, z, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    jobz : object_, intent in
    range : object_, intent in
    uplo : object_, intent in
    il : fwi_integer, intent in
    iu : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(n, m), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(n, m), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_range = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t iu_, lwork_, n, lda, m, ldz, liwork, info
    cdef np.ndarray a_, w_, z_, isuppz_, work_, iwork_
    cdef np.npy_intp a_shape[2], w_shape[1], z_shape[2], isuppz_shape[1], work_shape[1], iwork_shape[1]
    cdef fwr_dbl_t vl, vu, abstol
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    vl = 0
    vu = 1
    abstol = 0.
    iu_ = iu if (iu is not None) else n
    m = iu_ - il + 1
    isuppz_shape[0] = 2 * m
    isuppz_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, isuppz_shape, False, True)
    lwork_ = lwork if (lwork is not None) else 26 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    liwork = 10 * n
    iwork_shape[0] = liwork
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    z_shape[0] = n; z_shape[1] = m
    z_ = fw_asfortranarray(z, fwr_dbl_t_enum, 2, z_shape, False, True)
    ldz = n
    if not (z_shape[0] == ldz):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == ldz')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    if n != z_shape[0]:
        raise ValueError("(n == z.shape[0]) not satisifed")
    if m != z_shape[1]:
        raise ValueError("(m == z.shape[1]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_range[0] = fw_aschar(range)
    if fw_range[0] == 0:
        raise ValueError("len(range) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.dsyevr(fw_jobz, fw_range, fw_uplo, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &lda, &vl, &vu, &il, &iu_, &abstol, &m, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(z_), &ldz, <fwi_integer_t*>np.PyArray_DATA(isuppz_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &info, 1, 1, 1)
    return (w_, z_, info,)

def ssygv(object a, object b, fwi_integer_t itype=1, object jobz='V', object uplo='L', bint overwrite_a=False, bint overwrite_b=False, object w=None):
    """ssygv(a, b[, itype, jobz, uplo, overwrite_a, overwrite_b, w]) -> (a, w, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    b : fwr_real_t_, 2D array, dimension(n, n), intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    w : fwr_real_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t n, lda, ldb, lwork, info
    cdef np.ndarray a_, b_, w_, work_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], work_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    lwork = (3 * n) - 1
    work_shape[0] = lwork
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    info = 0
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.ssygv(&itype, fw_jobz, fw_uplo, &n, <fwr_real_t*>np.PyArray_DATA(a_), &lda, <fwr_real_t*>np.PyArray_DATA(b_), &ldb, <fwr_real_t*>np.PyArray_DATA(w_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork, &info, 1, 1)
    return (a_, w_, info,)
def dsygv(object a, object b, fwi_integer_t itype=1, object jobz='V', object uplo='L', bint overwrite_a=False, bint overwrite_b=False, object w=None):
    """dsygv(a, b[, itype, jobz, uplo, overwrite_a, overwrite_b, w]) -> (a, w, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    b : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t n, lda, ldb, lwork, info
    cdef np.ndarray a_, b_, w_, work_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], work_shape[1]
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    lwork = (3 * n) - 1
    work_shape[0] = lwork
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    info = 0
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.dsygv(&itype, fw_jobz, fw_uplo, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &lda, <fwr_dbl_t*>np.PyArray_DATA(b_), &ldb, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, &info, 1, 1)
    return (a_, w_, info,)

def ssygvd(object a, object b, fwi_integer_t itype=1, object jobz='V', object uplo='L', object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object w=None):
    """ssygvd(a, b[, itype, jobz, uplo, lwork, overwrite_a, overwrite_b, w]) -> (a, w, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    b : fwr_real_t_, 2D array, dimension(n, n), intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(n, n), intent inout
    w : fwr_real_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t lwork_, n, lda, ldb, liwork, info
    cdef np.ndarray a_, b_, w_, work_, iwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], work_shape[1], iwork_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    lwork_ = lwork if (lwork is not None) else 1 + (6 * n) + (2 * n * n)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    liwork = 3 + (5 * n)
    iwork_shape[0] = liwork
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.ssygvd(&itype, fw_jobz, fw_uplo, &n, <fwr_real_t*>np.PyArray_DATA(a_), &lda, <fwr_real_t*>np.PyArray_DATA(b_), &ldb, <fwr_real_t*>np.PyArray_DATA(w_), <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &info, 1, 1)
    return (a_, w_, info,)
def dsygvd(object a, object b, fwi_integer_t itype=1, object jobz='V', object uplo='L', object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object w=None):
    """dsygvd(a, b[, itype, jobz, uplo, lwork, overwrite_a, overwrite_b, w]) -> (a, w, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    b : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0]
    cdef fwi_integer_t lwork_, n, lda, ldb, liwork, info
    cdef np.ndarray a_, b_, w_, work_, iwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], work_shape[1], iwork_shape[1]
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    lwork_ = lwork if (lwork is not None) else 1 + (6 * n) + (2 * n * n)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    liwork = 3 + (5 * n)
    iwork_shape[0] = liwork
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.dsygvd(&itype, fw_jobz, fw_uplo, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &lda, <fwr_dbl_t*>np.PyArray_DATA(b_), &ldb, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, &info, 1, 1)
    return (a_, w_, info,)

def ssygvx(object a, object b, fwi_integer_t iu, fwi_integer_t itype=1, object jobz='V', object uplo='L', fwi_integer_t il=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object w=None, object z=None, object ifail=None):
    """ssygvx(a, b, iu[, itype, jobz, uplo, il, lwork, overwrite_a, overwrite_b, w, z, ifail]) -> (w, z, ifail, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent in
    b : fwr_real_t_, 2D array, dimension(n, n), intent in
    iu : fwi_integer, intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    il : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(n, m), intent out
    ifail : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    w : fwr_real_t_, 1D array, dimension(n), intent out
    z : fwr_real_t_, 2D array, dimension(n, m), intent out
    ifail : fwi_integer, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0], *fw_range = [0, 0]
    cdef fwi_integer_t lwork_, n, lda, ldb, m, ldz, info
    cdef np.ndarray a_, b_, w_, z_, ifail_, work_, iwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], z_shape[2], ifail_shape[1], work_shape[1], iwork_shape[1]
    cdef fwr_real_t vl, vu, abstol
    range = 'I'
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    vl = 0.
    vu = 0.
    abstol = 0.
    lwork_ = lwork if (lwork is not None) else 8 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_real_t_enum, 1, work_shape, False, True)
    iwork_shape[0] = 5 * n
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    m = iu - il + 1
    z_shape[0] = n; z_shape[1] = m
    z_ = fw_asfortranarray(z, fwr_real_t_enum, 2, z_shape, False, True)
    ldz = n
    if not (z_shape[0] == ldz):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == ldz')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_real_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    if n != z_shape[0]:
        raise ValueError("(n == z.shape[0]) not satisifed")
    if m != z_shape[1]:
        raise ValueError("(m == z.shape[1]) not satisifed")
    ifail_shape[0] = n
    ifail_ = fw_asfortranarray(ifail, fwi_integer_t_enum, 1, ifail_shape, False, True)
    if n != ifail_shape[0]:
        raise ValueError("(n == ifail.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_range[0] = fw_aschar(range)
    if fw_range[0] == 0:
        raise ValueError("len(range) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.ssygvx(&itype, fw_jobz, fw_range, fw_uplo, &n, <fwr_real_t*>np.PyArray_DATA(a_), &lda, <fwr_real_t*>np.PyArray_DATA(b_), &ldb, &vl, &vu, &il, &iu, &abstol, &m, <fwr_real_t*>np.PyArray_DATA(w_), <fwr_real_t*>np.PyArray_DATA(z_), &ldz, <fwr_real_t*>np.PyArray_DATA(work_), &lwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), <fwi_integer_t*>np.PyArray_DATA(ifail_), &info, 1, 1, 1)
    return (w_, z_, ifail_, info,)
def dsygvx(object a, object b, fwi_integer_t iu, fwi_integer_t itype=1, object jobz='V', object uplo='L', fwi_integer_t il=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object w=None, object z=None, object ifail=None):
    """dsygvx(a, b, iu[, itype, jobz, uplo, il, lwork, overwrite_a, overwrite_b, w, z, ifail]) -> (w, z, ifail, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    b : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    iu : fwi_integer, intent in
    itype : fwi_integer, intent in
    jobz : object_, intent in
    uplo : object_, intent in
    il : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(n, m), intent out
    ifail : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    w : fwr_dbl_t_, 1D array, dimension(n), intent out
    z : fwr_dbl_t_, 2D array, dimension(n, m), intent out
    ifail : fwi_integer, 1D array, dimension(n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz = [0, 0], *fw_uplo = [0, 0], *fw_range = [0, 0]
    cdef fwi_integer_t lwork_, n, lda, ldb, m, ldz, info
    cdef np.ndarray a_, b_, w_, z_, ifail_, work_, iwork_
    cdef np.npy_intp a_shape[2], b_shape[2], w_shape[1], z_shape[2], ifail_shape[1], work_shape[1], iwork_shape[1]
    cdef fwr_dbl_t vl, vu, abstol
    range = 'I'
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False, 8)
    n = a_shape[0]
    lda = n
    ldb = n
    vl = 0.
    vu = 0.
    abstol = 0.
    lwork_ = lwork if (lwork is not None) else 8 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, work_shape, False, True)
    iwork_shape[0] = 5 * n
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    m = iu - il + 1
    z_shape[0] = n; z_shape[1] = m
    z_ = fw_asfortranarray(z, fwr_dbl_t_enum, 2, z_shape, False, True)
    ldz = n
    if not (z_shape[0] == ldz):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == ldz')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False, 8)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    if n != z_shape[0]:
        raise ValueError("(n == z.shape[0]) not satisifed")
    if m != z_shape[1]:
        raise ValueError("(m == z.shape[1]) not satisifed")
    ifail_shape[0] = n
    ifail_ = fw_asfortranarray(ifail, fwi_integer_t_enum, 1, ifail_shape, False, True)
    if n != ifail_shape[0]:
        raise ValueError("(n == ifail.shape[0]) not satisifed")
    fw_jobz[0] = fw_aschar(jobz)
    if fw_jobz[0] == 0:
        raise ValueError("len(jobz) != 1")
    fw_range[0] = fw_aschar(range)
    if fw_range[0] == 0:
        raise ValueError("len(range) != 1")
    fw_uplo[0] = fw_aschar(uplo)
    if fw_uplo[0] == 0:
        raise ValueError("len(uplo) != 1")
    fc.dsygvx(&itype, fw_jobz, fw_range, fw_uplo, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &lda, <fwr_dbl_t*>np.PyArray_DATA(b_), &ldb, &vl, &vu, &il, &iu, &abstol, &m, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(z_), &ldz, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork_, <fwi_integer_t*>np.PyArray_DATA(iwork_), <fwi_integer_t*>np.PyArray_DATA(ifail_), &info, 1, 1, 1)
    return (w_, z_, ifail_, info,)

def strtri(object c, fwi_integer_t lower=0, fwi_integer_t unitdiag=0, bint overwrite_c=False):
    """strtri(c[, lower, unitdiag, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwr_real_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwr_real_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    diag_f = "U" if unitdiag else "N"
    info = 0
    c_ = fw_asfortranarray(c, fwr_real_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.strtri(fw_uplo_f, fw_diag_f, &n, <fwr_real_t*>np.PyArray_DATA(c_), &n, &info, 1, 1)
    return (c_, info,)
def dtrtri(object c, fwi_integer_t lower=0, fwi_integer_t unitdiag=0, bint overwrite_c=False):
    """dtrtri(c[, lower, unitdiag, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwr_dbl_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    diag_f = "U" if unitdiag else "N"
    info = 0
    c_ = fw_asfortranarray(c, fwr_dbl_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.dtrtri(fw_uplo_f, fw_diag_f, &n, <fwr_dbl_t*>np.PyArray_DATA(c_), &n, &info, 1, 1)
    return (c_, info,)
def ctrtri(object c, fwi_integer_t lower=0, fwi_integer_t unitdiag=0, bint overwrite_c=False):
    """ctrtri(c[, lower, unitdiag, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwc_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    diag_f = "U" if unitdiag else "N"
    info = 0
    c_ = fw_asfortranarray(c, fwc_complex_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.ctrtri(fw_uplo_f, fw_diag_f, &n, <fwc_complex_t*>np.PyArray_DATA(c_), &n, &info, 1, 1)
    return (c_, info,)
def ztrtri(object c, fwi_integer_t lower=0, fwi_integer_t unitdiag=0, bint overwrite_c=False):
    """ztrtri(c[, lower, unitdiag, overwrite_c]) -> (c, info)

    Parameters
    ----------
    c : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    lower : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t n, info
    cdef np.ndarray c_
    cdef np.npy_intp c_shape[2]
    uplo_f = "L" if lower else "U"
    diag_f = "U" if unitdiag else "N"
    info = 0
    c_ = fw_asfortranarray(c, fwc_dbl_complex_t_enum, 2, c_shape, not overwrite_c, False)
    if not (c_shape[0] == c_shape[1]):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == c.shape[1]')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    n = c_shape[0]
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    if not (0 <= n <= c_shape[1]):
        raise ValueError("(0 <= n <= c.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.ztrtri(fw_uplo_f, fw_diag_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(c_), &n, &info, 1, 1)
    return (c_, info,)

def strtrs(object a, object b, fwi_integer_t lower=0, fwi_integer_t trans=0, fwi_integer_t unitdiag=0, object lda=None, bint overwrite_b=False):
    """strtrs(a, b[, lower, trans, unitdiag, lda, overwrite_b]) -> (b, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(lda, n), intent in
    b : fwr_real_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    trans : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    lda : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_real_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0], *fw_trans_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t lda_, n, nrhs, ldb, info
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    diag_f = "U" if unitdiag else "N"
    info = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, False, False)
    lda_ = lda if (lda is not None) else a_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    if not (a_shape[0] == lda_):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == lda')
    n = a_shape[1]
    if lda_ != a_shape[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.strtrs(fw_uplo_f, fw_trans_f, fw_diag_f, &n, &nrhs, <fwr_real_t*>np.PyArray_DATA(a_), &lda_, <fwr_real_t*>np.PyArray_DATA(b_), &ldb, &info, 1, 1, 1)
    return (b_, info,)
def dtrtrs(object a, object b, fwi_integer_t lower=0, fwi_integer_t trans=0, fwi_integer_t unitdiag=0, object lda=None, bint overwrite_b=False):
    """dtrtrs(a, b[, lower, trans, unitdiag, lda, overwrite_b]) -> (b, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(lda, n), intent in
    b : fwr_dbl_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    trans : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    lda : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwr_dbl_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0], *fw_trans_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t lda_, n, nrhs, ldb, info
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    diag_f = "U" if unitdiag else "N"
    info = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, False, False)
    lda_ = lda if (lda is not None) else a_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    if not (a_shape[0] == lda_):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == lda')
    n = a_shape[1]
    if lda_ != a_shape[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.dtrtrs(fw_uplo_f, fw_trans_f, fw_diag_f, &n, &nrhs, <fwr_dbl_t*>np.PyArray_DATA(a_), &lda_, <fwr_dbl_t*>np.PyArray_DATA(b_), &ldb, &info, 1, 1, 1)
    return (b_, info,)
def ctrtrs(object a, object b, fwi_integer_t lower=0, fwi_integer_t trans=0, fwi_integer_t unitdiag=0, object lda=None, bint overwrite_b=False):
    """ctrtrs(a, b[, lower, trans, unitdiag, lda, overwrite_b]) -> (b, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(lda, n), intent in
    b : fwc_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    trans : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    lda : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0], *fw_trans_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t lda_, n, nrhs, ldb, info
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    diag_f = "U" if unitdiag else "N"
    info = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, False, False)
    lda_ = lda if (lda is not None) else a_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    if not (a_shape[0] == lda_):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == lda')
    n = a_shape[1]
    if lda_ != a_shape[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.ctrtrs(fw_uplo_f, fw_trans_f, fw_diag_f, &n, &nrhs, <fwc_complex_t*>np.PyArray_DATA(a_), &lda_, <fwc_complex_t*>np.PyArray_DATA(b_), &ldb, &info, 1, 1, 1)
    return (b_, info,)
def ztrtrs(object a, object b, fwi_integer_t lower=0, fwi_integer_t trans=0, fwi_integer_t unitdiag=0, object lda=None, bint overwrite_b=False):
    """ztrtrs(a, b[, lower, trans, unitdiag, lda, overwrite_b]) -> (b, info)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(lda, n), intent in
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    lower : fwi_integer, intent in
    trans : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    lda : fwi_integer, intent in
    overwrite_b : bint_, intent in

    Returns
    -------
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, nrhs), intent inout
    info : fwi_integer, intent out

    """
    cdef char *fw_uplo_f = [0, 0], *fw_trans_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t lda_, n, nrhs, ldb, info
    cdef np.ndarray a_, b_
    cdef np.npy_intp a_shape[2], b_shape[2]
    uplo_f = "L" if lower else "U"
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    diag_f = "U" if unitdiag else "N"
    info = 0
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, False, False)
    lda_ = lda if (lda is not None) else a_shape[0]
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    if not (a_shape[0] == lda_):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == lda')
    n = a_shape[1]
    if lda_ != a_shape[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    ldb = b_shape[0]
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.ztrtrs(fw_uplo_f, fw_trans_f, fw_diag_f, &n, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &lda_, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &ldb, &info, 1, 1, 1)
    return (b_, info,)


def zgeev(object a, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, object w=None, object vl=None, object vr=None):
    """zgeev(a[, compute_vl, compute_vr, lwork, overwrite_a, w, vl, vr]) -> (w, vl, vr, info)

    Parameters
    ----------
    a : fwc_dbl_complex, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    w : fwc_dbl_complex, 1D array, dimension(n), intent out
    vl : fwc_dbl_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_dbl_complex, 2D array, dimension(ldvr, n), intent out

    Returns
    -------
    w : fwc_dbl_complex, 1D array, dimension(n), intent out
    vl : fwc_dbl_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_dbl_complex, 2D array, dimension(ldvr, n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, w_, vl_, vr_, work_, rwork_
    cdef np.npy_intp a_shape[2], w_shape[1], vl_shape[2], vr_shape[2], work_shape[1], rwork_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 2 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = 2 * n
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not (lwork_ >= (2 * n)):
        raise ValueError('Condition on arguments not satisfied: lwork >= (2 * n)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    w_shape[0] = n
    w_ = fw_asfortranarray(w, fwc_dbl_complex_t_enum, 1, w_shape, False, True)
    if n != w_shape[0]:
        raise ValueError("(n == w.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwc_dbl_complex_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if not (0 <= n <= vl_shape[1]):
        raise ValueError("(0 <= n <= vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwc_dbl_complex_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if not (0 <= n <= vr_shape[1]):
        raise ValueError("(0 <= n <= vr.shape[1]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.zgeev(fw_jobvl_f, fw_jobvr_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(w_), <fwc_dbl_complex_t*>np.PyArray_DATA(vl_), &ldvl, <fwc_dbl_complex_t*>np.PyArray_DATA(vr_), &ldvr, <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (w_, vl_, vr_, info,)


def zgegv(object a, object b, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object alpha=None, object beta=None, object vl=None, object vr=None):
    """zgegv(a, b[, compute_vl, compute_vr, lwork, overwrite_a, overwrite_b, alpha, beta, vl, vr]) -> (alpha, beta, vl, vr, info)

    Parameters
    ----------
    a : fwc_dbl_complex, 2D array, dimension(n, n), intent in
    b : fwc_dbl_complex, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    alpha : fwc_dbl_complex, 1D array, dimension(n), intent out
    beta : fwc_dbl_complex, 1D array, dimension(n), intent out
    vl : fwc_dbl_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_dbl_complex, 2D array, dimension(ldvr, n), intent out

    Returns
    -------
    alpha : fwc_dbl_complex, 1D array, dimension(n), intent out
    beta : fwc_dbl_complex, 1D array, dimension(n), intent out
    vl : fwc_dbl_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_dbl_complex, 2D array, dimension(ldvr, n), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, b_, alpha_, beta_, vl_, vr_, work_, rwork_
    cdef np.npy_intp a_shape[2], b_shape[2], alpha_shape[1], beta_shape[1], vl_shape[2], vr_shape[2], work_shape[1], rwork_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    lwork_ = lwork if (lwork is not None) else 2 * n
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = 8 * n
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    info = 0
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((b_shape[0] == b_shape[1]) and (b_shape[0] == n)):
        raise ValueError('Condition on arguments not satisfied: (b.shape[0] == b.shape[1]) and (b.shape[0] == n)')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not (lwork_ >= (2 * n)):
        raise ValueError('Condition on arguments not satisfied: lwork >= (2 * n)')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if n != b_shape[1]:
        raise ValueError("(n == b.shape[1]) not satisifed")
    alpha_shape[0] = n
    alpha_ = fw_asfortranarray(alpha, fwc_dbl_complex_t_enum, 1, alpha_shape, False, True)
    if n != alpha_shape[0]:
        raise ValueError("(n == alpha.shape[0]) not satisifed")
    beta_shape[0] = n
    beta_ = fw_asfortranarray(beta, fwc_dbl_complex_t_enum, 1, beta_shape, False, True)
    if n != beta_shape[0]:
        raise ValueError("(n == beta.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwc_dbl_complex_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if not (0 <= n <= vl_shape[1]):
        raise ValueError("(0 <= n <= vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwc_dbl_complex_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if not (0 <= n <= vr_shape[1]):
        raise ValueError("(0 <= n <= vr.shape[1]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.zgegv(fw_jobvl_f, fw_jobvr_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(alpha_), <fwc_dbl_complex_t*>np.PyArray_DATA(beta_), <fwc_dbl_complex_t*>np.PyArray_DATA(vl_), &ldvl, <fwc_dbl_complex_t*>np.PyArray_DATA(vr_), &ldvr, <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (alpha_, beta_, vl_, vr_, info,)


def zgelss(object a, object b, object cond=None, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object s=None):
    """zgelss(a, b[, cond, lwork, overwrite_a, overwrite_b, s]) -> (a, b, s, r, info)

    Parameters
    ----------
    a : fwc_dbl_complex, 2D array, dimension(m, n), intent inout
    b : fwc_dbl_complex, 2D array, dimension(maxmn, nrhs), intent inout
    cond : fwr_dbl, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    s : fwr_dbl, 1D array, dimension(minmn), intent out

    Returns
    -------
    a : fwc_dbl_complex, 2D array, dimension(m, n), intent inout
    b : fwc_dbl_complex, 2D array, dimension(maxmn, nrhs), intent inout
    s : fwr_dbl, 1D array, dimension(minmn), intent out
    r : fwi_integer, intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t lwork_, m, n, minmn, maxmn, nrhs, r, info
    cdef fwr_dbl_t cond_
    cdef np.ndarray a_, b_, s_, work_, rwork_
    cdef np.npy_intp a_shape[2], b_shape[2], s_shape[1], work_shape[1], rwork_shape[1]
    r = 0
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    nrhs = b_shape[1]
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    maxmn = max(m, n)
    minmn = min(m, n)
    cond_ = cond if (cond is not None) else -1.0
    lwork_ = lwork if (lwork is not None) else (2 * minmn) + max(maxmn, nrhs)
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    rwork_shape[0] = (5 * minmn) - 1
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    info = 0
    if not (maxmn == b_shape[0]):
        raise ValueError('Condition on arguments not satisfied: maxmn == b.shape[0]')
    if not (lwork_ >= 1):
        raise ValueError('Condition on arguments not satisfied: lwork >= 1')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if maxmn != b_shape[0]:
        raise ValueError("(maxmn == b.shape[0]) not satisifed")
    if not (0 <= nrhs <= b_shape[1]):
        raise ValueError("(0 <= nrhs <= b.shape[1]) not satisifed")
    s_shape[0] = minmn
    s_ = fw_asfortranarray(s, fwr_dbl_t_enum, 1, s_shape, False, True)
    if minmn != s_shape[0]:
        raise ValueError("(minmn == s.shape[0]) not satisifed")
    fc.zgelss(&m, &n, &nrhs, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &maxmn, <fwr_dbl_t*>np.PyArray_DATA(s_), &cond_, &r, <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &info)
    return (a_, b_, s_, r, info,)


def zgesdd(object a, fwi_integer_t compute_uv=1, object lwork=None, bint overwrite_a=False, object u=None, object s=None, object vt=None):
    """zgesdd(a[, compute_uv, lwork, overwrite_a, u, s, vt]) -> (u, s, vt, info)

    Parameters
    ----------
    a : fwc_dbl_complex, 2D array, dimension(m, n), intent in
    compute_uv : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    u : fwc_dbl_complex, 2D array, dimension(du, du), intent out
    s : fwr_dbl, 1D array, dimension(minmn), intent out
    vt : fwc_dbl_complex, 2D array, dimension(dvt, dvt), intent out

    Returns
    -------
    u : fwc_dbl_complex, 2D array, dimension(du, du), intent out
    s : fwr_dbl, 1D array, dimension(minmn), intent out
    vt : fwc_dbl_complex, 2D array, dimension(dvt, dvt), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobz_f = [0, 0]
    cdef fwi_integer_t lwork_, m, n, minmn, du, dvt, rwork_len, info
    cdef np.ndarray a_, u_, s_, vt_, work_, rwork_, iwork_
    cdef np.npy_intp a_shape[2], u_shape[2], s_shape[1], vt_shape[2], work_shape[1], rwork_shape[1], iwork_shape[1]
    jobz_f = "A" if compute_uv else "N"
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    minmn = min(m, n)
    lwork_ = lwork if (lwork is not None) else ((2 * minmn * minmn) + max(m, n) + (2 * minmn)) if compute_uv else ((2 * minmn) + max(m, n))
    work_shape[0] = lwork_
    work_ = fw_asfortranarray(None, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    rwork_len = ((5 * minmn * minmn) + (7 * minmn)) if compute_uv else (5 * minmn)
    rwork_shape[0] = rwork_len
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    iwork_shape[0] = 8 * minmn
    iwork_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwork_shape, False, True)
    info = 0
    if not ((compute_uv == 0) or (compute_uv == 1)):
        raise ValueError('Condition on arguments not satisfied: (compute_uv == 0) or (compute_uv == 1)')
    if not (lwork_ >= (((2 * minmn * minmn) + max(m, n) + (2 * minmn)) if compute_uv else ((2 * minmn) + max(m, n)))):
        raise ValueError('Condition on arguments not satisfied: lwork >= (((2 * minmn * minmn) + max(m, n) + (2 * minmn)) if compute_uv else ((2 * minmn) + max(m, n)))')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    du = m if compute_uv else 1
    u_shape[0] = du; u_shape[1] = du
    u_ = fw_asfortranarray(u, fwc_dbl_complex_t_enum, 2, u_shape, False, True)
    if du != u_shape[0]:
        raise ValueError("(du == u.shape[0]) not satisifed")
    if du != u_shape[1]:
        raise ValueError("(du == u.shape[1]) not satisifed")
    s_shape[0] = minmn
    s_ = fw_asfortranarray(s, fwr_dbl_t_enum, 1, s_shape, False, True)
    if minmn != s_shape[0]:
        raise ValueError("(minmn == s.shape[0]) not satisifed")
    dvt = n if compute_uv else 1
    vt_shape[0] = dvt; vt_shape[1] = dvt
    vt_ = fw_asfortranarray(vt, fwc_dbl_complex_t_enum, 2, vt_shape, False, True)
    if dvt != vt_shape[0]:
        raise ValueError("(dvt == vt.shape[0]) not satisifed")
    if dvt != vt_shape[1]:
        raise ValueError("(dvt == vt.shape[1]) not satisifed")
    fw_jobz_f[0] = fw_aschar(jobz_f)
    if fw_jobz_f[0] == 0:
        raise ValueError("len(jobz_f) != 1")
    fc.zgesdd(fw_jobz_f, &m, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, <fwr_dbl_t*>np.PyArray_DATA(s_), <fwc_dbl_complex_t*>np.PyArray_DATA(u_), &du, <fwc_dbl_complex_t*>np.PyArray_DATA(vt_), &dvt, <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), <fwi_integer_t*>np.PyArray_DATA(iwork_), &info, 1)
    return (u_, s_, vt_, info,)


def zggev(object a, object b, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1, object lwork=None, bint overwrite_a=False, bint overwrite_b=False, object alpha=None, object beta=None, object vl=None, object vr=None, object work=None):
    """zggev(a, b[, compute_vl, compute_vr, lwork, overwrite_a, overwrite_b, alpha, beta, vl, vr, work]) -> (alpha, beta, vl, vr, work, info)

    Parameters
    ----------
    a : fwc_dbl_complex, 2D array, dimension(n, n), intent in
    b : fwc_dbl_complex, 2D array, dimension(n, n), intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in
    lwork : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    alpha : fwc_dbl_complex, 1D array, dimension(n), intent out
    beta : fwc_dbl_complex, 1D array, dimension(n), intent out
    vl : fwc_dbl_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_dbl_complex, 2D array, dimension(ldvr, n), intent out
    work : fwc_dbl_complex, 1D array, dimension(max(lwork,1)), intent out

    Returns
    -------
    alpha : fwc_dbl_complex, 1D array, dimension(n), intent out
    beta : fwc_dbl_complex, 1D array, dimension(n), intent out
    vl : fwc_dbl_complex, 2D array, dimension(ldvl, n), intent out
    vr : fwc_dbl_complex, 2D array, dimension(ldvr, n), intent out
    work : fwc_dbl_complex, 1D array, dimension(max(lwork,1)), intent out
    info : fwi_integer, intent out

    """
    cdef char *fw_jobvl_f = [0, 0], *fw_jobvr_f = [0, 0]
    cdef fwi_integer_t lwork_, n, ldvl, ldvr, info
    cdef np.ndarray a_, b_, alpha_, beta_, vl_, vr_, work_, rwork_
    cdef np.npy_intp a_shape[2], b_shape[2], alpha_shape[1], beta_shape[1], vl_shape[2], vr_shape[2], work_shape[1], rwork_shape[1]
    jobvl_f = "V" if compute_vl else "N"
    jobvr_f = "V" if compute_vr else "N"
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    rwork_shape[0] = 8 * n
    rwork_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, rwork_shape, False, True)
    info = 0
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, not overwrite_b, False)
    lwork_ = lwork if (lwork is not None) else 2 * n
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not (b_shape[0] == b_shape[1]):
        raise ValueError('Condition on arguments not satisfied: b.shape[0] == b.shape[1]')
    if not ((compute_vl == 1) or (compute_vl == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vl == 1) or (compute_vl == 0)')
    if not ((compute_vr == 1) or (compute_vr == 0)):
        raise ValueError('Condition on arguments not satisfied: (compute_vr == 1) or (compute_vr == 0)')
    if not ((lwork_ == -1) or (lwork_ >= max(1, (2 * n)))):
        raise ValueError('Condition on arguments not satisfied: (lwork == -1) or (lwork >= max(1, (2 * n)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= n <= b_shape[1]):
        raise ValueError("(0 <= n <= b.shape[1]) not satisifed")
    alpha_shape[0] = n
    alpha_ = fw_asfortranarray(alpha, fwc_dbl_complex_t_enum, 1, alpha_shape, False, True)
    if n != alpha_shape[0]:
        raise ValueError("(n == alpha.shape[0]) not satisifed")
    beta_shape[0] = n
    beta_ = fw_asfortranarray(beta, fwc_dbl_complex_t_enum, 1, beta_shape, False, True)
    if n != beta_shape[0]:
        raise ValueError("(n == beta.shape[0]) not satisifed")
    ldvl = n if compute_vl else 1
    vl_shape[0] = ldvl; vl_shape[1] = n
    vl_ = fw_asfortranarray(vl, fwc_dbl_complex_t_enum, 2, vl_shape, False, True)
    if ldvl != vl_shape[0]:
        raise ValueError("(ldvl == vl.shape[0]) not satisifed")
    if n != vl_shape[1]:
        raise ValueError("(n == vl.shape[1]) not satisifed")
    ldvr = n if compute_vr else 1
    vr_shape[0] = ldvr; vr_shape[1] = n
    vr_ = fw_asfortranarray(vr, fwc_dbl_complex_t_enum, 2, vr_shape, False, True)
    if ldvr != vr_shape[0]:
        raise ValueError("(ldvr == vr.shape[0]) not satisifed")
    if n != vr_shape[1]:
        raise ValueError("(n == vr.shape[1]) not satisifed")
    work_shape[0] = max(lwork_, 1)
    work_ = fw_asfortranarray(work, fwc_dbl_complex_t_enum, 1, work_shape, False, True)
    if max(lwork_, 1) != work_shape[0]:
        raise ValueError("(max(lwork, 1) == work.shape[0]) not satisifed")
    fw_jobvl_f[0] = fw_aschar(jobvl_f)
    if fw_jobvl_f[0] == 0:
        raise ValueError("len(jobvl_f) != 1")
    fw_jobvr_f[0] = fw_aschar(jobvr_f)
    if fw_jobvr_f[0] == 0:
        raise ValueError("len(jobvr_f) != 1")
    fc.zggev(fw_jobvl_f, fw_jobvr_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(alpha_), <fwc_dbl_complex_t*>np.PyArray_DATA(beta_), <fwc_dbl_complex_t*>np.PyArray_DATA(vl_), &ldvl, <fwc_dbl_complex_t*>np.PyArray_DATA(vr_), &ldvr, <fwc_dbl_complex_t*>np.PyArray_DATA(work_), &lwork_, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &info, 1, 1)
    return (alpha_, beta_, vl_, vr_, work_, info,)



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

cdef char fw_aschar(object s):
    cdef char* buf
    try:
        return <char>ord(s[0]) # int
    except TypeError:
        pass
    try:
        buf = <char*>s # bytes
    except TypeError:
        s = s.encode('ASCII')
        buf = <char*>s # unicode
    if buf[0] == 0:
        return 0
    elif buf[1] != 0:
        return 0
    else:
        return buf[0]

# Fwrap configuration:
# Fwrap: version 0.2.0dev_00843a8
# Fwrap: self-sha1 57571a0e42332f3f0c9a5ea3b239886ae0942c94
# Fwrap: pyf-sha1 4a68d1da76618cd2340e64fdc5f47ee6517a036e
# Fwrap: wraps $REFERENCE_LAPACK/SRC/*.f
# Fwrap:     sha1 06e293fd20e9b3eb70d4bf63898874dd720f21b0
# Fwrap: wraps $REFERENCE_LAPACK/INSTALL/dlamch.f
# Fwrap:     sha1 0
# Fwrap: wraps $REFERENCE_LAPACK/INSTALL/slamch.f
# Fwrap:     sha1 0
# Fwrap: exclude cbbcsd
# Fwrap: exclude cbdsqr
# Fwrap: exclude cgbbrd
# Fwrap: exclude cgbcon
# Fwrap: exclude cgbequ
# Fwrap: exclude cgbequb
# Fwrap: exclude cgbrfs
# Fwrap: exclude cgbrfsx
# Fwrap: exclude cgbsvx
# Fwrap: exclude cgbsvxx
# Fwrap: exclude cgbtf2
# Fwrap: exclude cgebak
# Fwrap: exclude cgebd2
# Fwrap: exclude cgebrd
# Fwrap: exclude cgecon
# Fwrap: exclude cgeequ
# Fwrap: exclude cgeequb
# Fwrap: exclude cgeesx
# Fwrap: exclude cgeevx
# Fwrap: exclude cgegs
# Fwrap: exclude cgehd2
# Fwrap: exclude cgelq2
# Fwrap: exclude cgelqf
# Fwrap: exclude cgels
# Fwrap: exclude cgelsd
# Fwrap: exclude cgelsx
# Fwrap: exclude cgelsy
# Fwrap: exclude cgeql2
# Fwrap: exclude cgeqlf
# Fwrap: exclude cgeqp3
# Fwrap: exclude cgeqpf
# Fwrap: exclude cgeqr2
# Fwrap: exclude cgeqr2p
# Fwrap: exclude cgeqrfp
# Fwrap: exclude cgerfs
# Fwrap: exclude cgerfsx
# Fwrap: exclude cgerq2
# Fwrap: exclude cgesc2
# Fwrap: exclude cgesvd
# Fwrap: exclude cgesvx
# Fwrap: exclude cgesvxx
# Fwrap: exclude cgetc2
# Fwrap: exclude cgetf2
# Fwrap: exclude cggbak
# Fwrap: exclude cggbal
# Fwrap: exclude cgges
# Fwrap: exclude cggesx
# Fwrap: exclude cggevx
# Fwrap: exclude cggglm
# Fwrap: exclude cgghrd
# Fwrap: exclude cgglse
# Fwrap: exclude cggqrf
# Fwrap: exclude cggrqf
# Fwrap: exclude cggsvd
# Fwrap: exclude cggsvp
# Fwrap: exclude cgtcon
# Fwrap: exclude cgtrfs
# Fwrap: exclude cgtsv
# Fwrap: exclude cgtsvx
# Fwrap: exclude cgttrf
# Fwrap: exclude cgttrs
# Fwrap: exclude cgtts2
# Fwrap: exclude chbev
# Fwrap: exclude chbgst
# Fwrap: exclude chbgv
# Fwrap: exclude chbgvd
# Fwrap: exclude chbgvx
# Fwrap: exclude chbtrd
# Fwrap: exclude checon
# Fwrap: exclude cheequb
# Fwrap: exclude cheevd
# Fwrap: exclude cheevx
# Fwrap: exclude chegs2
# Fwrap: exclude chegst
# Fwrap: exclude cherfs
# Fwrap: exclude cherfsx
# Fwrap: exclude chesv
# Fwrap: exclude chesvx
# Fwrap: exclude chesvxx
# Fwrap: exclude chetd2
# Fwrap: exclude chetf2
# Fwrap: exclude chetrd
# Fwrap: exclude chetrf
# Fwrap: exclude chetri
# Fwrap: exclude chetrs
# Fwrap: exclude chetrs2
# Fwrap: exclude chfrk
# Fwrap: exclude chgeqz
# Fwrap: exclude chla_transtype
# Fwrap: exclude chpcon
# Fwrap: exclude chpev
# Fwrap: exclude chpevd
# Fwrap: exclude chpevx
# Fwrap: exclude chpgst
# Fwrap: exclude chpgv
# Fwrap: exclude chpgvd
# Fwrap: exclude chpgvx
# Fwrap: exclude chprfs
# Fwrap: exclude chpsv
# Fwrap: exclude chpsvx
# Fwrap: exclude chptrd
# Fwrap: exclude chptrf
# Fwrap: exclude chptri
# Fwrap: exclude chptrs
# Fwrap: exclude chsein
# Fwrap: exclude chseqr
# Fwrap: exclude cla_gbamv
# Fwrap: exclude cla_gbrcond_c
# Fwrap: exclude cla_gbrcond_x
# Fwrap: exclude cla_gbrfsx_extended
# Fwrap: exclude cla_gbrpvgrw
# Fwrap: exclude cla_geamv
# Fwrap: exclude cla_gercond_c
# Fwrap: exclude cla_gercond_x
# Fwrap: exclude cla_gerfsx_extended
# Fwrap: exclude cla_heamv
# Fwrap: exclude cla_hercond_c
# Fwrap: exclude cla_hercond_x
# Fwrap: exclude cla_herfsx_extended
# Fwrap: exclude cla_herpvgrw
# Fwrap: exclude cla_lin_berr
# Fwrap: exclude cla_porcond_c
# Fwrap: exclude cla_porcond_x
# Fwrap: exclude cla_porfsx_extended
# Fwrap: exclude cla_porpvgrw
# Fwrap: exclude cla_rpvgrw
# Fwrap: exclude cla_syamv
# Fwrap: exclude cla_syrcond_c
# Fwrap: exclude cla_syrcond_x
# Fwrap: exclude cla_syrfsx_extended
# Fwrap: exclude cla_syrpvgrw
# Fwrap: exclude cla_wwaddw
# Fwrap: exclude clabrd
# Fwrap: exclude clacgv
# Fwrap: exclude clacn2
# Fwrap: exclude clacon
# Fwrap: exclude clacp2
# Fwrap: exclude clacpy
# Fwrap: exclude clacrm
# Fwrap: exclude clacrt
# Fwrap: exclude cladiv
# Fwrap: exclude claed0
# Fwrap: exclude claed7
# Fwrap: exclude claed8
# Fwrap: exclude claein
# Fwrap: exclude claesy
# Fwrap: exclude claev2
# Fwrap: exclude clag2z
# Fwrap: exclude clags2
# Fwrap: exclude clagtm
# Fwrap: exclude clahef
# Fwrap: exclude clahqr
# Fwrap: exclude clahr2
# Fwrap: exclude clahrd
# Fwrap: exclude claic1
# Fwrap: exclude clals0
# Fwrap: exclude clalsa
# Fwrap: exclude clalsd
# Fwrap: exclude clangb
# Fwrap: exclude clange
# Fwrap: exclude clangt
# Fwrap: exclude clanhb
# Fwrap: exclude clanhe
# Fwrap: exclude clanhf
# Fwrap: exclude clanhp
# Fwrap: exclude clanhs
# Fwrap: exclude clanht
# Fwrap: exclude clansb
# Fwrap: exclude clansp
# Fwrap: exclude clansy
# Fwrap: exclude clantb
# Fwrap: exclude clantp
# Fwrap: exclude clantr
# Fwrap: exclude clapll
# Fwrap: exclude clapmr
# Fwrap: exclude clapmt
# Fwrap: exclude claqgb
# Fwrap: exclude claqge
# Fwrap: exclude claqhb
# Fwrap: exclude claqhe
# Fwrap: exclude claqhp
# Fwrap: exclude claqp2
# Fwrap: exclude claqps
# Fwrap: exclude claqr0
# Fwrap: exclude claqr1
# Fwrap: exclude claqr2
# Fwrap: exclude claqr3
# Fwrap: exclude claqr4
# Fwrap: exclude claqr5
# Fwrap: exclude claqsb
# Fwrap: exclude claqsp
# Fwrap: exclude claqsy
# Fwrap: exclude clar1v
# Fwrap: exclude clar2v
# Fwrap: exclude clarcm
# Fwrap: exclude clarf
# Fwrap: exclude clarfb
# Fwrap: exclude clarfg
# Fwrap: exclude clarfgp
# Fwrap: exclude clarft
# Fwrap: exclude clarfx
# Fwrap: exclude clargv
# Fwrap: exclude clarnv
# Fwrap: exclude clarrv
# Fwrap: exclude clarscl2
# Fwrap: exclude clartg
# Fwrap: exclude clartv
# Fwrap: exclude clarz
# Fwrap: exclude clarzb
# Fwrap: exclude clarzt
# Fwrap: exclude clascl
# Fwrap: exclude clascl2
# Fwrap: exclude claset
# Fwrap: exclude clasr
# Fwrap: exclude classq
# Fwrap: exclude clasyf
# Fwrap: exclude clatbs
# Fwrap: exclude clatdf
# Fwrap: exclude clatps
# Fwrap: exclude clatrd
# Fwrap: exclude clatrs
# Fwrap: exclude clatrz
# Fwrap: exclude clatzm
# Fwrap: exclude clauu2
# Fwrap: exclude cpbcon
# Fwrap: exclude cpbequ
# Fwrap: exclude cpbrfs
# Fwrap: exclude cpbstf
# Fwrap: exclude cpbsvx
# Fwrap: exclude cpbtf2
# Fwrap: exclude cpftrf
# Fwrap: exclude cpftri
# Fwrap: exclude cpftrs
# Fwrap: exclude cpocon
# Fwrap: exclude cpoequ
# Fwrap: exclude cpoequb
# Fwrap: exclude cporfs
# Fwrap: exclude cporfsx
# Fwrap: exclude cposvx
# Fwrap: exclude cposvxx
# Fwrap: exclude cpotf2
# Fwrap: exclude cppcon
# Fwrap: exclude cppequ
# Fwrap: exclude cpprfs
# Fwrap: exclude cppsv
# Fwrap: exclude cppsvx
# Fwrap: exclude cpptrf
# Fwrap: exclude cpptri
# Fwrap: exclude cpptrs
# Fwrap: exclude cpstf2
# Fwrap: exclude cpstrf
# Fwrap: exclude cptcon
# Fwrap: exclude cpteqr
# Fwrap: exclude cptrfs
# Fwrap: exclude cptsv
# Fwrap: exclude cptsvx
# Fwrap: exclude cpttrf
# Fwrap: exclude cpttrs
# Fwrap: exclude cptts2
# Fwrap: exclude crot
# Fwrap: exclude cspcon
# Fwrap: exclude cspmv
# Fwrap: exclude cspr
# Fwrap: exclude csprfs
# Fwrap: exclude cspsv
# Fwrap: exclude cspsvx
# Fwrap: exclude csptrf
# Fwrap: exclude csptri
# Fwrap: exclude csptrs
# Fwrap: exclude csrscl
# Fwrap: exclude cstedc
# Fwrap: exclude cstegr
# Fwrap: exclude cstein
# Fwrap: exclude cstemr
# Fwrap: exclude csteqr
# Fwrap: exclude csycon
# Fwrap: exclude csyconv
# Fwrap: exclude csyequb
# Fwrap: exclude csymv
# Fwrap: exclude csyr
# Fwrap: exclude csyrfs
# Fwrap: exclude csyrfsx
# Fwrap: exclude csysv
# Fwrap: exclude csysvx
# Fwrap: exclude csysvxx
# Fwrap: exclude csyswapr
# Fwrap: exclude csytf2
# Fwrap: exclude csytrf
# Fwrap: exclude csytri
# Fwrap: exclude csytri2
# Fwrap: exclude csytri2x
# Fwrap: exclude csytrs
# Fwrap: exclude csytrs2
# Fwrap: exclude ctbcon
# Fwrap: exclude ctbrfs
# Fwrap: exclude ctbtrs
# Fwrap: exclude ctfsm
# Fwrap: exclude ctftri
# Fwrap: exclude ctfttp
# Fwrap: exclude ctfttr
# Fwrap: exclude ctgevc
# Fwrap: exclude ctgex2
# Fwrap: exclude ctgexc
# Fwrap: exclude ctgsen
# Fwrap: exclude ctgsja
# Fwrap: exclude ctgsna
# Fwrap: exclude ctgsy2
# Fwrap: exclude ctgsyl
# Fwrap: exclude ctpcon
# Fwrap: exclude ctprfs
# Fwrap: exclude ctptri
# Fwrap: exclude ctptrs
# Fwrap: exclude ctpttf
# Fwrap: exclude ctpttr
# Fwrap: exclude ctrcon
# Fwrap: exclude ctrevc
# Fwrap: exclude ctrexc
# Fwrap: exclude ctrrfs
# Fwrap: exclude ctrsen
# Fwrap: exclude ctrsna
# Fwrap: exclude ctrsyl
# Fwrap: exclude ctrti2
# Fwrap: exclude ctrttf
# Fwrap: exclude ctrttp
# Fwrap: exclude ctzrqf
# Fwrap: exclude ctzrzf
# Fwrap: exclude cunbdb
# Fwrap: exclude cuncsd
# Fwrap: exclude cung2l
# Fwrap: exclude cung2r
# Fwrap: exclude cungbr
# Fwrap: exclude cunghr
# Fwrap: exclude cungl2
# Fwrap: exclude cunglq
# Fwrap: exclude cungql
# Fwrap: exclude cungr2
# Fwrap: exclude cungtr
# Fwrap: exclude cunm2l
# Fwrap: exclude cunm2r
# Fwrap: exclude cunmbr
# Fwrap: exclude cunmhr
# Fwrap: exclude cunml2
# Fwrap: exclude cunmlq
# Fwrap: exclude cunmql
# Fwrap: exclude cunmqr
# Fwrap: exclude cunmr2
# Fwrap: exclude cunmr3
# Fwrap: exclude cunmrq
# Fwrap: exclude cunmrz
# Fwrap: exclude cunmtr
# Fwrap: exclude cupgtr
# Fwrap: exclude cupmtr
# Fwrap: exclude dbbcsd
# Fwrap: exclude dbdsdc
# Fwrap: exclude dbdsqr
# Fwrap: exclude ddisna
# Fwrap: exclude dgbbrd
# Fwrap: exclude dgbcon
# Fwrap: exclude dgbequ
# Fwrap: exclude dgbequb
# Fwrap: exclude dgbrfs
# Fwrap: exclude dgbrfsx
# Fwrap: exclude dgbsvx
# Fwrap: exclude dgbsvxx
# Fwrap: exclude dgbtf2
# Fwrap: exclude dgebak
# Fwrap: exclude dgebd2
# Fwrap: exclude dgebrd
# Fwrap: exclude dgecon
# Fwrap: exclude dgeequ
# Fwrap: exclude dgeequb
# Fwrap: exclude dgeesx
# Fwrap: exclude dgeevx
# Fwrap: exclude dgegs
# Fwrap: exclude dgehd2
# Fwrap: exclude dgejsv
# Fwrap: exclude dgelq2
# Fwrap: exclude dgelqf
# Fwrap: exclude dgels
# Fwrap: exclude dgelsd
# Fwrap: exclude dgelsx
# Fwrap: exclude dgelsy
# Fwrap: exclude dgeql2
# Fwrap: exclude dgeqlf
# Fwrap: exclude dgeqp3
# Fwrap: exclude dgeqpf
# Fwrap: exclude dgeqr2
# Fwrap: exclude dgeqr2p
# Fwrap: exclude dgeqrfp
# Fwrap: exclude dgerfs
# Fwrap: exclude dgerfsx
# Fwrap: exclude dgerq2
# Fwrap: exclude dgesc2
# Fwrap: exclude dgesvd
# Fwrap: exclude dgesvj
# Fwrap: exclude dgesvx
# Fwrap: exclude dgesvxx
# Fwrap: exclude dgetc2
# Fwrap: exclude dgetf2
# Fwrap: exclude dggbak
# Fwrap: exclude dggbal
# Fwrap: exclude dgges
# Fwrap: exclude dggesx
# Fwrap: exclude dggevx
# Fwrap: exclude dggglm
# Fwrap: exclude dgghrd
# Fwrap: exclude dgglse
# Fwrap: exclude dggqrf
# Fwrap: exclude dggrqf
# Fwrap: exclude dggsvd
# Fwrap: exclude dggsvp
# Fwrap: exclude dgsvj0
# Fwrap: exclude dgsvj1
# Fwrap: exclude dgtcon
# Fwrap: exclude dgtrfs
# Fwrap: exclude dgtsv
# Fwrap: exclude dgtsvx
# Fwrap: exclude dgttrf
# Fwrap: exclude dgttrs
# Fwrap: exclude dgtts2
# Fwrap: exclude dhgeqz
# Fwrap: exclude dhsein
# Fwrap: exclude dhseqr
# Fwrap: exclude disnan
# Fwrap: exclude dla_gbamv
# Fwrap: exclude dla_gbrcond
# Fwrap: exclude dla_gbrfsx_extended
# Fwrap: exclude dla_gbrpvgrw
# Fwrap: exclude dla_geamv
# Fwrap: exclude dla_gercond
# Fwrap: exclude dla_gerfsx_extended
# Fwrap: exclude dla_lin_berr
# Fwrap: exclude dla_porcond
# Fwrap: exclude dla_porfsx_extended
# Fwrap: exclude dla_porpvgrw
# Fwrap: exclude dla_rpvgrw
# Fwrap: exclude dla_syamv
# Fwrap: exclude dla_syrcond
# Fwrap: exclude dla_syrfsx_extended
# Fwrap: exclude dla_syrpvgrw
# Fwrap: exclude dla_wwaddw
# Fwrap: exclude dlabad
# Fwrap: exclude dlabrd
# Fwrap: exclude dlacn2
# Fwrap: exclude dlacon
# Fwrap: exclude dlacpy
# Fwrap: exclude dladiv
# Fwrap: exclude dlae2
# Fwrap: exclude dlaebz
# Fwrap: exclude dlaed0
# Fwrap: exclude dlaed1
# Fwrap: exclude dlaed2
# Fwrap: exclude dlaed3
# Fwrap: exclude dlaed4
# Fwrap: exclude dlaed5
# Fwrap: exclude dlaed6
# Fwrap: exclude dlaed7
# Fwrap: exclude dlaed8
# Fwrap: exclude dlaed9
# Fwrap: exclude dlaeda
# Fwrap: exclude dlaein
# Fwrap: exclude dlaev2
# Fwrap: exclude dlaexc
# Fwrap: exclude dlag2
# Fwrap: exclude dlag2s
# Fwrap: exclude dlags2
# Fwrap: exclude dlagtf
# Fwrap: exclude dlagtm
# Fwrap: exclude dlagts
# Fwrap: exclude dlagv2
# Fwrap: exclude dlahqr
# Fwrap: exclude dlahr2
# Fwrap: exclude dlahrd
# Fwrap: exclude dlaic1
# Fwrap: exclude dlaisnan
# Fwrap: exclude dlaln2
# Fwrap: exclude dlals0
# Fwrap: exclude dlalsa
# Fwrap: exclude dlalsd
# Fwrap: exclude dlamrg
# Fwrap: exclude dlaneg
# Fwrap: exclude dlangb
# Fwrap: exclude dlange
# Fwrap: exclude dlangt
# Fwrap: exclude dlanhs
# Fwrap: exclude dlansb
# Fwrap: exclude dlansf
# Fwrap: exclude dlansp
# Fwrap: exclude dlanst
# Fwrap: exclude dlansy
# Fwrap: exclude dlantb
# Fwrap: exclude dlantp
# Fwrap: exclude dlantr
# Fwrap: exclude dlanv2
# Fwrap: exclude dlapll
# Fwrap: exclude dlapmr
# Fwrap: exclude dlapmt
# Fwrap: exclude dlapy2
# Fwrap: exclude dlapy3
# Fwrap: exclude dlaqgb
# Fwrap: exclude dlaqge
# Fwrap: exclude dlaqp2
# Fwrap: exclude dlaqps
# Fwrap: exclude dlaqr0
# Fwrap: exclude dlaqr1
# Fwrap: exclude dlaqr2
# Fwrap: exclude dlaqr3
# Fwrap: exclude dlaqr4
# Fwrap: exclude dlaqr5
# Fwrap: exclude dlaqsb
# Fwrap: exclude dlaqsp
# Fwrap: exclude dlaqsy
# Fwrap: exclude dlaqtr
# Fwrap: exclude dlar1v
# Fwrap: exclude dlar2v
# Fwrap: exclude dlarf
# Fwrap: exclude dlarfb
# Fwrap: exclude dlarfg
# Fwrap: exclude dlarfgp
# Fwrap: exclude dlarft
# Fwrap: exclude dlarfx
# Fwrap: exclude dlargv
# Fwrap: exclude dlarnv
# Fwrap: exclude dlarra
# Fwrap: exclude dlarrb
# Fwrap: exclude dlarrc
# Fwrap: exclude dlarrd
# Fwrap: exclude dlarre
# Fwrap: exclude dlarrf
# Fwrap: exclude dlarrj
# Fwrap: exclude dlarrk
# Fwrap: exclude dlarrr
# Fwrap: exclude dlarrv
# Fwrap: exclude dlarscl2
# Fwrap: exclude dlartg
# Fwrap: exclude dlartgp
# Fwrap: exclude dlartgs
# Fwrap: exclude dlartv
# Fwrap: exclude dlaruv
# Fwrap: exclude dlarz
# Fwrap: exclude dlarzb
# Fwrap: exclude dlarzt
# Fwrap: exclude dlas2
# Fwrap: exclude dlascl
# Fwrap: exclude dlascl2
# Fwrap: exclude dlasd0
# Fwrap: exclude dlasd1
# Fwrap: exclude dlasd2
# Fwrap: exclude dlasd3
# Fwrap: exclude dlasd4
# Fwrap: exclude dlasd5
# Fwrap: exclude dlasd6
# Fwrap: exclude dlasd7
# Fwrap: exclude dlasd8
# Fwrap: exclude dlasda
# Fwrap: exclude dlasdq
# Fwrap: exclude dlasdt
# Fwrap: exclude dlaset
# Fwrap: exclude dlasq1
# Fwrap: exclude dlasq2
# Fwrap: exclude dlasq3
# Fwrap: exclude dlasq4
# Fwrap: exclude dlasq5
# Fwrap: exclude dlasq6
# Fwrap: exclude dlasr
# Fwrap: exclude dlasrt
# Fwrap: exclude dlassq
# Fwrap: exclude dlasv2
# Fwrap: exclude dlasy2
# Fwrap: exclude dlasyf
# Fwrap: exclude dlat2s
# Fwrap: exclude dlatbs
# Fwrap: exclude dlatdf
# Fwrap: exclude dlatps
# Fwrap: exclude dlatrd
# Fwrap: exclude dlatrs
# Fwrap: exclude dlatrz
# Fwrap: exclude dlatzm
# Fwrap: exclude dlauu2
# Fwrap: exclude dopgtr
# Fwrap: exclude dopmtr
# Fwrap: exclude dorbdb
# Fwrap: exclude dorcsd
# Fwrap: exclude dorg2l
# Fwrap: exclude dorg2r
# Fwrap: exclude dorgbr
# Fwrap: exclude dorghr
# Fwrap: exclude dorgl2
# Fwrap: exclude dorglq
# Fwrap: exclude dorgql
# Fwrap: exclude dorgr2
# Fwrap: exclude dorgtr
# Fwrap: exclude dorm2l
# Fwrap: exclude dorm2r
# Fwrap: exclude dormbr
# Fwrap: exclude dormhr
# Fwrap: exclude dorml2
# Fwrap: exclude dormlq
# Fwrap: exclude dormql
# Fwrap: exclude dormqr
# Fwrap: exclude dormr2
# Fwrap: exclude dormr3
# Fwrap: exclude dormrq
# Fwrap: exclude dormrz
# Fwrap: exclude dormtr
# Fwrap: exclude dpbcon
# Fwrap: exclude dpbequ
# Fwrap: exclude dpbrfs
# Fwrap: exclude dpbstf
# Fwrap: exclude dpbsvx
# Fwrap: exclude dpbtf2
# Fwrap: exclude dpftrf
# Fwrap: exclude dpftri
# Fwrap: exclude dpftrs
# Fwrap: exclude dpocon
# Fwrap: exclude dpoequ
# Fwrap: exclude dpoequb
# Fwrap: exclude dporfs
# Fwrap: exclude dporfsx
# Fwrap: exclude dposvx
# Fwrap: exclude dposvxx
# Fwrap: exclude dpotf2
# Fwrap: exclude dppcon
# Fwrap: exclude dppequ
# Fwrap: exclude dpprfs
# Fwrap: exclude dppsv
# Fwrap: exclude dppsvx
# Fwrap: exclude dpptrf
# Fwrap: exclude dpptri
# Fwrap: exclude dpptrs
# Fwrap: exclude dpstf2
# Fwrap: exclude dpstrf
# Fwrap: exclude dptcon
# Fwrap: exclude dpteqr
# Fwrap: exclude dptrfs
# Fwrap: exclude dptsv
# Fwrap: exclude dptsvx
# Fwrap: exclude dpttrf
# Fwrap: exclude dpttrs
# Fwrap: exclude dptts2
# Fwrap: exclude drscl
# Fwrap: exclude dsbgst
# Fwrap: exclude dsbgv
# Fwrap: exclude dsbgvd
# Fwrap: exclude dsbgvx
# Fwrap: exclude dsbtrd
# Fwrap: exclude dsfrk
# Fwrap: exclude dsgesv
# Fwrap: exclude dspcon
# Fwrap: exclude dspev
# Fwrap: exclude dspevd
# Fwrap: exclude dspevx
# Fwrap: exclude dspgst
# Fwrap: exclude dspgv
# Fwrap: exclude dspgvd
# Fwrap: exclude dspgvx
# Fwrap: exclude dsposv
# Fwrap: exclude dsprfs
# Fwrap: exclude dspsv
# Fwrap: exclude dspsvx
# Fwrap: exclude dsptrd
# Fwrap: exclude dsptrf
# Fwrap: exclude dsptri
# Fwrap: exclude dsptrs
# Fwrap: exclude dstebz
# Fwrap: exclude dstedc
# Fwrap: exclude dstegr
# Fwrap: exclude dstein
# Fwrap: exclude dstemr
# Fwrap: exclude dsteqr
# Fwrap: exclude dsterf
# Fwrap: exclude dstev
# Fwrap: exclude dstevd
# Fwrap: exclude dstevr
# Fwrap: exclude dstevx
# Fwrap: exclude dsycon
# Fwrap: exclude dsyconv
# Fwrap: exclude dsyequb
# Fwrap: exclude dsyevd
# Fwrap: exclude dsyevx
# Fwrap: exclude dsygs2
# Fwrap: exclude dsygst
# Fwrap: exclude dsyrfs
# Fwrap: exclude dsyrfsx
# Fwrap: exclude dsysv
# Fwrap: exclude dsysvx
# Fwrap: exclude dsysvxx
# Fwrap: exclude dsyswapr
# Fwrap: exclude dsytd2
# Fwrap: exclude dsytf2
# Fwrap: exclude dsytrd
# Fwrap: exclude dsytrf
# Fwrap: exclude dsytri
# Fwrap: exclude dsytri2
# Fwrap: exclude dsytri2x
# Fwrap: exclude dsytrs
# Fwrap: exclude dsytrs2
# Fwrap: exclude dtbcon
# Fwrap: exclude dtbrfs
# Fwrap: exclude dtbtrs
# Fwrap: exclude dtfsm
# Fwrap: exclude dtftri
# Fwrap: exclude dtfttp
# Fwrap: exclude dtfttr
# Fwrap: exclude dtgevc
# Fwrap: exclude dtgex2
# Fwrap: exclude dtgexc
# Fwrap: exclude dtgsen
# Fwrap: exclude dtgsja
# Fwrap: exclude dtgsna
# Fwrap: exclude dtgsy2
# Fwrap: exclude dtgsyl
# Fwrap: exclude dtpcon
# Fwrap: exclude dtprfs
# Fwrap: exclude dtptri
# Fwrap: exclude dtptrs
# Fwrap: exclude dtpttf
# Fwrap: exclude dtpttr
# Fwrap: exclude dtrcon
# Fwrap: exclude dtrevc
# Fwrap: exclude dtrexc
# Fwrap: exclude dtrrfs
# Fwrap: exclude dtrsen
# Fwrap: exclude dtrsna
# Fwrap: exclude dtrsyl
# Fwrap: exclude dtrti2
# Fwrap: exclude dtrttf
# Fwrap: exclude dtrttp
# Fwrap: exclude dtzrqf
# Fwrap: exclude dtzrzf
# Fwrap: exclude dzsum1
# Fwrap: exclude icmax1
# Fwrap: exclude ieeeck
# Fwrap: exclude ilaclc
# Fwrap: exclude ilaclr
# Fwrap: exclude iladiag
# Fwrap: exclude iladlc
# Fwrap: exclude iladlr
# Fwrap: exclude ilaenv
# Fwrap: exclude ilaprec
# Fwrap: exclude ilaslc
# Fwrap: exclude ilaslr
# Fwrap: exclude ilatrans
# Fwrap: exclude ilauplo
# Fwrap: exclude ilaver
# Fwrap: exclude ilazlc
# Fwrap: exclude ilazlr
# Fwrap: exclude iparmq
# Fwrap: exclude izmax1
# Fwrap: exclude lsamen
# Fwrap: exclude sbbcsd
# Fwrap: exclude sbdsdc
# Fwrap: exclude sbdsqr
# Fwrap: exclude scsum1
# Fwrap: exclude sdisna
# Fwrap: exclude sgbbrd
# Fwrap: exclude sgbcon
# Fwrap: exclude sgbequ
# Fwrap: exclude sgbequb
# Fwrap: exclude sgbrfs
# Fwrap: exclude sgbrfsx
# Fwrap: exclude sgbsvx
# Fwrap: exclude sgbsvxx
# Fwrap: exclude sgbtf2
# Fwrap: exclude sgebak
# Fwrap: exclude sgebd2
# Fwrap: exclude sgebrd
# Fwrap: exclude sgecon
# Fwrap: exclude sgeequ
# Fwrap: exclude sgeequb
# Fwrap: exclude sgeesx
# Fwrap: exclude sgeevx
# Fwrap: exclude sgegs
# Fwrap: exclude sgehd2
# Fwrap: exclude sgejsv
# Fwrap: exclude sgelq2
# Fwrap: exclude sgelqf
# Fwrap: exclude sgels
# Fwrap: exclude sgelsd
# Fwrap: exclude sgelsx
# Fwrap: exclude sgelsy
# Fwrap: exclude sgeql2
# Fwrap: exclude sgeqlf
# Fwrap: exclude sgeqp3
# Fwrap: exclude sgeqpf
# Fwrap: exclude sgeqr2
# Fwrap: exclude sgeqr2p
# Fwrap: exclude sgeqrfp
# Fwrap: exclude sgerfs
# Fwrap: exclude sgerfsx
# Fwrap: exclude sgerq2
# Fwrap: exclude sgesc2
# Fwrap: exclude sgesvd
# Fwrap: exclude sgesvj
# Fwrap: exclude sgesvx
# Fwrap: exclude sgesvxx
# Fwrap: exclude sgetc2
# Fwrap: exclude sgetf2
# Fwrap: exclude sggbak
# Fwrap: exclude sggbal
# Fwrap: exclude sgges
# Fwrap: exclude sggesx
# Fwrap: exclude sggevx
# Fwrap: exclude sggglm
# Fwrap: exclude sgghrd
# Fwrap: exclude sgglse
# Fwrap: exclude sggqrf
# Fwrap: exclude sggrqf
# Fwrap: exclude sggsvd
# Fwrap: exclude sggsvp
# Fwrap: exclude sgsvj0
# Fwrap: exclude sgsvj1
# Fwrap: exclude sgtcon
# Fwrap: exclude sgtrfs
# Fwrap: exclude sgtsv
# Fwrap: exclude sgtsvx
# Fwrap: exclude sgttrf
# Fwrap: exclude sgttrs
# Fwrap: exclude sgtts2
# Fwrap: exclude shgeqz
# Fwrap: exclude shsein
# Fwrap: exclude shseqr
# Fwrap: exclude sisnan
# Fwrap: exclude sla_gbamv
# Fwrap: exclude sla_gbrcond
# Fwrap: exclude sla_gbrfsx_extended
# Fwrap: exclude sla_gbrpvgrw
# Fwrap: exclude sla_geamv
# Fwrap: exclude sla_gercond
# Fwrap: exclude sla_gerfsx_extended
# Fwrap: exclude sla_lin_berr
# Fwrap: exclude sla_porcond
# Fwrap: exclude sla_porfsx_extended
# Fwrap: exclude sla_porpvgrw
# Fwrap: exclude sla_rpvgrw
# Fwrap: exclude sla_syamv
# Fwrap: exclude sla_syrcond
# Fwrap: exclude sla_syrfsx_extended
# Fwrap: exclude sla_syrpvgrw
# Fwrap: exclude sla_wwaddw
# Fwrap: exclude slabad
# Fwrap: exclude slabrd
# Fwrap: exclude slacn2
# Fwrap: exclude slacon
# Fwrap: exclude slacpy
# Fwrap: exclude sladiv
# Fwrap: exclude slae2
# Fwrap: exclude slaebz
# Fwrap: exclude slaed0
# Fwrap: exclude slaed1
# Fwrap: exclude slaed2
# Fwrap: exclude slaed3
# Fwrap: exclude slaed4
# Fwrap: exclude slaed5
# Fwrap: exclude slaed6
# Fwrap: exclude slaed7
# Fwrap: exclude slaed8
# Fwrap: exclude slaed9
# Fwrap: exclude slaeda
# Fwrap: exclude slaein
# Fwrap: exclude slaev2
# Fwrap: exclude slaexc
# Fwrap: exclude slag2
# Fwrap: exclude slag2d
# Fwrap: exclude slags2
# Fwrap: exclude slagtf
# Fwrap: exclude slagtm
# Fwrap: exclude slagts
# Fwrap: exclude slagv2
# Fwrap: exclude slahqr
# Fwrap: exclude slahr2
# Fwrap: exclude slahrd
# Fwrap: exclude slaic1
# Fwrap: exclude slaisnan
# Fwrap: exclude slaln2
# Fwrap: exclude slals0
# Fwrap: exclude slalsa
# Fwrap: exclude slalsd
# Fwrap: exclude slamrg
# Fwrap: exclude slaneg
# Fwrap: exclude slangb
# Fwrap: exclude slange
# Fwrap: exclude slangt
# Fwrap: exclude slanhs
# Fwrap: exclude slansb
# Fwrap: exclude slansf
# Fwrap: exclude slansp
# Fwrap: exclude slanst
# Fwrap: exclude slansy
# Fwrap: exclude slantb
# Fwrap: exclude slantp
# Fwrap: exclude slantr
# Fwrap: exclude slanv2
# Fwrap: exclude slapll
# Fwrap: exclude slapmr
# Fwrap: exclude slapmt
# Fwrap: exclude slapy2
# Fwrap: exclude slapy3
# Fwrap: exclude slaqgb
# Fwrap: exclude slaqge
# Fwrap: exclude slaqp2
# Fwrap: exclude slaqps
# Fwrap: exclude slaqr0
# Fwrap: exclude slaqr1
# Fwrap: exclude slaqr2
# Fwrap: exclude slaqr3
# Fwrap: exclude slaqr4
# Fwrap: exclude slaqr5
# Fwrap: exclude slaqsb
# Fwrap: exclude slaqsp
# Fwrap: exclude slaqsy
# Fwrap: exclude slaqtr
# Fwrap: exclude slar1v
# Fwrap: exclude slar2v
# Fwrap: exclude slarf
# Fwrap: exclude slarfb
# Fwrap: exclude slarfg
# Fwrap: exclude slarfgp
# Fwrap: exclude slarft
# Fwrap: exclude slarfx
# Fwrap: exclude slargv
# Fwrap: exclude slarnv
# Fwrap: exclude slarra
# Fwrap: exclude slarrb
# Fwrap: exclude slarrc
# Fwrap: exclude slarrd
# Fwrap: exclude slarre
# Fwrap: exclude slarrf
# Fwrap: exclude slarrj
# Fwrap: exclude slarrk
# Fwrap: exclude slarrr
# Fwrap: exclude slarrv
# Fwrap: exclude slarscl2
# Fwrap: exclude slartg
# Fwrap: exclude slartgp
# Fwrap: exclude slartgs
# Fwrap: exclude slartv
# Fwrap: exclude slaruv
# Fwrap: exclude slarz
# Fwrap: exclude slarzb
# Fwrap: exclude slarzt
# Fwrap: exclude slas2
# Fwrap: exclude slascl
# Fwrap: exclude slascl2
# Fwrap: exclude slasd0
# Fwrap: exclude slasd1
# Fwrap: exclude slasd2
# Fwrap: exclude slasd3
# Fwrap: exclude slasd4
# Fwrap: exclude slasd5
# Fwrap: exclude slasd6
# Fwrap: exclude slasd7
# Fwrap: exclude slasd8
# Fwrap: exclude slasda
# Fwrap: exclude slasdq
# Fwrap: exclude slasdt
# Fwrap: exclude slaset
# Fwrap: exclude slasq1
# Fwrap: exclude slasq2
# Fwrap: exclude slasq3
# Fwrap: exclude slasq4
# Fwrap: exclude slasq5
# Fwrap: exclude slasq6
# Fwrap: exclude slasr
# Fwrap: exclude slasrt
# Fwrap: exclude slassq
# Fwrap: exclude slasv2
# Fwrap: exclude slasy2
# Fwrap: exclude slasyf
# Fwrap: exclude slatbs
# Fwrap: exclude slatdf
# Fwrap: exclude slatps
# Fwrap: exclude slatrd
# Fwrap: exclude slatrs
# Fwrap: exclude slatrz
# Fwrap: exclude slatzm
# Fwrap: exclude slauu2
# Fwrap: exclude sopgtr
# Fwrap: exclude sopmtr
# Fwrap: exclude sorbdb
# Fwrap: exclude sorcsd
# Fwrap: exclude sorg2l
# Fwrap: exclude sorg2r
# Fwrap: exclude sorgbr
# Fwrap: exclude sorghr
# Fwrap: exclude sorgl2
# Fwrap: exclude sorglq
# Fwrap: exclude sorgql
# Fwrap: exclude sorgr2
# Fwrap: exclude sorgtr
# Fwrap: exclude sorm2l
# Fwrap: exclude sorm2r
# Fwrap: exclude sormbr
# Fwrap: exclude sormhr
# Fwrap: exclude sorml2
# Fwrap: exclude sormlq
# Fwrap: exclude sormql
# Fwrap: exclude sormqr
# Fwrap: exclude sormr2
# Fwrap: exclude sormr3
# Fwrap: exclude sormrq
# Fwrap: exclude sormrz
# Fwrap: exclude sormtr
# Fwrap: exclude spbcon
# Fwrap: exclude spbequ
# Fwrap: exclude spbrfs
# Fwrap: exclude spbstf
# Fwrap: exclude spbsvx
# Fwrap: exclude spbtf2
# Fwrap: exclude spftrf
# Fwrap: exclude spftri
# Fwrap: exclude spftrs
# Fwrap: exclude spocon
# Fwrap: exclude spoequ
# Fwrap: exclude spoequb
# Fwrap: exclude sporfs
# Fwrap: exclude sporfsx
# Fwrap: exclude sposvx
# Fwrap: exclude sposvxx
# Fwrap: exclude spotf2
# Fwrap: exclude sppcon
# Fwrap: exclude sppequ
# Fwrap: exclude spprfs
# Fwrap: exclude sppsv
# Fwrap: exclude sppsvx
# Fwrap: exclude spptrf
# Fwrap: exclude spptri
# Fwrap: exclude spptrs
# Fwrap: exclude spstf2
# Fwrap: exclude spstrf
# Fwrap: exclude sptcon
# Fwrap: exclude spteqr
# Fwrap: exclude sptrfs
# Fwrap: exclude sptsv
# Fwrap: exclude sptsvx
# Fwrap: exclude spttrf
# Fwrap: exclude spttrs
# Fwrap: exclude sptts2
# Fwrap: exclude srscl
# Fwrap: exclude ssbgst
# Fwrap: exclude ssbgv
# Fwrap: exclude ssbgvd
# Fwrap: exclude ssbgvx
# Fwrap: exclude ssbtrd
# Fwrap: exclude ssfrk
# Fwrap: exclude sspcon
# Fwrap: exclude sspev
# Fwrap: exclude sspevd
# Fwrap: exclude sspevx
# Fwrap: exclude sspgst
# Fwrap: exclude sspgv
# Fwrap: exclude sspgvd
# Fwrap: exclude sspgvx
# Fwrap: exclude ssprfs
# Fwrap: exclude sspsv
# Fwrap: exclude sspsvx
# Fwrap: exclude ssptrd
# Fwrap: exclude ssptrf
# Fwrap: exclude ssptri
# Fwrap: exclude ssptrs
# Fwrap: exclude sstebz
# Fwrap: exclude sstedc
# Fwrap: exclude sstegr
# Fwrap: exclude sstein
# Fwrap: exclude sstemr
# Fwrap: exclude ssteqr
# Fwrap: exclude ssterf
# Fwrap: exclude sstev
# Fwrap: exclude sstevd
# Fwrap: exclude sstevr
# Fwrap: exclude sstevx
# Fwrap: exclude ssycon
# Fwrap: exclude ssyconv
# Fwrap: exclude ssyequb
# Fwrap: exclude ssyevd
# Fwrap: exclude ssyevx
# Fwrap: exclude ssygs2
# Fwrap: exclude ssygst
# Fwrap: exclude ssyrfs
# Fwrap: exclude ssyrfsx
# Fwrap: exclude ssysv
# Fwrap: exclude ssysvx
# Fwrap: exclude ssysvxx
# Fwrap: exclude ssyswapr
# Fwrap: exclude ssytd2
# Fwrap: exclude ssytf2
# Fwrap: exclude ssytrd
# Fwrap: exclude ssytrf
# Fwrap: exclude ssytri
# Fwrap: exclude ssytri2
# Fwrap: exclude ssytri2x
# Fwrap: exclude ssytrs
# Fwrap: exclude ssytrs2
# Fwrap: exclude stbcon
# Fwrap: exclude stbrfs
# Fwrap: exclude stbtrs
# Fwrap: exclude stfsm
# Fwrap: exclude stftri
# Fwrap: exclude stfttp
# Fwrap: exclude stfttr
# Fwrap: exclude stgevc
# Fwrap: exclude stgex2
# Fwrap: exclude stgexc
# Fwrap: exclude stgsen
# Fwrap: exclude stgsja
# Fwrap: exclude stgsna
# Fwrap: exclude stgsy2
# Fwrap: exclude stgsyl
# Fwrap: exclude stpcon
# Fwrap: exclude stprfs
# Fwrap: exclude stptri
# Fwrap: exclude stptrs
# Fwrap: exclude stpttf
# Fwrap: exclude stpttr
# Fwrap: exclude strcon
# Fwrap: exclude strevc
# Fwrap: exclude strexc
# Fwrap: exclude strrfs
# Fwrap: exclude strsen
# Fwrap: exclude strsna
# Fwrap: exclude strsyl
# Fwrap: exclude strti2
# Fwrap: exclude strttf
# Fwrap: exclude strttp
# Fwrap: exclude stzrqf
# Fwrap: exclude stzrzf
# Fwrap: exclude zbbcsd
# Fwrap: exclude zbdsqr
# Fwrap: exclude zcgesv
# Fwrap: exclude zcposv
# Fwrap: exclude zdrscl
# Fwrap: exclude zgbbrd
# Fwrap: exclude zgbcon
# Fwrap: exclude zgbequ
# Fwrap: exclude zgbequb
# Fwrap: exclude zgbrfs
# Fwrap: exclude zgbrfsx
# Fwrap: exclude zgbsvx
# Fwrap: exclude zgbsvxx
# Fwrap: exclude zgbtf2
# Fwrap: exclude zgebak
# Fwrap: exclude zgebd2
# Fwrap: exclude zgebrd
# Fwrap: exclude zgecon
# Fwrap: exclude zgeequ
# Fwrap: exclude zgeequb
# Fwrap: exclude zgeesx
# Fwrap: exclude zgeevx
# Fwrap: exclude zgegs
# Fwrap: exclude zgehd2
# Fwrap: exclude zgelq2
# Fwrap: exclude zgelqf
# Fwrap: exclude zgels
# Fwrap: exclude zgelsd
# Fwrap: exclude zgelsx
# Fwrap: exclude zgelsy
# Fwrap: exclude zgeql2
# Fwrap: exclude zgeqlf
# Fwrap: exclude zgeqp3
# Fwrap: exclude zgeqpf
# Fwrap: exclude zgeqr2
# Fwrap: exclude zgeqr2p
# Fwrap: exclude zgeqrfp
# Fwrap: exclude zgerfs
# Fwrap: exclude zgerfsx
# Fwrap: exclude zgerq2
# Fwrap: exclude zgesc2
# Fwrap: exclude zgesvd
# Fwrap: exclude zgesvx
# Fwrap: exclude zgesvxx
# Fwrap: exclude zgetc2
# Fwrap: exclude zgetf2
# Fwrap: exclude zggbak
# Fwrap: exclude zggbal
# Fwrap: exclude zgges
# Fwrap: exclude zggesx
# Fwrap: exclude zggevx
# Fwrap: exclude zggglm
# Fwrap: exclude zgghrd
# Fwrap: exclude zgglse
# Fwrap: exclude zggqrf
# Fwrap: exclude zggrqf
# Fwrap: exclude zggsvd
# Fwrap: exclude zggsvp
# Fwrap: exclude zgtcon
# Fwrap: exclude zgtrfs
# Fwrap: exclude zgtsv
# Fwrap: exclude zgtsvx
# Fwrap: exclude zgttrf
# Fwrap: exclude zgttrs
# Fwrap: exclude zgtts2
# Fwrap: exclude zhbev
# Fwrap: exclude zhbgst
# Fwrap: exclude zhbgv
# Fwrap: exclude zhbgvd
# Fwrap: exclude zhbgvx
# Fwrap: exclude zhbtrd
# Fwrap: exclude zhecon
# Fwrap: exclude zheequb
# Fwrap: exclude zheevd
# Fwrap: exclude zheevx
# Fwrap: exclude zhegs2
# Fwrap: exclude zhegst
# Fwrap: exclude zherfs
# Fwrap: exclude zherfsx
# Fwrap: exclude zhesv
# Fwrap: exclude zhesvx
# Fwrap: exclude zhesvxx
# Fwrap: exclude zhetd2
# Fwrap: exclude zhetf2
# Fwrap: exclude zhetrd
# Fwrap: exclude zhetrf
# Fwrap: exclude zhetri
# Fwrap: exclude zhetrs
# Fwrap: exclude zhetrs2
# Fwrap: exclude zhfrk
# Fwrap: exclude zhgeqz
# Fwrap: exclude zhpcon
# Fwrap: exclude zhpev
# Fwrap: exclude zhpevd
# Fwrap: exclude zhpevx
# Fwrap: exclude zhpgst
# Fwrap: exclude zhpgv
# Fwrap: exclude zhpgvd
# Fwrap: exclude zhpgvx
# Fwrap: exclude zhprfs
# Fwrap: exclude zhpsv
# Fwrap: exclude zhpsvx
# Fwrap: exclude zhptrd
# Fwrap: exclude zhptrf
# Fwrap: exclude zhptri
# Fwrap: exclude zhptrs
# Fwrap: exclude zhsein
# Fwrap: exclude zhseqr
# Fwrap: exclude zla_gbamv
# Fwrap: exclude zla_gbrcond_c
# Fwrap: exclude zla_gbrcond_x
# Fwrap: exclude zla_gbrfsx_extended
# Fwrap: exclude zla_gbrpvgrw
# Fwrap: exclude zla_geamv
# Fwrap: exclude zla_gercond_c
# Fwrap: exclude zla_gercond_x
# Fwrap: exclude zla_gerfsx_extended
# Fwrap: exclude zla_heamv
# Fwrap: exclude zla_hercond_c
# Fwrap: exclude zla_hercond_x
# Fwrap: exclude zla_herfsx_extended
# Fwrap: exclude zla_herpvgrw
# Fwrap: exclude zla_lin_berr
# Fwrap: exclude zla_porcond_c
# Fwrap: exclude zla_porcond_x
# Fwrap: exclude zla_porfsx_extended
# Fwrap: exclude zla_porpvgrw
# Fwrap: exclude zla_rpvgrw
# Fwrap: exclude zla_syamv
# Fwrap: exclude zla_syrcond_c
# Fwrap: exclude zla_syrcond_x
# Fwrap: exclude zla_syrfsx_extended
# Fwrap: exclude zla_syrpvgrw
# Fwrap: exclude zla_wwaddw
# Fwrap: exclude zlabrd
# Fwrap: exclude zlacgv
# Fwrap: exclude zlacn2
# Fwrap: exclude zlacon
# Fwrap: exclude zlacp2
# Fwrap: exclude zlacpy
# Fwrap: exclude zlacrm
# Fwrap: exclude zlacrt
# Fwrap: exclude zladiv
# Fwrap: exclude zlaed0
# Fwrap: exclude zlaed7
# Fwrap: exclude zlaed8
# Fwrap: exclude zlaein
# Fwrap: exclude zlaesy
# Fwrap: exclude zlaev2
# Fwrap: exclude zlag2c
# Fwrap: exclude zlags2
# Fwrap: exclude zlagtm
# Fwrap: exclude zlahef
# Fwrap: exclude zlahqr
# Fwrap: exclude zlahr2
# Fwrap: exclude zlahrd
# Fwrap: exclude zlaic1
# Fwrap: exclude zlals0
# Fwrap: exclude zlalsa
# Fwrap: exclude zlalsd
# Fwrap: exclude zlangb
# Fwrap: exclude zlange
# Fwrap: exclude zlangt
# Fwrap: exclude zlanhb
# Fwrap: exclude zlanhe
# Fwrap: exclude zlanhf
# Fwrap: exclude zlanhp
# Fwrap: exclude zlanhs
# Fwrap: exclude zlanht
# Fwrap: exclude zlansb
# Fwrap: exclude zlansp
# Fwrap: exclude zlansy
# Fwrap: exclude zlantb
# Fwrap: exclude zlantp
# Fwrap: exclude zlantr
# Fwrap: exclude zlapll
# Fwrap: exclude zlapmr
# Fwrap: exclude zlapmt
# Fwrap: exclude zlaqgb
# Fwrap: exclude zlaqge
# Fwrap: exclude zlaqhb
# Fwrap: exclude zlaqhe
# Fwrap: exclude zlaqhp
# Fwrap: exclude zlaqp2
# Fwrap: exclude zlaqps
# Fwrap: exclude zlaqr0
# Fwrap: exclude zlaqr1
# Fwrap: exclude zlaqr2
# Fwrap: exclude zlaqr3
# Fwrap: exclude zlaqr4
# Fwrap: exclude zlaqr5
# Fwrap: exclude zlaqsb
# Fwrap: exclude zlaqsp
# Fwrap: exclude zlaqsy
# Fwrap: exclude zlar1v
# Fwrap: exclude zlar2v
# Fwrap: exclude zlarcm
# Fwrap: exclude zlarf
# Fwrap: exclude zlarfb
# Fwrap: exclude zlarfg
# Fwrap: exclude zlarfgp
# Fwrap: exclude zlarft
# Fwrap: exclude zlarfx
# Fwrap: exclude zlargv
# Fwrap: exclude zlarnv
# Fwrap: exclude zlarrv
# Fwrap: exclude zlarscl2
# Fwrap: exclude zlartg
# Fwrap: exclude zlartv
# Fwrap: exclude zlarz
# Fwrap: exclude zlarzb
# Fwrap: exclude zlarzt
# Fwrap: exclude zlascl
# Fwrap: exclude zlascl2
# Fwrap: exclude zlaset
# Fwrap: exclude zlasr
# Fwrap: exclude zlassq
# Fwrap: exclude zlasyf
# Fwrap: exclude zlat2c
# Fwrap: exclude zlatbs
# Fwrap: exclude zlatdf
# Fwrap: exclude zlatps
# Fwrap: exclude zlatrd
# Fwrap: exclude zlatrs
# Fwrap: exclude zlatrz
# Fwrap: exclude zlatzm
# Fwrap: exclude zlauu2
# Fwrap: exclude zpbcon
# Fwrap: exclude zpbequ
# Fwrap: exclude zpbrfs
# Fwrap: exclude zpbstf
# Fwrap: exclude zpbsvx
# Fwrap: exclude zpbtf2
# Fwrap: exclude zpftrf
# Fwrap: exclude zpftri
# Fwrap: exclude zpftrs
# Fwrap: exclude zpocon
# Fwrap: exclude zpoequ
# Fwrap: exclude zpoequb
# Fwrap: exclude zporfs
# Fwrap: exclude zporfsx
# Fwrap: exclude zposvx
# Fwrap: exclude zposvxx
# Fwrap: exclude zpotf2
# Fwrap: exclude zppcon
# Fwrap: exclude zppequ
# Fwrap: exclude zpprfs
# Fwrap: exclude zppsv
# Fwrap: exclude zppsvx
# Fwrap: exclude zpptrf
# Fwrap: exclude zpptri
# Fwrap: exclude zpptrs
# Fwrap: exclude zpstf2
# Fwrap: exclude zpstrf
# Fwrap: exclude zptcon
# Fwrap: exclude zpteqr
# Fwrap: exclude zptrfs
# Fwrap: exclude zptsv
# Fwrap: exclude zptsvx
# Fwrap: exclude zpttrf
# Fwrap: exclude zpttrs
# Fwrap: exclude zptts2
# Fwrap: exclude zrot
# Fwrap: exclude zspcon
# Fwrap: exclude zspmv
# Fwrap: exclude zspr
# Fwrap: exclude zsprfs
# Fwrap: exclude zspsv
# Fwrap: exclude zspsvx
# Fwrap: exclude zsptrf
# Fwrap: exclude zsptri
# Fwrap: exclude zsptrs
# Fwrap: exclude zstedc
# Fwrap: exclude zstegr
# Fwrap: exclude zstein
# Fwrap: exclude zstemr
# Fwrap: exclude zsteqr
# Fwrap: exclude zsycon
# Fwrap: exclude zsyconv
# Fwrap: exclude zsyequb
# Fwrap: exclude zsymv
# Fwrap: exclude zsyr
# Fwrap: exclude zsyrfs
# Fwrap: exclude zsyrfsx
# Fwrap: exclude zsysv
# Fwrap: exclude zsysvx
# Fwrap: exclude zsysvxx
# Fwrap: exclude zsyswapr
# Fwrap: exclude zsytf2
# Fwrap: exclude zsytrf
# Fwrap: exclude zsytri
# Fwrap: exclude zsytri2
# Fwrap: exclude zsytri2x
# Fwrap: exclude zsytrs
# Fwrap: exclude zsytrs2
# Fwrap: exclude ztbcon
# Fwrap: exclude ztbrfs
# Fwrap: exclude ztbtrs
# Fwrap: exclude ztfsm
# Fwrap: exclude ztftri
# Fwrap: exclude ztfttp
# Fwrap: exclude ztfttr
# Fwrap: exclude ztgevc
# Fwrap: exclude ztgex2
# Fwrap: exclude ztgexc
# Fwrap: exclude ztgsen
# Fwrap: exclude ztgsja
# Fwrap: exclude ztgsna
# Fwrap: exclude ztgsy2
# Fwrap: exclude ztgsyl
# Fwrap: exclude ztpcon
# Fwrap: exclude ztprfs
# Fwrap: exclude ztptri
# Fwrap: exclude ztptrs
# Fwrap: exclude ztpttf
# Fwrap: exclude ztpttr
# Fwrap: exclude ztrcon
# Fwrap: exclude ztrevc
# Fwrap: exclude ztrexc
# Fwrap: exclude ztrrfs
# Fwrap: exclude ztrsen
# Fwrap: exclude ztrsna
# Fwrap: exclude ztrsyl
# Fwrap: exclude ztrti2
# Fwrap: exclude ztrttf
# Fwrap: exclude ztrttp
# Fwrap: exclude ztzrqf
# Fwrap: exclude ztzrzf
# Fwrap: exclude zunbdb
# Fwrap: exclude zuncsd
# Fwrap: exclude zung2l
# Fwrap: exclude zung2r
# Fwrap: exclude zungbr
# Fwrap: exclude zunghr
# Fwrap: exclude zungl2
# Fwrap: exclude zunglq
# Fwrap: exclude zungql
# Fwrap: exclude zungr2
# Fwrap: exclude zungtr
# Fwrap: exclude zunm2l
# Fwrap: exclude zunm2r
# Fwrap: exclude zunmbr
# Fwrap: exclude zunmhr
# Fwrap: exclude zunml2
# Fwrap: exclude zunmlq
# Fwrap: exclude zunmql
# Fwrap: exclude zunmqr
# Fwrap: exclude zunmr2
# Fwrap: exclude zunmr3
# Fwrap: exclude zunmrq
# Fwrap: exclude zunmrz
# Fwrap: exclude zunmtr
# Fwrap: exclude zupgtr
# Fwrap: exclude zupmtr
# Fwrap: exclude dlamc3
# Fwrap: exclude slamc3
# Fwrap: f77binding True
# Fwrap: detect-templates True
# Fwrap: template sgees,dgees
# Fwrap: template cgees,zgees
# Fwrap: emulate-f2py True
# Fwrap: no-cpdef True
# Fwrap: auxiliary flapack.pyx.in
# Fwrap: auxiliary flapack_fc.h
# Fwrap: auxiliary flapack_fc.pxd

