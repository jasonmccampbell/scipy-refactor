#cython: ccomplex=True

"""The _nnls module was generated with Fwrap v0.2.0dev_ef9d8cc.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
nnls(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport _nnls_fc as fc

np.import_array()
__all__ = ['nnls']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
def nnls(object a, fwi_integer_t m, fwi_integer_t n, object b, object w, object zz, object index_bn, object mda=None, bint overwrite_a=False, bint overwrite_b=False, object x=None):
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
    cdef fwi_integer_t mda_, mode
    cdef fwr_dbl_t rnorm
    cdef np.ndarray a_, b_, w_, zz_, index_bn_, x_
    cdef np.npy_intp a_shape[2], b_shape[1], w_shape[1], zz_shape[1], index_bn_shape[1], x_shape[1]
    rnorm = 0
    mode = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    mda_ = mda if (mda is not None) else a_shape[0]
    if not (a_shape[0] == mda_):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == mda')
    if mda_ != a_shape[0]:
        raise ValueError("(mda == a.shape[0]) not satisifed")
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 1, b_shape, not overwrite_b, False)
    w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, False)
    zz_ = fw_asfortranarray(zz, fwr_dbl_t_enum, 1, zz_shape, False, False)
    index_bn_ = fw_asfortranarray(index_bn, fwi_integer_t_enum, 1, index_bn_shape, False, False)
    x_shape[0] = n
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
    if not (0 <= n <= x_shape[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    fc.nnls(<fwr_dbl_t*>np.PyArray_DATA(a_), &mda_, &m, &n, <fwr_dbl_t*>np.PyArray_DATA(b_), <fwr_dbl_t*>np.PyArray_DATA(x_), &rnorm, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwr_dbl_t*>np.PyArray_DATA(zz_), <fwi_integer_t*>np.PyArray_DATA(index_bn_), &mode)
    return (x_, rnorm, mode,)



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
# Fwrap: version 0.2.0dev_ef9d8cc
# Fwrap: self-sha1 773c0ee681faa3be49badae6b41e33a7c2d40654
# Fwrap: pyf-sha1 e76b28aceea55917aca29491d4f23afbdf9ad8fb
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

