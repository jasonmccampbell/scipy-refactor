cimport numpy as np
from statlib_fc cimport *

cpdef api object wprob(fwi_integer_t test, fwi_integer_t other, fwr_real_t astart, object a1, fwi_integer_t l1, object a2, object a3, fwi_integer_t ifault)
cpdef api object gscale(fwi_integer_t test, fwi_integer_t other, fwr_real_t astart, object a1, fwi_integer_t l1, object a2, object a3, fwi_integer_t ifault)
cpdef api object start1(fwi_integer_t n, object f, fwi_integer_t l, fwi_integer_t lout)
cpdef api object start2(fwi_integer_t n, object f, fwi_integer_t l, fwi_integer_t lout)
cpdef api object frqadd(object f1, fwi_integer_t l1in, fwi_integer_t l1out, fwi_integer_t l1, object f2, fwi_integer_t l2, fwi_integer_t nstart)
cpdef api object imply(object f1, fwi_integer_t l1in, fwi_integer_t l1out, object f2, fwi_integer_t l2, fwi_integer_t l2max, fwi_integer_t noff)
cpdef api object prho(fwi_integer_t n, fwi_integer_t is__, fwi_integer_t ifault)
cpdef api object swilk(bint init, object x, fwi_integer_t n, fwi_integer_t n1, fwi_integer_t n2, object a, fwr_real_t w, fwr_real_t pw, fwi_integer_t ifault)
cpdef api object alnorm(fwr_dbl_t x, bint upper)
cpdef api object ppnd(fwr_real_t p, fwi_integer_t ifault)
cpdef api object poly(object c, fwi_integer_t nord, fwr_real_t x)
