#cython: ccomplex=True

"""The statlib module was generated with Fwrap v0.2.0dev_2886444.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
gscale(...)
prho(...)
swilk(...)
wprob(...)

Data Types
----------
fw_character
fw_shape
fwi_integer
fwl_logical
fwr_dbl
fwr_real

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef api object wprob(fwi_integer_t test, fwi_integer_t other, object a1=None):
    """wprob(test, other[, a1]) -> (astart, a1, ifault)

    Parameters
    ----------
    test : fwi_integer, intent in
    other : fwi_integer, intent in
    a1 : fwr_real, 1D array, dimension(l1), intent out

    Returns
    -------
    astart : fwr_real, intent out
    a1 : fwr_real, 1D array, dimension(l1), intent out
    ifault : fwi_integer, intent out

    """
    cdef np.ndarray a1_
    cdef fw_shape_t a1_shape_[1]
    cdef fwi_integer_t l1
    cdef np.ndarray a2_
    cdef fw_shape_t a2_shape_[1]
    cdef np.ndarray a3_
    cdef fw_shape_t a3_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_real_t astart
    cdef fwi_integer_t ifault
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    l1 = 1 + ((test * other) // 2)
    a1_, a1 = fw_explicitshapearray(a1, fwr_real_t_enum, 1, [l1], False)
    fw_copyshape(a1_shape_, np.PyArray_DIMS(a1_), 1)
    if l1 != a1_shape_[0]:
        raise ValueError("(l1 == a1.shape[0]) not satisifed")
    a2_, a2 = fw_explicitshapearray(None, fwr_real_t_enum, 1, [l1], False)
    fw_copyshape(a2_shape_, np.PyArray_DIMS(a2_), 1)
    if l1 != a2_shape_[0]:
        raise ValueError("(l1 == a2.shape[0]) not satisifed")
    a3_, a3 = fw_explicitshapearray(None, fwr_real_t_enum, 1, [l1], False)
    fw_copyshape(a3_shape_, np.PyArray_DIMS(a3_), 1)
    if l1 != a3_shape_[0]:
        raise ValueError("(l1 == a3.shape[0]) not satisifed")
    wprob_c(&test, &other, &astart, a1_shape_, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, a2_shape_, <fwr_real_t*>np.PyArray_DATA(a2_), a3_shape_, <fwr_real_t*>np.PyArray_DATA(a3_), &ifault, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'wprob' wrapper.")
    return (astart, a1, ifault,)


cpdef api object gscale(fwi_integer_t test, fwi_integer_t other, object a1=None):
    """gscale(test, other[, a1]) -> (astart, a1, ifault)

    Parameters
    ----------
    test : fwi_integer, intent in
    other : fwi_integer, intent in
    a1 : fwr_real, 1D array, dimension(l1), intent out

    Returns
    -------
    astart : fwr_real, intent out
    a1 : fwr_real, 1D array, dimension(l1), intent out
    ifault : fwi_integer, intent out

    """
    cdef np.ndarray a1_
    cdef fw_shape_t a1_shape_[1]
    cdef fwi_integer_t l1
    cdef np.ndarray a2_
    cdef fw_shape_t a2_shape_[1]
    cdef np.ndarray a3_
    cdef fw_shape_t a3_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fwr_real_t astart
    cdef fwi_integer_t ifault
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    l1 = 1 + ((test * other) // 2)
    a1_, a1 = fw_explicitshapearray(a1, fwr_real_t_enum, 1, [l1], False)
    fw_copyshape(a1_shape_, np.PyArray_DIMS(a1_), 1)
    if not (0 <= l1 <= a1_shape_[0]):
        raise ValueError("(0 <= l1 <= a1.shape[0]) not satisifed")
    a2_, a2 = fw_explicitshapearray(None, fwr_real_t_enum, 1, [l1], False)
    fw_copyshape(a2_shape_, np.PyArray_DIMS(a2_), 1)
    if l1 != a2_shape_[0]:
        raise ValueError("(l1 == a2.shape[0]) not satisifed")
    a3_, a3 = fw_explicitshapearray(None, fwr_real_t_enum, 1, [l1], False)
    fw_copyshape(a3_shape_, np.PyArray_DIMS(a3_), 1)
    if l1 != a3_shape_[0]:
        raise ValueError("(l1 == a3.shape[0]) not satisifed")
    gscale_c(&test, &other, &astart, a1_shape_, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, a2_shape_, <fwr_real_t*>np.PyArray_DATA(a2_), a3_shape_, <fwr_real_t*>np.PyArray_DATA(a3_), &ifault, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gscale' wrapper.")
    return (astart, a1, ifault,)


cpdef api object prho(fwi_integer_t n, fwi_integer_t is__):
    """prho(n, is__[, n, is__]) -> (fw_ret_arg, ifault)

    Parameters
    ----------
    n : fwi_integer, intent in
    is__ : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    ifault : fwi_integer, intent out

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t fw_ret_arg
    cdef fwi_integer_t ifault
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    prho_c(&fw_ret_arg, &n, &is__, &ifault, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'prho' wrapper.")
    return (fw_ret_arg, ifault,)


cpdef api object swilk(object x, object a, bint init=0, object n1=None):
    """swilk(x, a[, init, n1]) -> (a, w, pw, ifault)

    Parameters
    ----------
    x : fwr_real, 1D array, dimension(n), intent in
    a : fwr_real, 1D array, dimension(n2), intent inout
    init : fwl_logical, intent in
    n1 : fwi_integer, intent in

    Returns
    -------
    a : fwr_real, 1D array, dimension(n2), intent inout
    w : fwr_real, intent out
    pw : fwr_real, intent out
    ifault : fwi_integer, intent out

    """
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray a_
    cdef fw_shape_t a_shape_[1]
    cdef fwl_logical_t init_
    cdef fwi_integer_t n1_
    cdef fwi_integer_t n
    cdef fwi_integer_t n2
    cdef fwi_integer_t fw_iserr__
    cdef fwr_real_t w
    cdef fwr_real_t pw
    cdef fwi_integer_t ifault
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    init_ = 1 if init else 0
    x_, x = fw_asfortranarray(x, fwr_real_t_enum, 1, False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    n = np.PyArray_DIMS(x_)[0]
    n1_ = n1 if (n1 is not None) else n
    if not (n1_ <= n):
        raise ValueError('Condition on arguments not satisfied: n1 <= n')
    if not (0 <= n <= x_shape_[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    a_, a = fw_asfortranarray(a, fwr_real_t_enum, 1, False)
    fw_copyshape(a_shape_, np.PyArray_DIMS(a_), 1)
    n2 = n // 2
    if n2 != a_shape_[0]:
        raise ValueError("(n2 == a.shape[0]) not satisifed")
    swilk_c(&init_, x_shape_, <fwr_real_t*>np.PyArray_DATA(x_), &n, &n1_, &n2, a_shape_, <fwr_real_t*>np.PyArray_DATA(a_), &w, &pw, &ifault, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'swilk' wrapper.")
    return (a, w, pw, ifault,)



cdef void fw_copyshape(fw_shape_t *target, np.intp_t *source, int ndim):
    # In f77binding mode, we do not always have fw_shape_t and np.npy_intp
    # as the same type, so must make a copy
    cdef int i
    for i in range(ndim):
        target[i] = source[i]

cdef object fw_explicitshapearray(object value, int typenum, int ndim,
                                  np.intp_t *shape, bint copy):
    if value is None:
        result = np.PyArray_ZEROS(ndim, shape, typenum, 1)
        return result, result
    else:
        return fw_asfortranarray(value, typenum, ndim, copy)

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
# Fwrap: version 0.2.0dev_2886444
# Fwrap: self-sha1 0ff006c1ae5e8d77511a99502334d391ba122ad8
# Fwrap: pyf-sha1 b89499f63273992895f5bccd36ffb640ceb51707
# Fwrap: wraps statlib/*.f
# Fwrap:     sha1 fdacc5bbd4afbc5c3867c04dad74d9ea6d64b3bd
# Fwrap: exclude alnorm
# Fwrap: exclude frqadd
# Fwrap: exclude imply
# Fwrap: exclude poly
# Fwrap: exclude ppnd
# Fwrap: exclude start1
# Fwrap: exclude start2
# Fwrap: exclude alnorm
# Fwrap: exclude frqadd
# Fwrap: exclude imply
# Fwrap: exclude poly
# Fwrap: exclude ppnd
# Fwrap: exclude start1
# Fwrap: exclude start2
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary statlib.pxd
# Fwrap: auxiliary statlib_fc.f
# Fwrap: auxiliary statlib_fc.h
# Fwrap: auxiliary statlib_fc.pxd

