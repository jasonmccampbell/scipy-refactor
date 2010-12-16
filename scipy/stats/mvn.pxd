cimport numpy as np
from mvn_fc cimport *

cpdef api object mvnun(fwi_integer_t d, fwi_integer_t n, object lower, object upper, object means, object covar, fwi_integer_t maxpts, fwr_dbl_t abseps, fwr_dbl_t releps, fwr_dbl_t value, fwi_integer_t inform)
cpdef api object mvndst(fwi_integer_t n, object lower, object upper, object infin, object correl, fwi_integer_t maxpts, fwr_dbl_t abseps, fwr_dbl_t releps, fwr_dbl_t error, fwr_dbl_t value, fwi_integer_t inform)
cpdef api object mvndfn(fwi_integer_t n, object w)
cpdef api object mvnlms(fwr_dbl_t a, fwr_dbl_t b, fwi_integer_t infin, fwr_dbl_t lower, fwr_dbl_t upper)
cpdef api object covsrt(fwi_integer_t n, object lower, object upper, object correl, object infin, object y, fwi_integer_t infis, object a, object b, object cov, object infi)
cpdef api object dkswap(fwr_dbl_t x, fwr_dbl_t y)
cpdef api object rcswp(fwi_integer_t p, fwi_integer_t q, object a, object b, object infin, fwi_integer_t n, object c)
cpdef api object dkbvrc(fwi_integer_t ndim, fwi_integer_t minvls, fwi_integer_t maxvls, fwr_dbl_t functn, fwr_dbl_t abseps, fwr_dbl_t releps, fwr_dbl_t abserr, fwr_dbl_t finest, fwi_integer_t inform)
cpdef api object dksmrc(fwi_integer_t ndim, fwi_integer_t klim, fwr_dbl_t sumkro, fwi_integer_t prime, object vk, fwr_dbl_t functn, object x)
cpdef api object mvnphi(fwr_dbl_t z)
cpdef api object phinvs(fwr_dbl_t p)
cpdef api object bvnmvn(object lower, object upper, object infin, fwr_dbl_t correl)
cpdef api object bvu(fwr_dbl_t sh, fwr_dbl_t sk, fwr_dbl_t r)
cpdef api object mvnuni()
