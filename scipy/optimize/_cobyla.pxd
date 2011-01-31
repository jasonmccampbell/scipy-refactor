cimport numpy as np
from fwrap_ktp cimport *
cimport _cobyla_fc as fc

cpdef object minimize(object calcfc, fwi_integer_t m, object x, fwr_dbl_t rhobeg, fwr_dbl_t rhoend, fwi_integer_t iprint=*, fwi_integer_t maxfun=*)
