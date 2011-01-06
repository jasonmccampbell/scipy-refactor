#cython: ccomplex=True

"""The _nnls module was generated with Fwrap v0.2.0dev_2cc1de8.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
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
cpdef object nnls(object a, fwi_integer_t m, fwi_integer_t n, object b, object w, object zz, object index_bn, object mda=None, bint overwrite_a=False, bint overwrite_b=False, object x=None):
    """nnls(a, m, n, b, w, zz, index_bn[, mda, overwrite_a, overwrite_b, x]) -> (x, rnorm, mode)

    Parameters
    ----------
    a : fwr_dbl, 2D array, dimension(mda, *), intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    b : fwr_dbl, 1D array, dimension(*), intent in
    w : fwr_dbl, 1D array, dimension(*), intent in
    zz : fwr_dbl, 1D array, dimension(*), intent in
    index_bn : fwi_integer, 1D array, dimension(*), intent in
    mda : fwi_integer, intent in
    overwrite_a : bint_, intent in
    overwrite_b : bint_, intent in
    x : fwr_dbl, 1D array, dimension(n), intent out

    Returns
    -------
    x : fwr_dbl, 1D array, dimension(n), intent out
    rnorm : fwr_dbl, intent out
    mode : fwi_integer, intent out

    """
    cdef np.ndarray a_
    cdef np.ndarray b_
    cdef np.ndarray w_
    cdef np.ndarray zz_
    cdef np.ndarray index_bn_
    cdef fwi_integer_t mda_
    cdef np.ndarray x_
    cdef fwr_dbl_t rnorm
    cdef fwi_integer_t mode
    a_, a = fw_asfortranarray(a, fwr_dbl_t_enum, 2, not overwrite_a)
    mda_ = mda if (mda is not None) else np.PyArray_DIMS(a_)[0]
    if not (np.PyArray_DIMS(a_)[0] == mda_):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == mda')
    if mda_ != np.PyArray_DIMS(a_)[0]:
        raise ValueError("(mda == a.shape[0]) not satisifed")
    b_, b = fw_asfortranarray(b, fwr_dbl_t_enum, 1, not overwrite_b)
    w_, w = fw_asfortranarray(w, fwr_dbl_t_enum, 1, False)
    zz_, zz = fw_asfortranarray(zz, fwr_dbl_t_enum, 1, False)
    index_bn_, index_bn = fw_asfortranarray(index_bn, fwi_integer_t_enum, 1, False)
    x_, x = fw_explicitshapearray(x, fwr_dbl_t_enum, 1, [n], False)
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    fc.nnls(<fwr_dbl_t*>np.PyArray_DATA(a_), &mda_, &m, &n, <fwr_dbl_t*>np.PyArray_DATA(b_), <fwr_dbl_t*>np.PyArray_DATA(x_), &rnorm, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(zz_), <fwi_integer_t*>np.PyArray_DATA(index_bn_), &mode)
    return (x, rnorm, mode,)



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

cdef object fw_explicitshapearray(object value, int typenum, int ndim,
                                  np.intp_t *shape, bint copy, int alignment=1):
    if value is None:
        result = np.PyArray_ZEROS(ndim, shape, typenum, 1)
        return result, result 
    else:
        return fw_asfortranarray(value, typenum, ndim, copy, alignment)

# Fwrap configuration:
# Fwrap: version 0.2.0dev_2cc1de8
# Fwrap: self-sha1 773c0ee681faa3be49badae6b41e33a7c2d40654
# Fwrap: pyf-sha1 8146a56ba4db8ac5633f05fa1b64a8a08936c432
# Fwrap: wraps nnls/nnls.f
# Fwrap:     sha1 9f987f085eba325f16d57fdacc88f51e64ad8555
# Fwrap: exclude diff
# Fwrap: exclude g1
# Fwrap: exclude h12
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary _nnls.pxd
# Fwrap: auxiliary _nnls_fc.h
# Fwrap: auxiliary _nnls_fc.pxd

