cimport numpy as np
from fwrap_ktp cimport *
cimport _lbfgsb_fc as fc

cpdef object setulb(fwi_integer_t m, object x, object l, object u, object nbd, fwr_dbl_t f, object g, fwr_dbl_t factr, fwr_dbl_t pgtol, object wa, object iwa, np.ndarray task, fwi_integer_t iprint, np.ndarray csave, object lsave, object isave, object dsave, object n=*, bint overwrite_x=*, bint overwrite_f=*, bint overwrite_g=*, bint overwrite_wa=*, bint overwrite_iwa=*, bint overwrite_task=*, bint overwrite_csave=*, bint overwrite_lsave=*, bint overwrite_isave=*, bint overwrite_dsave=*)
