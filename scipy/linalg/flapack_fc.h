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
FORTRAN_CALLSPEC void F_FUNC(cgbsv_c,CGBSV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbtrf_c,CGBTRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbtrs_c,CGBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgebal_c,CGEBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgees_c,CGEES_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeev_c,CGEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgegv_c,CGEGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgehrd_c,CGEHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgelss_c,CGELSS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeqrf_c,CGEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgerqf_c,CGERQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgesdd_c,CGESDD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgesv_c,CGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgetrf_c,CGETRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgetri_c,CGETRI_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgetrs_c,CGETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggev_c,CGGEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbevd_c,CHBEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbevx_c,CHBEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cheev_c,CHEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cheevr_c,CHEEVR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chegv_c,CHEGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chegvd_c,CHEGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chegvx_c,CHEGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claswp_c,CLASWP_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clauum_c,CLAUUM_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbsv_c,CPBSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbtrf_c,CPBTRF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbtrs_c,CPBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cposv_c,CPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpotrf_c,CPOTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpotri_c,CPOTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpotrs_c,CPOTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrtri_c,CTRTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrtrs_c,CTRTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cungqr_c,CUNGQR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbsv_c,DGBSV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbtrf_c,DGBTRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbtrs_c,DGBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgebal_c,DGEBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgees_c,DGEES_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeev_c,DGEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgegv_c,DGEGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgehrd_c,DGEHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgelss_c,DGELSS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeqrf_c,DGEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgerqf_c,DGERQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesdd_c,DGESDD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesv_c,DGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgetrf_c,DGETRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgetri_c,DGETRI_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgetrs_c,DGETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggev_c,DGGEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlamch_c,DLAMCH_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaswp_c,DLASWP_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlauum_c,DLAUUM_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorgqr_c,DORGQR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbsv_c,DPBSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbtrf_c,DPBTRF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbtrs_c,DPBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dposv_c,DPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpotrf_c,DPOTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpotri_c,DPOTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpotrs_c,DPOTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbev_c,DSBEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbevd_c,DSBEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbevx_c,DSBEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyev_c,DSYEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyevr_c,DSYEVR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsygv_c,DSYGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsygvd_c,DSYGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsygvx_c,DSYGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrtri_c,DTRTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrtrs_c,DTRTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbsv_c,SGBSV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbtrf_c,SGBTRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbtrs_c,SGBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgebal_c,SGEBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgees_c,SGEES_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeev_c,SGEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgegv_c,SGEGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgehrd_c,SGEHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgelss_c,SGELSS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeqrf_c,SGEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgerqf_c,SGERQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesdd_c,SGESDD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesv_c,SGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgetrf_c,SGETRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgetri_c,SGETRI_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgetrs_c,SGETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggev_c,SGGEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaswp_c,SLASWP_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slauum_c,SLAUUM_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorgqr_c,SORGQR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbsv_c,SPBSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbtrf_c,SPBTRF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbtrs_c,SPBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sposv_c,SPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spotrf_c,SPOTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spotri_c,SPOTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spotrs_c,SPOTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbev_c,SSBEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbevd_c,SSBEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbevx_c,SSBEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyev_c,SSYEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyevr_c,SSYEVR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssygv_c,SSYGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssygvd_c,SSYGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssygvx_c,SSYGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strtri_c,STRTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strtrs_c,STRTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbsv_c,ZGBSV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbtrf_c,ZGBTRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbtrs_c,ZGBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgebal_c,ZGEBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgees_c,ZGEES_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeev_c,ZGEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgegv_c,ZGEGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgehrd_c,ZGEHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgelss_c,ZGELSS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeqrf_c,ZGEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgerqf_c,ZGERQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgesdd_c,ZGESDD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgesv_c,ZGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgetrf_c,ZGETRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgetri_c,ZGETRI_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgetrs_c,ZGETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggev_c,ZGGEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbevd_c,ZHBEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbevx_c,ZHBEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zheev_c,ZHEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zheevr_c,ZHEEVR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhegv_c,ZHEGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhegvd_c,ZHEGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhegvx_c,ZHEGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaswp_c,ZLASWP_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlauum_c,ZLAUUM_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbsv_c,ZPBSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbtrf_c,ZPBTRF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbtrs_c,ZPBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zposv_c,ZPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpotrf_c,ZPOTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpotri_c,ZPOTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpotrs_c,ZPOTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrtri_c,ZTRTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrtrs_c,ZTRTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zungqr_c,ZUNGQR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define cgbsv_c F_FUNC(cgbsv_c,CGBSV_C)
#define cgbtrf_c F_FUNC(cgbtrf_c,CGBTRF_C)
#define cgbtrs_c F_FUNC(cgbtrs_c,CGBTRS_C)
#define cgebal_c F_FUNC(cgebal_c,CGEBAL_C)
#define cgees_c F_FUNC(cgees_c,CGEES_C)
#define cgeev_c F_FUNC(cgeev_c,CGEEV_C)
#define cgegv_c F_FUNC(cgegv_c,CGEGV_C)
#define cgehrd_c F_FUNC(cgehrd_c,CGEHRD_C)
#define cgelss_c F_FUNC(cgelss_c,CGELSS_C)
#define cgeqrf_c F_FUNC(cgeqrf_c,CGEQRF_C)
#define cgerqf_c F_FUNC(cgerqf_c,CGERQF_C)
#define cgesdd_c F_FUNC(cgesdd_c,CGESDD_C)
#define cgesv_c F_FUNC(cgesv_c,CGESV_C)
#define cgetrf_c F_FUNC(cgetrf_c,CGETRF_C)
#define cgetri_c F_FUNC(cgetri_c,CGETRI_C)
#define cgetrs_c F_FUNC(cgetrs_c,CGETRS_C)
#define cggev_c F_FUNC(cggev_c,CGGEV_C)
#define chbevd_c F_FUNC(chbevd_c,CHBEVD_C)
#define chbevx_c F_FUNC(chbevx_c,CHBEVX_C)
#define cheev_c F_FUNC(cheev_c,CHEEV_C)
#define cheevr_c F_FUNC(cheevr_c,CHEEVR_C)
#define chegv_c F_FUNC(chegv_c,CHEGV_C)
#define chegvd_c F_FUNC(chegvd_c,CHEGVD_C)
#define chegvx_c F_FUNC(chegvx_c,CHEGVX_C)
#define claswp_c F_FUNC(claswp_c,CLASWP_C)
#define clauum_c F_FUNC(clauum_c,CLAUUM_C)
#define cpbsv_c F_FUNC(cpbsv_c,CPBSV_C)
#define cpbtrf_c F_FUNC(cpbtrf_c,CPBTRF_C)
#define cpbtrs_c F_FUNC(cpbtrs_c,CPBTRS_C)
#define cposv_c F_FUNC(cposv_c,CPOSV_C)
#define cpotrf_c F_FUNC(cpotrf_c,CPOTRF_C)
#define cpotri_c F_FUNC(cpotri_c,CPOTRI_C)
#define cpotrs_c F_FUNC(cpotrs_c,CPOTRS_C)
#define ctrtri_c F_FUNC(ctrtri_c,CTRTRI_C)
#define ctrtrs_c F_FUNC(ctrtrs_c,CTRTRS_C)
#define cungqr_c F_FUNC(cungqr_c,CUNGQR_C)
#define dgbsv_c F_FUNC(dgbsv_c,DGBSV_C)
#define dgbtrf_c F_FUNC(dgbtrf_c,DGBTRF_C)
#define dgbtrs_c F_FUNC(dgbtrs_c,DGBTRS_C)
#define dgebal_c F_FUNC(dgebal_c,DGEBAL_C)
#define dgees_c F_FUNC(dgees_c,DGEES_C)
#define dgeev_c F_FUNC(dgeev_c,DGEEV_C)
#define dgegv_c F_FUNC(dgegv_c,DGEGV_C)
#define dgehrd_c F_FUNC(dgehrd_c,DGEHRD_C)
#define dgelss_c F_FUNC(dgelss_c,DGELSS_C)
#define dgeqrf_c F_FUNC(dgeqrf_c,DGEQRF_C)
#define dgerqf_c F_FUNC(dgerqf_c,DGERQF_C)
#define dgesdd_c F_FUNC(dgesdd_c,DGESDD_C)
#define dgesv_c F_FUNC(dgesv_c,DGESV_C)
#define dgetrf_c F_FUNC(dgetrf_c,DGETRF_C)
#define dgetri_c F_FUNC(dgetri_c,DGETRI_C)
#define dgetrs_c F_FUNC(dgetrs_c,DGETRS_C)
#define dggev_c F_FUNC(dggev_c,DGGEV_C)
#define dlamch_c F_FUNC(dlamch_c,DLAMCH_C)
#define dlaswp_c F_FUNC(dlaswp_c,DLASWP_C)
#define dlauum_c F_FUNC(dlauum_c,DLAUUM_C)
#define dorgqr_c F_FUNC(dorgqr_c,DORGQR_C)
#define dpbsv_c F_FUNC(dpbsv_c,DPBSV_C)
#define dpbtrf_c F_FUNC(dpbtrf_c,DPBTRF_C)
#define dpbtrs_c F_FUNC(dpbtrs_c,DPBTRS_C)
#define dposv_c F_FUNC(dposv_c,DPOSV_C)
#define dpotrf_c F_FUNC(dpotrf_c,DPOTRF_C)
#define dpotri_c F_FUNC(dpotri_c,DPOTRI_C)
#define dpotrs_c F_FUNC(dpotrs_c,DPOTRS_C)
#define dsbev_c F_FUNC(dsbev_c,DSBEV_C)
#define dsbevd_c F_FUNC(dsbevd_c,DSBEVD_C)
#define dsbevx_c F_FUNC(dsbevx_c,DSBEVX_C)
#define dsyev_c F_FUNC(dsyev_c,DSYEV_C)
#define dsyevr_c F_FUNC(dsyevr_c,DSYEVR_C)
#define dsygv_c F_FUNC(dsygv_c,DSYGV_C)
#define dsygvd_c F_FUNC(dsygvd_c,DSYGVD_C)
#define dsygvx_c F_FUNC(dsygvx_c,DSYGVX_C)
#define dtrtri_c F_FUNC(dtrtri_c,DTRTRI_C)
#define dtrtrs_c F_FUNC(dtrtrs_c,DTRTRS_C)
#define sgbsv_c F_FUNC(sgbsv_c,SGBSV_C)
#define sgbtrf_c F_FUNC(sgbtrf_c,SGBTRF_C)
#define sgbtrs_c F_FUNC(sgbtrs_c,SGBTRS_C)
#define sgebal_c F_FUNC(sgebal_c,SGEBAL_C)
#define sgees_c F_FUNC(sgees_c,SGEES_C)
#define sgeev_c F_FUNC(sgeev_c,SGEEV_C)
#define sgegv_c F_FUNC(sgegv_c,SGEGV_C)
#define sgehrd_c F_FUNC(sgehrd_c,SGEHRD_C)
#define sgelss_c F_FUNC(sgelss_c,SGELSS_C)
#define sgeqrf_c F_FUNC(sgeqrf_c,SGEQRF_C)
#define sgerqf_c F_FUNC(sgerqf_c,SGERQF_C)
#define sgesdd_c F_FUNC(sgesdd_c,SGESDD_C)
#define sgesv_c F_FUNC(sgesv_c,SGESV_C)
#define sgetrf_c F_FUNC(sgetrf_c,SGETRF_C)
#define sgetri_c F_FUNC(sgetri_c,SGETRI_C)
#define sgetrs_c F_FUNC(sgetrs_c,SGETRS_C)
#define sggev_c F_FUNC(sggev_c,SGGEV_C)
#define slaswp_c F_FUNC(slaswp_c,SLASWP_C)
#define slauum_c F_FUNC(slauum_c,SLAUUM_C)
#define sorgqr_c F_FUNC(sorgqr_c,SORGQR_C)
#define spbsv_c F_FUNC(spbsv_c,SPBSV_C)
#define spbtrf_c F_FUNC(spbtrf_c,SPBTRF_C)
#define spbtrs_c F_FUNC(spbtrs_c,SPBTRS_C)
#define sposv_c F_FUNC(sposv_c,SPOSV_C)
#define spotrf_c F_FUNC(spotrf_c,SPOTRF_C)
#define spotri_c F_FUNC(spotri_c,SPOTRI_C)
#define spotrs_c F_FUNC(spotrs_c,SPOTRS_C)
#define ssbev_c F_FUNC(ssbev_c,SSBEV_C)
#define ssbevd_c F_FUNC(ssbevd_c,SSBEVD_C)
#define ssbevx_c F_FUNC(ssbevx_c,SSBEVX_C)
#define ssyev_c F_FUNC(ssyev_c,SSYEV_C)
#define ssyevr_c F_FUNC(ssyevr_c,SSYEVR_C)
#define ssygv_c F_FUNC(ssygv_c,SSYGV_C)
#define ssygvd_c F_FUNC(ssygvd_c,SSYGVD_C)
#define ssygvx_c F_FUNC(ssygvx_c,SSYGVX_C)
#define strtri_c F_FUNC(strtri_c,STRTRI_C)
#define strtrs_c F_FUNC(strtrs_c,STRTRS_C)
#define zgbsv_c F_FUNC(zgbsv_c,ZGBSV_C)
#define zgbtrf_c F_FUNC(zgbtrf_c,ZGBTRF_C)
#define zgbtrs_c F_FUNC(zgbtrs_c,ZGBTRS_C)
#define zgebal_c F_FUNC(zgebal_c,ZGEBAL_C)
#define zgees_c F_FUNC(zgees_c,ZGEES_C)
#define zgeev_c F_FUNC(zgeev_c,ZGEEV_C)
#define zgegv_c F_FUNC(zgegv_c,ZGEGV_C)
#define zgehrd_c F_FUNC(zgehrd_c,ZGEHRD_C)
#define zgelss_c F_FUNC(zgelss_c,ZGELSS_C)
#define zgeqrf_c F_FUNC(zgeqrf_c,ZGEQRF_C)
#define zgerqf_c F_FUNC(zgerqf_c,ZGERQF_C)
#define zgesdd_c F_FUNC(zgesdd_c,ZGESDD_C)
#define zgesv_c F_FUNC(zgesv_c,ZGESV_C)
#define zgetrf_c F_FUNC(zgetrf_c,ZGETRF_C)
#define zgetri_c F_FUNC(zgetri_c,ZGETRI_C)
#define zgetrs_c F_FUNC(zgetrs_c,ZGETRS_C)
#define zggev_c F_FUNC(zggev_c,ZGGEV_C)
#define zhbevd_c F_FUNC(zhbevd_c,ZHBEVD_C)
#define zhbevx_c F_FUNC(zhbevx_c,ZHBEVX_C)
#define zheev_c F_FUNC(zheev_c,ZHEEV_C)
#define zheevr_c F_FUNC(zheevr_c,ZHEEVR_C)
#define zhegv_c F_FUNC(zhegv_c,ZHEGV_C)
#define zhegvd_c F_FUNC(zhegvd_c,ZHEGVD_C)
#define zhegvx_c F_FUNC(zhegvx_c,ZHEGVX_C)
#define zlaswp_c F_FUNC(zlaswp_c,ZLASWP_C)
#define zlauum_c F_FUNC(zlauum_c,ZLAUUM_C)
#define zpbsv_c F_FUNC(zpbsv_c,ZPBSV_C)
#define zpbtrf_c F_FUNC(zpbtrf_c,ZPBTRF_C)
#define zpbtrs_c F_FUNC(zpbtrs_c,ZPBTRS_C)
#define zposv_c F_FUNC(zposv_c,ZPOSV_C)
#define zpotrf_c F_FUNC(zpotrf_c,ZPOTRF_C)
#define zpotri_c F_FUNC(zpotri_c,ZPOTRI_C)
#define zpotrs_c F_FUNC(zpotrs_c,ZPOTRS_C)
#define ztrtri_c F_FUNC(ztrtri_c,ZTRTRI_C)
#define ztrtrs_c F_FUNC(ztrtrs_c,ZTRTRS_C)
#define zungqr_c F_FUNC(zungqr_c,ZUNGQR_C)
#endif
