#cython: ccomplex=True

"""The _cobyla module was generated with Fwrap v0.2.0dev_bdc335e.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
minimize(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport _cobyla_fc as fc

np.import_array()
import sys

cdef extern from "setjmp.h":
    ctypedef struct jmp_buf:
        pass    
    int setjmp(jmp_buf env)
    void longjmp(jmp_buf env, int val)

cdef extern from "string.h":
    void *memcpy(void *dest, void *src, int n)

cdef class fw_CallbackInfo(object):
    # Callable object to call
    cdef object callback
    # Pass *extra_args to callback (can be None)
    cdef object extra_args
    # If an exception is raised by callback it is stored here
    cdef object exc
    # Some times, one may want to communicate objects directly that are
    # simply passed through in Fortran (in particular NumPy arrays)
    cdef object arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9
    # For use by longjmp
    cdef jmp_buf jmp
    def __cinit__(self, object callback, object extra_args):
        self.callback = callback
        self.extra_args = extra_args


__all__ = ['minimize']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)

cdef fw_CallbackInfo minimize_calcfc_cb_info
cdef int minimize_calcfc_cb_wrapper_core(fwi_integer_t * n, fwi_integer_t * m, fwr_dbl_t * x, fwr_dbl_t * f, fwr_dbl_t * con):
    global minimize_calcfc_cb_info;
    cdef fw_CallbackInfo info
    cdef np.ndarray x_, con_
    cdef np.npy_intp x_shape[1], con_shape[1]
    info = minimize_calcfc_cb_info
    try:
        x_shape[0] = n[0]
        x_ = np.PyArray_New(&np.PyArray_Type, 1, x_shape, fwr_dbl_t_enum, NULL, <char*>x, 0, np.NPY_FARRAY, NULL)
        con_shape[0] = m[0]
        con_ = np.PyArray_New(&np.PyArray_Type, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
        if info.extra_args is None:
            f[0] = info.callback(x_, con_)
        else:
            f[0] = info.callback(x_, con_, *info.extra_args)
        minimize_calcfc_cb_info = info
        return 0
    except:
        minimize_calcfc_cb_info = info
        info.exc = sys.exc_info()
        return -1

cdef void minimize_calcfc_cb_wrapper(fwi_integer_t * n, fwi_integer_t * m, fwr_dbl_t * x, fwr_dbl_t * f, fwr_dbl_t * con):
    if minimize_calcfc_cb_wrapper_core(n, m, x, f, con) != 0:
        longjmp(minimize_calcfc_cb_info.jmp, 1)


def minimize(object calcfc, fwi_integer_t m, object x, fwr_dbl_t rhobeg, fwr_dbl_t rhoend, fwi_integer_t iprint=1, fwi_integer_t maxfun=100):
    """minimize(calcfc, m, x, rhobeg, rhoend[, iprint, maxfun]) -> x

    Parameters
    ----------
    calcfc : object, intent in
    m : fwi_integer, intent in
    x : fwr_dbl, 1D array, dimension(n), intent inout
    rhobeg : fwr_dbl, intent in
    rhoend : fwr_dbl, intent in
    iprint : fwi_integer, intent in
    maxfun : fwi_integer, intent in

    Returns
    -------
    x : fwr_dbl, 1D array, dimension(n), intent inout

    """
    global minimize_calcfc_cb_info
    cdef fw_CallbackInfo fw_calcfc_cb
    cdef fwi_integer_t n
    cdef np.ndarray x_, w_, iact_
    cdef np.npy_intp x_shape[1], w_shape[1], iact_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, False)
    n = x_shape[0]
    w_shape[0] = (n * ((3 * n) + (2 * m) + 11)) + (4 * m) + 6
    w_ = fw_asfortranarray(None, fwr_dbl_t_enum, 1, w_shape, False, True)
    iact_shape[0] = m + 1
    iact_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, iact_shape, False, True)
    if not ((0 <= iprint) and (iprint <= 3)):
        raise ValueError('Condition on arguments not satisfied: (0 <= iprint) and (iprint <= 3)')
    if not (0 <= n <= x_shape[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    minimize_calcfc_cb_info = fw_calcfc_cb = fw_CallbackInfo(calcfc, None)
    try:
        if setjmp(minimize_calcfc_cb_info.jmp) == 0:
            fc.cobyla(&minimize_calcfc_cb_wrapper, &n, &m, <fwr_dbl_t*>np.PyArray_DATA(x_), &rhobeg, &rhoend, &iprint, &maxfun, <fwr_dbl_t*>np.PyArray_DATA(w_), <fwi_integer_t*>np.PyArray_DATA(iact_))
        else:
            fw_exctype, fw_excval, fw_exctb = minimize_calcfc_cb_info.exc
            minimize_calcfc_cb_info.exc = None
            raise fw_exctype, fw_excval, fw_exctb
    finally:
        minimize_calcfc_cb_info = None
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

# Fwrap configuration:
# Fwrap: version 0.2.0dev_bdc335e
# Fwrap: self-sha1 1330697db30acbe45221f71cf79cb614474c59e0
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps cobyla/cobyla.pyf
# Fwrap:     sha1 5f9b63618906306af3df673cb8d5dd71e8552907
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary _cobyla.pxd
# Fwrap: auxiliary _cobyla_fc.h
# Fwrap: auxiliary _cobyla_fc.pxd

