from fwrap_ktp cimport *

cdef extern from "_flinalg_fc.h":
    void ddet_c "F_FUNC(ddet_c,DDET_C)"(
        fwr_dbl_t * det,
        fwr_dbl_t * a,
        fwi_integer_t * n,
        fwi_integer_t * piv,
        fwi_integer_t * info
    )
    void ddet_r "F_FUNC(ddet_r,DDET_R)"(
        fwr_dbl_t * det,
        fwr_dbl_t * a,
        fwi_integer_t * n,
        fwi_integer_t * piv,
        fwi_integer_t * info
    )
    void sdet_c "F_FUNC(sdet_c,SDET_C)"(
        fwr_real_t * det,
        fwr_real_t * a,
        fwi_integer_t * n,
        fwi_integer_t * piv,
        fwi_integer_t * info
    )
    void sdet_r "F_FUNC(sdet_r,SDET_R)"(
        fwr_real_t * det,
        fwr_real_t * a,
        fwi_integer_t * n,
        fwi_integer_t * piv,
        fwi_integer_t * info
    )
    void zdet_c "F_FUNC(zdet_c,ZDET_C)"(
        fwc_complex_x16_t * det,
        fwc_complex_x16_t * a,
        fwi_integer_t * n,
        fwi_integer_t * piv,
        fwi_integer_t * info
    )
    void zdet_r "F_FUNC(zdet_r,ZDET_R)"(
        fwc_complex_x16_t * det,
        fwc_complex_x16_t * a,
        fwi_integer_t * n,
        fwi_integer_t * piv,
        fwi_integer_t * info
    )
    void cdet_c "F_FUNC(cdet_c,CDET_C)"(
        fwc_complex_t * det,
        fwc_complex_t * a,
        fwi_integer_t * n,
        fwi_integer_t * piv,
        fwi_integer_t * info
    )
    void cdet_r "F_FUNC(cdet_r,CDET_R)"(
        fwc_complex_t * det,
        fwc_complex_t * a,
        fwi_integer_t * n,
        fwi_integer_t * piv,
        fwi_integer_t * info
    )
    void dlu_c "F_FUNC(dlu_c,DLU_C)"(
        fwr_dbl_t * p,
        fwr_dbl_t * l,
        fwr_dbl_t * u,
        fwr_dbl_t * a,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * k,
        fwi_integer_t * piv,
        fwi_integer_t * info,
        fwi_integer_t * permute_l,
        fwi_integer_t * m1
    )
    void zlu_c "F_FUNC(zlu_c,ZLU_C)"(
        fwr_dbl_t * p,
        fwc_complex_x16_t * l,
        fwc_complex_x16_t * u,
        fwc_complex_x16_t * a,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * k,
        fwi_integer_t * piv,
        fwi_integer_t * info,
        fwi_integer_t * permute_l,
        fwi_integer_t * m1
    )
    void slu_c "F_FUNC(slu_c,SLU_C)"(
        fwr_real_t * p,
        fwr_real_t * l,
        fwr_real_t * u,
        fwr_real_t * a,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * k,
        fwi_integer_t * piv,
        fwi_integer_t * info,
        fwi_integer_t * permute_l,
        fwi_integer_t * m1
    )
    void clu_c "F_FUNC(clu_c,CLU_C)"(
        fwr_real_t * p,
        fwc_complex_t * l,
        fwc_complex_t * u,
        fwc_complex_t * a,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * k,
        fwi_integer_t * piv,
        fwi_integer_t * info,
        fwi_integer_t * permute_l,
        fwi_integer_t * m1
    )
