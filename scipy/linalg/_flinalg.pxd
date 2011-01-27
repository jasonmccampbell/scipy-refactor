cimport numpy as np
from fwrap_ktp cimport *
cimport _flinalg_fc as fc

cpdef object ddet_c(object a, bint overwrite_a=*)
cpdef object ddet_r(object a, bint overwrite_a=*)
cpdef object sdet_c(object a, bint overwrite_a=*)
cpdef object sdet_r(object a, bint overwrite_a=*)
cpdef object zdet_c(object a, bint overwrite_a=*)
cpdef object zdet_r(object a, bint overwrite_a=*)
cpdef object cdet_c(object a, bint overwrite_a=*)
cpdef object cdet_r(object a, bint overwrite_a=*)
cpdef object dlu_c(object a, fwi_integer_t permute_l=*, bint overwrite_a=*, object p=*, object l=*, object u=*)
cpdef object zlu_c(object a, fwi_integer_t permute_l=*, bint overwrite_a=*, object p=*, object l=*, object u=*)
cpdef object slu_c(object a, fwi_integer_t permute_l=*, bint overwrite_a=*, object p=*, object l=*, object u=*)
cpdef object clu_c(object a, fwi_integer_t permute_l=*, bint overwrite_a=*, object p=*, object l=*, object u=*)
