#cython: ccomplex=True

"""The fblas module was generated with Fwrap v0.2.0dev_00843a8.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
cdotc, cdotu, zdotc, zdotu(...)
chemv, zhemv(...)
csrot(...)
csscal(...)
dzasum(...)
dznrm2(...)
isamax, idamax, icamax, izamax(...)
sasum, dasum(...)
saxpy, daxpy, caxpy, zaxpy(...)
scasum(...)
scnrm2(...)
scopy, dcopy, ccopy, zcopy(...)
sdot, ddot(...)
sgemm, dgemm, cgemm, zgemm(...)
sgemv, dgemv, cgemv, zgemv(...)
sger, dger, cgerc, cgeru, zgerc, zgeru(...)
snrm2, dnrm2(...)
srot, drot(...)
srotg, drotg, crotg, zrotg(...)
srotm, drotm(...)
srotmg, drotmg(...)
sscal, dscal, cscal, zscal(...)
sswap, dswap, cswap, zswap(...)
ssymv, dsymv(...)
strmv, dtrmv, ctrmv, ztrmv(...)
zdrot(...)
zdscal(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport fblas_fc as fc

np.import_array()
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
def chemv(fwc_complex_t alpha, object a, object x, fwc_complex_t beta, object y, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, fwi_integer_t lower=0, bint overwrite_y=False):
    """chemv(alpha, a, x, beta, y[, offx, incx, offy, incy, lower, overwrite_y]) -> y

    Parameters
    ----------
    alpha : fwc_complex_t_, intent in
    a : fwc_complex_t_, 2D array, dimension(n, n), intent in
    x : fwc_complex_t_, 1D array, dimension(*), intent in
    beta : fwc_complex_t_, intent in
    y : fwc_complex_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    lower : fwi_integer, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    y : fwc_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n
    cdef np.ndarray a_, x_, y_
    cdef np.npy_intp a_shape[2], x_shape[1], y_shape[1]
    uplo_f = "L" if lower else "U"
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, False, False)
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, not overwrite_y, False)
    n = a_shape[0]
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (y_shape[0] > (offy + ((n - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((n - 1) * abs(incy)))')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (y_shape[0] > (offy + ((n - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((n - 1) * abs(incy)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.chemv(fw_uplo_f, &n, &alpha, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, &beta, <fwc_complex_t*>np.PyArray_DATA(y_) + offy, &incy, 1)
    return y_
def zhemv(fwc_dbl_complex_t alpha, object a, object x, fwc_dbl_complex_t beta, object y, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, fwi_integer_t lower=0, bint overwrite_y=False):
    """zhemv(alpha, a, x, beta, y[, offx, incx, offy, incy, lower, overwrite_y]) -> y

    Parameters
    ----------
    alpha : fwc_dbl_complex_t_, intent in
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent in
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent in
    beta : fwc_dbl_complex_t_, intent in
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    lower : fwi_integer, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n
    cdef np.ndarray a_, x_, y_
    cdef np.npy_intp a_shape[2], x_shape[1], y_shape[1]
    uplo_f = "L" if lower else "U"
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, False, False)
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
    n = a_shape[0]
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (y_shape[0] > (offy + ((n - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((n - 1) * abs(incy)))')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (y_shape[0] > (offy + ((n - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((n - 1) * abs(incy)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.zhemv(fw_uplo_f, &n, &alpha, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, &beta, <fwc_dbl_complex_t*>np.PyArray_DATA(y_) + offy, &incy, 1)
    return y_


def csrot(object x, object y, fwr_real_t c, fwr_real_t s, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, bint overwrite_x=False, bint overwrite_y=False):
    """csrot(x, y, c, s[, n, offx, incx, offy, incy, overwrite_x, overwrite_y]) -> (x, y)

    Parameters
    ----------
    x : fwc_complex, 1D array, dimension(*), intent inout
    y : fwc_complex, 1D array, dimension(*), intent inout
    c : fwr_real, intent in
    s : fwr_real, intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    x : fwc_complex, 1D array, dimension(*), intent inout
    y : fwc_complex, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, not overwrite_x, False)
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, not overwrite_y, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.csrot(&n_, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_complex_t*>np.PyArray_DATA(y_) + offy, &incy, &c, &s)
    return (x_, y_,)


def csscal(fwr_real_t a, object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, bint overwrite_x=False):
    """csscal(a, x[, n, offx, incx, overwrite_x]) -> x

    Parameters
    ----------
    a : fwr_real, intent in
    x : fwc_complex, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_complex, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, not overwrite_x, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fc.csscal(&n_, &a, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    return x_


def dzasum(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """dzasum(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    x : fwc_dbl_complex, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out

    """
    cdef fwi_integer_t n_
    cdef fwr_dbl_t fw_ret_arg
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fw_ret_arg = fc.dzasum(&n_, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    return fw_ret_arg


def dznrm2(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """dznrm2(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    x : fwc_dbl_complex, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_dbl, intent out

    """
    cdef fwi_integer_t n_
    cdef fwr_dbl_t fw_ret_arg
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fw_ret_arg = fc.dznrm2(&n_, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    return fw_ret_arg

def cdotc(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """cdotc(x, y[, n, offx, incx, offy, incy]) -> xy

    Parameters
    ----------
    x : fwc_complex_t_, 1D array, dimension(*), intent in
    y : fwc_complex_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    xy : fwc_complex_t_, intent out

    """
    # These call a subroutine wrapper because the return argument
    # is complex, which is less compatible ABI-wise
    cdef fwc_complex_t xy
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    xy = 0
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.wcdotc(&xy, &n_, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return xy
def cdotu(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """cdotu(x, y[, n, offx, incx, offy, incy]) -> xy

    Parameters
    ----------
    x : fwc_complex_t_, 1D array, dimension(*), intent in
    y : fwc_complex_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    xy : fwc_complex_t_, intent out

    """
    # These call a subroutine wrapper because the return argument
    # is complex, which is less compatible ABI-wise
    cdef fwc_complex_t xy
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    xy = 0
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.wcdotu(&xy, &n_, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return xy
def zdotc(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """zdotc(x, y[, n, offx, incx, offy, incy]) -> xy

    Parameters
    ----------
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent in
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    xy : fwc_dbl_complex_t_, intent out

    """
    # These call a subroutine wrapper because the return argument
    # is complex, which is less compatible ABI-wise
    cdef fwc_dbl_complex_t xy
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    xy = 0
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.wzdotc(&xy, &n_, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return xy
def zdotu(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """zdotu(x, y[, n, offx, incx, offy, incy]) -> xy

    Parameters
    ----------
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent in
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    xy : fwc_dbl_complex_t_, intent out

    """
    # These call a subroutine wrapper because the return argument
    # is complex, which is less compatible ABI-wise
    cdef fwc_dbl_complex_t xy
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    xy = 0
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.wzdotu(&xy, &n_, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return xy

def isamax(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """isamax(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent inout
    incx : fwi_integer, intent inout

    Returns
    -------
    fw_ret_arg : fwi_integer, intent out

    """
    cdef fwi_integer_t fw_ret_arg, n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    n_ = n if n is not None else (x_shape[0] - offx) // abs(incx)
    if offx < 0 or offx >= x_shape[0]:
        raise ValueError("Not satisfied: offx>=0 and offx<len(x)")
    if not incx != 0:
        raise ValueError("Not satisfied: incx != 0")
    if not (x_shape[0] - offx) > (n_ - 1) * abs(incx):
        raise ValueError("Not satisfied: len(x)-offx>(n-1)*abs(incx)")
    fw_ret_arg = fc.isamax(&n_, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx)
    fw_ret_arg -= 1 # Convert Fortran index to Python index
    return fw_ret_arg
def idamax(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """idamax(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent inout
    incx : fwi_integer, intent inout

    Returns
    -------
    fw_ret_arg : fwi_integer, intent out

    """
    cdef fwi_integer_t fw_ret_arg, n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    n_ = n if n is not None else (x_shape[0] - offx) // abs(incx)
    if offx < 0 or offx >= x_shape[0]:
        raise ValueError("Not satisfied: offx>=0 and offx<len(x)")
    if not incx != 0:
        raise ValueError("Not satisfied: incx != 0")
    if not (x_shape[0] - offx) > (n_ - 1) * abs(incx):
        raise ValueError("Not satisfied: len(x)-offx>(n-1)*abs(incx)")
    fw_ret_arg = fc.idamax(&n_, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx)
    fw_ret_arg -= 1 # Convert Fortran index to Python index
    return fw_ret_arg
def icamax(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """icamax(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwc_complex_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent inout
    incx : fwi_integer, intent inout

    Returns
    -------
    fw_ret_arg : fwi_integer, intent out

    """
    cdef fwi_integer_t fw_ret_arg, n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    n_ = n if n is not None else (x_shape[0] - offx) // abs(incx)
    if offx < 0 or offx >= x_shape[0]:
        raise ValueError("Not satisfied: offx>=0 and offx<len(x)")
    if not incx != 0:
        raise ValueError("Not satisfied: incx != 0")
    if not (x_shape[0] - offx) > (n_ - 1) * abs(incx):
        raise ValueError("Not satisfied: len(x)-offx>(n-1)*abs(incx)")
    fw_ret_arg = fc.icamax(&n_, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    fw_ret_arg -= 1 # Convert Fortran index to Python index
    return fw_ret_arg
def izamax(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """izamax(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    n : fwi_integer, intent inout
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent inout
    incx : fwi_integer, intent inout

    Returns
    -------
    fw_ret_arg : fwi_integer, intent out

    """
    cdef fwi_integer_t fw_ret_arg, n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    n_ = n if n is not None else (x_shape[0] - offx) // abs(incx)
    if offx < 0 or offx >= x_shape[0]:
        raise ValueError("Not satisfied: offx>=0 and offx<len(x)")
    if not incx != 0:
        raise ValueError("Not satisfied: incx != 0")
    if not (x_shape[0] - offx) > (n_ - 1) * abs(incx):
        raise ValueError("Not satisfied: len(x)-offx>(n-1)*abs(incx)")
    fw_ret_arg = fc.izamax(&n_, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    fw_ret_arg -= 1 # Convert Fortran index to Python index
    return fw_ret_arg

def sasum(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """sasum(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    x : fwr_real_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_real_t_, intent out

    """
    cdef fwr_real_t fw_ret_arg
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fw_ret_arg = fc.sasum(&n_, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx)
    return fw_ret_arg
def dasum(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """dasum(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    x : fwr_dbl_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_dbl_t_, intent out

    """
    cdef fwr_dbl_t fw_ret_arg
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fw_ret_arg = fc.dasum(&n_, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx)
    return fw_ret_arg

def saxpy(object x, object y, object n=None, fwr_real_t a=1., fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """saxpy(x, y[, n, a, offx, incx, offy, incy]) -> y

    Parameters
    ----------
    x : fwr_real_t_, 1D array, dimension(*), intent in
    y : fwr_real_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    a : fwr_real_t_, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    y : fwr_real_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.saxpy(&n_, &a, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_real_t*>np.PyArray_DATA(y_) + offy, &incy)
    return y_
def daxpy(object x, object y, object n=None, fwr_dbl_t a=1., fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """daxpy(x, y[, n, a, offx, incx, offy, incy]) -> y

    Parameters
    ----------
    x : fwr_dbl_t_, 1D array, dimension(*), intent in
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    a : fwr_dbl_t_, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.daxpy(&n_, &a, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_dbl_t*>np.PyArray_DATA(y_) + offy, &incy)
    return y_
def caxpy(object x, object y, object n=None, fwc_complex_t a=1., fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """caxpy(x, y[, n, a, offx, incx, offy, incy]) -> y

    Parameters
    ----------
    x : fwc_complex_t_, 1D array, dimension(*), intent in
    y : fwc_complex_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    a : fwc_complex_t_, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    y : fwc_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.caxpy(&n_, &a, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return y_
def zaxpy(object x, object y, object n=None, fwc_dbl_complex_t a=1., fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """zaxpy(x, y[, n, a, offx, incx, offy, incy]) -> y

    Parameters
    ----------
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent in
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    a : fwc_dbl_complex_t_, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.zaxpy(&n_, &a, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return y_


def scasum(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """scasum(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    x : fwc_complex, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_real, intent out

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    cdef fwr_real_t fw_ret_arg
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fw_ret_arg = fc.scasum(&n_, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    return fw_ret_arg


def scnrm2(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """scnrm2(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    x : fwc_complex, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_real, intent out

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    cdef fwr_real_t fw_ret_arg
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fw_ret_arg = fc.scnrm2(&n_, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    return fw_ret_arg

def scopy(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """scopy(x, y[, n, offx, incx, offy, incy]) -> y

    Parameters
    ----------
    x : fwr_real_t_, 1D array, dimension(*), intent in
    y : fwr_real_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    y : fwr_real_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.scopy(&n_, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_real_t*>np.PyArray_DATA(y_) + offy, &incy)
    return y_
def dcopy(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """dcopy(x, y[, n, offx, incx, offy, incy]) -> y

    Parameters
    ----------
    x : fwr_dbl_t_, 1D array, dimension(*), intent in
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.dcopy(&n_, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_dbl_t*>np.PyArray_DATA(y_) + offy, &incy)
    return y_
def ccopy(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """ccopy(x, y[, n, offx, incx, offy, incy]) -> y

    Parameters
    ----------
    x : fwc_complex_t_, 1D array, dimension(*), intent in
    y : fwc_complex_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    y : fwc_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.ccopy(&n_, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return y_
def zcopy(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """zcopy(x, y[, n, offx, incx, offy, incy]) -> y

    Parameters
    ----------
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent in
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.zcopy(&n_, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return y_

def sdot(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """sdot(x, y[, n, offx, incx, offy, incy]) -> fw_ret_arg

    Parameters
    ----------
    x : fwr_real_t_, 1D array, dimension(*), intent in
    y : fwr_real_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_real_t_, intent out

    """
    cdef fwr_real_t fw_ret_arg
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fw_ret_arg = fc.sdot(&n_, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_real_t*>np.PyArray_DATA(y_) + offy, &incy)
    return fw_ret_arg
def ddot(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """ddot(x, y[, n, offx, incx, offy, incy]) -> fw_ret_arg

    Parameters
    ----------
    x : fwr_dbl_t_, 1D array, dimension(*), intent in
    y : fwr_dbl_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_dbl_t_, intent out

    """
    cdef fwr_dbl_t fw_ret_arg
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fw_ret_arg = fc.ddot(&n_, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_dbl_t*>np.PyArray_DATA(y_) + offy, &incy)
    return fw_ret_arg

def sgemm(fwr_real_t alpha, object a, object b, fwr_real_t beta=0.0, object c=None, fwi_integer_t trans_a=0, fwi_integer_t trans_b=0, bint overwrite_c=False):
    """sgemm(alpha, a, b[, beta, c, trans_a, trans_b, overwrite_c]) -> c

    Parameters
    ----------
    alpha : fwr_real_t_, intent in
    a : fwr_real_t_, 2D array, dimension(lda, ka), intent in
    b : fwr_real_t_, 2D array, dimension(ldb, kb), intent in
    beta : fwr_real_t_, intent in
    c : fwr_real_t_, 2D array, dimension(m, n), intent inout
    trans_a : fwi_integer, intent in
    trans_b : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwr_real_t_, 2D array, dimension(m, n), intent inout

    """
    cdef char *fw_transa_f = [0, 0], *fw_transb_f = [0, 0]
    cdef fwi_integer_t m, n, k, lda, ka, ldb, kb
    cdef np.ndarray a_, b_, c_
    cdef np.npy_intp a_shape[2], b_shape[2], c_shape[2]
    transa_f = ("C" if (trans_a == 2) else "T") if trans_a else "N"
    transb_f = ("C" if (trans_b == 2) else "T") if trans_b else "N"
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, False, False)
    lda = a_shape[0]
    ka = a_shape[1]
    m = ka if trans_a else lda
    b_ = fw_asfortranarray(b, fwr_real_t_enum, 2, b_shape, False, False)
    ldb = b_shape[0]
    kb = b_shape[1]
    n = ldb if trans_b else kb
    c_shape[0] = m; c_shape[1] = n
    c_ = fw_asfortranarray(c, fwr_real_t_enum, 2, c_shape, not overwrite_c, True)
    k = lda if trans_a else ka
    if not ((c_shape[0] == m) and (c_shape[1] == n)):
        raise ValueError('Condition on arguments not satisfied: (c.shape[0] == m) and (c.shape[1] == n)')
    if not ((trans_a >= 0) and (trans_a <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans_a >= 0) and (trans_a <= 2)')
    if not ((trans_b >= 0) and (trans_b <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans_b >= 0) and (trans_b <= 2)')
    if not ((kb == k) if trans_b else (ldb == k)):
        raise ValueError('Condition on arguments not satisfied: (kb == k) if trans_b else (ldb == k)')
    if lda != a_shape[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= ka <= a_shape[1]):
        raise ValueError("(0 <= ka <= a.shape[1]) not satisifed")
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= kb <= b_shape[1]):
        raise ValueError("(0 <= kb <= b.shape[1]) not satisifed")
    if m != c_shape[0]:
        raise ValueError("(m == c.shape[0]) not satisifed")
    if n != c_shape[1]:
        raise ValueError("(n == c.shape[1]) not satisifed")
    fw_transa_f[0] = fw_aschar(transa_f)
    if fw_transa_f[0] == 0:
        raise ValueError("len(transa_f) != 1")
    fw_transb_f[0] = fw_aschar(transb_f)
    if fw_transb_f[0] == 0:
        raise ValueError("len(transb_f) != 1")
    fc.sgemm(fw_transa_f, fw_transb_f, &m, &n, &k, &alpha, <fwr_real_t*>np.PyArray_DATA(a_), &lda, <fwr_real_t*>np.PyArray_DATA(b_), &ldb, &beta, <fwr_real_t*>np.PyArray_DATA(c_), &m, 1, 1)
    return c_
def dgemm(fwr_dbl_t alpha, object a, object b, fwr_dbl_t beta=0.0, object c=None, fwi_integer_t trans_a=0, fwi_integer_t trans_b=0, bint overwrite_c=False):
    """dgemm(alpha, a, b[, beta, c, trans_a, trans_b, overwrite_c]) -> c

    Parameters
    ----------
    alpha : fwr_dbl_t_, intent in
    a : fwr_dbl_t_, 2D array, dimension(lda, ka), intent in
    b : fwr_dbl_t_, 2D array, dimension(ldb, kb), intent in
    beta : fwr_dbl_t_, intent in
    c : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    trans_a : fwi_integer, intent in
    trans_b : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwr_dbl_t_, 2D array, dimension(m, n), intent inout

    """
    cdef char *fw_transa_f = [0, 0], *fw_transb_f = [0, 0]
    cdef fwi_integer_t m, n, k, lda, ka, ldb, kb
    cdef np.ndarray a_, b_, c_
    cdef np.npy_intp a_shape[2], b_shape[2], c_shape[2]
    transa_f = ("C" if (trans_a == 2) else "T") if trans_a else "N"
    transb_f = ("C" if (trans_b == 2) else "T") if trans_b else "N"
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, False, False)
    lda = a_shape[0]
    ka = a_shape[1]
    m = ka if trans_a else lda
    b_ = fw_asfortranarray(b, fwr_dbl_t_enum, 2, b_shape, False, False)
    ldb = b_shape[0]
    kb = b_shape[1]
    n = ldb if trans_b else kb
    c_shape[0] = m; c_shape[1] = n
    c_ = fw_asfortranarray(c, fwr_dbl_t_enum, 2, c_shape, not overwrite_c, True)
    k = lda if trans_a else ka
    if not ((c_shape[0] == m) and (c_shape[1] == n)):
        raise ValueError('Condition on arguments not satisfied: (c.shape[0] == m) and (c.shape[1] == n)')
    if not ((trans_a >= 0) and (trans_a <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans_a >= 0) and (trans_a <= 2)')
    if not ((trans_b >= 0) and (trans_b <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans_b >= 0) and (trans_b <= 2)')
    if not ((kb == k) if trans_b else (ldb == k)):
        raise ValueError('Condition on arguments not satisfied: (kb == k) if trans_b else (ldb == k)')
    if lda != a_shape[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= ka <= a_shape[1]):
        raise ValueError("(0 <= ka <= a.shape[1]) not satisifed")
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= kb <= b_shape[1]):
        raise ValueError("(0 <= kb <= b.shape[1]) not satisifed")
    if m != c_shape[0]:
        raise ValueError("(m == c.shape[0]) not satisifed")
    if n != c_shape[1]:
        raise ValueError("(n == c.shape[1]) not satisifed")
    fw_transa_f[0] = fw_aschar(transa_f)
    if fw_transa_f[0] == 0:
        raise ValueError("len(transa_f) != 1")
    fw_transb_f[0] = fw_aschar(transb_f)
    if fw_transb_f[0] == 0:
        raise ValueError("len(transb_f) != 1")
    fc.dgemm(fw_transa_f, fw_transb_f, &m, &n, &k, &alpha, <fwr_dbl_t*>np.PyArray_DATA(a_), &lda, <fwr_dbl_t*>np.PyArray_DATA(b_), &ldb, &beta, <fwr_dbl_t*>np.PyArray_DATA(c_), &m, 1, 1)
    return c_
def cgemm(fwc_complex_t alpha, object a, object b, fwc_complex_t beta=0.0, object c=None, fwi_integer_t trans_a=0, fwi_integer_t trans_b=0, bint overwrite_c=False):
    """cgemm(alpha, a, b[, beta, c, trans_a, trans_b, overwrite_c]) -> c

    Parameters
    ----------
    alpha : fwc_complex_t_, intent in
    a : fwc_complex_t_, 2D array, dimension(lda, ka), intent in
    b : fwc_complex_t_, 2D array, dimension(ldb, kb), intent in
    beta : fwc_complex_t_, intent in
    c : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    trans_a : fwi_integer, intent in
    trans_b : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwc_complex_t_, 2D array, dimension(m, n), intent inout

    """
    cdef char *fw_transa_f = [0, 0], *fw_transb_f = [0, 0]
    cdef fwi_integer_t m, n, k, lda, ka, ldb, kb
    cdef np.ndarray a_, b_, c_
    cdef np.npy_intp a_shape[2], b_shape[2], c_shape[2]
    transa_f = ("C" if (trans_a == 2) else "T") if trans_a else "N"
    transb_f = ("C" if (trans_b == 2) else "T") if trans_b else "N"
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, False, False)
    lda = a_shape[0]
    ka = a_shape[1]
    m = ka if trans_a else lda
    b_ = fw_asfortranarray(b, fwc_complex_t_enum, 2, b_shape, False, False)
    ldb = b_shape[0]
    kb = b_shape[1]
    n = ldb if trans_b else kb
    c_shape[0] = m; c_shape[1] = n
    c_ = fw_asfortranarray(c, fwc_complex_t_enum, 2, c_shape, not overwrite_c, True)
    k = lda if trans_a else ka
    if not ((c_shape[0] == m) and (c_shape[1] == n)):
        raise ValueError('Condition on arguments not satisfied: (c.shape[0] == m) and (c.shape[1] == n)')
    if not ((trans_a >= 0) and (trans_a <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans_a >= 0) and (trans_a <= 2)')
    if not ((trans_b >= 0) and (trans_b <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans_b >= 0) and (trans_b <= 2)')
    if not ((kb == k) if trans_b else (ldb == k)):
        raise ValueError('Condition on arguments not satisfied: (kb == k) if trans_b else (ldb == k)')
    if lda != a_shape[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= ka <= a_shape[1]):
        raise ValueError("(0 <= ka <= a.shape[1]) not satisifed")
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= kb <= b_shape[1]):
        raise ValueError("(0 <= kb <= b.shape[1]) not satisifed")
    if m != c_shape[0]:
        raise ValueError("(m == c.shape[0]) not satisifed")
    if n != c_shape[1]:
        raise ValueError("(n == c.shape[1]) not satisifed")
    fw_transa_f[0] = fw_aschar(transa_f)
    if fw_transa_f[0] == 0:
        raise ValueError("len(transa_f) != 1")
    fw_transb_f[0] = fw_aschar(transb_f)
    if fw_transb_f[0] == 0:
        raise ValueError("len(transb_f) != 1")
    fc.cgemm(fw_transa_f, fw_transb_f, &m, &n, &k, &alpha, <fwc_complex_t*>np.PyArray_DATA(a_), &lda, <fwc_complex_t*>np.PyArray_DATA(b_), &ldb, &beta, <fwc_complex_t*>np.PyArray_DATA(c_), &m, 1, 1)
    return c_
def zgemm(fwc_dbl_complex_t alpha, object a, object b, fwc_dbl_complex_t beta=0.0, object c=None, fwi_integer_t trans_a=0, fwi_integer_t trans_b=0, bint overwrite_c=False):
    """zgemm(alpha, a, b[, beta, c, trans_a, trans_b, overwrite_c]) -> c

    Parameters
    ----------
    alpha : fwc_dbl_complex_t_, intent in
    a : fwc_dbl_complex_t_, 2D array, dimension(lda, ka), intent in
    b : fwc_dbl_complex_t_, 2D array, dimension(ldb, kb), intent in
    beta : fwc_dbl_complex_t_, intent in
    c : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    trans_a : fwi_integer, intent in
    trans_b : fwi_integer, intent in
    overwrite_c : bint_, intent in

    Returns
    -------
    c : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout

    """
    cdef char *fw_transa_f = [0, 0], *fw_transb_f = [0, 0]
    cdef fwi_integer_t m, n, k, lda, ka, ldb, kb
    cdef np.ndarray a_, b_, c_
    cdef np.npy_intp a_shape[2], b_shape[2], c_shape[2]
    transa_f = ("C" if (trans_a == 2) else "T") if trans_a else "N"
    transb_f = ("C" if (trans_b == 2) else "T") if trans_b else "N"
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, False, False)
    lda = a_shape[0]
    ka = a_shape[1]
    m = ka if trans_a else lda
    b_ = fw_asfortranarray(b, fwc_dbl_complex_t_enum, 2, b_shape, False, False)
    ldb = b_shape[0]
    kb = b_shape[1]
    n = ldb if trans_b else kb
    c_shape[0] = m; c_shape[1] = n
    c_ = fw_asfortranarray(c, fwc_dbl_complex_t_enum, 2, c_shape, not overwrite_c, True)
    k = lda if trans_a else ka
    if not ((c_shape[0] == m) and (c_shape[1] == n)):
        raise ValueError('Condition on arguments not satisfied: (c.shape[0] == m) and (c.shape[1] == n)')
    if not ((trans_a >= 0) and (trans_a <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans_a >= 0) and (trans_a <= 2)')
    if not ((trans_b >= 0) and (trans_b <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans_b >= 0) and (trans_b <= 2)')
    if not ((kb == k) if trans_b else (ldb == k)):
        raise ValueError('Condition on arguments not satisfied: (kb == k) if trans_b else (ldb == k)')
    if lda != a_shape[0]:
        raise ValueError("(lda == a.shape[0]) not satisifed")
    if not (0 <= ka <= a_shape[1]):
        raise ValueError("(0 <= ka <= a.shape[1]) not satisifed")
    if ldb != b_shape[0]:
        raise ValueError("(ldb == b.shape[0]) not satisifed")
    if not (0 <= kb <= b_shape[1]):
        raise ValueError("(0 <= kb <= b.shape[1]) not satisifed")
    if m != c_shape[0]:
        raise ValueError("(m == c.shape[0]) not satisifed")
    if n != c_shape[1]:
        raise ValueError("(n == c.shape[1]) not satisifed")
    fw_transa_f[0] = fw_aschar(transa_f)
    if fw_transa_f[0] == 0:
        raise ValueError("len(transa_f) != 1")
    fw_transb_f[0] = fw_aschar(transb_f)
    if fw_transb_f[0] == 0:
        raise ValueError("len(transb_f) != 1")
    fc.zgemm(fw_transa_f, fw_transb_f, &m, &n, &k, &alpha, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &lda, <fwc_dbl_complex_t*>np.PyArray_DATA(b_), &ldb, &beta, <fwc_dbl_complex_t*>np.PyArray_DATA(c_), &m, 1, 1)
    return c_

def sgemv(fwr_real_t alpha, object a, object x, fwr_real_t beta=0.0, object y=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, fwi_integer_t trans=0, bint overwrite_y=False):
    """sgemv(alpha, a, x[, beta, y, offx, incx, offy, incy, trans, overwrite_y]) -> y

    Parameters
    ----------
    alpha : fwr_real_t_, intent in
    a : fwr_real_t_, 2D array, dimension(m, n), intent in
    x : fwr_real_t_, 1D array, dimension(*), intent in
    beta : fwr_real_t_, intent in
    y : fwr_real_t_, 1D array, dimension(ly), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    trans : fwi_integer, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    y : fwr_real_t_, 1D array, dimension(ly), intent inout

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t m, n, rows, cols, ly
    cdef np.ndarray a_, x_, y_
    cdef np.npy_intp a_shape[2], x_shape[1], y_shape[1]
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, False, False)
    m = a_shape[0]
    n = a_shape[1]
    rows = n if trans else m
    cols = m if trans else n
    ly = 1 + offy + (rows - 1) * abs(incy)
    y_shape[0] = ly
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, not overwrite_y, True)
    ly = y_shape[0]
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not (x_shape[0] > (offx + ((cols - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((cols - 1) * abs(incx)))')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not (y_shape[0] > (offy + ((rows - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((rows - 1) * abs(incy)))')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if ly != y_shape[0]:
        raise ValueError("(ly == y.shape[0]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fc.sgemv(fw_trans_f, &m, &n, &alpha, <fwr_real_t*>np.PyArray_DATA(a_), &m, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, &beta, <fwr_real_t*>np.PyArray_DATA(y_) + offy, &incy, 1)
    return y_
def dgemv(fwr_dbl_t alpha, object a, object x, fwr_dbl_t beta=0.0, object y=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, fwi_integer_t trans=0, bint overwrite_y=False):
    """dgemv(alpha, a, x[, beta, y, offx, incx, offy, incy, trans, overwrite_y]) -> y

    Parameters
    ----------
    alpha : fwr_dbl_t_, intent in
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent in
    x : fwr_dbl_t_, 1D array, dimension(*), intent in
    beta : fwr_dbl_t_, intent in
    y : fwr_dbl_t_, 1D array, dimension(ly), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    trans : fwi_integer, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    y : fwr_dbl_t_, 1D array, dimension(ly), intent inout

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t m, n, rows, cols, ly
    cdef np.ndarray a_, x_, y_
    cdef np.npy_intp a_shape[2], x_shape[1], y_shape[1]
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, False, False)
    m = a_shape[0]
    n = a_shape[1]
    rows = n if trans else m
    cols = m if trans else n
    ly = 1 + offy + (rows - 1) * abs(incy)
    y_shape[0] = ly
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, True)
    ly = y_shape[0]
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not (x_shape[0] > (offx + ((cols - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((cols - 1) * abs(incx)))')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not (y_shape[0] > (offy + ((rows - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((rows - 1) * abs(incy)))')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if ly != y_shape[0]:
        raise ValueError("(ly == y.shape[0]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fc.dgemv(fw_trans_f, &m, &n, &alpha, <fwr_dbl_t*>np.PyArray_DATA(a_), &m, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, &beta, <fwr_dbl_t*>np.PyArray_DATA(y_) + offy, &incy, 1)
    return y_
def cgemv(fwc_complex_t alpha, object a, object x, fwc_complex_t beta=0.0, object y=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, fwi_integer_t trans=0, bint overwrite_y=False):
    """cgemv(alpha, a, x[, beta, y, offx, incx, offy, incy, trans, overwrite_y]) -> y

    Parameters
    ----------
    alpha : fwc_complex_t_, intent in
    a : fwc_complex_t_, 2D array, dimension(m, n), intent in
    x : fwc_complex_t_, 1D array, dimension(*), intent in
    beta : fwc_complex_t_, intent in
    y : fwc_complex_t_, 1D array, dimension(ly), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    trans : fwi_integer, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    y : fwc_complex_t_, 1D array, dimension(ly), intent inout

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t m, n, rows, cols, ly
    cdef np.ndarray a_, x_, y_
    cdef np.npy_intp a_shape[2], x_shape[1], y_shape[1]
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, False, False)
    m = a_shape[0]
    n = a_shape[1]
    rows = n if trans else m
    cols = m if trans else n
    ly = 1 + offy + (rows - 1) * abs(incy)
    y_shape[0] = ly
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, not overwrite_y, True)
    ly = y_shape[0]
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not (x_shape[0] > (offx + ((cols - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((cols - 1) * abs(incx)))')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not (y_shape[0] > (offy + ((rows - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((rows - 1) * abs(incy)))')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if ly != y_shape[0]:
        raise ValueError("(ly == y.shape[0]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fc.cgemv(fw_trans_f, &m, &n, &alpha, <fwc_complex_t*>np.PyArray_DATA(a_), &m, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, &beta, <fwc_complex_t*>np.PyArray_DATA(y_) + offy, &incy, 1)
    return y_
def zgemv(fwc_dbl_complex_t alpha, object a, object x, fwc_dbl_complex_t beta=0.0, object y=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, fwi_integer_t trans=0, bint overwrite_y=False):
    """zgemv(alpha, a, x[, beta, y, offx, incx, offy, incy, trans, overwrite_y]) -> y

    Parameters
    ----------
    alpha : fwc_dbl_complex_t_, intent in
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent in
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent in
    beta : fwc_dbl_complex_t_, intent in
    y : fwc_dbl_complex_t_, 1D array, dimension(ly), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    trans : fwi_integer, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    y : fwc_dbl_complex_t_, 1D array, dimension(ly), intent inout

    """
    cdef char *fw_trans_f = [0, 0]
    cdef fwi_integer_t m, n, rows, cols, ly
    cdef np.ndarray a_, x_, y_
    cdef np.npy_intp a_shape[2], x_shape[1], y_shape[1]
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, False, False)
    m = a_shape[0]
    n = a_shape[1]
    rows = n if trans else m
    cols = m if trans else n
    ly = 1 + offy + (rows - 1) * abs(incy)
    y_shape[0] = ly
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, True)
    ly = y_shape[0]
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not (x_shape[0] > (offx + ((cols - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((cols - 1) * abs(incx)))')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not (y_shape[0] > (offy + ((rows - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((rows - 1) * abs(incy)))')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    if ly != y_shape[0]:
        raise ValueError("(ly == y.shape[0]) not satisifed")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fc.zgemv(fw_trans_f, &m, &n, &alpha, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &m, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, &beta, <fwc_dbl_complex_t*>np.PyArray_DATA(y_) + offy, &incy, 1)
    return y_

def sger(fwr_real_t alpha, object x, object y, fwi_integer_t incx=1, fwi_integer_t incy=1, object a=None, bint overwrite_x=True, bint overwrite_y=True, bint overwrite_a=False):
    """sger(alpha, x, y[, incx, incy, a, overwrite_x, overwrite_y, overwrite_a]) -> a

    Parameters
    ----------
    alpha : fwr_real_t_, intent in
    x : fwr_real_t_, 1D array, dimension(m), intent in
    y : fwr_real_t_, 1D array, dimension(n), intent in
    incx : fwi_integer, intent in
    incy : fwi_integer, intent in
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwr_real_t_, 2D array, dimension(m, n), intent inout

    """
    cdef fwi_integer_t m, n, lda
    cdef np.ndarray x_, y_, a_
    cdef np.npy_intp x_shape[1], y_shape[1], a_shape[2]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, not overwrite_x, False)
    m = x_shape[0]
    lda = m
    if not ((incx == 1) or (incx == -1)):
        raise ValueError('Condition on arguments not satisfied: (incx == 1) or (incx == -1)')
    if not ((incy == 1) or (incy == -1)):
        raise ValueError('Condition on arguments not satisfied: (incy == 1) or (incy == -1)')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, not overwrite_y, False)
    n = y_shape[0]
    if not (0 <= n <= y_shape[0]):
        raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
    a_shape[0] = m; a_shape[1] = n
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, True)
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.sger(&m, &n, &alpha, <fwr_real_t*>np.PyArray_DATA(x_), &incx, <fwr_real_t*>np.PyArray_DATA(y_), &incy, <fwr_real_t*>np.PyArray_DATA(a_), &lda)
    return a_
def dger(fwr_dbl_t alpha, object x, object y, fwi_integer_t incx=1, fwi_integer_t incy=1, object a=None, bint overwrite_x=True, bint overwrite_y=True, bint overwrite_a=False):
    """dger(alpha, x, y[, incx, incy, a, overwrite_x, overwrite_y, overwrite_a]) -> a

    Parameters
    ----------
    alpha : fwr_dbl_t_, intent in
    x : fwr_dbl_t_, 1D array, dimension(m), intent in
    y : fwr_dbl_t_, 1D array, dimension(n), intent in
    incx : fwi_integer, intent in
    incy : fwi_integer, intent in
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwr_dbl_t_, 2D array, dimension(m, n), intent inout

    """
    cdef fwi_integer_t m, n, lda
    cdef np.ndarray x_, y_, a_
    cdef np.npy_intp x_shape[1], y_shape[1], a_shape[2]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, not overwrite_x, False)
    m = x_shape[0]
    lda = m
    if not ((incx == 1) or (incx == -1)):
        raise ValueError('Condition on arguments not satisfied: (incx == 1) or (incx == -1)')
    if not ((incy == 1) or (incy == -1)):
        raise ValueError('Condition on arguments not satisfied: (incy == 1) or (incy == -1)')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
    n = y_shape[0]
    if not (0 <= n <= y_shape[0]):
        raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
    a_shape[0] = m; a_shape[1] = n
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, True)
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.dger(&m, &n, &alpha, <fwr_dbl_t*>np.PyArray_DATA(x_), &incx, <fwr_dbl_t*>np.PyArray_DATA(y_), &incy, <fwr_dbl_t*>np.PyArray_DATA(a_), &lda)
    return a_
def cgerc(fwc_complex_t alpha, object x, object y, fwi_integer_t incx=1, fwi_integer_t incy=1, object a=None, bint overwrite_x=True, bint overwrite_y=True, bint overwrite_a=False):
    """cgerc(alpha, x, y[, incx, incy, a, overwrite_x, overwrite_y, overwrite_a]) -> a

    Parameters
    ----------
    alpha : fwc_complex_t_, intent in
    x : fwc_complex_t_, 1D array, dimension(m), intent in
    y : fwc_complex_t_, 1D array, dimension(n), intent in
    incx : fwi_integer, intent in
    incy : fwi_integer, intent in
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout

    """
    cdef fwi_integer_t m, n, lda
    cdef np.ndarray x_, y_, a_
    cdef np.npy_intp x_shape[1], y_shape[1], a_shape[2]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, not overwrite_x, False)
    m = x_shape[0]
    lda = m
    if not ((incx == 1) or (incx == -1)):
        raise ValueError('Condition on arguments not satisfied: (incx == 1) or (incx == -1)')
    if not ((incy == 1) or (incy == -1)):
        raise ValueError('Condition on arguments not satisfied: (incy == 1) or (incy == -1)')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, not overwrite_y, False)
    n = y_shape[0]
    if not (0 <= n <= y_shape[0]):
        raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
    a_shape[0] = m; a_shape[1] = n
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, True)
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.cgerc(&m, &n, &alpha, <fwc_complex_t*>np.PyArray_DATA(x_), &incx, <fwc_complex_t*>np.PyArray_DATA(y_), &incy, <fwc_complex_t*>np.PyArray_DATA(a_), &lda)
    return a_
def cgeru(fwc_complex_t alpha, object x, object y, fwi_integer_t incx=1, fwi_integer_t incy=1, object a=None, bint overwrite_x=True, bint overwrite_y=True, bint overwrite_a=False):
    """cgeru(alpha, x, y[, incx, incy, a, overwrite_x, overwrite_y, overwrite_a]) -> a

    Parameters
    ----------
    alpha : fwc_complex_t_, intent in
    x : fwc_complex_t_, 1D array, dimension(m), intent in
    y : fwc_complex_t_, 1D array, dimension(n), intent in
    incx : fwi_integer, intent in
    incy : fwi_integer, intent in
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwc_complex_t_, 2D array, dimension(m, n), intent inout

    """
    cdef fwi_integer_t m, n, lda
    cdef np.ndarray x_, y_, a_
    cdef np.npy_intp x_shape[1], y_shape[1], a_shape[2]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, not overwrite_x, False)
    m = x_shape[0]
    lda = m
    if not ((incx == 1) or (incx == -1)):
        raise ValueError('Condition on arguments not satisfied: (incx == 1) or (incx == -1)')
    if not ((incy == 1) or (incy == -1)):
        raise ValueError('Condition on arguments not satisfied: (incy == 1) or (incy == -1)')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, not overwrite_y, False)
    n = y_shape[0]
    if not (0 <= n <= y_shape[0]):
        raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
    a_shape[0] = m; a_shape[1] = n
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, True)
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.cgeru(&m, &n, &alpha, <fwc_complex_t*>np.PyArray_DATA(x_), &incx, <fwc_complex_t*>np.PyArray_DATA(y_), &incy, <fwc_complex_t*>np.PyArray_DATA(a_), &lda)
    return a_
def zgerc(fwc_dbl_complex_t alpha, object x, object y, fwi_integer_t incx=1, fwi_integer_t incy=1, object a=None, bint overwrite_x=True, bint overwrite_y=True, bint overwrite_a=False):
    """zgerc(alpha, x, y[, incx, incy, a, overwrite_x, overwrite_y, overwrite_a]) -> a

    Parameters
    ----------
    alpha : fwc_dbl_complex_t_, intent in
    x : fwc_dbl_complex_t_, 1D array, dimension(m), intent in
    y : fwc_dbl_complex_t_, 1D array, dimension(n), intent in
    incx : fwi_integer, intent in
    incy : fwi_integer, intent in
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout

    """
    cdef fwi_integer_t m, n, lda
    cdef np.ndarray x_, y_, a_
    cdef np.npy_intp x_shape[1], y_shape[1], a_shape[2]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, not overwrite_x, False)
    m = x_shape[0]
    lda = m
    if not ((incx == 1) or (incx == -1)):
        raise ValueError('Condition on arguments not satisfied: (incx == 1) or (incx == -1)')
    if not ((incy == 1) or (incy == -1)):
        raise ValueError('Condition on arguments not satisfied: (incy == 1) or (incy == -1)')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
    n = y_shape[0]
    if not (0 <= n <= y_shape[0]):
        raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
    a_shape[0] = m; a_shape[1] = n
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, True)
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.zgerc(&m, &n, &alpha, <fwc_dbl_complex_t*>np.PyArray_DATA(x_), &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(y_), &incy, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &lda)
    return a_
def zgeru(fwc_dbl_complex_t alpha, object x, object y, fwi_integer_t incx=1, fwi_integer_t incy=1, object a=None, bint overwrite_x=True, bint overwrite_y=True, bint overwrite_a=False):
    """zgeru(alpha, x, y[, incx, incy, a, overwrite_x, overwrite_y, overwrite_a]) -> a

    Parameters
    ----------
    alpha : fwc_dbl_complex_t_, intent in
    x : fwc_dbl_complex_t_, 1D array, dimension(m), intent in
    y : fwc_dbl_complex_t_, 1D array, dimension(n), intent in
    incx : fwi_integer, intent in
    incy : fwi_integer, intent in
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in
    overwrite_a : bint_, intent in

    Returns
    -------
    a : fwc_dbl_complex_t_, 2D array, dimension(m, n), intent inout

    """
    cdef fwi_integer_t m, n, lda
    cdef np.ndarray x_, y_, a_
    cdef np.npy_intp x_shape[1], y_shape[1], a_shape[2]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, not overwrite_x, False)
    m = x_shape[0]
    lda = m
    if not ((incx == 1) or (incx == -1)):
        raise ValueError('Condition on arguments not satisfied: (incx == 1) or (incx == -1)')
    if not ((incy == 1) or (incy == -1)):
        raise ValueError('Condition on arguments not satisfied: (incy == 1) or (incy == -1)')
    if not (0 <= m <= x_shape[0]):
        raise ValueError("(0 <= m <= x.shape[0]) not satisifed")
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
    n = y_shape[0]
    if not (0 <= n <= y_shape[0]):
        raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
    a_shape[0] = m; a_shape[1] = n
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, not overwrite_a, True)
    if m != a_shape[0]:
        raise ValueError("(m == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fc.zgeru(&m, &n, &alpha, <fwc_dbl_complex_t*>np.PyArray_DATA(x_), &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(y_), &incy, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &lda)
    return a_

def snrm2(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """snrm2(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    x : fwr_real_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_real_t_, intent out

    """
    cdef fwr_real_t fw_ret_arg
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fw_ret_arg = fc.snrm2(&n_, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx)
    return fw_ret_arg
def dnrm2(object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """dnrm2(x[, n, offx, incx]) -> fw_ret_arg

    Parameters
    ----------
    x : fwr_dbl_t_, 1D array, dimension(*), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    fw_ret_arg : fwr_dbl_t_, intent out

    """
    cdef fwr_dbl_t fw_ret_arg
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fw_ret_arg = fc.dnrm2(&n_, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx)
    return fw_ret_arg

def srot(object x, object y, fwr_real_t c, fwr_real_t s, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, bint overwrite_x=False, bint overwrite_y=False):
    """srot(x, y, c, s[, n, offx, incx, offy, incy, overwrite_x, overwrite_y]) -> (x, y)

    Parameters
    ----------
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    y : fwr_real_t_, 1D array, dimension(*), intent inout
    c : fwr_real_t_, intent in
    s : fwr_real_t_, intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    y : fwr_real_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, not overwrite_x, False)
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, not overwrite_y, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.srot(&n_, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_real_t*>np.PyArray_DATA(y_) + offy, &incy, &c, &s)
    return (x_, y_,)
def drot(object x, object y, fwr_dbl_t c, fwr_dbl_t s, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, bint overwrite_x=False, bint overwrite_y=False):
    """drot(x, y, c, s[, n, offx, incx, offy, incy, overwrite_x, overwrite_y]) -> (x, y)

    Parameters
    ----------
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout
    c : fwr_dbl_t_, intent in
    s : fwr_dbl_t_, intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, not overwrite_x, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.drot(&n_, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_dbl_t*>np.PyArray_DATA(y_) + offy, &incy, &c, &s)
    return (x_, y_,)

def srotg(fwr_real_t a, fwr_real_t b):
    """srotg(a, b) -> (c, s)

    Parameters
    ----------
    a : fwr_real_t_, intent in
    b : fwr_real_t_, intent in

    Returns
    -------
    c : fwr_real_t_, intent out
    s : fwr_real_t_, intent out

    """
    cdef fwr_real_t c
    cdef fwr_real_t s
    c = 0
    s = 0
    fc.srotg(&a, &b, &c, &s)
    return (<fwr_real_t>c, s,)
def drotg(fwr_dbl_t a, fwr_dbl_t b):
    """drotg(a, b) -> (c, s)

    Parameters
    ----------
    a : fwr_dbl_t_, intent in
    b : fwr_dbl_t_, intent in

    Returns
    -------
    c : fwr_dbl_t_, intent out
    s : fwr_dbl_t_, intent out

    """
    cdef fwr_dbl_t c
    cdef fwr_dbl_t s
    c = 0
    s = 0
    fc.drotg(&a, &b, &c, &s)
    return (<fwr_dbl_t>c, s,)
def crotg(fwc_complex_t a, fwc_complex_t b):
    """crotg(a, b) -> (c, s)

    Parameters
    ----------
    a : fwc_complex_t_, intent in
    b : fwc_complex_t_, intent in

    Returns
    -------
    c : fwc_complex_t_, intent out
    s : fwc_complex_t_, intent out

    """
    cdef fwr_real_t c
    cdef fwc_complex_t s
    c = 0
    s = 0
    fc.crotg(&a, &b, &c, &s)
    return (<fwc_complex_t>c, s,)
def zrotg(fwc_dbl_complex_t a, fwc_dbl_complex_t b):
    """zrotg(a, b) -> (c, s)

    Parameters
    ----------
    a : fwc_dbl_complex_t_, intent in
    b : fwc_dbl_complex_t_, intent in

    Returns
    -------
    c : fwc_dbl_complex_t_, intent out
    s : fwc_dbl_complex_t_, intent out

    """
    cdef fwr_dbl_t c
    cdef fwc_dbl_complex_t s
    c = 0
    s = 0
    fc.zrotg(&a, &b, &c, &s)
    return (<fwc_dbl_complex_t>c, s,)

def srotm(object x, object y, object param, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, bint overwrite_x=False, bint overwrite_y=False):
    """srotm(x, y, param[, n, offx, incx, offy, incy, overwrite_x, overwrite_y]) -> (x, y)

    Parameters
    ----------
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    y : fwr_real_t_, 1D array, dimension(*), intent inout
    param : fwr_real_t_, 1D array, dimension(5), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    y : fwr_real_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_, param_
    cdef np.npy_intp x_shape[1], y_shape[1], param_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, not overwrite_x, False)
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, not overwrite_y, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    param_ = fw_asfortranarray(param, fwr_real_t_enum, 1, param_shape, False, False)
    if not (0 <= 5 <= param_shape[0]):
        raise ValueError("(0 <= 5 <= param.shape[0]) not satisifed")
    fc.srotm(&n_, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_real_t*>np.PyArray_DATA(y_) + offy, &incy, <fwr_real_t*>np.PyArray_DATA(param_))
    return (x_, y_,)
def drotm(object x, object y, object param, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, bint overwrite_x=False, bint overwrite_y=False):
    """drotm(x, y, param[, n, offx, incx, offy, incy, overwrite_x, overwrite_y]) -> (x, y)

    Parameters
    ----------
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout
    param : fwr_dbl_t_, 1D array, dimension(5), intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_, param_
    cdef np.npy_intp x_shape[1], y_shape[1], param_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, not overwrite_x, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    param_ = fw_asfortranarray(param, fwr_dbl_t_enum, 1, param_shape, False, False)
    if not (0 <= 5 <= param_shape[0]):
        raise ValueError("(0 <= 5 <= param.shape[0]) not satisifed")
    fc.drotm(&n_, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_dbl_t*>np.PyArray_DATA(y_) + offy, &incy, <fwr_dbl_t*>np.PyArray_DATA(param_))
    return (x_, y_,)

def srotmg(fwr_real_t d1, fwr_real_t d2, fwr_real_t x1, fwr_real_t y1, object param=None):
    """srotmg(d1, d2, x1, y1[, param]) -> param

    Parameters
    ----------
    d1 : fwr_real_t_, intent in
    d2 : fwr_real_t_, intent in
    x1 : fwr_real_t_, intent in
    y1 : fwr_real_t_, intent in
    param : fwr_real_t_, 1D array, dimension(5), intent out

    Returns
    -------
    param : fwr_real_t_, 1D array, dimension(5), intent out

    """
    cdef np.ndarray param_
    cdef np.npy_intp param_shape[1]
    param_shape[0] = 5
    param_ = fw_asfortranarray(param, fwr_real_t_enum, 1, param_shape, False, True)
    if not (0 <= 5 <= param_shape[0]):
        raise ValueError("(0 <= 5 <= param.shape[0]) not satisifed")
    fc.srotmg(&d1, &d2, &x1, &y1, <fwr_real_t*>np.PyArray_DATA(param_))
    return param_
def drotmg(fwr_dbl_t d1, fwr_dbl_t d2, fwr_dbl_t x1, fwr_dbl_t y1, object param=None):
    """drotmg(d1, d2, x1, y1[, param]) -> param

    Parameters
    ----------
    d1 : fwr_dbl_t_, intent in
    d2 : fwr_dbl_t_, intent in
    x1 : fwr_dbl_t_, intent in
    y1 : fwr_dbl_t_, intent in
    param : fwr_dbl_t_, 1D array, dimension(5), intent out

    Returns
    -------
    param : fwr_dbl_t_, 1D array, dimension(5), intent out

    """
    cdef np.ndarray param_
    cdef np.npy_intp param_shape[1]
    param_shape[0] = 5
    param_ = fw_asfortranarray(param, fwr_dbl_t_enum, 1, param_shape, False, True)
    if not (0 <= 5 <= param_shape[0]):
        raise ValueError("(0 <= 5 <= param.shape[0]) not satisifed")
    fc.drotmg(&d1, &d2, &x1, &y1, <fwr_dbl_t*>np.PyArray_DATA(param_))
    return param_

def sscal(fwr_real_t a, object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """sscal(a, x[, n, offx, incx]) -> x

    Parameters
    ----------
    a : fwr_real_t_, intent in
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    x : fwr_real_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fc.sscal(&n_, &a, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx)
    return x_
def dscal(fwr_dbl_t a, object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """dscal(a, x[, n, offx, incx]) -> x

    Parameters
    ----------
    a : fwr_dbl_t_, intent in
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fc.dscal(&n_, &a, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx)
    return x_
def cscal(fwc_complex_t a, object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """cscal(a, x[, n, offx, incx]) -> x

    Parameters
    ----------
    a : fwc_complex_t_, intent in
    x : fwc_complex_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    x : fwc_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fc.cscal(&n_, &a, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    return x_
def zscal(fwc_dbl_complex_t a, object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1):
    """zscal(a, x[, n, offx, incx]) -> x

    Parameters
    ----------
    a : fwc_dbl_complex_t_, intent in
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in

    Returns
    -------
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fc.zscal(&n_, &a, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    return x_

def sswap(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """sswap(x, y[, n, offx, incx, offy, incy]) -> (x, y)

    Parameters
    ----------
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    y : fwr_real_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    y : fwr_real_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.sswap(&n_, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_real_t*>np.PyArray_DATA(y_) + offy, &incy)
    return (x_, y_,)
def dswap(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """dswap(x, y[, n, offx, incx, offy, incy]) -> (x, y)

    Parameters
    ----------
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.dswap(&n_, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, <fwr_dbl_t*>np.PyArray_DATA(y_) + offy, &incy)
    return (x_, y_,)
def cswap(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """cswap(x, y[, n, offx, incx, offy, incy]) -> (x, y)

    Parameters
    ----------
    x : fwc_complex_t_, 1D array, dimension(*), intent inout
    y : fwc_complex_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    x : fwc_complex_t_, 1D array, dimension(*), intent inout
    y : fwc_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.cswap(&n_, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return (x_, y_,)
def zswap(object x, object y, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1):
    """zswap(x, y[, n, offx, incx, offy, incy]) -> (x, y)

    Parameters
    ----------
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in

    Returns
    -------
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    y : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, False, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.zswap(&n_, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(y_) + offy, &incy)
    return (x_, y_,)

def ssymv(fwr_real_t alpha, object a, object x, fwr_real_t beta, object y, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, fwi_integer_t lower=0, bint overwrite_y=False):
    """ssymv(alpha, a, x, beta, y[, offx, incx, offy, incy, lower, overwrite_y]) -> y

    Parameters
    ----------
    alpha : fwr_real_t_, intent in
    a : fwr_real_t_, 2D array, dimension(n, n), intent in
    x : fwr_real_t_, 1D array, dimension(*), intent in
    beta : fwr_real_t_, intent in
    y : fwr_real_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    lower : fwi_integer, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    y : fwr_real_t_, 1D array, dimension(*), intent inout

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n
    cdef np.ndarray a_, x_, y_
    cdef np.npy_intp a_shape[2], x_shape[1], y_shape[1]
    uplo_f = "L" if lower else "U"
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_real_t_enum, 1, y_shape, not overwrite_y, False)
    n = a_shape[0]
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (y_shape[0] > (offy + ((n - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((n - 1) * abs(incy)))')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (y_shape[0] > (offy + ((n - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((n - 1) * abs(incy)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.ssymv(fw_uplo_f, &n, &alpha, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, &beta, <fwr_real_t*>np.PyArray_DATA(y_) + offy, &incy, 1)
    return y_
def dsymv(fwr_dbl_t alpha, object a, object x, fwr_dbl_t beta, object y, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, fwi_integer_t lower=0, bint overwrite_y=False):
    """dsymv(alpha, a, x, beta, y[, offx, incx, offy, incy, lower, overwrite_y]) -> y

    Parameters
    ----------
    alpha : fwr_dbl_t_, intent in
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    x : fwr_dbl_t_, 1D array, dimension(*), intent in
    beta : fwr_dbl_t_, intent in
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    lower : fwi_integer, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    y : fwr_dbl_t_, 1D array, dimension(*), intent inout

    """
    cdef char *fw_uplo_f = [0, 0]
    cdef fwi_integer_t n
    cdef np.ndarray a_, x_, y_
    cdef np.npy_intp a_shape[2], x_shape[1], y_shape[1]
    uplo_f = "L" if lower else "U"
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
    n = a_shape[0]
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (y_shape[0] > (offy + ((n - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((n - 1) * abs(incy)))')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (y_shape[0] > (offy + ((n - 1) * abs(incy)))):
        raise ValueError('Condition on arguments not satisfied: y.shape[0] > (offy + ((n - 1) * abs(incy)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fc.dsymv(fw_uplo_f, &n, &alpha, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, &beta, <fwr_dbl_t*>np.PyArray_DATA(y_) + offy, &incy, 1)
    return y_

def strmv(object a, object x, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t lower=0, fwi_integer_t trans=0, fwi_integer_t unitdiag=0, bint overwrite_x=False):
    """strmv(a, x[, offx, incx, lower, trans, unitdiag, overwrite_x]) -> x

    Parameters
    ----------
    a : fwr_real_t_, 2D array, dimension(n, n), intent in
    x : fwr_real_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    lower : fwi_integer, intent in
    trans : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_t_, 1D array, dimension(*), intent inout

    """
    cdef char *fw_uplo_f = [0, 0], *fw_trans_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t n
    cdef np.ndarray a_, x_
    cdef np.npy_intp a_shape[2], x_shape[1]
    uplo_f = "L" if lower else "U"
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    diag_f = "U" if unitdiag else "N"
    a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, not overwrite_x, False)
    n = a_shape[0]
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.strmv(fw_uplo_f, fw_trans_f, fw_diag_f, &n, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwr_real_t*>np.PyArray_DATA(x_) + offx, &incx, 1, 1, 1)
    return x_
def dtrmv(object a, object x, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t lower=0, fwi_integer_t trans=0, fwi_integer_t unitdiag=0, bint overwrite_x=False):
    """dtrmv(a, x[, offx, incx, lower, trans, unitdiag, overwrite_x]) -> x

    Parameters
    ----------
    a : fwr_dbl_t_, 2D array, dimension(n, n), intent in
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    lower : fwi_integer, intent in
    trans : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_dbl_t_, 1D array, dimension(*), intent inout

    """
    cdef char *fw_uplo_f = [0, 0], *fw_trans_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t n
    cdef np.ndarray a_, x_
    cdef np.npy_intp a_shape[2], x_shape[1]
    uplo_f = "L" if lower else "U"
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    diag_f = "U" if unitdiag else "N"
    a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, False, False)
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, not overwrite_x, False)
    n = a_shape[0]
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.dtrmv(fw_uplo_f, fw_trans_f, fw_diag_f, &n, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwr_dbl_t*>np.PyArray_DATA(x_) + offx, &incx, 1, 1, 1)
    return x_
def ctrmv(object a, object x, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t lower=0, fwi_integer_t trans=0, fwi_integer_t unitdiag=0, bint overwrite_x=False):
    """ctrmv(a, x[, offx, incx, lower, trans, unitdiag, overwrite_x]) -> x

    Parameters
    ----------
    a : fwc_complex_t_, 2D array, dimension(n, n), intent in
    x : fwc_complex_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    lower : fwi_integer, intent in
    trans : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef char *fw_uplo_f = [0, 0], *fw_trans_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t n
    cdef np.ndarray a_, x_
    cdef np.npy_intp a_shape[2], x_shape[1]
    uplo_f = "L" if lower else "U"
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    diag_f = "U" if unitdiag else "N"
    a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, False, False)
    x_ = fw_asfortranarray(x, fwc_complex_t_enum, 1, x_shape, not overwrite_x, False)
    n = a_shape[0]
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.ctrmv(fw_uplo_f, fw_trans_f, fw_diag_f, &n, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwc_complex_t*>np.PyArray_DATA(x_) + offx, &incx, 1, 1, 1)
    return x_
def ztrmv(object a, object x, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t lower=0, fwi_integer_t trans=0, fwi_integer_t unitdiag=0, bint overwrite_x=False):
    """ztrmv(a, x[, offx, incx, lower, trans, unitdiag, overwrite_x]) -> x

    Parameters
    ----------
    a : fwc_dbl_complex_t_, 2D array, dimension(n, n), intent in
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    lower : fwi_integer, intent in
    trans : fwi_integer, intent in
    unitdiag : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_dbl_complex_t_, 1D array, dimension(*), intent inout

    """
    cdef char *fw_uplo_f = [0, 0], *fw_trans_f = [0, 0], *fw_diag_f = [0, 0]
    cdef fwi_integer_t n
    cdef np.ndarray a_, x_
    cdef np.npy_intp a_shape[2], x_shape[1]
    uplo_f = "L" if lower else "U"
    trans_f = ("C" if (trans == 2) else "T") if trans else "N"
    diag_f = "U" if unitdiag else "N"
    a_ = fw_asfortranarray(a, fwc_dbl_complex_t_enum, 2, a_shape, False, False)
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, not overwrite_x, False)
    n = a_shape[0]
    if not (a_shape[0] == a_shape[1]):
        raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((lower == 0) or (lower == 1)):
        raise ValueError('Condition on arguments not satisfied: (lower == 0) or (lower == 1)')
    if not ((trans >= 0) and (trans <= 2)):
        raise ValueError('Condition on arguments not satisfied: (trans >= 0) and (trans <= 2)')
    if not ((unitdiag == 0) or (unitdiag == 1)):
        raise ValueError('Condition on arguments not satisfied: (unitdiag == 0) or (unitdiag == 1)')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if not (x_shape[0] > (offx + ((n - 1) * abs(incx)))):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] > (offx + ((n - 1) * abs(incx)))')
    if n != a_shape[0]:
        raise ValueError("(n == a.shape[0]) not satisifed")
    if not (0 <= n <= a_shape[1]):
        raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
    fw_uplo_f[0] = fw_aschar(uplo_f)
    if fw_uplo_f[0] == 0:
        raise ValueError("len(uplo_f) != 1")
    fw_trans_f[0] = fw_aschar(trans_f)
    if fw_trans_f[0] == 0:
        raise ValueError("len(trans_f) != 1")
    fw_diag_f[0] = fw_aschar(diag_f)
    if fw_diag_f[0] == 0:
        raise ValueError("len(diag_f) != 1")
    fc.ztrmv(fw_uplo_f, fw_trans_f, fw_diag_f, &n, <fwc_dbl_complex_t*>np.PyArray_DATA(a_), &n, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, 1, 1, 1)
    return x_


def zdrot(object x, object y, fwr_dbl_t c, fwr_dbl_t s, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, fwi_integer_t offy=0, fwi_integer_t incy=1, bint overwrite_x=False, bint overwrite_y=False):
    """zdrot(x, y, c, s[, n, offx, incx, offy, incy, overwrite_x, overwrite_y]) -> (x, y)

    Parameters
    ----------
    x : fwc_dbl_complex, 1D array, dimension(*), intent inout
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout
    c : fwr_dbl, intent in
    s : fwr_dbl, intent in
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    offy : fwi_integer, intent in
    incy : fwi_integer, intent in
    overwrite_x : bint_, intent in
    overwrite_y : bint_, intent in

    Returns
    -------
    x : fwc_dbl_complex, 1D array, dimension(*), intent inout
    y : fwc_dbl_complex, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_, y_
    cdef np.npy_intp x_shape[1], y_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, not overwrite_x, False)
    y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((y_shape[0] - offy) > ((n_ - 1) * abs(incy))):
        raise ValueError('Condition on arguments not satisfied: (y.shape[0] - offy) > ((n - 1) * abs(incy))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    if not ((offy >= 0) and (offy < y_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offy >= 0) and (offy < y.shape[0])')
    if not ((incy > 0) or (incy < 0)):
        raise ValueError('Condition on arguments not satisfied: (incy > 0) or (incy < 0)')
    fc.zdrot(&n_, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx, <fwc_dbl_complex_t*>np.PyArray_DATA(y_) + offy, &incy, &c, &s)
    return (x_, y_,)


def zdscal(fwr_dbl_t a, object x, object n=None, fwi_integer_t offx=0, fwi_integer_t incx=1, bint overwrite_x=False):
    """zdscal(a, x[, n, offx, incx, overwrite_x]) -> x

    Parameters
    ----------
    a : fwr_dbl, intent in
    x : fwc_dbl_complex, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    offx : fwi_integer, intent in
    incx : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_dbl_complex, 1D array, dimension(*), intent inout

    """
    cdef fwi_integer_t n_
    cdef np.ndarray x_
    cdef np.npy_intp x_shape[1]
    x_ = fw_asfortranarray(x, fwc_dbl_complex_t_enum, 1, x_shape, not overwrite_x, False)
    n_ = n if (n is not None) else (x_shape[0] - offx) // abs(incx)
    if not ((x_shape[0] - offx) > ((n_ - 1) * abs(incx))):
        raise ValueError('Condition on arguments not satisfied: (x.shape[0] - offx) > ((n - 1) * abs(incx))')
    if not ((offx >= 0) and (offx < x_shape[0])):
        raise ValueError('Condition on arguments not satisfied: (offx >= 0) and (offx < x.shape[0])')
    if not ((incx > 0) or (incx < 0)):
        raise ValueError('Condition on arguments not satisfied: (incx > 0) or (incx < 0)')
    fc.zdscal(&n_, &a, <fwc_dbl_complex_t*>np.PyArray_DATA(x_) + offx, &incx)
    return x_



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

cdef char fw_aschar(object s):
    cdef char* buf
    try:
        return <char>s # int
    except TypeError:
        pass
    try:
        buf = <char*>s # bytes
    except TypeError:
        s = s.encode('ASCII')
        buf = <char*>s # unicode
    if buf[0] == 0:
        return 0
    elif buf[1] != 0:
        return 0
    else:
        return buf[0]

# Fwrap configuration:
# Fwrap: version 0.2.0dev_00843a8
# Fwrap: self-sha1 5a82c8c05f21f5079bd7084630d87d82ee91f36f
# Fwrap: pyf-sha1 097048e6c573d42b1b907c08c3cbbf78509b1b79
# Fwrap: wraps $REFERENCE_BLAS/*.f
# Fwrap:     sha1 7b2b93ccd4fe2190e45d3e3a21c5156f0fffcb80
# Fwrap: wraps src/fblaswrap.f
# Fwrap:     sha1 0
# Fwrap: exclude cgbmv
# Fwrap: exclude chbmv
# Fwrap: exclude chemm
# Fwrap: exclude cher
# Fwrap: exclude cher2
# Fwrap: exclude cher2k
# Fwrap: exclude cherk
# Fwrap: exclude chpmv
# Fwrap: exclude chpr
# Fwrap: exclude chpr2
# Fwrap: exclude csymm
# Fwrap: exclude csyr2k
# Fwrap: exclude csyrk
# Fwrap: exclude ctbmv
# Fwrap: exclude ctbsv
# Fwrap: exclude ctpmv
# Fwrap: exclude ctpsv
# Fwrap: exclude ctrmm
# Fwrap: exclude ctrsm
# Fwrap: exclude ctrsv
# Fwrap: exclude dcabs1
# Fwrap: exclude dgbmv
# Fwrap: exclude dsbmv
# Fwrap: exclude dsdot
# Fwrap: exclude dspmv
# Fwrap: exclude dspr
# Fwrap: exclude dspr2
# Fwrap: exclude dsymm
# Fwrap: exclude dsyr
# Fwrap: exclude dsyr2
# Fwrap: exclude dsyr2k
# Fwrap: exclude dsyrk
# Fwrap: exclude dtbmv
# Fwrap: exclude dtbsv
# Fwrap: exclude dtpmv
# Fwrap: exclude dtpsv
# Fwrap: exclude dtrmm
# Fwrap: exclude dtrsm
# Fwrap: exclude dtrsv
# Fwrap: exclude scabs1
# Fwrap: exclude sdsdot
# Fwrap: exclude sgbmv
# Fwrap: exclude ssbmv
# Fwrap: exclude sspmv
# Fwrap: exclude sspr
# Fwrap: exclude sspr2
# Fwrap: exclude ssymm
# Fwrap: exclude ssyr
# Fwrap: exclude ssyr2
# Fwrap: exclude ssyr2k
# Fwrap: exclude ssyrk
# Fwrap: exclude stbmv
# Fwrap: exclude stbsv
# Fwrap: exclude stpmv
# Fwrap: exclude stpsv
# Fwrap: exclude strmm
# Fwrap: exclude strsm
# Fwrap: exclude strsv
# Fwrap: exclude xerbla
# Fwrap: exclude zgbmv
# Fwrap: exclude zhbmv
# Fwrap: exclude zhemm
# Fwrap: exclude zher
# Fwrap: exclude zher2
# Fwrap: exclude zher2k
# Fwrap: exclude zherk
# Fwrap: exclude zhpmv
# Fwrap: exclude zhpr
# Fwrap: exclude zhpr2
# Fwrap: exclude zsymm
# Fwrap: exclude zsyr2k
# Fwrap: exclude zsyrk
# Fwrap: exclude ztbmv
# Fwrap: exclude ztbsv
# Fwrap: exclude ztpmv
# Fwrap: exclude ztpsv
# Fwrap: exclude ztrmm
# Fwrap: exclude ztrsm
# Fwrap: exclude ztrsv
# Fwrap: exclude cdotc
# Fwrap: exclude cdotu
# Fwrap: exclude zdotc
# Fwrap: exclude zdotu
# Fwrap: f77binding True
# Fwrap: detect-templates True
# Fwrap: template isamax,idamax,icamax,izamax
# Fwrap: template sdot,ddot
# Fwrap: template cdotc,cdotu,zdotc,zdotu
# Fwrap: emulate-f2py True
# Fwrap: no-cpdef True
# Fwrap: auxiliary fblas.pyx.in
# Fwrap: auxiliary fblas_fc.h
# Fwrap: auxiliary fblas_fc.pxd

