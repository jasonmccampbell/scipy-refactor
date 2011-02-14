#cython: ccomplex=True

"""The minpack2 module was generated with Fwrap v0.2.0dev_e3d779b.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
dcsrch(...)
dcstep(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport minpack2_fc as fc

np.import_array()
__all__ = ['dcsrch', 'dcstep']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
def dcsrch(fwr_dbl_t stp, fwr_dbl_t f, fwr_dbl_t g, fwr_dbl_t ftol, fwr_dbl_t gtol, fwr_dbl_t xtol, bytes task, fwr_dbl_t stpmin, fwr_dbl_t stpmax, object isave, object dsave, bint overwrite_isave=True, bint overwrite_dsave=True):
    """dcsrch(stp, f, g, ftol, gtol, xtol, task, stpmin, stpmax, isave, dsave[, overwrite_isave, overwrite_dsave]) -> (stp, f, g, task, isave, dsave)

    Parameters
    ----------
    stp : fwr_dbl, intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, intent inout
    ftol : fwr_dbl, intent in
    gtol : fwr_dbl, intent in
    xtol : fwr_dbl, intent in
    task : bytes, len 60, intent inout
    stpmin : fwr_dbl, intent in
    stpmax : fwr_dbl, intent in
    isave : fwi_integer, 1D array, dimension(2), intent inout
    dsave : fwr_dbl, 1D array, dimension(13), intent inout
    overwrite_isave : bint_, intent in
    overwrite_dsave : bint_, intent in

    Returns
    -------
    stp : fwr_dbl, intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, intent inout
    task : bytes, len 60, intent inout

    """
    cdef fw_shape_t fw_task_len
    cdef char *fw_task_buf
    cdef np.ndarray isave_, dsave_
    cdef bytes fw_task
    cdef np.npy_intp isave_shape[1], dsave_shape[1]
    isave_ = fw_asfortranarray(isave, fwi_integer_t_enum, 1, isave_shape, not overwrite_isave, False)
    if not (0 <= 2 <= isave_shape[0]):
        raise ValueError("(0 <= 2 <= isave.shape[0]) not satisifed")
    dsave_ = fw_asfortranarray(dsave, fwr_dbl_t_enum, 1, dsave_shape, not overwrite_dsave, False)
    if not (0 <= 13 <= dsave_shape[0]):
        raise ValueError("(0 <= 13 <= dsave.shape[0]) not satisifed")
    fw_task_len = 60
    fw_task = PyBytes_FromStringAndSize(NULL, fw_task_len)
    fw_task_buf = <char*>fw_task
    memcpy(fw_task_buf, <char*>task, fw_task_len+1)
    fc.dcsrch(&stp, &f, &g, &ftol, &gtol, &xtol, fw_task_buf, &stpmin, &stpmax, <fwi_integer_t*>np.PyArray_DATA(isave_), <fwr_dbl_t*>np.PyArray_DATA(dsave_), fw_task_len)
    return (stp, f, g, fw_task,)


cpdef object dcstep(fwr_dbl_t stx, fwr_dbl_t fx, fwr_dbl_t dx, fwr_dbl_t sty, fwr_dbl_t fy, fwr_dbl_t dy, fwr_dbl_t stp, fwr_dbl_t fp, fwr_dbl_t dp, bint brackt, fwr_dbl_t stpmin, fwr_dbl_t stpmax):
    """dcstep(stx, fx, dx, sty, fy, dy, stp, fp, dp, brackt, stpmin, stpmax) -> (stx, fx, dx, sty, fy, dy, stp, brackt)

    Parameters
    ----------
    stx : fwr_dbl, intent inout
    fx : fwr_dbl, intent inout
    dx : fwr_dbl, intent inout
    sty : fwr_dbl, intent inout
    fy : fwr_dbl, intent inout
    dy : fwr_dbl, intent inout
    stp : fwr_dbl, intent inout
    fp : fwr_dbl, intent in
    dp : fwr_dbl, intent in
    brackt : fwl_logical, intent inout
    stpmin : fwr_dbl, intent in
    stpmax : fwr_dbl, intent in

    Returns
    -------
    stx : fwr_dbl, intent inout
    fx : fwr_dbl, intent inout
    dx : fwr_dbl, intent inout
    sty : fwr_dbl, intent inout
    fy : fwr_dbl, intent inout
    dy : fwr_dbl, intent inout
    stp : fwr_dbl, intent inout
    brackt : fwl_logical, intent inout

    """
    cdef fwl_logical_t brackt_
    brackt_ = 1 if brackt else 0
    fc.dcstep(&stx, &fx, &dx, &sty, &fy, &dy, &stp, &fp, &dp, &brackt_, &stpmin, &stpmax)
    return (stx, fx, dx, sty, fy, dy, stp, brackt_,)



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
# Fwrap: version 0.2.0dev_e3d779b
# Fwrap: self-sha1 1e721086b58a76d43f19ca8af2092a510e8aaa5f
# Fwrap: pyf-sha1 5a97f165170a6e453f22b757e49662df8da55e90
# Fwrap: wraps minpack2/dcsrch.f
# Fwrap:     sha1 747980a88ef526110d3f67b89c3936d06f37bd07
# Fwrap: wraps minpack2/dcstep.f
# Fwrap:     sha1 07445e9caa97881b90508305de533f3080a00c24
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: no-cpdef True
# Fwrap: auxiliary minpack2_fc.h
# Fwrap: auxiliary minpack2_fc.pxd

