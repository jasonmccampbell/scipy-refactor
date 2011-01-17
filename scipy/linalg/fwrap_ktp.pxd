cimport numpy as np
from python_string cimport PyString_FromStringAndSize as PyBytes_FromStringAndSize
ctypedef str fw_bytes
ctypedef float complex fwc_complex_t
ctypedef float complex fwc_complex_x8_t
ctypedef float complex fwc_complex_4_t
ctypedef double complex fwc_complex_x16_t
ctypedef double complex fwc_complex_8_t
ctypedef double complex fwc_dbl_complex_t
cdef extern from *: # really from NumPy headers, pulled in by numpy.pxd
    cdef enum:
        fwi_integer_t_enum "NPY_INT"
        fwi_integer_x1_t_enum "NPY_INT8"
        fwi_integer_1_t_enum "NPY_INT8"
        fwi_integer_x2_t_enum "NPY_INT16"
        fwi_integer_2_t_enum "NPY_INT16"
        fwi_integer_x4_t_enum "NPY_INT32"
        fwi_integer_4_t_enum "NPY_INT32"
        fwi_integer_x8_t_enum "NPY_INT64"
        fwi_integer_8_t_enum "NPY_INT64"
        fwr_real_t_enum "NPY_FLOAT"
        fwr_real_x4_t_enum "NPY_FLOAT32"
        fwr_real_4_t_enum "NPY_FLOAT32"
        fwr_real_x8_t_enum "NPY_FLOAT64"
        fwr_real_8_t_enum "NPY_FLOAT64"
        fwr_dbl_t_enum "NPY_DOUBLE"
        fwc_complex_t_enum "NPY_CFLOAT"
        fwc_complex_x8_t_enum "NPY_CFLOAT"
        fwc_complex_4_t_enum "NPY_CFLOAT"
        fwc_complex_x16_t_enum "NPY_CDOUBLE"
        fwc_complex_8_t_enum "NPY_CDOUBLE"
        fwc_dbl_complex_t_enum "NPY_CDOUBLE"
        fw_character_t_enum "NPY_BYTE"
        fwl_logical_t_enum "NPY_INT"
        fwl_logical_x1_t_enum "NPY_INT8"
        fwl_logical_1_t_enum "NPY_INT8"
        fwl_logical_x2_t_enum "NPY_INT16"
        fwl_logical_2_t_enum "NPY_INT16"
        fwl_logical_x4_t_enum "NPY_INT32"
        fwl_logical_4_t_enum "NPY_INT32"
        fwl_logical_x8_t_enum "NPY_INT64"
        fwl_logical_8_t_enum "NPY_INT64"
        fw_shape_t_enum "NPY_INT"
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
