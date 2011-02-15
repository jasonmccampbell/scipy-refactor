#ifndef FWRAP_KTP_HEADER_H
#define FWRAP_KTP_HEADER_H
#if defined(__cplusplus)
   #include <complex>
   #define fw_complex(x) std::complex<x>
#else
   #define fw_complex(x) x _Complex
#endif

#define FW_ARR_DIM__ 2
#define FW_CHAR_SIZE__ 1
#define FW_INIT_ERR__ -1
#define FW_NO_ERR__ 0
#define fw_errstr_len 63
#include <npy_math.h>
typedef int fwi_integer_t;
typedef npy_int8 fwi_integer_x1_t;
typedef npy_int8 fwi_integer_1_t;
typedef npy_int16 fwi_integer_x2_t;
typedef npy_int16 fwi_integer_2_t;
typedef npy_int32 fwi_integer_x4_t;
typedef npy_int32 fwi_integer_4_t;
typedef npy_int64 fwi_integer_x8_t;
typedef npy_int64 fwi_integer_8_t;
typedef float fwr_real_t;
typedef npy_float32 fwr_real_x4_t;
typedef npy_float32 fwr_real_4_t;
typedef npy_float64 fwr_real_x8_t;
typedef npy_float64 fwr_real_8_t;
typedef double fwr_dbl_t;
typedef fw_complex(float) fwc_complex_t;
typedef fw_complex(float) fwc_complex_x8_t;
typedef fw_complex(float) fwc_complex_4_t;
typedef fw_complex(double) fwc_complex_x16_t;
typedef fw_complex(double) fwc_complex_8_t;
typedef fw_complex(double) fwc_dbl_complex_t;
typedef char fw_character_t;
typedef int fwl_logical_t;
typedef npy_int8 fwl_logical_x1_t;
typedef npy_int8 fwl_logical_1_t;
typedef npy_int16 fwl_logical_x2_t;
typedef npy_int16 fwl_logical_2_t;
typedef npy_int32 fwl_logical_x4_t;
typedef npy_int32 fwl_logical_4_t;
typedef npy_int64 fwl_logical_x8_t;
typedef npy_int64 fwl_logical_8_t;
typedef int fw_shape_t;
#endif
