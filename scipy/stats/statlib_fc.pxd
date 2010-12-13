from fwrap_ktp cimport *

cdef extern from "statlib_fc.h":
    void wprob_c(fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void gscale_c(fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void start1_c(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void start2_c(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void frqadd_c(fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void imply_c(fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void prho_c(fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void swilk_c(fwl_logical_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void alnorm_c(fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fw_character_t *)
    void ppnd_c(fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void poly_c(fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *)
