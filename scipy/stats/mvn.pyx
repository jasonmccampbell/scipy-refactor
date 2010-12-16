#cython: ccomplex=True

"""
The mvn module was generated with Fwrap v0.2.0dev_470490d.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
mvndst(...)
mvnun(...)

Data Types
----------
fw_character
fw_shape
fwi_integer
fwr_dbl

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef api object mvnun(object lower, object upper, object means, object covar, object maxpts=None, fwr_dbl_t abseps=##TODO (watch any dependencies that may be further down!) 1e-6, fwr_dbl_t releps=##TODO (watch any dependencies that may be further down!) 1e-6):
    """
    mvnun(lower, upper, means, covar, maxpts, abseps, releps) -> (value, inform)

    Parameters
    ----------
    lower : fwr_dbl, 1D array, dimension(d), intent in
    upper : fwr_dbl, 1D array, dimension(d), intent in
    means : fwr_dbl, 2D array, dimension(d, n), intent in
    covar : fwr_dbl, 2D array, dimension(d, d), intent in
    maxpts : fwi_integer, intent in
    abseps : fwr_dbl, intent in
    releps : fwr_dbl, intent in

    Returns
    -------
    value : fwr_dbl, intent out
    inform : fwi_integer, intent out

    """
    cdef np.ndarray lower_
    cdef fw_shape_t lower_shape_[1]
    cdef np.ndarray upper_
    cdef fw_shape_t upper_shape_[1]
    cdef np.ndarray means_
    cdef fw_shape_t means_shape_[2]
    cdef np.ndarray covar_
    cdef fw_shape_t covar_shape_[2]
    cdef fwi_integer_t maxpts_
    cdef fwi_integer_t d
    cdef fwi_integer_t n
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t value
    cdef fwi_integer_t inform
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    means_, means = fw_asfortranarray(means, fwr_dbl_t_enum, 2, False)
    fw_copyshape(means_shape_, np.PyArray_DIMS(means_), 2)
    d = np.PyArray_DIMS(means_)[0]
    maxpts_ = maxpts if (maxpts is not None) else d * 1000
    lower_, lower = fw_asfortranarray(lower, fwr_dbl_t_enum, 1, False)
    fw_copyshape(lower_shape_, np.PyArray_DIMS(lower_), 1)
    if not (0 <= d <= lower_shape_[0]):
        raise ValueError("(0 <= d <= lower.shape[0]) not satisifed")
    upper_, upper = fw_asfortranarray(upper, fwr_dbl_t_enum, 1, False)
    fw_copyshape(upper_shape_, np.PyArray_DIMS(upper_), 1)
    if not (0 <= d <= upper_shape_[0]):
        raise ValueError("(0 <= d <= upper.shape[0]) not satisifed")
    n = np.PyArray_DIMS(means_)[1]
    if d != means_shape_[0]:
        raise ValueError("(d == means.shape[0]) not satisifed")
    if not (0 <= n <= means_shape_[1]):
        raise ValueError("(0 <= n <= means.shape[1]) not satisifed")
    covar_, covar = fw_asfortranarray(covar, fwr_dbl_t_enum, 2, False)
    fw_copyshape(covar_shape_, np.PyArray_DIMS(covar_), 2)
    if d != covar_shape_[0]:
        raise ValueError("(d == covar.shape[0]) not satisifed")
    if not (0 <= d <= covar_shape_[1]):
        raise ValueError("(0 <= d <= covar.shape[1]) not satisifed")
    mvnun_c(&d, &n, lower_shape_, <fwr_dbl_t*>np.PyArray_DATA(lower_), upper_shape_, <fwr_dbl_t*>np.PyArray_DATA(upper_), means_shape_, <fwr_dbl_t*>np.PyArray_DATA(means_), covar_shape_, <fwr_dbl_t*>np.PyArray_DATA(covar_), &maxpts_, &abseps, &releps, &value, &inform, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mvnun' wrapper.")
    return (value, inform,)


cpdef api object mvndst(object lower, object upper, object infin, object correl, fwi_integer_t maxpts=2000, fwr_dbl_t abseps=##TODO (watch any dependencies that may be further down!) 1e-6, fwr_dbl_t releps=##TODO (watch any dependencies that may be further down!) 1e-6):
    """
    mvndst(lower, upper, infin, correl, maxpts, abseps, releps) -> (error, value, inform)

    Parameters
    ----------
    lower : fwr_dbl, 1D array, dimension(n), intent in
    upper : fwr_dbl, 1D array, dimension(n), intent in
    infin : fwi_integer, 1D array, dimension(n), intent in
    correl : fwr_dbl, 1D array, dimension(n*(n-1)/2), intent in
    maxpts : fwi_integer, intent in
    abseps : fwr_dbl, intent in
    releps : fwr_dbl, intent in

    Returns
    -------
    error : fwr_dbl, intent out
    value : fwr_dbl, intent out
    inform : fwi_integer, intent out

    """
    cdef np.ndarray lower_
    cdef fw_shape_t lower_shape_[1]
    cdef np.ndarray upper_
    cdef fw_shape_t upper_shape_[1]
    cdef np.ndarray infin_
    cdef fw_shape_t infin_shape_[1]
    cdef np.ndarray correl_
    cdef fw_shape_t correl_shape_[1]
    cdef fwi_integer_t n
    cdef fwi_integer_t fw_iserr__
    cdef fwr_dbl_t error
    cdef fwr_dbl_t value
    cdef fwi_integer_t inform
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    lower_, lower = fw_asfortranarray(lower, fwr_dbl_t_enum, 1, False)
    fw_copyshape(lower_shape_, np.PyArray_DIMS(lower_), 1)
    n = np.PyArray_DIMS(lower_)[0]
    if not (0 <= n <= lower_shape_[0]):
        raise ValueError("(0 <= n <= lower.shape[0]) not satisifed")
    upper_, upper = fw_asfortranarray(upper, fwr_dbl_t_enum, 1, False)
    fw_copyshape(upper_shape_, np.PyArray_DIMS(upper_), 1)
    if not (0 <= n <= upper_shape_[0]):
        raise ValueError("(0 <= n <= upper.shape[0]) not satisifed")
    infin_, infin = fw_asfortranarray(infin, fwi_integer_t_enum, 1, False)
    fw_copyshape(infin_shape_, np.PyArray_DIMS(infin_), 1)
    if not (0 <= n <= infin_shape_[0]):
        raise ValueError("(0 <= n <= infin.shape[0]) not satisifed")
    correl_, correl = fw_asfortranarray(correl, fwr_dbl_t_enum, 1, False)
    fw_copyshape(correl_shape_, np.PyArray_DIMS(correl_), 1)
    if not (0 <= n * (n - 1) // 2 <= correl_shape_[0]):
        raise ValueError("(0 <= n * (n - 1) // 2 <= correl.shape[0]) not satisifed")
    mvndst_c(&n, lower_shape_, <fwr_dbl_t*>np.PyArray_DATA(lower_), upper_shape_, <fwr_dbl_t*>np.PyArray_DATA(upper_), infin_shape_, <fwi_integer_t*>np.PyArray_DATA(infin_), correl_shape_, <fwr_dbl_t*>np.PyArray_DATA(correl_), &maxpts, &abseps, &releps, &error, &value, &inform, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'mvndst' wrapper.")
    return (error, value, inform,)



cdef void fw_copyshape(fw_shape_t *target, np.intp_t *source, int ndim):
    # In f77binding mode, we do not always have fw_shape_t and np.npy_intp
    # as the same type, so must make a copy
    cdef int i
    for i in range(ndim):
        target[i] = source[i]

cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy):
    cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST
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
# Fwrap: version 0.2.0dev_470490d
# Fwrap: self-sha1 ae9426402166d8ba0c07ab8f65716a064bddb136
# Fwrap: pyf-sha1 0f63f3c026a0fa64323de22db7535c0efe95e151
# Fwrap: wraps src/mvndst.f
# Fwrap:     sha1 3048e094d20be8b3e25e2882c1c93934a6e5881b
# Fwrap: exclude bvnmvn
# Fwrap: exclude bvu
# Fwrap: exclude covsrt
# Fwrap: exclude dkbvrc
# Fwrap: exclude dksmrc
# Fwrap: exclude dkswap
# Fwrap: exclude mvndfn
# Fwrap: exclude mvnlms
# Fwrap: exclude mvnphi
# Fwrap: exclude mvnuni
# Fwrap: exclude phinvs
# Fwrap: exclude rcswp
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary mvn.pxd
# Fwrap: auxiliary mvn_fc.f
# Fwrap: auxiliary mvn_fc.h
# Fwrap: auxiliary mvn_fc.pxd

