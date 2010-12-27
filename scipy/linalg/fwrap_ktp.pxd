cimport numpy as np
from python_string cimport PyString_FromStringAndSize as PyBytes_FromStringAndSize
ctypedef str fw_bytes
ctypedef float complex fwc_complex_t
ctypedef float complex fwc_complex_x8_t
ctypedef float complex fwc_complex_4_t
ctypedef double complex fwc_complex_x16_t
ctypedef double complex fwc_complex_8_t
ctypedef double complex fwc_dbl_complex_t
cdef extern from "fwrap_ktp_header.h":
    enum:
        FW_ARR_DIM__ = 2
        FW_CHAR_SIZE__ = 1
        FW_INIT_ERR__ = -1
        FW_NO_ERR__ = 0
        fw_errstr_len = 63
    ctypedef int fwi_integer_t
    ctypedef np.int8_t fwi_integer_x1_t
    ctypedef np.int8_t fwi_integer_1_t
    ctypedef np.int16_t fwi_integer_x2_t
    ctypedef np.int16_t fwi_integer_2_t
    ctypedef np.int32_t fwi_integer_x4_t
    ctypedef np.int32_t fwi_integer_4_t
    ctypedef np.int64_t fwi_integer_x8_t
    ctypedef np.int64_t fwi_integer_8_t
    ctypedef float fwr_real_t
    ctypedef np.float32_t fwr_real_x4_t
    ctypedef np.float32_t fwr_real_4_t
    ctypedef np.float64_t fwr_real_x8_t
    ctypedef np.float64_t fwr_real_8_t
    ctypedef double fwr_dbl_t
    ctypedef char fw_character_t
    ctypedef int fwl_logical_t
    ctypedef np.int8_t fwl_logical_x1_t
    ctypedef np.int8_t fwl_logical_1_t
    ctypedef np.int16_t fwl_logical_x2_t
    ctypedef np.int16_t fwl_logical_2_t
    ctypedef np.int32_t fwl_logical_x4_t
    ctypedef np.int32_t fwl_logical_4_t
    ctypedef np.int64_t fwl_logical_x8_t
    ctypedef np.int64_t fwl_logical_8_t
    ctypedef int fw_shape_t
