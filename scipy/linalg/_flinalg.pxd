cimport numpy as np
from _flinalg_fc cimport *

cpdef api object ddet_c(fwr_dbl_t det, object a, fwi_integer_t n, object piv, fwi_integer_t info)
cpdef api object ddet_r(fwr_dbl_t det, object a, fwi_integer_t n, object piv, fwi_integer_t info)
cpdef api object sdet_c(fwr_real_t det, object a, fwi_integer_t n, object piv, fwi_integer_t info)
cpdef api object sdet_r(fwr_real_t det, object a, fwi_integer_t n, object piv, fwi_integer_t info)
cpdef api object zdet_c(fwc_complex_x16_t det, object a, fwi_integer_t n, object piv, fwi_integer_t info)
cpdef api object zdet_r(fwc_complex_x16_t det, object a, fwi_integer_t n, object piv, fwi_integer_t info)
cpdef api object cdet_c(fwc_complex_t det, object a, fwi_integer_t n, object piv, fwi_integer_t info)
cpdef api object cdet_r(fwc_complex_t det, object a, fwi_integer_t n, object piv, fwi_integer_t info)
cpdef api object dlu_c(object p, object l, object u, object a, fwi_integer_t m, fwi_integer_t n, fwi_integer_t k, object piv, fwi_integer_t info, fwi_integer_t permute_l, fwi_integer_t m1)
cpdef api object zlu_c(object p, object l, object u, object a, fwi_integer_t m, fwi_integer_t n, fwi_integer_t k, object piv, fwi_integer_t info, fwi_integer_t permute_l, fwi_integer_t m1)
cpdef api object slu_c(object p, object l, object u, object a, fwi_integer_t m, fwi_integer_t n, fwi_integer_t k, object piv, fwi_integer_t info, fwi_integer_t permute_l, fwi_integer_t m1)
cpdef api object clu_c(object p, object l, object u, object a, fwi_integer_t m, fwi_integer_t n, fwi_integer_t k, object piv, fwi_integer_t info, fwi_integer_t permute_l, fwi_integer_t m1)
