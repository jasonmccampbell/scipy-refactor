cimport numpy as np
from fwrap_ktp cimport *
cimport vode_fc as fc

cpdef object dvode(object f, object jac, object y, fwr_dbl_t t, fwr_dbl_t tout, object rtol, object atol, fwi_integer_t itask, fwi_integer_t istate, object rwork, object iwork, fwi_integer_t mf, bint overwrite_y=*)
cpdef object zvode(object f, object jac, object y, fwr_dbl_t t, fwr_dbl_t tout, object rtol, object atol, fwi_integer_t itask, fwi_integer_t istate, object zwork, object rwork, object iwork, fwi_integer_t mf, bint overwrite_y=*)
