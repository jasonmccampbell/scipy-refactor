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
FORTRAN_CALLSPEC void F_FUNC(caxpy_c,CAXPY_C)(fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ccopy_c,CCOPY_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cdotc_c,CDOTC_C)(fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cdotu_c,CDOTU_C)(fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbmv_c,CGBMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgemm_c,CGEMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgemv_c,CGEMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgerc_c,CGERC_C)(fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeru_c,CGERU_C)(fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbmv_c,CHBMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chemm_c,CHEMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chemv_c,CHEMV_C)(fw_character_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cher_c,CHER_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cher2_c,CHER2_C)(fw_character_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cher2k_c,CHER2K_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cherk_c,CHERK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpmv_c,CHPMV_C)(fw_character_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpr_c,CHPR_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpr2_c,CHPR2_C)(fw_character_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(crotg_c,CROTG_C)(fwc_complex_t *, fwc_complex_t *, fwr_real_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cscal_c,CSCAL_C)(fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csrot_c,CSROT_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csscal_c,CSSCAL_C)(fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cswap_c,CSWAP_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csymm_c,CSYMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csyr2k_c,CSYR2K_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csyrk_c,CSYRK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctbmv_c,CTBMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctbsv_c,CTBSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctpmv_c,CTPMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctpsv_c,CTPSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrmm_c,CTRMM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrmv_c,CTRMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrsm_c,CTRSM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrsv_c,CTRSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dasum_c,DASUM_C)(fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(daxpy_c,DAXPY_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dcabs1_c,DCABS1_C)(fwr_dbl_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dcopy_c,DCOPY_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ddot_c,DDOT_C)(fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbmv_c,DGBMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgemm_c,DGEMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgemv_c,DGEMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dger_c,DGER_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dnrm2_c,DNRM2_C)(fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(drot_c,DROT_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(drotg_c,DROTG_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(drotm_c,DROTM_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(drotmg_c,DROTMG_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbmv_c,DSBMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dscal_c,DSCAL_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsdot_c,DSDOT_C)(fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspmv_c,DSPMV_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspr_c,DSPR_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspr2_c,DSPR2_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dswap_c,DSWAP_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsymm_c,DSYMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsymv_c,DSYMV_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyr_c,DSYR_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyr2_c,DSYR2_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyr2k_c,DSYR2K_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyrk_c,DSYRK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtbmv_c,DTBMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtbsv_c,DTBSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtpmv_c,DTPMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtpsv_c,DTPSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrmm_c,DTRMM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrmv_c,DTRMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrsm_c,DTRSM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrsv_c,DTRSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dzasum_c,DZASUM_C)(fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dznrm2_c,DZNRM2_C)(fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(icamax_c,ICAMAX_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(idamax_c,IDAMAX_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(isamax_c,ISAMAX_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(izamax_c,IZAMAX_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sasum_c,SASUM_C)(fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(saxpy_c,SAXPY_C)(fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(scabs1_c,SCABS1_C)(fwr_real_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(scasum_c,SCASUM_C)(fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(scnrm2_c,SCNRM2_C)(fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(scopy_c,SCOPY_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sdot_c,SDOT_C)(fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sdsdot_c,SDSDOT_C)(fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbmv_c,SGBMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgemm_c,SGEMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgemv_c,SGEMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sger_c,SGER_C)(fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(snrm2_c,SNRM2_C)(fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(srot_c,SROT_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(srotg_c,SROTG_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(srotm_c,SROTM_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(srotmg_c,SROTMG_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbmv_c,SSBMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sscal_c,SSCAL_C)(fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspmv_c,SSPMV_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspr_c,SSPR_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspr2_c,SSPR2_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sswap_c,SSWAP_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssymm_c,SSYMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssymv_c,SSYMV_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyr_c,SSYR_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyr2_c,SSYR2_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyr2k_c,SSYR2K_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyrk_c,SSYRK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stbmv_c,STBMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stbsv_c,STBSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stpmv_c,STPMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stpsv_c,STPSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strmm_c,STRMM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strmv_c,STRMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strsm_c,STRSM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strsv_c,STRSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(xerbla_c,XERBLA_C)(fw_shape_t *, void *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zaxpy_c,ZAXPY_C)(fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zcopy_c,ZCOPY_C)(fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zdotc_c,ZDOTC_C)(fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zdotu_c,ZDOTU_C)(fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zdrot_c,ZDROT_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zdscal_c,ZDSCAL_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbmv_c,ZGBMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgemm_c,ZGEMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgemv_c,ZGEMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgerc_c,ZGERC_C)(fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeru_c,ZGERU_C)(fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbmv_c,ZHBMV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhemm_c,ZHEMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhemv_c,ZHEMV_C)(fw_character_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zher_c,ZHER_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zher2_c,ZHER2_C)(fw_character_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zher2k_c,ZHER2K_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zherk_c,ZHERK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpmv_c,ZHPMV_C)(fw_character_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpr_c,ZHPR_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpr2_c,ZHPR2_C)(fw_character_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zrotg_c,ZROTG_C)(fwc_dbl_complex_t *, fwc_dbl_complex_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zscal_c,ZSCAL_C)(fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zswap_c,ZSWAP_C)(fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsymm_c,ZSYMM_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsyr2k_c,ZSYR2K_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsyrk_c,ZSYRK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztbmv_c,ZTBMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztbsv_c,ZTBSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztpmv_c,ZTPMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztpsv_c,ZTPSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrmm_c,ZTRMM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrmv_c,ZTRMV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrsm_c,ZTRSM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrsv_c,ZTRSV_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define caxpy_c F_FUNC(caxpy_c,CAXPY_C)
#define ccopy_c F_FUNC(ccopy_c,CCOPY_C)
#define cdotc_c F_FUNC(cdotc_c,CDOTC_C)
#define cdotu_c F_FUNC(cdotu_c,CDOTU_C)
#define cgbmv_c F_FUNC(cgbmv_c,CGBMV_C)
#define cgemm_c F_FUNC(cgemm_c,CGEMM_C)
#define cgemv_c F_FUNC(cgemv_c,CGEMV_C)
#define cgerc_c F_FUNC(cgerc_c,CGERC_C)
#define cgeru_c F_FUNC(cgeru_c,CGERU_C)
#define chbmv_c F_FUNC(chbmv_c,CHBMV_C)
#define chemm_c F_FUNC(chemm_c,CHEMM_C)
#define chemv_c F_FUNC(chemv_c,CHEMV_C)
#define cher_c F_FUNC(cher_c,CHER_C)
#define cher2_c F_FUNC(cher2_c,CHER2_C)
#define cher2k_c F_FUNC(cher2k_c,CHER2K_C)
#define cherk_c F_FUNC(cherk_c,CHERK_C)
#define chpmv_c F_FUNC(chpmv_c,CHPMV_C)
#define chpr_c F_FUNC(chpr_c,CHPR_C)
#define chpr2_c F_FUNC(chpr2_c,CHPR2_C)
#define crotg_c F_FUNC(crotg_c,CROTG_C)
#define cscal_c F_FUNC(cscal_c,CSCAL_C)
#define csrot_c F_FUNC(csrot_c,CSROT_C)
#define csscal_c F_FUNC(csscal_c,CSSCAL_C)
#define cswap_c F_FUNC(cswap_c,CSWAP_C)
#define csymm_c F_FUNC(csymm_c,CSYMM_C)
#define csyr2k_c F_FUNC(csyr2k_c,CSYR2K_C)
#define csyrk_c F_FUNC(csyrk_c,CSYRK_C)
#define ctbmv_c F_FUNC(ctbmv_c,CTBMV_C)
#define ctbsv_c F_FUNC(ctbsv_c,CTBSV_C)
#define ctpmv_c F_FUNC(ctpmv_c,CTPMV_C)
#define ctpsv_c F_FUNC(ctpsv_c,CTPSV_C)
#define ctrmm_c F_FUNC(ctrmm_c,CTRMM_C)
#define ctrmv_c F_FUNC(ctrmv_c,CTRMV_C)
#define ctrsm_c F_FUNC(ctrsm_c,CTRSM_C)
#define ctrsv_c F_FUNC(ctrsv_c,CTRSV_C)
#define dasum_c F_FUNC(dasum_c,DASUM_C)
#define daxpy_c F_FUNC(daxpy_c,DAXPY_C)
#define dcabs1_c F_FUNC(dcabs1_c,DCABS1_C)
#define dcopy_c F_FUNC(dcopy_c,DCOPY_C)
#define ddot_c F_FUNC(ddot_c,DDOT_C)
#define dgbmv_c F_FUNC(dgbmv_c,DGBMV_C)
#define dgemm_c F_FUNC(dgemm_c,DGEMM_C)
#define dgemv_c F_FUNC(dgemv_c,DGEMV_C)
#define dger_c F_FUNC(dger_c,DGER_C)
#define dnrm2_c F_FUNC(dnrm2_c,DNRM2_C)
#define drot_c F_FUNC(drot_c,DROT_C)
#define drotg_c F_FUNC(drotg_c,DROTG_C)
#define drotm_c F_FUNC(drotm_c,DROTM_C)
#define drotmg_c F_FUNC(drotmg_c,DROTMG_C)
#define dsbmv_c F_FUNC(dsbmv_c,DSBMV_C)
#define dscal_c F_FUNC(dscal_c,DSCAL_C)
#define dsdot_c F_FUNC(dsdot_c,DSDOT_C)
#define dspmv_c F_FUNC(dspmv_c,DSPMV_C)
#define dspr_c F_FUNC(dspr_c,DSPR_C)
#define dspr2_c F_FUNC(dspr2_c,DSPR2_C)
#define dswap_c F_FUNC(dswap_c,DSWAP_C)
#define dsymm_c F_FUNC(dsymm_c,DSYMM_C)
#define dsymv_c F_FUNC(dsymv_c,DSYMV_C)
#define dsyr_c F_FUNC(dsyr_c,DSYR_C)
#define dsyr2_c F_FUNC(dsyr2_c,DSYR2_C)
#define dsyr2k_c F_FUNC(dsyr2k_c,DSYR2K_C)
#define dsyrk_c F_FUNC(dsyrk_c,DSYRK_C)
#define dtbmv_c F_FUNC(dtbmv_c,DTBMV_C)
#define dtbsv_c F_FUNC(dtbsv_c,DTBSV_C)
#define dtpmv_c F_FUNC(dtpmv_c,DTPMV_C)
#define dtpsv_c F_FUNC(dtpsv_c,DTPSV_C)
#define dtrmm_c F_FUNC(dtrmm_c,DTRMM_C)
#define dtrmv_c F_FUNC(dtrmv_c,DTRMV_C)
#define dtrsm_c F_FUNC(dtrsm_c,DTRSM_C)
#define dtrsv_c F_FUNC(dtrsv_c,DTRSV_C)
#define dzasum_c F_FUNC(dzasum_c,DZASUM_C)
#define dznrm2_c F_FUNC(dznrm2_c,DZNRM2_C)
#define icamax_c F_FUNC(icamax_c,ICAMAX_C)
#define idamax_c F_FUNC(idamax_c,IDAMAX_C)
#define isamax_c F_FUNC(isamax_c,ISAMAX_C)
#define izamax_c F_FUNC(izamax_c,IZAMAX_C)
#define sasum_c F_FUNC(sasum_c,SASUM_C)
#define saxpy_c F_FUNC(saxpy_c,SAXPY_C)
#define scabs1_c F_FUNC(scabs1_c,SCABS1_C)
#define scasum_c F_FUNC(scasum_c,SCASUM_C)
#define scnrm2_c F_FUNC(scnrm2_c,SCNRM2_C)
#define scopy_c F_FUNC(scopy_c,SCOPY_C)
#define sdot_c F_FUNC(sdot_c,SDOT_C)
#define sdsdot_c F_FUNC(sdsdot_c,SDSDOT_C)
#define sgbmv_c F_FUNC(sgbmv_c,SGBMV_C)
#define sgemm_c F_FUNC(sgemm_c,SGEMM_C)
#define sgemv_c F_FUNC(sgemv_c,SGEMV_C)
#define sger_c F_FUNC(sger_c,SGER_C)
#define snrm2_c F_FUNC(snrm2_c,SNRM2_C)
#define srot_c F_FUNC(srot_c,SROT_C)
#define srotg_c F_FUNC(srotg_c,SROTG_C)
#define srotm_c F_FUNC(srotm_c,SROTM_C)
#define srotmg_c F_FUNC(srotmg_c,SROTMG_C)
#define ssbmv_c F_FUNC(ssbmv_c,SSBMV_C)
#define sscal_c F_FUNC(sscal_c,SSCAL_C)
#define sspmv_c F_FUNC(sspmv_c,SSPMV_C)
#define sspr_c F_FUNC(sspr_c,SSPR_C)
#define sspr2_c F_FUNC(sspr2_c,SSPR2_C)
#define sswap_c F_FUNC(sswap_c,SSWAP_C)
#define ssymm_c F_FUNC(ssymm_c,SSYMM_C)
#define ssymv_c F_FUNC(ssymv_c,SSYMV_C)
#define ssyr_c F_FUNC(ssyr_c,SSYR_C)
#define ssyr2_c F_FUNC(ssyr2_c,SSYR2_C)
#define ssyr2k_c F_FUNC(ssyr2k_c,SSYR2K_C)
#define ssyrk_c F_FUNC(ssyrk_c,SSYRK_C)
#define stbmv_c F_FUNC(stbmv_c,STBMV_C)
#define stbsv_c F_FUNC(stbsv_c,STBSV_C)
#define stpmv_c F_FUNC(stpmv_c,STPMV_C)
#define stpsv_c F_FUNC(stpsv_c,STPSV_C)
#define strmm_c F_FUNC(strmm_c,STRMM_C)
#define strmv_c F_FUNC(strmv_c,STRMV_C)
#define strsm_c F_FUNC(strsm_c,STRSM_C)
#define strsv_c F_FUNC(strsv_c,STRSV_C)
#define xerbla_c F_FUNC(xerbla_c,XERBLA_C)
#define zaxpy_c F_FUNC(zaxpy_c,ZAXPY_C)
#define zcopy_c F_FUNC(zcopy_c,ZCOPY_C)
#define zdotc_c F_FUNC(zdotc_c,ZDOTC_C)
#define zdotu_c F_FUNC(zdotu_c,ZDOTU_C)
#define zdrot_c F_FUNC(zdrot_c,ZDROT_C)
#define zdscal_c F_FUNC(zdscal_c,ZDSCAL_C)
#define zgbmv_c F_FUNC(zgbmv_c,ZGBMV_C)
#define zgemm_c F_FUNC(zgemm_c,ZGEMM_C)
#define zgemv_c F_FUNC(zgemv_c,ZGEMV_C)
#define zgerc_c F_FUNC(zgerc_c,ZGERC_C)
#define zgeru_c F_FUNC(zgeru_c,ZGERU_C)
#define zhbmv_c F_FUNC(zhbmv_c,ZHBMV_C)
#define zhemm_c F_FUNC(zhemm_c,ZHEMM_C)
#define zhemv_c F_FUNC(zhemv_c,ZHEMV_C)
#define zher_c F_FUNC(zher_c,ZHER_C)
#define zher2_c F_FUNC(zher2_c,ZHER2_C)
#define zher2k_c F_FUNC(zher2k_c,ZHER2K_C)
#define zherk_c F_FUNC(zherk_c,ZHERK_C)
#define zhpmv_c F_FUNC(zhpmv_c,ZHPMV_C)
#define zhpr_c F_FUNC(zhpr_c,ZHPR_C)
#define zhpr2_c F_FUNC(zhpr2_c,ZHPR2_C)
#define zrotg_c F_FUNC(zrotg_c,ZROTG_C)
#define zscal_c F_FUNC(zscal_c,ZSCAL_C)
#define zswap_c F_FUNC(zswap_c,ZSWAP_C)
#define zsymm_c F_FUNC(zsymm_c,ZSYMM_C)
#define zsyr2k_c F_FUNC(zsyr2k_c,ZSYR2K_C)
#define zsyrk_c F_FUNC(zsyrk_c,ZSYRK_C)
#define ztbmv_c F_FUNC(ztbmv_c,ZTBMV_C)
#define ztbsv_c F_FUNC(ztbsv_c,ZTBSV_C)
#define ztpmv_c F_FUNC(ztpmv_c,ZTPMV_C)
#define ztpsv_c F_FUNC(ztpsv_c,ZTPSV_C)
#define ztrmm_c F_FUNC(ztrmm_c,ZTRMM_C)
#define ztrmv_c F_FUNC(ztrmv_c,ZTRMV_C)
#define ztrsm_c F_FUNC(ztrsm_c,ZTRSM_C)
#define ztrsv_c F_FUNC(ztrsv_c,ZTRSV_C)
#endif
