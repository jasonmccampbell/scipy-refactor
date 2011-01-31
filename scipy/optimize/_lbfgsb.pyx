#cython: ccomplex=True

"""The _lbfgsb module was generated with Fwrap v0.2.0dev_da05ccf.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
setulb(...)

"""
np.import_array()
__all__ = ['setulb']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef object setulb(fwi_integer_t m, object x, object l, object u, object nbd, fwr_dbl_t f, object g, fwr_dbl_t factr, fwr_dbl_t pgtol, object wa, object iwa, bytes task, fwi_integer_t iprint, bytes csave, object lsave, object isave, object dsave, object n=None, bint overwrite_x=True, bint overwrite_f=True, bint overwrite_g=True, bint overwrite_wa=True, bint overwrite_iwa=True, bint overwrite_task=True, bint overwrite_csave=True, bint overwrite_lsave=True, bint overwrite_isave=True, bint overwrite_dsave=True):
    """setulb(m, x, l, u, nbd, f, g, factr, pgtol, wa, iwa, task, iprint, csave, lsave, isave, dsave[, n, overwrite_x, overwrite_f, overwrite_g, overwrite_wa, overwrite_iwa, overwrite_task, overwrite_csave, overwrite_lsave, overwrite_isave, overwrite_dsave]) -> (x, f, g, wa, iwa, task, csave, lsave, isave, dsave)

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
    task : bytes, len 60, intent inout
    iprint : fwi_integer, intent in
    csave : bytes, len 60, intent inout
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
    task : bytes, len 60, intent inout
    csave : bytes, len 60, intent inout
    lsave : fwl_logical, 1D array, dimension(4), intent inout
    isave : fwi_integer, 1D array, dimension(44), intent inout
    dsave : fwr_dbl, 1D array, dimension(29), intent inout

    """
    cdef fw_shape_t fw_task_len, fw_csave_len
    cdef fwi_integer_t n_
    cdef bytes fw_task, fw_csave
    cdef char *fw_task_buf, *fw_csave_buf
    cdef np.ndarray x_, l_, u_, nbd_, g_, wa_, iwa_, lsave_, isave_, dsave_
    cdef np.npy_intp x_shape[1], l_shape[1], u_shape[1], nbd_shape[1], g_shape[1], wa_shape[1], iwa_shape[1], lsave_shape[1], isave_shape[1], dsave_shape[1]
    x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, not overwrite_x, False)
    n_ = n if (n is not None) else x_shape[0]
    if not (x_shape[0] >= n_):
        raise ValueError('Condition on arguments not satisfied: x.shape[0] >= n')
    if not (0 <= n_ <= x_shape[0]):
        raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
    l_ = fw_asfortranarray(l, fwr_dbl_t_enum, 1, l_shape, False, False)
    if n_ != l_shape[0]:
        raise ValueError("(n == l.shape[0]) not satisifed")
    u_ = fw_asfortranarray(u, fwr_dbl_t_enum, 1, u_shape, False, False)
    if n_ != u_shape[0]:
        raise ValueError("(n == u.shape[0]) not satisifed")
    nbd_ = fw_asfortranarray(nbd, fwi_integer_t_enum, 1, nbd_shape, False, False)
    if n_ != nbd_shape[0]:
        raise ValueError("(n == nbd.shape[0]) not satisifed")
    g_ = fw_asfortranarray(g, fwr_dbl_t_enum, 1, g_shape, not overwrite_g, False)
    if n_ != g_shape[0]:
        raise ValueError("(n == g.shape[0]) not satisifed")
    wa_ = fw_asfortranarray(wa, fwr_dbl_t_enum, 1, wa_shape, not overwrite_wa, False)
    if not (0 <= (2 * m * n_) + (4 * n_) + (12 * m * m) + (12 * m) <= wa_shape[0]):
        raise ValueError("(0 <= (2 * m * n) + (4 * n) + (12 * m * m) + (12 * m) <= wa.shape[0]) not satisifed")
    iwa_ = fw_asfortranarray(iwa, fwi_integer_t_enum, 1, iwa_shape, not overwrite_iwa, False)
    if not (0 <= 3 * n_ <= iwa_shape[0]):
        raise ValueError("(0 <= 3 * n <= iwa.shape[0]) not satisifed")
    lsave_ = fw_asfortranarray(lsave, fwl_logical_t_enum, 1, lsave_shape, not overwrite_lsave, False)
    if not (0 <= 4 <= lsave_shape[0]):
        raise ValueError("(0 <= 4 <= lsave.shape[0]) not satisifed")
    isave_ = fw_asfortranarray(isave, fwi_integer_t_enum, 1, isave_shape, not overwrite_isave, False)
    if not (0 <= 44 <= isave_shape[0]):
        raise ValueError("(0 <= 44 <= isave.shape[0]) not satisifed")
    dsave_ = fw_asfortranarray(dsave, fwr_dbl_t_enum, 1, dsave_shape, not overwrite_dsave, False)
    if not (0 <= 29 <= dsave_shape[0]):
        raise ValueError("(0 <= 29 <= dsave.shape[0]) not satisifed")
    fw_task_len = 60
    fw_task = PyBytes_FromStringAndSize(NULL, fw_task_len)
    fw_task_buf = <char*>fw_task
    memcpy(fw_task_buf, <char*>task, fw_task_len+1)
    fw_csave_len = 60
    fw_csave = PyBytes_FromStringAndSize(NULL, fw_csave_len)
    fw_csave_buf = <char*>fw_csave
    memcpy(fw_csave_buf, <char*>csave, fw_csave_len+1)
    fc.setulb(&n_, &m, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwi_integer_t*>np.PyArray_DATA(nbd_), &f, <fwr_dbl_t*>np.PyArray_DATA(g_), &factr, &pgtol, <fwr_dbl_t*>np.PyArray_DATA(wa_), <fwi_integer_t*>np.PyArray_DATA(iwa_), fw_task_buf, &iprint, fw_csave_buf, <fwl_logical_t*>np.PyArray_DATA(lsave_), <fwi_integer_t*>np.PyArray_DATA(isave_), <fwr_dbl_t*>np.PyArray_DATA(dsave_), fw_task_len, fw_csave_len)
    return (x_, f, g_, wa_, iwa_, fw_task, fw_csave, lsave_, isave_, dsave_,)



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
# Fwrap: version 0.2.0dev_da05ccf
# Fwrap: self-sha1 60b5669bc8cfd8c30abd7ab9c40f461ea82a0425
# Fwrap: pyf-sha1 4f66ddad416cbe044bf98df89c06b77dfc30d520
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

