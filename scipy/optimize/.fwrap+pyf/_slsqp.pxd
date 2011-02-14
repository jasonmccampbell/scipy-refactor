cimport numpy as np
from fwrap_ktp cimport *
cimport _slsqp_fc as fc

cpdef object slsqp(fwi_integer_t m, fwi_integer_t meq, object x, object xl, object xu, fwr_dbl_t f, object c, object g, object a, fwr_dbl_t acc, fwi_integer_t iter, fwi_integer_t mode, object w, object jw, object la=*, object n=*, object l_w=*, object l_jw=*)
