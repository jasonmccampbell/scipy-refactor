cimport numpy as np
from fwrap_ktp cimport *
cimport _nnls_fc as fc

cpdef object nnls(object a, fwi_integer_t m, fwi_integer_t n, object b, object w, object zz, object index_bn, object mda=*, bint overwrite_a=*, bint overwrite_b=*, object x=*)
