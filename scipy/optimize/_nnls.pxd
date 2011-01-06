cimport numpy as np
from fwrap_ktp cimport *
cimport _nnls_fc as fc

cpdef object nnls(object a, fwi_integer_t mda, fwi_integer_t m, fwi_integer_t n, object b, object x, fwr_dbl_t rnorm, object w, object zz, object index, fwi_integer_t mode)
cpdef object diff(fwr_dbl_t x, fwr_dbl_t y)
cpdef object h12(fwi_integer_t mode, fwi_integer_t lpivot, fwi_integer_t l1, fwi_integer_t m, object u, fwi_integer_t iue, fwr_dbl_t up, object c, fwi_integer_t ice, fwi_integer_t icv, fwi_integer_t ncv)
cpdef object g1(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t cterm, fwr_dbl_t sterm, fwr_dbl_t sig)
