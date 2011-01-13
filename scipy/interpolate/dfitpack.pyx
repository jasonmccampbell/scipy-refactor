#cython: ccomplex=True

"""The dfitpack module was generated with Fwrap v0.2.0dev_66e37de.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
bispeu(...)
bispev(...)
curfit(...)
dblint(...)
fpcurf0(...)
fpcurf1(...)
fpcurfm1(...)
parcur(...)
percur(...)
regrid_smth(...)
spalde(...)
splder(...)
splev(...)
splint(...)
sproot(...)
surfit_lsq(...)
surfit_smth(...)

"""
np.import_array()
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
__all__ = ['bispeu', 'bispev', 'curfit', 'dblint', 'fpcurf0', 'fpcurf1', 'fpcurfm1', 'parcur', 'percur', 'regrid_smth', 'spalde', 'splder', 'splev', 'splint', 'sproot', 'surfit_smth', 'surfit_lsq']
cpdef object bispeu(object tx, object ty, object c, fwi_integer_t kx, fwi_integer_t ky, object x, object y, object z=None):
    """bispeu(tx, ty, c, kx, ky, x, y[, z]) -> (z, ier)

    Parameters
    ----------
    tx : fwr_real_x8, 1D array, dimension(nx), intent in
    ty : fwr_real_x8, 1D array, dimension(ny), intent in
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent in
    kx : fwi_integer, intent in
    ky : fwi_integer, intent in
    x : fwr_real_x8, 1D array, dimension(m), intent in
    y : fwr_real_x8, 1D array, dimension(m), intent in
    z : fwr_real_x8, 1D array, dimension(m), intent out

    Returns
    -------
    z : fwr_real_x8, 1D array, dimension(m), intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t nx, ny, m, lwrk, ier
    cdef np.ndarray tx_, ty_, c_, x_, y_, z_, wrk_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], x_shape[1], y_shape[1], z_shape[1], wrk_shape[1]
    lwrk = kx + ky + 2
    wrk_shape[0] = lwrk
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    nx = tx_shape[0]
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    ny = ty_shape[0]
    if not (c_shape[0] == ((nx - kx - 1) * (ny - ky - 1))):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == ((nx - kx - 1) * (ny - ky - 1))')
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    if (nx - kx - 1) * (ny - ky - 1) != c_shape[0]:
        raise ValueError("((nx - kx - 1) * (ny - ky - 1) == c.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    z_shape[0] = m
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, True)
    if m != z_shape[0]:
        raise ValueError("(m == z.shape[0]) not satisifed")
    fc.bispeu(<fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), &m, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (z_, ier,)


cpdef object bispev(object tx, object ty, object c, fwi_integer_t kx, fwi_integer_t ky, object x, object y, object z=None):
    """bispev(tx, ty, c, kx, ky, x, y[, z]) -> (z, ier)

    Parameters
    ----------
    tx : fwr_real_x8, 1D array, dimension(nx), intent in
    ty : fwr_real_x8, 1D array, dimension(ny), intent in
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent in
    kx : fwi_integer, intent in
    ky : fwi_integer, intent in
    x : fwr_real_x8, 1D array, dimension(mx), intent in
    y : fwr_real_x8, 1D array, dimension(my), intent in
    z : fwr_real_x8, 2D array, dimension(mx, my), intent out

    Returns
    -------
    z : fwr_real_x8, 2D array, dimension(mx, my), intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t nx, ny, mx, my, lwrk, kwrk, ier
    cdef np.ndarray tx_, ty_, c_, x_, y_, z_, wrk_, iwrk_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], x_shape[1], y_shape[1], z_shape[2], wrk_shape[1], iwrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    mx = x_shape[0]
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    my = y_shape[0]
    lwrk = (mx * (kx + 1)) + (my * (ky + 1))
    wrk_shape[0] = lwrk
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    kwrk = mx + my
    iwrk_shape[0] = kwrk
    iwrk_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwrk_shape, False, True)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    nx = tx_shape[0]
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    ny = ty_shape[0]
    if not (c_shape[0] == ((nx - kx - 1) * (ny - ky - 1))):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == ((nx - kx - 1) * (ny - ky - 1))')
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    if (nx - kx - 1) * (ny - ky - 1) != c_shape[0]:
        raise ValueError("((nx - kx - 1) * (ny - ky - 1) == c.shape[0]) not satisifed")
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    if not (0 <= my <= y_shape[0]):
        raise ValueError("(0 <= my <= y.shape[0]) not satisifed")
    z_shape[0] = mx; z_shape[1] = my
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 2, z_shape, False, True)
    if mx != z_shape[0]:
        raise ValueError("(mx == z.shape[0]) not satisifed")
    if my != z_shape[1]:
        raise ValueError("(my == z.shape[1]) not satisifed")
    fc.bispev(<fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, <fwr_real_x8_t*>np.PyArray_DATA(x_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(y_), &my, <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (z_, ier,)


cpdef object curfit(fwi_integer_t iopt, object x, object y, object w, object t, object wrk, object iwrk, object xb=None, object xe=None, fwi_integer_t k=3, fwr_real_x8_t s=0.0, object c=None):
    """curfit(iopt, x, y, w, t, wrk, iwrk[, xb, xe, k, s, c]) -> (n, c, fp, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent in
    x : fwr_real_x8, 1D array, dimension(m), intent in
    y : fwr_real_x8, 1D array, dimension(m), intent in
    w : fwr_real_x8, 1D array, dimension(m), intent in
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    xb : fwr_real_x8, intent in
    xe : fwr_real_x8, intent in
    k : fwi_integer, intent in
    s : fwr_real_x8, intent in
    c : fwr_real_x8, 1D array, dimension(n), intent out

    Returns
    -------
    n : fwi_integer, intent out
    c : fwr_real_x8, 1D array, dimension(n), intent out
    fp : fwr_real_x8, intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t m, nest, lwrk, n_, ier
    cdef np.ndarray x_, y_, w_, t_, wrk_, iwrk_, c_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], wrk_shape[1], iwrk_shape[1], c_shape[1]
    cdef fwr_real_x8_t xb_, xe_, fp
    xb_ = xb if (xb is not None) else ##TODO (watch any dependencies that may be further down!) x[0]
    xe_ = xe if (xe is not None) else ##TODO (watch any dependencies that may be further down!) x[m-1]
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    if not (y_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] == m')
    if not (w_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: w.shape[0] == m')
    if not (##TODO (watch any dependencies that may be further down!) xb<=x[0]):
        raise ValueError('Condition on arguments not satisfied: xb<=x[0]')
    if not (##TODO (watch any dependencies that may be further down!) xe>=x[m-1]):
        raise ValueError('Condition on arguments not satisfied: xe>=x[m-1]')
    if not ((1 <= k) and (k <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= k) and (k <= 5)')
    if not (s >= 0.0):
        raise ValueError('Condition on arguments not satisfied: s >= 0.0')
    if not (m > k):
        raise ValueError('Condition on arguments not satisfied: m > k')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    if m != w_shape[0]:
        raise ValueError("(m == w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    nest = t_shape[0]
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    lwrk = wrk_shape[0]
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= nest <= iwrk_shape[0]):
        raise ValueError("(0 <= nest <= iwrk.shape[0]) not satisifed")
    n_ = n if (n is not None) else nest
    c_shape[0] = n_
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, True)
    if not (0 <= n_ <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    fc.curfit(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &xb_, &xe_, &k, &s, &nest, &n_, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &ier)
    return (n_, c_, fp, ier,)


cpdef object dblint(object tx, object ty, object c, fwi_integer_t kx, fwi_integer_t ky, fwr_real_x8_t xb, fwr_real_x8_t xe, fwr_real_x8_t yb, fwr_real_x8_t ye):
    """dblint(tx, ty, c, kx, ky, xb, xe, yb, ye) -> fw_ret_arg

    Parameters
    ----------
    tx : fwr_real_x8, 1D array, dimension(nx), intent in
    ty : fwr_real_x8, 1D array, dimension(ny), intent in
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent in
    kx : fwi_integer, intent in
    ky : fwi_integer, intent in
    xb : fwr_real_x8, intent in
    xe : fwr_real_x8, intent in
    yb : fwr_real_x8, intent in
    ye : fwr_real_x8, intent in

    Returns
    -------
    fw_ret_arg : fwr_real_x8, intent out

    """
    cdef fwi_integer_t nx, ny
    cdef np.ndarray tx_, ty_, c_, wrk_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], wrk_shape[1]
    cdef fwr_real_x8_t fw_ret_arg
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    nx = tx_shape[0]
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    ny = ty_shape[0]
    wrk_shape[0] = nx + ny - kx - ky - 2
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (c_shape[0] == ((nx - kx - 1) * (ny - ky - 1))):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == ((nx - kx - 1) * (ny - ky - 1))')
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    if (nx - kx - 1) * (ny - ky - 1) != c_shape[0]:
        raise ValueError("((nx - kx - 1) * (ny - ky - 1) == c.shape[0]) not satisifed")
    fw_ret_arg = fc.dblint(<fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, &xb, &xe, &yb, &ye, <fwr_real_x8_t*>np.PyArray_DATA(wrk_))
    return fw_ret_arg


cpdef object fpcurf0(object x, object y, object w, fwi_integer_t k, object xb=None, object xe=None, object s=None, object nest=None, object t=None, object c=None, object fpint=None, object nrdata=None):
    """fpcurf0(x, y, w, k[, xb, xe, s, nest, t, c, fpint, nrdata]) -> (x, y, w, xb, xe, k, s, n, t, c, fp, fpint, nrdata, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    k : fwi_integer, intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent in
    t : fwr_real_x8, 1D array, dimension(nest), intent out
    c : fwr_real_x8, 1D array, dimension(nest), intent out
    fpint : fwr_real_x8, 1D array, dimension(nest), intent out
    nrdata : fwi_integer, 1D array, dimension(nest), intent out

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    n : fwi_integer, intent out
    t : fwr_real_x8, 1D array, dimension(nest), intent out
    c : fwr_real_x8, 1D array, dimension(nest), intent out
    fp : fwr_real_x8, intent out
    fpint : fwr_real_x8, 1D array, dimension(nest), intent out
    nrdata : fwi_integer, 1D array, dimension(nest), intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t nest_, iopt, m, maxit, k1, k2, n, ier
    cdef np.ndarray x_, y_, w_, t_, c_, fpint_, nrdata_, wrk_, wrk_, b_f_, g_f_, q_f_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], c_shape[1], fpint_shape[1], nrdata_shape[1], wrk_shape[1], wrk_shape[1], b_f_shape[2], g_f_shape[2], q_f_shape[2]
    cdef fwr_real_x8_t xb_, xe_, s_, tol, fp
    xb_ = xb if (xb is not None) else ##TODO (watch any dependencies that may be further down!) x[0]
    xe_ = xe if (xe is not None) else ##TODO (watch any dependencies that may be further down!) x[m-1]
    iopt = 0
    tol = 0.001
    maxit = 20
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    s_ = s if (s is not None) else m
    k1 = k + 1
    nest_ = nest if (nest is not None) else (m + k + 1) if (s_ == 0.0) else max((m // 2), (2 * k1))
    k2 = k + 2
    wrk_shape[0] = (nest_ * 3 * k2) + (m * k1)
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    wrk_shape[0] = (nest_ * 3 * k2) + (m * k1)
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    ##TODO b_f_ = wrk_ + (nest_ * k2)
    b_f_shape[0] = nest_; b_f_shape[1] = k2
    b_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, b_f_shape, False, True)
    ##TODO g_f_ = wrk_ + (nest_ * 2 * k2)
    g_f_shape[0] = nest_; g_f_shape[1] = k2
    g_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, g_f_shape, False, True)
    ##TODO q_f_ = wrk_ + (nest_ * 3 * k2)
    q_f_shape[0] = m; q_f_shape[1] = k1
    q_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, q_f_shape, False, True)
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    ##TODO w_ = 1.0
    w_shape[0] = m
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, True)
    if not (y_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] == m')
    if not (w_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: w.shape[0] == m')
    if not ((1 <= k) and (k <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= k) and (k <= 5)')
    if not (##TODO (watch any dependencies that may be further down!) xb<=x[0]):
        raise ValueError('Condition on arguments not satisfied: xb<=x[0]')
    if not (##TODO (watch any dependencies that may be further down!) xe>=x[m-1]):
        raise ValueError('Condition on arguments not satisfied: xe>=x[m-1]')
    if not (s_ >= 0.0):
        raise ValueError('Condition on arguments not satisfied: s >= 0.0')
    if not (nest_ >= (2 * k1)):
        raise ValueError('Condition on arguments not satisfied: nest >= (2 * k1)')
    if not (m > k):
        raise ValueError('Condition on arguments not satisfied: m > k')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    if m != w_shape[0]:
        raise ValueError("(m == w.shape[0]) not satisifed")
    t_shape[0] = nest_
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, True)
    if nest_ != t_shape[0]:
        raise ValueError("(nest == t.shape[0]) not satisifed")
    c_shape[0] = nest_
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, True)
    if nest_ != c_shape[0]:
        raise ValueError("(nest == c.shape[0]) not satisifed")
    fpint_shape[0] = nest_
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, True)
    if nest_ != fpint_shape[0]:
        raise ValueError("(nest == fpint.shape[0]) not satisifed")
    nrdata_shape[0] = nest_
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, False, True)
    if nest_ != nrdata_shape[0]:
        raise ValueError("(nest == nrdata.shape[0]) not satisifed")
    fc.fpcurf(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &m, &xb_, &xe_, &k, &s_, &nest_, &tol, &maxit, &k1, &k2, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_) + nest, <fwr_real_x8_t*>np.PyArray_DATA(b_f_), <fwr_real_x8_t*>np.PyArray_DATA(g_f_), <fwr_real_x8_t*>np.PyArray_DATA(q_f_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &ier)
    return (x_, y_, w_, xb_, xe_, k, s_, n, t_, c_, fp, fpint_, nrdata_, ier,)


cpdef object fpcurf1(object x, object y, object w, fwr_real_x8_t xb, fwr_real_x8_t xe, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t n, object t, object c, fwr_real_x8_t fp, object fpint, object nrdata, fwi_integer_t ier, bint overwrite_x=True, bint overwrite_y=True, bint overwrite_w=True, bint overwrite_t=True, bint overwrite_c=True, bint overwrite_fpint=True, bint overwrite_nrdata=True):
    """fpcurf1(x, y, w, xb, xe, k, s, n, t, c, fp, fpint, nrdata, ier[, overwrite_x, overwrite_y, overwrite_w, overwrite_t, overwrite_c, overwrite_fpint, overwrite_nrdata]) -> (x, y, w, xb, xe, k, s, n, t, c, fp, fpint, nrdata, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in
    overwrite_w : bint_, intent in
    overwrite_t : bint_, intent in
    overwrite_c : bint_, intent in
    overwrite_fpint : bint_, intent in
    overwrite_nrdata : bint_, intent in

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef fwi_integer_t iopt, m, nest, maxit, k1, k2
    cdef np.ndarray x_, y_, w_, t_, c_, fpint_, nrdata_, wrk_, wrk_, b_f_, g_f_, q_f_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], c_shape[1], fpint_shape[1], nrdata_shape[1], wrk_shape[1], wrk_shape[1], b_f_shape[2], g_f_shape[2], q_f_shape[2]
    cdef fwr_real_x8_t tol
    iopt = 1
    tol = 0.001
    maxit = 20
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, not overwrite_x, False)
    m = x_shape[0]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, not overwrite_t, False)
    nest = t_shape[0]
    k1 = k + 1
    k2 = k + 2
    wrk_shape[0] = (nest * 3 * k2) + (m * k1)
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    wrk_shape[0] = (nest * 3 * k2) + (m * k1)
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    ##TODO b_f_ = wrk_ + (nest * k2)
    b_f_shape[0] = nest; b_f_shape[1] = k2
    b_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, b_f_shape, False, True)
    ##TODO g_f_ = wrk_ + (nest * 2 * k2)
    g_f_shape[0] = nest; g_f_shape[1] = k2
    g_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, g_f_shape, False, True)
    ##TODO q_f_ = wrk_ + (nest * 3 * k2)
    q_f_shape[0] = m; q_f_shape[1] = k1
    q_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, q_f_shape, False, True)
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, not overwrite_y, False)
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, not overwrite_w, False)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, not overwrite_c, False)
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, not overwrite_fpint, False)
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, not overwrite_nrdata, False)
    if not (y_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] == m')
    if not (w_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: w.shape[0] == m')
    if not ((1 <= k) and (k <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= k) and (k <= 5)')
    if not (s >= 0.0):
        raise ValueError('Condition on arguments not satisfied: s >= 0.0')
    if not (c_shape[0] == nest):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == nest')
    if not (fpint_shape[0] == nest):
        raise ValueError('Condition on arguments not satisfied: fpint.shape[0] == nest')
    if not (nrdata_shape[0] == nest):
        raise ValueError('Condition on arguments not satisfied: nrdata.shape[0] == nest')
    if not (m > k):
        raise ValueError('Condition on arguments not satisfied: m > k')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    if m != w_shape[0]:
        raise ValueError("(m == w.shape[0]) not satisifed")
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    if nest != c_shape[0]:
        raise ValueError("(nest == c.shape[0]) not satisifed")
    if nest != fpint_shape[0]:
        raise ValueError("(nest == fpint.shape[0]) not satisifed")
    if nest != nrdata_shape[0]:
        raise ValueError("(nest == nrdata.shape[0]) not satisifed")
    fc.fpcurf(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &m, &xb, &xe, &k, &s, &nest, &tol, &maxit, &k1, &k2, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_) + nest, <fwr_real_x8_t*>np.PyArray_DATA(b_f_), <fwr_real_x8_t*>np.PyArray_DATA(g_f_), <fwr_real_x8_t*>np.PyArray_DATA(q_f_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &ier)
    return (x_, y_, w_, xb, xe, k, s, n, t_, c_, fp, fpint_, nrdata_, ier,)


cpdef object fpcurfm1(object x, object y, object w, fwi_integer_t k, object t, object xb=None, object xe=None, bint overwrite_t=True, object c=None, object fpint=None, object nrdata=None):
    """fpcurfm1(x, y, w, k, t[, xb, xe, overwrite_t, c, fpint, nrdata]) -> (x, y, w, xb, xe, k, s, n, t, c, fp, fpint, nrdata, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    k : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    overwrite_t : bint_, intent in
    c : fwr_real_x8, 1D array, dimension(nest), intent out
    fpint : fwr_real_x8, 1D array, dimension(nest), intent out
    nrdata : fwi_integer, 1D array, dimension(nest), intent out

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent out
    n : fwi_integer, intent out
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent out
    fp : fwr_real_x8, intent out
    fpint : fwr_real_x8, 1D array, dimension(nest), intent out
    nrdata : fwi_integer, 1D array, dimension(nest), intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t iopt, m, nest, maxit, k1, k2, n_, ier
    cdef np.ndarray x_, y_, w_, t_, c_, fpint_, nrdata_, wrk_, wrk_, b_f_, g_f_, q_f_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], c_shape[1], fpint_shape[1], nrdata_shape[1], wrk_shape[1], wrk_shape[1], b_f_shape[2], g_f_shape[2], q_f_shape[2]
    cdef fwr_real_x8_t xb_, xe_, tol, s, fp
    xb_ = xb if (xb is not None) else ##TODO (watch any dependencies that may be further down!) x[0]
    xe_ = xe if (xe is not None) else ##TODO (watch any dependencies that may be further down!) x[m-1]
    iopt = -1
    tol = 0.001
    maxit = 20
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, not overwrite_t, False)
    n_ = n if (n is not None) else t_shape[0]
    nest = n_
    k1 = k + 1
    k2 = k + 2
    wrk_shape[0] = (nest * 3 * k2) + (m * k1)
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    wrk_shape[0] = (nest * 3 * k2) + (m * k1)
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    ##TODO b_f_ = wrk_ + (nest * k2)
    b_f_shape[0] = nest; b_f_shape[1] = k2
    b_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, b_f_shape, False, True)
    ##TODO g_f_ = wrk_ + (nest * 2 * k2)
    g_f_shape[0] = nest; g_f_shape[1] = k2
    g_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, g_f_shape, False, True)
    ##TODO q_f_ = wrk_ + (nest * 3 * k2)
    q_f_shape[0] = m; q_f_shape[1] = k1
    q_f_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 2, q_f_shape, False, True)
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    ##TODO w_ = 1.0
    w_shape[0] = m
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, True)
    if not (y_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] == m')
    if not (w_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: w.shape[0] == m')
    if not ((1 <= k) and (k <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= k) and (k <= 5)')
    if not (##TODO (watch any dependencies that may be further down!) xb<=x[0]):
        raise ValueError('Condition on arguments not satisfied: xb<=x[0]')
    if not (##TODO (watch any dependencies that may be further down!) xe>=x[m-1]):
        raise ValueError('Condition on arguments not satisfied: xe>=x[m-1]')
    if not (m > k):
        raise ValueError('Condition on arguments not satisfied: m > k')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    if m != w_shape[0]:
        raise ValueError("(m == w.shape[0]) not satisifed")
    if not (0 <= n_ <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_shape[0] = nest
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, True)
    if nest != c_shape[0]:
        raise ValueError("(nest == c.shape[0]) not satisifed")
    fpint_shape[0] = nest
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, True)
    if nest != fpint_shape[0]:
        raise ValueError("(nest == fpint.shape[0]) not satisifed")
    nrdata_shape[0] = nest
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, False, True)
    if nest != nrdata_shape[0]:
        raise ValueError("(nest == nrdata.shape[0]) not satisifed")
    fc.fpcurf(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &m, &xb_, &xe_, &k, &s, &nest, &tol, &maxit, &k1, &k2, &n_, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_) + nest, <fwr_real_x8_t*>np.PyArray_DATA(b_f_), <fwr_real_x8_t*>np.PyArray_DATA(g_f_), <fwr_real_x8_t*>np.PyArray_DATA(q_f_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &ier)
    return (x_, y_, w_, xb_, xe_, k, s, n_, t_, c_, fp, fpint_, nrdata_, ier,)


cpdef object parcur(fwi_integer_t iopt, fwi_integer_t ipar, fwi_integer_t idim, object u, object x, object w, fwr_real_x8_t ub, fwr_real_x8_t ue, object t, object wrk, object iwrk, fwi_integer_t k=3.0, fwr_real_x8_t s=0.0, object c=None):
    """parcur(iopt, ipar, idim, u, x, w, ub, ue, t, wrk, iwrk[, k, s, c]) -> (n, c, fp, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent in
    ipar : fwi_integer, intent in
    idim : fwi_integer, intent in
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent in
    w : fwr_real_x8, 1D array, dimension(m), intent in
    ub : fwr_real_x8, intent in
    ue : fwr_real_x8, intent in
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    k : fwi_integer, intent in
    s : fwr_real_x8, intent in
    c : fwr_real_x8, 1D array, dimension(nc), intent out

    Returns
    -------
    n : fwi_integer, intent out
    c : fwr_real_x8, 1D array, dimension(nc), intent out
    fp : fwr_real_x8, intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t m, mx, nest, nc, lwrk, n_, ier
    cdef np.ndarray u_, x_, w_, t_, wrk_, iwrk_, c_
    cdef np.npy_intp u_shape[1], x_shape[1], w_shape[1], t_shape[1], wrk_shape[1], iwrk_shape[1], c_shape[1]
    cdef fwr_real_x8_t fp
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    nest = t_shape[0]
    n_ = n if (n is not None) else nest
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    m = u_shape[0]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    mx = x_shape[0]
    if not ((iopt >= -1) and (iopt <= 1)):
        raise ValueError('Condition on arguments not satisfied: (iopt >= -1) and (iopt <= 1)')
    if not ((ipar == 1) or (ipar == 0)):
        raise ValueError('Condition on arguments not satisfied: (ipar == 1) or (ipar == 0)')
    if not ((idim > 0) and (idim < 11)):
        raise ValueError('Condition on arguments not satisfied: (idim > 0) and (idim < 11)')
    if not ((1 <= k) and (k <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= k) and (k <= 5)')
    if not (s >= 0.0):
        raise ValueError('Condition on arguments not satisfied: s >= 0.0')
    if not (m > k):
        raise ValueError('Condition on arguments not satisfied: m > k')
    if not (mx >= (idim * m)):
        raise ValueError('Condition on arguments not satisfied: mx >= (idim * m)')
    if not (nc >= (idim * nest)):
        raise ValueError('Condition on arguments not satisfied: nc >= (idim * nest)')
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    lwrk = wrk_shape[0]
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= nest <= iwrk_shape[0]):
        raise ValueError("(0 <= nest <= iwrk.shape[0]) not satisifed")
    c_shape[0] = nc
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, True)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fc.parcur(&iopt, &ipar, &idim, &m, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &ub, &ue, &k, &s, &nest, &n_, <fwr_real_x8_t*>np.PyArray_DATA(t_), &nc, <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &ier)
    return (n_, c_, fp, ier,)


cpdef object percur(fwi_integer_t iopt, object x, object y, object w, object t, object wrk, object iwrk, fwi_integer_t k=3, fwr_real_x8_t s=0.0, object c=None):
    """percur(iopt, x, y, w, t, wrk, iwrk[, k, s, c]) -> (n, c, fp, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent in
    x : fwr_real_x8, 1D array, dimension(m), intent in
    y : fwr_real_x8, 1D array, dimension(m), intent in
    w : fwr_real_x8, 1D array, dimension(m), intent in
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    k : fwi_integer, intent in
    s : fwr_real_x8, intent in
    c : fwr_real_x8, 1D array, dimension(n), intent out

    Returns
    -------
    n : fwi_integer, intent out
    c : fwr_real_x8, 1D array, dimension(n), intent out
    fp : fwr_real_x8, intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t m, nest, lwrk, n_, ier
    cdef np.ndarray x_, y_, w_, t_, wrk_, iwrk_, c_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], wrk_shape[1], iwrk_shape[1], c_shape[1]
    cdef fwr_real_x8_t fp
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    if not (y_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] == m')
    if not (w_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: w.shape[0] == m')
    if not ((1 <= k) and (k <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= k) and (k <= 5)')
    if not (s >= 0.0):
        raise ValueError('Condition on arguments not satisfied: s >= 0.0')
    if not (m > k):
        raise ValueError('Condition on arguments not satisfied: m > k')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    if m != w_shape[0]:
        raise ValueError("(m == w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    nest = t_shape[0]
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    lwrk = wrk_shape[0]
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= nest <= iwrk_shape[0]):
        raise ValueError("(0 <= nest <= iwrk.shape[0]) not satisifed")
    n_ = n if (n is not None) else nest
    c_shape[0] = n_
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, True)
    if not (0 <= n_ <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    fc.percur(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &k, &s, &nest, &n_, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &ier)
    return (n_, c_, fp, ier,)


cpdef object regrid_smth(object x, object y, object z, object xb=None, object xe=None, object yb=None, object ye=None, fwi_integer_t kx=3, fwi_integer_t ky=3, fwr_real_x8_t s=0.0, object tx=None, object ty=None, object c=None):
    """regrid_smth(x, y, z[, xb, xe, yb, ye, kx, ky, s, tx, ty, c]) -> (nx, tx, ny, ty, c, fp, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(mx), intent in
    y : fwr_real_x8, 1D array, dimension(my), intent in
    z : fwr_real_x8, 1D array, dimension(mx*my), intent in
    xb : fwr_real_x8, intent in
    xe : fwr_real_x8, intent in
    yb : fwr_real_x8, intent in
    ye : fwr_real_x8, intent in
    kx : fwi_integer, intent in
    ky : fwi_integer, intent in
    s : fwr_real_x8, intent in
    tx : fwr_real_x8, 1D array, dimension(nxest), intent out
    ty : fwr_real_x8, 1D array, dimension(nyest), intent out
    c : fwr_real_x8, 1D array, dimension((nxest-kx-1)*(nyest-ky-1)), intent out

    Returns
    -------
    nx : fwi_integer, intent out
    tx : fwr_real_x8, 1D array, dimension(nxest), intent out
    ny : fwi_integer, intent out
    ty : fwr_real_x8, 1D array, dimension(nyest), intent out
    c : fwr_real_x8, 1D array, dimension((nxest-kx-1)*(nyest-ky-1)), intent out
    fp : fwr_real_x8, intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t iopt, mx, my, nxest, nyest, lwrk, kwrk, nx, ny, ier
    cdef np.ndarray x_, y_, z_, tx_, ty_, c_, wrk_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], z_shape[1], tx_shape[1], ty_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    cdef fwr_real_x8_t xb_, xe_, yb_, ye_, fp
    xb_ = xb if (xb is not None) else ##TODO (watch any dependencies that may be further down!) dmin(x,mx)
    xe_ = xe if (xe is not None) else ##TODO (watch any dependencies that may be further down!) dmax(x,mx)
    yb_ = yb if (yb is not None) else ##TODO (watch any dependencies that may be further down!) dmin(y,my)
    ye_ = ye if (ye is not None) else ##TODO (watch any dependencies that may be further down!) dmax(y,my)
    iopt = 0
    lwrk = ##TODO (watch any dependencies that may be further down!) calc_regrid_lwrk(mx,my,kx,ky,nxest,nyest)
    wrk_shape[0] = lwrk
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    mx = x_shape[0]
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    my = y_shape[0]
    nxest = mx + kx + 1
    nyest = my + ky + 1
    kwrk = 3 + mx + my + nxest + nyest
    iwrk_shape[0] = kwrk
    iwrk_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwrk_shape, False, True)
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (z_shape[0] == (mx * my)):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == (mx * my)')
    if not ((1 <= kx) and (kx <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= kx) and (kx <= 5)')
    if not ((1 <= ky) and (ky <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= ky) and (ky <= 5)')
    if not (0.0 <= s):
        raise ValueError('Condition on arguments not satisfied: 0.0 <= s')
    if not (mx > kx):
        raise ValueError('Condition on arguments not satisfied: mx > kx')
    if not (my > ky):
        raise ValueError('Condition on arguments not satisfied: my > ky')
    if not (nxest >= (2 * (kx + 1))):
        raise ValueError('Condition on arguments not satisfied: nxest >= (2 * (kx + 1))')
    if not (nyest >= (2 * (ky + 1))):
        raise ValueError('Condition on arguments not satisfied: nyest >= (2 * (ky + 1))')
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    if not (0 <= my <= y_shape[0]):
        raise ValueError("(0 <= my <= y.shape[0]) not satisifed")
    if mx * my != z_shape[0]:
        raise ValueError("(mx * my == z.shape[0]) not satisifed")
    tx_shape[0] = nxest
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, True)
    if nxest != tx_shape[0]:
        raise ValueError("(nxest == tx.shape[0]) not satisifed")
    ty_shape[0] = nyest
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, True)
    if nyest != ty_shape[0]:
        raise ValueError("(nyest == ty.shape[0]) not satisifed")
    c_shape[0] = (nxest - kx - 1) * (nyest - ky - 1)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, True)
    if (nxest - kx - 1) * (nyest - ky - 1) != c_shape[0]:
        raise ValueError("((nxest - kx - 1) * (nyest - ky - 1) == c.shape[0]) not satisifed")
    fc.regrid(&iopt, &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), &my, <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), &xb_, &xe_, &yb_, &ye_, &kx, &ky, &s, &nxest, &nyest, &nx, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(ty_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (nx, tx_, ny, ty_, c_, fp, ier,)


cpdef object spalde(object t, object c, fwi_integer_t k, fwr_real_x8_t x, object d=None):
    """spalde(t, c, k, x[, d]) -> (d, ier)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent in
    c : fwr_real_x8, 1D array, dimension(n), intent in
    k : fwi_integer, intent in
    x : fwr_real_x8, intent in
    d : fwr_real_x8, 1D array, dimension(k+1), intent out

    Returns
    -------
    d : fwr_real_x8, 1D array, dimension(k+1), intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t n, k1_f, ier
    cdef np.ndarray t_, c_, d_
    cdef np.npy_intp t_shape[1], c_shape[1], d_shape[1]
    k1_f = ##TODO (watch any dependencies that may be further down!) &k1
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    n = t_shape[0]
    if not (c_shape[0] == n):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == n')
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    d_shape[0] = k + 1
    d_ = fw_asfortranarray(d, fwr_real_x8_t_enum, 1, d_shape, False, True)
    if k + 1 != d_shape[0]:
        raise ValueError("(k + 1 == d.shape[0]) not satisifed")
    #TODO: int k1=k+1;
    fc.spalde(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k1_f, &x, <fwr_real_x8_t*>np.PyArray_DATA(d_), &ier)
    return (d_, ier,)


cpdef object splder(object t, object c, fwi_integer_t k, object x, fwi_integer_t nu=1, fwi_integer_t e=0, object y=None):
    """splder(t, c, k, x[, nu, e, y]) -> y

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent in
    c : fwr_real_x8, 1D array, dimension(n), intent in
    k : fwi_integer, intent in
    x : fwr_real_x8, 1D array, dimension(m), intent in
    nu : fwi_integer, intent in
    e : fwi_integer, intent in
    y : fwr_real_x8, 1D array, dimension(m), intent out

    Returns
    -------
    y : fwr_real_x8, 1D array, dimension(m), intent out

    """
    cdef fwi_integer_t n, m, ier
    cdef np.ndarray t_, c_, x_, y_, wrk_
    cdef np.npy_intp t_shape[1], c_shape[1], x_shape[1], y_shape[1], wrk_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    n = t_shape[0]
    wrk_shape[0] = n
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (c_shape[0] == n):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == n')
    if not ((0 <= nu) and (nu <= k)):
        raise ValueError('Condition on arguments not satisfied: (0 <= nu) and (nu <= k)')
    if not ((0 <= e) and (e <= 2)):
        raise ValueError('Condition on arguments not satisfied: (0 <= e) and (e <= 2)')
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_shape[0] = m
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, True)
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    fc.splder(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k, &nu, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), &m, &e, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &ier)
    return y_


cpdef object splev(object t, object c, fwi_integer_t k, object x, fwi_integer_t e=0, object y=None):
    """splev(t, c, k, x[, e, y]) -> y

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent in
    c : fwr_real_x8, 1D array, dimension(n), intent in
    k : fwi_integer, intent in
    x : fwr_real_x8, 1D array, dimension(m), intent in
    e : fwi_integer, intent in
    y : fwr_real_x8, 1D array, dimension(m), intent out

    Returns
    -------
    y : fwr_real_x8, 1D array, dimension(m), intent out

    """
    cdef fwi_integer_t n, m, ier
    cdef np.ndarray t_, c_, x_, y_
    cdef np.npy_intp t_shape[1], c_shape[1], x_shape[1], y_shape[1]
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    n = t_shape[0]
    if not (c_shape[0] == n):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == n')
    if not ((0 <= e) and (e <= 2)):
        raise ValueError('Condition on arguments not satisfied: (0 <= e) and (e <= 2)')
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_shape[0] = m
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, True)
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    fc.splev(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), &m, &e, &ier)
    return y_


cpdef object splint(object t, object c, fwi_integer_t k, fwr_real_x8_t a, fwr_real_x8_t b):
    """splint(t, c, k, a, b) -> fw_ret_arg

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent in
    c : fwr_real_x8, 1D array, dimension(n), intent in
    k : fwi_integer, intent in
    a : fwr_real_x8, intent in
    b : fwr_real_x8, intent in

    Returns
    -------
    fw_ret_arg : fwr_real_x8, intent out

    """
    cdef fwi_integer_t n
    cdef np.ndarray t_, c_, wrk_
    cdef np.npy_intp t_shape[1], c_shape[1], wrk_shape[1]
    cdef fwr_real_x8_t fw_ret_arg
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    n = t_shape[0]
    wrk_shape[0] = n
    wrk_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk_shape, False, True)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (c_shape[0] == n):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == n')
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    fw_ret_arg = fc.splint(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k, &a, &b, <fwr_real_x8_t*>np.PyArray_DATA(wrk_))
    return fw_ret_arg


cpdef object sproot(object t, object c, object mest=None, object zero=None):
    """sproot(t, c[, mest, zero]) -> (zero, m, ier)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent in
    c : fwr_real_x8, 1D array, dimension(n), intent in
    mest : fwi_integer, intent in
    zero : fwr_real_x8, 1D array, dimension(mest), intent out

    Returns
    -------
    zero : fwr_real_x8, 1D array, dimension(mest), intent out
    m : fwi_integer, intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t mest_, n, m, ier
    cdef np.ndarray t_, c_, zero_
    cdef np.npy_intp t_shape[1], c_shape[1], zero_shape[1]
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    n = t_shape[0]
    if not (c_shape[0] == n):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] == n')
    if not (n >= 8):
        raise ValueError('Condition on arguments not satisfied: n >= 8')
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    if n != c_shape[0]:
        raise ValueError("(n == c.shape[0]) not satisifed")
    mest_ = mest if (mest is not None) else 3 * (n - 7)
    zero_shape[0] = mest_
    zero_ = fw_asfortranarray(zero, fwr_real_x8_t_enum, 1, zero_shape, False, True)
    if mest_ != zero_shape[0]:
        raise ValueError("(mest == zero.shape[0]) not satisifed")
    fc.sproot(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), <fwr_real_x8_t*>np.PyArray_DATA(zero_), &mest_, &m, &ier)
    return (zero_, m, ier,)


cpdef object surfit_smth(object x, object y, object z, object w=None, object xb=None, object xe=None, object yb=None, object ye=None, fwi_integer_t kx=3, fwi_integer_t ky=3, object s=None, object nxest=None, object nyest=None, fwr_real_x8_t eps=1e-16, object lwrk2=None, object tx=None, object ty=None, object c=None, object wrk1=None):
    """surfit_smth(x, y, z[, w, xb, xe, yb, ye, kx, ky, s, nxest, nyest, eps, lwrk2, tx, ty, c, wrk1]) -> (nx, tx, ny, ty, c, fp, wrk1, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent in
    y : fwr_real_x8, 1D array, dimension(m), intent in
    z : fwr_real_x8, 1D array, dimension(m), intent in
    w : fwr_real_x8, 1D array, dimension(m), intent in
    xb : fwr_real_x8, intent in
    xe : fwr_real_x8, intent in
    yb : fwr_real_x8, intent in
    ye : fwr_real_x8, intent in
    kx : fwi_integer, intent in
    ky : fwi_integer, intent in
    s : fwr_real_x8, intent in
    nxest : fwi_integer, intent in
    nyest : fwi_integer, intent in
    eps : fwr_real_x8, intent in
    lwrk2 : fwi_integer, intent in
    tx : fwr_real_x8, 1D array, dimension(nmax), intent out
    ty : fwr_real_x8, 1D array, dimension(nmax), intent out
    c : fwr_real_x8, 1D array, dimension((nxest-kx-1)*(nyest-ky-1)), intent out
    wrk1 : fwr_real_x8, 1D array, dimension(lwrk1), intent out

    Returns
    -------
    nx : fwi_integer, intent out
    tx : fwr_real_x8, 1D array, dimension(nmax), intent out
    ny : fwi_integer, intent out
    ty : fwr_real_x8, 1D array, dimension(nmax), intent out
    c : fwr_real_x8, 1D array, dimension((nxest-kx-1)*(nyest-ky-1)), intent out
    fp : fwr_real_x8, intent out
    wrk1 : fwr_real_x8, 1D array, dimension(lwrk1), intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t nxest_, nyest_, lwrk2_, iopt, m, nmax, lwrk1, kwrk, nx, ny, ier
    cdef np.ndarray x_, y_, z_, w_, tx_, ty_, c_, wrk1_, wrk2_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], z_shape[1], w_shape[1], tx_shape[1], ty_shape[1], c_shape[1], wrk1_shape[1], wrk2_shape[1], iwrk_shape[1]
    cdef fwr_real_x8_t xb_, xe_, yb_, ye_, s_, fp
    xb_ = xb if (xb is not None) else ##TODO (watch any dependencies that may be further down!) dmin(x,m)
    xe_ = xe if (xe is not None) else ##TODO (watch any dependencies that may be further down!) dmax(x,m)
    yb_ = yb if (yb is not None) else ##TODO (watch any dependencies that may be further down!) dmin(y,m)
    ye_ = ye if (ye is not None) else ##TODO (watch any dependencies that may be further down!) dmax(y,m)
    iopt = 0
    lwrk2_ = lwrk2 if (lwrk2 is not None) else ##TODO (watch any dependencies that may be further down!) calc_surfit_lwrk2(m,kx,ky,nxest,nyest)
    wrk2_shape[0] = lwrk2_
    wrk2_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk2_shape, False, True)
    nxest_ = nxest if (nxest is not None) else ##TODO (watch any dependencies that may be further down!) imax(kx+1+sqrt(m/2),2*(kx+1))
    nyest_ = nyest if (nyest is not None) else ##TODO (watch any dependencies that may be further down!) imax(ky+1+sqrt(m/2),2*(ky+1))
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    kwrk = m + ((nxest_ - (2 * kx) - 1) * (nyest_ - (2 * ky) - 1))
    iwrk_shape[0] = kwrk
    iwrk_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwrk_shape, False, True)
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    ##TODO w_ = 1.0
    w_shape[0] = m
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, True)
    s_ = s if (s is not None) else m
    if not (y_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] == m')
    if not (z_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == m')
    if not (w_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: w.shape[0] == m')
    if not ((1 <= kx) and (kx <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= kx) and (kx <= 5)')
    if not ((1 <= ky) and (ky <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= ky) and (ky <= 5)')
    if not (0.0 <= s_):
        raise ValueError('Condition on arguments not satisfied: 0.0 <= s')
    if not (nxest_ >= (2 * (kx + 1))):
        raise ValueError('Condition on arguments not satisfied: nxest >= (2 * (kx + 1))')
    if not (nyest_ >= (2 * (ky + 1))):
        raise ValueError('Condition on arguments not satisfied: nyest >= (2 * (ky + 1))')
    if not ((0.0 < eps) and (eps < 1.0)):
        raise ValueError('Condition on arguments not satisfied: (0.0 < eps) and (eps < 1.0)')
    if not (m >= ((kx + 1) * (ky + 1))):
        raise ValueError('Condition on arguments not satisfied: m >= ((kx + 1) * (ky + 1))')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    if m != z_shape[0]:
        raise ValueError("(m == z.shape[0]) not satisifed")
    if m != w_shape[0]:
        raise ValueError("(m == w.shape[0]) not satisifed")
    nmax = max(nxest_, nyest_)
    tx_shape[0] = nmax
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, True)
    if nmax != tx_shape[0]:
        raise ValueError("(nmax == tx.shape[0]) not satisifed")
    ty_shape[0] = nmax
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, True)
    if nmax != ty_shape[0]:
        raise ValueError("(nmax == ty.shape[0]) not satisifed")
    c_shape[0] = (nxest_ - kx - 1) * (nyest_ - ky - 1)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, True)
    if (nxest_ - kx - 1) * (nyest_ - ky - 1) != c_shape[0]:
        raise ValueError("((nxest - kx - 1) * (nyest - ky - 1) == c.shape[0]) not satisifed")
    lwrk1 = ##TODO (watch any dependencies that may be further down!) calc_surfit_lwrk1(m,kx,ky,nxest,nyest)
    wrk1_shape[0] = lwrk1
    wrk1_ = fw_asfortranarray(wrk1, fwr_real_x8_t_enum, 1, wrk1_shape, False, True)
    if lwrk1 != wrk1_shape[0]:
        raise ValueError("(lwrk1 == wrk1.shape[0]) not satisifed")
    fc.surfit(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &xb_, &xe_, &yb_, &ye_, &kx, &ky, &s_, &nxest_, &nyest_, &nmax, &eps, &nx, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(ty_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk1_), &lwrk1, <fwr_real_x8_t*>np.PyArray_DATA(wrk2_), &lwrk2_, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (nx, tx_, ny, ty_, c_, fp, wrk1_, ier,)


cpdef object surfit_lsq(object x, object y, object z, object tx, object ty, object w=None, object xb=None, object xe=None, object yb=None, object ye=None, fwi_integer_t kx=3, fwi_integer_t ky=3, fwr_real_x8_t eps=1e-16, object lwrk2=None, bint overwrite_tx=True, bint overwrite_ty=True, object c=None):
    """surfit_lsq(x, y, z, tx, ty[, w, xb, xe, yb, ye, kx, ky, eps, lwrk2, overwrite_tx, overwrite_ty, c]) -> (tx, ty, c, fp, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent in
    y : fwr_real_x8, 1D array, dimension(m), intent in
    z : fwr_real_x8, 1D array, dimension(m), intent in
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent in
    xb : fwr_real_x8, intent in
    xe : fwr_real_x8, intent in
    yb : fwr_real_x8, intent in
    ye : fwr_real_x8, intent in
    kx : fwi_integer, intent in
    ky : fwi_integer, intent in
    eps : fwr_real_x8, intent in
    lwrk2 : fwi_integer, intent in
    overwrite_tx : bint_, intent in
    overwrite_ty : bint_, intent in
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent out

    Returns
    -------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent out
    fp : fwr_real_x8, intent out
    ier : fwi_integer, intent out

    """
    cdef fwi_integer_t lwrk2_, iopt, m, nxest, nyest, nmax, nx, ny, lwrk1, kwrk, ier
    cdef np.ndarray x_, y_, z_, tx_, ty_, w_, c_, wrk1_, wrk2_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], z_shape[1], tx_shape[1], ty_shape[1], w_shape[1], c_shape[1], wrk1_shape[1], wrk2_shape[1], iwrk_shape[1]
    cdef fwr_real_x8_t xb_, xe_, yb_, ye_, s, fp
    xb_ = xb if (xb is not None) else ##TODO (watch any dependencies that may be further down!) calc_b(x,m,tx,nx)
    xe_ = xe if (xe is not None) else ##TODO (watch any dependencies that may be further down!) calc_e(x,m,tx,nx)
    yb_ = yb if (yb is not None) else ##TODO (watch any dependencies that may be further down!) calc_b(y,m,ty,ny)
    ye_ = ye if (ye is not None) else ##TODO (watch any dependencies that may be further down!) calc_e(y,m,ty,ny)
    iopt = -1
    s = 0.0
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, not overwrite_tx, False)
    nx = tx_shape[0]
    nxest = nx
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, not overwrite_ty, False)
    ny = ty_shape[0]
    nyest = ny
    nmax = max(nx, ny)
    lwrk1 = ##TODO (watch any dependencies that may be further down!) calc_surfit_lwrk1(m,kx,ky,nxest,nyest)
    wrk1_shape[0] = lwrk1
    wrk1_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk1_shape, False, True)
    lwrk2_ = lwrk2 if (lwrk2 is not None) else ##TODO (watch any dependencies that may be further down!) calc_surfit_lwrk2(m,kx,ky,nxest,nyest)
    wrk2_shape[0] = lwrk2_
    wrk2_ = fw_asfortranarray(None, fwr_real_x8_t_enum, 1, wrk2_shape, False, True)
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    m = x_shape[0]
    kwrk = m + ((nx - (2 * kx) - 1) * (ny - (2 * ky) - 1))
    iwrk_shape[0] = kwrk
    iwrk_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iwrk_shape, False, True)
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    ##TODO w_ = 1.0
    w_shape[0] = m
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, True)
    if not (y_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] == m')
    if not (z_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: z.shape[0] == m')
    if not (w_shape[0] == m):
        raise ValueError('Condition on arguments not satisfied: w.shape[0] == m')
    if not ((1 <= kx) and (kx <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= kx) and (kx <= 5)')
    if not ((1 <= ky) and (ky <= 5)):
        raise ValueError('Condition on arguments not satisfied: (1 <= ky) and (ky <= 5)')
    if not ((0.0 < eps) and (eps < 1.0)):
        raise ValueError('Condition on arguments not satisfied: (0.0 < eps) and (eps < 1.0)')
    if not (m >= ((kx + 1) * (ky + 1))):
        raise ValueError('Condition on arguments not satisfied: m >= ((kx + 1) * (ky + 1))')
    if not (((2 * kx) + 2) <= nx):
        raise ValueError('Condition on arguments not satisfied: ((2 * kx) + 2) <= nx')
    if not (((2 * ky) + 2) <= ny):
        raise ValueError('Condition on arguments not satisfied: ((2 * ky) + 2) <= ny')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    if m != y_shape[0]:
        raise ValueError("(m == y.shape[0]) not satisifed")
    if m != z_shape[0]:
        raise ValueError("(m == z.shape[0]) not satisifed")
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    if m != w_shape[0]:
        raise ValueError("(m == w.shape[0]) not satisifed")
    c_shape[0] = (nx - kx - 1) * (ny - ky - 1)
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, True)
    if (nx - kx - 1) * (ny - ky - 1) != c_shape[0]:
        raise ValueError("((nx - kx - 1) * (ny - ky - 1) == c.shape[0]) not satisifed")
    fc.surfit(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &xb_, &xe_, &yb_, &ye_, &kx, &ky, &s, &nxest, &nyest, &nmax, &eps, &nx, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(ty_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk1_), &lwrk1, <fwr_real_x8_t*>np.PyArray_DATA(wrk2_), &lwrk2_, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (tx_, ty_, c_, fp, ier,)



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


#
# Auxiliary code
#

cdef double dmax(np.ndarray seq, int n):
    cdef np.ndarray[double] seq_ = seq
    cdef double val
    if n < 0:
        return -1e308
    val = seq_[0]
    for i in range(1, n):
        if seq_[i] > val:
            val = seq_[i]
    return val

cdef double dmax(np.ndarray seq, int n):
    cdef np.ndarray[double] seq_ = seq
    cdef double val
    if n < 0:
        return 1e308
    val = seq_[0]
    for i in range(1, n):
        if seq_[i] < val:
            val = seq_[i]
    return val

cdef double calc_b(np.ndarray x, int m, np.ndarray tx, int nx):
    cdef double val1 = dmin(x, m)
    cdef double val2 = dmin(tx, nx)
    if val2 > val1:
        return val1
    val1 = dmax(tx, nx)
    return val2 - (val1 - val2) / nx

cdef double calc_e(np.ndarray x, int m, np.ndarray tx, int nx):
    cdef double val1 = dmax(x, m)
    cdef double val2 = dmax(tx, nx)
    if val2 < val1:
        return val1
    val1 = dmin(tx, nx)
    return val2 + (val2 - val1) / nx

cdef int calc_surfit_lwrk1(int m, int kx, int ky, int nxest, int nyest):
    cdef int u, v, km, ne, bx, by_, b1, b2
    u = nxest - kx - 1
    v = nyest - ky - 1
    km = max(kx, ky) + 1
    ne = max(nxest, nyest)
    bx = kx*v+ky+1
    by_ = ky*u+kx+1
    if bx <= by_:
        b1 = bx
        b2 = bx + v - ky
    else:
        b1 = by_
        b2 = by_ + u - kx
    return u * v * (2 + b1 + b2) + 2 * (u + v + km * (m + ne) + ne - kx - ky) + b2 + 1

cdef int calc_surfit_lwrk2(int m, int kx, int ky, int nxest, int nyest):
    cdef int u, v, bx, by_, b2
    u = nxest - kx - 1
    v = nyest - ky - 1
    bx = kx * v + ky + 1
    by_ = ky * u + kx + 1
    b2 = bx + v - ky if bx <= by_ else by_ + u - kx
    return u * v * (b2 + 1) + b2

cdef int calc_regrid_lwrk(int mx, int my, int kx, int ky,
                          int nxest, int nyest):
    cdef u = max(my, nxest)
    return (4 + nxest * (my + 2 * kx + 5) +
            nyest * (2 * ky + 5) +
            mx * (kx +1 ) + my * (ky + 1) + u)


# Fwrap configuration:
# Fwrap: version 0.2.0dev_66e37de
# Fwrap: self-sha1 3078d720c73e99bebd81a31bd6f084104a40fda2
# Fwrap: pyf-sha1 bf9620e70e75178515e8fca448c1a0e0edbd06a3
# Fwrap: wraps fitpack/bispeu.f
# Fwrap:     sha1 8a58ee9c07576ccb81ebf587c844a09a06eef222
# Fwrap: wraps fitpack/bispev.f
# Fwrap:     sha1 8f3c89c4ddacb65cfcde92ce8a4063703c2a9e99
# Fwrap: wraps fitpack/clocur.f
# Fwrap:     sha1 73b38e28050d79a2b6b2b7f264d97c1ed9692742
# Fwrap: wraps fitpack/cocosp.f
# Fwrap:     sha1 61926cd64cb151f7915e0cfcf46bd667ef3448d8
# Fwrap: wraps fitpack/concon.f
# Fwrap:     sha1 08c3de36d18d9711f39b25d6a716422ca32a8f00
# Fwrap: wraps fitpack/concur.f
# Fwrap:     sha1 ae8ea5bb1ea51202352533eb7111c8689d27eb43
# Fwrap: wraps fitpack/cualde.f
# Fwrap:     sha1 ab8dfff830f5284287944a2fbfcb85ea5244456f
# Fwrap: wraps fitpack/curev.f
# Fwrap:     sha1 53c0457ad498a60b8e22ac3782a41c94a1b289e0
# Fwrap: wraps fitpack/curfit.f
# Fwrap:     sha1 0cf39a96e6ec0758122e2b7b8187b170d7190458
# Fwrap: wraps fitpack/dblint.f
# Fwrap:     sha1 3e87cd7894862eb20cdbf6aa820f751a547a547e
# Fwrap: wraps fitpack/evapol.f
# Fwrap:     sha1 305085e044fdab2ae7d04ecd40fd06e381142209
# Fwrap: wraps fitpack/fourco.f
# Fwrap:     sha1 b33488265c1879e5a3b283b513f6464b427d10d7
# Fwrap: wraps fitpack/fpader.f
# Fwrap:     sha1 552a26266f8d0685f0b8305143f004bc224971c4
# Fwrap: wraps fitpack/fpadno.f
# Fwrap:     sha1 ed7ea9be4b55410a7f81e6209f83ff0748c64a60
# Fwrap: wraps fitpack/fpadpo.f
# Fwrap:     sha1 51c596d882ec5a890785ecc0be97a4a4efd2a9bd
# Fwrap: wraps fitpack/fpback.f
# Fwrap:     sha1 1770f6d8688e3ce25f3b42e6633b8e035e438c74
# Fwrap: wraps fitpack/fpbacp.f
# Fwrap:     sha1 ad54224da900c548063a5d485d6302d316f16694
# Fwrap: wraps fitpack/fpbfout.f
# Fwrap:     sha1 c5044b6e3b9134debaba8363576f1f59ff625cb2
# Fwrap: wraps fitpack/fpbisp.f
# Fwrap:     sha1 c2d498e4db1aa00af783424fd15c48f25ed198af
# Fwrap: wraps fitpack/fpbspl.f
# Fwrap:     sha1 ec48856ce11461d725928f2d8311b81485747ae9
# Fwrap: wraps fitpack/fpchec.f
# Fwrap:     sha1 bac9aecf41b96bbe45e6da509a4e22acc6d12005
# Fwrap: wraps fitpack/fpched.f
# Fwrap:     sha1 798bdbfd71c55406063b5e1d32e06b02e64fa69c
# Fwrap: wraps fitpack/fpchep.f
# Fwrap:     sha1 230d7e9b2f33ffdb3da4c3c94c4b221cb7616fed
# Fwrap: wraps fitpack/fpclos.f
# Fwrap:     sha1 f71396996c0657c07dc8b1c5ada1bb6a522f25ab
# Fwrap: wraps fitpack/fpcoco.f
# Fwrap:     sha1 27a393c26a9402a6436d0ad31950e6089c2f8faf
# Fwrap: wraps fitpack/fpcons.f
# Fwrap:     sha1 84e965cb8de78f4a5200eeeace3d7cea7c3c919d
# Fwrap: wraps fitpack/fpcosp.f
# Fwrap:     sha1 f62bda321fd16e7a2b7cba9b11f933ad094578d4
# Fwrap: wraps fitpack/fpcsin.f
# Fwrap:     sha1 e8d45e84019ae9ea4dc8ecf4433fba3fd099d9f5
# Fwrap: wraps fitpack/fpcurf.f
# Fwrap:     sha1 bb3cc77d83b86da08b931ec0a484469998c2182a
# Fwrap: wraps fitpack/fpcuro.f
# Fwrap:     sha1 9ef7451bde45f7cada54e59b58dc89af4f64cf0e
# Fwrap: wraps fitpack/fpcyt1.f
# Fwrap:     sha1 e0cc3be3e6d83bc4f0e3b8a1cfeea6c6e12bd884
# Fwrap: wraps fitpack/fpcyt2.f
# Fwrap:     sha1 b7fc2da7e6e444fa206b88118758717016943f9b
# Fwrap: wraps fitpack/fpdeno.f
# Fwrap:     sha1 c85ba6846229c7126260c24fc68deefff46e91a9
# Fwrap: wraps fitpack/fpdisc.f
# Fwrap:     sha1 b78b41ef32a94a8ae92a1652389378ce59388850
# Fwrap: wraps fitpack/fpfrno.f
# Fwrap:     sha1 9fcef150559f72785984e6c01318043d606d74f8
# Fwrap: wraps fitpack/fpgivs.f
# Fwrap:     sha1 6dda2c2fb5383ed7908474f952d8726cdfa7fc42
# Fwrap: wraps fitpack/fpgrdi.f
# Fwrap:     sha1 431d00ca9f5dd1a513b32d73fbf548d1d2fca7cf
# Fwrap: wraps fitpack/fpgrpa.f
# Fwrap:     sha1 5183a0ab391b3eba47cdbcadb6eb89544b63434d
# Fwrap: wraps fitpack/fpgrre.f
# Fwrap:     sha1 983c99b1c8a86cc2b269906dffeb7d33b7172cff
# Fwrap: wraps fitpack/fpgrsp.f
# Fwrap:     sha1 dba9256c6b92ce3d9b57923999e35f644b84e307
# Fwrap: wraps fitpack/fpinst.f
# Fwrap:     sha1 29e74e6b7aa30fd72e2a9bda93c76e19251af979
# Fwrap: wraps fitpack/fpintb.f
# Fwrap:     sha1 2ff9be29394a5da161c91caf53561c78caeccde1
# Fwrap: wraps fitpack/fpknot.f
# Fwrap:     sha1 7a92e94a9ab536b2e43d70638dd044da882ab97a
# Fwrap: wraps fitpack/fpopdi.f
# Fwrap:     sha1 86c31d8348b43c9efc74532d3c90fedb673d47bf
# Fwrap: wraps fitpack/fpopsp.f
# Fwrap:     sha1 088776188b218818eb0929bb45e54be51a00958e
# Fwrap: wraps fitpack/fporde.f
# Fwrap:     sha1 5fc1cdd698145883745e4cd666578ec545d09759
# Fwrap: wraps fitpack/fppara.f
# Fwrap:     sha1 d8968cc8f8f0c04d36637aefe7e40e2a0bf3103e
# Fwrap: wraps fitpack/fppasu.f
# Fwrap:     sha1 fc590c1d262a0252a47022becf2bd647cf4b4ebc
# Fwrap: wraps fitpack/fpperi.f
# Fwrap:     sha1 b993f73e7b38962fb71c558503fa005ae7bb10b9
# Fwrap: wraps fitpack/fppocu.f
# Fwrap:     sha1 a4f336ca37a1067b4a259a6c480641766576559a
# Fwrap: wraps fitpack/fppogr.f
# Fwrap:     sha1 d67dfe61976714411918b94896520e314e3650e9
# Fwrap: wraps fitpack/fppola.f
# Fwrap:     sha1 c7cf9872d08ed4a1dba23d9c3a739d68297bde83
# Fwrap: wraps fitpack/fprank.f
# Fwrap:     sha1 3a4e024d5c878f9535258b7fc15c078e76a8c59e
# Fwrap: wraps fitpack/fprati.f
# Fwrap:     sha1 1ae2aaaa69b9bb4994ff52791f3b3153c6074630
# Fwrap: wraps fitpack/fpregr.f
# Fwrap:     sha1 528abef673bb616d02a2d5294f164163e77127d1
# Fwrap: wraps fitpack/fprota.f
# Fwrap:     sha1 50aff9059be110c217b59b18fdff80b3b2f4a38c
# Fwrap: wraps fitpack/fprppo.f
# Fwrap:     sha1 04c21fca6cc470c0c660cd279e388ee2f56f86d2
# Fwrap: wraps fitpack/fprpsp.f
# Fwrap:     sha1 74a3230ae5ab97d56737cd00b3f03abc9a188fee
# Fwrap: wraps fitpack/fpseno.f
# Fwrap:     sha1 a63cee4b3fe4344cc026a265345fc4aca43a8bcf
# Fwrap: wraps fitpack/fpspgr.f
# Fwrap:     sha1 71898348e25d0a657970df95c970735590d9ae0a
# Fwrap: wraps fitpack/fpsphe.f
# Fwrap:     sha1 85a8c35892677926eaf0dbb00018ba9bfddd7c6a
# Fwrap: wraps fitpack/fpsuev.f
# Fwrap:     sha1 ea13451a9874a376fc480f357dbb14c170f8cabd
# Fwrap: wraps fitpack/fpsurf.f
# Fwrap:     sha1 890912ff71abf441c86257c6bb2e4a45a965a454
# Fwrap: wraps fitpack/fpsysy.f
# Fwrap:     sha1 d439726790be5126dd766ef61f1903c4e21b5bed
# Fwrap: wraps fitpack/fptrnp.f
# Fwrap:     sha1 e3ef63fa6147cad40b46497fc3f0b2034e67f47e
# Fwrap: wraps fitpack/fptrpe.f
# Fwrap:     sha1 1fbbc99100aa70ad9381e597248189cb0175f14b
# Fwrap: wraps fitpack/insert.f
# Fwrap:     sha1 ce889d310ffc7ef616ef1626402c668614cf48d8
# Fwrap: wraps fitpack/parcur.f
# Fwrap:     sha1 b4e657ce5ba3815397257c632943980282d890fd
# Fwrap: wraps fitpack/parder.f
# Fwrap:     sha1 38c0697fabd436a521d0ff0c104b13c9751a3849
# Fwrap: wraps fitpack/parsur.f
# Fwrap:     sha1 593485743be102bcc1ce031ad75ef30724482e55
# Fwrap: wraps fitpack/percur.f
# Fwrap:     sha1 1c7f0b2a5ca8b5d7b6c3c8f6f6c9a30eff48c2f4
# Fwrap: wraps fitpack/pogrid.f
# Fwrap:     sha1 77b4e82204950ac1ed435ba4c26bb4064ee961c2
# Fwrap: wraps fitpack/polar.f
# Fwrap:     sha1 3652446c4381844d3b0b5ac6bfaca8890c6e4d57
# Fwrap: wraps fitpack/profil.f
# Fwrap:     sha1 6ac80a54867f492c86a746bd31121584653e89e5
# Fwrap: wraps fitpack/regrid.f
# Fwrap:     sha1 5b2e6ba3f86b02ac2cb85db907c75c50d814e8cf
# Fwrap: wraps fitpack/spalde.f
# Fwrap:     sha1 e33c13649c55dceb170c395382bf2e5b5db3d4f0
# Fwrap: wraps fitpack/spgrid.f
# Fwrap:     sha1 94eef0acebbfaecf7e4696138308f7771bcc7965
# Fwrap: wraps fitpack/sphere.f
# Fwrap:     sha1 652e302e4580652ef3bc31a0d429eee31104ac59
# Fwrap: wraps fitpack/splder.f
# Fwrap:     sha1 8d140ba86bfc7126f984782dbd05c1849b7604dc
# Fwrap: wraps fitpack/splev.f
# Fwrap:     sha1 c5e872650c0b0c6d1f9119c51b824a6905249b39
# Fwrap: wraps fitpack/splint.f
# Fwrap:     sha1 171a1a01e083026f88ba2ad567abc6ba8a1d1b80
# Fwrap: wraps fitpack/sproot.f
# Fwrap:     sha1 b737080911644b7e72b69153290a311d9a3b2b93
# Fwrap: wraps fitpack/surev.f
# Fwrap:     sha1 9fe703f8f6a638daef806e46fc37299f9f7bf536
# Fwrap: wraps fitpack/surfit.f
# Fwrap:     sha1 b230a39f4aa802d9a0199bbeced4926358a43ced
# Fwrap: exclude clocur
# Fwrap: exclude cocosp
# Fwrap: exclude concon
# Fwrap: exclude concur
# Fwrap: exclude cualde
# Fwrap: exclude curev
# Fwrap: exclude evapol
# Fwrap: exclude fourco
# Fwrap: exclude fpader
# Fwrap: exclude fpadno
# Fwrap: exclude fpadpo
# Fwrap: exclude fpback
# Fwrap: exclude fpbacp
# Fwrap: exclude fpbfou
# Fwrap: exclude fpbisp
# Fwrap: exclude fpbspl
# Fwrap: exclude fpchec
# Fwrap: exclude fpched
# Fwrap: exclude fpchep
# Fwrap: exclude fpclos
# Fwrap: exclude fpcoco
# Fwrap: exclude fpcons
# Fwrap: exclude fpcosp
# Fwrap: exclude fpcsin
# Fwrap: exclude fpcuro
# Fwrap: exclude fpcyt1
# Fwrap: exclude fpcyt2
# Fwrap: exclude fpdeno
# Fwrap: exclude fpdisc
# Fwrap: exclude fpfrno
# Fwrap: exclude fpgivs
# Fwrap: exclude fpgrdi
# Fwrap: exclude fpgrpa
# Fwrap: exclude fpgrre
# Fwrap: exclude fpgrsp
# Fwrap: exclude fpinst
# Fwrap: exclude fpintb
# Fwrap: exclude fpknot
# Fwrap: exclude fpopdi
# Fwrap: exclude fpopsp
# Fwrap: exclude fporde
# Fwrap: exclude fppara
# Fwrap: exclude fppasu
# Fwrap: exclude fpperi
# Fwrap: exclude fppocu
# Fwrap: exclude fppogr
# Fwrap: exclude fppola
# Fwrap: exclude fprank
# Fwrap: exclude fprati
# Fwrap: exclude fpregr
# Fwrap: exclude fprota
# Fwrap: exclude fprppo
# Fwrap: exclude fprpsp
# Fwrap: exclude fpseno
# Fwrap: exclude fpspgr
# Fwrap: exclude fpsphe
# Fwrap: exclude fpsuev
# Fwrap: exclude fpsurf
# Fwrap: exclude fpsysy
# Fwrap: exclude fptrnp
# Fwrap: exclude fptrpe
# Fwrap: exclude insert
# Fwrap: exclude parder
# Fwrap: exclude parsur
# Fwrap: exclude pogrid
# Fwrap: exclude polar
# Fwrap: exclude profil
# Fwrap: exclude spgrid
# Fwrap: exclude sphere
# Fwrap: exclude surev
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary dfitpack.pxd
# Fwrap: auxiliary dfitpack_fc.h
# Fwrap: auxiliary dfitpack_fc.pxd

