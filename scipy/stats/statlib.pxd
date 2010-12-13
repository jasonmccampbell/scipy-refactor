cimport numpy as np
from statlib_fc cimport *

cpdef api object wprob(fwi_integer_t test, fwi_integer_t other, fwr_real_t astart, object a1, fwi_integer_t l1, object a2, object a3, fwi_integer_t ifault)
cpdef api object gscale(fwi_integer_t test, fwi_integer_t other, fwr_real_t astart, object a1, fwi_integer_t l1, object a2, object a3, fwi_integer_t ifault)
cpdef api object prho(fwi_integer_t n, fwi_integer_t is__, fwi_integer_t ifault)
cpdef api object swilk(bint init, object x, fwi_integer_t n, fwi_integer_t n1, fwi_integer_t n2, object a, fwr_real_t w, fwr_real_t pw, fwi_integer_t ifault)
