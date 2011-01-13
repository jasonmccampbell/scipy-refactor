#cython: ccomplex=True

"""The dfitpack module was generated with Fwrap v0.2.0dev_eb4bde9.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
bispeu(...)
bispev(...)
clocur(...)
cocosp(...)
concon(...)
concur(...)
cualde(...)
curev(...)
curfit(...)
dblint(...)
evapol(...)
fourco(...)
fpader(...)
fpadno(...)
fpadpo(...)
fpback(...)
fpbacp(...)
fpbfou(...)
fpbisp(...)
fpbspl(...)
fpchec(...)
fpched(...)
fpchep(...)
fpclos(...)
fpcoco(...)
fpcons(...)
fpcosp(...)
fpcsin(...)
fpcurf(...)
fpcuro(...)
fpcyt1(...)
fpcyt2(...)
fpdeno(...)
fpdisc(...)
fpfrno(...)
fpgivs(...)
fpgrdi(...)
fpgrpa(...)
fpgrre(...)
fpgrsp(...)
fpinst(...)
fpintb(...)
fpknot(...)
fpopdi(...)
fpopsp(...)
fporde(...)
fppara(...)
fppasu(...)
fpperi(...)
fppocu(...)
fppogr(...)
fppola(...)
fprank(...)
fprati(...)
fpregr(...)
fprota(...)
fprppo(...)
fprpsp(...)
fpseno(...)
fpspgr(...)
fpsphe(...)
fpsuev(...)
fpsurf(...)
fpsysy(...)
fptrnp(...)
fptrpe(...)
insert(...)
parcur(...)
parder(...)
parsur(...)
percur(...)
pogrid(...)
polar(...)
profil(...)
regrid(...)
spalde(...)
spgrid(...)
sphere(...)
splder(...)
splev(...)
splint(...)
sproot(...)
surev(...)
surfit(...)

"""
np.import_array()
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
__all__ = ['bispeu', 'bispev', 'clocur', 'cocosp', 'concon', 'concur', 'cualde', 'curev', 'curfit', 'dblint', 'evapol', 'fourco', 'fpader', 'fpadno', 'fpadpo', 'fpback', 'fpbacp', 'fpbfou', 'fpbisp', 'fpbspl', 'fpchec', 'fpched', 'fpchep', 'fpclos', 'fpcoco', 'fpcons', 'fpcosp', 'fpcsin', 'fpcurf', 'fpcuro', 'fpcyt1', 'fpcyt2', 'fpdeno', 'fpdisc', 'fpfrno', 'fpgivs', 'fpgrdi', 'fpgrpa', 'fpgrre', 'fpgrsp', 'fpinst', 'fpintb', 'fpknot', 'fpopdi', 'fpopsp', 'fporde', 'fppara', 'fppasu', 'fpperi', 'fppocu', 'fppogr', 'fppola', 'fprank', 'fprati', 'fpregr', 'fprota', 'fprppo', 'fprpsp', 'fpseno', 'fpspgr', 'fpsphe', 'fpsuev', 'fpsurf', 'fpsysy', 'fptrnp', 'fptrpe', 'insert', 'parcur', 'parder', 'parsur', 'percur', 'pogrid', 'polar', 'profil', 'regrid', 'spalde', 'spgrid', 'sphere', 'splder', 'splev', 'splint', 'sproot', 'surev', 'surfit']
cpdef object bispeu(object tx, fwi_integer_t nx, object ty, fwi_integer_t ny, object c, fwi_integer_t kx, fwi_integer_t ky, object x, object y, object z, fwi_integer_t m, object wrk, fwi_integer_t lwrk, fwi_integer_t ier):
    """bispeu(tx, nx, ty, ny, c, kx, ky, x, y, z, m, wrk, lwrk, ier) -> (tx, nx, ty, ny, c, kx, ky, x, y, z, m, wrk, lwrk, ier)

    Parameters
    ----------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray tx_, ty_, c_, x_, y_, z_, wrk_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], x_shape[1], y_shape[1], z_shape[1], wrk_shape[1]
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= m <= z_shape[0]):
        raise ValueError("(0 <= m <= z.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.bispeu(<fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), &m, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (tx_, nx, ty_, ny, c_, kx, ky, x_, y_, z_, m, wrk_, lwrk, ier,)


cpdef object bispev(object tx, fwi_integer_t nx, object ty, fwi_integer_t ny, object c, fwi_integer_t kx, fwi_integer_t ky, object x, fwi_integer_t mx, object y, fwi_integer_t my, object z, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """bispev(tx, nx, ty, ny, c, kx, ky, x, mx, y, my, z, wrk, lwrk, iwrk, kwrk, ier) -> (tx, nx, ty, ny, c, kx, ky, x, mx, y, my, z, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mx*my), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mx*my), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray tx_, ty_, c_, x_, y_, z_, wrk_, iwrk_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], x_shape[1], y_shape[1], z_shape[1], wrk_shape[1], iwrk_shape[1]
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= my <= y_shape[0]):
        raise ValueError("(0 <= my <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.bispev(<fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, <fwr_real_x8_t*>np.PyArray_DATA(x_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(y_), &my, <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (tx_, nx, ty_, ny, c_, kx, ky, x_, mx, y_, my, z_, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object clocur(fwi_integer_t iopt, fwi_integer_t ipar, fwi_integer_t idim, fwi_integer_t m, object u, fwi_integer_t mx, object x, object w, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwi_integer_t n, object t, fwi_integer_t nc, object c, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t ier):
    """clocur(iopt, ipar, idim, m, u, mx, x, w, k, s, nest, n, t, nc, c, fp, wrk, lwrk, iwrk, ier) -> (iopt, ipar, idim, m, u, mx, x, w, k, s, nest, n, t, nc, c, fp, wrk, lwrk, iwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    ipar : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    ipar : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray u_, x_, w_, t_, c_, wrk_, iwrk_
    cdef np.npy_intp u_shape[1], x_shape[1], w_shape[1], t_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= nest <= iwrk_shape[0]):
        raise ValueError("(0 <= nest <= iwrk.shape[0]) not satisifed")
    fc.clocur(&iopt, &ipar, &idim, &m, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &k, &s, &nest, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), &nc, <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &ier)
    return (iopt, ipar, idim, m, u_, mx, x_, w_, k, s, nest, n, t_, nc, c_, fp, wrk_, lwrk, iwrk_, ier,)


cpdef object cocosp(fwi_integer_t m, object x, object y, object w, fwi_integer_t n, object t, object e, fwi_integer_t maxtr, fwi_integer_t maxbin, object c, fwr_real_x8_t sq, object sx, object bind, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """cocosp(m, x, y, w, n, t, e, maxtr, maxbin, c, sq, sx, bind, wrk, lwrk, iwrk, kwrk, ier) -> (m, x, y, w, n, t, e, maxtr, maxbin, c, sq, sx, bind, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    e : fwr_real_x8, 1D array, dimension(n), intent inout
    maxtr : fwi_integer, intent inout
    maxbin : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    sq : fwr_real_x8, intent inout
    sx : fwr_real_x8, 1D array, dimension(m), intent inout
    bind : fwl_logical, 1D array, dimension(n), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    e : fwr_real_x8, 1D array, dimension(n), intent inout
    maxtr : fwi_integer, intent inout
    maxbin : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    sq : fwr_real_x8, intent inout
    sx : fwr_real_x8, 1D array, dimension(m), intent inout
    bind : fwl_logical, 1D array, dimension(n), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, w_, t_, e_, c_, sx_, bind_, wrk_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], e_shape[1], c_shape[1], sx_shape[1], bind_shape[1], wrk_shape[1], iwrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    e_ = fw_asfortranarray(e, fwr_real_x8_t_enum, 1, e_shape, False, False)
    if not (0 <= n <= e_shape[0]):
        raise ValueError("(0 <= n <= e.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    sx_ = fw_asfortranarray(sx, fwr_real_x8_t_enum, 1, sx_shape, False, False)
    if not (0 <= m <= sx_shape[0]):
        raise ValueError("(0 <= m <= sx.shape[0]) not satisifed")
    bind_ = fw_asfortranarray(bind, fwl_logical_t_enum, 1, bind_shape, False, False)
    if not (0 <= n <= bind_shape[0]):
        raise ValueError("(0 <= n <= bind.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.cocosp(&m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(e_), &maxtr, &maxbin, <fwr_real_x8_t*>np.PyArray_DATA(c_), &sq, <fwr_real_x8_t*>np.PyArray_DATA(sx_), <fwl_logical_t*>np.PyArray_DATA(bind_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (m, x_, y_, w_, n, t_, e_, maxtr, maxbin, c_, sq, sx_, bind_, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object concon(fwi_integer_t iopt, fwi_integer_t m, object x, object y, object w, object v, fwr_real_x8_t s, fwi_integer_t nest, fwi_integer_t maxtr, fwi_integer_t maxbin, fwi_integer_t n, object t, object c, fwr_real_x8_t sq, object sx, object bind, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """concon(iopt, m, x, y, w, v, s, nest, maxtr, maxbin, n, t, c, sq, sx, bind, wrk, lwrk, iwrk, kwrk, ier) -> (iopt, m, x, y, w, v, s, nest, maxtr, maxbin, n, t, c, sq, sx, bind, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    v : fwr_real_x8, 1D array, dimension(m), intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    maxtr : fwi_integer, intent inout
    maxbin : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    sq : fwr_real_x8, intent inout
    sx : fwr_real_x8, 1D array, dimension(m), intent inout
    bind : fwl_logical, 1D array, dimension(nest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    v : fwr_real_x8, 1D array, dimension(m), intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    maxtr : fwi_integer, intent inout
    maxbin : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    sq : fwr_real_x8, intent inout
    sx : fwr_real_x8, 1D array, dimension(m), intent inout
    bind : fwl_logical, 1D array, dimension(nest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, w_, v_, t_, c_, sx_, bind_, wrk_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], v_shape[1], t_shape[1], c_shape[1], sx_shape[1], bind_shape[1], wrk_shape[1], iwrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= m <= v_shape[0]):
        raise ValueError("(0 <= m <= v.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nest <= c_shape[0]):
        raise ValueError("(0 <= nest <= c.shape[0]) not satisifed")
    sx_ = fw_asfortranarray(sx, fwr_real_x8_t_enum, 1, sx_shape, False, False)
    if not (0 <= m <= sx_shape[0]):
        raise ValueError("(0 <= m <= sx.shape[0]) not satisifed")
    bind_ = fw_asfortranarray(bind, fwl_logical_t_enum, 1, bind_shape, False, False)
    if not (0 <= nest <= bind_shape[0]):
        raise ValueError("(0 <= nest <= bind.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.concon(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), <fwr_real_x8_t*>np.PyArray_DATA(v_), &s, &nest, &maxtr, &maxbin, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &sq, <fwr_real_x8_t*>np.PyArray_DATA(sx_), <fwl_logical_t*>np.PyArray_DATA(bind_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt, m, x_, y_, w_, v_, s, nest, maxtr, maxbin, n, t_, c_, sq, sx_, bind_, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object concur(fwi_integer_t iopt, fwi_integer_t idim, fwi_integer_t m, object u, fwi_integer_t mx, object x, object xx, object w, fwi_integer_t ib, object db, fwi_integer_t nb, fwi_integer_t ie, object de, fwi_integer_t ne, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwi_integer_t n, object t, fwi_integer_t nc, object c, fwi_integer_t np__, object cp, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t ier):
    """concur(iopt, idim, m, u, mx, x, xx, w, ib, db, nb, ie, de, ne, k, s, nest, n, t, nc, c, np__, cp, fp, wrk, lwrk, iwrk, ier) -> (iopt, idim, m, u, mx, x, xx, w, ib, db, nb, ie, de, ne, k, s, nest, n, t, nc, c, np__, cp, fp, wrk, lwrk, iwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    xx : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    ib : fwi_integer, intent inout
    db : fwr_real_x8, 1D array, dimension(nb), intent inout
    nb : fwi_integer, intent inout
    ie : fwi_integer, intent inout
    de : fwr_real_x8, 1D array, dimension(ne), intent inout
    ne : fwi_integer, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    np__ : fwi_integer, intent inout
    cp : fwr_real_x8, 1D array, dimension(np), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    xx : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    ib : fwi_integer, intent inout
    db : fwr_real_x8, 1D array, dimension(nb), intent inout
    nb : fwi_integer, intent inout
    ie : fwi_integer, intent inout
    de : fwr_real_x8, 1D array, dimension(ne), intent inout
    ne : fwi_integer, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    np__ : fwi_integer, intent inout
    cp : fwr_real_x8, 1D array, dimension(np), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray u_, x_, xx_, w_, db_, de_, t_, c_, cp_, wrk_, iwrk_
    cdef np.npy_intp u_shape[1], x_shape[1], xx_shape[1], w_shape[1], db_shape[1], de_shape[1], t_shape[1], c_shape[1], cp_shape[1], wrk_shape[1], iwrk_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    xx_ = fw_asfortranarray(xx, fwr_real_x8_t_enum, 1, xx_shape, False, False)
    if not (0 <= mx <= xx_shape[0]):
        raise ValueError("(0 <= mx <= xx.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    db_ = fw_asfortranarray(db, fwr_real_x8_t_enum, 1, db_shape, False, False)
    if not (0 <= nb <= db_shape[0]):
        raise ValueError("(0 <= nb <= db.shape[0]) not satisifed")
    de_ = fw_asfortranarray(de, fwr_real_x8_t_enum, 1, de_shape, False, False)
    if not (0 <= ne <= de_shape[0]):
        raise ValueError("(0 <= ne <= de.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    cp_ = fw_asfortranarray(cp, fwr_real_x8_t_enum, 1, cp_shape, False, False)
    if not (0 <= np__ <= cp_shape[0]):
        raise ValueError("(0 <= np__ <= cp.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= nest <= iwrk_shape[0]):
        raise ValueError("(0 <= nest <= iwrk.shape[0]) not satisifed")
    fc.concur(&iopt, &idim, &m, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(xx_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &ib, <fwr_real_x8_t*>np.PyArray_DATA(db_), &nb, &ie, <fwr_real_x8_t*>np.PyArray_DATA(de_), &ne, &k, &s, &nest, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), &nc, <fwr_real_x8_t*>np.PyArray_DATA(c_), &np__, <fwr_real_x8_t*>np.PyArray_DATA(cp_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &ier)
    return (iopt, idim, m, u_, mx, x_, xx_, w_, ib, db_, nb, ie, de_, ne, k, s, nest, n, t_, nc, c_, np__, cp_, fp, wrk_, lwrk, iwrk_, ier,)


cpdef object cualde(fwi_integer_t idim, object t, fwi_integer_t n, object c, fwi_integer_t nc, fwi_integer_t k1, fwr_real_x8_t u, object d, fwi_integer_t nd, fwi_integer_t ier):
    """cualde(idim, t, n, c, nc, k1, u, d, nd, ier) -> (idim, t, n, c, nc, k1, u, d, nd, ier)

    Parameters
    ----------
    idim : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    u : fwr_real_x8, intent inout
    d : fwr_real_x8, 1D array, dimension(nd), intent inout
    nd : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    idim : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    u : fwr_real_x8, intent inout
    d : fwr_real_x8, 1D array, dimension(nd), intent inout
    nd : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, d_
    cdef np.npy_intp t_shape[1], c_shape[1], d_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    d_ = fw_asfortranarray(d, fwr_real_x8_t_enum, 1, d_shape, False, False)
    if not (0 <= nd <= d_shape[0]):
        raise ValueError("(0 <= nd <= d.shape[0]) not satisifed")
    fc.cualde(&idim, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &k1, &u, <fwr_real_x8_t*>np.PyArray_DATA(d_), &nd, &ier)
    return (idim, t_, n, c_, nc, k1, u, d_, nd, ier,)


cpdef object curev(fwi_integer_t idim, object t, fwi_integer_t n, object c, fwi_integer_t nc, fwi_integer_t k, object u, fwi_integer_t m, object x, fwi_integer_t mx, fwi_integer_t ier):
    """curev(idim, t, n, c, nc, k, u, m, x, mx, ier) -> (idim, t, n, c, nc, k, u, m, x, mx, ier)

    Parameters
    ----------
    idim : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    k : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    idim : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    k : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, u_, x_
    cdef np.npy_intp t_shape[1], c_shape[1], u_shape[1], x_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    fc.curev(&idim, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &k, <fwr_real_x8_t*>np.PyArray_DATA(u_), &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), &mx, &ier)
    return (idim, t_, n, c_, nc, k, u_, m, x_, mx, ier,)


cpdef object curfit(fwi_integer_t iopt, fwi_integer_t m, object x, object y, object w, fwr_real_x8_t xb, fwr_real_x8_t xe, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwi_integer_t n, object t, object c, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t ier):
    """curfit(iopt, m, x, y, w, xb, xe, k, s, nest, n, t, c, fp, wrk, lwrk, iwrk, ier) -> (iopt, m, x, y, w, xb, xe, k, s, nest, n, t, c, fp, wrk, lwrk, iwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, w_, t_, c_, wrk_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nest <= c_shape[0]):
        raise ValueError("(0 <= nest <= c.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= nest <= iwrk_shape[0]):
        raise ValueError("(0 <= nest <= iwrk.shape[0]) not satisifed")
    fc.curfit(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &xb, &xe, &k, &s, &nest, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &ier)
    return (iopt, m, x_, y_, w_, xb, xe, k, s, nest, n, t_, c_, fp, wrk_, lwrk, iwrk_, ier,)


cpdef object dblint(object tx, fwi_integer_t nx, object ty, fwi_integer_t ny, object c, fwi_integer_t kx, fwi_integer_t ky, fwr_real_x8_t xb, fwr_real_x8_t xe, fwr_real_x8_t yb, fwr_real_x8_t ye, object wrk):
    """dblint(tx, nx, ty, ny, c, kx, ky, xb, xe, yb, ye, wrk) -> (fw_ret_arg, tx, nx, ty, ny, c, kx, ky, xb, xe, yb, ye, wrk)

    Parameters
    ----------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(nx+ny-kx-ky-2), intent inout

    Returns
    -------
    fw_ret_arg : fwr_real_x8, intent out
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(nx+ny-kx-ky-2), intent inout

    """
    cdef np.ndarray tx_, ty_, c_, wrk_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], wrk_shape[1]
    cdef fwr_real_x8_t fw_ret_arg
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    fw_ret_arg = fc.dblint(<fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, &xb, &xe, &yb, &ye, <fwr_real_x8_t*>np.PyArray_DATA(wrk_))
    return (fw_ret_arg, tx_, nx, ty_, ny, c_, kx, ky, xb, xe, yb, ye, wrk_,)


cpdef object evapol(object tu, fwi_integer_t nu, object tv, fwi_integer_t nv, object c, fwr_real_x8_t rad, fwr_real_x8_t x, fwr_real_x8_t y):
    """evapol(tu, nu, tv, nv, c, rad, x, y) -> (fw_ret_arg, tu, nu, tv, nv, c, rad, x, y)

    Parameters
    ----------
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nu-4)*(nv-4)), intent inout
    rad : fwr_real_x8, intent inout
    x : fwr_real_x8, intent inout
    y : fwr_real_x8, intent inout

    Returns
    -------
    fw_ret_arg : fwr_real_x8, intent out
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nu-4)*(nv-4)), intent inout
    rad : fwr_real_x8, intent inout
    x : fwr_real_x8, intent inout
    y : fwr_real_x8, intent inout

    """
    cdef np.ndarray tu_, tv_, c_
    cdef np.npy_intp tu_shape[1], tv_shape[1], c_shape[1]
    cdef fwr_real_x8_t fw_ret_arg
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nu <= tu_shape[0]):
        raise ValueError("(0 <= nu <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nv <= tv_shape[0]):
        raise ValueError("(0 <= nv <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    fw_ret_arg = fc.evapol(<fwr_real_x8_t*>np.PyArray_DATA(tu_), &nu, <fwr_real_x8_t*>np.PyArray_DATA(tv_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(c_), &rad, &x, &y)
    return (fw_ret_arg, tu_, nu, tv_, nv, c_, rad, x, y,)


cpdef object fourco(object t, fwi_integer_t n, object c, object alfa, fwi_integer_t m, object ress, object resc, object wrk1, object wrk2, fwi_integer_t ier):
    """fourco(t, n, c, alfa, m, ress, resc, wrk1, wrk2, ier) -> (t, n, c, alfa, m, ress, resc, wrk1, wrk2, ier)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    alfa : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    ress : fwr_real_x8, 1D array, dimension(m), intent inout
    resc : fwr_real_x8, 1D array, dimension(m), intent inout
    wrk1 : fwr_real_x8, 1D array, dimension(n), intent inout
    wrk2 : fwr_real_x8, 1D array, dimension(n), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    alfa : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    ress : fwr_real_x8, 1D array, dimension(m), intent inout
    resc : fwr_real_x8, 1D array, dimension(m), intent inout
    wrk1 : fwr_real_x8, 1D array, dimension(n), intent inout
    wrk2 : fwr_real_x8, 1D array, dimension(n), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, alfa_, ress_, resc_, wrk1_, wrk2_
    cdef np.npy_intp t_shape[1], c_shape[1], alfa_shape[1], ress_shape[1], resc_shape[1], wrk1_shape[1], wrk2_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    alfa_ = fw_asfortranarray(alfa, fwr_real_x8_t_enum, 1, alfa_shape, False, False)
    if not (0 <= m <= alfa_shape[0]):
        raise ValueError("(0 <= m <= alfa.shape[0]) not satisifed")
    ress_ = fw_asfortranarray(ress, fwr_real_x8_t_enum, 1, ress_shape, False, False)
    if not (0 <= m <= ress_shape[0]):
        raise ValueError("(0 <= m <= ress.shape[0]) not satisifed")
    resc_ = fw_asfortranarray(resc, fwr_real_x8_t_enum, 1, resc_shape, False, False)
    if not (0 <= m <= resc_shape[0]):
        raise ValueError("(0 <= m <= resc.shape[0]) not satisifed")
    wrk1_ = fw_asfortranarray(wrk1, fwr_real_x8_t_enum, 1, wrk1_shape, False, False)
    if not (0 <= n <= wrk1_shape[0]):
        raise ValueError("(0 <= n <= wrk1.shape[0]) not satisifed")
    wrk2_ = fw_asfortranarray(wrk2, fwr_real_x8_t_enum, 1, wrk2_shape, False, False)
    if not (0 <= n <= wrk2_shape[0]):
        raise ValueError("(0 <= n <= wrk2.shape[0]) not satisifed")
    fc.fourco(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), <fwr_real_x8_t*>np.PyArray_DATA(alfa_), &m, <fwr_real_x8_t*>np.PyArray_DATA(ress_), <fwr_real_x8_t*>np.PyArray_DATA(resc_), <fwr_real_x8_t*>np.PyArray_DATA(wrk1_), <fwr_real_x8_t*>np.PyArray_DATA(wrk2_), &ier)
    return (t_, n, c_, alfa_, m, ress_, resc_, wrk1_, wrk2_, ier,)


cpdef object fpader(object t, fwi_integer_t n, object c, fwi_integer_t k1, fwr_real_x8_t x, fwi_integer_t l, object d):
    """fpader(t, n, c, k1, x, l, d) -> (t, n, c, k1, x, l, d)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k1 : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    l : fwi_integer, intent inout
    d : fwr_real_x8, 1D array, dimension(k1), intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k1 : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    l : fwi_integer, intent inout
    d : fwr_real_x8, 1D array, dimension(k1), intent inout

    """
    cdef np.ndarray t_, c_, d_
    cdef np.npy_intp t_shape[1], c_shape[1], d_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    d_ = fw_asfortranarray(d, fwr_real_x8_t_enum, 1, d_shape, False, False)
    if not (0 <= k1 <= d_shape[0]):
        raise ValueError("(0 <= k1 <= d.shape[0]) not satisifed")
    fc.fpader(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k1, &x, &l, <fwr_real_x8_t*>np.PyArray_DATA(d_))
    return (t_, n, c_, k1, x, l, d_,)


cpdef object fpadno(fwi_integer_t maxtr, object up, object left, object right, object info, fwi_integer_t count, fwi_integer_t merk, object jbind, fwi_integer_t n1, fwi_integer_t ier):
    """fpadno(maxtr, up, left, right, info, count, merk, jbind, n1, ier) -> (maxtr, up, left, right, info, count, merk, jbind, n1, ier)

    Parameters
    ----------
    maxtr : fwi_integer, intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    info : fwi_integer, 1D array, dimension(maxtr), intent inout
    count : fwi_integer, intent inout
    merk : fwi_integer, intent inout
    jbind : fwi_integer, 1D array, dimension(n1), intent inout
    n1 : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    maxtr : fwi_integer, intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    info : fwi_integer, 1D array, dimension(maxtr), intent inout
    count : fwi_integer, intent inout
    merk : fwi_integer, intent inout
    jbind : fwi_integer, 1D array, dimension(n1), intent inout
    n1 : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray up_, left_, right_, info_, jbind_
    cdef np.npy_intp up_shape[1], left_shape[1], right_shape[1], info_shape[1], jbind_shape[1]
    up_ = fw_asfortranarray(up, fwi_integer_t_enum, 1, up_shape, False, False)
    if not (0 <= maxtr <= up_shape[0]):
        raise ValueError("(0 <= maxtr <= up.shape[0]) not satisifed")
    left_ = fw_asfortranarray(left, fwi_integer_t_enum, 1, left_shape, False, False)
    if not (0 <= maxtr <= left_shape[0]):
        raise ValueError("(0 <= maxtr <= left.shape[0]) not satisifed")
    right_ = fw_asfortranarray(right, fwi_integer_t_enum, 1, right_shape, False, False)
    if not (0 <= maxtr <= right_shape[0]):
        raise ValueError("(0 <= maxtr <= right.shape[0]) not satisifed")
    info_ = fw_asfortranarray(info, fwi_integer_t_enum, 1, info_shape, False, False)
    if not (0 <= maxtr <= info_shape[0]):
        raise ValueError("(0 <= maxtr <= info.shape[0]) not satisifed")
    jbind_ = fw_asfortranarray(jbind, fwi_integer_t_enum, 1, jbind_shape, False, False)
    if not (0 <= n1 <= jbind_shape[0]):
        raise ValueError("(0 <= n1 <= jbind.shape[0]) not satisifed")
    fc.fpadno(&maxtr, <fwi_integer_t*>np.PyArray_DATA(up_), <fwi_integer_t*>np.PyArray_DATA(left_), <fwi_integer_t*>np.PyArray_DATA(right_), <fwi_integer_t*>np.PyArray_DATA(info_), &count, &merk, <fwi_integer_t*>np.PyArray_DATA(jbind_), &n1, &ier)
    return (maxtr, up_, left_, right_, info_, count, merk, jbind_, n1, ier,)


cpdef object fpadpo(fwi_integer_t idim, object t, fwi_integer_t n, object c, fwi_integer_t nc, fwi_integer_t k, object cp, fwi_integer_t np__, object cc, object t1, object t2):
    """fpadpo(idim, t, n, c, nc, k, cp, np__, cc, t1, t2) -> (idim, t, n, c, nc, k, cp, np__, cc, t1, t2)

    Parameters
    ----------
    idim : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    k : fwi_integer, intent inout
    cp : fwr_real_x8, 1D array, dimension(np), intent inout
    np__ : fwi_integer, intent inout
    cc : fwr_real_x8, 1D array, dimension(nc), intent inout
    t1 : fwr_real_x8, 1D array, dimension(n), intent inout
    t2 : fwr_real_x8, 1D array, dimension(n), intent inout

    Returns
    -------
    idim : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    k : fwi_integer, intent inout
    cp : fwr_real_x8, 1D array, dimension(np), intent inout
    np__ : fwi_integer, intent inout
    cc : fwr_real_x8, 1D array, dimension(nc), intent inout
    t1 : fwr_real_x8, 1D array, dimension(n), intent inout
    t2 : fwr_real_x8, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray t_, c_, cp_, cc_, t1_, t2_
    cdef np.npy_intp t_shape[1], c_shape[1], cp_shape[1], cc_shape[1], t1_shape[1], t2_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    cp_ = fw_asfortranarray(cp, fwr_real_x8_t_enum, 1, cp_shape, False, False)
    if not (0 <= np__ <= cp_shape[0]):
        raise ValueError("(0 <= np__ <= cp.shape[0]) not satisifed")
    cc_ = fw_asfortranarray(cc, fwr_real_x8_t_enum, 1, cc_shape, False, False)
    if not (0 <= nc <= cc_shape[0]):
        raise ValueError("(0 <= nc <= cc.shape[0]) not satisifed")
    t1_ = fw_asfortranarray(t1, fwr_real_x8_t_enum, 1, t1_shape, False, False)
    if not (0 <= n <= t1_shape[0]):
        raise ValueError("(0 <= n <= t1.shape[0]) not satisifed")
    t2_ = fw_asfortranarray(t2, fwr_real_x8_t_enum, 1, t2_shape, False, False)
    if not (0 <= n <= t2_shape[0]):
        raise ValueError("(0 <= n <= t2.shape[0]) not satisifed")
    fc.fpadpo(&idim, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &k, <fwr_real_x8_t*>np.PyArray_DATA(cp_), &np__, <fwr_real_x8_t*>np.PyArray_DATA(cc_), <fwr_real_x8_t*>np.PyArray_DATA(t1_), <fwr_real_x8_t*>np.PyArray_DATA(t2_))
    return (idim, t_, n, c_, nc, k, cp_, np__, cc_, t1_, t2_,)


cpdef object fpback(object a, object z, fwi_integer_t n, fwi_integer_t k, object c, fwi_integer_t nest):
    """fpback(a, z, n, k, c, nest) -> (a, z, n, k, c, nest)

    Parameters
    ----------
    a : fwr_real_x8, 2D array, dimension(nest, k), intent inout
    z : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    nest : fwi_integer, intent inout

    Returns
    -------
    a : fwr_real_x8, 2D array, dimension(nest, k), intent inout
    z : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    nest : fwi_integer, intent inout

    """
    cdef np.ndarray a_, z_, c_
    cdef np.npy_intp a_shape[2], z_shape[1], c_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if nest != a_shape[0]:
        raise ValueError("(nest == a.shape[0]) not satisifed")
    if not (0 <= k <= a_shape[1]):
        raise ValueError("(0 <= k <= a.shape[1]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= n <= z_shape[0]):
        raise ValueError("(0 <= n <= z.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    fc.fpback(<fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(z_), &n, &k, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nest)
    return (a_, z_, n, k, c_, nest,)


cpdef object fpbacp(object a, object b, object z, fwi_integer_t n, fwi_integer_t k, object c, fwi_integer_t k1, fwi_integer_t nest):
    """fpbacp(a, b, z, n, k, c, k1, nest) -> (a, b, z, n, k, c, k1, nest)

    Parameters
    ----------
    a : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k), intent inout
    z : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k1 : fwi_integer, intent inout
    nest : fwi_integer, intent inout

    Returns
    -------
    a : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k), intent inout
    z : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k1 : fwi_integer, intent inout
    nest : fwi_integer, intent inout

    """
    cdef np.ndarray a_, b_, z_, c_
    cdef np.npy_intp a_shape[2], b_shape[2], z_shape[1], c_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if nest != a_shape[0]:
        raise ValueError("(nest == a.shape[0]) not satisifed")
    if not (0 <= k1 <= a_shape[1]):
        raise ValueError("(0 <= k1 <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if nest != b_shape[0]:
        raise ValueError("(nest == b.shape[0]) not satisifed")
    if not (0 <= k <= b_shape[1]):
        raise ValueError("(0 <= k <= b.shape[1]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= n <= z_shape[0]):
        raise ValueError("(0 <= n <= z.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    fc.fpbacp(<fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(z_), &n, &k, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k1, &nest)
    return (a_, b_, z_, n, k, c_, k1, nest,)


cpdef object fpbfou(object t, fwi_integer_t n, fwr_real_x8_t par, object ress, object resc):
    """fpbfou(t, n, par, ress, resc) -> (t, n, par, ress, resc)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    par : fwr_real_x8, intent inout
    ress : fwr_real_x8, 1D array, dimension(n), intent inout
    resc : fwr_real_x8, 1D array, dimension(n), intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    par : fwr_real_x8, intent inout
    ress : fwr_real_x8, 1D array, dimension(n), intent inout
    resc : fwr_real_x8, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray t_, ress_, resc_
    cdef np.npy_intp t_shape[1], ress_shape[1], resc_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    ress_ = fw_asfortranarray(ress, fwr_real_x8_t_enum, 1, ress_shape, False, False)
    if not (0 <= n <= ress_shape[0]):
        raise ValueError("(0 <= n <= ress.shape[0]) not satisifed")
    resc_ = fw_asfortranarray(resc, fwr_real_x8_t_enum, 1, resc_shape, False, False)
    if not (0 <= n <= resc_shape[0]):
        raise ValueError("(0 <= n <= resc.shape[0]) not satisifed")
    fc.fpbfou(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, &par, <fwr_real_x8_t*>np.PyArray_DATA(ress_), <fwr_real_x8_t*>np.PyArray_DATA(resc_))
    return (t_, n, par, ress_, resc_,)


cpdef object fpbisp(object tx, fwi_integer_t nx, object ty, fwi_integer_t ny, object c, fwi_integer_t kx, fwi_integer_t ky, object x, fwi_integer_t mx, object y, fwi_integer_t my, object z, object wx, object wy, object lx, object ly):
    """fpbisp(tx, nx, ty, ny, c, kx, ky, x, mx, y, my, z, wx, wy, lx, ly) -> (tx, nx, ty, ny, c, kx, ky, x, mx, y, my, z, wx, wy, lx, ly)

    Parameters
    ----------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mx*my), intent inout
    wx : fwr_real_x8, 2D array, dimension(mx, kx+1), intent inout
    wy : fwr_real_x8, 2D array, dimension(my, ky+1), intent inout
    lx : fwi_integer, 1D array, dimension(mx), intent inout
    ly : fwi_integer, 1D array, dimension(my), intent inout

    Returns
    -------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mx*my), intent inout
    wx : fwr_real_x8, 2D array, dimension(mx, kx+1), intent inout
    wy : fwr_real_x8, 2D array, dimension(my, ky+1), intent inout
    lx : fwi_integer, 1D array, dimension(mx), intent inout
    ly : fwi_integer, 1D array, dimension(my), intent inout

    """
    cdef np.ndarray tx_, ty_, c_, x_, y_, z_, wx_, wy_, lx_, ly_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], x_shape[1], y_shape[1], z_shape[1], wx_shape[2], wy_shape[2], lx_shape[1], ly_shape[1]
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= my <= y_shape[0]):
        raise ValueError("(0 <= my <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    wx_ = fw_asfortranarray(wx, fwr_real_x8_t_enum, 2, wx_shape, False, False)
    if mx != wx_shape[0]:
        raise ValueError("(mx == wx.shape[0]) not satisifed")
    wy_ = fw_asfortranarray(wy, fwr_real_x8_t_enum, 2, wy_shape, False, False)
    if my != wy_shape[0]:
        raise ValueError("(my == wy.shape[0]) not satisifed")
    lx_ = fw_asfortranarray(lx, fwi_integer_t_enum, 1, lx_shape, False, False)
    if not (0 <= mx <= lx_shape[0]):
        raise ValueError("(0 <= mx <= lx.shape[0]) not satisifed")
    ly_ = fw_asfortranarray(ly, fwi_integer_t_enum, 1, ly_shape, False, False)
    if not (0 <= my <= ly_shape[0]):
        raise ValueError("(0 <= my <= ly.shape[0]) not satisifed")
    fc.fpbisp(<fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, <fwr_real_x8_t*>np.PyArray_DATA(x_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(y_), &my, <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(wx_), <fwr_real_x8_t*>np.PyArray_DATA(wy_), <fwi_integer_t*>np.PyArray_DATA(lx_), <fwi_integer_t*>np.PyArray_DATA(ly_))
    return (tx_, nx, ty_, ny, c_, kx, ky, x_, mx, y_, my, z_, wx_, wy_, lx_, ly_,)


cpdef object fpbspl(object t, fwi_integer_t n, fwi_integer_t k, fwr_real_x8_t x, fwi_integer_t l, object h):
    """fpbspl(t, n, k, x, l, h) -> (t, n, k, x, l, h)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    l : fwi_integer, intent inout
    h : fwr_real_x8, 1D array, dimension(20), intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    l : fwi_integer, intent inout
    h : fwr_real_x8, 1D array, dimension(20), intent inout

    """
    cdef np.ndarray t_, h_
    cdef np.npy_intp t_shape[1], h_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    h_ = fw_asfortranarray(h, fwr_real_x8_t_enum, 1, h_shape, False, False)
    if not (0 <= 20 <= h_shape[0]):
        raise ValueError("(0 <= 20 <= h.shape[0]) not satisifed")
    fc.fpbspl(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, &k, &x, &l, <fwr_real_x8_t*>np.PyArray_DATA(h_))
    return (t_, n, k, x, l, h_,)


cpdef object fpchec(object x, fwi_integer_t m, object t, fwi_integer_t n, fwi_integer_t k, fwi_integer_t ier):
    """fpchec(x, m, t, n, k, ier) -> (x, m, t, n, k, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, t_
    cdef np.npy_intp x_shape[1], t_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    fc.fpchec(<fwr_real_x8_t*>np.PyArray_DATA(x_), &m, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, &k, &ier)
    return (x_, m, t_, n, k, ier,)


cpdef object fpched(object x, fwi_integer_t m, object t, fwi_integer_t n, fwi_integer_t k, fwi_integer_t ib, fwi_integer_t ie, fwi_integer_t ier):
    """fpched(x, m, t, n, k, ib, ie, ier) -> (x, m, t, n, k, ib, ie, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    ib : fwi_integer, intent inout
    ie : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    ib : fwi_integer, intent inout
    ie : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, t_
    cdef np.npy_intp x_shape[1], t_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    fc.fpched(<fwr_real_x8_t*>np.PyArray_DATA(x_), &m, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, &k, &ib, &ie, &ier)
    return (x_, m, t_, n, k, ib, ie, ier,)


cpdef object fpchep(object x, fwi_integer_t m, object t, fwi_integer_t n, fwi_integer_t k, fwi_integer_t ier):
    """fpchep(x, m, t, n, k, ier) -> (x, m, t, n, k, ier)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, t_
    cdef np.npy_intp x_shape[1], t_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    fc.fpchep(<fwr_real_x8_t*>np.PyArray_DATA(x_), &m, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, &k, &ier)
    return (x_, m, t_, n, k, ier,)


cpdef object fpclos(fwi_integer_t iopt, fwi_integer_t idim, fwi_integer_t m, object u, fwi_integer_t mx, object x, object w, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t k1, fwi_integer_t k2, fwi_integer_t n, object t, fwi_integer_t nc, object c, fwr_real_x8_t fp, object fpint, object z, object a1, object a2, object b, object g1, object g2, object q, object nrdata, fwi_integer_t ier):
    """fpclos(iopt, idim, m, u, mx, x, w, k, s, nest, tol, maxit, k1, k2, n, t, nc, c, fp, fpint, z, a1, a2, b, g1, g2, q, nrdata, ier) -> (iopt, idim, m, u, mx, x, w, k, s, nest, tol, maxit, k1, k2, n, t, nc, c, fp, fpint, z, a1, a2, b, g1, g2, q, nrdata, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nc), intent inout
    a1 : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    a2 : fwr_real_x8, 2D array, dimension(nest, k), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g1 : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g2 : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nc), intent inout
    a1 : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    a2 : fwr_real_x8, 2D array, dimension(nest, k), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g1 : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g2 : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray u_, x_, w_, t_, c_, fpint_, z_, a1_, a2_, b_, g1_, g2_, q_, nrdata_
    cdef np.npy_intp u_shape[1], x_shape[1], w_shape[1], t_shape[1], c_shape[1], fpint_shape[1], z_shape[1], a1_shape[2], a2_shape[2], b_shape[2], g1_shape[2], g2_shape[2], q_shape[2], nrdata_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= nest <= fpint_shape[0]):
        raise ValueError("(0 <= nest <= fpint.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= nc <= z_shape[0]):
        raise ValueError("(0 <= nc <= z.shape[0]) not satisifed")
    a1_ = fw_asfortranarray(a1, fwr_real_x8_t_enum, 2, a1_shape, False, False)
    if nest != a1_shape[0]:
        raise ValueError("(nest == a1.shape[0]) not satisifed")
    if not (0 <= k1 <= a1_shape[1]):
        raise ValueError("(0 <= k1 <= a1.shape[1]) not satisifed")
    a2_ = fw_asfortranarray(a2, fwr_real_x8_t_enum, 2, a2_shape, False, False)
    if nest != a2_shape[0]:
        raise ValueError("(nest == a2.shape[0]) not satisifed")
    if not (0 <= k <= a2_shape[1]):
        raise ValueError("(0 <= k <= a2.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if nest != b_shape[0]:
        raise ValueError("(nest == b.shape[0]) not satisifed")
    if not (0 <= k2 <= b_shape[1]):
        raise ValueError("(0 <= k2 <= b.shape[1]) not satisifed")
    g1_ = fw_asfortranarray(g1, fwr_real_x8_t_enum, 2, g1_shape, False, False)
    if nest != g1_shape[0]:
        raise ValueError("(nest == g1.shape[0]) not satisifed")
    if not (0 <= k2 <= g1_shape[1]):
        raise ValueError("(0 <= k2 <= g1.shape[1]) not satisifed")
    g2_ = fw_asfortranarray(g2, fwr_real_x8_t_enum, 2, g2_shape, False, False)
    if nest != g2_shape[0]:
        raise ValueError("(nest == g2.shape[0]) not satisifed")
    if not (0 <= k1 <= g2_shape[1]):
        raise ValueError("(0 <= k1 <= g2.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if m != q_shape[0]:
        raise ValueError("(m == q.shape[0]) not satisifed")
    if not (0 <= k1 <= q_shape[1]):
        raise ValueError("(0 <= k1 <= q.shape[1]) not satisifed")
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, False, False)
    if not (0 <= nest <= nrdata_shape[0]):
        raise ValueError("(0 <= nest <= nrdata.shape[0]) not satisifed")
    fc.fpclos(&iopt, &idim, &m, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &k, &s, &nest, &tol, &maxit, &k1, &k2, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), &nc, <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(a1_), <fwr_real_x8_t*>np.PyArray_DATA(a2_), <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(g1_), <fwr_real_x8_t*>np.PyArray_DATA(g2_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &ier)
    return (iopt, idim, m, u_, mx, x_, w_, k, s, nest, tol, maxit, k1, k2, n, t_, nc, c_, fp, fpint_, z_, a1_, a2_, b_, g1_, g2_, q_, nrdata_, ier,)


cpdef object fpcoco(fwi_integer_t iopt, fwi_integer_t m, object x, object y, object w, object v, fwr_real_x8_t s, fwi_integer_t nest, fwi_integer_t maxtr, fwi_integer_t maxbin, fwi_integer_t n, object t, object c, fwr_real_x8_t sq, object sx, object bind, object e, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """fpcoco(iopt, m, x, y, w, v, s, nest, maxtr, maxbin, n, t, c, sq, sx, bind, e, wrk, lwrk, iwrk, kwrk, ier) -> (iopt, m, x, y, w, v, s, nest, maxtr, maxbin, n, t, c, sq, sx, bind, e, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    v : fwr_real_x8, 1D array, dimension(m), intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    maxtr : fwi_integer, intent inout
    maxbin : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    sq : fwr_real_x8, intent inout
    sx : fwr_real_x8, 1D array, dimension(m), intent inout
    bind : fwl_logical, 1D array, dimension(nest), intent inout
    e : fwr_real_x8, 1D array, dimension(nest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    v : fwr_real_x8, 1D array, dimension(m), intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    maxtr : fwi_integer, intent inout
    maxbin : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    sq : fwr_real_x8, intent inout
    sx : fwr_real_x8, 1D array, dimension(m), intent inout
    bind : fwl_logical, 1D array, dimension(nest), intent inout
    e : fwr_real_x8, 1D array, dimension(nest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, w_, v_, t_, c_, sx_, bind_, e_, wrk_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], v_shape[1], t_shape[1], c_shape[1], sx_shape[1], bind_shape[1], e_shape[1], wrk_shape[1], iwrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= m <= v_shape[0]):
        raise ValueError("(0 <= m <= v.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nest <= c_shape[0]):
        raise ValueError("(0 <= nest <= c.shape[0]) not satisifed")
    sx_ = fw_asfortranarray(sx, fwr_real_x8_t_enum, 1, sx_shape, False, False)
    if not (0 <= m <= sx_shape[0]):
        raise ValueError("(0 <= m <= sx.shape[0]) not satisifed")
    bind_ = fw_asfortranarray(bind, fwl_logical_t_enum, 1, bind_shape, False, False)
    if not (0 <= nest <= bind_shape[0]):
        raise ValueError("(0 <= nest <= bind.shape[0]) not satisifed")
    e_ = fw_asfortranarray(e, fwr_real_x8_t_enum, 1, e_shape, False, False)
    if not (0 <= nest <= e_shape[0]):
        raise ValueError("(0 <= nest <= e.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.fpcoco(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), <fwr_real_x8_t*>np.PyArray_DATA(v_), &s, &nest, &maxtr, &maxbin, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &sq, <fwr_real_x8_t*>np.PyArray_DATA(sx_), <fwl_logical_t*>np.PyArray_DATA(bind_), <fwr_real_x8_t*>np.PyArray_DATA(e_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt, m, x_, y_, w_, v_, s, nest, maxtr, maxbin, n, t_, c_, sq, sx_, bind_, e_, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object fpcons(fwi_integer_t iopt, fwi_integer_t idim, fwi_integer_t m, object u, fwi_integer_t mx, object x, object w, fwi_integer_t ib, fwi_integer_t ie, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t k1, fwi_integer_t k2, fwi_integer_t n, object t, fwi_integer_t nc, object c, fwr_real_x8_t fp, object fpint, object z, object a, object b, object g, object q, object nrdata, fwi_integer_t ier):
    """fpcons(iopt, idim, m, u, mx, x, w, ib, ie, k, s, nest, tol, maxit, k1, k2, n, t, nc, c, fp, fpint, z, a, b, g, q, nrdata, ier) -> (iopt, idim, m, u, mx, x, w, ib, ie, k, s, nest, tol, maxit, k1, k2, n, t, nc, c, fp, fpint, z, a, b, g, q, nrdata, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    ib : fwi_integer, intent inout
    ie : fwi_integer, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nc), intent inout
    a : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    ib : fwi_integer, intent inout
    ie : fwi_integer, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nc), intent inout
    a : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray u_, x_, w_, t_, c_, fpint_, z_, a_, b_, g_, q_, nrdata_
    cdef np.npy_intp u_shape[1], x_shape[1], w_shape[1], t_shape[1], c_shape[1], fpint_shape[1], z_shape[1], a_shape[2], b_shape[2], g_shape[2], q_shape[2], nrdata_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= nest <= fpint_shape[0]):
        raise ValueError("(0 <= nest <= fpint.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= nc <= z_shape[0]):
        raise ValueError("(0 <= nc <= z.shape[0]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if nest != a_shape[0]:
        raise ValueError("(nest == a.shape[0]) not satisifed")
    if not (0 <= k1 <= a_shape[1]):
        raise ValueError("(0 <= k1 <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if nest != b_shape[0]:
        raise ValueError("(nest == b.shape[0]) not satisifed")
    if not (0 <= k2 <= b_shape[1]):
        raise ValueError("(0 <= k2 <= b.shape[1]) not satisifed")
    g_ = fw_asfortranarray(g, fwr_real_x8_t_enum, 2, g_shape, False, False)
    if nest != g_shape[0]:
        raise ValueError("(nest == g.shape[0]) not satisifed")
    if not (0 <= k2 <= g_shape[1]):
        raise ValueError("(0 <= k2 <= g.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if m != q_shape[0]:
        raise ValueError("(m == q.shape[0]) not satisifed")
    if not (0 <= k1 <= q_shape[1]):
        raise ValueError("(0 <= k1 <= q.shape[1]) not satisifed")
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, False, False)
    if not (0 <= nest <= nrdata_shape[0]):
        raise ValueError("(0 <= nest <= nrdata.shape[0]) not satisifed")
    fc.fpcons(&iopt, &idim, &m, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &ib, &ie, &k, &s, &nest, &tol, &maxit, &k1, &k2, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), &nc, <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(g_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &ier)
    return (iopt, idim, m, u_, mx, x_, w_, ib, ie, k, s, nest, tol, maxit, k1, k2, n, t_, nc, c_, fp, fpint_, z_, a_, b_, g_, q_, nrdata_, ier,)


cpdef object fpcosp(fwi_integer_t m, object x, object y, object w, fwi_integer_t n, object t, object e, fwi_integer_t maxtr, fwi_integer_t maxbin, object c, fwr_real_x8_t sq, object sx, object bind, fwi_integer_t nm, fwi_integer_t mb, object a, object b, object const, object z, object zz, object u, object q, object info, object up, object left, object right, object jbind, object ibind, fwi_integer_t ier):
    """fpcosp(m, x, y, w, n, t, e, maxtr, maxbin, c, sq, sx, bind, nm, mb, a, b, const, z, zz, u, q, info, up, left, right, jbind, ibind, ier) -> (m, x, y, w, n, t, e, maxtr, maxbin, c, sq, sx, bind, nm, mb, a, b, const, z, zz, u, q, info, up, left, right, jbind, ibind, ier)

    Parameters
    ----------
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    e : fwr_real_x8, 1D array, dimension(n), intent inout
    maxtr : fwi_integer, intent inout
    maxbin : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    sq : fwr_real_x8, intent inout
    sx : fwr_real_x8, 1D array, dimension(m), intent inout
    bind : fwl_logical, 1D array, dimension(n), intent inout
    nm : fwi_integer, intent inout
    mb : fwi_integer, intent inout
    a : fwr_real_x8, 2D array, dimension(n, 4), intent inout
    b : fwr_real_x8, 2D array, dimension(nm, maxbin), intent inout
    const : fwr_real_x8, 1D array, dimension(n), intent inout
    z : fwr_real_x8, 1D array, dimension(n), intent inout
    zz : fwr_real_x8, 1D array, dimension(n), intent inout
    u : fwr_real_x8, 1D array, dimension(maxbin), intent inout
    q : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    info : fwi_integer, 1D array, dimension(maxtr), intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    jbind : fwi_integer, 1D array, dimension(mb), intent inout
    ibind : fwi_integer, 1D array, dimension(mb), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    e : fwr_real_x8, 1D array, dimension(n), intent inout
    maxtr : fwi_integer, intent inout
    maxbin : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    sq : fwr_real_x8, intent inout
    sx : fwr_real_x8, 1D array, dimension(m), intent inout
    bind : fwl_logical, 1D array, dimension(n), intent inout
    nm : fwi_integer, intent inout
    mb : fwi_integer, intent inout
    a : fwr_real_x8, 2D array, dimension(n, 4), intent inout
    b : fwr_real_x8, 2D array, dimension(nm, maxbin), intent inout
    const : fwr_real_x8, 1D array, dimension(n), intent inout
    z : fwr_real_x8, 1D array, dimension(n), intent inout
    zz : fwr_real_x8, 1D array, dimension(n), intent inout
    u : fwr_real_x8, 1D array, dimension(maxbin), intent inout
    q : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    info : fwi_integer, 1D array, dimension(maxtr), intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    jbind : fwi_integer, 1D array, dimension(mb), intent inout
    ibind : fwi_integer, 1D array, dimension(mb), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, w_, t_, e_, c_, sx_, bind_, a_, b_, const_, z_, zz_, u_, q_, info_, up_, left_, right_, jbind_, ibind_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], e_shape[1], c_shape[1], sx_shape[1], bind_shape[1], a_shape[2], b_shape[2], const_shape[1], z_shape[1], zz_shape[1], u_shape[1], q_shape[2], info_shape[1], up_shape[1], left_shape[1], right_shape[1], jbind_shape[1], ibind_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    e_ = fw_asfortranarray(e, fwr_real_x8_t_enum, 1, e_shape, False, False)
    if not (0 <= n <= e_shape[0]):
        raise ValueError("(0 <= n <= e.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    sx_ = fw_asfortranarray(sx, fwr_real_x8_t_enum, 1, sx_shape, False, False)
    if not (0 <= m <= sx_shape[0]):
        raise ValueError("(0 <= m <= sx.shape[0]) not satisifed")
    bind_ = fw_asfortranarray(bind, fwl_logical_t_enum, 1, bind_shape, False, False)
    if not (0 <= n <= bind_shape[0]):
        raise ValueError("(0 <= n <= bind.shape[0]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= 4 <= a_shape[1]):
        raise ValueError("(0 <= 4 <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if nm != b_shape[0]:
        raise ValueError("(nm == b.shape[0]) not satisifed")
    if not (0 <= maxbin <= b_shape[1]):
        raise ValueError("(0 <= maxbin <= b.shape[1]) not satisifed")
    const_ = fw_asfortranarray(const, fwr_real_x8_t_enum, 1, const_shape, False, False)
    if not (0 <= n <= const_shape[0]):
        raise ValueError("(0 <= n <= const.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= n <= z_shape[0]):
        raise ValueError("(0 <= n <= z.shape[0]) not satisifed")
    zz_ = fw_asfortranarray(zz, fwr_real_x8_t_enum, 1, zz_shape, False, False)
    if not (0 <= n <= zz_shape[0]):
        raise ValueError("(0 <= n <= zz.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= maxbin <= u_shape[0]):
        raise ValueError("(0 <= maxbin <= u.shape[0]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if m != q_shape[0]:
        raise ValueError("(m == q.shape[0]) not satisifed")
    if not (0 <= 4 <= q_shape[1]):
        raise ValueError("(0 <= 4 <= q.shape[1]) not satisifed")
    info_ = fw_asfortranarray(info, fwi_integer_t_enum, 1, info_shape, False, False)
    if not (0 <= maxtr <= info_shape[0]):
        raise ValueError("(0 <= maxtr <= info.shape[0]) not satisifed")
    up_ = fw_asfortranarray(up, fwi_integer_t_enum, 1, up_shape, False, False)
    if not (0 <= maxtr <= up_shape[0]):
        raise ValueError("(0 <= maxtr <= up.shape[0]) not satisifed")
    left_ = fw_asfortranarray(left, fwi_integer_t_enum, 1, left_shape, False, False)
    if not (0 <= maxtr <= left_shape[0]):
        raise ValueError("(0 <= maxtr <= left.shape[0]) not satisifed")
    right_ = fw_asfortranarray(right, fwi_integer_t_enum, 1, right_shape, False, False)
    if not (0 <= maxtr <= right_shape[0]):
        raise ValueError("(0 <= maxtr <= right.shape[0]) not satisifed")
    jbind_ = fw_asfortranarray(jbind, fwi_integer_t_enum, 1, jbind_shape, False, False)
    if not (0 <= mb <= jbind_shape[0]):
        raise ValueError("(0 <= mb <= jbind.shape[0]) not satisifed")
    ibind_ = fw_asfortranarray(ibind, fwi_integer_t_enum, 1, ibind_shape, False, False)
    if not (0 <= mb <= ibind_shape[0]):
        raise ValueError("(0 <= mb <= ibind.shape[0]) not satisifed")
    fc.fpcosp(&m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(e_), &maxtr, &maxbin, <fwr_real_x8_t*>np.PyArray_DATA(c_), &sq, <fwr_real_x8_t*>np.PyArray_DATA(sx_), <fwl_logical_t*>np.PyArray_DATA(bind_), &nm, &mb, <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(const_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(zz_), <fwr_real_x8_t*>np.PyArray_DATA(u_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwi_integer_t*>np.PyArray_DATA(info_), <fwi_integer_t*>np.PyArray_DATA(up_), <fwi_integer_t*>np.PyArray_DATA(left_), <fwi_integer_t*>np.PyArray_DATA(right_), <fwi_integer_t*>np.PyArray_DATA(jbind_), <fwi_integer_t*>np.PyArray_DATA(ibind_), &ier)
    return (m, x_, y_, w_, n, t_, e_, maxtr, maxbin, c_, sq, sx_, bind_, nm, mb, a_, b_, const_, z_, zz_, u_, q_, info_, up_, left_, right_, jbind_, ibind_, ier,)


cpdef object fpcsin(fwr_real_x8_t a, fwr_real_x8_t b, fwr_real_x8_t par, fwr_real_x8_t sia, fwr_real_x8_t coa, fwr_real_x8_t sib, fwr_real_x8_t cob, fwr_real_x8_t ress, fwr_real_x8_t resc):
    """fpcsin(a, b, par, sia, coa, sib, cob, ress, resc) -> (a, b, par, sia, coa, sib, cob, ress, resc)

    Parameters
    ----------
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout
    par : fwr_real_x8, intent inout
    sia : fwr_real_x8, intent inout
    coa : fwr_real_x8, intent inout
    sib : fwr_real_x8, intent inout
    cob : fwr_real_x8, intent inout
    ress : fwr_real_x8, intent inout
    resc : fwr_real_x8, intent inout

    Returns
    -------
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout
    par : fwr_real_x8, intent inout
    sia : fwr_real_x8, intent inout
    coa : fwr_real_x8, intent inout
    sib : fwr_real_x8, intent inout
    cob : fwr_real_x8, intent inout
    ress : fwr_real_x8, intent inout
    resc : fwr_real_x8, intent inout

    """
    fc.fpcsin(&a, &b, &par, &sia, &coa, &sib, &cob, &ress, &resc)
    return (a, b, par, sia, coa, sib, cob, ress, resc,)


cpdef object fpcurf(fwi_integer_t iopt, object x, object y, object w, fwi_integer_t m, fwr_real_x8_t xb, fwr_real_x8_t xe, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t k1, fwi_integer_t k2, fwi_integer_t n, object t, object c, fwr_real_x8_t fp, object fpint, object z, object a, object b, object g, object q, object nrdata, fwi_integer_t ier):
    """fpcurf(iopt, x, y, w, m, xb, xe, k, s, nest, tol, maxit, k1, k2, n, t, c, fp, fpint, z, a, b, g, q, nrdata, ier) -> (iopt, x, y, w, m, xb, xe, k, s, nest, tol, maxit, k1, k2, n, t, c, fp, fpint, z, a, b, g, q, nrdata, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nest), intent inout
    a : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nest), intent inout
    a : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, w_, t_, c_, fpint_, z_, a_, b_, g_, q_, nrdata_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], c_shape[1], fpint_shape[1], z_shape[1], a_shape[2], b_shape[2], g_shape[2], q_shape[2], nrdata_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nest <= c_shape[0]):
        raise ValueError("(0 <= nest <= c.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= nest <= fpint_shape[0]):
        raise ValueError("(0 <= nest <= fpint.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= nest <= z_shape[0]):
        raise ValueError("(0 <= nest <= z.shape[0]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if nest != a_shape[0]:
        raise ValueError("(nest == a.shape[0]) not satisifed")
    if not (0 <= k1 <= a_shape[1]):
        raise ValueError("(0 <= k1 <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if nest != b_shape[0]:
        raise ValueError("(nest == b.shape[0]) not satisifed")
    if not (0 <= k2 <= b_shape[1]):
        raise ValueError("(0 <= k2 <= b.shape[1]) not satisifed")
    g_ = fw_asfortranarray(g, fwr_real_x8_t_enum, 2, g_shape, False, False)
    if nest != g_shape[0]:
        raise ValueError("(nest == g.shape[0]) not satisifed")
    if not (0 <= k2 <= g_shape[1]):
        raise ValueError("(0 <= k2 <= g.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if m != q_shape[0]:
        raise ValueError("(m == q.shape[0]) not satisifed")
    if not (0 <= k1 <= q_shape[1]):
        raise ValueError("(0 <= k1 <= q.shape[1]) not satisifed")
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, False, False)
    if not (0 <= nest <= nrdata_shape[0]):
        raise ValueError("(0 <= nest <= nrdata.shape[0]) not satisifed")
    fc.fpcurf(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &m, &xb, &xe, &k, &s, &nest, &tol, &maxit, &k1, &k2, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(g_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &ier)
    return (iopt, x_, y_, w_, m, xb, xe, k, s, nest, tol, maxit, k1, k2, n, t_, c_, fp, fpint_, z_, a_, b_, g_, q_, nrdata_, ier,)


cpdef object fpcuro(fwr_real_x8_t a, fwr_real_x8_t b, fwr_real_x8_t c, fwr_real_x8_t d, object x, fwi_integer_t n):
    """fpcuro(a, b, c, d, x, n) -> (a, b, c, d, x, n)

    Parameters
    ----------
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout
    c : fwr_real_x8, intent inout
    d : fwr_real_x8, intent inout
    x : fwr_real_x8, 1D array, dimension(3), intent inout
    n : fwi_integer, intent inout

    Returns
    -------
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout
    c : fwr_real_x8, intent inout
    d : fwr_real_x8, intent inout
    x : fwr_real_x8, 1D array, dimension(3), intent inout
    n : fwi_integer, intent inout

    """
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= 3 <= x_shape[0]):
        raise ValueError("(0 <= 3 <= x.shape[0]) not satisifed")
    fc.fpcuro(&a, &b, &c, &d, <fwr_real_x8_t*>np.PyArray_DATA(x_), &n)
    return (a, b, c, d, x_, n,)


cpdef object fpcyt1(object a, fwi_integer_t n, fwi_integer_t nn):
    """fpcyt1(a, n, nn) -> (a, n, nn)

    Parameters
    ----------
    a : fwr_real_x8, 2D array, dimension(nn, 6), intent inout
    n : fwi_integer, intent inout
    nn : fwi_integer, intent inout

    Returns
    -------
    a : fwr_real_x8, 2D array, dimension(nn, 6), intent inout
    n : fwi_integer, intent inout
    nn : fwi_integer, intent inout

    """
    cdef np.ndarray a_
    cdef np.npy_intp a_shape[2]
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if nn != a_shape[0]:
        raise ValueError("(nn == a.shape[0]) not satisifed")
    if not (0 <= 6 <= a_shape[1]):
        raise ValueError("(0 <= 6 <= a.shape[1]) not satisifed")
    fc.fpcyt1(<fwr_real_x8_t*>np.PyArray_DATA(a_), &n, &nn)
    return (a_, n, nn,)


cpdef object fpcyt2(object a, fwi_integer_t n, object b, object c, fwi_integer_t nn):
    """fpcyt2(a, n, b, c, nn) -> (a, n, b, c, nn)

    Parameters
    ----------
    a : fwr_real_x8, 2D array, dimension(nn, 6), intent inout
    n : fwi_integer, intent inout
    b : fwr_real_x8, 1D array, dimension(n), intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    nn : fwi_integer, intent inout

    Returns
    -------
    a : fwr_real_x8, 2D array, dimension(nn, 6), intent inout
    n : fwi_integer, intent inout
    b : fwr_real_x8, 1D array, dimension(n), intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    nn : fwi_integer, intent inout

    """
    cdef np.ndarray a_, b_, c_
    cdef np.npy_intp a_shape[2], b_shape[1], c_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if nn != a_shape[0]:
        raise ValueError("(nn == a.shape[0]) not satisifed")
    if not (0 <= 6 <= a_shape[1]):
        raise ValueError("(0 <= 6 <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 1, b_shape, False, False)
    if not (0 <= n <= b_shape[0]):
        raise ValueError("(0 <= n <= b.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    fc.fpcyt2(<fwr_real_x8_t*>np.PyArray_DATA(a_), &n, <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &nn)
    return (a_, n, b_, c_, nn,)


cpdef object fpdeno(fwi_integer_t maxtr, object up, object left, object right, fwi_integer_t nbind, fwi_integer_t merk):
    """fpdeno(maxtr, up, left, right, nbind, merk) -> (maxtr, up, left, right, nbind, merk)

    Parameters
    ----------
    maxtr : fwi_integer, intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    nbind : fwi_integer, intent inout
    merk : fwi_integer, intent inout

    Returns
    -------
    maxtr : fwi_integer, intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    nbind : fwi_integer, intent inout
    merk : fwi_integer, intent inout

    """
    cdef np.ndarray up_, left_, right_
    cdef np.npy_intp up_shape[1], left_shape[1], right_shape[1]
    up_ = fw_asfortranarray(up, fwi_integer_t_enum, 1, up_shape, False, False)
    if not (0 <= maxtr <= up_shape[0]):
        raise ValueError("(0 <= maxtr <= up.shape[0]) not satisifed")
    left_ = fw_asfortranarray(left, fwi_integer_t_enum, 1, left_shape, False, False)
    if not (0 <= maxtr <= left_shape[0]):
        raise ValueError("(0 <= maxtr <= left.shape[0]) not satisifed")
    right_ = fw_asfortranarray(right, fwi_integer_t_enum, 1, right_shape, False, False)
    if not (0 <= maxtr <= right_shape[0]):
        raise ValueError("(0 <= maxtr <= right.shape[0]) not satisifed")
    fc.fpdeno(&maxtr, <fwi_integer_t*>np.PyArray_DATA(up_), <fwi_integer_t*>np.PyArray_DATA(left_), <fwi_integer_t*>np.PyArray_DATA(right_), &nbind, &merk)
    return (maxtr, up_, left_, right_, nbind, merk,)


cpdef object fpdisc(object t, fwi_integer_t n, fwi_integer_t k2, object b, fwi_integer_t nest):
    """fpdisc(t, n, k2, b, nest) -> (t, n, k2, b, nest)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    nest : fwi_integer, intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    nest : fwi_integer, intent inout

    """
    cdef np.ndarray t_, b_
    cdef np.npy_intp t_shape[1], b_shape[2]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if nest != b_shape[0]:
        raise ValueError("(nest == b.shape[0]) not satisifed")
    if not (0 <= k2 <= b_shape[1]):
        raise ValueError("(0 <= k2 <= b.shape[1]) not satisifed")
    fc.fpdisc(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, &k2, <fwr_real_x8_t*>np.PyArray_DATA(b_), &nest)
    return (t_, n, k2, b_, nest,)


cpdef object fpfrno(fwi_integer_t maxtr, object up, object left, object right, object info, fwi_integer_t point, fwi_integer_t merk, fwi_integer_t n1, fwi_integer_t count, fwi_integer_t ier):
    """fpfrno(maxtr, up, left, right, info, point, merk, n1, count, ier) -> (maxtr, up, left, right, info, point, merk, n1, count, ier)

    Parameters
    ----------
    maxtr : fwi_integer, intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    info : fwi_integer, 1D array, dimension(maxtr), intent inout
    point : fwi_integer, intent inout
    merk : fwi_integer, intent inout
    n1 : fwi_integer, intent inout
    count : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    maxtr : fwi_integer, intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    info : fwi_integer, 1D array, dimension(maxtr), intent inout
    point : fwi_integer, intent inout
    merk : fwi_integer, intent inout
    n1 : fwi_integer, intent inout
    count : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray up_, left_, right_, info_
    cdef np.npy_intp up_shape[1], left_shape[1], right_shape[1], info_shape[1]
    up_ = fw_asfortranarray(up, fwi_integer_t_enum, 1, up_shape, False, False)
    if not (0 <= maxtr <= up_shape[0]):
        raise ValueError("(0 <= maxtr <= up.shape[0]) not satisifed")
    left_ = fw_asfortranarray(left, fwi_integer_t_enum, 1, left_shape, False, False)
    if not (0 <= maxtr <= left_shape[0]):
        raise ValueError("(0 <= maxtr <= left.shape[0]) not satisifed")
    right_ = fw_asfortranarray(right, fwi_integer_t_enum, 1, right_shape, False, False)
    if not (0 <= maxtr <= right_shape[0]):
        raise ValueError("(0 <= maxtr <= right.shape[0]) not satisifed")
    info_ = fw_asfortranarray(info, fwi_integer_t_enum, 1, info_shape, False, False)
    if not (0 <= maxtr <= info_shape[0]):
        raise ValueError("(0 <= maxtr <= info.shape[0]) not satisifed")
    fc.fpfrno(&maxtr, <fwi_integer_t*>np.PyArray_DATA(up_), <fwi_integer_t*>np.PyArray_DATA(left_), <fwi_integer_t*>np.PyArray_DATA(right_), <fwi_integer_t*>np.PyArray_DATA(info_), &point, &merk, &n1, &count, &ier)
    return (maxtr, up_, left_, right_, info_, point, merk, n1, count, ier,)


cpdef object fpgivs(fwr_real_x8_t piv, fwr_real_x8_t ww, fwr_real_x8_t cos, fwr_real_x8_t sin):
    """fpgivs(piv, ww, cos, sin) -> (piv, ww, cos, sin)

    Parameters
    ----------
    piv : fwr_real_x8, intent inout
    ww : fwr_real_x8, intent inout
    cos : fwr_real_x8, intent inout
    sin : fwr_real_x8, intent inout

    Returns
    -------
    piv : fwr_real_x8, intent inout
    ww : fwr_real_x8, intent inout
    cos : fwr_real_x8, intent inout
    sin : fwr_real_x8, intent inout

    """
    fc.fpgivs(&piv, &ww, &cos, &sin)
    return (piv, ww, cos, sin,)


cpdef object fpgrdi(fwi_integer_t ifsu, fwi_integer_t ifsv, fwi_integer_t ifbu, fwi_integer_t ifbv, fwi_integer_t iback, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object z, fwi_integer_t mz, object dz, fwi_integer_t iop0, fwi_integer_t iop1, object tu, fwi_integer_t nu, object tv, fwi_integer_t nv, fwr_real_x8_t p, object c, fwi_integer_t nc, fwr_real_x8_t sq, fwr_real_x8_t fp, object fpu, object fpv, fwi_integer_t mm, fwi_integer_t mvnu, object spu, object spv, object right, object q, object au, object av1, object av2, object bu, object bv, object aa, object bb, object cc, object cosi, object nru, object nrv):
    """fpgrdi(ifsu, ifsv, ifbu, ifbv, iback, u, mu, v, mv, z, mz, dz, iop0, iop1, tu, nu, tv, nv, p, c, nc, sq, fp, fpu, fpv, mm, mvnu, spu, spv, right, q, au, av1, av2, bu, bv, aa, bb, cc, cosi, nru, nrv) -> (ifsu, ifsv, ifbu, ifbv, iback, u, mu, v, mv, z, mz, dz, iop0, iop1, tu, nu, tv, nv, p, c, nc, sq, fp, fpu, fpv, mm, mvnu, spu, spv, right, q, au, av1, av2, bu, bv, aa, bb, cc, cosi, nru, nrv)

    Parameters
    ----------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    iback : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    dz : fwr_real_x8, 1D array, dimension(3), intent inout
    iop0 : fwi_integer, intent inout
    iop1 : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    sq : fwr_real_x8, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    mm : fwi_integer, intent inout
    mvnu : fwi_integer, intent inout
    spu : fwr_real_x8, 2D array, dimension(mu, 4), intent inout
    spv : fwr_real_x8, 2D array, dimension(mv, 4), intent inout
    right : fwr_real_x8, 1D array, dimension(mm), intent inout
    q : fwr_real_x8, 1D array, dimension(mvnu), intent inout
    au : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    av1 : fwr_real_x8, 2D array, dimension(nv, 6), intent inout
    av2 : fwr_real_x8, 2D array, dimension(nv, 4), intent inout
    bu : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    bv : fwr_real_x8, 2D array, dimension(nv, 5), intent inout
    aa : fwr_real_x8, 2D array, dimension(2, mv), intent inout
    bb : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    cc : fwr_real_x8, 1D array, dimension(nv), intent inout
    cosi : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout

    Returns
    -------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    iback : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    dz : fwr_real_x8, 1D array, dimension(3), intent inout
    iop0 : fwi_integer, intent inout
    iop1 : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    sq : fwr_real_x8, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    mm : fwi_integer, intent inout
    mvnu : fwi_integer, intent inout
    spu : fwr_real_x8, 2D array, dimension(mu, 4), intent inout
    spv : fwr_real_x8, 2D array, dimension(mv, 4), intent inout
    right : fwr_real_x8, 1D array, dimension(mm), intent inout
    q : fwr_real_x8, 1D array, dimension(mvnu), intent inout
    au : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    av1 : fwr_real_x8, 2D array, dimension(nv, 6), intent inout
    av2 : fwr_real_x8, 2D array, dimension(nv, 4), intent inout
    bu : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    bv : fwr_real_x8, 2D array, dimension(nv, 5), intent inout
    aa : fwr_real_x8, 2D array, dimension(2, mv), intent inout
    bb : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    cc : fwr_real_x8, 1D array, dimension(nv), intent inout
    cosi : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout

    """
    cdef np.ndarray u_, v_, z_, dz_, tu_, tv_, c_, fpu_, fpv_, spu_, spv_, right_, q_, au_, av1_, av2_, bu_, bv_, aa_, bb_, cc_, cosi_, nru_, nrv_
    cdef np.npy_intp u_shape[1], v_shape[1], z_shape[1], dz_shape[1], tu_shape[1], tv_shape[1], c_shape[1], fpu_shape[1], fpv_shape[1], spu_shape[2], spv_shape[2], right_shape[1], q_shape[1], au_shape[2], av1_shape[2], av2_shape[2], bu_shape[2], bv_shape[2], aa_shape[2], bb_shape[2], cc_shape[1], cosi_shape[2], nru_shape[1], nrv_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= mz <= z_shape[0]):
        raise ValueError("(0 <= mz <= z.shape[0]) not satisifed")
    dz_ = fw_asfortranarray(dz, fwr_real_x8_t_enum, 1, dz_shape, False, False)
    if not (0 <= 3 <= dz_shape[0]):
        raise ValueError("(0 <= 3 <= dz.shape[0]) not satisifed")
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nu <= tu_shape[0]):
        raise ValueError("(0 <= nu <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nv <= tv_shape[0]):
        raise ValueError("(0 <= nv <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpu_ = fw_asfortranarray(fpu, fwr_real_x8_t_enum, 1, fpu_shape, False, False)
    if not (0 <= nu <= fpu_shape[0]):
        raise ValueError("(0 <= nu <= fpu.shape[0]) not satisifed")
    fpv_ = fw_asfortranarray(fpv, fwr_real_x8_t_enum, 1, fpv_shape, False, False)
    if not (0 <= nv <= fpv_shape[0]):
        raise ValueError("(0 <= nv <= fpv.shape[0]) not satisifed")
    spu_ = fw_asfortranarray(spu, fwr_real_x8_t_enum, 2, spu_shape, False, False)
    if mu != spu_shape[0]:
        raise ValueError("(mu == spu.shape[0]) not satisifed")
    if not (0 <= 4 <= spu_shape[1]):
        raise ValueError("(0 <= 4 <= spu.shape[1]) not satisifed")
    spv_ = fw_asfortranarray(spv, fwr_real_x8_t_enum, 2, spv_shape, False, False)
    if mv != spv_shape[0]:
        raise ValueError("(mv == spv.shape[0]) not satisifed")
    if not (0 <= 4 <= spv_shape[1]):
        raise ValueError("(0 <= 4 <= spv.shape[1]) not satisifed")
    right_ = fw_asfortranarray(right, fwr_real_x8_t_enum, 1, right_shape, False, False)
    if not (0 <= mm <= right_shape[0]):
        raise ValueError("(0 <= mm <= right.shape[0]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 1, q_shape, False, False)
    if not (0 <= mvnu <= q_shape[0]):
        raise ValueError("(0 <= mvnu <= q.shape[0]) not satisifed")
    au_ = fw_asfortranarray(au, fwr_real_x8_t_enum, 2, au_shape, False, False)
    if nu != au_shape[0]:
        raise ValueError("(nu == au.shape[0]) not satisifed")
    if not (0 <= 5 <= au_shape[1]):
        raise ValueError("(0 <= 5 <= au.shape[1]) not satisifed")
    av1_ = fw_asfortranarray(av1, fwr_real_x8_t_enum, 2, av1_shape, False, False)
    if nv != av1_shape[0]:
        raise ValueError("(nv == av1.shape[0]) not satisifed")
    if not (0 <= 6 <= av1_shape[1]):
        raise ValueError("(0 <= 6 <= av1.shape[1]) not satisifed")
    av2_ = fw_asfortranarray(av2, fwr_real_x8_t_enum, 2, av2_shape, False, False)
    if nv != av2_shape[0]:
        raise ValueError("(nv == av2.shape[0]) not satisifed")
    if not (0 <= 4 <= av2_shape[1]):
        raise ValueError("(0 <= 4 <= av2.shape[1]) not satisifed")
    bu_ = fw_asfortranarray(bu, fwr_real_x8_t_enum, 2, bu_shape, False, False)
    if nu != bu_shape[0]:
        raise ValueError("(nu == bu.shape[0]) not satisifed")
    if not (0 <= 5 <= bu_shape[1]):
        raise ValueError("(0 <= 5 <= bu.shape[1]) not satisifed")
    bv_ = fw_asfortranarray(bv, fwr_real_x8_t_enum, 2, bv_shape, False, False)
    if nv != bv_shape[0]:
        raise ValueError("(nv == bv.shape[0]) not satisifed")
    if not (0 <= 5 <= bv_shape[1]):
        raise ValueError("(0 <= 5 <= bv.shape[1]) not satisifed")
    aa_ = fw_asfortranarray(aa, fwr_real_x8_t_enum, 2, aa_shape, False, False)
    if 2 != aa_shape[0]:
        raise ValueError("(2 == aa.shape[0]) not satisifed")
    if not (0 <= mv <= aa_shape[1]):
        raise ValueError("(0 <= mv <= aa.shape[1]) not satisifed")
    bb_ = fw_asfortranarray(bb, fwr_real_x8_t_enum, 2, bb_shape, False, False)
    if 2 != bb_shape[0]:
        raise ValueError("(2 == bb.shape[0]) not satisifed")
    if not (0 <= nv <= bb_shape[1]):
        raise ValueError("(0 <= nv <= bb.shape[1]) not satisifed")
    cc_ = fw_asfortranarray(cc, fwr_real_x8_t_enum, 1, cc_shape, False, False)
    if not (0 <= nv <= cc_shape[0]):
        raise ValueError("(0 <= nv <= cc.shape[0]) not satisifed")
    cosi_ = fw_asfortranarray(cosi, fwr_real_x8_t_enum, 2, cosi_shape, False, False)
    if 2 != cosi_shape[0]:
        raise ValueError("(2 == cosi.shape[0]) not satisifed")
    if not (0 <= nv <= cosi_shape[1]):
        raise ValueError("(0 <= nv <= cosi.shape[1]) not satisifed")
    nru_ = fw_asfortranarray(nru, fwi_integer_t_enum, 1, nru_shape, False, False)
    if not (0 <= mu <= nru_shape[0]):
        raise ValueError("(0 <= mu <= nru.shape[0]) not satisifed")
    nrv_ = fw_asfortranarray(nrv, fwi_integer_t_enum, 1, nrv_shape, False, False)
    if not (0 <= mv <= nrv_shape[0]):
        raise ValueError("(0 <= mv <= nrv.shape[0]) not satisifed")
    fc.fpgrdi(&ifsu, &ifsv, &ifbu, &ifbv, &iback, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(z_), &mz, <fwr_real_x8_t*>np.PyArray_DATA(dz_), &iop0, &iop1, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nu, <fwr_real_x8_t*>np.PyArray_DATA(tv_), &nv, &p, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &sq, &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpu_), <fwr_real_x8_t*>np.PyArray_DATA(fpv_), &mm, &mvnu, <fwr_real_x8_t*>np.PyArray_DATA(spu_), <fwr_real_x8_t*>np.PyArray_DATA(spv_), <fwr_real_x8_t*>np.PyArray_DATA(right_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(au_), <fwr_real_x8_t*>np.PyArray_DATA(av1_), <fwr_real_x8_t*>np.PyArray_DATA(av2_), <fwr_real_x8_t*>np.PyArray_DATA(bu_), <fwr_real_x8_t*>np.PyArray_DATA(bv_), <fwr_real_x8_t*>np.PyArray_DATA(aa_), <fwr_real_x8_t*>np.PyArray_DATA(bb_), <fwr_real_x8_t*>np.PyArray_DATA(cc_), <fwr_real_x8_t*>np.PyArray_DATA(cosi_), <fwi_integer_t*>np.PyArray_DATA(nru_), <fwi_integer_t*>np.PyArray_DATA(nrv_))
    return (ifsu, ifsv, ifbu, ifbv, iback, u_, mu, v_, mv, z_, mz, dz_, iop0, iop1, tu_, nu, tv_, nv, p, c_, nc, sq, fp, fpu_, fpv_, mm, mvnu, spu_, spv_, right_, q_, au_, av1_, av2_, bu_, bv_, aa_, bb_, cc_, cosi_, nru_, nrv_,)


cpdef object fpgrpa(fwi_integer_t ifsu, fwi_integer_t ifsv, fwi_integer_t ifbu, fwi_integer_t ifbv, fwi_integer_t idim, object ipar, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object z, fwi_integer_t mz, object tu, fwi_integer_t nu, object tv, fwi_integer_t nv, fwr_real_x8_t p, object c, fwi_integer_t nc, fwr_real_x8_t fp, object fpu, object fpv, fwi_integer_t mm, fwi_integer_t mvnu, object spu, object spv, object right, object q, object au, object au1, object av, object av1, object bu, object bv, object nru, object nrv):
    """fpgrpa(ifsu, ifsv, ifbu, ifbv, idim, ipar, u, mu, v, mv, z, mz, tu, nu, tv, nv, p, c, nc, fp, fpu, fpv, mm, mvnu, spu, spv, right, q, au, au1, av, av1, bu, bv, nru, nrv) -> (ifsu, ifsv, ifbu, ifbv, idim, ipar, u, mu, v, mv, z, mz, tu, nu, tv, nv, p, c, nc, fp, fpu, fpv, mm, mvnu, spu, spv, right, q, au, au1, av, av1, bu, bv, nru, nrv)

    Parameters
    ----------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    ipar : fwi_integer, 1D array, dimension(2), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz*idim), intent inout
    mz : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc*idim), intent inout
    nc : fwi_integer, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    mm : fwi_integer, intent inout
    mvnu : fwi_integer, intent inout
    spu : fwr_real_x8, 2D array, dimension(mu, 4), intent inout
    spv : fwr_real_x8, 2D array, dimension(mv, 4), intent inout
    right : fwr_real_x8, 1D array, dimension(mm*idim), intent inout
    q : fwr_real_x8, 1D array, dimension(mvnu), intent inout
    au : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    au1 : fwr_real_x8, 2D array, dimension(nu, 4), intent inout
    av : fwr_real_x8, 2D array, dimension(nv, 5), intent inout
    av1 : fwr_real_x8, 2D array, dimension(nv, 4), intent inout
    bu : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    bv : fwr_real_x8, 2D array, dimension(nv, 5), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout

    Returns
    -------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    ipar : fwi_integer, 1D array, dimension(2), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz*idim), intent inout
    mz : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc*idim), intent inout
    nc : fwi_integer, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    mm : fwi_integer, intent inout
    mvnu : fwi_integer, intent inout
    spu : fwr_real_x8, 2D array, dimension(mu, 4), intent inout
    spv : fwr_real_x8, 2D array, dimension(mv, 4), intent inout
    right : fwr_real_x8, 1D array, dimension(mm*idim), intent inout
    q : fwr_real_x8, 1D array, dimension(mvnu), intent inout
    au : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    au1 : fwr_real_x8, 2D array, dimension(nu, 4), intent inout
    av : fwr_real_x8, 2D array, dimension(nv, 5), intent inout
    av1 : fwr_real_x8, 2D array, dimension(nv, 4), intent inout
    bu : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    bv : fwr_real_x8, 2D array, dimension(nv, 5), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout

    """
    cdef np.ndarray ipar_, u_, v_, z_, tu_, tv_, c_, fpu_, fpv_, spu_, spv_, right_, q_, au_, au1_, av_, av1_, bu_, bv_, nru_, nrv_
    cdef np.npy_intp ipar_shape[1], u_shape[1], v_shape[1], z_shape[1], tu_shape[1], tv_shape[1], c_shape[1], fpu_shape[1], fpv_shape[1], spu_shape[2], spv_shape[2], right_shape[1], q_shape[1], au_shape[2], au1_shape[2], av_shape[2], av1_shape[2], bu_shape[2], bv_shape[2], nru_shape[1], nrv_shape[1]
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    if not (0 <= 2 <= ipar_shape[0]):
        raise ValueError("(0 <= 2 <= ipar.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nu <= tu_shape[0]):
        raise ValueError("(0 <= nu <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nv <= tv_shape[0]):
        raise ValueError("(0 <= nv <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    fpu_ = fw_asfortranarray(fpu, fwr_real_x8_t_enum, 1, fpu_shape, False, False)
    if not (0 <= nu <= fpu_shape[0]):
        raise ValueError("(0 <= nu <= fpu.shape[0]) not satisifed")
    fpv_ = fw_asfortranarray(fpv, fwr_real_x8_t_enum, 1, fpv_shape, False, False)
    if not (0 <= nv <= fpv_shape[0]):
        raise ValueError("(0 <= nv <= fpv.shape[0]) not satisifed")
    spu_ = fw_asfortranarray(spu, fwr_real_x8_t_enum, 2, spu_shape, False, False)
    if mu != spu_shape[0]:
        raise ValueError("(mu == spu.shape[0]) not satisifed")
    if not (0 <= 4 <= spu_shape[1]):
        raise ValueError("(0 <= 4 <= spu.shape[1]) not satisifed")
    spv_ = fw_asfortranarray(spv, fwr_real_x8_t_enum, 2, spv_shape, False, False)
    if mv != spv_shape[0]:
        raise ValueError("(mv == spv.shape[0]) not satisifed")
    if not (0 <= 4 <= spv_shape[1]):
        raise ValueError("(0 <= 4 <= spv.shape[1]) not satisifed")
    right_ = fw_asfortranarray(right, fwr_real_x8_t_enum, 1, right_shape, False, False)
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 1, q_shape, False, False)
    if not (0 <= mvnu <= q_shape[0]):
        raise ValueError("(0 <= mvnu <= q.shape[0]) not satisifed")
    au_ = fw_asfortranarray(au, fwr_real_x8_t_enum, 2, au_shape, False, False)
    if nu != au_shape[0]:
        raise ValueError("(nu == au.shape[0]) not satisifed")
    if not (0 <= 5 <= au_shape[1]):
        raise ValueError("(0 <= 5 <= au.shape[1]) not satisifed")
    au1_ = fw_asfortranarray(au1, fwr_real_x8_t_enum, 2, au1_shape, False, False)
    if nu != au1_shape[0]:
        raise ValueError("(nu == au1.shape[0]) not satisifed")
    if not (0 <= 4 <= au1_shape[1]):
        raise ValueError("(0 <= 4 <= au1.shape[1]) not satisifed")
    av_ = fw_asfortranarray(av, fwr_real_x8_t_enum, 2, av_shape, False, False)
    if nv != av_shape[0]:
        raise ValueError("(nv == av.shape[0]) not satisifed")
    if not (0 <= 5 <= av_shape[1]):
        raise ValueError("(0 <= 5 <= av.shape[1]) not satisifed")
    av1_ = fw_asfortranarray(av1, fwr_real_x8_t_enum, 2, av1_shape, False, False)
    if nv != av1_shape[0]:
        raise ValueError("(nv == av1.shape[0]) not satisifed")
    if not (0 <= 4 <= av1_shape[1]):
        raise ValueError("(0 <= 4 <= av1.shape[1]) not satisifed")
    bu_ = fw_asfortranarray(bu, fwr_real_x8_t_enum, 2, bu_shape, False, False)
    if nu != bu_shape[0]:
        raise ValueError("(nu == bu.shape[0]) not satisifed")
    if not (0 <= 5 <= bu_shape[1]):
        raise ValueError("(0 <= 5 <= bu.shape[1]) not satisifed")
    bv_ = fw_asfortranarray(bv, fwr_real_x8_t_enum, 2, bv_shape, False, False)
    if nv != bv_shape[0]:
        raise ValueError("(nv == bv.shape[0]) not satisifed")
    if not (0 <= 5 <= bv_shape[1]):
        raise ValueError("(0 <= 5 <= bv.shape[1]) not satisifed")
    nru_ = fw_asfortranarray(nru, fwi_integer_t_enum, 1, nru_shape, False, False)
    if not (0 <= mu <= nru_shape[0]):
        raise ValueError("(0 <= mu <= nru.shape[0]) not satisifed")
    nrv_ = fw_asfortranarray(nrv, fwi_integer_t_enum, 1, nrv_shape, False, False)
    if not (0 <= mv <= nrv_shape[0]):
        raise ValueError("(0 <= mv <= nrv.shape[0]) not satisifed")
    fc.fpgrpa(&ifsu, &ifsv, &ifbu, &ifbv, &idim, <fwi_integer_t*>np.PyArray_DATA(ipar_), <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(z_), &mz, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nu, <fwr_real_x8_t*>np.PyArray_DATA(tv_), &nv, &p, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpu_), <fwr_real_x8_t*>np.PyArray_DATA(fpv_), &mm, &mvnu, <fwr_real_x8_t*>np.PyArray_DATA(spu_), <fwr_real_x8_t*>np.PyArray_DATA(spv_), <fwr_real_x8_t*>np.PyArray_DATA(right_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(au_), <fwr_real_x8_t*>np.PyArray_DATA(au1_), <fwr_real_x8_t*>np.PyArray_DATA(av_), <fwr_real_x8_t*>np.PyArray_DATA(av1_), <fwr_real_x8_t*>np.PyArray_DATA(bu_), <fwr_real_x8_t*>np.PyArray_DATA(bv_), <fwi_integer_t*>np.PyArray_DATA(nru_), <fwi_integer_t*>np.PyArray_DATA(nrv_))
    return (ifsu, ifsv, ifbu, ifbv, idim, ipar_, u_, mu, v_, mv, z_, mz, tu_, nu, tv_, nv, p, c_, nc, fp, fpu_, fpv_, mm, mvnu, spu_, spv_, right_, q_, au_, au1_, av_, av1_, bu_, bv_, nru_, nrv_,)


cpdef object fpgrre(fwi_integer_t ifsx, fwi_integer_t ifsy, fwi_integer_t ifbx, fwi_integer_t ifby, object x, fwi_integer_t mx, object y, fwi_integer_t my, object z, fwi_integer_t mz, fwi_integer_t kx, fwi_integer_t ky, object tx, fwi_integer_t nx, object ty, fwi_integer_t ny, fwr_real_x8_t p, object c, fwi_integer_t nc, fwr_real_x8_t fp, object fpx, object fpy, fwi_integer_t mm, fwi_integer_t mynx, fwi_integer_t kx1, fwi_integer_t kx2, fwi_integer_t ky1, fwi_integer_t ky2, object spx, object spy, object right, object q, object ax, object ay, object bx, object by__, object nrx, object nry):
    """fpgrre(ifsx, ifsy, ifbx, ifby, x, mx, y, my, z, mz, kx, ky, tx, nx, ty, ny, p, c, nc, fp, fpx, fpy, mm, mynx, kx1, kx2, ky1, ky2, spx, spy, right, q, ax, ay, bx, by__, nrx, nry) -> (ifsx, ifsy, ifbx, ifby, x, mx, y, my, z, mz, kx, ky, tx, nx, ty, ny, p, c, nc, fp, fpx, fpy, mm, mynx, kx1, kx2, ky1, ky2, spx, spy, right, q, ax, ay, bx, by__, nrx, nry)

    Parameters
    ----------
    ifsx : fwi_integer, intent inout
    ifsy : fwi_integer, intent inout
    ifbx : fwi_integer, intent inout
    ifby : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    fp : fwr_real_x8, intent inout
    fpx : fwr_real_x8, 1D array, dimension(nx), intent inout
    fpy : fwr_real_x8, 1D array, dimension(ny), intent inout
    mm : fwi_integer, intent inout
    mynx : fwi_integer, intent inout
    kx1 : fwi_integer, intent inout
    kx2 : fwi_integer, intent inout
    ky1 : fwi_integer, intent inout
    ky2 : fwi_integer, intent inout
    spx : fwr_real_x8, 2D array, dimension(mx, kx1), intent inout
    spy : fwr_real_x8, 2D array, dimension(my, ky1), intent inout
    right : fwr_real_x8, 1D array, dimension(mm), intent inout
    q : fwr_real_x8, 1D array, dimension(mynx), intent inout
    ax : fwr_real_x8, 2D array, dimension(nx, kx2), intent inout
    ay : fwr_real_x8, 2D array, dimension(ny, ky2), intent inout
    bx : fwr_real_x8, 2D array, dimension(nx, kx2), intent inout
    by__ : fwr_real_x8, 2D array, dimension(ny, ky2), intent inout
    nrx : fwi_integer, 1D array, dimension(mx), intent inout
    nry : fwi_integer, 1D array, dimension(my), intent inout

    Returns
    -------
    ifsx : fwi_integer, intent inout
    ifsy : fwi_integer, intent inout
    ifbx : fwi_integer, intent inout
    ifby : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    fp : fwr_real_x8, intent inout
    fpx : fwr_real_x8, 1D array, dimension(nx), intent inout
    fpy : fwr_real_x8, 1D array, dimension(ny), intent inout
    mm : fwi_integer, intent inout
    mynx : fwi_integer, intent inout
    kx1 : fwi_integer, intent inout
    kx2 : fwi_integer, intent inout
    ky1 : fwi_integer, intent inout
    ky2 : fwi_integer, intent inout
    spx : fwr_real_x8, 2D array, dimension(mx, kx1), intent inout
    spy : fwr_real_x8, 2D array, dimension(my, ky1), intent inout
    right : fwr_real_x8, 1D array, dimension(mm), intent inout
    q : fwr_real_x8, 1D array, dimension(mynx), intent inout
    ax : fwr_real_x8, 2D array, dimension(nx, kx2), intent inout
    ay : fwr_real_x8, 2D array, dimension(ny, ky2), intent inout
    bx : fwr_real_x8, 2D array, dimension(nx, kx2), intent inout
    by__ : fwr_real_x8, 2D array, dimension(ny, ky2), intent inout
    nrx : fwi_integer, 1D array, dimension(mx), intent inout
    nry : fwi_integer, 1D array, dimension(my), intent inout

    """
    cdef np.ndarray x_, y_, z_, tx_, ty_, c_, fpx_, fpy_, spx_, spy_, right_, q_, ax_, ay_, bx_, by___, nrx_, nry_
    cdef np.npy_intp x_shape[1], y_shape[1], z_shape[1], tx_shape[1], ty_shape[1], c_shape[1], fpx_shape[1], fpy_shape[1], spx_shape[2], spy_shape[2], right_shape[1], q_shape[1], ax_shape[2], ay_shape[2], bx_shape[2], by___shape[2], nrx_shape[1], nry_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= my <= y_shape[0]):
        raise ValueError("(0 <= my <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= mz <= z_shape[0]):
        raise ValueError("(0 <= mz <= z.shape[0]) not satisifed")
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpx_ = fw_asfortranarray(fpx, fwr_real_x8_t_enum, 1, fpx_shape, False, False)
    if not (0 <= nx <= fpx_shape[0]):
        raise ValueError("(0 <= nx <= fpx.shape[0]) not satisifed")
    fpy_ = fw_asfortranarray(fpy, fwr_real_x8_t_enum, 1, fpy_shape, False, False)
    if not (0 <= ny <= fpy_shape[0]):
        raise ValueError("(0 <= ny <= fpy.shape[0]) not satisifed")
    spx_ = fw_asfortranarray(spx, fwr_real_x8_t_enum, 2, spx_shape, False, False)
    if mx != spx_shape[0]:
        raise ValueError("(mx == spx.shape[0]) not satisifed")
    if not (0 <= kx1 <= spx_shape[1]):
        raise ValueError("(0 <= kx1 <= spx.shape[1]) not satisifed")
    spy_ = fw_asfortranarray(spy, fwr_real_x8_t_enum, 2, spy_shape, False, False)
    if my != spy_shape[0]:
        raise ValueError("(my == spy.shape[0]) not satisifed")
    if not (0 <= ky1 <= spy_shape[1]):
        raise ValueError("(0 <= ky1 <= spy.shape[1]) not satisifed")
    right_ = fw_asfortranarray(right, fwr_real_x8_t_enum, 1, right_shape, False, False)
    if not (0 <= mm <= right_shape[0]):
        raise ValueError("(0 <= mm <= right.shape[0]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 1, q_shape, False, False)
    if not (0 <= mynx <= q_shape[0]):
        raise ValueError("(0 <= mynx <= q.shape[0]) not satisifed")
    ax_ = fw_asfortranarray(ax, fwr_real_x8_t_enum, 2, ax_shape, False, False)
    if nx != ax_shape[0]:
        raise ValueError("(nx == ax.shape[0]) not satisifed")
    if not (0 <= kx2 <= ax_shape[1]):
        raise ValueError("(0 <= kx2 <= ax.shape[1]) not satisifed")
    ay_ = fw_asfortranarray(ay, fwr_real_x8_t_enum, 2, ay_shape, False, False)
    if ny != ay_shape[0]:
        raise ValueError("(ny == ay.shape[0]) not satisifed")
    if not (0 <= ky2 <= ay_shape[1]):
        raise ValueError("(0 <= ky2 <= ay.shape[1]) not satisifed")
    bx_ = fw_asfortranarray(bx, fwr_real_x8_t_enum, 2, bx_shape, False, False)
    if nx != bx_shape[0]:
        raise ValueError("(nx == bx.shape[0]) not satisifed")
    if not (0 <= kx2 <= bx_shape[1]):
        raise ValueError("(0 <= kx2 <= bx.shape[1]) not satisifed")
    by___ = fw_asfortranarray(by__, fwr_real_x8_t_enum, 2, by___shape, False, False)
    if ny != by___shape[0]:
        raise ValueError("(ny == by__.shape[0]) not satisifed")
    if not (0 <= ky2 <= by___shape[1]):
        raise ValueError("(0 <= ky2 <= by__.shape[1]) not satisifed")
    nrx_ = fw_asfortranarray(nrx, fwi_integer_t_enum, 1, nrx_shape, False, False)
    if not (0 <= mx <= nrx_shape[0]):
        raise ValueError("(0 <= mx <= nrx.shape[0]) not satisifed")
    nry_ = fw_asfortranarray(nry, fwi_integer_t_enum, 1, nry_shape, False, False)
    if not (0 <= my <= nry_shape[0]):
        raise ValueError("(0 <= my <= nry.shape[0]) not satisifed")
    fc.fpgrre(&ifsx, &ifsy, &ifbx, &ifby, <fwr_real_x8_t*>np.PyArray_DATA(x_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(y_), &my, <fwr_real_x8_t*>np.PyArray_DATA(z_), &mz, &kx, &ky, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, &p, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpx_), <fwr_real_x8_t*>np.PyArray_DATA(fpy_), &mm, &mynx, &kx1, &kx2, &ky1, &ky2, <fwr_real_x8_t*>np.PyArray_DATA(spx_), <fwr_real_x8_t*>np.PyArray_DATA(spy_), <fwr_real_x8_t*>np.PyArray_DATA(right_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(ax_), <fwr_real_x8_t*>np.PyArray_DATA(ay_), <fwr_real_x8_t*>np.PyArray_DATA(bx_), <fwr_real_x8_t*>np.PyArray_DATA(by___), <fwi_integer_t*>np.PyArray_DATA(nrx_), <fwi_integer_t*>np.PyArray_DATA(nry_))
    return (ifsx, ifsy, ifbx, ifby, x_, mx, y_, my, z_, mz, kx, ky, tx_, nx, ty_, ny, p, c_, nc, fp, fpx_, fpy_, mm, mynx, kx1, kx2, ky1, ky2, spx_, spy_, right_, q_, ax_, ay_, bx_, by___, nrx_, nry_,)


cpdef object fpgrsp(fwi_integer_t ifsu, fwi_integer_t ifsv, fwi_integer_t ifbu, fwi_integer_t ifbv, fwi_integer_t iback, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object r, fwi_integer_t mr, object dr, fwi_integer_t iop0, fwi_integer_t iop1, object tu, fwi_integer_t nu, object tv, fwi_integer_t nv, fwr_real_x8_t p, object c, fwi_integer_t nc, fwr_real_x8_t sq, fwr_real_x8_t fp, object fpu, object fpv, fwi_integer_t mm, fwi_integer_t mvnu, object spu, object spv, object right, object q, object au, object av1, object av2, object bu, object bv, object a0, object a1, object b0, object b1, object c0, object c1, object cosi, object nru, object nrv):
    """fpgrsp(ifsu, ifsv, ifbu, ifbv, iback, u, mu, v, mv, r, mr, dr, iop0, iop1, tu, nu, tv, nv, p, c, nc, sq, fp, fpu, fpv, mm, mvnu, spu, spv, right, q, au, av1, av2, bu, bv, a0, a1, b0, b1, c0, c1, cosi, nru, nrv) -> (ifsu, ifsv, ifbu, ifbv, iback, u, mu, v, mv, r, mr, dr, iop0, iop1, tu, nu, tv, nv, p, c, nc, sq, fp, fpu, fpv, mm, mvnu, spu, spv, right, q, au, av1, av2, bu, bv, a0, a1, b0, b1, c0, c1, cosi, nru, nrv)

    Parameters
    ----------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    iback : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    r : fwr_real_x8, 1D array, dimension(mr), intent inout
    mr : fwi_integer, intent inout
    dr : fwr_real_x8, 1D array, dimension(6), intent inout
    iop0 : fwi_integer, intent inout
    iop1 : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    sq : fwr_real_x8, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    mm : fwi_integer, intent inout
    mvnu : fwi_integer, intent inout
    spu : fwr_real_x8, 2D array, dimension(mu, 4), intent inout
    spv : fwr_real_x8, 2D array, dimension(mv, 4), intent inout
    right : fwr_real_x8, 1D array, dimension(mm), intent inout
    q : fwr_real_x8, 1D array, dimension(mvnu), intent inout
    au : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    av1 : fwr_real_x8, 2D array, dimension(nv, 6), intent inout
    av2 : fwr_real_x8, 2D array, dimension(nv, 4), intent inout
    bu : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    bv : fwr_real_x8, 2D array, dimension(nv, 5), intent inout
    a0 : fwr_real_x8, 2D array, dimension(2, mv), intent inout
    a1 : fwr_real_x8, 2D array, dimension(2, mv), intent inout
    b0 : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    b1 : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    c0 : fwr_real_x8, 1D array, dimension(nv), intent inout
    c1 : fwr_real_x8, 1D array, dimension(nv), intent inout
    cosi : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout

    Returns
    -------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    iback : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    r : fwr_real_x8, 1D array, dimension(mr), intent inout
    mr : fwi_integer, intent inout
    dr : fwr_real_x8, 1D array, dimension(6), intent inout
    iop0 : fwi_integer, intent inout
    iop1 : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    sq : fwr_real_x8, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    mm : fwi_integer, intent inout
    mvnu : fwi_integer, intent inout
    spu : fwr_real_x8, 2D array, dimension(mu, 4), intent inout
    spv : fwr_real_x8, 2D array, dimension(mv, 4), intent inout
    right : fwr_real_x8, 1D array, dimension(mm), intent inout
    q : fwr_real_x8, 1D array, dimension(mvnu), intent inout
    au : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    av1 : fwr_real_x8, 2D array, dimension(nv, 6), intent inout
    av2 : fwr_real_x8, 2D array, dimension(nv, 4), intent inout
    bu : fwr_real_x8, 2D array, dimension(nu, 5), intent inout
    bv : fwr_real_x8, 2D array, dimension(nv, 5), intent inout
    a0 : fwr_real_x8, 2D array, dimension(2, mv), intent inout
    a1 : fwr_real_x8, 2D array, dimension(2, mv), intent inout
    b0 : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    b1 : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    c0 : fwr_real_x8, 1D array, dimension(nv), intent inout
    c1 : fwr_real_x8, 1D array, dimension(nv), intent inout
    cosi : fwr_real_x8, 2D array, dimension(2, nv), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout

    """
    cdef np.ndarray u_, v_, r_, dr_, tu_, tv_, c_, fpu_, fpv_, spu_, spv_, right_, q_, au_, av1_, av2_, bu_, bv_, a0_, a1_, b0_, b1_, c0_, c1_, cosi_, nru_, nrv_
    cdef np.npy_intp u_shape[1], v_shape[1], r_shape[1], dr_shape[1], tu_shape[1], tv_shape[1], c_shape[1], fpu_shape[1], fpv_shape[1], spu_shape[2], spv_shape[2], right_shape[1], q_shape[1], au_shape[2], av1_shape[2], av2_shape[2], bu_shape[2], bv_shape[2], a0_shape[2], a1_shape[2], b0_shape[2], b1_shape[2], c0_shape[1], c1_shape[1], cosi_shape[2], nru_shape[1], nrv_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    r_ = fw_asfortranarray(r, fwr_real_x8_t_enum, 1, r_shape, False, False)
    if not (0 <= mr <= r_shape[0]):
        raise ValueError("(0 <= mr <= r.shape[0]) not satisifed")
    dr_ = fw_asfortranarray(dr, fwr_real_x8_t_enum, 1, dr_shape, False, False)
    if not (0 <= 6 <= dr_shape[0]):
        raise ValueError("(0 <= 6 <= dr.shape[0]) not satisifed")
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nu <= tu_shape[0]):
        raise ValueError("(0 <= nu <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nv <= tv_shape[0]):
        raise ValueError("(0 <= nv <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpu_ = fw_asfortranarray(fpu, fwr_real_x8_t_enum, 1, fpu_shape, False, False)
    if not (0 <= nu <= fpu_shape[0]):
        raise ValueError("(0 <= nu <= fpu.shape[0]) not satisifed")
    fpv_ = fw_asfortranarray(fpv, fwr_real_x8_t_enum, 1, fpv_shape, False, False)
    if not (0 <= nv <= fpv_shape[0]):
        raise ValueError("(0 <= nv <= fpv.shape[0]) not satisifed")
    spu_ = fw_asfortranarray(spu, fwr_real_x8_t_enum, 2, spu_shape, False, False)
    if mu != spu_shape[0]:
        raise ValueError("(mu == spu.shape[0]) not satisifed")
    if not (0 <= 4 <= spu_shape[1]):
        raise ValueError("(0 <= 4 <= spu.shape[1]) not satisifed")
    spv_ = fw_asfortranarray(spv, fwr_real_x8_t_enum, 2, spv_shape, False, False)
    if mv != spv_shape[0]:
        raise ValueError("(mv == spv.shape[0]) not satisifed")
    if not (0 <= 4 <= spv_shape[1]):
        raise ValueError("(0 <= 4 <= spv.shape[1]) not satisifed")
    right_ = fw_asfortranarray(right, fwr_real_x8_t_enum, 1, right_shape, False, False)
    if not (0 <= mm <= right_shape[0]):
        raise ValueError("(0 <= mm <= right.shape[0]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 1, q_shape, False, False)
    if not (0 <= mvnu <= q_shape[0]):
        raise ValueError("(0 <= mvnu <= q.shape[0]) not satisifed")
    au_ = fw_asfortranarray(au, fwr_real_x8_t_enum, 2, au_shape, False, False)
    if nu != au_shape[0]:
        raise ValueError("(nu == au.shape[0]) not satisifed")
    if not (0 <= 5 <= au_shape[1]):
        raise ValueError("(0 <= 5 <= au.shape[1]) not satisifed")
    av1_ = fw_asfortranarray(av1, fwr_real_x8_t_enum, 2, av1_shape, False, False)
    if nv != av1_shape[0]:
        raise ValueError("(nv == av1.shape[0]) not satisifed")
    if not (0 <= 6 <= av1_shape[1]):
        raise ValueError("(0 <= 6 <= av1.shape[1]) not satisifed")
    av2_ = fw_asfortranarray(av2, fwr_real_x8_t_enum, 2, av2_shape, False, False)
    if nv != av2_shape[0]:
        raise ValueError("(nv == av2.shape[0]) not satisifed")
    if not (0 <= 4 <= av2_shape[1]):
        raise ValueError("(0 <= 4 <= av2.shape[1]) not satisifed")
    bu_ = fw_asfortranarray(bu, fwr_real_x8_t_enum, 2, bu_shape, False, False)
    if nu != bu_shape[0]:
        raise ValueError("(nu == bu.shape[0]) not satisifed")
    if not (0 <= 5 <= bu_shape[1]):
        raise ValueError("(0 <= 5 <= bu.shape[1]) not satisifed")
    bv_ = fw_asfortranarray(bv, fwr_real_x8_t_enum, 2, bv_shape, False, False)
    if nv != bv_shape[0]:
        raise ValueError("(nv == bv.shape[0]) not satisifed")
    if not (0 <= 5 <= bv_shape[1]):
        raise ValueError("(0 <= 5 <= bv.shape[1]) not satisifed")
    a0_ = fw_asfortranarray(a0, fwr_real_x8_t_enum, 2, a0_shape, False, False)
    if 2 != a0_shape[0]:
        raise ValueError("(2 == a0.shape[0]) not satisifed")
    if not (0 <= mv <= a0_shape[1]):
        raise ValueError("(0 <= mv <= a0.shape[1]) not satisifed")
    a1_ = fw_asfortranarray(a1, fwr_real_x8_t_enum, 2, a1_shape, False, False)
    if 2 != a1_shape[0]:
        raise ValueError("(2 == a1.shape[0]) not satisifed")
    if not (0 <= mv <= a1_shape[1]):
        raise ValueError("(0 <= mv <= a1.shape[1]) not satisifed")
    b0_ = fw_asfortranarray(b0, fwr_real_x8_t_enum, 2, b0_shape, False, False)
    if 2 != b0_shape[0]:
        raise ValueError("(2 == b0.shape[0]) not satisifed")
    if not (0 <= nv <= b0_shape[1]):
        raise ValueError("(0 <= nv <= b0.shape[1]) not satisifed")
    b1_ = fw_asfortranarray(b1, fwr_real_x8_t_enum, 2, b1_shape, False, False)
    if 2 != b1_shape[0]:
        raise ValueError("(2 == b1.shape[0]) not satisifed")
    if not (0 <= nv <= b1_shape[1]):
        raise ValueError("(0 <= nv <= b1.shape[1]) not satisifed")
    c0_ = fw_asfortranarray(c0, fwr_real_x8_t_enum, 1, c0_shape, False, False)
    if not (0 <= nv <= c0_shape[0]):
        raise ValueError("(0 <= nv <= c0.shape[0]) not satisifed")
    c1_ = fw_asfortranarray(c1, fwr_real_x8_t_enum, 1, c1_shape, False, False)
    if not (0 <= nv <= c1_shape[0]):
        raise ValueError("(0 <= nv <= c1.shape[0]) not satisifed")
    cosi_ = fw_asfortranarray(cosi, fwr_real_x8_t_enum, 2, cosi_shape, False, False)
    if 2 != cosi_shape[0]:
        raise ValueError("(2 == cosi.shape[0]) not satisifed")
    if not (0 <= nv <= cosi_shape[1]):
        raise ValueError("(0 <= nv <= cosi.shape[1]) not satisifed")
    nru_ = fw_asfortranarray(nru, fwi_integer_t_enum, 1, nru_shape, False, False)
    if not (0 <= mu <= nru_shape[0]):
        raise ValueError("(0 <= mu <= nru.shape[0]) not satisifed")
    nrv_ = fw_asfortranarray(nrv, fwi_integer_t_enum, 1, nrv_shape, False, False)
    if not (0 <= mv <= nrv_shape[0]):
        raise ValueError("(0 <= mv <= nrv.shape[0]) not satisifed")
    fc.fpgrsp(&ifsu, &ifsv, &ifbu, &ifbv, &iback, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(r_), &mr, <fwr_real_x8_t*>np.PyArray_DATA(dr_), &iop0, &iop1, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nu, <fwr_real_x8_t*>np.PyArray_DATA(tv_), &nv, &p, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &sq, &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpu_), <fwr_real_x8_t*>np.PyArray_DATA(fpv_), &mm, &mvnu, <fwr_real_x8_t*>np.PyArray_DATA(spu_), <fwr_real_x8_t*>np.PyArray_DATA(spv_), <fwr_real_x8_t*>np.PyArray_DATA(right_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(au_), <fwr_real_x8_t*>np.PyArray_DATA(av1_), <fwr_real_x8_t*>np.PyArray_DATA(av2_), <fwr_real_x8_t*>np.PyArray_DATA(bu_), <fwr_real_x8_t*>np.PyArray_DATA(bv_), <fwr_real_x8_t*>np.PyArray_DATA(a0_), <fwr_real_x8_t*>np.PyArray_DATA(a1_), <fwr_real_x8_t*>np.PyArray_DATA(b0_), <fwr_real_x8_t*>np.PyArray_DATA(b1_), <fwr_real_x8_t*>np.PyArray_DATA(c0_), <fwr_real_x8_t*>np.PyArray_DATA(c1_), <fwr_real_x8_t*>np.PyArray_DATA(cosi_), <fwi_integer_t*>np.PyArray_DATA(nru_), <fwi_integer_t*>np.PyArray_DATA(nrv_))
    return (ifsu, ifsv, ifbu, ifbv, iback, u_, mu, v_, mv, r_, mr, dr_, iop0, iop1, tu_, nu, tv_, nv, p, c_, nc, sq, fp, fpu_, fpv_, mm, mvnu, spu_, spv_, right_, q_, au_, av1_, av2_, bu_, bv_, a0_, a1_, b0_, b1_, c0_, c1_, cosi_, nru_, nrv_,)


cpdef object fpinst(fwi_integer_t iopt, object t, fwi_integer_t n, object c, fwi_integer_t k, fwr_real_x8_t x, fwi_integer_t l, object tt, fwi_integer_t nn, object cc, fwi_integer_t nest):
    """fpinst(iopt, t, n, c, k, x, l, tt, nn, cc, nest) -> (iopt, t, n, c, k, x, l, tt, nn, cc, nest)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    k : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    l : fwi_integer, intent inout
    tt : fwr_real_x8, 1D array, dimension(nest), intent inout
    nn : fwi_integer, intent inout
    cc : fwr_real_x8, 1D array, dimension(nest), intent inout
    nest : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    k : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    l : fwi_integer, intent inout
    tt : fwr_real_x8, 1D array, dimension(nest), intent inout
    nn : fwi_integer, intent inout
    cc : fwr_real_x8, 1D array, dimension(nest), intent inout
    nest : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, tt_, cc_
    cdef np.npy_intp t_shape[1], c_shape[1], tt_shape[1], cc_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nest <= c_shape[0]):
        raise ValueError("(0 <= nest <= c.shape[0]) not satisifed")
    tt_ = fw_asfortranarray(tt, fwr_real_x8_t_enum, 1, tt_shape, False, False)
    if not (0 <= nest <= tt_shape[0]):
        raise ValueError("(0 <= nest <= tt.shape[0]) not satisifed")
    cc_ = fw_asfortranarray(cc, fwr_real_x8_t_enum, 1, cc_shape, False, False)
    if not (0 <= nest <= cc_shape[0]):
        raise ValueError("(0 <= nest <= cc.shape[0]) not satisifed")
    fc.fpinst(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k, &x, &l, <fwr_real_x8_t*>np.PyArray_DATA(tt_), &nn, <fwr_real_x8_t*>np.PyArray_DATA(cc_), &nest)
    return (iopt, t_, n, c_, k, x, l, tt_, nn, cc_, nest,)


cpdef object fpintb(object t, fwi_integer_t n, object bint, fwi_integer_t nk1, fwr_real_x8_t x, fwr_real_x8_t y):
    """fpintb(t, n, bint, nk1, x, y) -> (t, n, bint, nk1, x, y)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    bint : fwr_real_x8, 1D array, dimension(nk1), intent inout
    nk1 : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    y : fwr_real_x8, intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    bint : fwr_real_x8, 1D array, dimension(nk1), intent inout
    nk1 : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    y : fwr_real_x8, intent inout

    """
    cdef np.ndarray t_, bint_
    cdef np.npy_intp t_shape[1], bint_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    bint_ = fw_asfortranarray(bint, fwr_real_x8_t_enum, 1, bint_shape, False, False)
    if not (0 <= nk1 <= bint_shape[0]):
        raise ValueError("(0 <= nk1 <= bint.shape[0]) not satisifed")
    fc.fpintb(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(bint_), &nk1, &x, &y)
    return (t_, n, bint_, nk1, x, y,)


cpdef object fpknot(object x, fwi_integer_t m, object t, fwi_integer_t n, object fpint, object nrdata, fwi_integer_t nrint, fwi_integer_t nest, fwi_integer_t istart):
    """fpknot(x, m, t, n, fpint, nrdata, nrint, nest, istart) -> (x, m, t, n, fpint, nrdata, nrint, nest, istart)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    n : fwi_integer, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    nrint : fwi_integer, intent inout
    nest : fwi_integer, intent inout
    istart : fwi_integer, intent inout

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    n : fwi_integer, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    nrint : fwi_integer, intent inout
    nest : fwi_integer, intent inout
    istart : fwi_integer, intent inout

    """
    cdef np.ndarray x_, t_, fpint_, nrdata_
    cdef np.npy_intp x_shape[1], t_shape[1], fpint_shape[1], nrdata_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= nest <= fpint_shape[0]):
        raise ValueError("(0 <= nest <= fpint.shape[0]) not satisifed")
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, False, False)
    if not (0 <= nest <= nrdata_shape[0]):
        raise ValueError("(0 <= nest <= nrdata.shape[0]) not satisifed")
    fc.fpknot(<fwr_real_x8_t*>np.PyArray_DATA(x_), &m, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &nrint, &nest, &istart)
    return (x_, m, t_, n, fpint_, nrdata_, nrint, nest, istart,)


cpdef object fpopdi(fwi_integer_t ifsu, fwi_integer_t ifsv, fwi_integer_t ifbu, fwi_integer_t ifbv, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object z, fwi_integer_t mz, fwr_real_x8_t z0, object dz, object iopt, object ider, object tu, fwi_integer_t nu, object tv, fwi_integer_t nv, fwi_integer_t nuest, fwi_integer_t nvest, fwr_real_x8_t p, fwr_real_x8_t step, object c, fwi_integer_t nc, fwr_real_x8_t fp, object fpu, object fpv, object nru, object nrv, object wrk, fwi_integer_t lwrk):
    """fpopdi(ifsu, ifsv, ifbu, ifbv, u, mu, v, mv, z, mz, z0, dz, iopt, ider, tu, nu, tv, nv, nuest, nvest, p, step, c, nc, fp, fpu, fpv, nru, nrv, wrk, lwrk) -> (ifsu, ifsv, ifbu, ifbv, u, mu, v, mv, z, mz, z0, dz, iopt, ider, tu, nu, tv, nv, nuest, nvest, p, step, c, nc, fp, fpu, fpv, nru, nrv, wrk, lwrk)

    Parameters
    ----------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    z0 : fwr_real_x8, intent inout
    dz : fwr_real_x8, 1D array, dimension(3), intent inout
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(2), intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    step : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout

    Returns
    -------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    z0 : fwr_real_x8, intent inout
    dz : fwr_real_x8, 1D array, dimension(3), intent inout
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(2), intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    step : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout

    """
    cdef np.ndarray u_, v_, z_, dz_, iopt_, ider_, tu_, tv_, c_, fpu_, fpv_, nru_, nrv_, wrk_
    cdef np.npy_intp u_shape[1], v_shape[1], z_shape[1], dz_shape[1], iopt_shape[1], ider_shape[1], tu_shape[1], tv_shape[1], c_shape[1], fpu_shape[1], fpv_shape[1], nru_shape[1], nrv_shape[1], wrk_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= mz <= z_shape[0]):
        raise ValueError("(0 <= mz <= z.shape[0]) not satisifed")
    dz_ = fw_asfortranarray(dz, fwr_real_x8_t_enum, 1, dz_shape, False, False)
    if not (0 <= 3 <= dz_shape[0]):
        raise ValueError("(0 <= 3 <= dz.shape[0]) not satisifed")
    iopt_ = fw_asfortranarray(iopt, fwi_integer_t_enum, 1, iopt_shape, False, False)
    if not (0 <= 3 <= iopt_shape[0]):
        raise ValueError("(0 <= 3 <= iopt.shape[0]) not satisifed")
    ider_ = fw_asfortranarray(ider, fwi_integer_t_enum, 1, ider_shape, False, False)
    if not (0 <= 2 <= ider_shape[0]):
        raise ValueError("(0 <= 2 <= ider.shape[0]) not satisifed")
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nu <= tu_shape[0]):
        raise ValueError("(0 <= nu <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nv <= tv_shape[0]):
        raise ValueError("(0 <= nv <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpu_ = fw_asfortranarray(fpu, fwr_real_x8_t_enum, 1, fpu_shape, False, False)
    if not (0 <= nu <= fpu_shape[0]):
        raise ValueError("(0 <= nu <= fpu.shape[0]) not satisifed")
    fpv_ = fw_asfortranarray(fpv, fwr_real_x8_t_enum, 1, fpv_shape, False, False)
    if not (0 <= nv <= fpv_shape[0]):
        raise ValueError("(0 <= nv <= fpv.shape[0]) not satisifed")
    nru_ = fw_asfortranarray(nru, fwi_integer_t_enum, 1, nru_shape, False, False)
    if not (0 <= mu <= nru_shape[0]):
        raise ValueError("(0 <= mu <= nru.shape[0]) not satisifed")
    nrv_ = fw_asfortranarray(nrv, fwi_integer_t_enum, 1, nrv_shape, False, False)
    if not (0 <= mv <= nrv_shape[0]):
        raise ValueError("(0 <= mv <= nrv.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fpopdi(&ifsu, &ifsv, &ifbu, &ifbv, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(z_), &mz, &z0, <fwr_real_x8_t*>np.PyArray_DATA(dz_), <fwi_integer_t*>np.PyArray_DATA(iopt_), <fwi_integer_t*>np.PyArray_DATA(ider_), <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nu, <fwr_real_x8_t*>np.PyArray_DATA(tv_), &nv, &nuest, &nvest, &p, &step, <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpu_), <fwr_real_x8_t*>np.PyArray_DATA(fpv_), <fwi_integer_t*>np.PyArray_DATA(nru_), <fwi_integer_t*>np.PyArray_DATA(nrv_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk)
    return (ifsu, ifsv, ifbu, ifbv, u_, mu, v_, mv, z_, mz, z0, dz_, iopt_, ider_, tu_, nu, tv_, nv, nuest, nvest, p, step, c_, nc, fp, fpu_, fpv_, nru_, nrv_, wrk_, lwrk,)


cpdef object fpopsp(fwi_integer_t ifsu, fwi_integer_t ifsv, fwi_integer_t ifbu, fwi_integer_t ifbv, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object r, fwi_integer_t mr, fwr_real_x8_t r0, fwr_real_x8_t r1, object dr, object iopt, object ider, object tu, fwi_integer_t nu, object tv, fwi_integer_t nv, fwi_integer_t nuest, fwi_integer_t nvest, fwr_real_x8_t p, object step, object c, fwi_integer_t nc, fwr_real_x8_t fp, object fpu, object fpv, object nru, object nrv, object wrk, fwi_integer_t lwrk):
    """fpopsp(ifsu, ifsv, ifbu, ifbv, u, mu, v, mv, r, mr, r0, r1, dr, iopt, ider, tu, nu, tv, nv, nuest, nvest, p, step, c, nc, fp, fpu, fpv, nru, nrv, wrk, lwrk) -> (ifsu, ifsv, ifbu, ifbv, u, mu, v, mv, r, mr, r0, r1, dr, iopt, ider, tu, nu, tv, nv, nuest, nvest, p, step, c, nc, fp, fpu, fpv, nru, nrv, wrk, lwrk)

    Parameters
    ----------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    r : fwr_real_x8, 1D array, dimension(mr), intent inout
    mr : fwi_integer, intent inout
    r0 : fwr_real_x8, intent inout
    r1 : fwr_real_x8, intent inout
    dr : fwr_real_x8, 1D array, dimension(6), intent inout
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(4), intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    step : fwr_real_x8, 1D array, dimension(2), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout

    Returns
    -------
    ifsu : fwi_integer, intent inout
    ifsv : fwi_integer, intent inout
    ifbu : fwi_integer, intent inout
    ifbv : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    r : fwr_real_x8, 1D array, dimension(mr), intent inout
    mr : fwi_integer, intent inout
    r0 : fwr_real_x8, intent inout
    r1 : fwr_real_x8, intent inout
    dr : fwr_real_x8, 1D array, dimension(6), intent inout
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(4), intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    p : fwr_real_x8, intent inout
    step : fwr_real_x8, 1D array, dimension(2), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    nc : fwi_integer, intent inout
    fp : fwr_real_x8, intent inout
    fpu : fwr_real_x8, 1D array, dimension(nu), intent inout
    fpv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout

    """
    cdef np.ndarray u_, v_, r_, dr_, iopt_, ider_, tu_, tv_, step_, c_, fpu_, fpv_, nru_, nrv_, wrk_
    cdef np.npy_intp u_shape[1], v_shape[1], r_shape[1], dr_shape[1], iopt_shape[1], ider_shape[1], tu_shape[1], tv_shape[1], step_shape[1], c_shape[1], fpu_shape[1], fpv_shape[1], nru_shape[1], nrv_shape[1], wrk_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    r_ = fw_asfortranarray(r, fwr_real_x8_t_enum, 1, r_shape, False, False)
    if not (0 <= mr <= r_shape[0]):
        raise ValueError("(0 <= mr <= r.shape[0]) not satisifed")
    dr_ = fw_asfortranarray(dr, fwr_real_x8_t_enum, 1, dr_shape, False, False)
    if not (0 <= 6 <= dr_shape[0]):
        raise ValueError("(0 <= 6 <= dr.shape[0]) not satisifed")
    iopt_ = fw_asfortranarray(iopt, fwi_integer_t_enum, 1, iopt_shape, False, False)
    if not (0 <= 3 <= iopt_shape[0]):
        raise ValueError("(0 <= 3 <= iopt.shape[0]) not satisifed")
    ider_ = fw_asfortranarray(ider, fwi_integer_t_enum, 1, ider_shape, False, False)
    if not (0 <= 4 <= ider_shape[0]):
        raise ValueError("(0 <= 4 <= ider.shape[0]) not satisifed")
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nu <= tu_shape[0]):
        raise ValueError("(0 <= nu <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nv <= tv_shape[0]):
        raise ValueError("(0 <= nv <= tv.shape[0]) not satisifed")
    step_ = fw_asfortranarray(step, fwr_real_x8_t_enum, 1, step_shape, False, False)
    if not (0 <= 2 <= step_shape[0]):
        raise ValueError("(0 <= 2 <= step.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpu_ = fw_asfortranarray(fpu, fwr_real_x8_t_enum, 1, fpu_shape, False, False)
    if not (0 <= nu <= fpu_shape[0]):
        raise ValueError("(0 <= nu <= fpu.shape[0]) not satisifed")
    fpv_ = fw_asfortranarray(fpv, fwr_real_x8_t_enum, 1, fpv_shape, False, False)
    if not (0 <= nv <= fpv_shape[0]):
        raise ValueError("(0 <= nv <= fpv.shape[0]) not satisifed")
    nru_ = fw_asfortranarray(nru, fwi_integer_t_enum, 1, nru_shape, False, False)
    if not (0 <= mu <= nru_shape[0]):
        raise ValueError("(0 <= mu <= nru.shape[0]) not satisifed")
    nrv_ = fw_asfortranarray(nrv, fwi_integer_t_enum, 1, nrv_shape, False, False)
    if not (0 <= mv <= nrv_shape[0]):
        raise ValueError("(0 <= mv <= nrv.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fpopsp(&ifsu, &ifsv, &ifbu, &ifbv, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(r_), &mr, &r0, &r1, <fwr_real_x8_t*>np.PyArray_DATA(dr_), <fwi_integer_t*>np.PyArray_DATA(iopt_), <fwi_integer_t*>np.PyArray_DATA(ider_), <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nu, <fwr_real_x8_t*>np.PyArray_DATA(tv_), &nv, &nuest, &nvest, &p, <fwr_real_x8_t*>np.PyArray_DATA(step_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &nc, &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpu_), <fwr_real_x8_t*>np.PyArray_DATA(fpv_), <fwi_integer_t*>np.PyArray_DATA(nru_), <fwi_integer_t*>np.PyArray_DATA(nrv_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk)
    return (ifsu, ifsv, ifbu, ifbv, u_, mu, v_, mv, r_, mr, r0, r1, dr_, iopt_, ider_, tu_, nu, tv_, nv, nuest, nvest, p, step_, c_, nc, fp, fpu_, fpv_, nru_, nrv_, wrk_, lwrk,)


cpdef object fporde(object x, object y, fwi_integer_t m, fwi_integer_t kx, fwi_integer_t ky, object tx, fwi_integer_t nx, object ty, fwi_integer_t ny, object nummer, object index, fwi_integer_t nreg):
    """fporde(x, y, m, kx, ky, tx, nx, ty, ny, nummer, index, nreg) -> (x, y, m, kx, ky, tx, nx, ty, ny, nummer, index, nreg)

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    nummer : fwi_integer, 1D array, dimension(m), intent inout
    index : fwi_integer, 1D array, dimension(nreg), intent inout
    nreg : fwi_integer, intent inout

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    nummer : fwi_integer, 1D array, dimension(m), intent inout
    index : fwi_integer, 1D array, dimension(nreg), intent inout
    nreg : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, tx_, ty_, nummer_, index_
    cdef np.npy_intp x_shape[1], y_shape[1], tx_shape[1], ty_shape[1], nummer_shape[1], index_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    nummer_ = fw_asfortranarray(nummer, fwi_integer_t_enum, 1, nummer_shape, False, False)
    if not (0 <= m <= nummer_shape[0]):
        raise ValueError("(0 <= m <= nummer.shape[0]) not satisifed")
    index_ = fw_asfortranarray(index, fwi_integer_t_enum, 1, index_shape, False, False)
    if not (0 <= nreg <= index_shape[0]):
        raise ValueError("(0 <= nreg <= index.shape[0]) not satisifed")
    fc.fporde(<fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), &m, &kx, &ky, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwi_integer_t*>np.PyArray_DATA(nummer_), <fwi_integer_t*>np.PyArray_DATA(index_), &nreg)
    return (x_, y_, m, kx, ky, tx_, nx, ty_, ny, nummer_, index_, nreg,)


cpdef object fppara(fwi_integer_t iopt, fwi_integer_t idim, fwi_integer_t m, object u, fwi_integer_t mx, object x, object w, fwr_real_x8_t ub, fwr_real_x8_t ue, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t k1, fwi_integer_t k2, fwi_integer_t n, object t, fwi_integer_t nc, object c, fwr_real_x8_t fp, object fpint, object z, object a, object b, object g, object q, object nrdata, fwi_integer_t ier):
    """fppara(iopt, idim, m, u, mx, x, w, ub, ue, k, s, nest, tol, maxit, k1, k2, n, t, nc, c, fp, fpint, z, a, b, g, q, nrdata, ier) -> (iopt, idim, m, u, mx, x, w, ub, ue, k, s, nest, tol, maxit, k1, k2, n, t, nc, c, fp, fpint, z, a, b, g, q, nrdata, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    ub : fwr_real_x8, intent inout
    ue : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nc), intent inout
    a : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    ub : fwr_real_x8, intent inout
    ue : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nc), intent inout
    a : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray u_, x_, w_, t_, c_, fpint_, z_, a_, b_, g_, q_, nrdata_
    cdef np.npy_intp u_shape[1], x_shape[1], w_shape[1], t_shape[1], c_shape[1], fpint_shape[1], z_shape[1], a_shape[2], b_shape[2], g_shape[2], q_shape[2], nrdata_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= nest <= fpint_shape[0]):
        raise ValueError("(0 <= nest <= fpint.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= nc <= z_shape[0]):
        raise ValueError("(0 <= nc <= z.shape[0]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if nest != a_shape[0]:
        raise ValueError("(nest == a.shape[0]) not satisifed")
    if not (0 <= k1 <= a_shape[1]):
        raise ValueError("(0 <= k1 <= a.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if nest != b_shape[0]:
        raise ValueError("(nest == b.shape[0]) not satisifed")
    if not (0 <= k2 <= b_shape[1]):
        raise ValueError("(0 <= k2 <= b.shape[1]) not satisifed")
    g_ = fw_asfortranarray(g, fwr_real_x8_t_enum, 2, g_shape, False, False)
    if nest != g_shape[0]:
        raise ValueError("(nest == g.shape[0]) not satisifed")
    if not (0 <= k2 <= g_shape[1]):
        raise ValueError("(0 <= k2 <= g.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if m != q_shape[0]:
        raise ValueError("(m == q.shape[0]) not satisifed")
    if not (0 <= k1 <= q_shape[1]):
        raise ValueError("(0 <= k1 <= q.shape[1]) not satisifed")
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, False, False)
    if not (0 <= nest <= nrdata_shape[0]):
        raise ValueError("(0 <= nest <= nrdata.shape[0]) not satisifed")
    fc.fppara(&iopt, &idim, &m, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &ub, &ue, &k, &s, &nest, &tol, &maxit, &k1, &k2, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), &nc, <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(g_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &ier)
    return (iopt, idim, m, u_, mx, x_, w_, ub, ue, k, s, nest, tol, maxit, k1, k2, n, t_, nc, c_, fp, fpint_, z_, a_, b_, g_, q_, nrdata_, ier,)


cpdef object fppasu(fwi_integer_t iopt, object ipar, fwi_integer_t idim, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object z, fwi_integer_t mz, fwr_real_x8_t s, fwi_integer_t nuest, fwi_integer_t nvest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t nc, fwi_integer_t nu, object tu, fwi_integer_t nv, object tv, object c, fwr_real_x8_t fp, fwr_real_x8_t fp0, fwr_real_x8_t fpold, fwr_real_x8_t reducu, fwr_real_x8_t reducv, object fpintu, object fpintv, fwi_integer_t lastdi, fwi_integer_t nplusu, fwi_integer_t nplusv, object nru, object nrv, object nrdatu, object nrdatv, object wrk, fwi_integer_t lwrk, fwi_integer_t ier):
    """fppasu(iopt, ipar, idim, u, mu, v, mv, z, mz, s, nuest, nvest, tol, maxit, nc, nu, tu, nv, tv, c, fp, fp0, fpold, reducu, reducv, fpintu, fpintv, lastdi, nplusu, nplusv, nru, nrv, nrdatu, nrdatv, wrk, lwrk, ier) -> (iopt, ipar, idim, u, mu, v, mv, z, mz, s, nuest, nvest, tol, maxit, nc, nu, tu, nv, tv, c, fp, fp0, fpold, reducu, reducv, fpintu, fpintv, lastdi, nplusu, nplusv, nru, nrv, nrdatu, nrdatv, wrk, lwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    ipar : fwi_integer, 1D array, dimension(2), intent inout
    idim : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz*idim), intent inout
    mz : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc*idim), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpold : fwr_real_x8, intent inout
    reducu : fwr_real_x8, intent inout
    reducv : fwr_real_x8, intent inout
    fpintu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    fpintv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    lastdi : fwi_integer, intent inout
    nplusu : fwi_integer, intent inout
    nplusv : fwi_integer, intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    nrdatu : fwi_integer, 1D array, dimension(nuest), intent inout
    nrdatv : fwi_integer, 1D array, dimension(nvest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    ipar : fwi_integer, 1D array, dimension(2), intent inout
    idim : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz*idim), intent inout
    mz : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc*idim), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpold : fwr_real_x8, intent inout
    reducu : fwr_real_x8, intent inout
    reducv : fwr_real_x8, intent inout
    fpintu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    fpintv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    lastdi : fwi_integer, intent inout
    nplusu : fwi_integer, intent inout
    nplusv : fwi_integer, intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    nrdatu : fwi_integer, 1D array, dimension(nuest), intent inout
    nrdatv : fwi_integer, 1D array, dimension(nvest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray ipar_, u_, v_, z_, tu_, tv_, c_, fpintu_, fpintv_, nru_, nrv_, nrdatu_, nrdatv_, wrk_
    cdef np.npy_intp ipar_shape[1], u_shape[1], v_shape[1], z_shape[1], tu_shape[1], tv_shape[1], c_shape[1], fpintu_shape[1], fpintv_shape[1], nru_shape[1], nrv_shape[1], nrdatu_shape[1], nrdatv_shape[1], wrk_shape[1]
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    if not (0 <= 2 <= ipar_shape[0]):
        raise ValueError("(0 <= 2 <= ipar.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nuest <= tu_shape[0]):
        raise ValueError("(0 <= nuest <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nvest <= tv_shape[0]):
        raise ValueError("(0 <= nvest <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    fpintu_ = fw_asfortranarray(fpintu, fwr_real_x8_t_enum, 1, fpintu_shape, False, False)
    if not (0 <= nuest <= fpintu_shape[0]):
        raise ValueError("(0 <= nuest <= fpintu.shape[0]) not satisifed")
    fpintv_ = fw_asfortranarray(fpintv, fwr_real_x8_t_enum, 1, fpintv_shape, False, False)
    if not (0 <= nvest <= fpintv_shape[0]):
        raise ValueError("(0 <= nvest <= fpintv.shape[0]) not satisifed")
    nru_ = fw_asfortranarray(nru, fwi_integer_t_enum, 1, nru_shape, False, False)
    if not (0 <= mu <= nru_shape[0]):
        raise ValueError("(0 <= mu <= nru.shape[0]) not satisifed")
    nrv_ = fw_asfortranarray(nrv, fwi_integer_t_enum, 1, nrv_shape, False, False)
    if not (0 <= mv <= nrv_shape[0]):
        raise ValueError("(0 <= mv <= nrv.shape[0]) not satisifed")
    nrdatu_ = fw_asfortranarray(nrdatu, fwi_integer_t_enum, 1, nrdatu_shape, False, False)
    if not (0 <= nuest <= nrdatu_shape[0]):
        raise ValueError("(0 <= nuest <= nrdatu.shape[0]) not satisifed")
    nrdatv_ = fw_asfortranarray(nrdatv, fwi_integer_t_enum, 1, nrdatv_shape, False, False)
    if not (0 <= nvest <= nrdatv_shape[0]):
        raise ValueError("(0 <= nvest <= nrdatv.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fppasu(&iopt, <fwi_integer_t*>np.PyArray_DATA(ipar_), &idim, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(z_), &mz, &s, &nuest, &nvest, &tol, &maxit, &nc, &nu, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(tv_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, &fp0, &fpold, &reducu, &reducv, <fwr_real_x8_t*>np.PyArray_DATA(fpintu_), <fwr_real_x8_t*>np.PyArray_DATA(fpintv_), &lastdi, &nplusu, &nplusv, <fwi_integer_t*>np.PyArray_DATA(nru_), <fwi_integer_t*>np.PyArray_DATA(nrv_), <fwi_integer_t*>np.PyArray_DATA(nrdatu_), <fwi_integer_t*>np.PyArray_DATA(nrdatv_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (iopt, ipar_, idim, u_, mu, v_, mv, z_, mz, s, nuest, nvest, tol, maxit, nc, nu, tu_, nv, tv_, c_, fp, fp0, fpold, reducu, reducv, fpintu_, fpintv_, lastdi, nplusu, nplusv, nru_, nrv_, nrdatu_, nrdatv_, wrk_, lwrk, ier,)


cpdef object fpperi(fwi_integer_t iopt, object x, object y, object w, fwi_integer_t m, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t k1, fwi_integer_t k2, fwi_integer_t n, object t, object c, fwr_real_x8_t fp, object fpint, object z, object a1, object a2, object b, object g1, object g2, object q, object nrdata, fwi_integer_t ier):
    """fpperi(iopt, x, y, w, m, k, s, nest, tol, maxit, k1, k2, n, t, c, fp, fpint, z, a1, a2, b, g1, g2, q, nrdata, ier) -> (iopt, x, y, w, m, k, s, nest, tol, maxit, k1, k2, n, t, c, fp, fpint, z, a1, a2, b, g1, g2, q, nrdata, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nest), intent inout
    a1 : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    a2 : fwr_real_x8, 2D array, dimension(nest, k), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g1 : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g2 : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    k1 : fwi_integer, intent inout
    k2 : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(nest), intent inout
    z : fwr_real_x8, 1D array, dimension(nest), intent inout
    a1 : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    a2 : fwr_real_x8, 2D array, dimension(nest, k), intent inout
    b : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g1 : fwr_real_x8, 2D array, dimension(nest, k2), intent inout
    g2 : fwr_real_x8, 2D array, dimension(nest, k1), intent inout
    q : fwr_real_x8, 2D array, dimension(m, k1), intent inout
    nrdata : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, w_, t_, c_, fpint_, z_, a1_, a2_, b_, g1_, g2_, q_, nrdata_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], c_shape[1], fpint_shape[1], z_shape[1], a1_shape[2], a2_shape[2], b_shape[2], g1_shape[2], g2_shape[2], q_shape[2], nrdata_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nest <= c_shape[0]):
        raise ValueError("(0 <= nest <= c.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= nest <= fpint_shape[0]):
        raise ValueError("(0 <= nest <= fpint.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= nest <= z_shape[0]):
        raise ValueError("(0 <= nest <= z.shape[0]) not satisifed")
    a1_ = fw_asfortranarray(a1, fwr_real_x8_t_enum, 2, a1_shape, False, False)
    if nest != a1_shape[0]:
        raise ValueError("(nest == a1.shape[0]) not satisifed")
    if not (0 <= k1 <= a1_shape[1]):
        raise ValueError("(0 <= k1 <= a1.shape[1]) not satisifed")
    a2_ = fw_asfortranarray(a2, fwr_real_x8_t_enum, 2, a2_shape, False, False)
    if nest != a2_shape[0]:
        raise ValueError("(nest == a2.shape[0]) not satisifed")
    if not (0 <= k <= a2_shape[1]):
        raise ValueError("(0 <= k <= a2.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if nest != b_shape[0]:
        raise ValueError("(nest == b.shape[0]) not satisifed")
    if not (0 <= k2 <= b_shape[1]):
        raise ValueError("(0 <= k2 <= b.shape[1]) not satisifed")
    g1_ = fw_asfortranarray(g1, fwr_real_x8_t_enum, 2, g1_shape, False, False)
    if nest != g1_shape[0]:
        raise ValueError("(nest == g1.shape[0]) not satisifed")
    if not (0 <= k2 <= g1_shape[1]):
        raise ValueError("(0 <= k2 <= g1.shape[1]) not satisifed")
    g2_ = fw_asfortranarray(g2, fwr_real_x8_t_enum, 2, g2_shape, False, False)
    if nest != g2_shape[0]:
        raise ValueError("(nest == g2.shape[0]) not satisifed")
    if not (0 <= k1 <= g2_shape[1]):
        raise ValueError("(0 <= k1 <= g2.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if m != q_shape[0]:
        raise ValueError("(m == q.shape[0]) not satisifed")
    if not (0 <= k1 <= q_shape[1]):
        raise ValueError("(0 <= k1 <= q.shape[1]) not satisifed")
    nrdata_ = fw_asfortranarray(nrdata, fwi_integer_t_enum, 1, nrdata_shape, False, False)
    if not (0 <= nest <= nrdata_shape[0]):
        raise ValueError("(0 <= nest <= nrdata.shape[0]) not satisifed")
    fc.fpperi(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &m, &k, &s, &nest, &tol, &maxit, &k1, &k2, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(a1_), <fwr_real_x8_t*>np.PyArray_DATA(a2_), <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(g1_), <fwr_real_x8_t*>np.PyArray_DATA(g2_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwi_integer_t*>np.PyArray_DATA(nrdata_), &ier)
    return (iopt, x_, y_, w_, m, k, s, nest, tol, maxit, k1, k2, n, t_, c_, fp, fpint_, z_, a1_, a2_, b_, g1_, g2_, q_, nrdata_, ier,)


cpdef object fppocu(fwi_integer_t idim, fwi_integer_t k, fwr_real_x8_t a, fwr_real_x8_t b, fwi_integer_t ib, object db, fwi_integer_t nb, fwi_integer_t ie, object de, fwi_integer_t ne, object cp, fwi_integer_t np__):
    """fppocu(idim, k, a, b, ib, db, nb, ie, de, ne, cp, np__) -> (idim, k, a, b, ib, db, nb, ie, de, ne, cp, np__)

    Parameters
    ----------
    idim : fwi_integer, intent inout
    k : fwi_integer, intent inout
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout
    ib : fwi_integer, intent inout
    db : fwr_real_x8, 1D array, dimension(nb), intent inout
    nb : fwi_integer, intent inout
    ie : fwi_integer, intent inout
    de : fwr_real_x8, 1D array, dimension(ne), intent inout
    ne : fwi_integer, intent inout
    cp : fwr_real_x8, 1D array, dimension(np), intent inout
    np__ : fwi_integer, intent inout

    Returns
    -------
    idim : fwi_integer, intent inout
    k : fwi_integer, intent inout
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout
    ib : fwi_integer, intent inout
    db : fwr_real_x8, 1D array, dimension(nb), intent inout
    nb : fwi_integer, intent inout
    ie : fwi_integer, intent inout
    de : fwr_real_x8, 1D array, dimension(ne), intent inout
    ne : fwi_integer, intent inout
    cp : fwr_real_x8, 1D array, dimension(np), intent inout
    np__ : fwi_integer, intent inout

    """
    cdef np.ndarray db_, de_, cp_
    cdef np.npy_intp db_shape[1], de_shape[1], cp_shape[1]
    db_ = fw_asfortranarray(db, fwr_real_x8_t_enum, 1, db_shape, False, False)
    if not (0 <= nb <= db_shape[0]):
        raise ValueError("(0 <= nb <= db.shape[0]) not satisifed")
    de_ = fw_asfortranarray(de, fwr_real_x8_t_enum, 1, de_shape, False, False)
    if not (0 <= ne <= de_shape[0]):
        raise ValueError("(0 <= ne <= de.shape[0]) not satisifed")
    cp_ = fw_asfortranarray(cp, fwr_real_x8_t_enum, 1, cp_shape, False, False)
    if not (0 <= np__ <= cp_shape[0]):
        raise ValueError("(0 <= np__ <= cp.shape[0]) not satisifed")
    fc.fppocu(&idim, &k, &a, &b, &ib, <fwr_real_x8_t*>np.PyArray_DATA(db_), &nb, &ie, <fwr_real_x8_t*>np.PyArray_DATA(de_), &ne, <fwr_real_x8_t*>np.PyArray_DATA(cp_), &np__)
    return (idim, k, a, b, ib, db_, nb, ie, de_, ne, cp_, np__,)


cpdef object fppogr(object iopt, object ider, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object z, fwi_integer_t mz, fwr_real_x8_t z0, fwr_real_x8_t r, fwr_real_x8_t s, fwi_integer_t nuest, fwi_integer_t nvest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t nc, fwi_integer_t nu, object tu, fwi_integer_t nv, object tv, object c, fwr_real_x8_t fp, fwr_real_x8_t fp0, fwr_real_x8_t fpold, fwr_real_x8_t reducu, fwr_real_x8_t reducv, object fpintu, object fpintv, object dz, fwr_real_x8_t step, fwi_integer_t lastdi, fwi_integer_t nplusu, fwi_integer_t nplusv, fwi_integer_t lasttu, object nru, object nrv, object nrdatu, object nrdatv, object wrk, fwi_integer_t lwrk, fwi_integer_t ier):
    """fppogr(iopt, ider, u, mu, v, mv, z, mz, z0, r, s, nuest, nvest, tol, maxit, nc, nu, tu, nv, tv, c, fp, fp0, fpold, reducu, reducv, fpintu, fpintv, dz, step, lastdi, nplusu, nplusv, lasttu, nru, nrv, nrdatu, nrdatv, wrk, lwrk, ier) -> (iopt, ider, u, mu, v, mv, z, mz, z0, r, s, nuest, nvest, tol, maxit, nc, nu, tu, nv, tv, c, fp, fp0, fpold, reducu, reducv, fpintu, fpintv, dz, step, lastdi, nplusu, nplusv, lasttu, nru, nrv, nrdatu, nrdatv, wrk, lwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(2), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    z0 : fwr_real_x8, intent inout
    r : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpold : fwr_real_x8, intent inout
    reducu : fwr_real_x8, intent inout
    reducv : fwr_real_x8, intent inout
    fpintu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    fpintv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    dz : fwr_real_x8, 1D array, dimension(3), intent inout
    step : fwr_real_x8, intent inout
    lastdi : fwi_integer, intent inout
    nplusu : fwi_integer, intent inout
    nplusv : fwi_integer, intent inout
    lasttu : fwi_integer, intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    nrdatu : fwi_integer, 1D array, dimension(nuest), intent inout
    nrdatv : fwi_integer, 1D array, dimension(nvest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(2), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    z0 : fwr_real_x8, intent inout
    r : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpold : fwr_real_x8, intent inout
    reducu : fwr_real_x8, intent inout
    reducv : fwr_real_x8, intent inout
    fpintu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    fpintv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    dz : fwr_real_x8, 1D array, dimension(3), intent inout
    step : fwr_real_x8, intent inout
    lastdi : fwi_integer, intent inout
    nplusu : fwi_integer, intent inout
    nplusv : fwi_integer, intent inout
    lasttu : fwi_integer, intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    nrdatu : fwi_integer, 1D array, dimension(nuest), intent inout
    nrdatv : fwi_integer, 1D array, dimension(nvest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray iopt_, ider_, u_, v_, z_, tu_, tv_, c_, fpintu_, fpintv_, dz_, nru_, nrv_, nrdatu_, nrdatv_, wrk_
    cdef np.npy_intp iopt_shape[1], ider_shape[1], u_shape[1], v_shape[1], z_shape[1], tu_shape[1], tv_shape[1], c_shape[1], fpintu_shape[1], fpintv_shape[1], dz_shape[1], nru_shape[1], nrv_shape[1], nrdatu_shape[1], nrdatv_shape[1], wrk_shape[1]
    iopt_ = fw_asfortranarray(iopt, fwi_integer_t_enum, 1, iopt_shape, False, False)
    if not (0 <= 3 <= iopt_shape[0]):
        raise ValueError("(0 <= 3 <= iopt.shape[0]) not satisifed")
    ider_ = fw_asfortranarray(ider, fwi_integer_t_enum, 1, ider_shape, False, False)
    if not (0 <= 2 <= ider_shape[0]):
        raise ValueError("(0 <= 2 <= ider.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= mz <= z_shape[0]):
        raise ValueError("(0 <= mz <= z.shape[0]) not satisifed")
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nuest <= tu_shape[0]):
        raise ValueError("(0 <= nuest <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nvest <= tv_shape[0]):
        raise ValueError("(0 <= nvest <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpintu_ = fw_asfortranarray(fpintu, fwr_real_x8_t_enum, 1, fpintu_shape, False, False)
    if not (0 <= nuest <= fpintu_shape[0]):
        raise ValueError("(0 <= nuest <= fpintu.shape[0]) not satisifed")
    fpintv_ = fw_asfortranarray(fpintv, fwr_real_x8_t_enum, 1, fpintv_shape, False, False)
    if not (0 <= nvest <= fpintv_shape[0]):
        raise ValueError("(0 <= nvest <= fpintv.shape[0]) not satisifed")
    dz_ = fw_asfortranarray(dz, fwr_real_x8_t_enum, 1, dz_shape, False, False)
    if not (0 <= 3 <= dz_shape[0]):
        raise ValueError("(0 <= 3 <= dz.shape[0]) not satisifed")
    nru_ = fw_asfortranarray(nru, fwi_integer_t_enum, 1, nru_shape, False, False)
    if not (0 <= mu <= nru_shape[0]):
        raise ValueError("(0 <= mu <= nru.shape[0]) not satisifed")
    nrv_ = fw_asfortranarray(nrv, fwi_integer_t_enum, 1, nrv_shape, False, False)
    if not (0 <= mv <= nrv_shape[0]):
        raise ValueError("(0 <= mv <= nrv.shape[0]) not satisifed")
    nrdatu_ = fw_asfortranarray(nrdatu, fwi_integer_t_enum, 1, nrdatu_shape, False, False)
    if not (0 <= nuest <= nrdatu_shape[0]):
        raise ValueError("(0 <= nuest <= nrdatu.shape[0]) not satisifed")
    nrdatv_ = fw_asfortranarray(nrdatv, fwi_integer_t_enum, 1, nrdatv_shape, False, False)
    if not (0 <= nvest <= nrdatv_shape[0]):
        raise ValueError("(0 <= nvest <= nrdatv.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fppogr(<fwi_integer_t*>np.PyArray_DATA(iopt_), <fwi_integer_t*>np.PyArray_DATA(ider_), <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(z_), &mz, &z0, &r, &s, &nuest, &nvest, &tol, &maxit, &nc, &nu, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(tv_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, &fp0, &fpold, &reducu, &reducv, <fwr_real_x8_t*>np.PyArray_DATA(fpintu_), <fwr_real_x8_t*>np.PyArray_DATA(fpintv_), <fwr_real_x8_t*>np.PyArray_DATA(dz_), &step, &lastdi, &nplusu, &nplusv, &lasttu, <fwi_integer_t*>np.PyArray_DATA(nru_), <fwi_integer_t*>np.PyArray_DATA(nrv_), <fwi_integer_t*>np.PyArray_DATA(nrdatu_), <fwi_integer_t*>np.PyArray_DATA(nrdatv_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (iopt_, ider_, u_, mu, v_, mv, z_, mz, z0, r, s, nuest, nvest, tol, maxit, nc, nu, tu_, nv, tv_, c_, fp, fp0, fpold, reducu, reducv, fpintu_, fpintv_, dz_, step, lastdi, nplusu, nplusv, lasttu, nru_, nrv_, nrdatu_, nrdatv_, wrk_, lwrk, ier,)


cpdef object fppola(fwi_integer_t iopt1, fwi_integer_t iopt2, fwi_integer_t iopt3, fwi_integer_t m, object u, object v, object z, object w, fwr_real_x8_t rad, fwr_real_x8_t s, fwi_integer_t nuest, fwi_integer_t nvest, fwr_real_x8_t eta, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t ib1, fwi_integer_t ib3, fwi_integer_t nc, fwi_integer_t ncc, fwi_integer_t intest, fwi_integer_t nrest, fwi_integer_t nu, object tu, fwi_integer_t nv, object tv, object c, fwr_real_x8_t fp, fwr_real_x8_t sup, object fpint, object coord, object f, object ff, object row, object cs, object cosi, object a, object q, object bu, object bv, object spu, object spv, object h, object index, object nummer, object wrk, fwi_integer_t lwrk, fwi_integer_t ier):
    """fppola(iopt1, iopt2, iopt3, m, u, v, z, w, rad, s, nuest, nvest, eta, tol, maxit, ib1, ib3, nc, ncc, intest, nrest, nu, tu, nv, tv, c, fp, sup, fpint, coord, f, ff, row, cs, cosi, a, q, bu, bv, spu, spv, h, index, nummer, wrk, lwrk, ier) -> (iopt1, iopt2, iopt3, m, u, v, z, w, rad, s, nuest, nvest, eta, tol, maxit, ib1, ib3, nc, ncc, intest, nrest, nu, tu, nv, tv, c, fp, sup, fpint, coord, f, ff, row, cs, cosi, a, q, bu, bv, spu, spv, h, index, nummer, wrk, lwrk, ier)

    Parameters
    ----------
    iopt1 : fwi_integer, intent inout
    iopt2 : fwi_integer, intent inout
    iopt3 : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    v : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    rad : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    eta : fwr_real_x8, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    ib1 : fwi_integer, intent inout
    ib3 : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    ncc : fwi_integer, intent inout
    intest : fwi_integer, intent inout
    nrest : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    sup : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(intest), intent inout
    coord : fwr_real_x8, 1D array, dimension(intest), intent inout
    f : fwr_real_x8, 1D array, dimension(ncc), intent inout
    ff : fwr_real_x8, 1D array, dimension(nc), intent inout
    row : fwr_real_x8, 1D array, dimension(nvest), intent inout
    cs : fwr_real_x8, 1D array, dimension(nvest), intent inout
    cosi : fwr_real_x8, 2D array, dimension(5, nvest), intent inout
    a : fwr_real_x8, 2D array, dimension(ncc, ib1), intent inout
    q : fwr_real_x8, 2D array, dimension(ncc, ib3), intent inout
    bu : fwr_real_x8, 2D array, dimension(nuest, 5), intent inout
    bv : fwr_real_x8, 2D array, dimension(nvest, 5), intent inout
    spu : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    spv : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    h : fwr_real_x8, 1D array, dimension(ib3), intent inout
    index : fwi_integer, 1D array, dimension(nrest), intent inout
    nummer : fwi_integer, 1D array, dimension(m), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt1 : fwi_integer, intent inout
    iopt2 : fwi_integer, intent inout
    iopt3 : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    v : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    rad : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    eta : fwr_real_x8, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    ib1 : fwi_integer, intent inout
    ib3 : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    ncc : fwi_integer, intent inout
    intest : fwi_integer, intent inout
    nrest : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    sup : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(intest), intent inout
    coord : fwr_real_x8, 1D array, dimension(intest), intent inout
    f : fwr_real_x8, 1D array, dimension(ncc), intent inout
    ff : fwr_real_x8, 1D array, dimension(nc), intent inout
    row : fwr_real_x8, 1D array, dimension(nvest), intent inout
    cs : fwr_real_x8, 1D array, dimension(nvest), intent inout
    cosi : fwr_real_x8, 2D array, dimension(5, nvest), intent inout
    a : fwr_real_x8, 2D array, dimension(ncc, ib1), intent inout
    q : fwr_real_x8, 2D array, dimension(ncc, ib3), intent inout
    bu : fwr_real_x8, 2D array, dimension(nuest, 5), intent inout
    bv : fwr_real_x8, 2D array, dimension(nvest, 5), intent inout
    spu : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    spv : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    h : fwr_real_x8, 1D array, dimension(ib3), intent inout
    index : fwi_integer, 1D array, dimension(nrest), intent inout
    nummer : fwi_integer, 1D array, dimension(m), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray u_, v_, z_, w_, tu_, tv_, c_, fpint_, coord_, f_, ff_, row_, cs_, cosi_, a_, q_, bu_, bv_, spu_, spv_, h_, index_, nummer_, wrk_
    cdef np.npy_intp u_shape[1], v_shape[1], z_shape[1], w_shape[1], tu_shape[1], tv_shape[1], c_shape[1], fpint_shape[1], coord_shape[1], f_shape[1], ff_shape[1], row_shape[1], cs_shape[1], cosi_shape[2], a_shape[2], q_shape[2], bu_shape[2], bv_shape[2], spu_shape[2], spv_shape[2], h_shape[1], index_shape[1], nummer_shape[1], wrk_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= m <= v_shape[0]):
        raise ValueError("(0 <= m <= v.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= m <= z_shape[0]):
        raise ValueError("(0 <= m <= z.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nuest <= tu_shape[0]):
        raise ValueError("(0 <= nuest <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nvest <= tv_shape[0]):
        raise ValueError("(0 <= nvest <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= intest <= fpint_shape[0]):
        raise ValueError("(0 <= intest <= fpint.shape[0]) not satisifed")
    coord_ = fw_asfortranarray(coord, fwr_real_x8_t_enum, 1, coord_shape, False, False)
    if not (0 <= intest <= coord_shape[0]):
        raise ValueError("(0 <= intest <= coord.shape[0]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    if not (0 <= ncc <= f_shape[0]):
        raise ValueError("(0 <= ncc <= f.shape[0]) not satisifed")
    ff_ = fw_asfortranarray(ff, fwr_real_x8_t_enum, 1, ff_shape, False, False)
    if not (0 <= nc <= ff_shape[0]):
        raise ValueError("(0 <= nc <= ff.shape[0]) not satisifed")
    row_ = fw_asfortranarray(row, fwr_real_x8_t_enum, 1, row_shape, False, False)
    if not (0 <= nvest <= row_shape[0]):
        raise ValueError("(0 <= nvest <= row.shape[0]) not satisifed")
    cs_ = fw_asfortranarray(cs, fwr_real_x8_t_enum, 1, cs_shape, False, False)
    if not (0 <= nvest <= cs_shape[0]):
        raise ValueError("(0 <= nvest <= cs.shape[0]) not satisifed")
    cosi_ = fw_asfortranarray(cosi, fwr_real_x8_t_enum, 2, cosi_shape, False, False)
    if 5 != cosi_shape[0]:
        raise ValueError("(5 == cosi.shape[0]) not satisifed")
    if not (0 <= nvest <= cosi_shape[1]):
        raise ValueError("(0 <= nvest <= cosi.shape[1]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if ncc != a_shape[0]:
        raise ValueError("(ncc == a.shape[0]) not satisifed")
    if not (0 <= ib1 <= a_shape[1]):
        raise ValueError("(0 <= ib1 <= a.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if ncc != q_shape[0]:
        raise ValueError("(ncc == q.shape[0]) not satisifed")
    if not (0 <= ib3 <= q_shape[1]):
        raise ValueError("(0 <= ib3 <= q.shape[1]) not satisifed")
    bu_ = fw_asfortranarray(bu, fwr_real_x8_t_enum, 2, bu_shape, False, False)
    if nuest != bu_shape[0]:
        raise ValueError("(nuest == bu.shape[0]) not satisifed")
    if not (0 <= 5 <= bu_shape[1]):
        raise ValueError("(0 <= 5 <= bu.shape[1]) not satisifed")
    bv_ = fw_asfortranarray(bv, fwr_real_x8_t_enum, 2, bv_shape, False, False)
    if nvest != bv_shape[0]:
        raise ValueError("(nvest == bv.shape[0]) not satisifed")
    if not (0 <= 5 <= bv_shape[1]):
        raise ValueError("(0 <= 5 <= bv.shape[1]) not satisifed")
    spu_ = fw_asfortranarray(spu, fwr_real_x8_t_enum, 2, spu_shape, False, False)
    if m != spu_shape[0]:
        raise ValueError("(m == spu.shape[0]) not satisifed")
    if not (0 <= 4 <= spu_shape[1]):
        raise ValueError("(0 <= 4 <= spu.shape[1]) not satisifed")
    spv_ = fw_asfortranarray(spv, fwr_real_x8_t_enum, 2, spv_shape, False, False)
    if m != spv_shape[0]:
        raise ValueError("(m == spv.shape[0]) not satisifed")
    if not (0 <= 4 <= spv_shape[1]):
        raise ValueError("(0 <= 4 <= spv.shape[1]) not satisifed")
    h_ = fw_asfortranarray(h, fwr_real_x8_t_enum, 1, h_shape, False, False)
    if not (0 <= ib3 <= h_shape[0]):
        raise ValueError("(0 <= ib3 <= h.shape[0]) not satisifed")
    index_ = fw_asfortranarray(index, fwi_integer_t_enum, 1, index_shape, False, False)
    if not (0 <= nrest <= index_shape[0]):
        raise ValueError("(0 <= nrest <= index.shape[0]) not satisifed")
    nummer_ = fw_asfortranarray(nummer, fwi_integer_t_enum, 1, nummer_shape, False, False)
    if not (0 <= m <= nummer_shape[0]):
        raise ValueError("(0 <= m <= nummer.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fppola(&iopt1, &iopt2, &iopt3, &m, <fwr_real_x8_t*>np.PyArray_DATA(u_), <fwr_real_x8_t*>np.PyArray_DATA(v_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &rad, &s, &nuest, &nvest, &eta, &tol, &maxit, &ib1, &ib3, &nc, &ncc, &intest, &nrest, &nu, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(tv_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, &sup, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(coord_), <fwr_real_x8_t*>np.PyArray_DATA(f_), <fwr_real_x8_t*>np.PyArray_DATA(ff_), <fwr_real_x8_t*>np.PyArray_DATA(row_), <fwr_real_x8_t*>np.PyArray_DATA(cs_), <fwr_real_x8_t*>np.PyArray_DATA(cosi_), <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(bu_), <fwr_real_x8_t*>np.PyArray_DATA(bv_), <fwr_real_x8_t*>np.PyArray_DATA(spu_), <fwr_real_x8_t*>np.PyArray_DATA(spv_), <fwr_real_x8_t*>np.PyArray_DATA(h_), <fwi_integer_t*>np.PyArray_DATA(index_), <fwi_integer_t*>np.PyArray_DATA(nummer_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (iopt1, iopt2, iopt3, m, u_, v_, z_, w_, rad, s, nuest, nvest, eta, tol, maxit, ib1, ib3, nc, ncc, intest, nrest, nu, tu_, nv, tv_, c_, fp, sup, fpint_, coord_, f_, ff_, row_, cs_, cosi_, a_, q_, bu_, bv_, spu_, spv_, h_, index_, nummer_, wrk_, lwrk, ier,)


cpdef object fprank(object a, object f, fwi_integer_t n, fwi_integer_t m, fwi_integer_t na, fwr_real_x8_t tol, object c, fwr_real_x8_t sq, fwi_integer_t rank, object aa, object ff, object h):
    """fprank(a, f, n, m, na, tol, c, sq, rank, aa, ff, h) -> (a, f, n, m, na, tol, c, sq, rank, aa, ff, h)

    Parameters
    ----------
    a : fwr_real_x8, 2D array, dimension(na, m), intent inout
    f : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    na : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    sq : fwr_real_x8, intent inout
    rank : fwi_integer, intent inout
    aa : fwr_real_x8, 2D array, dimension(n, m), intent inout
    ff : fwr_real_x8, 1D array, dimension(n), intent inout
    h : fwr_real_x8, 1D array, dimension(m), intent inout

    Returns
    -------
    a : fwr_real_x8, 2D array, dimension(na, m), intent inout
    f : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    m : fwi_integer, intent inout
    na : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    sq : fwr_real_x8, intent inout
    rank : fwi_integer, intent inout
    aa : fwr_real_x8, 2D array, dimension(n, m), intent inout
    ff : fwr_real_x8, 1D array, dimension(n), intent inout
    h : fwr_real_x8, 1D array, dimension(m), intent inout

    """
    cdef np.ndarray a_, f_, c_, aa_, ff_, h_
    cdef np.npy_intp a_shape[2], f_shape[1], c_shape[1], aa_shape[2], ff_shape[1], h_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if na != a_shape[0]:
        raise ValueError("(na == a.shape[0]) not satisifed")
    if not (0 <= m <= a_shape[1]):
        raise ValueError("(0 <= m <= a.shape[1]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    if not (0 <= n <= f_shape[0]):
        raise ValueError("(0 <= n <= f.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    aa_ = fw_asfortranarray(aa, fwr_real_x8_t_enum, 2, aa_shape, False, False)
    if n != aa_shape[0]:
        raise ValueError("(n == aa.shape[0]) not satisifed")
    if not (0 <= m <= aa_shape[1]):
        raise ValueError("(0 <= m <= aa.shape[1]) not satisifed")
    ff_ = fw_asfortranarray(ff, fwr_real_x8_t_enum, 1, ff_shape, False, False)
    if not (0 <= n <= ff_shape[0]):
        raise ValueError("(0 <= n <= ff.shape[0]) not satisifed")
    h_ = fw_asfortranarray(h, fwr_real_x8_t_enum, 1, h_shape, False, False)
    if not (0 <= m <= h_shape[0]):
        raise ValueError("(0 <= m <= h.shape[0]) not satisifed")
    fc.fprank(<fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(f_), &n, &m, &na, &tol, <fwr_real_x8_t*>np.PyArray_DATA(c_), &sq, &rank, <fwr_real_x8_t*>np.PyArray_DATA(aa_), <fwr_real_x8_t*>np.PyArray_DATA(ff_), <fwr_real_x8_t*>np.PyArray_DATA(h_))
    return (a_, f_, n, m, na, tol, c_, sq, rank, aa_, ff_, h_,)


cpdef object fprati(fwr_real_x8_t p1, fwr_real_x8_t f1, fwr_real_x8_t p2, fwr_real_x8_t f2, fwr_real_x8_t p3, fwr_real_x8_t f3):
    """fprati(p1, f1, p2, f2, p3, f3) -> (fw_ret_arg, p1, f1, p2, f2, p3, f3)

    Parameters
    ----------
    p1 : fwr_real_x8, intent inout
    f1 : fwr_real_x8, intent inout
    p2 : fwr_real_x8, intent inout
    f2 : fwr_real_x8, intent inout
    p3 : fwr_real_x8, intent inout
    f3 : fwr_real_x8, intent inout

    Returns
    -------
    fw_ret_arg : fwr_real_x8, intent out
    p1 : fwr_real_x8, intent inout
    f1 : fwr_real_x8, intent inout
    p2 : fwr_real_x8, intent inout
    f2 : fwr_real_x8, intent inout
    p3 : fwr_real_x8, intent inout
    f3 : fwr_real_x8, intent inout

    """
    cdef fwr_real_x8_t fw_ret_arg
    fw_ret_arg = fc.fprati(&p1, &f1, &p2, &f2, &p3, &f3)
    return (fw_ret_arg, p1, f1, p2, f2, p3, f3,)


cpdef object fpregr(fwi_integer_t iopt, object x, fwi_integer_t mx, object y, fwi_integer_t my, object z, fwi_integer_t mz, fwr_real_x8_t xb, fwr_real_x8_t xe, fwr_real_x8_t yb, fwr_real_x8_t ye, fwi_integer_t kx, fwi_integer_t ky, fwr_real_x8_t s, fwi_integer_t nxest, fwi_integer_t nyest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t nc, fwi_integer_t nx, object tx, fwi_integer_t ny, object ty, object c, fwr_real_x8_t fp, fwr_real_x8_t fp0, fwr_real_x8_t fpold, fwr_real_x8_t reducx, fwr_real_x8_t reducy, object fpintx, object fpinty, fwi_integer_t lastdi, fwi_integer_t nplusx, fwi_integer_t nplusy, object nrx, object nry, object nrdatx, object nrdaty, object wrk, fwi_integer_t lwrk, fwi_integer_t ier):
    """fpregr(iopt, x, mx, y, my, z, mz, xb, xe, yb, ye, kx, ky, s, nxest, nyest, tol, maxit, nc, nx, tx, ny, ty, c, fp, fp0, fpold, reducx, reducy, fpintx, fpinty, lastdi, nplusx, nplusy, nrx, nry, nrdatx, nrdaty, wrk, lwrk, ier) -> (iopt, x, mx, y, my, z, mz, xb, xe, yb, ye, kx, ky, s, nxest, nyest, tol, maxit, nc, nx, tx, ny, ty, c, fp, fp0, fpold, reducx, reducy, fpintx, fpinty, lastdi, nplusx, nplusy, nrx, nry, nrdatx, nrdaty, wrk, lwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nxest : fwi_integer, intent inout
    nyest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    nx : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nxest), intent inout
    ny : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(nyest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpold : fwr_real_x8, intent inout
    reducx : fwr_real_x8, intent inout
    reducy : fwr_real_x8, intent inout
    fpintx : fwr_real_x8, 1D array, dimension(nxest), intent inout
    fpinty : fwr_real_x8, 1D array, dimension(nyest), intent inout
    lastdi : fwi_integer, intent inout
    nplusx : fwi_integer, intent inout
    nplusy : fwi_integer, intent inout
    nrx : fwi_integer, 1D array, dimension(mx), intent inout
    nry : fwi_integer, 1D array, dimension(my), intent inout
    nrdatx : fwi_integer, 1D array, dimension(nxest), intent inout
    nrdaty : fwi_integer, 1D array, dimension(nyest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mz), intent inout
    mz : fwi_integer, intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nxest : fwi_integer, intent inout
    nyest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    nx : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nxest), intent inout
    ny : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(nyest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpold : fwr_real_x8, intent inout
    reducx : fwr_real_x8, intent inout
    reducy : fwr_real_x8, intent inout
    fpintx : fwr_real_x8, 1D array, dimension(nxest), intent inout
    fpinty : fwr_real_x8, 1D array, dimension(nyest), intent inout
    lastdi : fwi_integer, intent inout
    nplusx : fwi_integer, intent inout
    nplusy : fwi_integer, intent inout
    nrx : fwi_integer, 1D array, dimension(mx), intent inout
    nry : fwi_integer, 1D array, dimension(my), intent inout
    nrdatx : fwi_integer, 1D array, dimension(nxest), intent inout
    nrdaty : fwi_integer, 1D array, dimension(nyest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, z_, tx_, ty_, c_, fpintx_, fpinty_, nrx_, nry_, nrdatx_, nrdaty_, wrk_
    cdef np.npy_intp x_shape[1], y_shape[1], z_shape[1], tx_shape[1], ty_shape[1], c_shape[1], fpintx_shape[1], fpinty_shape[1], nrx_shape[1], nry_shape[1], nrdatx_shape[1], nrdaty_shape[1], wrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= my <= y_shape[0]):
        raise ValueError("(0 <= my <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= mz <= z_shape[0]):
        raise ValueError("(0 <= mz <= z.shape[0]) not satisifed")
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nxest <= tx_shape[0]):
        raise ValueError("(0 <= nxest <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= nyest <= ty_shape[0]):
        raise ValueError("(0 <= nyest <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpintx_ = fw_asfortranarray(fpintx, fwr_real_x8_t_enum, 1, fpintx_shape, False, False)
    if not (0 <= nxest <= fpintx_shape[0]):
        raise ValueError("(0 <= nxest <= fpintx.shape[0]) not satisifed")
    fpinty_ = fw_asfortranarray(fpinty, fwr_real_x8_t_enum, 1, fpinty_shape, False, False)
    if not (0 <= nyest <= fpinty_shape[0]):
        raise ValueError("(0 <= nyest <= fpinty.shape[0]) not satisifed")
    nrx_ = fw_asfortranarray(nrx, fwi_integer_t_enum, 1, nrx_shape, False, False)
    if not (0 <= mx <= nrx_shape[0]):
        raise ValueError("(0 <= mx <= nrx.shape[0]) not satisifed")
    nry_ = fw_asfortranarray(nry, fwi_integer_t_enum, 1, nry_shape, False, False)
    if not (0 <= my <= nry_shape[0]):
        raise ValueError("(0 <= my <= nry.shape[0]) not satisifed")
    nrdatx_ = fw_asfortranarray(nrdatx, fwi_integer_t_enum, 1, nrdatx_shape, False, False)
    if not (0 <= nxest <= nrdatx_shape[0]):
        raise ValueError("(0 <= nxest <= nrdatx.shape[0]) not satisifed")
    nrdaty_ = fw_asfortranarray(nrdaty, fwi_integer_t_enum, 1, nrdaty_shape, False, False)
    if not (0 <= nyest <= nrdaty_shape[0]):
        raise ValueError("(0 <= nyest <= nrdaty.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fpregr(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(x_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(y_), &my, <fwr_real_x8_t*>np.PyArray_DATA(z_), &mz, &xb, &xe, &yb, &ye, &kx, &ky, &s, &nxest, &nyest, &tol, &maxit, &nc, &nx, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(ty_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, &fp0, &fpold, &reducx, &reducy, <fwr_real_x8_t*>np.PyArray_DATA(fpintx_), <fwr_real_x8_t*>np.PyArray_DATA(fpinty_), &lastdi, &nplusx, &nplusy, <fwi_integer_t*>np.PyArray_DATA(nrx_), <fwi_integer_t*>np.PyArray_DATA(nry_), <fwi_integer_t*>np.PyArray_DATA(nrdatx_), <fwi_integer_t*>np.PyArray_DATA(nrdaty_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (iopt, x_, mx, y_, my, z_, mz, xb, xe, yb, ye, kx, ky, s, nxest, nyest, tol, maxit, nc, nx, tx_, ny, ty_, c_, fp, fp0, fpold, reducx, reducy, fpintx_, fpinty_, lastdi, nplusx, nplusy, nrx_, nry_, nrdatx_, nrdaty_, wrk_, lwrk, ier,)


cpdef object fprota(fwr_real_x8_t cos, fwr_real_x8_t sin, fwr_real_x8_t a, fwr_real_x8_t b):
    """fprota(cos, sin, a, b) -> (cos, sin, a, b)

    Parameters
    ----------
    cos : fwr_real_x8, intent inout
    sin : fwr_real_x8, intent inout
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout

    Returns
    -------
    cos : fwr_real_x8, intent inout
    sin : fwr_real_x8, intent inout
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout

    """
    fc.fprota(&cos, &sin, &a, &b)
    return (cos, sin, a, b,)


cpdef object fprppo(fwi_integer_t nu, fwi_integer_t nv, fwi_integer_t if1, fwi_integer_t if2, object cosi, fwr_real_x8_t ratio, object c, object f, fwi_integer_t ncoff):
    """fprppo(nu, nv, if1, if2, cosi, ratio, c, f, ncoff) -> (nu, nv, if1, if2, cosi, ratio, c, f, ncoff)

    Parameters
    ----------
    nu : fwi_integer, intent inout
    nv : fwi_integer, intent inout
    if1 : fwi_integer, intent inout
    if2 : fwi_integer, intent inout
    cosi : fwr_real_x8, 2D array, dimension(5, nv), intent inout
    ratio : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(ncoff), intent inout
    f : fwr_real_x8, 1D array, dimension(ncoff), intent inout
    ncoff : fwi_integer, intent inout

    Returns
    -------
    nu : fwi_integer, intent inout
    nv : fwi_integer, intent inout
    if1 : fwi_integer, intent inout
    if2 : fwi_integer, intent inout
    cosi : fwr_real_x8, 2D array, dimension(5, nv), intent inout
    ratio : fwr_real_x8, intent inout
    c : fwr_real_x8, 1D array, dimension(ncoff), intent inout
    f : fwr_real_x8, 1D array, dimension(ncoff), intent inout
    ncoff : fwi_integer, intent inout

    """
    cdef np.ndarray cosi_, c_, f_
    cdef np.npy_intp cosi_shape[2], c_shape[1], f_shape[1]
    cosi_ = fw_asfortranarray(cosi, fwr_real_x8_t_enum, 2, cosi_shape, False, False)
    if 5 != cosi_shape[0]:
        raise ValueError("(5 == cosi.shape[0]) not satisifed")
    if not (0 <= nv <= cosi_shape[1]):
        raise ValueError("(0 <= nv <= cosi.shape[1]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= ncoff <= c_shape[0]):
        raise ValueError("(0 <= ncoff <= c.shape[0]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    if not (0 <= ncoff <= f_shape[0]):
        raise ValueError("(0 <= ncoff <= f.shape[0]) not satisifed")
    fc.fprppo(&nu, &nv, &if1, &if2, <fwr_real_x8_t*>np.PyArray_DATA(cosi_), &ratio, <fwr_real_x8_t*>np.PyArray_DATA(c_), <fwr_real_x8_t*>np.PyArray_DATA(f_), &ncoff)
    return (nu, nv, if1, if2, cosi_, ratio, c_, f_, ncoff,)


cpdef object fprpsp(fwi_integer_t nt, fwi_integer_t np__, object co, object si, object c, object f, fwi_integer_t ncoff):
    """fprpsp(nt, np__, co, si, c, f, ncoff) -> (nt, np__, co, si, c, f, ncoff)

    Parameters
    ----------
    nt : fwi_integer, intent inout
    np__ : fwi_integer, intent inout
    co : fwr_real_x8, 1D array, dimension(np), intent inout
    si : fwr_real_x8, 1D array, dimension(np), intent inout
    c : fwr_real_x8, 1D array, dimension(ncoff), intent inout
    f : fwr_real_x8, 1D array, dimension(ncoff), intent inout
    ncoff : fwi_integer, intent inout

    Returns
    -------
    nt : fwi_integer, intent inout
    np__ : fwi_integer, intent inout
    co : fwr_real_x8, 1D array, dimension(np), intent inout
    si : fwr_real_x8, 1D array, dimension(np), intent inout
    c : fwr_real_x8, 1D array, dimension(ncoff), intent inout
    f : fwr_real_x8, 1D array, dimension(ncoff), intent inout
    ncoff : fwi_integer, intent inout

    """
    cdef np.ndarray co_, si_, c_, f_
    cdef np.npy_intp co_shape[1], si_shape[1], c_shape[1], f_shape[1]
    co_ = fw_asfortranarray(co, fwr_real_x8_t_enum, 1, co_shape, False, False)
    if not (0 <= np__ <= co_shape[0]):
        raise ValueError("(0 <= np__ <= co.shape[0]) not satisifed")
    si_ = fw_asfortranarray(si, fwr_real_x8_t_enum, 1, si_shape, False, False)
    if not (0 <= np__ <= si_shape[0]):
        raise ValueError("(0 <= np__ <= si.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= ncoff <= c_shape[0]):
        raise ValueError("(0 <= ncoff <= c.shape[0]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    if not (0 <= ncoff <= f_shape[0]):
        raise ValueError("(0 <= ncoff <= f.shape[0]) not satisifed")
    fc.fprpsp(&nt, &np__, <fwr_real_x8_t*>np.PyArray_DATA(co_), <fwr_real_x8_t*>np.PyArray_DATA(si_), <fwr_real_x8_t*>np.PyArray_DATA(c_), <fwr_real_x8_t*>np.PyArray_DATA(f_), &ncoff)
    return (nt, np__, co_, si_, c_, f_, ncoff,)


cpdef object fpseno(fwi_integer_t maxtr, object up, object left, object right, object info, fwi_integer_t merk, object ibind, fwi_integer_t nbind):
    """fpseno(maxtr, up, left, right, info, merk, ibind, nbind) -> (maxtr, up, left, right, info, merk, ibind, nbind)

    Parameters
    ----------
    maxtr : fwi_integer, intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    info : fwi_integer, 1D array, dimension(maxtr), intent inout
    merk : fwi_integer, intent inout
    ibind : fwi_integer, 1D array, dimension(nbind), intent inout
    nbind : fwi_integer, intent inout

    Returns
    -------
    maxtr : fwi_integer, intent inout
    up : fwi_integer, 1D array, dimension(maxtr), intent inout
    left : fwi_integer, 1D array, dimension(maxtr), intent inout
    right : fwi_integer, 1D array, dimension(maxtr), intent inout
    info : fwi_integer, 1D array, dimension(maxtr), intent inout
    merk : fwi_integer, intent inout
    ibind : fwi_integer, 1D array, dimension(nbind), intent inout
    nbind : fwi_integer, intent inout

    """
    cdef np.ndarray up_, left_, right_, info_, ibind_
    cdef np.npy_intp up_shape[1], left_shape[1], right_shape[1], info_shape[1], ibind_shape[1]
    up_ = fw_asfortranarray(up, fwi_integer_t_enum, 1, up_shape, False, False)
    if not (0 <= maxtr <= up_shape[0]):
        raise ValueError("(0 <= maxtr <= up.shape[0]) not satisifed")
    left_ = fw_asfortranarray(left, fwi_integer_t_enum, 1, left_shape, False, False)
    if not (0 <= maxtr <= left_shape[0]):
        raise ValueError("(0 <= maxtr <= left.shape[0]) not satisifed")
    right_ = fw_asfortranarray(right, fwi_integer_t_enum, 1, right_shape, False, False)
    if not (0 <= maxtr <= right_shape[0]):
        raise ValueError("(0 <= maxtr <= right.shape[0]) not satisifed")
    info_ = fw_asfortranarray(info, fwi_integer_t_enum, 1, info_shape, False, False)
    if not (0 <= maxtr <= info_shape[0]):
        raise ValueError("(0 <= maxtr <= info.shape[0]) not satisifed")
    ibind_ = fw_asfortranarray(ibind, fwi_integer_t_enum, 1, ibind_shape, False, False)
    if not (0 <= nbind <= ibind_shape[0]):
        raise ValueError("(0 <= nbind <= ibind.shape[0]) not satisifed")
    fc.fpseno(&maxtr, <fwi_integer_t*>np.PyArray_DATA(up_), <fwi_integer_t*>np.PyArray_DATA(left_), <fwi_integer_t*>np.PyArray_DATA(right_), <fwi_integer_t*>np.PyArray_DATA(info_), &merk, <fwi_integer_t*>np.PyArray_DATA(ibind_), &nbind)
    return (maxtr, up_, left_, right_, info_, merk, ibind_, nbind,)


cpdef object fpspgr(object iopt, object ider, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object r, fwi_integer_t mr, fwr_real_x8_t r0, fwr_real_x8_t r1, fwr_real_x8_t s, fwi_integer_t nuest, fwi_integer_t nvest, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t nc, fwi_integer_t nu, object tu, fwi_integer_t nv, object tv, object c, fwr_real_x8_t fp, fwr_real_x8_t fp0, fwr_real_x8_t fpold, fwr_real_x8_t reducu, fwr_real_x8_t reducv, object fpintu, object fpintv, object dr, object step, fwi_integer_t lastdi, fwi_integer_t nplusu, fwi_integer_t nplusv, fwi_integer_t lastu0, fwi_integer_t lastu1, object nru, object nrv, object nrdatu, object nrdatv, object wrk, fwi_integer_t lwrk, fwi_integer_t ier):
    """fpspgr(iopt, ider, u, mu, v, mv, r, mr, r0, r1, s, nuest, nvest, tol, maxit, nc, nu, tu, nv, tv, c, fp, fp0, fpold, reducu, reducv, fpintu, fpintv, dr, step, lastdi, nplusu, nplusv, lastu0, lastu1, nru, nrv, nrdatu, nrdatv, wrk, lwrk, ier) -> (iopt, ider, u, mu, v, mv, r, mr, r0, r1, s, nuest, nvest, tol, maxit, nc, nu, tu, nv, tv, c, fp, fp0, fpold, reducu, reducv, fpintu, fpintv, dr, step, lastdi, nplusu, nplusv, lastu0, lastu1, nru, nrv, nrdatu, nrdatv, wrk, lwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(4), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    r : fwr_real_x8, 1D array, dimension(mr), intent inout
    mr : fwi_integer, intent inout
    r0 : fwr_real_x8, intent inout
    r1 : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpold : fwr_real_x8, intent inout
    reducu : fwr_real_x8, intent inout
    reducv : fwr_real_x8, intent inout
    fpintu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    fpintv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    dr : fwr_real_x8, 1D array, dimension(6), intent inout
    step : fwr_real_x8, 1D array, dimension(2), intent inout
    lastdi : fwi_integer, intent inout
    nplusu : fwi_integer, intent inout
    nplusv : fwi_integer, intent inout
    lastu0 : fwi_integer, intent inout
    lastu1 : fwi_integer, intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    nrdatu : fwi_integer, 1D array, dimension(nuest), intent inout
    nrdatv : fwi_integer, 1D array, dimension(nvest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(4), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    r : fwr_real_x8, 1D array, dimension(mr), intent inout
    mr : fwi_integer, intent inout
    r0 : fwr_real_x8, intent inout
    r1 : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpold : fwr_real_x8, intent inout
    reducu : fwr_real_x8, intent inout
    reducv : fwr_real_x8, intent inout
    fpintu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    fpintv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    dr : fwr_real_x8, 1D array, dimension(6), intent inout
    step : fwr_real_x8, 1D array, dimension(2), intent inout
    lastdi : fwi_integer, intent inout
    nplusu : fwi_integer, intent inout
    nplusv : fwi_integer, intent inout
    lastu0 : fwi_integer, intent inout
    lastu1 : fwi_integer, intent inout
    nru : fwi_integer, 1D array, dimension(mu), intent inout
    nrv : fwi_integer, 1D array, dimension(mv), intent inout
    nrdatu : fwi_integer, 1D array, dimension(nuest), intent inout
    nrdatv : fwi_integer, 1D array, dimension(nvest), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray iopt_, ider_, u_, v_, r_, tu_, tv_, c_, fpintu_, fpintv_, dr_, step_, nru_, nrv_, nrdatu_, nrdatv_, wrk_
    cdef np.npy_intp iopt_shape[1], ider_shape[1], u_shape[1], v_shape[1], r_shape[1], tu_shape[1], tv_shape[1], c_shape[1], fpintu_shape[1], fpintv_shape[1], dr_shape[1], step_shape[1], nru_shape[1], nrv_shape[1], nrdatu_shape[1], nrdatv_shape[1], wrk_shape[1]
    iopt_ = fw_asfortranarray(iopt, fwi_integer_t_enum, 1, iopt_shape, False, False)
    if not (0 <= 3 <= iopt_shape[0]):
        raise ValueError("(0 <= 3 <= iopt.shape[0]) not satisifed")
    ider_ = fw_asfortranarray(ider, fwi_integer_t_enum, 1, ider_shape, False, False)
    if not (0 <= 4 <= ider_shape[0]):
        raise ValueError("(0 <= 4 <= ider.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    r_ = fw_asfortranarray(r, fwr_real_x8_t_enum, 1, r_shape, False, False)
    if not (0 <= mr <= r_shape[0]):
        raise ValueError("(0 <= mr <= r.shape[0]) not satisifed")
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nuest <= tu_shape[0]):
        raise ValueError("(0 <= nuest <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nvest <= tv_shape[0]):
        raise ValueError("(0 <= nvest <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpintu_ = fw_asfortranarray(fpintu, fwr_real_x8_t_enum, 1, fpintu_shape, False, False)
    if not (0 <= nuest <= fpintu_shape[0]):
        raise ValueError("(0 <= nuest <= fpintu.shape[0]) not satisifed")
    fpintv_ = fw_asfortranarray(fpintv, fwr_real_x8_t_enum, 1, fpintv_shape, False, False)
    if not (0 <= nvest <= fpintv_shape[0]):
        raise ValueError("(0 <= nvest <= fpintv.shape[0]) not satisifed")
    dr_ = fw_asfortranarray(dr, fwr_real_x8_t_enum, 1, dr_shape, False, False)
    if not (0 <= 6 <= dr_shape[0]):
        raise ValueError("(0 <= 6 <= dr.shape[0]) not satisifed")
    step_ = fw_asfortranarray(step, fwr_real_x8_t_enum, 1, step_shape, False, False)
    if not (0 <= 2 <= step_shape[0]):
        raise ValueError("(0 <= 2 <= step.shape[0]) not satisifed")
    nru_ = fw_asfortranarray(nru, fwi_integer_t_enum, 1, nru_shape, False, False)
    if not (0 <= mu <= nru_shape[0]):
        raise ValueError("(0 <= mu <= nru.shape[0]) not satisifed")
    nrv_ = fw_asfortranarray(nrv, fwi_integer_t_enum, 1, nrv_shape, False, False)
    if not (0 <= mv <= nrv_shape[0]):
        raise ValueError("(0 <= mv <= nrv.shape[0]) not satisifed")
    nrdatu_ = fw_asfortranarray(nrdatu, fwi_integer_t_enum, 1, nrdatu_shape, False, False)
    if not (0 <= nuest <= nrdatu_shape[0]):
        raise ValueError("(0 <= nuest <= nrdatu.shape[0]) not satisifed")
    nrdatv_ = fw_asfortranarray(nrdatv, fwi_integer_t_enum, 1, nrdatv_shape, False, False)
    if not (0 <= nvest <= nrdatv_shape[0]):
        raise ValueError("(0 <= nvest <= nrdatv.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fpspgr(<fwi_integer_t*>np.PyArray_DATA(iopt_), <fwi_integer_t*>np.PyArray_DATA(ider_), <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(r_), &mr, &r0, &r1, &s, &nuest, &nvest, &tol, &maxit, &nc, &nu, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(tv_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, &fp0, &fpold, &reducu, &reducv, <fwr_real_x8_t*>np.PyArray_DATA(fpintu_), <fwr_real_x8_t*>np.PyArray_DATA(fpintv_), <fwr_real_x8_t*>np.PyArray_DATA(dr_), <fwr_real_x8_t*>np.PyArray_DATA(step_), &lastdi, &nplusu, &nplusv, &lastu0, &lastu1, <fwi_integer_t*>np.PyArray_DATA(nru_), <fwi_integer_t*>np.PyArray_DATA(nrv_), <fwi_integer_t*>np.PyArray_DATA(nrdatu_), <fwi_integer_t*>np.PyArray_DATA(nrdatv_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (iopt_, ider_, u_, mu, v_, mv, r_, mr, r0, r1, s, nuest, nvest, tol, maxit, nc, nu, tu_, nv, tv_, c_, fp, fp0, fpold, reducu, reducv, fpintu_, fpintv_, dr_, step_, lastdi, nplusu, nplusv, lastu0, lastu1, nru_, nrv_, nrdatu_, nrdatv_, wrk_, lwrk, ier,)


cpdef object fpsphe(fwi_integer_t iopt, fwi_integer_t m, object teta, object phi, object r, object w, fwr_real_x8_t s, fwi_integer_t ntest, fwi_integer_t npest, fwr_real_x8_t eta, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t ib1, fwi_integer_t ib3, fwi_integer_t nc, fwi_integer_t ncc, fwi_integer_t intest, fwi_integer_t nrest, fwi_integer_t nt, object tt, fwi_integer_t np__, object tp, object c, fwr_real_x8_t fp, fwr_real_x8_t sup, object fpint, object coord, object f, object ff, object row, object coco, object cosi, object a, object q, object bt, object bp, object spt, object spp, object h, object index, object nummer, object wrk, fwi_integer_t lwrk, fwi_integer_t ier):
    """fpsphe(iopt, m, teta, phi, r, w, s, ntest, npest, eta, tol, maxit, ib1, ib3, nc, ncc, intest, nrest, nt, tt, np__, tp, c, fp, sup, fpint, coord, f, ff, row, coco, cosi, a, q, bt, bp, spt, spp, h, index, nummer, wrk, lwrk, ier) -> (iopt, m, teta, phi, r, w, s, ntest, npest, eta, tol, maxit, ib1, ib3, nc, ncc, intest, nrest, nt, tt, np__, tp, c, fp, sup, fpint, coord, f, ff, row, coco, cosi, a, q, bt, bp, spt, spp, h, index, nummer, wrk, lwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    teta : fwr_real_x8, 1D array, dimension(m), intent inout
    phi : fwr_real_x8, 1D array, dimension(m), intent inout
    r : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    s : fwr_real_x8, intent inout
    ntest : fwi_integer, intent inout
    npest : fwi_integer, intent inout
    eta : fwr_real_x8, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    ib1 : fwi_integer, intent inout
    ib3 : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    ncc : fwi_integer, intent inout
    intest : fwi_integer, intent inout
    nrest : fwi_integer, intent inout
    nt : fwi_integer, intent inout
    tt : fwr_real_x8, 1D array, dimension(ntest), intent inout
    np__ : fwi_integer, intent inout
    tp : fwr_real_x8, 1D array, dimension(npest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    sup : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(intest), intent inout
    coord : fwr_real_x8, 1D array, dimension(intest), intent inout
    f : fwr_real_x8, 1D array, dimension(ncc), intent inout
    ff : fwr_real_x8, 1D array, dimension(nc), intent inout
    row : fwr_real_x8, 1D array, dimension(npest), intent inout
    coco : fwr_real_x8, 1D array, dimension(npest), intent inout
    cosi : fwr_real_x8, 1D array, dimension(npest), intent inout
    a : fwr_real_x8, 2D array, dimension(ncc, ib1), intent inout
    q : fwr_real_x8, 2D array, dimension(ncc, ib3), intent inout
    bt : fwr_real_x8, 2D array, dimension(ntest, 5), intent inout
    bp : fwr_real_x8, 2D array, dimension(npest, 5), intent inout
    spt : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    spp : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    h : fwr_real_x8, 1D array, dimension(ib3), intent inout
    index : fwi_integer, 1D array, dimension(nrest), intent inout
    nummer : fwi_integer, 1D array, dimension(m), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    teta : fwr_real_x8, 1D array, dimension(m), intent inout
    phi : fwr_real_x8, 1D array, dimension(m), intent inout
    r : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    s : fwr_real_x8, intent inout
    ntest : fwi_integer, intent inout
    npest : fwi_integer, intent inout
    eta : fwr_real_x8, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    ib1 : fwi_integer, intent inout
    ib3 : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    ncc : fwi_integer, intent inout
    intest : fwi_integer, intent inout
    nrest : fwi_integer, intent inout
    nt : fwi_integer, intent inout
    tt : fwr_real_x8, 1D array, dimension(ntest), intent inout
    np__ : fwi_integer, intent inout
    tp : fwr_real_x8, 1D array, dimension(npest), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    sup : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(intest), intent inout
    coord : fwr_real_x8, 1D array, dimension(intest), intent inout
    f : fwr_real_x8, 1D array, dimension(ncc), intent inout
    ff : fwr_real_x8, 1D array, dimension(nc), intent inout
    row : fwr_real_x8, 1D array, dimension(npest), intent inout
    coco : fwr_real_x8, 1D array, dimension(npest), intent inout
    cosi : fwr_real_x8, 1D array, dimension(npest), intent inout
    a : fwr_real_x8, 2D array, dimension(ncc, ib1), intent inout
    q : fwr_real_x8, 2D array, dimension(ncc, ib3), intent inout
    bt : fwr_real_x8, 2D array, dimension(ntest, 5), intent inout
    bp : fwr_real_x8, 2D array, dimension(npest, 5), intent inout
    spt : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    spp : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    h : fwr_real_x8, 1D array, dimension(ib3), intent inout
    index : fwi_integer, 1D array, dimension(nrest), intent inout
    nummer : fwi_integer, 1D array, dimension(m), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray teta_, phi_, r_, w_, tt_, tp_, c_, fpint_, coord_, f_, ff_, row_, coco_, cosi_, a_, q_, bt_, bp_, spt_, spp_, h_, index_, nummer_, wrk_
    cdef np.npy_intp teta_shape[1], phi_shape[1], r_shape[1], w_shape[1], tt_shape[1], tp_shape[1], c_shape[1], fpint_shape[1], coord_shape[1], f_shape[1], ff_shape[1], row_shape[1], coco_shape[1], cosi_shape[1], a_shape[2], q_shape[2], bt_shape[2], bp_shape[2], spt_shape[2], spp_shape[2], h_shape[1], index_shape[1], nummer_shape[1], wrk_shape[1]
    teta_ = fw_asfortranarray(teta, fwr_real_x8_t_enum, 1, teta_shape, False, False)
    if not (0 <= m <= teta_shape[0]):
        raise ValueError("(0 <= m <= teta.shape[0]) not satisifed")
    phi_ = fw_asfortranarray(phi, fwr_real_x8_t_enum, 1, phi_shape, False, False)
    if not (0 <= m <= phi_shape[0]):
        raise ValueError("(0 <= m <= phi.shape[0]) not satisifed")
    r_ = fw_asfortranarray(r, fwr_real_x8_t_enum, 1, r_shape, False, False)
    if not (0 <= m <= r_shape[0]):
        raise ValueError("(0 <= m <= r.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    tt_ = fw_asfortranarray(tt, fwr_real_x8_t_enum, 1, tt_shape, False, False)
    if not (0 <= ntest <= tt_shape[0]):
        raise ValueError("(0 <= ntest <= tt.shape[0]) not satisifed")
    tp_ = fw_asfortranarray(tp, fwr_real_x8_t_enum, 1, tp_shape, False, False)
    if not (0 <= npest <= tp_shape[0]):
        raise ValueError("(0 <= npest <= tp.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= intest <= fpint_shape[0]):
        raise ValueError("(0 <= intest <= fpint.shape[0]) not satisifed")
    coord_ = fw_asfortranarray(coord, fwr_real_x8_t_enum, 1, coord_shape, False, False)
    if not (0 <= intest <= coord_shape[0]):
        raise ValueError("(0 <= intest <= coord.shape[0]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    if not (0 <= ncc <= f_shape[0]):
        raise ValueError("(0 <= ncc <= f.shape[0]) not satisifed")
    ff_ = fw_asfortranarray(ff, fwr_real_x8_t_enum, 1, ff_shape, False, False)
    if not (0 <= nc <= ff_shape[0]):
        raise ValueError("(0 <= nc <= ff.shape[0]) not satisifed")
    row_ = fw_asfortranarray(row, fwr_real_x8_t_enum, 1, row_shape, False, False)
    if not (0 <= npest <= row_shape[0]):
        raise ValueError("(0 <= npest <= row.shape[0]) not satisifed")
    coco_ = fw_asfortranarray(coco, fwr_real_x8_t_enum, 1, coco_shape, False, False)
    if not (0 <= npest <= coco_shape[0]):
        raise ValueError("(0 <= npest <= coco.shape[0]) not satisifed")
    cosi_ = fw_asfortranarray(cosi, fwr_real_x8_t_enum, 1, cosi_shape, False, False)
    if not (0 <= npest <= cosi_shape[0]):
        raise ValueError("(0 <= npest <= cosi.shape[0]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if ncc != a_shape[0]:
        raise ValueError("(ncc == a.shape[0]) not satisifed")
    if not (0 <= ib1 <= a_shape[1]):
        raise ValueError("(0 <= ib1 <= a.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if ncc != q_shape[0]:
        raise ValueError("(ncc == q.shape[0]) not satisifed")
    if not (0 <= ib3 <= q_shape[1]):
        raise ValueError("(0 <= ib3 <= q.shape[1]) not satisifed")
    bt_ = fw_asfortranarray(bt, fwr_real_x8_t_enum, 2, bt_shape, False, False)
    if ntest != bt_shape[0]:
        raise ValueError("(ntest == bt.shape[0]) not satisifed")
    if not (0 <= 5 <= bt_shape[1]):
        raise ValueError("(0 <= 5 <= bt.shape[1]) not satisifed")
    bp_ = fw_asfortranarray(bp, fwr_real_x8_t_enum, 2, bp_shape, False, False)
    if npest != bp_shape[0]:
        raise ValueError("(npest == bp.shape[0]) not satisifed")
    if not (0 <= 5 <= bp_shape[1]):
        raise ValueError("(0 <= 5 <= bp.shape[1]) not satisifed")
    spt_ = fw_asfortranarray(spt, fwr_real_x8_t_enum, 2, spt_shape, False, False)
    if m != spt_shape[0]:
        raise ValueError("(m == spt.shape[0]) not satisifed")
    if not (0 <= 4 <= spt_shape[1]):
        raise ValueError("(0 <= 4 <= spt.shape[1]) not satisifed")
    spp_ = fw_asfortranarray(spp, fwr_real_x8_t_enum, 2, spp_shape, False, False)
    if m != spp_shape[0]:
        raise ValueError("(m == spp.shape[0]) not satisifed")
    if not (0 <= 4 <= spp_shape[1]):
        raise ValueError("(0 <= 4 <= spp.shape[1]) not satisifed")
    h_ = fw_asfortranarray(h, fwr_real_x8_t_enum, 1, h_shape, False, False)
    if not (0 <= ib3 <= h_shape[0]):
        raise ValueError("(0 <= ib3 <= h.shape[0]) not satisifed")
    index_ = fw_asfortranarray(index, fwi_integer_t_enum, 1, index_shape, False, False)
    if not (0 <= nrest <= index_shape[0]):
        raise ValueError("(0 <= nrest <= index.shape[0]) not satisifed")
    nummer_ = fw_asfortranarray(nummer, fwi_integer_t_enum, 1, nummer_shape, False, False)
    if not (0 <= m <= nummer_shape[0]):
        raise ValueError("(0 <= m <= nummer.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fpsphe(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(teta_), <fwr_real_x8_t*>np.PyArray_DATA(phi_), <fwr_real_x8_t*>np.PyArray_DATA(r_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &s, &ntest, &npest, &eta, &tol, &maxit, &ib1, &ib3, &nc, &ncc, &intest, &nrest, &nt, <fwr_real_x8_t*>np.PyArray_DATA(tt_), &np__, <fwr_real_x8_t*>np.PyArray_DATA(tp_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, &sup, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(coord_), <fwr_real_x8_t*>np.PyArray_DATA(f_), <fwr_real_x8_t*>np.PyArray_DATA(ff_), <fwr_real_x8_t*>np.PyArray_DATA(row_), <fwr_real_x8_t*>np.PyArray_DATA(coco_), <fwr_real_x8_t*>np.PyArray_DATA(cosi_), <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(bt_), <fwr_real_x8_t*>np.PyArray_DATA(bp_), <fwr_real_x8_t*>np.PyArray_DATA(spt_), <fwr_real_x8_t*>np.PyArray_DATA(spp_), <fwr_real_x8_t*>np.PyArray_DATA(h_), <fwi_integer_t*>np.PyArray_DATA(index_), <fwi_integer_t*>np.PyArray_DATA(nummer_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (iopt, m, teta_, phi_, r_, w_, s, ntest, npest, eta, tol, maxit, ib1, ib3, nc, ncc, intest, nrest, nt, tt_, np__, tp_, c_, fp, sup, fpint_, coord_, f_, ff_, row_, coco_, cosi_, a_, q_, bt_, bp_, spt_, spp_, h_, index_, nummer_, wrk_, lwrk, ier,)


cpdef object fpsuev(fwi_integer_t idim, object tu, fwi_integer_t nu, object tv, fwi_integer_t nv, object c, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object f, object wu, object wv, object lu, object lv):
    """fpsuev(idim, tu, nu, tv, nv, c, u, mu, v, mv, f, wu, wv, lu, lv) -> (idim, tu, nu, tv, nv, c, u, mu, v, mv, f, wu, wv, lu, lv)

    Parameters
    ----------
    idim : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nu-4)*(nv-4)*idim), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    f : fwr_real_x8, 1D array, dimension(mu*mv*idim), intent inout
    wu : fwr_real_x8, 2D array, dimension(mu, 4), intent inout
    wv : fwr_real_x8, 2D array, dimension(mv, 4), intent inout
    lu : fwi_integer, 1D array, dimension(mu), intent inout
    lv : fwi_integer, 1D array, dimension(mv), intent inout

    Returns
    -------
    idim : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nu-4)*(nv-4)*idim), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    f : fwr_real_x8, 1D array, dimension(mu*mv*idim), intent inout
    wu : fwr_real_x8, 2D array, dimension(mu, 4), intent inout
    wv : fwr_real_x8, 2D array, dimension(mv, 4), intent inout
    lu : fwi_integer, 1D array, dimension(mu), intent inout
    lv : fwi_integer, 1D array, dimension(mv), intent inout

    """
    cdef np.ndarray tu_, tv_, c_, u_, v_, f_, wu_, wv_, lu_, lv_
    cdef np.npy_intp tu_shape[1], tv_shape[1], c_shape[1], u_shape[1], v_shape[1], f_shape[1], wu_shape[2], wv_shape[2], lu_shape[1], lv_shape[1]
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nu <= tu_shape[0]):
        raise ValueError("(0 <= nu <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nv <= tv_shape[0]):
        raise ValueError("(0 <= nv <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    wu_ = fw_asfortranarray(wu, fwr_real_x8_t_enum, 2, wu_shape, False, False)
    if mu != wu_shape[0]:
        raise ValueError("(mu == wu.shape[0]) not satisifed")
    if not (0 <= 4 <= wu_shape[1]):
        raise ValueError("(0 <= 4 <= wu.shape[1]) not satisifed")
    wv_ = fw_asfortranarray(wv, fwr_real_x8_t_enum, 2, wv_shape, False, False)
    if mv != wv_shape[0]:
        raise ValueError("(mv == wv.shape[0]) not satisifed")
    if not (0 <= 4 <= wv_shape[1]):
        raise ValueError("(0 <= 4 <= wv.shape[1]) not satisifed")
    lu_ = fw_asfortranarray(lu, fwi_integer_t_enum, 1, lu_shape, False, False)
    if not (0 <= mu <= lu_shape[0]):
        raise ValueError("(0 <= mu <= lu.shape[0]) not satisifed")
    lv_ = fw_asfortranarray(lv, fwi_integer_t_enum, 1, lv_shape, False, False)
    if not (0 <= mv <= lv_shape[0]):
        raise ValueError("(0 <= mv <= lv.shape[0]) not satisifed")
    fc.fpsuev(&idim, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nu, <fwr_real_x8_t*>np.PyArray_DATA(tv_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(c_), <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(f_), <fwr_real_x8_t*>np.PyArray_DATA(wu_), <fwr_real_x8_t*>np.PyArray_DATA(wv_), <fwi_integer_t*>np.PyArray_DATA(lu_), <fwi_integer_t*>np.PyArray_DATA(lv_))
    return (idim, tu_, nu, tv_, nv, c_, u_, mu, v_, mv, f_, wu_, wv_, lu_, lv_,)


cpdef object fpsurf(fwi_integer_t iopt, fwi_integer_t m, object x, object y, object z, object w, fwr_real_x8_t xb, fwr_real_x8_t xe, fwr_real_x8_t yb, fwr_real_x8_t ye, fwi_integer_t kxx, fwi_integer_t kyy, fwr_real_x8_t s, fwi_integer_t nxest, fwi_integer_t nyest, fwr_real_x8_t eta, fwr_real_x8_t tol, fwi_integer_t maxit, fwi_integer_t nmax, fwi_integer_t km1, fwi_integer_t km2, fwi_integer_t ib1, fwi_integer_t ib3, fwi_integer_t nc, fwi_integer_t intest, fwi_integer_t nrest, fwi_integer_t nx0, object tx, fwi_integer_t ny0, object ty, object c, fwr_real_x8_t fp, fwr_real_x8_t fp0, object fpint, object coord, object f, object ff, object a, object q, object bx, object by__, object spx, object spy, object h, object index, object nummer, object wrk, fwi_integer_t lwrk, fwi_integer_t ier):
    """fpsurf(iopt, m, x, y, z, w, xb, xe, yb, ye, kxx, kyy, s, nxest, nyest, eta, tol, maxit, nmax, km1, km2, ib1, ib3, nc, intest, nrest, nx0, tx, ny0, ty, c, fp, fp0, fpint, coord, f, ff, a, q, bx, by__, spx, spy, h, index, nummer, wrk, lwrk, ier) -> (iopt, m, x, y, z, w, xb, xe, yb, ye, kxx, kyy, s, nxest, nyest, eta, tol, maxit, nmax, km1, km2, ib1, ib3, nc, intest, nrest, nx0, tx, ny0, ty, c, fp, fp0, fpint, coord, f, ff, a, q, bx, by__, spx, spy, h, index, nummer, wrk, lwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    kxx : fwi_integer, intent inout
    kyy : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nxest : fwi_integer, intent inout
    nyest : fwi_integer, intent inout
    eta : fwr_real_x8, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nmax : fwi_integer, intent inout
    km1 : fwi_integer, intent inout
    km2 : fwi_integer, intent inout
    ib1 : fwi_integer, intent inout
    ib3 : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    intest : fwi_integer, intent inout
    nrest : fwi_integer, intent inout
    nx0 : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nmax), intent inout
    ny0 : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(nmax), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(intest), intent inout
    coord : fwr_real_x8, 1D array, dimension(intest), intent inout
    f : fwr_real_x8, 1D array, dimension(nc), intent inout
    ff : fwr_real_x8, 1D array, dimension(nc), intent inout
    a : fwr_real_x8, 2D array, dimension(nc, ib1), intent inout
    q : fwr_real_x8, 2D array, dimension(nc, ib3), intent inout
    bx : fwr_real_x8, 2D array, dimension(nmax, km2), intent inout
    by__ : fwr_real_x8, 2D array, dimension(nmax, km2), intent inout
    spx : fwr_real_x8, 2D array, dimension(m, km1), intent inout
    spy : fwr_real_x8, 2D array, dimension(m, km1), intent inout
    h : fwr_real_x8, 1D array, dimension(ib3), intent inout
    index : fwi_integer, 1D array, dimension(nrest), intent inout
    nummer : fwi_integer, 1D array, dimension(m), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    kxx : fwi_integer, intent inout
    kyy : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nxest : fwi_integer, intent inout
    nyest : fwi_integer, intent inout
    eta : fwr_real_x8, intent inout
    tol : fwr_real_x8, intent inout
    maxit : fwi_integer, intent inout
    nmax : fwi_integer, intent inout
    km1 : fwi_integer, intent inout
    km2 : fwi_integer, intent inout
    ib1 : fwi_integer, intent inout
    ib3 : fwi_integer, intent inout
    nc : fwi_integer, intent inout
    intest : fwi_integer, intent inout
    nrest : fwi_integer, intent inout
    nx0 : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nmax), intent inout
    ny0 : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(nmax), intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    fp0 : fwr_real_x8, intent inout
    fpint : fwr_real_x8, 1D array, dimension(intest), intent inout
    coord : fwr_real_x8, 1D array, dimension(intest), intent inout
    f : fwr_real_x8, 1D array, dimension(nc), intent inout
    ff : fwr_real_x8, 1D array, dimension(nc), intent inout
    a : fwr_real_x8, 2D array, dimension(nc, ib1), intent inout
    q : fwr_real_x8, 2D array, dimension(nc, ib3), intent inout
    bx : fwr_real_x8, 2D array, dimension(nmax, km2), intent inout
    by__ : fwr_real_x8, 2D array, dimension(nmax, km2), intent inout
    spx : fwr_real_x8, 2D array, dimension(m, km1), intent inout
    spy : fwr_real_x8, 2D array, dimension(m, km1), intent inout
    h : fwr_real_x8, 1D array, dimension(ib3), intent inout
    index : fwi_integer, 1D array, dimension(nrest), intent inout
    nummer : fwi_integer, 1D array, dimension(m), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, z_, w_, tx_, ty_, c_, fpint_, coord_, f_, ff_, a_, q_, bx_, by___, spx_, spy_, h_, index_, nummer_, wrk_
    cdef np.npy_intp x_shape[1], y_shape[1], z_shape[1], w_shape[1], tx_shape[1], ty_shape[1], c_shape[1], fpint_shape[1], coord_shape[1], f_shape[1], ff_shape[1], a_shape[2], q_shape[2], bx_shape[2], by___shape[2], spx_shape[2], spy_shape[2], h_shape[1], index_shape[1], nummer_shape[1], wrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= m <= z_shape[0]):
        raise ValueError("(0 <= m <= z.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nmax <= tx_shape[0]):
        raise ValueError("(0 <= nmax <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= nmax <= ty_shape[0]):
        raise ValueError("(0 <= nmax <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    fpint_ = fw_asfortranarray(fpint, fwr_real_x8_t_enum, 1, fpint_shape, False, False)
    if not (0 <= intest <= fpint_shape[0]):
        raise ValueError("(0 <= intest <= fpint.shape[0]) not satisifed")
    coord_ = fw_asfortranarray(coord, fwr_real_x8_t_enum, 1, coord_shape, False, False)
    if not (0 <= intest <= coord_shape[0]):
        raise ValueError("(0 <= intest <= coord.shape[0]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    if not (0 <= nc <= f_shape[0]):
        raise ValueError("(0 <= nc <= f.shape[0]) not satisifed")
    ff_ = fw_asfortranarray(ff, fwr_real_x8_t_enum, 1, ff_shape, False, False)
    if not (0 <= nc <= ff_shape[0]):
        raise ValueError("(0 <= nc <= ff.shape[0]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if nc != a_shape[0]:
        raise ValueError("(nc == a.shape[0]) not satisifed")
    if not (0 <= ib1 <= a_shape[1]):
        raise ValueError("(0 <= ib1 <= a.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 2, q_shape, False, False)
    if nc != q_shape[0]:
        raise ValueError("(nc == q.shape[0]) not satisifed")
    if not (0 <= ib3 <= q_shape[1]):
        raise ValueError("(0 <= ib3 <= q.shape[1]) not satisifed")
    bx_ = fw_asfortranarray(bx, fwr_real_x8_t_enum, 2, bx_shape, False, False)
    if nmax != bx_shape[0]:
        raise ValueError("(nmax == bx.shape[0]) not satisifed")
    if not (0 <= km2 <= bx_shape[1]):
        raise ValueError("(0 <= km2 <= bx.shape[1]) not satisifed")
    by___ = fw_asfortranarray(by__, fwr_real_x8_t_enum, 2, by___shape, False, False)
    if nmax != by___shape[0]:
        raise ValueError("(nmax == by__.shape[0]) not satisifed")
    if not (0 <= km2 <= by___shape[1]):
        raise ValueError("(0 <= km2 <= by__.shape[1]) not satisifed")
    spx_ = fw_asfortranarray(spx, fwr_real_x8_t_enum, 2, spx_shape, False, False)
    if m != spx_shape[0]:
        raise ValueError("(m == spx.shape[0]) not satisifed")
    if not (0 <= km1 <= spx_shape[1]):
        raise ValueError("(0 <= km1 <= spx.shape[1]) not satisifed")
    spy_ = fw_asfortranarray(spy, fwr_real_x8_t_enum, 2, spy_shape, False, False)
    if m != spy_shape[0]:
        raise ValueError("(m == spy.shape[0]) not satisifed")
    if not (0 <= km1 <= spy_shape[1]):
        raise ValueError("(0 <= km1 <= spy.shape[1]) not satisifed")
    h_ = fw_asfortranarray(h, fwr_real_x8_t_enum, 1, h_shape, False, False)
    if not (0 <= ib3 <= h_shape[0]):
        raise ValueError("(0 <= ib3 <= h.shape[0]) not satisifed")
    index_ = fw_asfortranarray(index, fwi_integer_t_enum, 1, index_shape, False, False)
    if not (0 <= nrest <= index_shape[0]):
        raise ValueError("(0 <= nrest <= index.shape[0]) not satisifed")
    nummer_ = fw_asfortranarray(nummer, fwi_integer_t_enum, 1, nummer_shape, False, False)
    if not (0 <= m <= nummer_shape[0]):
        raise ValueError("(0 <= m <= nummer.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    fc.fpsurf(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &xb, &xe, &yb, &ye, &kxx, &kyy, &s, &nxest, &nyest, &eta, &tol, &maxit, &nmax, &km1, &km2, &ib1, &ib3, &nc, &intest, &nrest, &nx0, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &ny0, <fwr_real_x8_t*>np.PyArray_DATA(ty_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, &fp0, <fwr_real_x8_t*>np.PyArray_DATA(fpint_), <fwr_real_x8_t*>np.PyArray_DATA(coord_), <fwr_real_x8_t*>np.PyArray_DATA(f_), <fwr_real_x8_t*>np.PyArray_DATA(ff_), <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(bx_), <fwr_real_x8_t*>np.PyArray_DATA(by___), <fwr_real_x8_t*>np.PyArray_DATA(spx_), <fwr_real_x8_t*>np.PyArray_DATA(spy_), <fwr_real_x8_t*>np.PyArray_DATA(h_), <fwi_integer_t*>np.PyArray_DATA(index_), <fwi_integer_t*>np.PyArray_DATA(nummer_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, &ier)
    return (iopt, m, x_, y_, z_, w_, xb, xe, yb, ye, kxx, kyy, s, nxest, nyest, eta, tol, maxit, nmax, km1, km2, ib1, ib3, nc, intest, nrest, nx0, tx_, ny0, ty_, c_, fp, fp0, fpint_, coord_, f_, ff_, a_, q_, bx_, by___, spx_, spy_, h_, index_, nummer_, wrk_, lwrk, ier,)


cpdef object fpsysy(object a, fwi_integer_t n, object g):
    """fpsysy(a, n, g) -> (a, n, g)

    Parameters
    ----------
    a : fwr_real_x8, 2D array, dimension(6, 6), intent inout
    n : fwi_integer, intent inout
    g : fwr_real_x8, 1D array, dimension(6), intent inout

    Returns
    -------
    a : fwr_real_x8, 2D array, dimension(6, 6), intent inout
    n : fwi_integer, intent inout
    g : fwr_real_x8, 1D array, dimension(6), intent inout

    """
    cdef np.ndarray a_, g_
    cdef np.npy_intp a_shape[2], g_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if 6 != a_shape[0]:
        raise ValueError("(6 == a.shape[0]) not satisifed")
    if not (0 <= 6 <= a_shape[1]):
        raise ValueError("(0 <= 6 <= a.shape[1]) not satisifed")
    g_ = fw_asfortranarray(g, fwr_real_x8_t_enum, 1, g_shape, False, False)
    if not (0 <= 6 <= g_shape[0]):
        raise ValueError("(0 <= 6 <= g.shape[0]) not satisifed")
    fc.fpsysy(<fwr_real_x8_t*>np.PyArray_DATA(a_), &n, <fwr_real_x8_t*>np.PyArray_DATA(g_))
    return (a_, n, g_,)


cpdef object fptrnp(fwi_integer_t m, fwi_integer_t mm, fwi_integer_t idim, fwi_integer_t n, object nr, object sp, fwr_real_x8_t p, object b, object z, object a, object q, object right):
    """fptrnp(m, mm, idim, n, nr, sp, p, b, z, a, q, right) -> (m, mm, idim, n, nr, sp, p, b, z, a, q, right)

    Parameters
    ----------
    m : fwi_integer, intent inout
    mm : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    n : fwi_integer, intent inout
    nr : fwi_integer, 1D array, dimension(m), intent inout
    sp : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    p : fwr_real_x8, intent inout
    b : fwr_real_x8, 2D array, dimension(n, 5), intent inout
    z : fwr_real_x8, 1D array, dimension(m*mm*idim), intent inout
    a : fwr_real_x8, 2D array, dimension(n, 5), intent inout
    q : fwr_real_x8, 1D array, dimension((n-4)*mm*idim), intent inout
    right : fwr_real_x8, 1D array, dimension(mm*idim), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    mm : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    n : fwi_integer, intent inout
    nr : fwi_integer, 1D array, dimension(m), intent inout
    sp : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    p : fwr_real_x8, intent inout
    b : fwr_real_x8, 2D array, dimension(n, 5), intent inout
    z : fwr_real_x8, 1D array, dimension(m*mm*idim), intent inout
    a : fwr_real_x8, 2D array, dimension(n, 5), intent inout
    q : fwr_real_x8, 1D array, dimension((n-4)*mm*idim), intent inout
    right : fwr_real_x8, 1D array, dimension(mm*idim), intent inout

    """
    cdef np.ndarray nr_, sp_, b_, z_, a_, q_, right_
    cdef np.npy_intp nr_shape[1], sp_shape[2], b_shape[2], z_shape[1], a_shape[2], q_shape[1], right_shape[1]
    nr_ = fw_asfortranarray(nr, fwi_integer_t_enum, 1, nr_shape, False, False)
    if not (0 <= m <= nr_shape[0]):
        raise ValueError("(0 <= m <= nr.shape[0]) not satisifed")
    sp_ = fw_asfortranarray(sp, fwr_real_x8_t_enum, 2, sp_shape, False, False)
    if m != sp_shape[0]:
        raise ValueError("(m == sp.shape[0]) not satisifed")
    if not (0 <= 4 <= sp_shape[1]):
        raise ValueError("(0 <= 4 <= sp.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= 5 <= b_shape[1]):
        raise ValueError("(0 <= 5 <= b.shape[1]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= 5 <= a_shape[1]):
        raise ValueError("(0 <= 5 <= a.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 1, q_shape, False, False)
    right_ = fw_asfortranarray(right, fwr_real_x8_t_enum, 1, right_shape, False, False)
    fc.fptrnp(&m, &mm, &idim, &n, <fwi_integer_t*>np.PyArray_DATA(nr_), <fwr_real_x8_t*>np.PyArray_DATA(sp_), &p, <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(right_))
    return (m, mm, idim, n, nr_, sp_, p, b_, z_, a_, q_, right_,)


cpdef object fptrpe(fwi_integer_t m, fwi_integer_t mm, fwi_integer_t idim, fwi_integer_t n, object nr, object sp, fwr_real_x8_t p, object b, object z, object a, object aa, object q, object right):
    """fptrpe(m, mm, idim, n, nr, sp, p, b, z, a, aa, q, right) -> (m, mm, idim, n, nr, sp, p, b, z, a, aa, q, right)

    Parameters
    ----------
    m : fwi_integer, intent inout
    mm : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    n : fwi_integer, intent inout
    nr : fwi_integer, 1D array, dimension(m), intent inout
    sp : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    p : fwr_real_x8, intent inout
    b : fwr_real_x8, 2D array, dimension(n, 5), intent inout
    z : fwr_real_x8, 1D array, dimension(m*mm*idim), intent inout
    a : fwr_real_x8, 2D array, dimension(n, 5), intent inout
    aa : fwr_real_x8, 2D array, dimension(n, 4), intent inout
    q : fwr_real_x8, 1D array, dimension((n-7)*mm*idim), intent inout
    right : fwr_real_x8, 1D array, dimension(mm*idim), intent inout

    Returns
    -------
    m : fwi_integer, intent inout
    mm : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    n : fwi_integer, intent inout
    nr : fwi_integer, 1D array, dimension(m), intent inout
    sp : fwr_real_x8, 2D array, dimension(m, 4), intent inout
    p : fwr_real_x8, intent inout
    b : fwr_real_x8, 2D array, dimension(n, 5), intent inout
    z : fwr_real_x8, 1D array, dimension(m*mm*idim), intent inout
    a : fwr_real_x8, 2D array, dimension(n, 5), intent inout
    aa : fwr_real_x8, 2D array, dimension(n, 4), intent inout
    q : fwr_real_x8, 1D array, dimension((n-7)*mm*idim), intent inout
    right : fwr_real_x8, 1D array, dimension(mm*idim), intent inout

    """
    cdef np.ndarray nr_, sp_, b_, z_, a_, aa_, q_, right_
    cdef np.npy_intp nr_shape[1], sp_shape[2], b_shape[2], z_shape[1], a_shape[2], aa_shape[2], q_shape[1], right_shape[1]
    nr_ = fw_asfortranarray(nr, fwi_integer_t_enum, 1, nr_shape, False, False)
    if not (0 <= m <= nr_shape[0]):
        raise ValueError("(0 <= m <= nr.shape[0]) not satisifed")
    sp_ = fw_asfortranarray(sp, fwr_real_x8_t_enum, 2, sp_shape, False, False)
    if m != sp_shape[0]:
        raise ValueError("(m == sp.shape[0]) not satisifed")
    if not (0 <= 4 <= sp_shape[1]):
        raise ValueError("(0 <= 4 <= sp.shape[1]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_real_x8_t_enum, 2, b_shape, False, False)
    if n != b_shape[0]:
        raise ValueError("(n == b.shape[0]) not satisifed")
    if not (0 <= 5 <= b_shape[1]):
        raise ValueError("(0 <= 5 <= b.shape[1]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    a_ = fw_asfortranarray(a, fwr_real_x8_t_enum, 2, a_shape, False, False)
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= 5 <= a_shape[1]):
        raise ValueError("(0 <= 5 <= a.shape[1]) not satisifed")
    aa_ = fw_asfortranarray(aa, fwr_real_x8_t_enum, 2, aa_shape, False, False)
    if n != aa_shape[0]:
        raise ValueError("(n == aa.shape[0]) not satisifed")
    if not (0 <= 4 <= aa_shape[1]):
        raise ValueError("(0 <= 4 <= aa.shape[1]) not satisifed")
    q_ = fw_asfortranarray(q, fwr_real_x8_t_enum, 1, q_shape, False, False)
    right_ = fw_asfortranarray(right, fwr_real_x8_t_enum, 1, right_shape, False, False)
    fc.fptrpe(&m, &mm, &idim, &n, <fwi_integer_t*>np.PyArray_DATA(nr_), <fwr_real_x8_t*>np.PyArray_DATA(sp_), &p, <fwr_real_x8_t*>np.PyArray_DATA(b_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(a_), <fwr_real_x8_t*>np.PyArray_DATA(aa_), <fwr_real_x8_t*>np.PyArray_DATA(q_), <fwr_real_x8_t*>np.PyArray_DATA(right_))
    return (m, mm, idim, n, nr_, sp_, p, b_, z_, a_, aa_, q_, right_,)


cpdef object insert(fwi_integer_t iopt, object t, fwi_integer_t n, object c, fwi_integer_t k, fwr_real_x8_t x, object tt, fwi_integer_t nn, object cc, fwi_integer_t nest, fwi_integer_t ier):
    """insert(iopt, t, n, c, k, x, tt, nn, cc, nest, ier) -> (iopt, t, n, c, k, x, tt, nn, cc, nest, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    k : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    tt : fwr_real_x8, 1D array, dimension(nest), intent inout
    nn : fwi_integer, intent inout
    cc : fwr_real_x8, 1D array, dimension(nest), intent inout
    nest : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    k : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    tt : fwr_real_x8, 1D array, dimension(nest), intent inout
    nn : fwi_integer, intent inout
    cc : fwr_real_x8, 1D array, dimension(nest), intent inout
    nest : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, tt_, cc_
    cdef np.npy_intp t_shape[1], c_shape[1], tt_shape[1], cc_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nest <= c_shape[0]):
        raise ValueError("(0 <= nest <= c.shape[0]) not satisifed")
    tt_ = fw_asfortranarray(tt, fwr_real_x8_t_enum, 1, tt_shape, False, False)
    if not (0 <= nest <= tt_shape[0]):
        raise ValueError("(0 <= nest <= tt.shape[0]) not satisifed")
    cc_ = fw_asfortranarray(cc, fwr_real_x8_t_enum, 1, cc_shape, False, False)
    if not (0 <= nest <= cc_shape[0]):
        raise ValueError("(0 <= nest <= cc.shape[0]) not satisifed")
    fc.insert(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k, &x, <fwr_real_x8_t*>np.PyArray_DATA(tt_), &nn, <fwr_real_x8_t*>np.PyArray_DATA(cc_), &nest, &ier)
    return (iopt, t_, n, c_, k, x, tt_, nn, cc_, nest, ier,)


cpdef object parcur(fwi_integer_t iopt, fwi_integer_t ipar, fwi_integer_t idim, fwi_integer_t m, object u, fwi_integer_t mx, object x, object w, fwr_real_x8_t ub, fwr_real_x8_t ue, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwi_integer_t n, object t, fwi_integer_t nc, object c, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t ier):
    """parcur(iopt, ipar, idim, m, u, mx, x, w, ub, ue, k, s, nest, n, t, nc, c, fp, wrk, lwrk, iwrk, ier) -> (iopt, ipar, idim, m, u, mx, x, w, ub, ue, k, s, nest, n, t, nc, c, fp, wrk, lwrk, iwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    ipar : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    ub : fwr_real_x8, intent inout
    ue : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    ipar : fwi_integer, intent inout
    idim : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    ub : fwr_real_x8, intent inout
    ue : fwr_real_x8, intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    nc : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(nc), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray u_, x_, w_, t_, c_, wrk_, iwrk_
    cdef np.npy_intp u_shape[1], x_shape[1], w_shape[1], t_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nc <= c_shape[0]):
        raise ValueError("(0 <= nc <= c.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= nest <= iwrk_shape[0]):
        raise ValueError("(0 <= nest <= iwrk.shape[0]) not satisifed")
    fc.parcur(&iopt, &ipar, &idim, &m, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &ub, &ue, &k, &s, &nest, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), &nc, <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &ier)
    return (iopt, ipar, idim, m, u_, mx, x_, w_, ub, ue, k, s, nest, n, t_, nc, c_, fp, wrk_, lwrk, iwrk_, ier,)


cpdef object parder(object tx, fwi_integer_t nx, object ty, fwi_integer_t ny, object c, fwi_integer_t kx, fwi_integer_t ky, fwi_integer_t nux, fwi_integer_t nuy, object x, fwi_integer_t mx, object y, fwi_integer_t my, object z, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """parder(tx, nx, ty, ny, c, kx, ky, nux, nuy, x, mx, y, my, z, wrk, lwrk, iwrk, kwrk, ier) -> (tx, nx, ty, ny, c, kx, ky, nux, nuy, x, mx, y, my, z, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    nux : fwi_integer, intent inout
    nuy : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mx*my), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    nux : fwi_integer, intent inout
    nuy : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    mx : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    my : fwi_integer, intent inout
    z : fwr_real_x8, 1D array, dimension(mx*my), intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray tx_, ty_, c_, x_, y_, z_, wrk_, iwrk_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], x_shape[1], y_shape[1], z_shape[1], wrk_shape[1], iwrk_shape[1]
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= my <= y_shape[0]):
        raise ValueError("(0 <= my <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.parder(<fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, &nux, &nuy, <fwr_real_x8_t*>np.PyArray_DATA(x_), &mx, <fwr_real_x8_t*>np.PyArray_DATA(y_), &my, <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (tx_, nx, ty_, ny, c_, kx, ky, nux, nuy, x_, mx, y_, my, z_, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object parsur(fwi_integer_t iopt, object ipar, fwi_integer_t idim, fwi_integer_t mu, object u, fwi_integer_t mv, object v, object f, fwr_real_x8_t s, fwi_integer_t nuest, fwi_integer_t nvest, fwi_integer_t nu, object tu, fwi_integer_t nv, object tv, object c, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """parsur(iopt, ipar, idim, mu, u, mv, v, f, s, nuest, nvest, nu, tu, nv, tv, c, fp, wrk, lwrk, iwrk, kwrk, ier) -> (iopt, ipar, idim, mu, u, mv, v, f, s, nuest, nvest, nu, tu, nv, tv, c, fp, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    ipar : fwi_integer, 1D array, dimension(2), intent inout
    idim : fwi_integer, intent inout
    mu : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mv : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    f : fwr_real_x8, 1D array, dimension(mu*mv*idim), intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension((nuest-4)*(nvest-4)*idim), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    ipar : fwi_integer, 1D array, dimension(2), intent inout
    idim : fwi_integer, intent inout
    mu : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mv : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    f : fwr_real_x8, 1D array, dimension(mu*mv*idim), intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension((nuest-4)*(nvest-4)*idim), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray ipar_, u_, v_, f_, tu_, tv_, c_, wrk_, iwrk_
    cdef np.npy_intp ipar_shape[1], u_shape[1], v_shape[1], f_shape[1], tu_shape[1], tv_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    ipar_ = fw_asfortranarray(ipar, fwi_integer_t_enum, 1, ipar_shape, False, False)
    if not (0 <= 2 <= ipar_shape[0]):
        raise ValueError("(0 <= 2 <= ipar.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nuest <= tu_shape[0]):
        raise ValueError("(0 <= nuest <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nvest <= tv_shape[0]):
        raise ValueError("(0 <= nvest <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.parsur(&iopt, <fwi_integer_t*>np.PyArray_DATA(ipar_), &idim, &mu, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(v_), <fwr_real_x8_t*>np.PyArray_DATA(f_), &s, &nuest, &nvest, &nu, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(tv_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt, ipar_, idim, mu, u_, mv, v_, f_, s, nuest, nvest, nu, tu_, nv, tv_, c_, fp, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object percur(fwi_integer_t iopt, fwi_integer_t m, object x, object y, object w, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t nest, fwi_integer_t n, object t, object c, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t ier):
    """percur(iopt, m, x, y, w, k, s, nest, n, t, c, fp, wrk, lwrk, iwrk, ier) -> (iopt, m, x, y, w, k, s, nest, n, t, c, fp, wrk, lwrk, iwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    k : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nest : fwi_integer, intent inout
    n : fwi_integer, intent inout
    t : fwr_real_x8, 1D array, dimension(nest), intent inout
    c : fwr_real_x8, 1D array, dimension(nest), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(nest), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, w_, t_, c_, wrk_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], w_shape[1], t_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= nest <= t_shape[0]):
        raise ValueError("(0 <= nest <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= nest <= c_shape[0]):
        raise ValueError("(0 <= nest <= c.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= nest <= iwrk_shape[0]):
        raise ValueError("(0 <= nest <= iwrk.shape[0]) not satisifed")
    fc.percur(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &k, &s, &nest, &n, <fwr_real_x8_t*>np.PyArray_DATA(t_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &ier)
    return (iopt, m, x_, y_, w_, k, s, nest, n, t_, c_, fp, wrk_, lwrk, iwrk_, ier,)


cpdef object pogrid(object iopt, object ider, fwi_integer_t mu, object u, fwi_integer_t mv, object v, object z, fwr_real_x8_t z0, fwr_real_x8_t r, fwr_real_x8_t s, fwi_integer_t nuest, fwi_integer_t nvest, fwi_integer_t nu, object tu, fwi_integer_t nv, object tv, object c, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """pogrid(iopt, ider, mu, u, mv, v, z, z0, r, s, nuest, nvest, nu, tu, nv, tv, c, fp, wrk, lwrk, iwrk, kwrk, ier) -> (iopt, ider, mu, u, mv, v, z, z0, r, s, nuest, nvest, nu, tu, nv, tv, c, fp, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(2), intent inout
    mu : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mv : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    z : fwr_real_x8, 1D array, dimension(mu*mv), intent inout
    z0 : fwr_real_x8, intent inout
    r : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension((nuest-4)*(nvest-4)), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(2), intent inout
    mu : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mv : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    z : fwr_real_x8, 1D array, dimension(mu*mv), intent inout
    z0 : fwr_real_x8, intent inout
    r : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension((nuest-4)*(nvest-4)), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray iopt_, ider_, u_, v_, z_, tu_, tv_, c_, wrk_, iwrk_
    cdef np.npy_intp iopt_shape[1], ider_shape[1], u_shape[1], v_shape[1], z_shape[1], tu_shape[1], tv_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    iopt_ = fw_asfortranarray(iopt, fwi_integer_t_enum, 1, iopt_shape, False, False)
    if not (0 <= 3 <= iopt_shape[0]):
        raise ValueError("(0 <= 3 <= iopt.shape[0]) not satisifed")
    ider_ = fw_asfortranarray(ider, fwi_integer_t_enum, 1, ider_shape, False, False)
    if not (0 <= 2 <= ider_shape[0]):
        raise ValueError("(0 <= 2 <= ider.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nuest <= tu_shape[0]):
        raise ValueError("(0 <= nuest <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nvest <= tv_shape[0]):
        raise ValueError("(0 <= nvest <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.pogrid(<fwi_integer_t*>np.PyArray_DATA(iopt_), <fwi_integer_t*>np.PyArray_DATA(ider_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(v_), <fwr_real_x8_t*>np.PyArray_DATA(z_), &z0, &r, &s, &nuest, &nvest, &nu, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(tv_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt_, ider_, mu, u_, mv, v_, z_, z0, r, s, nuest, nvest, nu, tu_, nv, tv_, c_, fp, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object polar(object iopt, fwi_integer_t m, object x, object y, object z, object w, fwr_real_x8_t rad, fwr_real_x8_t s, fwi_integer_t nuest, fwi_integer_t nvest, fwr_real_x8_t eps, fwi_integer_t nu, object tu, fwi_integer_t nv, object tv, object u, object v, object c, fwr_real_x8_t fp, object wrk1, fwi_integer_t lwrk1, object wrk2, fwi_integer_t lwrk2, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """polar(iopt, m, x, y, z, w, rad, s, nuest, nvest, eps, nu, tu, nv, tv, u, v, c, fp, wrk1, lwrk1, wrk2, lwrk2, iwrk, kwrk, ier) -> (iopt, m, x, y, z, w, rad, s, nuest, nvest, eps, nu, tu, nv, tv, u, v, c, fp, wrk1, lwrk1, wrk2, lwrk2, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    rad : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    eps : fwr_real_x8, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    v : fwr_real_x8, 1D array, dimension(m), intent inout
    c : fwr_real_x8, 1D array, dimension((nuest-4)*(nvest-4)), intent inout
    fp : fwr_real_x8, intent inout
    wrk1 : fwr_real_x8, 1D array, dimension(lwrk1), intent inout
    lwrk1 : fwi_integer, intent inout
    wrk2 : fwr_real_x8, 1D array, dimension(lwrk2), intent inout
    lwrk2 : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    rad : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    eps : fwr_real_x8, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    u : fwr_real_x8, 1D array, dimension(m), intent inout
    v : fwr_real_x8, 1D array, dimension(m), intent inout
    c : fwr_real_x8, 1D array, dimension((nuest-4)*(nvest-4)), intent inout
    fp : fwr_real_x8, intent inout
    wrk1 : fwr_real_x8, 1D array, dimension(lwrk1), intent inout
    lwrk1 : fwi_integer, intent inout
    wrk2 : fwr_real_x8, 1D array, dimension(lwrk2), intent inout
    lwrk2 : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray iopt_, x_, y_, z_, w_, tu_, tv_, u_, v_, c_, wrk1_, wrk2_, iwrk_
    cdef np.npy_intp iopt_shape[1], x_shape[1], y_shape[1], z_shape[1], w_shape[1], tu_shape[1], tv_shape[1], u_shape[1], v_shape[1], c_shape[1], wrk1_shape[1], wrk2_shape[1], iwrk_shape[1]
    iopt_ = fw_asfortranarray(iopt, fwi_integer_t_enum, 1, iopt_shape, False, False)
    if not (0 <= 3 <= iopt_shape[0]):
        raise ValueError("(0 <= 3 <= iopt.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= m <= z_shape[0]):
        raise ValueError("(0 <= m <= z.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nuest <= tu_shape[0]):
        raise ValueError("(0 <= nuest <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nvest <= tv_shape[0]):
        raise ValueError("(0 <= nvest <= tv.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= m <= u_shape[0]):
        raise ValueError("(0 <= m <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= m <= v_shape[0]):
        raise ValueError("(0 <= m <= v.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    wrk1_ = fw_asfortranarray(wrk1, fwr_real_x8_t_enum, 1, wrk1_shape, False, False)
    if not (0 <= lwrk1 <= wrk1_shape[0]):
        raise ValueError("(0 <= lwrk1 <= wrk1.shape[0]) not satisifed")
    wrk2_ = fw_asfortranarray(wrk2, fwr_real_x8_t_enum, 1, wrk2_shape, False, False)
    if not (0 <= lwrk2 <= wrk2_shape[0]):
        raise ValueError("(0 <= lwrk2 <= wrk2.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.polar(<fwi_integer_t*>np.PyArray_DATA(iopt_), &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &rad, &s, &nuest, &nvest, &eps, &nu, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(tv_), <fwr_real_x8_t*>np.PyArray_DATA(u_), <fwr_real_x8_t*>np.PyArray_DATA(v_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk1_), &lwrk1, <fwr_real_x8_t*>np.PyArray_DATA(wrk2_), &lwrk2, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt_, m, x_, y_, z_, w_, rad, s, nuest, nvest, eps, nu, tu_, nv, tv_, u_, v_, c_, fp, wrk1_, lwrk1, wrk2_, lwrk2, iwrk_, kwrk, ier,)


cpdef object profil(fwi_integer_t iopt, object tx, fwi_integer_t nx, object ty, fwi_integer_t ny, object c, fwi_integer_t kx, fwi_integer_t ky, fwr_real_x8_t u, fwi_integer_t nu, object cu, fwi_integer_t ier):
    """profil(iopt, tx, nx, ty, ny, c, kx, ky, u, nu, cu, ier) -> (iopt, tx, nx, ty, ny, c, kx, ky, u, nu, cu, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    u : fwr_real_x8, intent inout
    nu : fwi_integer, intent inout
    cu : fwr_real_x8, 1D array, dimension(nu), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nx), intent inout
    nx : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(ny), intent inout
    ny : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nx-kx-1)*(ny-ky-1)), intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    u : fwr_real_x8, intent inout
    nu : fwi_integer, intent inout
    cu : fwr_real_x8, 1D array, dimension(nu), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray tx_, ty_, c_, cu_
    cdef np.npy_intp tx_shape[1], ty_shape[1], c_shape[1], cu_shape[1]
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nx <= tx_shape[0]):
        raise ValueError("(0 <= nx <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= ny <= ty_shape[0]):
        raise ValueError("(0 <= ny <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    cu_ = fw_asfortranarray(cu, fwr_real_x8_t_enum, 1, cu_shape, False, False)
    if not (0 <= nu <= cu_shape[0]):
        raise ValueError("(0 <= nu <= cu.shape[0]) not satisifed")
    fc.profil(&iopt, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &nx, <fwr_real_x8_t*>np.PyArray_DATA(ty_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(c_), &kx, &ky, &u, &nu, <fwr_real_x8_t*>np.PyArray_DATA(cu_), &ier)
    return (iopt, tx_, nx, ty_, ny, c_, kx, ky, u, nu, cu_, ier,)


cpdef object regrid(fwi_integer_t iopt, fwi_integer_t mx, object x, fwi_integer_t my, object y, object z, fwr_real_x8_t xb, fwr_real_x8_t xe, fwr_real_x8_t yb, fwr_real_x8_t ye, fwi_integer_t kx, fwi_integer_t ky, fwr_real_x8_t s, fwi_integer_t nxest, fwi_integer_t nyest, fwi_integer_t nx, object tx, fwi_integer_t ny, object ty, object c, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """regrid(iopt, mx, x, my, y, z, xb, xe, yb, ye, kx, ky, s, nxest, nyest, nx, tx, ny, ty, c, fp, wrk, lwrk, iwrk, kwrk, ier) -> (iopt, mx, x, my, y, z, xb, xe, yb, ye, kx, ky, s, nxest, nyest, nx, tx, ny, ty, c, fp, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    my : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    z : fwr_real_x8, 1D array, dimension(mx*my), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nxest : fwi_integer, intent inout
    nyest : fwi_integer, intent inout
    nx : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nxest), intent inout
    ny : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(nyest), intent inout
    c : fwr_real_x8, 1D array, dimension((nxest-kx-1)*(nyest-ky-1)), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    mx : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(mx), intent inout
    my : fwi_integer, intent inout
    y : fwr_real_x8, 1D array, dimension(my), intent inout
    z : fwr_real_x8, 1D array, dimension(mx*my), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nxest : fwi_integer, intent inout
    nyest : fwi_integer, intent inout
    nx : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nxest), intent inout
    ny : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(nyest), intent inout
    c : fwr_real_x8, 1D array, dimension((nxest-kx-1)*(nyest-ky-1)), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, z_, tx_, ty_, c_, wrk_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], z_shape[1], tx_shape[1], ty_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= mx <= x_shape[0]):
        raise ValueError("(0 <= mx <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= my <= y_shape[0]):
        raise ValueError("(0 <= my <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nxest <= tx_shape[0]):
        raise ValueError("(0 <= nxest <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= nyest <= ty_shape[0]):
        raise ValueError("(0 <= nyest <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.regrid(&iopt, &mx, <fwr_real_x8_t*>np.PyArray_DATA(x_), &my, <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), &xb, &xe, &yb, &ye, &kx, &ky, &s, &nxest, &nyest, &nx, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(ty_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt, mx, x_, my, y_, z_, xb, xe, yb, ye, kx, ky, s, nxest, nyest, nx, tx_, ny, ty_, c_, fp, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object spalde(object t, fwi_integer_t n, object c, fwi_integer_t k1, fwr_real_x8_t x, object d, fwi_integer_t ier):
    """spalde(t, n, c, k1, x, d, ier) -> (t, n, c, k1, x, d, ier)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k1 : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    d : fwr_real_x8, 1D array, dimension(k1), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k1 : fwi_integer, intent inout
    x : fwr_real_x8, intent inout
    d : fwr_real_x8, 1D array, dimension(k1), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, d_
    cdef np.npy_intp t_shape[1], c_shape[1], d_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    d_ = fw_asfortranarray(d, fwr_real_x8_t_enum, 1, d_shape, False, False)
    if not (0 <= k1 <= d_shape[0]):
        raise ValueError("(0 <= k1 <= d.shape[0]) not satisifed")
    fc.spalde(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k1, &x, <fwr_real_x8_t*>np.PyArray_DATA(d_), &ier)
    return (t_, n, c_, k1, x, d_, ier,)


cpdef object spgrid(object iopt, object ider, fwi_integer_t mu, object u, fwi_integer_t mv, object v, object r, fwr_real_x8_t r0, fwr_real_x8_t r1, fwr_real_x8_t s, fwi_integer_t nuest, fwi_integer_t nvest, fwi_integer_t nu, object tu, fwi_integer_t nv, object tv, object c, fwr_real_x8_t fp, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """spgrid(iopt, ider, mu, u, mv, v, r, r0, r1, s, nuest, nvest, nu, tu, nv, tv, c, fp, wrk, lwrk, iwrk, kwrk, ier) -> (iopt, ider, mu, u, mv, v, r, r0, r1, s, nuest, nvest, nu, tu, nv, tv, c, fp, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(4), intent inout
    mu : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mv : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    r : fwr_real_x8, 1D array, dimension(mu*mv), intent inout
    r0 : fwr_real_x8, intent inout
    r1 : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension((nuest-4)*(nvest-4)), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, 1D array, dimension(3), intent inout
    ider : fwi_integer, 1D array, dimension(4), intent inout
    mu : fwi_integer, intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mv : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    r : fwr_real_x8, 1D array, dimension(mu*mv), intent inout
    r0 : fwr_real_x8, intent inout
    r1 : fwr_real_x8, intent inout
    s : fwr_real_x8, intent inout
    nuest : fwi_integer, intent inout
    nvest : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nuest), intent inout
    nv : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nvest), intent inout
    c : fwr_real_x8, 1D array, dimension((nuest-4)*(nvest-4)), intent inout
    fp : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray iopt_, ider_, u_, v_, r_, tu_, tv_, c_, wrk_, iwrk_
    cdef np.npy_intp iopt_shape[1], ider_shape[1], u_shape[1], v_shape[1], r_shape[1], tu_shape[1], tv_shape[1], c_shape[1], wrk_shape[1], iwrk_shape[1]
    iopt_ = fw_asfortranarray(iopt, fwi_integer_t_enum, 1, iopt_shape, False, False)
    if not (0 <= 3 <= iopt_shape[0]):
        raise ValueError("(0 <= 3 <= iopt.shape[0]) not satisifed")
    ider_ = fw_asfortranarray(ider, fwi_integer_t_enum, 1, ider_shape, False, False)
    if not (0 <= 4 <= ider_shape[0]):
        raise ValueError("(0 <= 4 <= ider.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    r_ = fw_asfortranarray(r, fwr_real_x8_t_enum, 1, r_shape, False, False)
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nuest <= tu_shape[0]):
        raise ValueError("(0 <= nuest <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nvest <= tv_shape[0]):
        raise ValueError("(0 <= nvest <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.spgrid(<fwi_integer_t*>np.PyArray_DATA(iopt_), <fwi_integer_t*>np.PyArray_DATA(ider_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(u_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(v_), <fwr_real_x8_t*>np.PyArray_DATA(r_), &r0, &r1, &s, &nuest, &nvest, &nu, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(tv_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt_, ider_, mu, u_, mv, v_, r_, r0, r1, s, nuest, nvest, nu, tu_, nv, tv_, c_, fp, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object sphere(fwi_integer_t iopt, fwi_integer_t m, object teta, object phi, object r, object w, fwr_real_x8_t s, fwi_integer_t ntest, fwi_integer_t npest, fwr_real_x8_t eps, fwi_integer_t nt, object tt, fwi_integer_t np__, object tp, object c, fwr_real_x8_t fp, object wrk1, fwi_integer_t lwrk1, object wrk2, fwi_integer_t lwrk2, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """sphere(iopt, m, teta, phi, r, w, s, ntest, npest, eps, nt, tt, np__, tp, c, fp, wrk1, lwrk1, wrk2, lwrk2, iwrk, kwrk, ier) -> (iopt, m, teta, phi, r, w, s, ntest, npest, eps, nt, tt, np__, tp, c, fp, wrk1, lwrk1, wrk2, lwrk2, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    teta : fwr_real_x8, 1D array, dimension(m), intent inout
    phi : fwr_real_x8, 1D array, dimension(m), intent inout
    r : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    s : fwr_real_x8, intent inout
    ntest : fwi_integer, intent inout
    npest : fwi_integer, intent inout
    eps : fwr_real_x8, intent inout
    nt : fwi_integer, intent inout
    tt : fwr_real_x8, 1D array, dimension(ntest), intent inout
    np__ : fwi_integer, intent inout
    tp : fwr_real_x8, 1D array, dimension(npest), intent inout
    c : fwr_real_x8, 1D array, dimension((ntest-4)*(npest-4)), intent inout
    fp : fwr_real_x8, intent inout
    wrk1 : fwr_real_x8, 1D array, dimension(lwrk1), intent inout
    lwrk1 : fwi_integer, intent inout
    wrk2 : fwr_real_x8, 1D array, dimension(lwrk2), intent inout
    lwrk2 : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    teta : fwr_real_x8, 1D array, dimension(m), intent inout
    phi : fwr_real_x8, 1D array, dimension(m), intent inout
    r : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    s : fwr_real_x8, intent inout
    ntest : fwi_integer, intent inout
    npest : fwi_integer, intent inout
    eps : fwr_real_x8, intent inout
    nt : fwi_integer, intent inout
    tt : fwr_real_x8, 1D array, dimension(ntest), intent inout
    np__ : fwi_integer, intent inout
    tp : fwr_real_x8, 1D array, dimension(npest), intent inout
    c : fwr_real_x8, 1D array, dimension((ntest-4)*(npest-4)), intent inout
    fp : fwr_real_x8, intent inout
    wrk1 : fwr_real_x8, 1D array, dimension(lwrk1), intent inout
    lwrk1 : fwi_integer, intent inout
    wrk2 : fwr_real_x8, 1D array, dimension(lwrk2), intent inout
    lwrk2 : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray teta_, phi_, r_, w_, tt_, tp_, c_, wrk1_, wrk2_, iwrk_
    cdef np.npy_intp teta_shape[1], phi_shape[1], r_shape[1], w_shape[1], tt_shape[1], tp_shape[1], c_shape[1], wrk1_shape[1], wrk2_shape[1], iwrk_shape[1]
    teta_ = fw_asfortranarray(teta, fwr_real_x8_t_enum, 1, teta_shape, False, False)
    if not (0 <= m <= teta_shape[0]):
        raise ValueError("(0 <= m <= teta.shape[0]) not satisifed")
    phi_ = fw_asfortranarray(phi, fwr_real_x8_t_enum, 1, phi_shape, False, False)
    if not (0 <= m <= phi_shape[0]):
        raise ValueError("(0 <= m <= phi.shape[0]) not satisifed")
    r_ = fw_asfortranarray(r, fwr_real_x8_t_enum, 1, r_shape, False, False)
    if not (0 <= m <= r_shape[0]):
        raise ValueError("(0 <= m <= r.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    tt_ = fw_asfortranarray(tt, fwr_real_x8_t_enum, 1, tt_shape, False, False)
    if not (0 <= ntest <= tt_shape[0]):
        raise ValueError("(0 <= ntest <= tt.shape[0]) not satisifed")
    tp_ = fw_asfortranarray(tp, fwr_real_x8_t_enum, 1, tp_shape, False, False)
    if not (0 <= npest <= tp_shape[0]):
        raise ValueError("(0 <= npest <= tp.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    wrk1_ = fw_asfortranarray(wrk1, fwr_real_x8_t_enum, 1, wrk1_shape, False, False)
    if not (0 <= lwrk1 <= wrk1_shape[0]):
        raise ValueError("(0 <= lwrk1 <= wrk1.shape[0]) not satisifed")
    wrk2_ = fw_asfortranarray(wrk2, fwr_real_x8_t_enum, 1, wrk2_shape, False, False)
    if not (0 <= lwrk2 <= wrk2_shape[0]):
        raise ValueError("(0 <= lwrk2 <= wrk2.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.sphere(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(teta_), <fwr_real_x8_t*>np.PyArray_DATA(phi_), <fwr_real_x8_t*>np.PyArray_DATA(r_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &s, &ntest, &npest, &eps, &nt, <fwr_real_x8_t*>np.PyArray_DATA(tt_), &np__, <fwr_real_x8_t*>np.PyArray_DATA(tp_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk1_), &lwrk1, <fwr_real_x8_t*>np.PyArray_DATA(wrk2_), &lwrk2, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt, m, teta_, phi_, r_, w_, s, ntest, npest, eps, nt, tt_, np__, tp_, c_, fp, wrk1_, lwrk1, wrk2_, lwrk2, iwrk_, kwrk, ier,)


cpdef object splder(object t, fwi_integer_t n, object c, fwi_integer_t k, fwi_integer_t nu, object x, object y, fwi_integer_t m, fwi_integer_t e, object wrk, fwi_integer_t ier):
    """splder(t, n, c, k, nu, x, y, m, e, wrk, ier) -> (t, n, c, k, nu, x, y, m, e, wrk, ier)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    e : fwi_integer, intent inout
    wrk : fwr_real_x8, 1D array, dimension(n), intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k : fwi_integer, intent inout
    nu : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    e : fwi_integer, intent inout
    wrk : fwr_real_x8, 1D array, dimension(n), intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, x_, y_, wrk_
    cdef np.npy_intp t_shape[1], c_shape[1], x_shape[1], y_shape[1], wrk_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= n <= wrk_shape[0]):
        raise ValueError("(0 <= n <= wrk.shape[0]) not satisifed")
    fc.splder(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k, &nu, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), &m, &e, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &ier)
    return (t_, n, c_, k, nu, x_, y_, m, e, wrk_, ier,)


cpdef object splev(object t, fwi_integer_t n, object c, fwi_integer_t k, object x, object y, fwi_integer_t m, fwi_integer_t e, fwi_integer_t ier):
    """splev(t, n, c, k, x, y, m, e, ier) -> (t, n, c, k, x, y, m, e, ier)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    e : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    m : fwi_integer, intent inout
    e : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, x_, y_
    cdef np.npy_intp t_shape[1], c_shape[1], x_shape[1], y_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    fc.splev(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), &m, &e, &ier)
    return (t_, n, c_, k, x_, y_, m, e, ier,)


cpdef object splint(object t, fwi_integer_t n, object c, fwi_integer_t k, fwr_real_x8_t a, fwr_real_x8_t b, object wrk):
    """splint(t, n, c, k, a, b, wrk) -> (fw_ret_arg, t, n, c, k, a, b, wrk)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k : fwi_integer, intent inout
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(n), intent inout

    Returns
    -------
    fw_ret_arg : fwr_real_x8, intent out
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    k : fwi_integer, intent inout
    a : fwr_real_x8, intent inout
    b : fwr_real_x8, intent inout
    wrk : fwr_real_x8, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray t_, c_, wrk_
    cdef np.npy_intp t_shape[1], c_shape[1], wrk_shape[1]
    cdef fwr_real_x8_t fw_ret_arg
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= n <= wrk_shape[0]):
        raise ValueError("(0 <= n <= wrk.shape[0]) not satisifed")
    fw_ret_arg = fc.splint(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), &k, &a, &b, <fwr_real_x8_t*>np.PyArray_DATA(wrk_))
    return (fw_ret_arg, t_, n, c_, k, a, b, wrk_,)


cpdef object sproot(object t, fwi_integer_t n, object c, object zero, fwi_integer_t mest, fwi_integer_t m, fwi_integer_t ier):
    """sproot(t, n, c, zero, mest, m, ier) -> (t, n, c, zero, mest, m, ier)

    Parameters
    ----------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    zero : fwr_real_x8, 1D array, dimension(mest), intent inout
    mest : fwi_integer, intent inout
    m : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    t : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension(n), intent inout
    zero : fwr_real_x8, 1D array, dimension(mest), intent inout
    mest : fwi_integer, intent inout
    m : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray t_, c_, zero_
    cdef np.npy_intp t_shape[1], c_shape[1], zero_shape[1]
    t_ = fw_asfortranarray(t, fwr_real_x8_t_enum, 1, t_shape, False, False)
    if not (0 <= n <= t_shape[0]):
        raise ValueError("(0 <= n <= t.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    if not (0 <= n <= c_shape[0]):
        raise ValueError("(0 <= n <= c.shape[0]) not satisifed")
    zero_ = fw_asfortranarray(zero, fwr_real_x8_t_enum, 1, zero_shape, False, False)
    if not (0 <= mest <= zero_shape[0]):
        raise ValueError("(0 <= mest <= zero.shape[0]) not satisifed")
    fc.sproot(<fwr_real_x8_t*>np.PyArray_DATA(t_), &n, <fwr_real_x8_t*>np.PyArray_DATA(c_), <fwr_real_x8_t*>np.PyArray_DATA(zero_), &mest, &m, &ier)
    return (t_, n, c_, zero_, mest, m, ier,)


cpdef object surev(fwi_integer_t idim, object tu, fwi_integer_t nu, object tv, fwi_integer_t nv, object c, object u, fwi_integer_t mu, object v, fwi_integer_t mv, object f, fwi_integer_t mf, object wrk, fwi_integer_t lwrk, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """surev(idim, tu, nu, tv, nv, c, u, mu, v, mv, f, mf, wrk, lwrk, iwrk, kwrk, ier) -> (idim, tu, nu, tv, nv, c, u, mu, v, mv, f, mf, wrk, lwrk, iwrk, kwrk, ier)

    Parameters
    ----------
    idim : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nu-4)*(nv-4)*idim), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    f : fwr_real_x8, 1D array, dimension(mf), intent inout
    mf : fwi_integer, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    idim : fwi_integer, intent inout
    tu : fwr_real_x8, 1D array, dimension(nu), intent inout
    nu : fwi_integer, intent inout
    tv : fwr_real_x8, 1D array, dimension(nv), intent inout
    nv : fwi_integer, intent inout
    c : fwr_real_x8, 1D array, dimension((nu-4)*(nv-4)*idim), intent inout
    u : fwr_real_x8, 1D array, dimension(mu), intent inout
    mu : fwi_integer, intent inout
    v : fwr_real_x8, 1D array, dimension(mv), intent inout
    mv : fwi_integer, intent inout
    f : fwr_real_x8, 1D array, dimension(mf), intent inout
    mf : fwi_integer, intent inout
    wrk : fwr_real_x8, 1D array, dimension(lwrk), intent inout
    lwrk : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray tu_, tv_, c_, u_, v_, f_, wrk_, iwrk_
    cdef np.npy_intp tu_shape[1], tv_shape[1], c_shape[1], u_shape[1], v_shape[1], f_shape[1], wrk_shape[1], iwrk_shape[1]
    tu_ = fw_asfortranarray(tu, fwr_real_x8_t_enum, 1, tu_shape, False, False)
    if not (0 <= nu <= tu_shape[0]):
        raise ValueError("(0 <= nu <= tu.shape[0]) not satisifed")
    tv_ = fw_asfortranarray(tv, fwr_real_x8_t_enum, 1, tv_shape, False, False)
    if not (0 <= nv <= tv_shape[0]):
        raise ValueError("(0 <= nv <= tv.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    u_ = fw_asfortranarray(u, fwr_real_x8_t_enum, 1, u_shape, False, False)
    if not (0 <= mu <= u_shape[0]):
        raise ValueError("(0 <= mu <= u.shape[0]) not satisifed")
    v_ = fw_asfortranarray(v, fwr_real_x8_t_enum, 1, v_shape, False, False)
    if not (0 <= mv <= v_shape[0]):
        raise ValueError("(0 <= mv <= v.shape[0]) not satisifed")
    f_ = fw_asfortranarray(f, fwr_real_x8_t_enum, 1, f_shape, False, False)
    if not (0 <= mf <= f_shape[0]):
        raise ValueError("(0 <= mf <= f.shape[0]) not satisifed")
    wrk_ = fw_asfortranarray(wrk, fwr_real_x8_t_enum, 1, wrk_shape, False, False)
    if not (0 <= lwrk <= wrk_shape[0]):
        raise ValueError("(0 <= lwrk <= wrk.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.surev(&idim, <fwr_real_x8_t*>np.PyArray_DATA(tu_), &nu, <fwr_real_x8_t*>np.PyArray_DATA(tv_), &nv, <fwr_real_x8_t*>np.PyArray_DATA(c_), <fwr_real_x8_t*>np.PyArray_DATA(u_), &mu, <fwr_real_x8_t*>np.PyArray_DATA(v_), &mv, <fwr_real_x8_t*>np.PyArray_DATA(f_), &mf, <fwr_real_x8_t*>np.PyArray_DATA(wrk_), &lwrk, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (idim, tu_, nu, tv_, nv, c_, u_, mu, v_, mv, f_, mf, wrk_, lwrk, iwrk_, kwrk, ier,)


cpdef object surfit(fwi_integer_t iopt, fwi_integer_t m, object x, object y, object z, object w, fwr_real_x8_t xb, fwr_real_x8_t xe, fwr_real_x8_t yb, fwr_real_x8_t ye, fwi_integer_t kx, fwi_integer_t ky, fwr_real_x8_t s, fwi_integer_t nxest, fwi_integer_t nyest, fwi_integer_t nmax, fwr_real_x8_t eps, fwi_integer_t nx, object tx, fwi_integer_t ny, object ty, object c, fwr_real_x8_t fp, object wrk1, fwi_integer_t lwrk1, object wrk2, fwi_integer_t lwrk2, object iwrk, fwi_integer_t kwrk, fwi_integer_t ier):
    """surfit(iopt, m, x, y, z, w, xb, xe, yb, ye, kx, ky, s, nxest, nyest, nmax, eps, nx, tx, ny, ty, c, fp, wrk1, lwrk1, wrk2, lwrk2, iwrk, kwrk, ier) -> (iopt, m, x, y, z, w, xb, xe, yb, ye, kx, ky, s, nxest, nyest, nmax, eps, nx, tx, ny, ty, c, fp, wrk1, lwrk1, wrk2, lwrk2, iwrk, kwrk, ier)

    Parameters
    ----------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nxest : fwi_integer, intent inout
    nyest : fwi_integer, intent inout
    nmax : fwi_integer, intent inout
    eps : fwr_real_x8, intent inout
    nx : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nmax), intent inout
    ny : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(nmax), intent inout
    c : fwr_real_x8, 1D array, dimension((nxest-kx-1)*(nyest-ky-1)), intent inout
    fp : fwr_real_x8, intent inout
    wrk1 : fwr_real_x8, 1D array, dimension(lwrk1), intent inout
    lwrk1 : fwi_integer, intent inout
    wrk2 : fwr_real_x8, 1D array, dimension(lwrk2), intent inout
    lwrk2 : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    Returns
    -------
    iopt : fwi_integer, intent inout
    m : fwi_integer, intent inout
    x : fwr_real_x8, 1D array, dimension(m), intent inout
    y : fwr_real_x8, 1D array, dimension(m), intent inout
    z : fwr_real_x8, 1D array, dimension(m), intent inout
    w : fwr_real_x8, 1D array, dimension(m), intent inout
    xb : fwr_real_x8, intent inout
    xe : fwr_real_x8, intent inout
    yb : fwr_real_x8, intent inout
    ye : fwr_real_x8, intent inout
    kx : fwi_integer, intent inout
    ky : fwi_integer, intent inout
    s : fwr_real_x8, intent inout
    nxest : fwi_integer, intent inout
    nyest : fwi_integer, intent inout
    nmax : fwi_integer, intent inout
    eps : fwr_real_x8, intent inout
    nx : fwi_integer, intent inout
    tx : fwr_real_x8, 1D array, dimension(nmax), intent inout
    ny : fwi_integer, intent inout
    ty : fwr_real_x8, 1D array, dimension(nmax), intent inout
    c : fwr_real_x8, 1D array, dimension((nxest-kx-1)*(nyest-ky-1)), intent inout
    fp : fwr_real_x8, intent inout
    wrk1 : fwr_real_x8, 1D array, dimension(lwrk1), intent inout
    lwrk1 : fwi_integer, intent inout
    wrk2 : fwr_real_x8, 1D array, dimension(lwrk2), intent inout
    lwrk2 : fwi_integer, intent inout
    iwrk : fwi_integer, 1D array, dimension(kwrk), intent inout
    kwrk : fwi_integer, intent inout
    ier : fwi_integer, intent inout

    """
    cdef np.ndarray x_, y_, z_, w_, tx_, ty_, c_, wrk1_, wrk2_, iwrk_
    cdef np.npy_intp x_shape[1], y_shape[1], z_shape[1], w_shape[1], tx_shape[1], ty_shape[1], c_shape[1], wrk1_shape[1], wrk2_shape[1], iwrk_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, x_shape, False, False)
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_x8_t_enum, 1, y_shape, False, False)
    if not (0 <= m <= y_shape[0]):
        raise ValueError("(0 <= m <= y.shape[0]) not satisifed")
    z_ = fw_asfortranarray(z, fwr_real_x8_t_enum, 1, z_shape, False, False)
    if not (0 <= m <= z_shape[0]):
        raise ValueError("(0 <= m <= z.shape[0]) not satisifed")
    w_ = fw_asfortranarray(w, fwr_real_x8_t_enum, 1, w_shape, False, False)
    if not (0 <= m <= w_shape[0]):
        raise ValueError("(0 <= m <= w.shape[0]) not satisifed")
    tx_ = fw_asfortranarray(tx, fwr_real_x8_t_enum, 1, tx_shape, False, False)
    if not (0 <= nmax <= tx_shape[0]):
        raise ValueError("(0 <= nmax <= tx.shape[0]) not satisifed")
    ty_ = fw_asfortranarray(ty, fwr_real_x8_t_enum, 1, ty_shape, False, False)
    if not (0 <= nmax <= ty_shape[0]):
        raise ValueError("(0 <= nmax <= ty.shape[0]) not satisifed")
    c_ = fw_asfortranarray(c, fwr_real_x8_t_enum, 1, c_shape, False, False)
    wrk1_ = fw_asfortranarray(wrk1, fwr_real_x8_t_enum, 1, wrk1_shape, False, False)
    if not (0 <= lwrk1 <= wrk1_shape[0]):
        raise ValueError("(0 <= lwrk1 <= wrk1.shape[0]) not satisifed")
    wrk2_ = fw_asfortranarray(wrk2, fwr_real_x8_t_enum, 1, wrk2_shape, False, False)
    if not (0 <= lwrk2 <= wrk2_shape[0]):
        raise ValueError("(0 <= lwrk2 <= wrk2.shape[0]) not satisifed")
    iwrk_ = fw_asfortranarray(iwrk, fwi_integer_t_enum, 1, iwrk_shape, False, False)
    if not (0 <= kwrk <= iwrk_shape[0]):
        raise ValueError("(0 <= kwrk <= iwrk.shape[0]) not satisifed")
    fc.surfit(&iopt, &m, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(y_), <fwr_real_x8_t*>np.PyArray_DATA(z_), <fwr_real_x8_t*>np.PyArray_DATA(w_), &xb, &xe, &yb, &ye, &kx, &ky, &s, &nxest, &nyest, &nmax, &eps, &nx, <fwr_real_x8_t*>np.PyArray_DATA(tx_), &ny, <fwr_real_x8_t*>np.PyArray_DATA(ty_), <fwr_real_x8_t*>np.PyArray_DATA(c_), &fp, <fwr_real_x8_t*>np.PyArray_DATA(wrk1_), &lwrk1, <fwr_real_x8_t*>np.PyArray_DATA(wrk2_), &lwrk2, <fwi_integer_t*>np.PyArray_DATA(iwrk_), &kwrk, &ier)
    return (iopt, m, x_, y_, z_, w_, xb, xe, yb, ye, kx, ky, s, nxest, nyest, nmax, eps, nx, tx_, ny, ty_, c_, fp, wrk1_, lwrk1, wrk2_, lwrk2, iwrk_, kwrk, ier,)



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
# Fwrap: version 0.2.0dev_eb4bde9
# Fwrap: self-sha1 3078d720c73e99bebd81a31bd6f084104a40fda2
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
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
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary dfitpack.pxd
# Fwrap: auxiliary dfitpack_fc.h
# Fwrap: auxiliary dfitpack_fc.pxd

