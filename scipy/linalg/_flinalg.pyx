#cython: ccomplex=True

"""The _flinalg module was generated with Fwrap v0.2.0dev_9849d10.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
sdet_c, ddet_c, cdet_c, zdet_c(...)
sdet_r, ddet_r, cdet_r, zdet_r(...)
slu_c, dlu_c, clu_c, zlu_c(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport _flinalg_fc as fc

np.import_array()
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
def sdet_c(object a, bint overwrite_a=False):
    """sdet_c(a[, overwrite_a]) -> (det, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    det : fwr_real_t_, intent out
    info : fwi_integer, intent out

    """
    cdef fwr_real_t det
    cdef fwi_integer_t n, info
    cdef np.ndarray a_, piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    det = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    piv_shape[0] = n
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.sdet_c(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    return (det, info,)
def ddet_c(object a, bint overwrite_a=False):
    """ddet_c(a[, overwrite_a]) -> (det, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    det : fwr_dbl_t_, intent out
    info : fwi_integer, intent out

    """
    cdef fwr_dbl_t det
    cdef fwi_integer_t n, info
    cdef np.ndarray a_, piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    det = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    piv_shape[0] = n
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.ddet_c(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    return (det, info,)
def cdet_c(object a, bint overwrite_a=False):
    """cdet_c(a[, overwrite_a]) -> (det, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    det : fwc_complex_t_, intent out
    info : fwi_integer, intent out

    """
    cdef fwc_complex_t det
    cdef fwi_integer_t n, info
    cdef np.ndarray a_, piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    det = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    piv_shape[0] = n
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.cdet_c(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    return (det, info,)
def zdet_c(object a, bint overwrite_a=False):
    """zdet_c(a[, overwrite_a]) -> (det, info)

    Parameters
    ----------
    a : fwc_complex_x16_t_, 2D array, dimension(n, n), intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    det : fwc_complex_x16_t_, intent out
    info : fwi_integer, intent out

    """
    cdef fwc_complex_x16_t det
    cdef fwi_integer_t n, info
    cdef np.ndarray a_, piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    det = 0
    a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    piv_shape[0] = n
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.zdet_c(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    return (det, info,)

def sdet_r(object a, bint overwrite_a=False):
    """sdet_r(a[, overwrite_a]) -> (det, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    det : fwr_real_t_, intent out
    info : fwi_integer, intent out

    """
    cdef fwr_real_t det
    cdef fwi_integer_t n, info
    cdef np.ndarray a_, piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    det = 0
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    piv_shape[0] = n
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.sdet_r(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    return (det, info,)
def ddet_r(object a, bint overwrite_a=False):
    """ddet_r(a[, overwrite_a]) -> (det, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    det : fwr_dbl_t_, intent out
    info : fwi_integer, intent out

    """
    cdef fwr_dbl_t det
    cdef fwi_integer_t n, info
    cdef np.ndarray a_, piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    det = 0
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    piv_shape[0] = n
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.ddet_r(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    return (det, info,)
def cdet_r(object a, bint overwrite_a=False):
    """cdet_r(a[, overwrite_a]) -> (det, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    det : fwc_complex_t_, intent out
    info : fwi_integer, intent out

    """
    cdef fwc_complex_t det
    cdef fwi_integer_t n, info
    cdef np.ndarray a_, piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    det = 0
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    piv_shape[0] = n
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.cdet_r(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    return (det, info,)
def zdet_r(object a, bint overwrite_a=False):
    """zdet_r(a[, overwrite_a]) -> (det, info)

    Parameters
    ----------
    a : fwc_complex_x16_t_, 2D array, dimension(n, n), intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    det : fwc_complex_x16_t_, intent out
    info : fwi_integer, intent out

    """
    cdef fwc_complex_x16_t det
    cdef fwi_integer_t n, info
    cdef np.ndarray a_, piv_
    cdef np.npy_intp a_shape[2], piv_shape[1]
    det = 0
    a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
    n = a_shape[0]
    piv_shape[0] = n
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.zdet_r(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
    return (det, info,)

def slu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
    """slu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(m, n), intent in
    permute_l : fwi_integer, intent in
    overwrite_a : bint_, intent in
    p : fwr_real_t_, 2D array, dimension(m1, m1), intent out
    l : fwr_real_t_, 2D array, dimension(m, k), intent out
    u : fwr_real_t_, 2D array, dimension(k, n), intent out

    Returns
    -------
    p : fwr_real_t_, 2D array, dimension(m1, m1), intent out
    l : fwr_real_t_, 2D array, dimension(m, k), intent out
    u : fwr_real_t_, 2D array, dimension(k, n), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m, n, k, m1, info
    cdef np.ndarray a_, p_, l_, u_, piv_
    cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    k = m if (m < n) else n
    piv_shape[0] = k
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    m1 = 1 if permute_l else m
    p_shape[0] = m1; p_shape[1] = m1
    p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
    if m1 != p_shape[0]:
        raise ValueError("(m1 == p.shape[0]) not satisifed")
    if m1 != p_shape[1]:
        raise ValueError("(m1 == p.shape[1]) not satisifed")
    l_shape[0] = m; l_shape[1] = k
    l_ = fw_asfortranarray(l, fwr_real_t_enum, 2, l_shape, False, True)
    if m != l_shape[0]:
        raise ValueError("(m == l.shape[0]) not satisifed")
    if k != l_shape[1]:
        raise ValueError("(k == l.shape[1]) not satisifed")
    u_shape[0] = k; u_shape[1] = n
    u_ = fw_asfortranarray(u, fwr_real_t_enum, 2, u_shape, False, True)
    if k != u_shape[0]:
        raise ValueError("(k == u.shape[0]) not satisifed")
    if n != u_shape[1]:
        raise ValueError("(n == u.shape[1]) not satisifed")
    fc.slu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwr_real_t*>np.PyArray_DATA(l_), <fwr_real_t*>np.PyArray_DATA(u_), <fwr_real_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
    return (p_, l_, u_, info,)
def dlu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
    """dlu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent in
    permute_l : fwi_integer, intent in
    overwrite_a : bint_, intent in
    p : fwr_dbl_t_, 2D array, dimension(m1, m1), intent out
    l : fwr_dbl_t_, 2D array, dimension(m, k), intent out
    u : fwr_dbl_t_, 2D array, dimension(k, n), intent out

    Returns
    -------
    p : fwr_dbl_t_, 2D array, dimension(m1, m1), intent out
    l : fwr_dbl_t_, 2D array, dimension(m, k), intent out
    u : fwr_dbl_t_, 2D array, dimension(k, n), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m, n, k, m1, info
    cdef np.ndarray a_, p_, l_, u_, piv_
    cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    k = m if (m < n) else n
    piv_shape[0] = k
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    m1 = 1 if permute_l else m
    p_shape[0] = m1; p_shape[1] = m1
    p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
    if m1 != p_shape[0]:
        raise ValueError("(m1 == p.shape[0]) not satisifed")
    if m1 != p_shape[1]:
        raise ValueError("(m1 == p.shape[1]) not satisifed")
    l_shape[0] = m; l_shape[1] = k
    l_ = fw_asfortranarray(l, fwr_dbl_t_enum, 2, l_shape, False, True)
    if m != l_shape[0]:
        raise ValueError("(m == l.shape[0]) not satisifed")
    if k != l_shape[1]:
        raise ValueError("(k == l.shape[1]) not satisifed")
    u_shape[0] = k; u_shape[1] = n
    u_ = fw_asfortranarray(u, fwr_dbl_t_enum, 2, u_shape, False, True)
    if k != u_shape[0]:
        raise ValueError("(k == u.shape[0]) not satisifed")
    if n != u_shape[1]:
        raise ValueError("(n == u.shape[1]) not satisifed")
    fc.dlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwr_dbl_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
    return (p_, l_, u_, info,)
def clu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
    """clu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent in
    permute_l : fwi_integer, intent in
    overwrite_a : bint_, intent in
    p : fwr_real_t_, 2D array, dimension(m1, m1), intent out
    l : fwc_complex_t_, 2D array, dimension(m, k), intent out
    u : fwc_complex_t_, 2D array, dimension(k, n), intent out

    Returns
    -------
    p : fwr_real_t_, 2D array, dimension(m1, m1), intent out
    l : fwc_complex_t_, 2D array, dimension(m, k), intent out
    u : fwc_complex_t_, 2D array, dimension(k, n), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m, n, k, m1, info
    cdef np.ndarray a_, p_, l_, u_, piv_
    cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    k = m if (m < n) else n
    piv_shape[0] = k
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    m1 = 1 if permute_l else m
    p_shape[0] = m1; p_shape[1] = m1
    p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
    if m1 != p_shape[0]:
        raise ValueError("(m1 == p.shape[0]) not satisifed")
    if m1 != p_shape[1]:
        raise ValueError("(m1 == p.shape[1]) not satisifed")
    l_shape[0] = m; l_shape[1] = k
    l_ = fw_asfortranarray(l, fwc_complex_t_enum, 2, l_shape, False, True)
    if m != l_shape[0]:
        raise ValueError("(m == l.shape[0]) not satisifed")
    if k != l_shape[1]:
        raise ValueError("(k == l.shape[1]) not satisifed")
    u_shape[0] = k; u_shape[1] = n
    u_ = fw_asfortranarray(u, fwc_complex_t_enum, 2, u_shape, False, True)
    if k != u_shape[0]:
        raise ValueError("(k == u.shape[0]) not satisifed")
    if n != u_shape[1]:
        raise ValueError("(n == u.shape[1]) not satisifed")
    fc.clu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwc_complex_t*>np.PyArray_DATA(l_), <fwc_complex_t*>np.PyArray_DATA(u_), <fwc_complex_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
    return (p_, l_, u_, info,)
def zlu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
    """zlu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)

    Parameters
    ----------
    a : fwc_complex_x16_t_, 2D array, dimension(m, n), intent in
    permute_l : fwi_integer, intent in
    overwrite_a : bint_, intent in
    p : fwr_dbl_t_, 2D array, dimension(m1, m1), intent out
    l : fwc_complex_x16_t_, 2D array, dimension(m, k), intent out
    u : fwc_complex_x16_t_, 2D array, dimension(k, n), intent out

    Returns
    -------
    p : fwr_dbl_t_, 2D array, dimension(m1, m1), intent out
    l : fwc_complex_x16_t_, 2D array, dimension(m, k), intent out
    u : fwc_complex_x16_t_, 2D array, dimension(k, n), intent out
    info : fwi_integer, intent out

    """
    cdef fwi_integer_t m, n, k, m1, info
    cdef np.ndarray a_, p_, l_, u_, piv_
    cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
    a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
    m = a_shape[0]
    n = a_shape[1]
    k = m if (m < n) else n
    piv_shape[0] = k
    piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
    info = 0
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    m1 = 1 if permute_l else m
    p_shape[0] = m1; p_shape[1] = m1
    p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
    if m1 != p_shape[0]:
        raise ValueError("(m1 == p.shape[0]) not satisifed")
    if m1 != p_shape[1]:
        raise ValueError("(m1 == p.shape[1]) not satisifed")
    l_shape[0] = m; l_shape[1] = k
    l_ = fw_asfortranarray(l, fwc_complex_x16_t_enum, 2, l_shape, False, True)
    if m != l_shape[0]:
        raise ValueError("(m == l.shape[0]) not satisifed")
    if k != l_shape[1]:
        raise ValueError("(k == l.shape[1]) not satisifed")
    u_shape[0] = k; u_shape[1] = n
    u_ = fw_asfortranarray(u, fwc_complex_x16_t_enum, 2, u_shape, False, True)
    if k != u_shape[0]:
        raise ValueError("(k == u.shape[0]) not satisifed")
    if n != u_shape[1]:
        raise ValueError("(n == u.shape[1]) not satisifed")
    fc.zlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwc_complex_x16_t*>np.PyArray_DATA(l_), <fwc_complex_x16_t*>np.PyArray_DATA(u_), <fwc_complex_x16_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
    return (p_, l_, u_, info,)



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
# Fwrap: self-sha1 9c27bf03e429178b02879c0c9af7e1f9f38ef60f
# Fwrap: pyf-sha1 52dfbd90853372d85d11a18f119a401b42f21c76
# Fwrap: wraps src/det.f
# Fwrap:     sha1 cf2332711df8b7cc1f4f025cddf95ec6102ea3f0
# Fwrap: wraps src/lu.f
# Fwrap:     sha1 dbaa75811239fb9468005c7a4df0d07a36829b95
# Fwrap: f77binding True
# Fwrap: detect-templates True
# Fwrap: emulate-f2py True
# Fwrap: auxiliary _flinalg.pxd
# Fwrap: auxiliary _flinalg.pyx.in
# Fwrap: auxiliary _flinalg_fc.h
# Fwrap: auxiliary _flinalg_fc.pxd

