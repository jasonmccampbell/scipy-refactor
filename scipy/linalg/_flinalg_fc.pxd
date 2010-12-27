from fwrap_ktp cimport *

cdef extern from "_flinalg_fc.h":
    void ddet_c_c(fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void ddet_r_c(fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void sdet_c_c(fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void sdet_r_c(fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void zdet_c_c(fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void zdet_r_c(fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void cdet_c_c(fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void cdet_r_c(fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void dlu_c_c(fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void zlu_c_c(fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void slu_c_c(fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void clu_c_c(fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
