from fwrap_ktp cimport *

cdef extern from "_flinalg_fc.h":
    void ddet_c(fwr_dbl_t * det, fwr_dbl_t * a, fwi_integer_t * n, fwi_integer_t * piv, fwi_integer_t * info)
    void ddet_r(fwr_dbl_t * det, fwr_dbl_t * a, fwi_integer_t * n, fwi_integer_t * piv, fwi_integer_t * info)
    void sdet_c(fwr_real_t * det, fwr_real_t * a, fwi_integer_t * n, fwi_integer_t * piv, fwi_integer_t * info)
    void sdet_r(fwr_real_t * det, fwr_real_t * a, fwi_integer_t * n, fwi_integer_t * piv, fwi_integer_t * info)
    void zdet_c(fwc_complex_x16_t * det, fwc_complex_x16_t * a, fwi_integer_t * n, fwi_integer_t * piv, fwi_integer_t * info)
    void zdet_r(fwc_complex_x16_t * det, fwc_complex_x16_t * a, fwi_integer_t * n, fwi_integer_t * piv, fwi_integer_t * info)
    void cdet_c(fwc_complex_t * det, fwc_complex_t * a, fwi_integer_t * n, fwi_integer_t * piv, fwi_integer_t * info)
    void cdet_r(fwc_complex_t * det, fwc_complex_t * a, fwi_integer_t * n, fwi_integer_t * piv, fwi_integer_t * info)
    void dlu_c(fwr_dbl_t * p, fwr_dbl_t * l, fwr_dbl_t * u, fwr_dbl_t * a, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwi_integer_t * piv, fwi_integer_t * info, fwi_integer_t * permute_l, fwi_integer_t * m1)
    void zlu_c(fwr_dbl_t * p, fwc_complex_x16_t * l, fwc_complex_x16_t * u, fwc_complex_x16_t * a, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwi_integer_t * piv, fwi_integer_t * info, fwi_integer_t * permute_l, fwi_integer_t * m1)
    void slu_c(fwr_real_t * p, fwr_real_t * l, fwr_real_t * u, fwr_real_t * a, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwi_integer_t * piv, fwi_integer_t * info, fwi_integer_t * permute_l, fwi_integer_t * m1)
    void clu_c(fwr_real_t * p, fwc_complex_t * l, fwc_complex_t * u, fwc_complex_t * a, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwi_integer_t * piv, fwi_integer_t * info, fwi_integer_t * permute_l, fwi_integer_t * m1)
