from fwrap_ktp cimport *

cdef extern from "_nnls_fc.h":
    void nnls(fwr_dbl_t * a, fwi_integer_t * mda, fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * b, fwr_dbl_t * x, fwr_dbl_t * rnorm, fwr_dbl_t * w, fwr_dbl_t * zz, fwi_integer_t * index, fwi_integer_t * mode)
    fwr_dbl_t diff(fwr_dbl_t * x, fwr_dbl_t * y)
    void h12(fwi_integer_t * mode, fwi_integer_t * lpivot, fwi_integer_t * l1, fwi_integer_t * m, fwr_dbl_t * u, fwi_integer_t * iue, fwr_dbl_t * up, fwr_dbl_t * c, fwi_integer_t * ice, fwi_integer_t * icv, fwi_integer_t * ncv)
    void g1(fwr_dbl_t * a, fwr_dbl_t * b, fwr_dbl_t * cterm, fwr_dbl_t * sterm, fwr_dbl_t * sig)
