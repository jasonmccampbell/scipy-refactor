cimport numpy as np
from _flinalg_fc cimport *

cpdef api object ddet_c(object a, bint overwrite_a=*)
cpdef api object ddet_r(object a, bint overwrite_a=*)
cpdef api object sdet_c(object a, bint overwrite_a=*)
cpdef api object sdet_r(object a, bint overwrite_a=*)
cpdef api object zdet_c(object a, bint overwrite_a=*)
cpdef api object zdet_r(object a, bint overwrite_a=*)
cpdef api object cdet_c(object a, bint overwrite_a=*)
cpdef api object cdet_r(object a, bint overwrite_a=*)
cpdef api object dlu_c(object a, fwi_integer_t permute_l=*, bint overwrite_a=*, object p=*, object l=*, object u=*)
cpdef api object zlu_c(object a, fwi_integer_t permute_l=*, bint overwrite_a=*, object p=*, object l=*, object u=*)
cpdef api object slu_c(object a, fwi_integer_t permute_l=*, bint overwrite_a=*, object p=*, object l=*, object u=*)
cpdef api object clu_c(object a, fwi_integer_t permute_l=*, bint overwrite_a=*, object p=*, object l=*, object u=*)
