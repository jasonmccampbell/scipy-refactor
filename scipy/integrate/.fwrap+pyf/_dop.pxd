cimport numpy as np
from fwrap_ktp cimport *
cimport _dop_fc as fc

cpdef object dopri5(object fcn, fwr_dbl_t x, object y, fwr_dbl_t xend, object rtol, object atol, object solout, object work, object iwork, bint overwrite_y=*)
cpdef object dop853(object fcn, fwr_dbl_t x, object y, fwr_dbl_t xend, object rtol, object atol, object solout, object work, object iwork, bint overwrite_y=*)
