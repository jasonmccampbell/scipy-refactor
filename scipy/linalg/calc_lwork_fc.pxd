from fwrap_ktp cimport *

cdef extern from "calc_lwork_fc.h":
    void gehrd_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void gesdd_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void gelss_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void getri_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void geev_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void heev_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void syev_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void gees_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void geqrf_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
    void gqr_c(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *)
