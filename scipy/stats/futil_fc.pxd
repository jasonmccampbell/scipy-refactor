from fwrap_ktp cimport *

cdef extern from "futil_fc.h":
    void dqsort_c(fwi_integer_t *, fw_shape_t *, fwr_real_x8_t *, fwi_integer_t *, fw_character_t *)
    void dfreps_c(fw_shape_t *, fwr_real_x8_t *, fwi_integer_t *, fw_shape_t *, fwr_real_x8_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
