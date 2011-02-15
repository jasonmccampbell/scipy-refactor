#cython: ccomplex=True

"""The mvn module was generated with Fwrap v0.2.0dev_dcfbd8f.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
mvndst(...)
mvnun(...)

"""

cimport numpy as np
from fwrap_ktp cimport *
cimport mvn_fc as fc

np.import_array()
__all__ = ['mvnun', 'mvndst']
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
def mvnun(object lower, object upper, object means, object covar, object maxpts=None, fwr_dbl_t abseps=1e-6, fwr_dbl_t releps=1e-6):
    """mvnun(lower, upper, means, covar[, maxpts, abseps, releps]) -> (value, inform)

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
    cdef fwi_integer_t maxpts_, d, n, inform
    cdef fwr_dbl_t value
    cdef np.ndarray lower_, upper_, means_, covar_
    cdef np.npy_intp lower_shape[1], upper_shape[1], means_shape[2], covar_shape[2]
    means_ = fw_asfortranarray(means, fwr_dbl_t_enum, 2, means_shape, False, False)
    d = means_shape[0]
    maxpts_ = maxpts if (maxpts is not None) else d * 1000
    value = 0
    inform = 0
    lower_ = fw_asfortranarray(lower, fwr_dbl_t_enum, 1, lower_shape, False, False)
    if not (0 <= d <= lower_shape[0]):
        raise ValueError("(0 <= d <= lower.shape[0]) not satisifed")
    upper_ = fw_asfortranarray(upper, fwr_dbl_t_enum, 1, upper_shape, False, False)
    if not (0 <= d <= upper_shape[0]):
        raise ValueError("(0 <= d <= upper.shape[0]) not satisifed")
    n = means_shape[1]
    if d != means_shape[0]:
        raise ValueError("(d == means.shape[0]) not satisifed")
    if not (0 <= n <= means_shape[1]):
        raise ValueError("(0 <= n <= means.shape[1]) not satisifed")
    covar_ = fw_asfortranarray(covar, fwr_dbl_t_enum, 2, covar_shape, False, False)
    if d != covar_shape[0]:
        raise ValueError("(d == covar.shape[0]) not satisifed")
    if not (0 <= d <= covar_shape[1]):
        raise ValueError("(0 <= d <= covar.shape[1]) not satisifed")
    fc.mvnun(&d, &n, <fwr_dbl_t*>np.PyArray_DATA(lower_), <fwr_dbl_t*>np.PyArray_DATA(upper_), <fwr_dbl_t*>np.PyArray_DATA(means_), <fwr_dbl_t*>np.PyArray_DATA(covar_), &maxpts_, &abseps, &releps, &value, &inform)
    return (value, inform,)


def mvndst(object lower, object upper, object infin, object correl, fwi_integer_t maxpts=2000, fwr_dbl_t abseps=1e-6, fwr_dbl_t releps=1e-6):
    """mvndst(lower, upper, infin, correl[, maxpts, abseps, releps]) -> (error, value, inform)

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
    cdef fwi_integer_t n, inform
    cdef fwr_dbl_t error, value
    cdef np.ndarray lower_, upper_, infin_, correl_
    cdef np.npy_intp lower_shape[1], upper_shape[1], infin_shape[1], correl_shape[1]
    error = 0
    value = 0
    inform = 0
    lower_ = fw_asfortranarray(lower, fwr_dbl_t_enum, 1, lower_shape, False, False)
    n = lower_shape[0]
    if not (0 <= n <= lower_shape[0]):
        raise ValueError("(0 <= n <= lower.shape[0]) not satisifed")
    upper_ = fw_asfortranarray(upper, fwr_dbl_t_enum, 1, upper_shape, False, False)
    if not (0 <= n <= upper_shape[0]):
        raise ValueError("(0 <= n <= upper.shape[0]) not satisifed")
    infin_ = fw_asfortranarray(infin, fwi_integer_t_enum, 1, infin_shape, False, False)
    if not (0 <= n <= infin_shape[0]):
        raise ValueError("(0 <= n <= infin.shape[0]) not satisifed")
    correl_ = fw_asfortranarray(correl, fwr_dbl_t_enum, 1, correl_shape, False, False)
    if not (0 <= n * (n - 1) // 2 <= correl_shape[0]):
        raise ValueError("(0 <= n * (n - 1) // 2 <= correl.shape[0]) not satisifed")
    fc.mvndst(&n, <fwr_dbl_t*>np.PyArray_DATA(lower_), <fwr_dbl_t*>np.PyArray_DATA(upper_), <fwi_integer_t*>np.PyArray_DATA(infin_), <fwr_dbl_t*>np.PyArray_DATA(correl_), &maxpts, &abseps, &releps, &error, &value, &inform)
    return (error, value, inform,)



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
# Fwrap: version 0.2.0dev_dcfbd8f
# Fwrap: self-sha1 ae9426402166d8ba0c07ab8f65716a064bddb136
# Fwrap: pyf-sha1 379843d7608e85a453c00112a4a2aa6e260ce628
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
# Fwrap: no-cpdef True
# Fwrap: auxiliary mvn_fc.h
# Fwrap: auxiliary mvn_fc.pxd

