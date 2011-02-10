#cython: ccomplex=True

"""The statlib module was generated with Fwrap v0.2.0dev_9849d10.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
gscale(...)
prho(...)
swilk(...)
wprob(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport statlib_fc as fc

np.import_array()
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
__all__ = ['wprob', 'gscale', 'prho', 'swilk']
def wprob(fwi_integer_t test, fwi_integer_t other, object a1=None):
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
    cdef fwi_integer_t l1, ifault
    cdef np.ndarray a1_, a2_, a3_
    cdef np.npy_intp a1_shape[1], a2_shape[1], a3_shape[1]
    cdef fwr_real_t astart
    astart = 0
    l1 = 1 + ((test * other) // 2)
    a2_shape[0] = l1
    a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
    a3_shape[0] = l1
    a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
    ifault = 0
    a1_shape[0] = l1
    a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
    if l1 != a1_shape[0]:
        raise ValueError("(l1 == a1.shape[0]) not satisifed")
    fc.wprob(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)
    return (astart, a1_, ifault,)


def gscale(fwi_integer_t test, fwi_integer_t other, object a1=None):
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
    cdef fwi_integer_t l1, ifault
    cdef np.ndarray a1_, a2_, a3_
    cdef np.npy_intp a1_shape[1], a2_shape[1], a3_shape[1]
    cdef fwr_real_t astart
    astart = 0
    l1 = 1 + ((test * other) // 2)
    a2_shape[0] = l1
    a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
    a3_shape[0] = l1
    a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
    ifault = 0
    a1_shape[0] = l1
    a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
    if not (0 <= l1 <= a1_shape[0]):
        raise ValueError("(0 <= l1 <= a1.shape[0]) not satisifed")
    fc.gscale(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)
    return (astart, a1_, ifault,)


def prho(fwi_integer_t n, fwi_integer_t is__):
    """prho(n, is__) -> (fw_ret_arg, ifault)

    Parameters
    ----------
    n : fwi_integer, intent in
    is__ : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out
    ifault : fwi_integer, intent out

    """
    cdef fwi_integer_t ifault
    cdef fwr_dbl_t fw_ret_arg
    ifault = 0
    fw_ret_arg = fc.prho(&n, &is__, &ifault)
    return (fw_ret_arg, ifault,)


def swilk(object x, object a, bint init=0, object n1=None):
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
    cdef fwi_integer_t n1_, n, n2, ifault
    cdef np.ndarray x_, a_
    cdef np.npy_intp x_shape[1], a_shape[1]
    cdef fwr_real_t w, pw
    cdef fwl_logical_t init_
    init_ = 1 if init else 0
    w = 0
    pw = 0
    ifault = 0
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    n = x_shape[0]
    n1_ = n1 if (n1 is not None) else n
    if not (n1_ <= n):
        raise ValueError('Condition on arguments not satisfied: n1 <= n')
    if not (0 <= n <= x_shape[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 1, a_shape, False, False)
    n2 = n // 2
    if n2 != a_shape[0]:
        raise ValueError("(n2 == a.shape[0]) not satisifed")
    fc.swilk(&init_, <fwr_real_t*>np.PyArray_DATA(x_), &n, &n1_, &n2, <fwr_real_t*>np.PyArray_DATA(a_), &w, &pw, &ifault)
    return (a_, w, pw, ifault,)



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
# Fwrap: version 0.2.0dev_9849d10
# Fwrap: self-sha1 0ff006c1ae5e8d77511a99502334d391ba122ad8
# Fwrap: pyf-sha1 f33b94848a78e569ef29e0ff6761b50198e049e5
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
# Fwrap: auxiliary statlib_fc.h
# Fwrap: auxiliary statlib_fc.pxd

