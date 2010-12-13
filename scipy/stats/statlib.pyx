#cython: ccomplex=True

"""
The statlib module was generated with Fwrap v0.2.0dev_b9c96b3.

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
cpdef api object wprob(fwi_integer_t test, fwi_integer_t other, fwr_real_t astart, object a1, fwi_integer_t l1, object a2, object a3, fwi_integer_t ifault):
    """
    wprob(test, other, astart, a1, l1, a2, a3, ifault) -> (test, other, astart, a1, l1, a2, a3, ifault)

    Parameters
    ----------
    test : fwi_integer, intent inout
    other : fwi_integer, intent inout
    astart : fwr_real, intent inout
    a1 : fwr_real, 1D array, dimension(l1), intent inout
    l1 : fwi_integer, intent inout
    a2 : fwr_real, 1D array, dimension(l1), intent inout
    a3 : fwr_real, 1D array, dimension(l1), intent inout
    ifault : fwi_integer, intent inout

    Returns
    -------
    test : fwi_integer, intent inout
    other : fwi_integer, intent inout
    astart : fwr_real, intent inout
    a1 : fwr_real, 1D array, dimension(l1), intent inout
    l1 : fwi_integer, intent inout
    a2 : fwr_real, 1D array, dimension(l1), intent inout
    a3 : fwr_real, 1D array, dimension(l1), intent inout
    ifault : fwi_integer, intent inout

    """
    cdef np.ndarray a1_
    cdef fw_shape_t a1_shape_[1]
    cdef np.ndarray a2_
    cdef fw_shape_t a2_shape_[1]
    cdef np.ndarray a3_
    cdef fw_shape_t a3_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    a1_, a1 = fw_asfortranarray(a1, fwr_real_t_enum, 1, False)
    fw_copyshape(a1_shape_, np.PyArray_DIMS(a1_), 1)
    a2_, a2 = fw_asfortranarray(a2, fwr_real_t_enum, 1, False)
    fw_copyshape(a2_shape_, np.PyArray_DIMS(a2_), 1)
    a3_, a3 = fw_asfortranarray(a3, fwr_real_t_enum, 1, False)
    fw_copyshape(a3_shape_, np.PyArray_DIMS(a3_), 1)
    wprob_c(&test, &other, &astart, a1_shape_, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, a2_shape_, <fwr_real_t*>np.PyArray_DATA(a2_), a3_shape_, <fwr_real_t*>np.PyArray_DATA(a3_), &ifault, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'wprob' wrapper.")
    return (test, other, astart, a1, l1, a2, a3, ifault,)


cpdef api object gscale(fwi_integer_t test, fwi_integer_t other, fwr_real_t astart, object a1, fwi_integer_t l1, object a2, object a3, fwi_integer_t ifault):
    """
    gscale(test, other, astart, a1, l1, a2, a3, ifault) -> (test, other, astart, a1, l1, a2, a3, ifault)

    Parameters
    ----------
    test : fwi_integer, intent inout
    other : fwi_integer, intent inout
    astart : fwr_real, intent inout
    a1 : fwr_real, 1D array, dimension(l1), intent inout
    l1 : fwi_integer, intent inout
    a2 : fwr_real, 1D array, dimension(l1), intent inout
    a3 : fwr_real, 1D array, dimension(l1), intent inout
    ifault : fwi_integer, intent inout

    Returns
    -------
    test : fwi_integer, intent inout
    other : fwi_integer, intent inout
    astart : fwr_real, intent inout
    a1 : fwr_real, 1D array, dimension(l1), intent inout
    l1 : fwi_integer, intent inout
    a2 : fwr_real, 1D array, dimension(l1), intent inout
    a3 : fwr_real, 1D array, dimension(l1), intent inout
    ifault : fwi_integer, intent inout

    """
    cdef np.ndarray a1_
    cdef fw_shape_t a1_shape_[1]
    cdef np.ndarray a2_
    cdef fw_shape_t a2_shape_[1]
    cdef np.ndarray a3_
    cdef fw_shape_t a3_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    a1_, a1 = fw_asfortranarray(a1, fwr_real_t_enum, 1, False)
    fw_copyshape(a1_shape_, np.PyArray_DIMS(a1_), 1)
    a2_, a2 = fw_asfortranarray(a2, fwr_real_t_enum, 1, False)
    fw_copyshape(a2_shape_, np.PyArray_DIMS(a2_), 1)
    a3_, a3 = fw_asfortranarray(a3, fwr_real_t_enum, 1, False)
    fw_copyshape(a3_shape_, np.PyArray_DIMS(a3_), 1)
    gscale_c(&test, &other, &astart, a1_shape_, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, a2_shape_, <fwr_real_t*>np.PyArray_DATA(a2_), a3_shape_, <fwr_real_t*>np.PyArray_DATA(a3_), &ifault, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gscale' wrapper.")
    return (test, other, astart, a1, l1, a2, a3, ifault,)


cpdef api object prho(fwi_integer_t n, fwi_integer_t is__, fwi_integer_t ifault):
    """
    prho(n, is__, ifault) -> (fw_ret_arg, n, is__, ifault)

    Parameters
    ----------
    n : fwi_integer, intent inout
    is__ : fwi_integer, intent inout
    ifault : fwi_integer, intent inout

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    n : fwi_integer, intent inout
    is__ : fwi_integer, intent inout
    ifault : fwi_integer, intent inout

    """
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t fw_ret_arg
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    prho_c(&fw_ret_arg, &n, &is__, &ifault, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'prho' wrapper.")
    return (fw_ret_arg, n, is__, ifault,)


cpdef api object swilk(bint init, object x, fwi_integer_t n, fwi_integer_t n1, fwi_integer_t n2, object a, fwr_real_t w, fwr_real_t pw, fwi_integer_t ifault):
    """
    swilk(init, x, n, n1, n2, a, w, pw, ifault) -> (init_, x, n, n1, n2, a, w, pw, ifault)

    Parameters
    ----------
    init : fwl_logical, intent inout
    x : fwr_real, 1D array, dimension(*), intent inout
    n : fwi_integer, intent inout
    n1 : fwi_integer, intent inout
    n2 : fwi_integer, intent inout
    a : fwr_real, 1D array, dimension(*), intent inout
    w : fwr_real, intent inout
    pw : fwr_real, intent inout
    ifault : fwi_integer, intent inout

    Returns
    -------
    init : fwl_logical, intent inout
    x : fwr_real, 1D array, dimension(*), intent inout
    n : fwi_integer, intent inout
    n1 : fwi_integer, intent inout
    n2 : fwi_integer, intent inout
    a : fwr_real, 1D array, dimension(*), intent inout
    w : fwr_real, intent inout
    pw : fwr_real, intent inout
    ifault : fwi_integer, intent inout

    """
    cdef fwl_logical_t init_
    cdef np.ndarray x_
    cdef fw_shape_t x_shape_[1]
    cdef np.ndarray a_
    cdef fw_shape_t a_shape_[1]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    init_ = 1 if init else 0
    x_, x = fw_asfortranarray(x, fwr_real_t_enum, 1, False)
    fw_copyshape(x_shape_, np.PyArray_DIMS(x_), 1)
    a_, a = fw_asfortranarray(a, fwr_real_t_enum, 1, False)
    fw_copyshape(a_shape_, np.PyArray_DIMS(a_), 1)
    swilk_c(&init_, x_shape_, <fwr_real_t*>np.PyArray_DATA(x_), &n, &n1, &n2, a_shape_, <fwr_real_t*>np.PyArray_DATA(a_), &w, &pw, &ifault, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'swilk' wrapper.")
    return (init_, x, n, n1, n2, a, w, pw, ifault,)



cdef void fw_copyshape(fw_shape_t *target, np.intp_t *source, int ndim):
    # In f77binding mode, we do not always have fw_shape_t and np.npy_intp
    # as the same type, so must make a copy
    cdef int i
    for i in range(ndim):
        target[i] = source[i]

cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy):
    cdef int flags = np.NPY_F_CONTIGUOUS
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
# Fwrap: version 0.2.0dev_b9c96b3
# Fwrap: self-sha1 0ff006c1ae5e8d77511a99502334d391ba122ad8
# Fwrap: wraps statlib/*.f
# Fwrap:     sha1 fdacc5bbd4afbc5c3867c04dad74d9ea6d64b3bd
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

