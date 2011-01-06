cimport numpy as np
from fwrap_ktp cimport *
cimport minpack2_fc as fc

cpdef object dcsrch(fwr_dbl_t stp, fwr_dbl_t f, fwr_dbl_t g, fwr_dbl_t ftol, fwr_dbl_t gtol, fwr_dbl_t xtol, bytes task, fwr_dbl_t stpmin, fwr_dbl_t stpmax, object isave, object dsave, bint overwrite_isave=*, bint overwrite_dsave=*)
cpdef object dcstep(fwr_dbl_t stx, fwr_dbl_t fx, fwr_dbl_t dx, fwr_dbl_t sty, fwr_dbl_t fy, fwr_dbl_t dy, fwr_dbl_t stp, fwr_dbl_t fp, fwr_dbl_t dp, bint brackt, fwr_dbl_t stpmin, fwr_dbl_t stpmax)
