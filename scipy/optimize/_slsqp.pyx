#cython: ccomplex=True

"""The _slsqp module was generated with Fwrap v0.2.0dev_bdc335e.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
slsqp(...)

"""
np.import_array()
__all__ = ['slsqp']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef object slsqp(fwi_integer_t m, fwi_integer_t meq, object x, object xl, object xu, fwr_dbl_t f, object c, object g, object a, fwr_dbl_t acc, fwi_integer_t iter, fwi_integer_t mode, object w, object jw, object la=None, object n=None, object l_w=None, object l_jw=None):
    """slsqp(m, meq, x, xl, xu, f, c, g, a, acc, iter, mode, w, jw[, la, n, l_w, l_jw])

    Parameters
    ----------
    m : fwi_integer, intent in
    meq : fwi_integer, intent in
    x : fwr_dbl, 1D array, dimension(n), intent inout
    xl : fwr_dbl, 1D array, dimension(n), intent in
    xu : fwr_dbl, 1D array, dimension(n), intent in
    f : fwr_dbl, intent in
    c : fwr_dbl, 1D array, dimension(la), intent in
    g : fwr_dbl, 1D array, dimension(n + 1), intent in
    a : fwr_dbl, 2D array, dimension(la, n + 1), intent in
    acc : fwr_dbl, intent inout
    iter : fwi_integer, intent inout
    mode : fwi_integer, intent inout
    w : fwr_dbl, 1D array, dimension(l_w), intent in
    jw : fwi_integer, 1D array, dimension(l_jw), intent in
    la : fwi_integer, intent in
    n : fwi_integer, intent in
    l_w : fwi_integer, intent in
    l_jw : fwi_integer, intent in

    """
    cdef fwi_integer_t la_, n_, l_w_, l_jw_
    cdef np.ndarray x_, xl_, xu_, c_, g_, a_, w_, jw_
    cdef np.npy_intp x_shape[1], xl_shape[1], xu_shape[1], c_shape[1], g_shape[1], a_shape[2], w_shape[1], jw_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    c_ = fw_asfortranarray(c, fwr_dbl_t_enum, 1, c_shape, False, False)
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, False)
    jw_ = fw_asfortranarray(jw, fwi_integer_t_enum, 1, jw_shape, False, False)
    la_ = la if (la is not None) else c_shape[0]
    n_ = n if (n is not None) else x_shape[0]
    l_w_ = l_w if (l_w is not None) else w_shape[0]
    l_jw_ = l_jw if (l_jw is not None) else jw_shape[0]
    if not (c_shape[0] >= la_):
        raise ValueError('Condition on arguments not satisfied: c.shape[0] >= la')
    if not (x_shape[0] >= n_):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] >= n')
    if not (w_shape[0] >= l_w_):
        raise ValueError('Condition on arguments not satisfied: w.shape[0] >= l_w')
    if not (jw_shape[0] >= l_jw_):
        raise ValueError('Condition on arguments not satisfied: jw.shape[0] >= l_jw')
    if not (0 <= n_ <= x_shape[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    xl_ = fw_asfortranarray(xl, fwr_dbl_t_enum, 1, xl_shape, False, False)
    if not (0 <= n_ <= xl_shape[0]):
        raise ValueError("(0 <= n <= xl.shape[0]) not satisifed")
    xu_ = fw_asfortranarray(xu, fwr_dbl_t_enum, 1, xu_shape, False, False)
    if not (0 <= n_ <= xu_shape[0]):
        raise ValueError("(0 <= n <= xu.shape[0]) not satisifed")
    if not (0 <= la_ <= c_shape[0]):
        raise ValueError("(0 <= la <= c.shape[0]) not satisifed")
    g_ = fw_asfortranarray(g, fwr_dbl_t_enum, 1, g_shape, False, False)
    if not (0 <= n_ + 1 <= g_shape[0]):
        raise ValueError("(0 <= n + 1 <= g.shape[0]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, False, False)
    if la_ != a_shape[0]:
        raise ValueError("(la == a.shape[0]) not satisifed")
    if not (0 <= n_ + 1 <= a_shape[1]):
        raise ValueError("(0 <= n + 1 <= a.shape[1]) not satisifed")
    if not (0 <= l_w_ <= w_shape[0]):
        raise ValueError("(0 <= l_w <= w.shape[0]) not satisifed")
    if not (0 <= l_jw_ <= jw_shape[0]):
        raise ValueError("(0 <= l_jw <= jw.shape[0]) not satisifed")
    fc.slsqp(&m, &meq, &la_, &n_, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(xl_), <fwr_dbl_t*>np.PyArray_DATA(xu_), &f, <fwr_dbl_t*>np.PyArray_DATA(c_), <fwr_dbl_t*>np.PyArray_DATA(g_), <fwr_dbl_t*>np.PyArray_DATA(a_), &acc, &iter, &mode, <fwr_dbl_t*>np.PyArray_DATA(w_), &l_w_, <fwi_integer_t*>np.PyArray_DATA(jw_), &l_jw_)



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
# Fwrap: version 0.2.0dev_bdc335e
# Fwrap: self-sha1 c5686651588941c40e03f5d7b85f3afe829dba98
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps slsqp/slsqp.pyf
# Fwrap:     sha1 97a01aff76158e8c218424041d15c62b1c7bf8c3
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary _slsqp.pxd
# Fwrap: auxiliary _slsqp_fc.h
# Fwrap: auxiliary _slsqp_fc.pxd

