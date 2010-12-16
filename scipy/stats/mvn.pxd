cimport numpy as np
from mvn_fc cimport *

cpdef api object mvnun(object lower, object upper, object means, object covar, object maxpts=*, fwr_dbl_t abseps=*, fwr_dbl_t releps=*)
cpdef api object mvndst(object lower, object upper, object infin, object correl, fwi_integer_t maxpts=*, fwr_dbl_t abseps=*, fwr_dbl_t releps=*)
