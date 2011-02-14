from fwrap_ktp cimport *

cdef extern from "_nnls_fc.h":
    void nnls(fwr_dbl_t * a, fwi_integer_t * mda, fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * b, fwr_dbl_t * x, fwr_dbl_t * rnorm, fwr_dbl_t * w, fwr_dbl_t * zz, fwi_integer_t * index, fwi_integer_t * mode)
