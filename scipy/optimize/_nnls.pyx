#cython: ccomplex=True

"""The _nnls module was generated with Fwrap v0.2.0dev_2cc1de8.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
diff(...)
g1(...)
h12(...)
nnls(...)

Data Types
----------
fwi_integer
fwr_dbl

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef object nnls(object a, fwi_integer_t mda, fwi_integer_t m, fwi_integer_t n, object b, object x, fwr_dbl_t rnorm, object w, object zz, object index, fwi_integer_t mode):
    """nnls(a, mda, m, n, b, x, rnorm, w, zz, index, mode) -> (a, mda, m, n, b, x, rnorm, w, zz, index, mode)

    Parameters
    ----------
    a : fwr_dbl, 2D array, dimension(mda, *), intent inout
    mda : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    b : fwr_dbl, 1D array, dimension(*), intent inout
    x : fwr_dbl, 1D array, dimension(*), intent inout
    rnorm : fwr_dbl, intent inout
    w : fwr_dbl, 1D array, dimension(*), intent inout
    zz : fwr_dbl, 1D array, dimension(*), intent inout
    index : fwi_integer, 1D array, dimension(*), intent inout
    mode : fwi_integer, intent inout

    Returns
    -------
    a : fwr_dbl, 2D array, dimension(mda, *), intent inout
    mda : fwi_integer, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    b : fwr_dbl, 1D array, dimension(*), intent inout
    x : fwr_dbl, 1D array, dimension(*), intent inout
    rnorm : fwr_dbl, intent inout
    w : fwr_dbl, 1D array, dimension(*), intent inout
    zz : fwr_dbl, 1D array, dimension(*), intent inout
    index : fwi_integer, 1D array, dimension(*), intent inout
    mode : fwi_integer, intent inout

    """
    cdef np.ndarray a_
    cdef np.ndarray b_
    cdef np.ndarray x_
    cdef np.ndarray w_
    cdef np.ndarray zz_
    cdef np.ndarray index_
    a_, a = fw_asfortranarray(a, fwr_dbl_t_enum, 2, False)
    if mda != np.PyArray_DIMS(a_)[0]:
        raise ValueError("(mda == a.shape[0]) not satisifed")
    b_, b = fw_asfortranarray(b, fwr_dbl_t_enum, 1, False)
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, False)
    w_, w = fw_asfortranarray(w, fwr_dbl_t_enum, 1, False)
    zz_, zz = fw_asfortranarray(zz, fwr_dbl_t_enum, 1, False)
    index_, index = fw_asfortranarray(index, fwi_integer_t_enum, 1, False)
    fc.nnls(<fwr_dbl_t*>np.PyArray_DATA(a_), &mda, &m, &n, <fwr_dbl_t*>np.PyArray_DATA(b_), <fwr_dbl_t*>np.PyArray_DATA(x_), &rnorm, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(zz_), <fwi_integer_t*>np.PyArray_DATA(index_), &mode)
    return (a, mda, m, n, b, x, rnorm, w, zz, index, mode,)


cpdef object diff(fwr_dbl_t x, fwr_dbl_t y):
    """diff(x, y) -> (fw_ret_arg, x, y)

    Parameters
    ----------
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    x : fwr_dbl, intent inout
    y : fwr_dbl, intent inout

    """
    cdef fwr_dbl_t fw_ret_arg
    fw_ret_arg = fc.diff(&x, &y)
    return (fw_ret_arg, x, y,)


cpdef object h12(fwi_integer_t mode, fwi_integer_t lpivot, fwi_integer_t l1, fwi_integer_t m, object u, fwi_integer_t iue, fwr_dbl_t up, object c, fwi_integer_t ice, fwi_integer_t icv, fwi_integer_t ncv):
    """h12(mode, lpivot, l1, m, u, iue, up, c, ice, icv, ncv) -> (mode, lpivot, l1, m, u, iue, up, c, ice, icv, ncv)

    Parameters
    ----------
    mode : fwi_integer, intent inout
    lpivot : fwi_integer, intent inout
    l1 : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_dbl, 2D array, dimension(iue, *), intent inout
    iue : fwi_integer, intent inout
    up : fwr_dbl, intent inout
    c : fwr_dbl, 1D array, dimension(*), intent inout
    ice : fwi_integer, intent inout
    icv : fwi_integer, intent inout
    ncv : fwi_integer, intent inout

    Returns
    -------
    mode : fwi_integer, intent inout
    lpivot : fwi_integer, intent inout
    l1 : fwi_integer, intent inout
    m : fwi_integer, intent inout
    u : fwr_dbl, 2D array, dimension(iue, *), intent inout
    iue : fwi_integer, intent inout
    up : fwr_dbl, intent inout
    c : fwr_dbl, 1D array, dimension(*), intent inout
    ice : fwi_integer, intent inout
    icv : fwi_integer, intent inout
    ncv : fwi_integer, intent inout

    """
    cdef np.ndarray u_
    cdef np.ndarray c_
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 2, False)
    if iue != np.PyArray_DIMS(u_)[0]:
        raise ValueError("(iue == u.shape[0]) not satisifed")
    c_, c = fw_asfortranarray(c, fwr_dbl_t_enum, 1, False)
    fc.h12(&mode, &lpivot, &l1, &m, <fwr_dbl_t*>np.PyArray_DATA(u_), &iue, &up, <fwr_dbl_t*>np.PyArray_DATA(c_), &ice, &icv, &ncv)
    return (mode, lpivot, l1, m, u, iue, up, c, ice, icv, ncv,)


cpdef object g1(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t cterm, fwr_dbl_t sterm, fwr_dbl_t sig):
    """g1(a, b, cterm, sterm, sig) -> (a, b, cterm, sterm, sig)

    Parameters
    ----------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    cterm : fwr_dbl, intent inout
    sterm : fwr_dbl, intent inout
    sig : fwr_dbl, intent inout

    Returns
    -------
    a : fwr_dbl, intent inout
    b : fwr_dbl, intent inout
    cterm : fwr_dbl, intent inout
    sterm : fwr_dbl, intent inout
    sig : fwr_dbl, intent inout

    """
    fc.g1(&a, &b, &cterm, &sterm, &sig)
    return (a, b, cterm, sterm, sig,)



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
# Fwrap: version 0.2.0dev_2cc1de8
# Fwrap: self-sha1 773c0ee681faa3be49badae6b41e33a7c2d40654
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps nnls/nnls.f
# Fwrap:     sha1 9f987f085eba325f16d57fdacc88f51e64ad8555
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary _nnls.pxd
# Fwrap: auxiliary _nnls_fc.h
# Fwrap: auxiliary _nnls_fc.pxd

