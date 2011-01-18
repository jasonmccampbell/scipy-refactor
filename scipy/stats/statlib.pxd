cimport numpy as np
from fwrap_ktp cimport *
cimport statlib_fc as fc

cpdef object wprob(fwi_integer_t test, fwi_integer_t other, object a1=*)
cpdef object gscale(fwi_integer_t test, fwi_integer_t other, object a1=*)
cpdef object prho(fwi_integer_t n, fwi_integer_t is__)
cpdef object swilk(object x, object a, bint init=*, object n1=*)
