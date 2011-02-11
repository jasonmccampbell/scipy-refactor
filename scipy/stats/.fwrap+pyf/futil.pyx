#cython: ccomplex=True

"""The futil module was generated with Fwrap v0.2.0dev_906fe37.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
dfreps(...)
dqsort(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport futil_fc as fc

np.import_array()
__all__ = ['dqsort', 'dfreps']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
def dqsort(object arr, bint overwrite_arr=False):
    """dqsort(arr[, overwrite_arr]) -> arr

    Parameters
    ----------
    arr : fwr_real_x8, 1D array, dimension(n), intent inout
    overwrite_arr : bint_, intent in

    Returns
    -------
    arr : fwr_real_x8, 1D array, dimension(n), intent inout

    """
    cdef fwi_integer_t n
    cdef np.ndarray arr_
    cdef np.npy_intp arr_shape[1]
    arr_ = fw_asfortranarray(arr, fwr_real_x8_t_enum, 1, arr_shape, not overwrite_arr, False)
    n = arr_shape[0]
    if not (0 <= n <= arr_shape[0]):
        raise ValueError("(0 <= n <= arr.shape[0]) not satisifed")
    fc.dqsort(&n, <fwr_real_x8_t*>np.PyArray_DATA(arr_))
    return arr_


def dfreps(object arr, object replist=None, object repnum=None):
    """dfreps(arr[, replist, repnum]) -> (replist, repnum, nlist)

    Parameters
    ----------
    arr : fwr_real_x8, 1D array, dimension(n), intent in
    replist : fwr_real_x8, 1D array, dimension(n), intent out
    repnum : fwi_integer, 1D array, dimension(n), intent out

    Returns
    -------
    replist : fwr_real_x8, 1D array, dimension(n), intent out
    repnum : fwi_integer, 1D array, dimension(n), intent out
    nlist : fwi_integer, intent out

    """
    cdef fwi_integer_t n, nlist
    cdef np.ndarray arr_, replist_, repnum_
    cdef np.npy_intp arr_shape[1], replist_shape[1], repnum_shape[1]
    nlist = 0
    arr_ = fw_asfortranarray(arr, fwr_real_x8_t_enum, 1, arr_shape, False, False)
    n = arr_shape[0]
    if not (0 <= n <= arr_shape[0]):
        raise ValueError("(0 <= n <= arr.shape[0]) not satisifed")
    replist_shape[0] = n
    replist_ = fw_asfortranarray(replist, fwr_real_x8_t_enum, 1, replist_shape, False, True)
    if n != replist_shape[0]:
        raise ValueError("(n == replist.shape[0]) not satisifed")
    repnum_shape[0] = n
    repnum_ = fw_asfortranarray(repnum, fwi_integer_t_enum, 1, repnum_shape, False, True)
    if n != repnum_shape[0]:
        raise ValueError("(n == repnum.shape[0]) not satisifed")
    fc.dfreps(<fwr_real_x8_t*>np.PyArray_DATA(arr_), &n, <fwr_real_x8_t*>np.PyArray_DATA(replist_), <fwi_integer_t*>np.PyArray_DATA(repnum_), &nlist)
    return (replist_, repnum_, nlist,)



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
# Fwrap: version 0.2.0dev_906fe37
# Fwrap: self-sha1 5bfe1322e0df68842e5d85095b7f3308d908faa2
# Fwrap: pyf-sha1 630608d869f0de4976e865cf046bd510bf411d06
# Fwrap: wraps src/futil.f
# Fwrap:     sha1 3fb8012931d62222f0e2559e579c3d4f965b57ee
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: no-cpdef True
# Fwrap: auxiliary futil_fc.h
# Fwrap: auxiliary futil_fc.pxd

