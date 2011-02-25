#cython: ccomplex=True
#cython: cdivision=True

"""The _fftpack module was generated with Fwrap v0.2.0dev_3b035b7.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
cfft, zfft(...)
cfftnd, zfftnd(...)
dct1, dct2, dct3, ddct1, ddct2, ddct3(...)
destroy_cfft_cache, destroy_cfftnd_cache, destroy_dct1_cache, destroy_dct2_cache, destroy_ddct1_cache, destroy_ddct2_cache, destroy_drfft_cache, destroy_rfft_cache, destroy_zfft_cache, destroy_zfftnd_cache(...)
rfft, drfft, crfft, zrfft(...)

Data Types
----------
fwc_complex_x16
fwc_complex_x8
fwi_integer
fwr_real_x4
fwr_real_x8

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
# Template for cfft, zfft
cpdef object cfft(object x, object n=None, fwi_integer_t direction=1, object normalize=None, bint overwrite_x=False):
    """cfft(x[, n, direction, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwc_complex_x8_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    direction : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_complex_x8_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t normalize_
    cdef fwi_integer_t howmany
    normalize_ = normalize if (normalize is not None) else direction < 0
    x_ = np.PyArray_FROMANY(x, fwc_complex_x8_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not (n_ > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.cfft(<fwc_complex_x8_t*>np.PyArray_DATA(x_), n_, direction, howmany, normalize_)
    return x_
cpdef object zfft(object x, object n=None, fwi_integer_t direction=1, object normalize=None, bint overwrite_x=False):
    """zfft(x[, n, direction, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwc_complex_x16_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    direction : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_complex_x16_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t normalize_
    cdef fwi_integer_t howmany
    normalize_ = normalize if (normalize is not None) else direction < 0
    x_ = np.PyArray_FROMANY(x, fwc_complex_x16_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not (n_ > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.zfft(<fwc_complex_x16_t*>np.PyArray_DATA(x_), n_, direction, howmany, normalize_)
    return x_


# Template for rfft, drfft, crfft, zrfft
cpdef object rfft(object x, object n=None, fwi_integer_t direction=1, object normalize=None, bint overwrite_x=False):
    """rfft(x[, n, direction, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x4_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    direction : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x4_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t normalize_
    cdef fwi_integer_t howmany
    normalize_ = normalize if (normalize is not None) else direction < 0
    # First, convert x to an array with arbitrary number of dimensions
    x_ = np.PyArray_FROMANY(x, fwr_real_x4_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.rfft(<fwr_real_x4_t*>np.PyArray_DATA(x_), n_, direction, howmany, normalize_)
    return x_
cpdef object drfft(object x, object n=None, fwi_integer_t direction=1, object normalize=None, bint overwrite_x=False):
    """drfft(x[, n, direction, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x8_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    direction : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x8_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t normalize_
    cdef fwi_integer_t howmany
    normalize_ = normalize if (normalize is not None) else direction < 0
    # First, convert x to an array with arbitrary number of dimensions
    x_ = np.PyArray_FROMANY(x, fwr_real_x8_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.drfft(<fwr_real_x8_t*>np.PyArray_DATA(x_), n_, direction, howmany, normalize_)
    return x_
cpdef object crfft(object x, object n=None, fwi_integer_t direction=1, object normalize=None, bint overwrite_x=False):
    """crfft(x[, n, direction, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwc_complex_x8_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    direction : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_complex_x8_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t normalize_
    cdef fwi_integer_t howmany
    normalize_ = normalize if (normalize is not None) else direction < 0
    # First, convert x to an array with arbitrary number of dimensions
    x_ = np.PyArray_FROMANY(x, fwc_complex_x8_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.crfft(<fwc_complex_x8_t*>np.PyArray_DATA(x_), n_, direction, howmany, normalize_)
    return x_
cpdef object zrfft(object x, object n=None, fwi_integer_t direction=1, object normalize=None, bint overwrite_x=False):
    """zrfft(x[, n, direction, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwc_complex_x16_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    direction : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_complex_x16_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t normalize_
    cdef fwi_integer_t howmany
    normalize_ = normalize if (normalize is not None) else direction < 0
    # First, convert x to an array with arbitrary number of dimensions
    x_ = np.PyArray_FROMANY(x, fwc_complex_x16_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.zrfft(<fwc_complex_x16_t*>np.PyArray_DATA(x_), n_, direction, howmany, normalize_)
    return x_


# Template for cfftnd, zfftnd
cpdef object cfftnd(object x, object s=None, fwi_integer_t direction=1, object normalize=None, bint overwrite_x=False):
    """cfftnd(x[, s, direction, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwc_complex_x8_t_, 1D array, dimension(*), intent inout
    s : fwi_integer, 1D array, dimension(r), intent in
    direction : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_complex_x8_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray[int, ndim=1, mode='c'] s_
    cdef fwi_integer_t normalize_
    cdef fwi_integer_t r
    cdef fwi_integer_t howmany
    cdef fwi_integer_t j
    cdef Py_ssize_t i, sz, xsz
    normalize_ = normalize if (normalize is not None) else direction < 0
    j = 0
    x_ = np.PyArray_FROMANY(x, fwc_complex_x8_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    # Next, let the default of s be the tuple x_.shape,
    # and get the array of s
    if s is None:
        s = (<object>x_).shape
    s_ = np.PyArray_FROMANY(s, fwi_integer_t_enum, 1, 1,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST)
    r = np.PyArray_NDIM(x_)
    if not (r == np.PyArray_DIMS(s_)[0]):
        raise ValueError('Condition on arguments not satisfied: x.ndim == s.shape[0]')
    xsz = np.PyArray_SIZE(x_)
    sz = 1
    for i in range(r):
        sz *= s_[i]
    howmany = xsz // sz
    if sz * howmany != xsz:
        raise ValueError("inconsistency in x.shape and s argument")
    fc.cfftnd(<fwc_complex_x8_t*>np.PyArray_DATA(x_), r, <fwi_integer_t*>np.PyArray_DATA(s_), direction, howmany, normalize_)
    # Return the non-flattened view of the buffer
    return x_
cpdef object zfftnd(object x, object s=None, fwi_integer_t direction=1, object normalize=None, bint overwrite_x=False):
    """zfftnd(x[, s, direction, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwc_complex_x16_t_, 1D array, dimension(*), intent inout
    s : fwi_integer, 1D array, dimension(r), intent in
    direction : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwc_complex_x16_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray[int, ndim=1, mode='c'] s_
    cdef fwi_integer_t normalize_
    cdef fwi_integer_t r
    cdef fwi_integer_t howmany
    cdef fwi_integer_t j
    cdef Py_ssize_t i, sz, xsz
    normalize_ = normalize if (normalize is not None) else direction < 0
    j = 0
    x_ = np.PyArray_FROMANY(x, fwc_complex_x16_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    # Next, let the default of s be the tuple x_.shape,
    # and get the array of s
    if s is None:
        s = (<object>x_).shape
    s_ = np.PyArray_FROMANY(s, fwi_integer_t_enum, 1, 1,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST)
    r = np.PyArray_NDIM(x_)
    if not (r == np.PyArray_DIMS(s_)[0]):
        raise ValueError('Condition on arguments not satisfied: x.ndim == s.shape[0]')
    xsz = np.PyArray_SIZE(x_)
    sz = 1
    for i in range(r):
        sz *= s_[i]
    howmany = xsz // sz
    if sz * howmany != xsz:
        raise ValueError("inconsistency in x.shape and s argument")
    fc.zfftnd(<fwc_complex_x16_t*>np.PyArray_DATA(x_), r, <fwi_integer_t*>np.PyArray_DATA(s_), direction, howmany, normalize_)
    # Return the non-flattened view of the buffer
    return x_


# Template for destroy_cfft_cache, destroy_cfftnd_cache, destroy_dct1_cache, destroy_dct2_cache, destroy_ddct1_cache, destroy_ddct2_cache, destroy_drfft_cache, destroy_rfft_cache, destroy_zfft_cache, destroy_zfftnd_cache
cpdef object destroy_cfft_cache():
    """destroy_cfft_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_cfft_cache()
cpdef object destroy_cfftnd_cache():
    """destroy_cfftnd_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_cfftnd_cache()
cpdef object destroy_dct1_cache():
    """destroy_dct1_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_dct1_cache()
cpdef object destroy_dct2_cache():
    """destroy_dct2_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_dct2_cache()
cpdef object destroy_ddct1_cache():
    """destroy_ddct1_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_ddct1_cache()
cpdef object destroy_ddct2_cache():
    """destroy_ddct2_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_ddct2_cache()
cpdef object destroy_drfft_cache():
    """destroy_drfft_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_drfft_cache()
cpdef object destroy_rfft_cache():
    """destroy_rfft_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_rfft_cache()
cpdef object destroy_zfft_cache():
    """destroy_zfft_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_zfft_cache()
cpdef object destroy_zfftnd_cache():
    """destroy_zfftnd_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_zfftnd_cache()


# Template for dct1, dct2, dct3, ddct1, ddct2, ddct3
cpdef object dct1(object x, object n=None, fwi_integer_t normalize=0, bint overwrite_x=False):
    """dct1(x[, n, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x4_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x4_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t howmany
    x_ = np.PyArray_FROMANY(x, fwr_real_x4_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.dct1(<fwr_real_x4_t*>np.PyArray_DATA(x_), n_, howmany, normalize)
    return x_
cpdef object dct2(object x, object n=None, fwi_integer_t normalize=0, bint overwrite_x=False):
    """dct2(x[, n, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x4_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x4_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t howmany
    x_ = np.PyArray_FROMANY(x, fwr_real_x4_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.dct2(<fwr_real_x4_t*>np.PyArray_DATA(x_), n_, howmany, normalize)
    return x_
cpdef object dct3(object x, object n=None, fwi_integer_t normalize=0, bint overwrite_x=False):
    """dct3(x[, n, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x4_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x4_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t howmany
    x_ = np.PyArray_FROMANY(x, fwr_real_x4_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.dct3(<fwr_real_x4_t*>np.PyArray_DATA(x_), n_, howmany, normalize)
    return x_
cpdef object ddct1(object x, object n=None, fwi_integer_t normalize=0, bint overwrite_x=False):
    """ddct1(x[, n, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x8_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x8_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t howmany
    x_ = np.PyArray_FROMANY(x, fwr_real_x8_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.ddct1(<fwr_real_x8_t*>np.PyArray_DATA(x_), n_, howmany, normalize)
    return x_
cpdef object ddct2(object x, object n=None, fwi_integer_t normalize=0, bint overwrite_x=False):
    """ddct2(x[, n, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x8_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x8_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t howmany
    x_ = np.PyArray_FROMANY(x, fwr_real_x8_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.ddct2(<fwr_real_x8_t*>np.PyArray_DATA(x_), n_, howmany, normalize)
    return x_
cpdef object ddct3(object x, object n=None, fwi_integer_t normalize=0, bint overwrite_x=False):
    """ddct3(x[, n, normalize, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x8_t_, 1D array, dimension(*), intent inout
    n : fwi_integer, intent in
    normalize : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x8_t_, 1D array, dimension(*), intent inout

    """
    cdef np.ndarray x_
    cdef fwi_integer_t n_
    cdef fwi_integer_t howmany
    x_ = np.PyArray_FROMANY(x, fwr_real_x8_t_enum, 0, 0,
                            np.NPY_C_CONTIGUOUS | np.NPY_FORCECAST |
                            (0 if overwrite_x else np.NPY_ENSURECOPY))
    n_ = n if (n is not None) else np.PyArray_SIZE(x_)
    howmany = np.PyArray_SIZE(x_) // n_
    if not ((n_ > 0) and (n_ <= np.PyArray_SIZE(x_))):
        raise ValueError('Condition on arguments not satisfied: (n > 0) and (n <= x.size)')
    if not ((n_ * howmany) == np.PyArray_SIZE(x_)):
        raise ValueError('Condition on arguments not satisfied: (n * howmany) == x.size')
    fc.ddct3(<fwr_real_x8_t*>np.PyArray_DATA(x_), n_, howmany, normalize)
    return x_


# Fwrap configuration:
# Fwrap: version 0.2.0dev_3b035b7
# Fwrap: self-sha1 12ef15055d416bfe089eeac9ac0743d5b5ed7f52
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps fftpack.pyf
# Fwrap:     sha1 3bf3ae94045bfe4b686846ebe39efa0998d5cd9d
# Fwrap: f77binding True
# Fwrap: detect-templates True
# Fwrap: template rfft,drfft,crfft,zrfft
# Fwrap: template-pattern destroy.*cache
# Fwrap: template-pattern .*dct.*
# Fwrap: emulate-f2py True
# Fwrap: auxiliary _fftpack.pxd
# Fwrap: auxiliary _fftpack.pyx.in
# Fwrap: auxiliary _fftpack_fc.h
# Fwrap: auxiliary _fftpack_fc.pxd

