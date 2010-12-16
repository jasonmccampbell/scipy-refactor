#cython: ccomplex=True

"""
The futil module was generated with Fwrap v0.2.0dev_470490d.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
dfreps(...)
dqsort(...)

Data Types
----------
fw_character
fw_shape
fwi_integer
fwr_real_x8

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef api object dqsort(fwi_integer_t n, object arr):
    """
    dqsort(n, arr) -> (n, arr)

    Parameters
    ----------
    n : fwi_integer, intent inout
    arr : fwr_real_x8, 1D array, dimension(n), intent inout

    Returns
    -------
    n : fwi_integer, intent inout
    arr : fwr_real_x8, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray arr_
    cdef fw_shape_t arr_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    arr_, arr = fw_asfortranarray(arr, fwr_real_x8_t_enum, 1, False)
    fw_copyshape(arr_shape_, np.PyArray_DIMS(arr_), 1)
    if not (0 <= n <= arr_shape_[0]):
        raise ValueError("(0 <= n <= arr.shape[0]) not satisifed")
    dqsort_c(&n, arr_shape_, <fwr_real_x8_t*>np.PyArray_DATA(arr_), &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'dqsort' wrapper.")
    return (n, arr,)


cpdef api object dfreps(object arr, fwi_integer_t n, object replist, object repnum, fwi_integer_t nlist):
    """
    dfreps(arr, n, replist, repnum, nlist) -> (arr, n, replist, repnum, nlist)

    Parameters
    ----------
    arr : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    replist : fwr_real_x8, 1D array, dimension(n), intent inout
    repnum : fwi_integer, 1D array, dimension(n), intent inout
    nlist : fwi_integer, intent inout

    Returns
    -------
    arr : fwr_real_x8, 1D array, dimension(n), intent inout
    n : fwi_integer, intent inout
    replist : fwr_real_x8, 1D array, dimension(n), intent inout
    repnum : fwi_integer, 1D array, dimension(n), intent inout
    nlist : fwi_integer, intent inout

    """
    cdef np.ndarray arr_
    cdef fw_shape_t arr_shape_[1]
    cdef np.ndarray replist_
    cdef fw_shape_t replist_shape_[1]
    cdef np.ndarray repnum_
    cdef fw_shape_t repnum_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    arr_, arr = fw_asfortranarray(arr, fwr_real_x8_t_enum, 1, False)
    fw_copyshape(arr_shape_, np.PyArray_DIMS(arr_), 1)
    if not (0 <= n <= arr_shape_[0]):
        raise ValueError("(0 <= n <= arr.shape[0]) not satisifed")
    replist_, replist = fw_asfortranarray(replist, fwr_real_x8_t_enum, 1, False)
    fw_copyshape(replist_shape_, np.PyArray_DIMS(replist_), 1)
    if not (0 <= n <= replist_shape_[0]):
        raise ValueError("(0 <= n <= replist.shape[0]) not satisifed")
    repnum_, repnum = fw_asfortranarray(repnum, fwi_integer_t_enum, 1, False)
    fw_copyshape(repnum_shape_, np.PyArray_DIMS(repnum_), 1)
    if not (0 <= n <= repnum_shape_[0]):
        raise ValueError("(0 <= n <= repnum.shape[0]) not satisifed")
    dfreps_c(arr_shape_, <fwr_real_x8_t*>np.PyArray_DATA(arr_), &n, replist_shape_, <fwr_real_x8_t*>np.PyArray_DATA(replist_), repnum_shape_, <fwi_integer_t*>np.PyArray_DATA(repnum_), &nlist, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'dfreps' wrapper.")
    return (arr, n, replist, repnum, nlist,)



cdef void fw_copyshape(fw_shape_t *target, np.intp_t *source, int ndim):
    # In f77binding mode, we do not always have fw_shape_t and np.npy_intp
    # as the same type, so must make a copy
    cdef int i
    for i in range(ndim):
        target[i] = source[i]

cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy):
    cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST
    if ndim <= 1:
        # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
        flags |= np.NPY_C_CONTIGUOUS
    if copy:
        flags |= np.NPY_ENSURECOPY
    result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)

    if ndim == result.ndim:
        return result, result
    else:
        to_shape = [None] * ndim
        fw_f2py_shape_coercion(ndim, to_shape, result.ndim, result.shape,
                               result.size)
        return result.reshape(to_shape, order='F'), result

cdef object fw_f2py_shape_coercion(int to_ndim, object to_shape,
                                   int from_ndim, object from_shape,
                                   Py_ssize_t from_size):
    # Logic ported from check_and_fix_dimensions in fortranobject.c
    # Todo: optimize
    if to_ndim > from_ndim:
        to_size = 1
        free_ax = -1
        for i in range(from_ndim):
            d = from_shape[i]
            if d == 0:
                d = 1
            to_shape[i] = d
            to_size *= d
        for i in range(from_ndim, to_ndim):
            if free_ax < 0:
                free_ax = i
            else:
                to_shape[i] = 1
        if free_ax >= 0:
            to_shape[free_ax] = from_size // to_size
    elif to_ndim < from_ndim:
        j = 0
        for i in range(from_ndim):
            while j < from_ndim and from_shape[j] < 2:
                j += 1
            if j >= from_ndim:
                d = 1
            else:
                d = from_shape[j]
                j += 1
            if i < to_ndim:
                to_shape[i] = d
            else:
                to_shape[to_ndim - 1] *= d

# Fwrap configuration:
# Fwrap: version 0.2.0dev_470490d
# Fwrap: self-sha1 5bfe1322e0df68842e5d85095b7f3308d908faa2
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps futil.f
# Fwrap:     sha1 3fb8012931d62222f0e2559e579c3d4f965b57ee
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary futil.pxd
# Fwrap: auxiliary futil_fc.f
# Fwrap: auxiliary futil_fc.h
# Fwrap: auxiliary futil_fc.pxd

