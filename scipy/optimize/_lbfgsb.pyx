#cython: ccomplex=True

"""The _lbfgsb module was generated with Fwrap v0.2.0dev_2cc1de8.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
setulb(...)

Data Types
----------
fw_character_x60
fwi_integer
fwl_logical
fwr_dbl

"""
np.import_array()
include 'fwrap_ktp.pxi'

import numpy as np
_S60_dtype = np.dtype('|S60')

cpdef object setulb(fwi_integer_t m, object x, object l, object u, object nbd, fwr_dbl_t f, object g, fwr_dbl_t factr, fwr_dbl_t pgtol, object wa, object iwa, np.ndarray task, fwi_integer_t iprint, np.ndarray csave, object lsave, object isave, object dsave, object n=None, bint overwrite_x=True, bint overwrite_f=True, bint overwrite_g=True, bint overwrite_wa=True, bint overwrite_iwa=True, bint overwrite_task=True, bint overwrite_csave=True, bint overwrite_lsave=True, bint overwrite_isave=True, bint overwrite_dsave=True):
    """setulb(m, x, l, u, nbd, f, g, factr, pgtol, wa, iwa, task, iprint, csave, lsave, isave, dsave[, n, overwrite_x, overwrite_f, overwrite_g, overwrite_wa, overwrite_iwa, overwrite_task, overwrite_csave, overwrite_lsave, overwrite_isave, overwrite_dsave]) -> (x, f, g, wa, iwa, fw_task, fw_csave, lsave, isave, dsave)

    Parameters
    ----------
    m : fwi_integer, intent in
    x : fwr_dbl, 1D array, dimension(n), intent inout
    l : fwr_dbl, 1D array, dimension(n), intent in
    u : fwr_dbl, 1D array, dimension(n), intent in
    nbd : fwi_integer, 1D array, dimension(n), intent in
    f : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    factr : fwr_dbl, intent in
    pgtol : fwr_dbl, intent in
    wa : fwr_dbl, 1D array, dimension(2*m*n+4*n+12*m*m+12*m), intent inout
    iwa : fwi_integer, 1D array, dimension(3 * n), intent inout
    task : np.ndarray, len 60, intent inout
    iprint : fwi_integer, intent in
    csave : np.ndarray, len 60, intent inout
    lsave : fwl_logical, 1D array, dimension(4), intent inout
    isave : fwi_integer, 1D array, dimension(44), intent inout
    dsave : fwr_dbl, 1D array, dimension(29), intent inout
    n : fwi_integer, intent in
    overwrite_x : bint_, intent in
    overwrite_f : bint_, intent in
    overwrite_g : bint_, intent in
    overwrite_wa : bint_, intent in
    overwrite_iwa : bint_, intent in
    overwrite_task : bint_, intent in
    overwrite_csave : bint_, intent in
    overwrite_lsave : bint_, intent in
    overwrite_isave : bint_, intent in
    overwrite_dsave : bint_, intent in

    Returns
    -------
    x : fwr_dbl, 1D array, dimension(n), intent inout
    f : fwr_dbl, intent inout
    g : fwr_dbl, 1D array, dimension(n), intent inout
    wa : fwr_dbl, 1D array, dimension(2*m*n+4*n+12*m*m+12*m), intent inout
    iwa : fwi_integer, 1D array, dimension(3 * n), intent inout
    task : np.ndarray, len 60, intent inout
    csave : np.ndarray, len 60, intent inout
    lsave : fwl_logical, 1D array, dimension(4), intent inout
    isave : fwi_integer, 1D array, dimension(44), intent inout
    dsave : fwr_dbl, 1D array, dimension(29), intent inout

    """
    cdef np.ndarray x_
    cdef np.ndarray l_
    cdef np.ndarray u_
    cdef np.ndarray nbd_
    cdef np.ndarray g_
    cdef np.ndarray wa_
    cdef np.ndarray iwa_
    cdef np.ndarray lsave_
    cdef np.ndarray isave_
    cdef np.ndarray dsave_
    cdef fwi_integer_t n_
    x_, x = fw_asfortranarray(x, fwr_dbl_t_enum, 1, not overwrite_x)
    n_ = n if (n is not None) else np.PyArray_DIMS(x_)[0]
    if not (np.PyArray_DIMS(x_)[0] >= n_):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] >= n')
    if not (0 <= n_ <= np.PyArray_DIMS(x_)[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    l_, l = fw_asfortranarray(l, fwr_dbl_t_enum, 1, False)
    if n_ != np.PyArray_DIMS(l_)[0]:
        raise ValueError("(n == l.shape[0]) not satisifed")
    u_, u = fw_asfortranarray(u, fwr_dbl_t_enum, 1, False)
    if n_ != np.PyArray_DIMS(u_)[0]:
        raise ValueError("(n == u.shape[0]) not satisifed")
    nbd_, nbd = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, False)
    if n_ != np.PyArray_DIMS(nbd_)[0]:
        raise ValueError("(n == nbd.shape[0]) not satisifed")
    g_, g = fw_asfortranarray(g, fwr_dbl_t_enum, 1, not overwrite_g)
    if n_ != np.PyArray_DIMS(g_)[0]:
        raise ValueError("(n == g.shape[0]) not satisifed")
    wa_, wa = fw_asfortranarray(wa, fwr_dbl_t_enum, 1, not overwrite_wa)
    if (2 * m * n_) + (4 * n_) + (12 * m * m) + (12 * m) != np.PyArray_DIMS(wa_)[0]:
        raise ValueError("((2 * m * n) + (4 * n) + (12 * m * m) + (12 * m) == wa.shape[0]) not satisifed")
    iwa_, iwa = fw_asfortranarray(iwa, fwi_integer_t_enum, 1, not overwrite_iwa)
    if 3 * n_ != np.PyArray_DIMS(iwa_)[0]:
        raise ValueError("(3 * n == iwa.shape[0]) not satisifed")
    lsave_, lsave = fw_asfortranarray(lsave, fwl_logical_t_enum, 1, not overwrite_lsave)
    if not (0 <= 4 <= np.PyArray_DIMS(lsave_)[0]):
        raise ValueError("(0 <= 4 <= lsave.shape[0]) not satisifed")
    isave_, isave = fw_asfortranarray(isave, fwi_integer_t_enum, 1, not overwrite_isave)
    if not (0 <= 44 <= np.PyArray_DIMS(isave_)[0]):
        raise ValueError("(0 <= 44 <= isave.shape[0]) not satisifed")
    dsave_, dsave = fw_asfortranarray(dsave, fwr_dbl_t_enum, 1, not overwrite_dsave)
    if not (0 <= 29 <= np.PyArray_DIMS(dsave_)[0]):
        raise ValueError("(0 <= 29 <= dsave.shape[0]) not satisifed")
    if task.dtype != _S60_dtype or np.PyArray_NDIM(task) != 1 or np.PyArray_DIMS(task)[0] != 1:
        raise ValueError("task.dtype != np.dtype('|S60') or task.shape != (1,)")
    if csave.dtype != _S60_dtype or np.PyArray_NDIM(csave) != 1 or np.PyArray_DIMS(csave)[0] != 1:
        raise ValueError("csave.dtype != np.dtype('|S60') or csave.shape != (1,)")
    fw_space_pad(<char*>np.PyArray_DATA(task), 60)
    fw_space_pad(<char*>np.PyArray_DATA(csave), 60)
    fc.setulb(&n_, &m, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), &f, <fwr_dbl_t*>np.PyArray_DATA(g_), &factr, &pgtol, <fwr_dbl_t*>np.PyArray_DATA(wa_), <fwi_integer_t*>np.PyArray_DATA(iwa_), <char*>np.PyArray_DATA(task), &iprint, <char*>np.PyArray_DATA(csave), <fwl_logical_t*>np.PyArray_DATA(lsave_), <fwi_integer_t*>np.PyArray_DATA(isave_), <fwr_dbl_t*>np.PyArray_DATA(dsave_), 60, 60)
    return (x, f, g, wa, iwa, task, csave, lsave, isave, dsave,)


cdef void fw_space_pad(char * s, size_t len):
    cdef size_t i
    # Fortran strings are space-padded, we cannot have '\0' in them
    for i in range(len):
        if s[i] == 0:
            s[i] = ' '

cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy,
                              int alignment=1):
    cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST
    cdef np.npy_intp out_shape[np.NPY_MAXDIMS]
    cdef np.PyArray_Dims out_dims
    cdef np.ndarray result
    cdef np.npy_intp * in_shape
    cdef int in_ndim
    cdef int i
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
    if in_ndim == ndim:
        return result, result
    elif in_ndim > ndim:
        raise ValueError("Dimension of array must be <= %d" % ndim)
    else:
        # Make view where shape is padded with ones on right side
        in_shape = np.PyArray_DIMS(result)
        for i in range(in_ndim):
            out_shape[i] = in_shape[i]
        for i in range(in_ndim, ndim):
            out_shape[i] = 1
        out_dims.ptr = out_shape
        out_dims.len = ndim
        return np.PyArray_Newshape(result, &out_dims, np.NPY_FORTRANORDER), result

# Fwrap configuration:
# Fwrap: version 0.2.0dev_2cc1de8
# Fwrap: self-sha1 60b5669bc8cfd8c30abd7ab9c40f461ea82a0425
# Fwrap: pyf-sha1 2bccf87f0473b722102685f2fe4399c327eba484
# Fwrap: wraps lbfgsb/routines.f
# Fwrap:     sha1 2ddd087c3cfe43adc24d55a6a4a0e4727306cd20
# Fwrap: exclude active
# Fwrap: exclude bmv
# Fwrap: exclude cauchy
# Fwrap: exclude cmprlb
# Fwrap: exclude dcsrch
# Fwrap: exclude dcstep
# Fwrap: exclude dpmeps
# Fwrap: exclude dpofa
# Fwrap: exclude dtrsl
# Fwrap: exclude errclb
# Fwrap: exclude formk
# Fwrap: exclude formt
# Fwrap: exclude freev
# Fwrap: exclude hpsolb
# Fwrap: exclude lnsrlb
# Fwrap: exclude mainlb
# Fwrap: exclude matupd
# Fwrap: exclude prn1lb
# Fwrap: exclude prn2lb
# Fwrap: exclude prn3lb
# Fwrap: exclude projgr
# Fwrap: exclude subsm
# Fwrap: exclude timer
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary _lbfgsb.pxd
# Fwrap: auxiliary _lbfgsb_fc.h
# Fwrap: auxiliary _lbfgsb_fc.pxd

