#include "fwrap_ktp_header.h"

#if !defined(FORTRAN_CALLSPEC)
#define FORTRAN_CALLSPEC
#endif

#if !defined(NO_FORTRAN_MANGLING)
    #if !defined(PREPEND_FORTRAN) && defined(NO_APPEND_FORTRAN) && !defined(UPPERCASE_FORTRAN)
        #define NO_FORTRAN_MANGLING 1
    #endif
#endif
#if defined(NO_FORTRAN_MANGLING)
    #define F_FUNC(f,F) f
#else
    #if defined(PREPEND_FORTRAN)
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) _##F
            #else
                #define F_FUNC(f,F) _##f
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) _##F##_
            #else
                #define F_FUNC(f,F) _##f##_
            #endif
        #endif
    #else
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) F
            #else
                #error Can not happen
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) F##_
            #else
                #define F_FUNC(f,F) f##_
            #endif
        #endif
    #endif
#endif

#if defined(__cplusplus)
extern "C" {
#endif
FORTRAN_CALLSPEC void F_FUNC(ddet_c_c,DDET_C_C)(fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ddet_r_c,DDET_R_C)(fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sdet_c_c,SDET_C_C)(fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sdet_r_c,SDET_R_C)(fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zdet_c_c,ZDET_C_C)(fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zdet_r_c,ZDET_R_C)(fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cdet_c_c,CDET_C_C)(fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cdet_r_c,CDET_R_C)(fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlu_c_c,DLU_C_C)(fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlu_c_c,ZLU_C_C)(fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slu_c_c,SLU_C_C)(fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clu_c_c,CLU_C_C)(fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define ddet_c_c F_FUNC(ddet_c_c,DDET_C_C)
#define ddet_r_c F_FUNC(ddet_r_c,DDET_R_C)
#define sdet_c_c F_FUNC(sdet_c_c,SDET_C_C)
#define sdet_r_c F_FUNC(sdet_r_c,SDET_R_C)
#define zdet_c_c F_FUNC(zdet_c_c,ZDET_C_C)
#define zdet_r_c F_FUNC(zdet_r_c,ZDET_R_C)
#define cdet_c_c F_FUNC(cdet_c_c,CDET_C_C)
#define cdet_r_c F_FUNC(cdet_r_c,CDET_R_C)
#define dlu_c_c F_FUNC(dlu_c_c,DLU_C_C)
#define zlu_c_c F_FUNC(zlu_c_c,ZLU_C_C)
#define slu_c_c F_FUNC(slu_c_c,SLU_C_C)
#define clu_c_c F_FUNC(clu_c_c,CLU_C_C)
#endif
