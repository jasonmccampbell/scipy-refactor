#cython: ccomplex=True

"""The convolve module was generated with Fwrap v0.2.0dev_e929453.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
convolve(...)
convolve_z(...)
destroy_convolve_cache(...)
init_convolution_kernel(...)
kernel_func(...)

Data Types
----------
fwi_integer
fwr_real_x8

"""
np.import_array()
include 'fwrap_ktp.pxi'

__all__ = ['init_convolution_kernel', 'destroy_convolve_cache',
           'convolve', 'convolve_z']

cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)

cdef extern from "setjmp.h":
    ctypedef struct jmp_buf:
        pass
    
    int setjmp(jmp_buf env)
    void longjmp(jmp_buf env, int val)


cdef class _LongJmpBuf(object):
    cdef jmp_buf buf

import threading
import sys
threadloc = threading.local()

cdef double call_kernel_func(int k) with gil:
    cdef double retval
    cdef _LongJmpBuf jmp
    
    call_obj, args, jmp = info = threadloc.kernel_func_info
    threadloc.kernel_func_info = None
    try:
        try:
            retval = call_obj(k, *args)
        except:
            threadloc.exc_info = sys.exc_info()
            longjmp(jmp.buf, 1)
    finally:
        threadloc.kernel_func_info = info
    return retval

cpdef api object init_convolution_kernel(fwi_integer_t n, object kernel_func, fwi_integer_t d=0, object zero_nyquist=None, object kernel_func_extra_args=(), object omega=None):
    """init_convolution_kernel(n, kernel_func[, d, zero_nyquist, omega]) -> omega

    Parameters
    ----------
    n : fwi_integer, intent in
    kernel_func : object, intent in
    d : fwi_integer, intent in
    zero_nyquist : fwi_integer, intent in
    omega : fwr_real_x8, 1D array, dimension(n), intent out

    Returns
    -------
    omega : fwr_real_x8, 1D array, dimension(n), intent out

    """
    cdef fwi_integer_t zero_nyquist_
    cdef np.ndarray omega_
    cdef _LongJmpBuf jmp
    zero_nyquist_ = zero_nyquist if (zero_nyquist is not None) else d % 2
    if not (n > 0):
        raise ValueError('Condition on arguments not satisfied: n > 0')
    omega_, omega = fw_explicitshapearray(omega, fwr_real_x8_t_enum, 1, [n], False)
    if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
        raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
    jmp = _LongJmpBuf()
    threadloc.kernel_func_info = (kernel_func, kernel_func_extra_args, jmp)
    try:
        if setjmp(jmp.buf) == 0:
            fc.init_convolution_kernel(n, <fwr_real_x8_t*>np.PyArray_DATA(omega_), d, &call_kernel_func, zero_nyquist_)
        else:
            t, val, tb = threadloc.exc_info
            threadloc.exc_info = None
            raise t, val, tb
    finally:
        threadloc.kernel_func_info = None
    return omega


cpdef api object destroy_convolve_cache():
    """destroy_convolve_cache()

    Parameters
    ----------
    None

    """
    fc.destroy_convolve_cache()


cpdef api object convolve(object x, object omega, fwi_integer_t swap_real_imag=0, bint overwrite_x=False):
    """convolve(x, omega[, swap_real_imag, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(n), intent inout
    omega : fwr_real_x8, 1D array, dimension(n), intent in
    swap_real_imag : fwi_integer, intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray omega_
    cdef fwi_integer_t n
    x_, x = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, not overwrite_x)
    n = np.PyArray_DIMS(x_)[0]
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    omega_, omega = fw_asfortranarray(omega, fwr_real_x8_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
        raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
    fc.convolve(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_), swap_real_imag)
    return x


cpdef api object convolve_z(object x, object omega_real, object omega_imag, bint overwrite_x=False):
    """convolve_z(x, omega_real, omega_imag[, overwrite_x]) -> x

    Parameters
    ----------
    x : fwr_real_x8, 1D array, dimension(n), intent inout
    omega_real : fwr_real_x8, 1D array, dimension(n), intent in
    omega_imag : fwr_real_x8, 1D array, dimension(n), intent in
    overwrite_x : bint_, intent in

    Returns
    -------
    x : fwr_real_x8, 1D array, dimension(n), intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray omega_real_
    cdef np.ndarray omega_imag_
    cdef fwi_integer_t n
    x_, x = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, not overwrite_x)
    n = np.PyArray_DIMS(x_)[0]
    if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    omega_real_, omega_real = fw_asfortranarray(omega_real, fwr_real_x8_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(omega_real_)[0]):
        raise ValueError("(0 <= n <= omega_real.shape[0]) not satisifed")
    omega_imag_, omega_imag = fw_asfortranarray(omega_imag, fwr_real_x8_t_enum, 1, False)
    if not (0 <= n <= np.PyArray_DIMS(omega_imag_)[0]):
        raise ValueError("(0 <= n <= omega_imag.shape[0]) not satisifed")
    fc.convolve_z(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_real_), <fwr_real_x8_t*>np.PyArray_DATA(omega_imag_))
    return x



cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy,
                              int alignment=1):
    cdef int flags = np.NPY_F_CONTIGUOUS
    if ndim <= 1:
        # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
        flags |= np.NPY_C_CONTIGUOUS
    if (not copy and alignment > 1 and np.PyArray_Check(value) and
        (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):
        # mis-aligned array
        copy = True    
    if copy:
        flags |= np.NPY_ENSURECOPY
    result = np.PyArray_FROMANY(value, typenum, ndim, ndim, flags)
    return result, result

cdef object fw_explicitshapearray(object value, int typenum, int ndim,
                                  np.intp_t *shape, bint copy, int alignment=1):
    if value is None:
        result = np.PyArray_ZEROS(ndim, shape, typenum, 1)
        return result, result 
    else:
        return fw_asfortranarray(value, typenum, ndim, copy, alignment)

# Fwrap configuration:
# Fwrap: version 0.2.0dev_e929453
# Fwrap: self-sha1 8517bb82d7022a6faf52079e5f96d59e22c2e497
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps convolve.pyf
# Fwrap:     sha1 0c98f88a515fb5369ab4b1cdd28a242b4db81039
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py False
# Fwrap: auxiliary convolve.pxd
# Fwrap: auxiliary convolve_fc.h
# Fwrap: auxiliary convolve_fc.pxd

