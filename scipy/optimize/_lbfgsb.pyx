#cython: ccomplex=True

"""The _lbfgsb module was generated with Fwrap v0.2.0dev_e008581.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
active(...)
bmv(...)
cauchy(...)
cmprlb(...)
dcsrch(...)
dcstep(...)
dpmeps(...)
dpofa(...)
dtrsl(...)
errclb(...)
formk(...)
formt(...)
freev(...)
hpsolb(...)
lnsrlb(...)
mainlb(...)
matupd(...)
prn1lb(...)
prn2lb(...)
prn3lb(...)
projgr(...)
setulb(...)
subsm(...)
timer(...)

Data Types
----------
fw_character_x3
fw_character_x60
fw_character_xX
fwi_integer
fwl_logical
fwr_dbl

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef  object setulb(fwi_integer_t n, fwi_integer_t m, object x, object l, object u, object nbd, fwr_dbl_t f, object g, fwr_dbl_t factr, fwr_dbl_t pgtol, object wa, object iwa, fw_bytes task, fwi_integer_t iprint, fw_bytes csave, object lsave, object isave, object dsave):
    """setulb(n, m, x, l, u, nbd, f, g, factr, pgtol, wa, iwa, task, iprint, csave, lsave, isave, dsave[, n, m, x, l, u, nbd, f, g, factr, pgtol, wa, iwa, task, iprint, csave, lsave, isave, dsave]) -> (n, m, x, l, u, nbd, f, g, factr, pgtol, wa, iwa, fw_task, iprint, fw_csave, lsave, isave, dsave)

    Parameters
    ----------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    factr : fwr_dbl, intent inout
    pgtol : fwr_dbl, intent inout
    wa : fwr_dbl, 1D array, dimension(2*m*n+4*n+12*m*m+12*m), intent inout
    iwa : fwi_integer, 1D array, dimension(3*n), intent inout
    task : fw_character_x60, len 60, intent inout
    iprint : fwi_integer, intent inout
    csave : fw_character_x60, len 60, intent inout
    lsave : fwl_logical, 1D array, dimension(4), intent inout
    isave : fwi_integer, 1D array, dimension(44), intent inout
    dsave : fwr_dbl, 1D array, dimension(29), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    factr : fwr_dbl, intent inout
    pgtol : fwr_dbl, intent inout
    wa : fwr_dbl, 1D array, dimension(2*m*n+4*n+12*m*m+12*m), intent inout
    iwa : fwi_integer, 1D array, dimension(3*n), intent inout
    task : fw_character_x60, len 60, intent inout
    iprint : fwi_integer, intent inout
    csave : fw_character_x60, len 60, intent inout
    lsave : fwl_logical, 1D array, dimension(4), intent inout
    isave : fwi_integer, 1D array, dimension(44), intent inout
    dsave : fwr_dbl, 1D array, dimension(29), intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef np.ndarray g_
    cdef np.ndarray wa_
    cdef np.ndarray iwa_
    cdef fw_bytes fw_task
    cdef fw_shape_t fw_task_len
    cdef char *fw_task_buf
    cdef fw_bytes fw_csave
    cdef fw_shape_t fw_csave_len
    cdef char *fw_csave_buf
    cdef np.ndarray lsave_
    cdef np.ndarray isave_
    cdef np.ndarray dsave_
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(nbd_)[0]):
        raise ValueError("(0 <= n <= nbd.shape[0]) not satisifed")
    g_, g = fw_asfortranarray(g, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(g_)[0]):
        raise ValueError("(0 <= n <= g.shape[0]) not satisifed")
    wa_, wa = fw_asfortranarray(wa, fwr_dbl_t_enum, 1, False)
    iwa_, iwa = fw_asfortranarray(iwa, fwi_integer_t_enum, 1, False)
    lsave_, lsave = fw_asfortranarray(lsave, fwl_logical_t_enum, 1, False)
    if not (0 <= 4 <= np.PyArray_DIMS(lsave_)[0]):
        raise ValueError("(0 <= 4 <= lsave.shape[0]) not satisifed")
    isave_, isave = fw_asfortranarray(isave, fwi_integer_t_enum, 1, False)
    if not (0 <= 44 <= np.PyArray_DIMS(isave_)[0]):
        raise ValueError("(0 <= 44 <= isave.shape[0]) not satisifed")
    dsave_, dsave = fw_asfortranarray(dsave, fwr_dbl_t_enum, 1, False)
    if not (0 <= 29 <= np.PyArray_DIMS(dsave_)[0]):
        raise ValueError("(0 <= 29 <= dsave.shape[0]) not satisifed")
    fw_task_len = 60
    fw_task = PyBytes_FromStringAndSize(NULL, fw_task_len)
    fw_task_buf = <char*>fw_task
    memcpy(fw_task_buf, <char*>task, fw_task_len+1)
    fw_csave_len = 60
    fw_csave = PyBytes_FromStringAndSize(NULL, fw_csave_len)
    fw_csave_buf = <char*>fw_csave
    memcpy(fw_csave_buf, <char*>csave, fw_csave_len+1)
    fc.setulb(&n, &m, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), &f, <fwr_dbl_t*>np.PyArray_DATA(g_), &factr, &pgtol, <fwr_dbl_t*>np.PyArray_DATA(wa_), <fwi_integer_t*>np.PyArray_DATA(iwa_), &fw_task_len, fw_task_buf, &iprint, &fw_csave_len, fw_csave_buf, <fwl_logical_t*>np.PyArray_DATA(lsave_), <fwi_integer_t*>np.PyArray_DATA(isave_), <fwr_dbl_t*>np.PyArray_DATA(dsave_))
    return (n, m, x, l, u, nbd, f, g, factr, pgtol, wa, iwa, fw_task, iprint, fw_csave, lsave, isave, dsave,)


cpdef  object mainlb(fwi_integer_t n, fwi_integer_t m, object x, object l, object u, object nbd, fwr_dbl_t f, object g, fwr_dbl_t factr, fwr_dbl_t pgtol, object ws, object wy, object sy, object ss, object yy, object wt, object wn, object snd, object z, object r, object d, object t, object wa, object sg, object sgo, object yg, object ygo, object index, object iwhere, object indx2, fw_bytes task, fwi_integer_t iprint, fw_bytes csave, object lsave, object isave, object dsave):
    """mainlb(n, m, x, l, u, nbd, f, g, factr, pgtol, ws, wy, sy, ss, yy, wt, wn, snd, z, r, d, t, wa, sg, sgo, yg, ygo, index, iwhere, indx2, task, iprint, csave, lsave, isave, dsave[, n, m, x, l, u, nbd, f, g, factr, pgtol, ws, wy, sy, ss, yy, wt, wn, snd, z, r, d, t, wa, sg, sgo, yg, ygo, index, iwhere, indx2, task, iprint, csave, lsave, isave, dsave]) -> (n, m, x, l, u, nbd, f, g, factr, pgtol, ws, wy, sy, ss, yy, wt, wn, snd, z, r, d, t, wa, sg, sgo, yg, ygo, index, iwhere, indx2, fw_task, iprint, fw_csave, lsave, isave, dsave)

    Parameters
    ----------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    factr : fwr_dbl, intent inout
    pgtol : fwr_dbl, intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    ss : fwr_dbl, 2D array, dimension(m, m), intent inout
    yy : fwr_dbl, 2D array, dimension(m, m), intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    wn : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    snd : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    z : fwr_dbl, 1D array, dimension(n), intent inout
    r : fwr_dbl, 1D array, dimension(n), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    t : fwr_dbl, 1D array, dimension(n), intent inout
    wa : fwr_dbl, 1D array, dimension(8*m), intent inout
    sg : fwr_dbl, 1D array, dimension(m), intent inout
    sgo : fwr_dbl, 1D array, dimension(m), intent inout
    yg : fwr_dbl, 1D array, dimension(m), intent inout
    ygo : fwr_dbl, 1D array, dimension(m), intent inout
    index : fwi_integer, 1D array, dimension(n), intent inout
    iwhere : fwi_integer, 1D array, dimension(n), intent inout
    indx2 : fwi_integer, 1D array, dimension(n), intent inout
    task : fw_character_x60, len 60, intent inout
    iprint : fwi_integer, intent inout
    csave : fw_character_x60, len 60, intent inout
    lsave : fwl_logical, 1D array, dimension(4), intent inout
    isave : fwi_integer, 1D array, dimension(23), intent inout
    dsave : fwr_dbl, 1D array, dimension(29), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    factr : fwr_dbl, intent inout
    pgtol : fwr_dbl, intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    ss : fwr_dbl, 2D array, dimension(m, m), intent inout
    yy : fwr_dbl, 2D array, dimension(m, m), intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    wn : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    snd : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    z : fwr_dbl, 1D array, dimension(n), intent inout
    r : fwr_dbl, 1D array, dimension(n), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    t : fwr_dbl, 1D array, dimension(n), intent inout
    wa : fwr_dbl, 1D array, dimension(8*m), intent inout
    sg : fwr_dbl, 1D array, dimension(m), intent inout
    sgo : fwr_dbl, 1D array, dimension(m), intent inout
    yg : fwr_dbl, 1D array, dimension(m), intent inout
    ygo : fwr_dbl, 1D array, dimension(m), intent inout
    index : fwi_integer, 1D array, dimension(n), intent inout
    iwhere : fwi_integer, 1D array, dimension(n), intent inout
    indx2 : fwi_integer, 1D array, dimension(n), intent inout
    task : fw_character_x60, len 60, intent inout
    iprint : fwi_integer, intent inout
    csave : fw_character_x60, len 60, intent inout
    lsave : fwl_logical, 1D array, dimension(4), intent inout
    isave : fwi_integer, 1D array, dimension(23), intent inout
    dsave : fwr_dbl, 1D array, dimension(29), intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef np.ndarray g_
    cdef np.ndarray ws_
    cdef np.ndarray wy_
    cdef np.ndarray sy_
    cdef np.ndarray ss_
    cdef np.ndarray yy_
    cdef np.ndarray wt_
    cdef np.ndarray wn_
    cdef np.ndarray snd_
    cdef np.ndarray z_
    cdef np.ndarray r_
    cdef np.ndarray d_
    cdef np.ndarray t_
    cdef np.ndarray wa_
    cdef np.ndarray sg_
    cdef np.ndarray sgo_
    cdef np.ndarray yg_
    cdef np.ndarray ygo_
    cdef np.ndarray index_
    cdef np.ndarray iwhere_
    cdef np.ndarray indx2_
    cdef fw_bytes fw_task
    cdef fw_shape_t fw_task_len
    cdef char *fw_task_buf
    cdef fw_bytes fw_csave
    cdef fw_shape_t fw_csave_len
    cdef char *fw_csave_buf
    cdef np.ndarray lsave_
    cdef np.ndarray isave_
    cdef np.ndarray dsave_
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(nbd_)[0]):
        raise ValueError("(0 <= n <= nbd.shape[0]) not satisifed")
    g_, g = fw_asfortranarray(g, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(g_)[0]):
        raise ValueError("(0 <= n <= g.shape[0]) not satisifed")
    ws_, ws = fw_asfortranarray(ws, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(ws_)[0]:
        raise ValueError("(n == ws.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(ws_)[1]):
        raise ValueError("(0 <= m <= ws.shape[1]) not satisifed")
    wy_, wy = fw_asfortranarray(wy, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(wy_)[0]:
        raise ValueError("(n == wy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wy_)[1]):
        raise ValueError("(0 <= m <= wy.shape[1]) not satisifed")
    sy_, sy = fw_asfortranarray(sy, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(sy_)[0]:
        raise ValueError("(m == sy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(sy_)[1]):
        raise ValueError("(0 <= m <= sy.shape[1]) not satisifed")
    ss_, ss = fw_asfortranarray(ss, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(ss_)[0]:
        raise ValueError("(m == ss.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(ss_)[1]):
        raise ValueError("(0 <= m <= ss.shape[1]) not satisifed")
    yy_, yy = fw_asfortranarray(yy, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(yy_)[0]:
        raise ValueError("(m == yy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(yy_)[1]):
        raise ValueError("(0 <= m <= yy.shape[1]) not satisifed")
    wt_, wt = fw_asfortranarray(wt, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(wt_)[0]:
        raise ValueError("(m == wt.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wt_)[1]):
        raise ValueError("(0 <= m <= wt.shape[1]) not satisifed")
    wn_, wn = fw_asfortranarray(wn, fwr_dbl_t_enum, 2, False)
    snd_, snd = fw_asfortranarray(snd, fwr_dbl_t_enum, 2, False)
    z_, z = fw_asfortranarray(z, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(z_)[0]):
        raise ValueError("(0 <= n <= z.shape[0]) not satisifed")
    r_, r = fw_asfortranarray(r, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(r_)[0]):
        raise ValueError("(0 <= n <= r.shape[0]) not satisifed")
    d_, d = fw_asfortranarray(d, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(d_)[0]):
        raise ValueError("(0 <= n <= d.shape[0]) not satisifed")
    t_, t = fw_asfortranarray(t, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(t_)[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    wa_, wa = fw_asfortranarray(wa, fwr_dbl_t_enum, 1, False)
    sg_, sg = fw_asfortranarray(sg, fwr_dbl_t_enum, 1, False)
    if not (0 <= m <= np.PyArray_DIMS(sg_)[0]):
        raise ValueError("(0 <= m <= sg.shape[0]) not satisifed")
    sgo_, sgo = fw_asfortranarray(sgo, fwr_dbl_t_enum, 1, False)
    if not (0 <= m <= np.PyArray_DIMS(sgo_)[0]):
        raise ValueError("(0 <= m <= sgo.shape[0]) not satisifed")
    yg_, yg = fw_asfortranarray(yg, fwr_dbl_t_enum, 1, False)
    if not (0 <= m <= np.PyArray_DIMS(yg_)[0]):
        raise ValueError("(0 <= m <= yg.shape[0]) not satisifed")
    ygo_, ygo = fw_asfortranarray(ygo, fwr_dbl_t_enum, 1, False)
    if not (0 <= m <= np.PyArray_DIMS(ygo_)[0]):
        raise ValueError("(0 <= m <= ygo.shape[0]) not satisifed")
    index_, index = fw_asfortranarray(index, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(index_)[0]):
        raise ValueError("(0 <= n <= index.shape[0]) not satisifed")
    iwhere_, iwhere = fw_asfortranarray(iwhere, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(iwhere_)[0]):
        raise ValueError("(0 <= n <= iwhere.shape[0]) not satisifed")
    indx2_, indx2 = fw_asfortranarray(indx2, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(indx2_)[0]):
        raise ValueError("(0 <= n <= indx2.shape[0]) not satisifed")
    lsave_, lsave = fw_asfortranarray(lsave, fwl_logical_t_enum, 1, False)
    if not (0 <= 4 <= np.PyArray_DIMS(lsave_)[0]):
        raise ValueError("(0 <= 4 <= lsave.shape[0]) not satisifed")
    isave_, isave = fw_asfortranarray(isave, fwi_integer_t_enum, 1, False)
    if not (0 <= 23 <= np.PyArray_DIMS(isave_)[0]):
        raise ValueError("(0 <= 23 <= isave.shape[0]) not satisifed")
    dsave_, dsave = fw_asfortranarray(dsave, fwr_dbl_t_enum, 1, False)
    if not (0 <= 29 <= np.PyArray_DIMS(dsave_)[0]):
        raise ValueError("(0 <= 29 <= dsave.shape[0]) not satisifed")
    fw_task_len = 60
    fw_task = PyBytes_FromStringAndSize(NULL, fw_task_len)
    fw_task_buf = <char*>fw_task
    memcpy(fw_task_buf, <char*>task, fw_task_len+1)
    fw_csave_len = 60
    fw_csave = PyBytes_FromStringAndSize(NULL, fw_csave_len)
    fw_csave_buf = <char*>fw_csave
    memcpy(fw_csave_buf, <char*>csave, fw_csave_len+1)
    fc.mainlb(&n, &m, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), &f, <fwr_dbl_t*>np.PyArray_DATA(g_), &factr, &pgtol, <fwr_dbl_t*>np.PyArray_DATA(ws_), <fwr_dbl_t*>np.PyArray_DATA(wy_), <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(ss_), <fwr_dbl_t*>np.PyArray_DATA(yy_), <fwr_dbl_t*>np.PyArray_DATA(wt_), <fwr_dbl_t*>np.PyArray_DATA(wn_), <fwr_dbl_t*>np.PyArray_DATA(snd_), <fwr_dbl_t*>np.PyArray_DATA(z_), <fwr_dbl_t*>np.PyArray_DATA(r_), <fwr_dbl_t*>np.PyArray_DATA(d_), <fwr_dbl_t*>np.PyArray_DATA(t_), <fwr_dbl_t*>np.PyArray_DATA(wa_), <fwr_dbl_t*>np.PyArray_DATA(sg_), <fwr_dbl_t*>np.PyArray_DATA(sgo_), <fwr_dbl_t*>np.PyArray_DATA(yg_), <fwr_dbl_t*>np.PyArray_DATA(ygo_), <fwi_integer_t*>np.PyArray_DATA(index_), <fwi_integer_t*>np.PyArray_DATA(iwhere_), <fwi_integer_t*>np.PyArray_DATA(indx2_), &fw_task_len, fw_task_buf, &iprint, &fw_csave_len, fw_csave_buf, <fwl_logical_t*>np.PyArray_DATA(lsave_), <fwi_integer_t*>np.PyArray_DATA(isave_), <fwr_dbl_t*>np.PyArray_DATA(dsave_))
    return (n, m, x, l, u, nbd, f, g, factr, pgtol, ws, wy, sy, ss, yy, wt, wn, snd, z, r, d, t, wa, sg, sgo, yg, ygo, index, iwhere, indx2, fw_task, iprint, fw_csave, lsave, isave, dsave,)


cpdef  object active(fwi_integer_t n, object l, object u, object nbd, object x, object iwhere, fwi_integer_t iprint, bint prjctd, bint cnstnd, bint boxed):
    """active(n, l, u, nbd, x, iwhere, iprint, prjctd, cnstnd, boxed[, n, l, u, nbd, x, iwhere, iprint, prjctd, cnstnd, boxed]) -> (n, l, u, nbd, x, iwhere, iprint, prjctd_, cnstnd_, boxed_)

    Parameters
    ----------
    n : fwi_integer, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    iwhere : fwi_integer, 1D array, dimension(n), intent inout
    iprint : fwi_integer, intent inout
    prjctd : fwl_logical, intent inout
    cnstnd : fwl_logical, intent inout
    boxed : fwl_logical, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    iwhere : fwi_integer, 1D array, dimension(n), intent inout
    iprint : fwi_integer, intent inout
    prjctd : fwl_logical, intent inout
    cnstnd : fwl_logical, intent inout
    boxed : fwl_logical, intent inout

    """
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef np.ndarray x_
    cdef np.ndarray iwhere_
    cdef fwl_logical_t prjctd_
    cdef fwl_logical_t cnstnd_
    cdef fwl_logical_t boxed_
    prjctd_ = 1 if prjctd else 0
    cnstnd_ = 1 if cnstnd else 0
    boxed_ = 1 if boxed else 0
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(nbd_)[0]):
        raise ValueError("(0 <= n <= nbd.shape[0]) not satisifed")
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    iwhere_, iwhere = fw_asfortranarray(iwhere, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(iwhere_)[0]):
        raise ValueError("(0 <= n <= iwhere.shape[0]) not satisifed")
    fc.active(&n, <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), <fwr_dbl_t*>np.PyArray_DATA(x_), <fwi_integer_t*>np.PyArray_DATA(iwhere_), &iprint, &prjctd_, &cnstnd_, &boxed_)
    return (n, l, u, nbd, x, iwhere, iprint, prjctd_, cnstnd_, boxed_,)


cpdef  object bmv(fwi_integer_t m, object sy, object wt, fwi_integer_t col, object v, object p, fwi_integer_t info):
    """bmv(m, sy, wt, col, v, p, info[, m, sy, wt, col, v, p, info]) -> (m, sy, wt, col, v, p, info)

    Parameters
    ----------
    m : fwi_integer, intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    col : fwi_integer, intent inout
    v : fwr_dbl, 1D array, dimension(2*col), intent inout
    p : fwr_dbl, 1D array, dimension(2*col), intent inout
    info : fwi_integer, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    col : fwi_integer, intent inout
    v : fwr_dbl, 1D array, dimension(2*col), intent inout
    p : fwr_dbl, 1D array, dimension(2*col), intent inout
    info : fwi_integer, intent inout

    """
    cdef np.ndarray sy_
    cdef np.ndarray wt_
    cdef np.ndarray v_
    cdef np.ndarray p_
    sy_, sy = fw_asfortranarray(sy, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(sy_)[0]:
        raise ValueError("(m == sy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(sy_)[1]):
        raise ValueError("(0 <= m <= sy.shape[1]) not satisifed")
    wt_, wt = fw_asfortranarray(wt, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(wt_)[0]:
        raise ValueError("(m == wt.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wt_)[1]):
        raise ValueError("(0 <= m <= wt.shape[1]) not satisifed")
    v_, v = fw_asfortranarray(v, fwr_dbl_t_enum, 1, False)
    p_, p = fw_asfortranarray(p, fwr_dbl_t_enum, 1, False)
    fc.bmv(&m, <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(wt_), &col, <fwr_dbl_t*>np.PyArray_DATA(v_), <fwr_dbl_t*>np.PyArray_DATA(p_), &info)
    return (m, sy, wt, col, v, p, info,)


cpdef  object cauchy(fwi_integer_t n, object x, object l, object u, object nbd, object g, object iorder, object iwhere, object t, object d, object xcp, fwi_integer_t m, object wy, object ws, object sy, object wt, fwr_dbl_t theta, fwi_integer_t col, fwi_integer_t head, object p, object c, object wbp, object v, fwi_integer_t nint, object sg, object yg, fwi_integer_t iprint, fwr_dbl_t sbgnrm, fwi_integer_t info, fwr_dbl_t epsmch):
    """cauchy(n, x, l, u, nbd, g, iorder, iwhere, t, d, xcp, m, wy, ws, sy, wt, theta, col, head, p, c, wbp, v, nint, sg, yg, iprint, sbgnrm, info, epsmch[, n, x, l, u, nbd, g, iorder, iwhere, t, d, xcp, m, wy, ws, sy, wt, theta, col, head, p, c, wbp, v, nint, sg, yg, iprint, sbgnrm, info, epsmch]) -> (n, x, l, u, nbd, g, iorder, iwhere, t, d, xcp, m, wy, ws, sy, wt, theta, col, head, p, c, wbp, v, nint, sg, yg, iprint, sbgnrm, info, epsmch)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    iorder : fwi_integer, 1D array, dimension(n), intent inout
    iwhere : fwi_integer, 1D array, dimension(n), intent inout
    t : fwr_dbl, 1D array, dimension(n), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    xcp : fwr_dbl, 1D array, dimension(n), intent inout
    m : fwi_integer, intent inout
    wy : fwr_dbl, 2D array, dimension(n, col), intent inout
    ws : fwr_dbl, 2D array, dimension(n, col), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    theta : fwr_dbl, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    p : fwr_dbl, 1D array, dimension(2*m), intent inout
    c : fwr_dbl, 1D array, dimension(2*m), intent inout
    wbp : fwr_dbl, 1D array, dimension(2*m), intent inout
    v : fwr_dbl, 1D array, dimension(2*m), intent inout
    nint : fwi_integer, intent inout
    sg : fwr_dbl, 1D array, dimension(m), intent inout
    yg : fwr_dbl, 1D array, dimension(m), intent inout
    iprint : fwi_integer, intent inout
    sbgnrm : fwr_dbl, intent inout
    info : fwi_integer, intent inout
    epsmch : fwr_dbl, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    iorder : fwi_integer, 1D array, dimension(n), intent inout
    iwhere : fwi_integer, 1D array, dimension(n), intent inout
    t : fwr_dbl, 1D array, dimension(n), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    xcp : fwr_dbl, 1D array, dimension(n), intent inout
    m : fwi_integer, intent inout
    wy : fwr_dbl, 2D array, dimension(n, col), intent inout
    ws : fwr_dbl, 2D array, dimension(n, col), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    theta : fwr_dbl, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    p : fwr_dbl, 1D array, dimension(2*m), intent inout
    c : fwr_dbl, 1D array, dimension(2*m), intent inout
    wbp : fwr_dbl, 1D array, dimension(2*m), intent inout
    v : fwr_dbl, 1D array, dimension(2*m), intent inout
    nint : fwi_integer, intent inout
    sg : fwr_dbl, 1D array, dimension(m), intent inout
    yg : fwr_dbl, 1D array, dimension(m), intent inout
    iprint : fwi_integer, intent inout
    sbgnrm : fwr_dbl, intent inout
    info : fwi_integer, intent inout
    epsmch : fwr_dbl, intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef np.ndarray g_
    cdef np.ndarray iorder_
    cdef np.ndarray iwhere_
    cdef np.ndarray t_
    cdef np.ndarray d_
    cdef np.ndarray xcp_
    cdef np.ndarray wy_
    cdef np.ndarray ws_
    cdef np.ndarray sy_
    cdef np.ndarray wt_
    cdef np.ndarray p_
    cdef np.ndarray c_
    cdef np.ndarray wbp_
    cdef np.ndarray v_
    cdef np.ndarray sg_
    cdef np.ndarray yg_
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(nbd_)[0]):
        raise ValueError("(0 <= n <= nbd.shape[0]) not satisifed")
    g_, g = fw_asfortranarray(g, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(g_)[0]):
        raise ValueError("(0 <= n <= g.shape[0]) not satisifed")
    iorder_, iorder = fw_asfortranarray(iorder, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(iorder_)[0]):
        raise ValueError("(0 <= n <= iorder.shape[0]) not satisifed")
    iwhere_, iwhere = fw_asfortranarray(iwhere, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(iwhere_)[0]):
        raise ValueError("(0 <= n <= iwhere.shape[0]) not satisifed")
    t_, t = fw_asfortranarray(t, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(t_)[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    d_, d = fw_asfortranarray(d, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(d_)[0]):
        raise ValueError("(0 <= n <= d.shape[0]) not satisifed")
    xcp_, xcp = fw_asfortranarray(xcp, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(xcp_)[0]):
        raise ValueError("(0 <= n <= xcp.shape[0]) not satisifed")
    wy_, wy = fw_asfortranarray(wy, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(wy_)[0]:
        raise ValueError("(n == wy.shape[0]) not satisifed")
    if not (0 <= col <= np.PyArray_DIMS(wy_)[1]):
        raise ValueError("(0 <= col <= wy.shape[1]) not satisifed")
    ws_, ws = fw_asfortranarray(ws, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(ws_)[0]:
        raise ValueError("(n == ws.shape[0]) not satisifed")
    if not (0 <= col <= np.PyArray_DIMS(ws_)[1]):
        raise ValueError("(0 <= col <= ws.shape[1]) not satisifed")
    sy_, sy = fw_asfortranarray(sy, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(sy_)[0]:
        raise ValueError("(m == sy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(sy_)[1]):
        raise ValueError("(0 <= m <= sy.shape[1]) not satisifed")
    wt_, wt = fw_asfortranarray(wt, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(wt_)[0]:
        raise ValueError("(m == wt.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wt_)[1]):
        raise ValueError("(0 <= m <= wt.shape[1]) not satisifed")
    p_, p = fw_asfortranarray(p, fwr_dbl_t_enum, 1, False)
    c_, c = fw_asfortranarray(c, fwr_dbl_t_enum, 1, False)
    wbp_, wbp = fw_asfortranarray(wbp, fwr_dbl_t_enum, 1, False)
    v_, v = fw_asfortranarray(v, fwr_dbl_t_enum, 1, False)
    sg_, sg = fw_asfortranarray(sg, fwr_dbl_t_enum, 1, False)
    if not (0 <= m <= np.PyArray_DIMS(sg_)[0]):
        raise ValueError("(0 <= m <= sg.shape[0]) not satisifed")
    yg_, yg = fw_asfortranarray(yg, fwr_dbl_t_enum, 1, False)
    if not (0 <= m <= np.PyArray_DIMS(yg_)[0]):
        raise ValueError("(0 <= m <= yg.shape[0]) not satisifed")
    fc.cauchy(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), <fwr_dbl_t*>np.PyArray_DATA(g_), <fwi_integer_t*>np.PyArray_DATA(iorder_), <fwi_integer_t*>np.PyArray_DATA(iwhere_), <fwr_dbl_t*>np.PyArray_DATA(t_), <fwr_dbl_t*>np.PyArray_DATA(d_), <fwr_dbl_t*>np.PyArray_DATA(xcp_), &m, <fwr_dbl_t*>np.PyArray_DATA(wy_), <fwr_dbl_t*>np.PyArray_DATA(ws_), <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(wt_), &theta, &col, &head, <fwr_dbl_t*>np.PyArray_DATA(p_), <fwr_dbl_t*>np.PyArray_DATA(c_), <fwr_dbl_t*>np.PyArray_DATA(wbp_), <fwr_dbl_t*>np.PyArray_DATA(v_), &nint, <fwr_dbl_t*>np.PyArray_DATA(sg_), <fwr_dbl_t*>np.PyArray_DATA(yg_), &iprint, &sbgnrm, &info, &epsmch)
    return (n, x, l, u, nbd, g, iorder, iwhere, t, d, xcp, m, wy, ws, sy, wt, theta, col, head, p, c, wbp, v, nint, sg, yg, iprint, sbgnrm, info, epsmch,)


cpdef  object cmprlb(fwi_integer_t n, fwi_integer_t m, object x, object g, object ws, object wy, object sy, object wt, object z, object r, object wa, object index, fwr_dbl_t theta, fwi_integer_t col, fwi_integer_t head, fwi_integer_t nfree, bint cnstnd, fwi_integer_t info):
    """cmprlb(n, m, x, g, ws, wy, sy, wt, z, r, wa, index, theta, col, head, nfree, cnstnd, info[, n, m, x, g, ws, wy, sy, wt, z, r, wa, index, theta, col, head, nfree, cnstnd, info]) -> (n, m, x, g, ws, wy, sy, wt, z, r, wa, index, theta, col, head, nfree, cnstnd_, info)

    Parameters
    ----------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    z : fwr_dbl, 1D array, dimension(n), intent inout
    r : fwr_dbl, 1D array, dimension(n), intent inout
    wa : fwr_dbl, 1D array, dimension(4*m), intent inout
    index : fwi_integer, 1D array, dimension(n), intent inout
    theta : fwr_dbl, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    nfree : fwi_integer, intent inout
    cnstnd : fwl_logical, intent inout
    info : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    z : fwr_dbl, 1D array, dimension(n), intent inout
    r : fwr_dbl, 1D array, dimension(n), intent inout
    wa : fwr_dbl, 1D array, dimension(4*m), intent inout
    index : fwi_integer, 1D array, dimension(n), intent inout
    theta : fwr_dbl, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    nfree : fwi_integer, intent inout
    cnstnd : fwl_logical, intent inout
    info : fwi_integer, intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray g_
    cdef np.ndarray ws_
    cdef np.ndarray wy_
    cdef np.ndarray sy_
    cdef np.ndarray wt_
    cdef np.ndarray z_
    cdef np.ndarray r_
    cdef np.ndarray wa_
    cdef np.ndarray index_
    cdef fwl_logical_t cnstnd_
    cnstnd_ = 1 if cnstnd else 0
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    g_, g = fw_asfortranarray(g, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(g_)[0]):
        raise ValueError("(0 <= n <= g.shape[0]) not satisifed")
    ws_, ws = fw_asfortranarray(ws, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(ws_)[0]:
        raise ValueError("(n == ws.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(ws_)[1]):
        raise ValueError("(0 <= m <= ws.shape[1]) not satisifed")
    wy_, wy = fw_asfortranarray(wy, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(wy_)[0]:
        raise ValueError("(n == wy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wy_)[1]):
        raise ValueError("(0 <= m <= wy.shape[1]) not satisifed")
    sy_, sy = fw_asfortranarray(sy, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(sy_)[0]:
        raise ValueError("(m == sy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(sy_)[1]):
        raise ValueError("(0 <= m <= sy.shape[1]) not satisifed")
    wt_, wt = fw_asfortranarray(wt, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(wt_)[0]:
        raise ValueError("(m == wt.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wt_)[1]):
        raise ValueError("(0 <= m <= wt.shape[1]) not satisifed")
    z_, z = fw_asfortranarray(z, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(z_)[0]):
        raise ValueError("(0 <= n <= z.shape[0]) not satisifed")
    r_, r = fw_asfortranarray(r, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(r_)[0]):
        raise ValueError("(0 <= n <= r.shape[0]) not satisifed")
    wa_, wa = fw_asfortranarray(wa, fwr_dbl_t_enum, 1, False)
    index_, index = fw_asfortranarray(index, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(index_)[0]):
        raise ValueError("(0 <= n <= index.shape[0]) not satisifed")
    fc.cmprlb(&n, &m, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(g_), <fwr_dbl_t*>np.PyArray_DATA(ws_), <fwr_dbl_t*>np.PyArray_DATA(wy_), <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(wt_), <fwr_dbl_t*>np.PyArray_DATA(z_), <fwr_dbl_t*>np.PyArray_DATA(r_), <fwr_dbl_t*>np.PyArray_DATA(wa_), <fwi_integer_t*>np.PyArray_DATA(index_), &theta, &col, &head, &nfree, &cnstnd_, &info)
    return (n, m, x, g, ws, wy, sy, wt, z, r, wa, index, theta, col, head, nfree, cnstnd_, info,)


cpdef  object errclb(fwi_integer_t n, fwi_integer_t m, fwr_dbl_t factr, object l, object u, object nbd, fw_bytes task, fwi_integer_t info, fwi_integer_t k):
    """errclb(n, m, factr, l, u, nbd, task, info, k[, n, m, factr, l, u, nbd, task, info, k]) -> (n, m, factr, l, u, nbd, fw_task, info, k)

    Parameters
    ----------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    factr : fwr_dbl, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    task : fw_character_x60, len 60, intent inout
    info : fwi_integer, intent inout
    k : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    factr : fwr_dbl, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    task : fw_character_x60, len 60, intent inout
    info : fwi_integer, intent inout
    k : fwi_integer, intent inout

    """
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef fw_bytes fw_task
    cdef fw_shape_t fw_task_len
    cdef char *fw_task_buf
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(nbd_)[0]):
        raise ValueError("(0 <= n <= nbd.shape[0]) not satisifed")
    fw_task_len = 60
    fw_task = PyBytes_FromStringAndSize(NULL, fw_task_len)
    fw_task_buf = <char*>fw_task
    memcpy(fw_task_buf, <char*>task, fw_task_len+1)
    fc.errclb(&n, &m, &factr, <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), &fw_task_len, fw_task_buf, &info, &k)
    return (n, m, factr, l, u, nbd, fw_task, info, k,)


cpdef  object formk(fwi_integer_t n, fwi_integer_t nsub, object ind, fwi_integer_t nenter, fwi_integer_t ileave, object indx2, fwi_integer_t iupdat, bint updatd, object wn, object wn1, fwi_integer_t m, object ws, object wy, object sy, fwr_dbl_t theta, fwi_integer_t col, fwi_integer_t head, fwi_integer_t info):
    """formk(n, nsub, ind, nenter, ileave, indx2, iupdat, updatd, wn, wn1, m, ws, wy, sy, theta, col, head, info[, n, nsub, ind, nenter, ileave, indx2, iupdat, updatd, wn, wn1, m, ws, wy, sy, theta, col, head, info]) -> (n, nsub, ind, nenter, ileave, indx2, iupdat, updatd_, wn, wn1, m, ws, wy, sy, theta, col, head, info)

    Parameters
    ----------
    n : fwi_integer, intent inout
    nsub : fwi_integer, intent inout
    ind : fwi_integer, 1D array, dimension(n), intent inout
    nenter : fwi_integer, intent inout
    ileave : fwi_integer, intent inout
    indx2 : fwi_integer, 1D array, dimension(n), intent inout
    iupdat : fwi_integer, intent inout
    updatd : fwl_logical, intent inout
    wn : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    wn1 : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    m : fwi_integer, intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    theta : fwr_dbl, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    info : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    nsub : fwi_integer, intent inout
    ind : fwi_integer, 1D array, dimension(n), intent inout
    nenter : fwi_integer, intent inout
    ileave : fwi_integer, intent inout
    indx2 : fwi_integer, 1D array, dimension(n), intent inout
    iupdat : fwi_integer, intent inout
    updatd : fwl_logical, intent inout
    wn : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    wn1 : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    m : fwi_integer, intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    theta : fwr_dbl, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    info : fwi_integer, intent inout

    """
    cdef np.ndarray ind_
    cdef np.ndarray indx2_
    cdef fwl_logical_t updatd_
    cdef np.ndarray wn_
    cdef np.ndarray wn1_
    cdef np.ndarray ws_
    cdef np.ndarray wy_
    cdef np.ndarray sy_
    updatd_ = 1 if updatd else 0
    ind_, ind = fw_asfortranarray(ind, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(ind_)[0]):
        raise ValueError("(0 <= n <= ind.shape[0]) not satisifed")
    indx2_, indx2 = fw_asfortranarray(indx2, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(indx2_)[0]):
        raise ValueError("(0 <= n <= indx2.shape[0]) not satisifed")
    wn_, wn = fw_asfortranarray(wn, fwr_dbl_t_enum, 2, False)
    wn1_, wn1 = fw_asfortranarray(wn1, fwr_dbl_t_enum, 2, False)
    ws_, ws = fw_asfortranarray(ws, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(ws_)[0]:
        raise ValueError("(n == ws.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(ws_)[1]):
        raise ValueError("(0 <= m <= ws.shape[1]) not satisifed")
    wy_, wy = fw_asfortranarray(wy, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(wy_)[0]:
        raise ValueError("(n == wy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wy_)[1]):
        raise ValueError("(0 <= m <= wy.shape[1]) not satisifed")
    sy_, sy = fw_asfortranarray(sy, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(sy_)[0]:
        raise ValueError("(m == sy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(sy_)[1]):
        raise ValueError("(0 <= m <= sy.shape[1]) not satisifed")
    fc.formk(&n, &nsub, <fwi_integer_t*>np.PyArray_DATA(ind_), &nenter, &ileave, <fwi_integer_t*>np.PyArray_DATA(indx2_), &iupdat, &updatd_, <fwr_dbl_t*>np.PyArray_DATA(wn_), <fwr_dbl_t*>np.PyArray_DATA(wn1_), &m, <fwr_dbl_t*>np.PyArray_DATA(ws_), <fwr_dbl_t*>np.PyArray_DATA(wy_), <fwr_dbl_t*>np.PyArray_DATA(sy_), &theta, &col, &head, &info)
    return (n, nsub, ind, nenter, ileave, indx2, iupdat, updatd_, wn, wn1, m, ws, wy, sy, theta, col, head, info,)


cpdef  object formt(fwi_integer_t m, object wt, object sy, object ss, fwi_integer_t col, fwr_dbl_t theta, fwi_integer_t info):
    """formt(m, wt, sy, ss, col, theta, info[, m, wt, sy, ss, col, theta, info]) -> (m, wt, sy, ss, col, theta, info)

    Parameters
    ----------
    m : fwi_integer, intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    ss : fwr_dbl, 2D array, dimension(m, m), intent inout
    col : fwi_integer, intent inout
    theta : fwr_dbl, intent inout
    info : fwi_integer, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    wt : fwr_dbl, 2D array, dimension(m, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    ss : fwr_dbl, 2D array, dimension(m, m), intent inout
    col : fwi_integer, intent inout
    theta : fwr_dbl, intent inout
    info : fwi_integer, intent inout

    """
    cdef np.ndarray wt_
    cdef np.ndarray sy_
    cdef np.ndarray ss_
    wt_, wt = fw_asfortranarray(wt, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(wt_)[0]:
        raise ValueError("(m == wt.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wt_)[1]):
        raise ValueError("(0 <= m <= wt.shape[1]) not satisifed")
    sy_, sy = fw_asfortranarray(sy, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(sy_)[0]:
        raise ValueError("(m == sy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(sy_)[1]):
        raise ValueError("(0 <= m <= sy.shape[1]) not satisifed")
    ss_, ss = fw_asfortranarray(ss, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(ss_)[0]:
        raise ValueError("(m == ss.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(ss_)[1]):
        raise ValueError("(0 <= m <= ss.shape[1]) not satisifed")
    fc.formt(&m, <fwr_dbl_t*>np.PyArray_DATA(wt_), <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(ss_), &col, &theta, &info)
    return (m, wt, sy, ss, col, theta, info,)


cpdef  object freev(fwi_integer_t n, fwi_integer_t nfree, object index, fwi_integer_t nenter, fwi_integer_t ileave, object indx2, object iwhere, bint wrk, bint updatd, bint cnstnd, fwi_integer_t iprint, fwi_integer_t iter):
    """freev(n, nfree, index, nenter, ileave, indx2, iwhere, wrk, updatd, cnstnd, iprint, iter[, n, nfree, index, nenter, ileave, indx2, iwhere, wrk, updatd, cnstnd, iprint, iter]) -> (n, nfree, index, nenter, ileave, indx2, iwhere, wrk_, updatd_, cnstnd_, iprint, iter)

    Parameters
    ----------
    n : fwi_integer, intent inout
    nfree : fwi_integer, intent inout
    index : fwi_integer, 1D array, dimension(n), intent inout
    nenter : fwi_integer, intent inout
    ileave : fwi_integer, intent inout
    indx2 : fwi_integer, 1D array, dimension(n), intent inout
    iwhere : fwi_integer, 1D array, dimension(n), intent inout
    wrk : fwl_logical, intent inout
    updatd : fwl_logical, intent inout
    cnstnd : fwl_logical, intent inout
    iprint : fwi_integer, intent inout
    iter : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    nfree : fwi_integer, intent inout
    index : fwi_integer, 1D array, dimension(n), intent inout
    nenter : fwi_integer, intent inout
    ileave : fwi_integer, intent inout
    indx2 : fwi_integer, 1D array, dimension(n), intent inout
    iwhere : fwi_integer, 1D array, dimension(n), intent inout
    wrk : fwl_logical, intent inout
    updatd : fwl_logical, intent inout
    cnstnd : fwl_logical, intent inout
    iprint : fwi_integer, intent inout
    iter : fwi_integer, intent inout

    """
    cdef np.ndarray index_
    cdef np.ndarray indx2_
    cdef np.ndarray iwhere_
    cdef fwl_logical_t wrk_
    cdef fwl_logical_t updatd_
    cdef fwl_logical_t cnstnd_
    wrk_ = 1 if wrk else 0
    updatd_ = 1 if updatd else 0
    cnstnd_ = 1 if cnstnd else 0
    index_, index = fw_asfortranarray(index, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(index_)[0]):
        raise ValueError("(0 <= n <= index.shape[0]) not satisifed")
    indx2_, indx2 = fw_asfortranarray(indx2, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(indx2_)[0]):
        raise ValueError("(0 <= n <= indx2.shape[0]) not satisifed")
    iwhere_, iwhere = fw_asfortranarray(iwhere, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(iwhere_)[0]):
        raise ValueError("(0 <= n <= iwhere.shape[0]) not satisifed")
    fc.freev(&n, &nfree, <fwi_integer_t*>np.PyArray_DATA(index_), &nenter, &ileave, <fwi_integer_t*>np.PyArray_DATA(indx2_), <fwi_integer_t*>np.PyArray_DATA(iwhere_), &wrk_, &updatd_, &cnstnd_, &iprint, &iter)
    return (n, nfree, index, nenter, ileave, indx2, iwhere, wrk_, updatd_, cnstnd_, iprint, iter,)


cpdef  object hpsolb(fwi_integer_t n, object t, object iorder, fwi_integer_t iheap):
    """hpsolb(n, t, iorder, iheap[, n, t, iorder, iheap]) -> (n, t, iorder, iheap)

    Parameters
    ----------
    n : fwi_integer, intent inout
    t : fwr_dbl, 1D array, dimension(n), intent inout
    iorder : fwi_integer, 1D array, dimension(n), intent inout
    iheap : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    t : fwr_dbl, 1D array, dimension(n), intent inout
    iorder : fwi_integer, 1D array, dimension(n), intent inout
    iheap : fwi_integer, intent inout

    """
    cdef np.ndarray t_
    cdef np.ndarray iorder_
    t_, t = fw_asfortranarray(t, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(t_)[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    iorder_, iorder = fw_asfortranarray(iorder, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(iorder_)[0]):
        raise ValueError("(0 <= n <= iorder.shape[0]) not satisifed")
    fc.hpsolb(&n, <fwr_dbl_t*>np.PyArray_DATA(t_), <fwi_integer_t*>np.PyArray_DATA(iorder_), &iheap)
    return (n, t, iorder, iheap,)


cpdef  object lnsrlb(fwi_integer_t n, object l, object u, object nbd, object x, fwr_dbl_t f, fwr_dbl_t fold, fwr_dbl_t gd, fwr_dbl_t gdold, object g, object d, object r, object t, object z, fwr_dbl_t stp, fwr_dbl_t dnorm, fwr_dbl_t dtd, fwr_dbl_t xstep, fwr_dbl_t stpmx, fwi_integer_t iter, fwi_integer_t ifun, fwi_integer_t iback, fwi_integer_t nfgv, fwi_integer_t info, fw_bytes task, bint boxed, bint cnstnd, fw_bytes csave, object isave, object dsave):
    """lnsrlb(n, l, u, nbd, x, f, fold, gd, gdold, g, d, r, t, z, stp, dnorm, dtd, xstep, stpmx, iter, ifun, iback, nfgv, info, task, boxed, cnstnd, csave, isave, dsave[, n, l, u, nbd, x, f, fold, gd, gdold, g, d, r, t, z, stp, dnorm, dtd, xstep, stpmx, iter, ifun, iback, nfgv, info, task, boxed, cnstnd, csave, isave, dsave]) -> (n, l, u, nbd, x, f, fold, gd, gdold, g, d, r, t, z, stp, dnorm, dtd, xstep, stpmx, iter, ifun, iback, nfgv, info, fw_task, boxed_, cnstnd_, fw_csave, isave, dsave)

    Parameters
    ----------
    n : fwi_integer, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    fold : fwr_dbl, intent inout
    gd : fwr_dbl, intent inout
    gdold : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    r : fwr_dbl, 1D array, dimension(n), intent inout
    t : fwr_dbl, 1D array, dimension(n), intent inout
    z : fwr_dbl, 1D array, dimension(n), intent inout
    stp : fwr_dbl, intent inout
    dnorm : fwr_dbl, intent inout
    dtd : fwr_dbl, intent inout
    xstep : fwr_dbl, intent inout
    stpmx : fwr_dbl, intent inout
    iter : fwi_integer, intent inout
    ifun : fwi_integer, intent inout
    iback : fwi_integer, intent inout
    nfgv : fwi_integer, intent inout
    info : fwi_integer, intent inout
    task : fw_character_x60, len 60, intent inout
    boxed : fwl_logical, intent inout
    cnstnd : fwl_logical, intent inout
    csave : fw_character_x60, len 60, intent inout
    isave : fwi_integer, 1D array, dimension(2), intent inout
    dsave : fwr_dbl, 1D array, dimension(13), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    fold : fwr_dbl, intent inout
    gd : fwr_dbl, intent inout
    gdold : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    r : fwr_dbl, 1D array, dimension(n), intent inout
    t : fwr_dbl, 1D array, dimension(n), intent inout
    z : fwr_dbl, 1D array, dimension(n), intent inout
    stp : fwr_dbl, intent inout
    dnorm : fwr_dbl, intent inout
    dtd : fwr_dbl, intent inout
    xstep : fwr_dbl, intent inout
    stpmx : fwr_dbl, intent inout
    iter : fwi_integer, intent inout
    ifun : fwi_integer, intent inout
    iback : fwi_integer, intent inout
    nfgv : fwi_integer, intent inout
    info : fwi_integer, intent inout
    task : fw_character_x60, len 60, intent inout
    boxed : fwl_logical, intent inout
    cnstnd : fwl_logical, intent inout
    csave : fw_character_x60, len 60, intent inout
    isave : fwi_integer, 1D array, dimension(2), intent inout
    dsave : fwr_dbl, 1D array, dimension(13), intent inout

    """
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef np.ndarray x_
    cdef np.ndarray g_
    cdef np.ndarray d_
    cdef np.ndarray r_
    cdef np.ndarray t_
    cdef np.ndarray z_
    cdef fw_bytes fw_task
    cdef fw_shape_t fw_task_len
    cdef char *fw_task_buf
    cdef fwl_logical_t boxed_
    cdef fwl_logical_t cnstnd_
    cdef fw_bytes fw_csave
    cdef fw_shape_t fw_csave_len
    cdef char *fw_csave_buf
    cdef np.ndarray isave_
    cdef np.ndarray dsave_
    boxed_ = 1 if boxed else 0
    cnstnd_ = 1 if cnstnd else 0
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(nbd_)[0]):
        raise ValueError("(0 <= n <= nbd.shape[0]) not satisifed")
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    g_, g = fw_asfortranarray(g, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(g_)[0]):
        raise ValueError("(0 <= n <= g.shape[0]) not satisifed")
    d_, d = fw_asfortranarray(d, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(d_)[0]):
        raise ValueError("(0 <= n <= d.shape[0]) not satisifed")
    r_, r = fw_asfortranarray(r, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(r_)[0]):
        raise ValueError("(0 <= n <= r.shape[0]) not satisifed")
    t_, t = fw_asfortranarray(t, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(t_)[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    z_, z = fw_asfortranarray(z, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(z_)[0]):
        raise ValueError("(0 <= n <= z.shape[0]) not satisifed")
    isave_, isave = fw_asfortranarray(isave, fwi_integer_t_enum, 1, False)
    if not (0 <= 2 <= np.PyArray_DIMS(isave_)[0]):
        raise ValueError("(0 <= 2 <= isave.shape[0]) not satisifed")
    dsave_, dsave = fw_asfortranarray(dsave, fwr_dbl_t_enum, 1, False)
    if not (0 <= 13 <= np.PyArray_DIMS(dsave_)[0]):
        raise ValueError("(0 <= 13 <= dsave.shape[0]) not satisifed")
    fw_task_len = 60
    fw_task = PyBytes_FromStringAndSize(NULL, fw_task_len)
    fw_task_buf = <char*>fw_task
    memcpy(fw_task_buf, <char*>task, fw_task_len+1)
    fw_csave_len = 60
    fw_csave = PyBytes_FromStringAndSize(NULL, fw_csave_len)
    fw_csave_buf = <char*>fw_csave
    memcpy(fw_csave_buf, <char*>csave, fw_csave_len+1)
    fc.lnsrlb(&n, <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), <fwr_dbl_t*>np.PyArray_DATA(x_), &f, &fold, &gd, &gdold, <fwr_dbl_t*>np.PyArray_DATA(g_), <fwr_dbl_t*>np.PyArray_DATA(d_), <fwr_dbl_t*>np.PyArray_DATA(r_), <fwr_dbl_t*>np.PyArray_DATA(t_), <fwr_dbl_t*>np.PyArray_DATA(z_), &stp, &dnorm, &dtd, &xstep, &stpmx, &iter, &ifun, &iback, &nfgv, &info, &fw_task_len, fw_task_buf, &boxed_, &cnstnd_, &fw_csave_len, fw_csave_buf, <fwi_integer_t*>np.PyArray_DATA(isave_), <fwr_dbl_t*>np.PyArray_DATA(dsave_))
    return (n, l, u, nbd, x, f, fold, gd, gdold, g, d, r, t, z, stp, dnorm, dtd, xstep, stpmx, iter, ifun, iback, nfgv, info, fw_task, boxed_, cnstnd_, fw_csave, isave, dsave,)


cpdef  object matupd(fwi_integer_t n, fwi_integer_t m, object ws, object wy, object sy, object ss, object d, object r, fwi_integer_t itail, fwi_integer_t iupdat, fwi_integer_t col, fwi_integer_t head, fwr_dbl_t theta, fwr_dbl_t rr, fwr_dbl_t dr, fwr_dbl_t stp, fwr_dbl_t dtd):
    """matupd(n, m, ws, wy, sy, ss, d, r, itail, iupdat, col, head, theta, rr, dr, stp, dtd[, n, m, ws, wy, sy, ss, d, r, itail, iupdat, col, head, theta, rr, dr, stp, dtd]) -> (n, m, ws, wy, sy, ss, d, r, itail, iupdat, col, head, theta, rr, dr, stp, dtd)

    Parameters
    ----------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    ss : fwr_dbl, 2D array, dimension(m, m), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    r : fwr_dbl, 1D array, dimension(n), intent inout
    itail : fwi_integer, intent inout
    iupdat : fwi_integer, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    theta : fwr_dbl, intent inout
    rr : fwr_dbl, intent inout
    dr : fwr_dbl, intent inout
    stp : fwr_dbl, intent inout
    dtd : fwr_dbl, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    sy : fwr_dbl, 2D array, dimension(m, m), intent inout
    ss : fwr_dbl, 2D array, dimension(m, m), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    r : fwr_dbl, 1D array, dimension(n), intent inout
    itail : fwi_integer, intent inout
    iupdat : fwi_integer, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    theta : fwr_dbl, intent inout
    rr : fwr_dbl, intent inout
    dr : fwr_dbl, intent inout
    stp : fwr_dbl, intent inout
    dtd : fwr_dbl, intent inout

    """
    cdef np.ndarray ws_
    cdef np.ndarray wy_
    cdef np.ndarray sy_
    cdef np.ndarray ss_
    cdef np.ndarray d_
    cdef np.ndarray r_
    ws_, ws = fw_asfortranarray(ws, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(ws_)[0]:
        raise ValueError("(n == ws.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(ws_)[1]):
        raise ValueError("(0 <= m <= ws.shape[1]) not satisifed")
    wy_, wy = fw_asfortranarray(wy, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(wy_)[0]:
        raise ValueError("(n == wy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wy_)[1]):
        raise ValueError("(0 <= m <= wy.shape[1]) not satisifed")
    sy_, sy = fw_asfortranarray(sy, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(sy_)[0]:
        raise ValueError("(m == sy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(sy_)[1]):
        raise ValueError("(0 <= m <= sy.shape[1]) not satisifed")
    ss_, ss = fw_asfortranarray(ss, fwr_dbl_t_enum, 2, False)
    if m != np.PyArray_DIMS(ss_)[0]:
        raise ValueError("(m == ss.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(ss_)[1]):
        raise ValueError("(0 <= m <= ss.shape[1]) not satisifed")
    d_, d = fw_asfortranarray(d, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(d_)[0]):
        raise ValueError("(0 <= n <= d.shape[0]) not satisifed")
    r_, r = fw_asfortranarray(r, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(r_)[0]):
        raise ValueError("(0 <= n <= r.shape[0]) not satisifed")
    fc.matupd(&n, &m, <fwr_dbl_t*>np.PyArray_DATA(ws_), <fwr_dbl_t*>np.PyArray_DATA(wy_), <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(ss_), <fwr_dbl_t*>np.PyArray_DATA(d_), <fwr_dbl_t*>np.PyArray_DATA(r_), &itail, &iupdat, &col, &head, &theta, &rr, &dr, &stp, &dtd)
    return (n, m, ws, wy, sy, ss, d, r, itail, iupdat, col, head, theta, rr, dr, stp, dtd,)


cpdef  object prn1lb(fwi_integer_t n, fwi_integer_t m, object l, object u, object x, fwi_integer_t iprint, fwi_integer_t itfile, fwr_dbl_t epsmch):
    """prn1lb(n, m, l, u, x, iprint, itfile, epsmch[, n, m, l, u, x, iprint, itfile, epsmch]) -> (n, m, l, u, x, iprint, itfile, epsmch)

    Parameters
    ----------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    iprint : fwi_integer, intent inout
    itfile : fwi_integer, intent inout
    epsmch : fwr_dbl, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    iprint : fwi_integer, intent inout
    itfile : fwi_integer, intent inout
    epsmch : fwr_dbl, intent inout

    """
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray x_
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    fc.prn1lb(&n, &m, <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwr_dbl_t*>np.PyArray_DATA(x_), &iprint, &itfile, &epsmch)
    return (n, m, l, u, x, iprint, itfile, epsmch,)


cpdef  object prn2lb(fwi_integer_t n, object x, fwr_dbl_t f, object g, fwi_integer_t iprint, fwi_integer_t itfile, fwi_integer_t iter, fwi_integer_t nfgv, fwi_integer_t nact, fwr_dbl_t sbgnrm, fwi_integer_t nint, fw_bytes word, fwi_integer_t iword, fwi_integer_t iback, fwr_dbl_t stp, fwr_dbl_t xstep):
    """prn2lb(n, x, f, g, iprint, itfile, iter, nfgv, nact, sbgnrm, nint, word, iword, iback, stp, xstep[, n, x, f, g, iprint, itfile, iter, nfgv, nact, sbgnrm, nint, word, iword, iback, stp, xstep]) -> (n, x, f, g, iprint, itfile, iter, nfgv, nact, sbgnrm, nint, fw_word, iword, iback, stp, xstep)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    iprint : fwi_integer, intent inout
    itfile : fwi_integer, intent inout
    iter : fwi_integer, intent inout
    nfgv : fwi_integer, intent inout
    nact : fwi_integer, intent inout
    sbgnrm : fwr_dbl, intent inout
    nint : fwi_integer, intent inout
    word : fw_character_x3, len 3, intent inout
    iword : fwi_integer, intent inout
    iback : fwi_integer, intent inout
    stp : fwr_dbl, intent inout
    xstep : fwr_dbl, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    iprint : fwi_integer, intent inout
    itfile : fwi_integer, intent inout
    iter : fwi_integer, intent inout
    nfgv : fwi_integer, intent inout
    nact : fwi_integer, intent inout
    sbgnrm : fwr_dbl, intent inout
    nint : fwi_integer, intent inout
    word : fw_character_x3, len 3, intent inout
    iword : fwi_integer, intent inout
    iback : fwi_integer, intent inout
    stp : fwr_dbl, intent inout
    xstep : fwr_dbl, intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray g_
    cdef fw_bytes fw_word
    cdef fw_shape_t fw_word_len
    cdef char *fw_word_buf
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    g_, g = fw_asfortranarray(g, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(g_)[0]):
        raise ValueError("(0 <= n <= g.shape[0]) not satisifed")
    fw_word_len = 3
    fw_word = PyBytes_FromStringAndSize(NULL, fw_word_len)
    fw_word_buf = <char*>fw_word
    memcpy(fw_word_buf, <char*>word, fw_word_len+1)
    fc.prn2lb(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), &f, <fwr_dbl_t*>np.PyArray_DATA(g_), &iprint, &itfile, &iter, &nfgv, &nact, &sbgnrm, &nint, &fw_word_len, fw_word_buf, &iword, &iback, &stp, &xstep)
    return (n, x, f, g, iprint, itfile, iter, nfgv, nact, sbgnrm, nint, fw_word, iword, iback, stp, xstep,)


cpdef  object prn3lb(fwi_integer_t n, object x, fwr_dbl_t f, fw_bytes task, fwi_integer_t iprint, fwi_integer_t info, fwi_integer_t itfile, fwi_integer_t iter, fwi_integer_t nfgv, fwi_integer_t nintol, fwi_integer_t nskip, fwi_integer_t nact, fwr_dbl_t sbgnrm, fwr_dbl_t time, fwi_integer_t nint, fw_bytes word, fwi_integer_t iback, fwr_dbl_t stp, fwr_dbl_t xstep, fwi_integer_t k, fwr_dbl_t cachyt, fwr_dbl_t sbtime, fwr_dbl_t lnscht):
    """prn3lb(n, x, f, task, iprint, info, itfile, iter, nfgv, nintol, nskip, nact, sbgnrm, time, nint, word, iback, stp, xstep, k, cachyt, sbtime, lnscht[, n, x, f, task, iprint, info, itfile, iter, nfgv, nintol, nskip, nact, sbgnrm, time, nint, word, iback, stp, xstep, k, cachyt, sbtime, lnscht]) -> (n, x, f, fw_task, iprint, info, itfile, iter, nfgv, nintol, nskip, nact, sbgnrm, time, nint, fw_word, iback, stp, xstep, k, cachyt, sbtime, lnscht)

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    task : fw_character_x60, len 60, intent inout
    iprint : fwi_integer, intent inout
    info : fwi_integer, intent inout
    itfile : fwi_integer, intent inout
    iter : fwi_integer, intent inout
    nfgv : fwi_integer, intent inout
    nintol : fwi_integer, intent inout
    nskip : fwi_integer, intent inout
    nact : fwi_integer, intent inout
    sbgnrm : fwr_dbl, intent inout
    time : fwr_dbl, intent inout
    nint : fwi_integer, intent inout
    word : fw_character_x3, len 3, intent inout
    iback : fwi_integer, intent inout
    stp : fwr_dbl, intent inout
    xstep : fwr_dbl, intent inout
    k : fwi_integer, intent inout
    cachyt : fwr_dbl, intent inout
    sbtime : fwr_dbl, intent inout
    lnscht : fwr_dbl, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    task : fw_character_x60, len 60, intent inout
    iprint : fwi_integer, intent inout
    info : fwi_integer, intent inout
    itfile : fwi_integer, intent inout
    iter : fwi_integer, intent inout
    nfgv : fwi_integer, intent inout
    nintol : fwi_integer, intent inout
    nskip : fwi_integer, intent inout
    nact : fwi_integer, intent inout
    sbgnrm : fwr_dbl, intent inout
    time : fwr_dbl, intent inout
    nint : fwi_integer, intent inout
    word : fw_character_x3, len 3, intent inout
    iback : fwi_integer, intent inout
    stp : fwr_dbl, intent inout
    xstep : fwr_dbl, intent inout
    k : fwi_integer, intent inout
    cachyt : fwr_dbl, intent inout
    sbtime : fwr_dbl, intent inout
    lnscht : fwr_dbl, intent inout

    """
    cdef np.ndarray x_
    cdef fw_bytes fw_task
    cdef fw_shape_t fw_task_len
    cdef char *fw_task_buf
    cdef fw_bytes fw_word
    cdef fw_shape_t fw_word_len
    cdef char *fw_word_buf
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    fw_task_len = 60
    fw_task = PyBytes_FromStringAndSize(NULL, fw_task_len)
    fw_task_buf = <char*>fw_task
    memcpy(fw_task_buf, <char*>task, fw_task_len+1)
    fw_word_len = 3
    fw_word = PyBytes_FromStringAndSize(NULL, fw_word_len)
    fw_word_buf = <char*>fw_word
    memcpy(fw_word_buf, <char*>word, fw_word_len+1)
    fc.prn3lb(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), &f, &fw_task_len, fw_task_buf, &iprint, &info, &itfile, &iter, &nfgv, &nintol, &nskip, &nact, &sbgnrm, &time, &nint, &fw_word_len, fw_word_buf, &iback, &stp, &xstep, &k, &cachyt, &sbtime, &lnscht)
    return (n, x, f, fw_task, iprint, info, itfile, iter, nfgv, nintol, nskip, nact, sbgnrm, time, nint, fw_word, iback, stp, xstep, k, cachyt, sbtime, lnscht,)


cpdef  object projgr(fwi_integer_t n, object l, object u, object nbd, object x, object g, fwr_dbl_t sbgnrm):
    """projgr(n, l, u, nbd, x, g, sbgnrm[, n, l, u, nbd, x, g, sbgnrm]) -> (n, l, u, nbd, x, g, sbgnrm)

    Parameters
    ----------
    n : fwi_integer, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    sbgnrm : fwr_dbl, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    sbgnrm : fwr_dbl, intent inout

    """
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef np.ndarray x_
    cdef np.ndarray g_
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(nbd_)[0]):
        raise ValueError("(0 <= n <= nbd.shape[0]) not satisifed")
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    g_, g = fw_asfortranarray(g, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(g_)[0]):
        raise ValueError("(0 <= n <= g.shape[0]) not satisifed")
    fc.projgr(&n, <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(g_), &sbgnrm)
    return (n, l, u, nbd, x, g, sbgnrm,)


cpdef  object subsm(fwi_integer_t n, fwi_integer_t m, fwi_integer_t nsub, object ind, object l, object u, object nbd, object x, object d, object ws, object wy, fwr_dbl_t theta, fwi_integer_t col, fwi_integer_t head, fwi_integer_t iword, object wv, object wn, fwi_integer_t iprint, fwi_integer_t info):
    """subsm(n, m, nsub, ind, l, u, nbd, x, d, ws, wy, theta, col, head, iword, wv, wn, iprint, info[, n, m, nsub, ind, l, u, nbd, x, d, ws, wy, theta, col, head, iword, wv, wn, iprint, info]) -> (n, m, nsub, ind, l, u, nbd, x, d, ws, wy, theta, col, head, iword, wv, wn, iprint, info)

    Parameters
    ----------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    nsub : fwi_integer, intent inout
    ind : fwi_integer, 1D array, dimension(nsub), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    theta : fwr_dbl, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    iword : fwi_integer, intent inout
    wv : fwr_dbl, 1D array, dimension(2*m), intent inout
    wn : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    iprint : fwi_integer, intent inout
    info : fwi_integer, intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    nsub : fwi_integer, intent inout
    ind : fwi_integer, 1D array, dimension(nsub), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent inout
    u : fwr_dbl, 1D array, dimension(n), intent inout
    nbd : fwi_integer, 1D array, dimension(n), intent inout
    x : fwr_dbl, 1D array, dimension(n), intent inout
    d : fwr_dbl, 1D array, dimension(n), intent inout
    ws : fwr_dbl, 2D array, dimension(n, m), intent inout
    wy : fwr_dbl, 2D array, dimension(n, m), intent inout
    theta : fwr_dbl, intent inout
    col : fwi_integer, intent inout
    head : fwi_integer, intent inout
    iword : fwi_integer, intent inout
    wv : fwr_dbl, 1D array, dimension(2*m), intent inout
    wn : fwr_dbl, 2D array, dimension(2*m, 2*m), intent inout
    iprint : fwi_integer, intent inout
    info : fwi_integer, intent inout

    """
    cdef np.ndarray ind_
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef np.ndarray x_
    cdef np.ndarray d_
    cdef np.ndarray ws_
    cdef np.ndarray wy_
    cdef np.ndarray wv_
    cdef np.ndarray wn_
    ind_, ind = fw_asfortranarray(ind, fwi_integer_t_enum, 1, False)
    if not (0 <= nsub <= np.PyArray_DIMS(ind_)[0]):
        raise ValueError("(0 <= nsub <= ind.shape[0]) not satisifed")
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(l_)[0]):
        raise ValueError("(0 <= n <= l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(u_)[0]):
        raise ValueError("(0 <= n <= u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(nbd_)[0]):
        raise ValueError("(0 <= n <= nbd.shape[0]) not satisifed")
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    d_, d = fw_asfortranarray(d, fwr_dbl_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(d_)[0]):
        raise ValueError("(0 <= n <= d.shape[0]) not satisifed")
    ws_, ws = fw_asfortranarray(ws, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(ws_)[0]:
        raise ValueError("(n == ws.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(ws_)[1]):
        raise ValueError("(0 <= m <= ws.shape[1]) not satisifed")
    wy_, wy = fw_asfortranarray(wy, fwr_dbl_t_enum, 2, False)
    if n != np.PyArray_DIMS(wy_)[0]:
        raise ValueError("(n == wy.shape[0]) not satisifed")
    if not (0 <= m <= np.PyArray_DIMS(wy_)[1]):
        raise ValueError("(0 <= m <= wy.shape[1]) not satisifed")
    wv_, wv = fw_asfortranarray(wv, fwr_dbl_t_enum, 1, False)
    wn_, wn = fw_asfortranarray(wn, fwr_dbl_t_enum, 2, False)
    fc.subsm(&n, &m, &nsub, <fwi_integer_t*>np.PyArray_DATA(ind_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(d_), <fwr_dbl_t*>np.PyArray_DATA(ws_), <fwr_dbl_t*>np.PyArray_DATA(wy_), &theta, &col, &head, &iword, <fwr_dbl_t*>np.PyArray_DATA(wv_), <fwr_dbl_t*>np.PyArray_DATA(wn_), &iprint, &info)
    return (n, m, nsub, ind, l, u, nbd, x, d, ws, wy, theta, col, head, iword, wv, wn, iprint, info,)


cpdef  object dcsrch(fwr_dbl_t f, fwr_dbl_t g, fwr_dbl_t stp, fwr_dbl_t ftol, fwr_dbl_t gtol, fwr_dbl_t xtol, fwr_dbl_t stpmin, fwr_dbl_t stpmax, fw_bytes task, object isave, object dsave):
    """dcsrch(f, g, stp, ftol, gtol, xtol, stpmin, stpmax, task, isave, dsave[, f, g, stp, ftol, gtol, xtol, stpmin, stpmax, task, isave, dsave]) -> (f, g, stp, ftol, gtol, xtol, stpmin, stpmax, fw_task, isave, dsave)

    Parameters
    ----------
    f : fwr_dbl, intent inout
    g : fwr_dbl, intent inout
    stp : fwr_dbl, intent inout
    ftol : fwr_dbl, intent inout
    gtol : fwr_dbl, intent inout
    xtol : fwr_dbl, intent inout
    stpmin : fwr_dbl, intent inout
    stpmax : fwr_dbl, intent inout
    task : fw_character_xX, len *, intent inout
    isave : fwi_integer, 1D array, dimension(2), intent inout
    dsave : fwr_dbl, 1D array, dimension(13), intent inout

    Returns
    -------
    f : fwr_dbl, intent inout
    g : fwr_dbl, intent inout
    stp : fwr_dbl, intent inout
    ftol : fwr_dbl, intent inout
    gtol : fwr_dbl, intent inout
    xtol : fwr_dbl, intent inout
    stpmin : fwr_dbl, intent inout
    stpmax : fwr_dbl, intent inout
    task : fw_character_xX, len *, intent inout
    isave : fwi_integer, 1D array, dimension(2), intent inout
    dsave : fwr_dbl, 1D array, dimension(13), intent inout

    """
    cdef fw_bytes fw_task
    cdef fw_shape_t fw_task_len
    cdef char *fw_task_buf
    cdef np.ndarray isave_
    cdef np.ndarray dsave_
    isave_, isave = fw_asfortranarray(isave, fwi_integer_t_enum, 1, False)
    if not (0 <= 2 <= np.PyArray_DIMS(isave_)[0]):
        raise ValueError("(0 <= 2 <= isave.shape[0]) not satisifed")
    dsave_, dsave = fw_asfortranarray(dsave, fwr_dbl_t_enum, 1, False)
    if not (0 <= 13 <= np.PyArray_DIMS(dsave_)[0]):
        raise ValueError("(0 <= 13 <= dsave.shape[0]) not satisifed")
    fw_task_len = len(task)
    fw_task = PyBytes_FromStringAndSize(NULL, fw_task_len)
    fw_task_buf = <char*>fw_task
    memcpy(fw_task_buf, <char*>task, fw_task_len+1)
    fc.dcsrch(&f, &g, &stp, &ftol, &gtol, &xtol, &stpmin, &stpmax, &fw_task_len, fw_task_buf, <fwi_integer_t*>np.PyArray_DATA(isave_), <fwr_dbl_t*>np.PyArray_DATA(dsave_))
    return (f, g, stp, ftol, gtol, xtol, stpmin, stpmax, fw_task, isave, dsave,)


cpdef  object dcstep(fwr_dbl_t stx, fwr_dbl_t fx, fwr_dbl_t dx, fwr_dbl_t sty, fwr_dbl_t fy, fwr_dbl_t dy, fwr_dbl_t stp, fwr_dbl_t fp, fwr_dbl_t dp, bint brackt, fwr_dbl_t stpmin, fwr_dbl_t stpmax):
    """dcstep(stx, fx, dx, sty, fy, dy, stp, fp, dp, brackt, stpmin, stpmax[, stx, fx, dx, sty, fy, dy, stp, fp, dp, brackt, stpmin, stpmax]) -> (stx, fx, dx, sty, fy, dy, stp, fp, dp, brackt_, stpmin, stpmax)

    Parameters
    ----------
    stx : fwr_dbl, intent inout
    fx : fwr_dbl, intent inout
    dx : fwr_dbl, intent inout
    sty : fwr_dbl, intent inout
    fy : fwr_dbl, intent inout
    dy : fwr_dbl, intent inout
    stp : fwr_dbl, intent inout
    fp : fwr_dbl, intent inout
    dp : fwr_dbl, intent inout
    brackt : fwl_logical, intent inout
    stpmin : fwr_dbl, intent inout
    stpmax : fwr_dbl, intent inout

    Returns
    -------
    stx : fwr_dbl, intent inout
    fx : fwr_dbl, intent inout
    dx : fwr_dbl, intent inout
    sty : fwr_dbl, intent inout
    fy : fwr_dbl, intent inout
    dy : fwr_dbl, intent inout
    stp : fwr_dbl, intent inout
    fp : fwr_dbl, intent inout
    dp : fwr_dbl, intent inout
    brackt : fwl_logical, intent inout
    stpmin : fwr_dbl, intent inout
    stpmax : fwr_dbl, intent inout

    """
    cdef fwl_logical_t brackt_
    brackt_ = 1 if brackt else 0
    fc.dcstep(&stx, &fx, &dx, &sty, &fy, &dy, &stp, &fp, &dp, &brackt_, &stpmin, &stpmax)
    return (stx, fx, dx, sty, fy, dy, stp, fp, dp, brackt_, stpmin, stpmax,)


cpdef  object timer(fwr_dbl_t ttime):
    """timer(ttime[, ttime]) -> ttime

    Parameters
    ----------
    ttime : fwr_dbl, intent inout

    Returns
    -------
    ttime : fwr_dbl, intent inout

    """
    fc.timer(&ttime)
    return ttime


cpdef  object dpmeps():
    """dpmeps() -> fw_ret_arg

    Parameters
    ----------
    None

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out

    """
    cdef fwr_dbl_t fw_ret_arg
    fw_ret_arg = fc.dpmeps()
    return fw_ret_arg


cpdef  object dpofa(object a, fwi_integer_t lda, fwi_integer_t n, fwi_integer_t info):
    """dpofa(a, lda, n, info[, a, lda, n, info]) -> (a, lda, n, info)

    Parameters
    ----------
    a : fwr_dbl, 2D array, dimension(lda, 1), intent inout
    lda : fwi_integer, intent inout
    n : fwi_integer, intent inout
    info : fwi_integer, intent inout

    Returns
    -------
    a : fwr_dbl, 2D array, dimension(lda, 1), intent inout
    lda : fwi_integer, intent inout
    n : fwi_integer, intent inout
    info : fwi_integer, intent inout

    """
    cdef np.ndarray a_
    a_, a = fw_asfortranarray(a, fwr_dbl_t_enum, 2, False)
    if lda != np.PyArray_DIMS(a_)[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= 1 <= np.PyArray_DIMS(a_)[1]):
        raise ValueError("(0 <= 1 <= a.shape[1]) not satisifed")
    fc.dpofa(<fwr_dbl_t*>np.PyArray_DATA(a_), &lda, &n, &info)
    return (a, lda, n, info,)


cpdef  object dtrsl(object t, fwi_integer_t ldt, fwi_integer_t n, object b, fwi_integer_t job, fwi_integer_t info):
    """dtrsl(t, ldt, n, b, job, info[, t, ldt, n, b, job, info]) -> (t, ldt, n, b, job, info)

    Parameters
    ----------
    t : fwr_dbl, 2D array, dimension(ldt, 1), intent inout
    ldt : fwi_integer, intent inout
    n : fwi_integer, intent inout
    b : fwr_dbl, 1D array, dimension(1), intent inout
    job : fwi_integer, intent inout
    info : fwi_integer, intent inout

    Returns
    -------
    t : fwr_dbl, 2D array, dimension(ldt, 1), intent inout
    ldt : fwi_integer, intent inout
    n : fwi_integer, intent inout
    b : fwr_dbl, 1D array, dimension(1), intent inout
    job : fwi_integer, intent inout
    info : fwi_integer, intent inout

    """
    cdef np.ndarray t_
    cdef np.ndarray b_
    t_, t = fw_asfortranarray(t, fwr_dbl_t_enum, 2, False)
    if ldt != np.PyArray_DIMS(t_)[0]:
        raise ValueError("(ldt == t.shape[0]) not satisifed")
    if not (0 <= 1 <= np.PyArray_DIMS(t_)[1]):
        raise ValueError("(0 <= 1 <= t.shape[1]) not satisifed")
    b_, b = fw_asfortranarray(b, fwr_dbl_t_enum, 1, False)
    if not (0 <= 1 <= np.PyArray_DIMS(b_)[0]):
        raise ValueError("(0 <= 1 <= b.shape[0]) not satisifed")
    fc.dtrsl(<fwr_dbl_t*>np.PyArray_DATA(t_), &ldt, &n, <fwr_dbl_t*>np.PyArray_DATA(b_), &job, &info)
    return (t, ldt, n, b, job, info,)



cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy,
                              int alignment=1):
    cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST
    cdef np.npy_intp out_shape[np.NPY_MAXDIMS]
    cdef np.PyArray_Dims out_dims
    cdef np.ndarray result
    cdef np.npy_intp * in_shape
    cdef int in_ndim
    cdef int i
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
    if in_ndim == ndim:
        return result, result
    elif in_ndim > ndim:
        raise ValueError("Dimension of array must be <= %d" % ndim)
    else:
        # Make view where shape is padded with ones on right side
        in_shape = np.PyArray_DIMS(result)
        for i in range(in_ndim):
            out_shape[i] = in_shape[i]
        for i in range(in_ndim, ndim):
            out_shape[i] = 1
        out_dims.ptr = out_shape
        out_dims.len = ndim
        return np.PyArray_Newshape(result, &out_dims, np.NPY_FORTRANORDER), result

# Fwrap configuration:
# Fwrap: version 0.2.0dev_e008581
# Fwrap: self-sha1 60b5669bc8cfd8c30abd7ab9c40f461ea82a0425
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps lbfgsb/routines.f
# Fwrap:     sha1 2ddd087c3cfe43adc24d55a6a4a0e4727306cd20
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary _lbfgsb.pxd
# Fwrap: auxiliary _lbfgsb_fc.h
# Fwrap: auxiliary _lbfgsb_fc.pxd

