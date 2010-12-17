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
FORTRAN_CALLSPEC void F_FUNC(cbbcsd_c,CBBCSD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cbdsqr_c,CBDSQR_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbbrd_c,CGBBRD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbcon_c,CGBCON_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbequ_c,CGBEQU_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbequb_c,CGBEQUB_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbrfs_c,CGBRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbrfsx_c,CGBRFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbsv_c,CGBSV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbsvx_c,CGBSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbsvxx_c,CGBSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbtf2_c,CGBTF2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbtrf_c,CGBTRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgbtrs_c,CGBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgebak_c,CGEBAK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgebal_c,CGEBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgebd2_c,CGEBD2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgebrd_c,CGEBRD_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgecon_c,CGECON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeequ_c,CGEEQU_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeequb_c,CGEEQUB_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgees_c,CGEES_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeesx_c,CGEESX_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeev_c,CGEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeevx_c,CGEEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgegs_c,CGEGS_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgegv_c,CGEGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgehd2_c,CGEHD2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgehrd_c,CGEHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgelq2_c,CGELQ2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgelqf_c,CGELQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgels_c,CGELS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgelsd_c,CGELSD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgelss_c,CGELSS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgelsx_c,CGELSX_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgelsy_c,CGELSY_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeql2_c,CGEQL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeqlf_c,CGEQLF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeqp3_c,CGEQP3_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeqpf_c,CGEQPF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeqr2_c,CGEQR2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeqr2p_c,CGEQR2P_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeqrf_c,CGEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgeqrfp_c,CGEQRFP_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgerfs_c,CGERFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgerfsx_c,CGERFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgerq2_c,CGERQ2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgerqf_c,CGERQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgesc2_c,CGESC2_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgesdd_c,CGESDD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgesv_c,CGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgesvd_c,CGESVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgesvx_c,CGESVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgesvxx_c,CGESVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgetc2_c,CGETC2_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgetf2_c,CGETF2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgetrf_c,CGETRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgetri_c,CGETRI_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgetrs_c,CGETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggbak_c,CGGBAK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggbal_c,CGGBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgges_c,CGGES_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggesx_c,CGGESX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwl_logical_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggev_c,CGGEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggevx_c,CGGEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggglm_c,CGGGLM_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgghrd_c,CGGHRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgglse_c,CGGLSE_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggqrf_c,CGGQRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggrqf_c,CGGRQF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggsvd_c,CGGSVD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cggsvp_c,CGGSVP_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgtcon_c,CGTCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgtrfs_c,CGTRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgtsv_c,CGTSV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgtsvx_c,CGTSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgttrf_c,CGTTRF_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgttrs_c,CGTTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgtts2_c,CGTTS2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbev_c,CHBEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbevd_c,CHBEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbevx_c,CHBEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbgst_c,CHBGST_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbgv_c,CHBGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbgvd_c,CHBGVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbgvx_c,CHBGVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chbtrd_c,CHBTRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(checon_c,CHECON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cheequb_c,CHEEQUB_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cheev_c,CHEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cheevd_c,CHEEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cheevr_c,CHEEVR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cheevx_c,CHEEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chegs2_c,CHEGS2_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chegst_c,CHEGST_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chegv_c,CHEGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chegvd_c,CHEGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chegvx_c,CHEGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cherfs_c,CHERFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cherfsx_c,CHERFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chesv_c,CHESV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chesvx_c,CHESVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chesvxx_c,CHESVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chetd2_c,CHETD2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chetf2_c,CHETF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chetrd_c,CHETRD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chetrf_c,CHETRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chetri_c,CHETRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chetrs_c,CHETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chetrs2_c,CHETRS2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chfrk_c,CHFRK_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chgeqz_c,CHGEQZ_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chla_transtype_c,CHLA_TRANSTYPE_C)(fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpcon_c,CHPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpev_c,CHPEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpevd_c,CHPEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpevx_c,CHPEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpgst_c,CHPGST_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpgv_c,CHPGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpgvd_c,CHPGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpgvx_c,CHPGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chprfs_c,CHPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpsv_c,CHPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chpsvx_c,CHPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chptrd_c,CHPTRD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chptrf_c,CHPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chptri_c,CHPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chptrs_c,CHPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chsein_c,CHSEIN_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chseqr_c,CHSEQR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_gbamv_c,CLA_GBAMV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_gbrcond_c_c,CLA_GBRCOND_C_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_gbrcond_x_c,CLA_GBRCOND_X_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_gbrfsx_extended_c,CLA_GBRFSX_EXTENDED_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_gbrpvgrw_c,CLA_GBRPVGRW_C)(fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_geamv_c,CLA_GEAMV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_gercond_c_c,CLA_GERCOND_C_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_gercond_x_c,CLA_GERCOND_X_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_gerfsx_extended_c,CLA_GERFSX_EXTENDED_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_heamv_c,CLA_HEAMV_C)(fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_hercond_c_c,CLA_HERCOND_C_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_hercond_x_c,CLA_HERCOND_X_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_herfsx_extended_c,CLA_HERFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_herpvgrw_c,CLA_HERPVGRW_C)(fwr_real_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_lin_berr_c,CLA_LIN_BERR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_porcond_c_c,CLA_PORCOND_C_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_porcond_x_c,CLA_PORCOND_X_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_porfsx_extended_c,CLA_PORFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_porpvgrw_c,CLA_PORPVGRW_C)(fwr_real_t *, fw_character_x1_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_rpvgrw_c,CLA_RPVGRW_C)(fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_syamv_c,CLA_SYAMV_C)(fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_syrcond_c_c,CLA_SYRCOND_C_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_syrcond_x_c,CLA_SYRCOND_X_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_syrfsx_extended_c,CLA_SYRFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_syrpvgrw_c,CLA_SYRPVGRW_C)(fwr_real_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cla_wwaddw_c,CLA_WWADDW_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clabrd_c,CLABRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clacgv_c,CLACGV_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clacn2_c,CLACN2_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clacon_c,CLACON_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clacp2_c,CLACP2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clacpy_c,CLACPY_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clacrm_c,CLACRM_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clacrt_c,CLACRT_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cladiv_c,CLADIV_C)(fwc_complex_t *, fwc_complex_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claed0_c,CLAED0_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claed7_c,CLAED7_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claed8_c,CLAED8_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claein_c,CLAEIN_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claesy_c,CLAESY_C)(fwc_complex_t *, fwc_complex_t *, fwc_complex_t *, fwc_complex_t *, fwc_complex_t *, fwc_complex_t *, fwc_complex_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claev2_c,CLAEV2_C)(fwc_complex_t *, fwc_complex_t *, fwc_complex_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clag2z_c,CLAG2Z_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clags2_c,CLAGS2_C)(fwl_logical_t *, fwr_real_t *, fwc_complex_t *, fwr_real_t *, fwr_real_t *, fwc_complex_t *, fwr_real_t *, fwr_real_t *, fwc_complex_t *, fwr_real_t *, fwc_complex_t *, fwr_real_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clagtm_c,CLAGTM_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clahef_c,CLAHEF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clahqr_c,CLAHQR_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clahr2_c,CLAHR2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clahrd_c,CLAHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claic1_c,CLAIC1_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwc_complex_t *, fwr_real_t *, fwc_complex_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clals0_c,CLALS0_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clalsa_c,CLALSA_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clalsd_c,CLALSD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clangb_c,CLANGB_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clange_c,CLANGE_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clangt_c,CLANGT_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clanhb_c,CLANHB_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clanhe_c,CLANHE_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clanhf_c,CLANHF_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clanhp_c,CLANHP_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clanhs_c,CLANHS_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clanht_c,CLANHT_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clansb_c,CLANSB_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clansp_c,CLANSP_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clansy_c,CLANSY_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clantb_c,CLANTB_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clantp_c,CLANTP_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clantr_c,CLANTR_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clapll_c,CLAPLL_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clapmr_c,CLAPMR_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clapmt_c,CLAPMT_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqgb_c,CLAQGB_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqge_c,CLAQGE_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqhb_c,CLAQHB_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqhe_c,CLAQHE_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqhp_c,CLAQHP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqp2_c,CLAQP2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqps_c,CLAQPS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqr0_c,CLAQR0_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqr1_c,CLAQR1_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqr2_c,CLAQR2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqr3_c,CLAQR3_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqr4_c,CLAQR4_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqr5_c,CLAQR5_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqsb_c,CLAQSB_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqsp_c,CLAQSP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claqsy_c,CLAQSY_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clar1v_c,CLAR1V_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwl_logical_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clar2v_c,CLAR2V_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarcm_c,CLARCM_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarf_c,CLARF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarfb_c,CLARFB_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarfg_c,CLARFG_C)(fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarfgp_c,CLARFGP_C)(fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarft_c,CLARFT_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarfx_c,CLARFX_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clargv_c,CLARGV_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarnv_c,CLARNV_C)(fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarrv_c,CLARRV_C)(fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarscl2_c,CLARSCL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clartg_c,CLARTG_C)(fwc_complex_t *, fwc_complex_t *, fwr_real_t *, fwc_complex_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clartv_c,CLARTV_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarz_c,CLARZ_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarzb_c,CLARZB_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clarzt_c,CLARZT_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clascl_c,CLASCL_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clascl2_c,CLASCL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claset_c,CLASET_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clasr_c,CLASR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(classq_c,CLASSQ_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(claswp_c,CLASWP_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clasyf_c,CLASYF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clatbs_c,CLATBS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clatdf_c,CLATDF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clatps_c,CLATPS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clatrd_c,CLATRD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clatrs_c,CLATRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clatrz_c,CLATRZ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clatzm_c,CLATZM_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clauu2_c,CLAUU2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clauum_c,CLAUUM_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbcon_c,CPBCON_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbequ_c,CPBEQU_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbrfs_c,CPBRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbstf_c,CPBSTF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbsv_c,CPBSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbsvx_c,CPBSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbtf2_c,CPBTF2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbtrf_c,CPBTRF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbtrs_c,CPBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpftrf_c,CPFTRF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpftri_c,CPFTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpftrs_c,CPFTRS_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpocon_c,CPOCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpoequ_c,CPOEQU_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpoequb_c,CPOEQUB_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cporfs_c,CPORFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cporfsx_c,CPORFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cposv_c,CPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cposvx_c,CPOSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cposvxx_c,CPOSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpotf2_c,CPOTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpotrf_c,CPOTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpotri_c,CPOTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpotrs_c,CPOTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cppcon_c,CPPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cppequ_c,CPPEQU_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpprfs_c,CPPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cppsv_c,CPPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cppsvx_c,CPPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpptrf_c,CPPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpptri_c,CPPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpptrs_c,CPPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpstf2_c,CPSTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpstrf_c,CPSTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cptcon_c,CPTCON_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpteqr_c,CPTEQR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cptrfs_c,CPTRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cptsv_c,CPTSV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cptsvx_c,CPTSVX_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpttrf_c,CPTTRF_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpttrs_c,CPTTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cptts2_c,CPTTS2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(crot_c,CROT_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cspcon_c,CSPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cspmv_c,CSPMV_C)(fw_character_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cspr_c,CSPR_C)(fw_character_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csprfs_c,CSPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cspsv_c,CSPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cspsvx_c,CSPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csptrf_c,CSPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csptri_c,CSPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csptrs_c,CSPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csrscl_c,CSRSCL_C)(fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cstedc_c,CSTEDC_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cstegr_c,CSTEGR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cstein_c,CSTEIN_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cstemr_c,CSTEMR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csteqr_c,CSTEQR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csycon_c,CSYCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csyconv_c,CSYCONV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csyequb_c,CSYEQUB_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csymv_c,CSYMV_C)(fw_character_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csyr_c,CSYR_C)(fw_character_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csyrfs_c,CSYRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csyrfsx_c,CSYRFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csysv_c,CSYSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csysvx_c,CSYSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csysvxx_c,CSYSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csyswapr_c,CSYSWAPR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csytf2_c,CSYTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csytrf_c,CSYTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csytri_c,CSYTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csytri2_c,CSYTRI2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csytri2x_c,CSYTRI2X_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csytrs_c,CSYTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csytrs2_c,CSYTRS2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctbcon_c,CTBCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctbrfs_c,CTBRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctbtrs_c,CTBTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctfsm_c,CTFSM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctftri_c,CTFTRI_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctfttp_c,CTFTTP_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctfttr_c,CTFTTR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctgevc_c,CTGEVC_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctgex2_c,CTGEX2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctgexc_c,CTGEXC_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctgsen_c,CTGSEN_C)(fwi_integer_t *, fwl_logical_t *, fwl_logical_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctgsja_c,CTGSJA_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctgsna_c,CTGSNA_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctgsy2_c,CTGSY2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctgsyl_c,CTGSYL_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctpcon_c,CTPCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctprfs_c,CTPRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctptri_c,CTPTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctptrs_c,CTPTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctpttf_c,CTPTTF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctpttr_c,CTPTTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrcon_c,CTRCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrevc_c,CTREVC_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrexc_c,CTREXC_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrrfs_c,CTRRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrsen_c,CTRSEN_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrsna_c,CTRSNA_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrsyl_c,CTRSYL_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrti2_c,CTRTI2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrtri_c,CTRTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrtrs_c,CTRTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrttf_c,CTRTTF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctrttp_c,CTRTTP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctzrqf_c,CTZRQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ctzrzf_c,CTZRZF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunbdb_c,CUNBDB_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cuncsd_c,CUNCSD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cung2l_c,CUNG2L_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cung2r_c,CUNG2R_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cungbr_c,CUNGBR_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunghr_c,CUNGHR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cungl2_c,CUNGL2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunglq_c,CUNGLQ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cungql_c,CUNGQL_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cungqr_c,CUNGQR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cungr2_c,CUNGR2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cungrq_c,CUNGRQ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cungtr_c,CUNGTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunm2l_c,CUNM2L_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunm2r_c,CUNM2R_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmbr_c,CUNMBR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmhr_c,CUNMHR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunml2_c,CUNML2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmlq_c,CUNMLQ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmql_c,CUNMQL_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmqr_c,CUNMQR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmr2_c,CUNMR2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmr3_c,CUNMR3_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmrq_c,CUNMRQ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmrz_c,CUNMRZ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cunmtr_c,CUNMTR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cupgtr_c,CUPGTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cupmtr_c,CUPMTR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dbbcsd_c,DBBCSD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dbdsdc_c,DBDSDC_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dbdsqr_c,DBDSQR_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ddisna_c,DDISNA_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbbrd_c,DGBBRD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbcon_c,DGBCON_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbequ_c,DGBEQU_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbequb_c,DGBEQUB_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbrfs_c,DGBRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbrfsx_c,DGBRFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbsv_c,DGBSV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbsvx_c,DGBSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbsvxx_c,DGBSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbtf2_c,DGBTF2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbtrf_c,DGBTRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgbtrs_c,DGBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgebak_c,DGEBAK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgebal_c,DGEBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgebd2_c,DGEBD2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgebrd_c,DGEBRD_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgecon_c,DGECON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeequ_c,DGEEQU_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeequb_c,DGEEQUB_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgees_c,DGEES_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeesx_c,DGEESX_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeev_c,DGEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeevx_c,DGEEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgegs_c,DGEGS_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgegv_c,DGEGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgehd2_c,DGEHD2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgehrd_c,DGEHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgejsv_c,DGEJSV_C)(fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgelq2_c,DGELQ2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgelqf_c,DGELQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgels_c,DGELS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgelsd_c,DGELSD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgelss_c,DGELSS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgelsx_c,DGELSX_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgelsy_c,DGELSY_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeql2_c,DGEQL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeqlf_c,DGEQLF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeqp3_c,DGEQP3_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeqpf_c,DGEQPF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeqr2_c,DGEQR2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeqr2p_c,DGEQR2P_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeqrf_c,DGEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgeqrfp_c,DGEQRFP_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgerfs_c,DGERFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgerfsx_c,DGERFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgerq2_c,DGERQ2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgerqf_c,DGERQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesc2_c,DGESC2_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesdd_c,DGESDD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesv_c,DGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesvd_c,DGESVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesvj_c,DGESVJ_C)(fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesvx_c,DGESVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgesvxx_c,DGESVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgetc2_c,DGETC2_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgetf2_c,DGETF2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgetrf_c,DGETRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgetri_c,DGETRI_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgetrs_c,DGETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggbak_c,DGGBAK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggbal_c,DGGBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgges_c,DGGES_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggesx_c,DGGESX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwl_logical_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggev_c,DGGEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggevx_c,DGGEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggglm_c,DGGGLM_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgghrd_c,DGGHRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgglse_c,DGGLSE_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggqrf_c,DGGQRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggrqf_c,DGGRQF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggsvd_c,DGGSVD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dggsvp_c,DGGSVP_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgsvj0_c,DGSVJ0_C)(fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgsvj1_c,DGSVJ1_C)(fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgtcon_c,DGTCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgtrfs_c,DGTRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgtsv_c,DGTSV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgtsvx_c,DGTSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgttrf_c,DGTTRF_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgttrs_c,DGTTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dgtts2_c,DGTTS2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dhgeqz_c,DHGEQZ_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dhsein_c,DHSEIN_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dhseqr_c,DHSEQR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(disnan_c,DISNAN_C)(fwl_logical_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_gbamv_c,DLA_GBAMV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_gbrcond_c,DLA_GBRCOND_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_gbrfsx_extended_c,DLA_GBRFSX_EXTENDED_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_gbrpvgrw_c,DLA_GBRPVGRW_C)(fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_geamv_c,DLA_GEAMV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_gercond_c,DLA_GERCOND_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_gerfsx_extended_c,DLA_GERFSX_EXTENDED_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_lin_berr_c,DLA_LIN_BERR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_porcond_c,DLA_PORCOND_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_porfsx_extended_c,DLA_PORFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_porpvgrw_c,DLA_PORPVGRW_C)(fwr_dbl_t *, fw_character_x1_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_rpvgrw_c,DLA_RPVGRW_C)(fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_syamv_c,DLA_SYAMV_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_syrcond_c,DLA_SYRCOND_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_syrfsx_extended_c,DLA_SYRFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_syrpvgrw_c,DLA_SYRPVGRW_C)(fwr_dbl_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dla_wwaddw_c,DLA_WWADDW_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlabad_c,DLABAD_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlabrd_c,DLABRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlacn2_c,DLACN2_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlacon_c,DLACON_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlacpy_c,DLACPY_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dladiv_c,DLADIV_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlae2_c,DLAE2_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaebz_c,DLAEBZ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed0_c,DLAED0_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed1_c,DLAED1_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed2_c,DLAED2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed3_c,DLAED3_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed4_c,DLAED4_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed5_c,DLAED5_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed6_c,DLAED6_C)(fwi_integer_t *, fwl_logical_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed7_c,DLAED7_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed8_c,DLAED8_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaed9_c,DLAED9_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaeda_c,DLAEDA_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaein_c,DLAEIN_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaev2_c,DLAEV2_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaexc_c,DLAEXC_C)(fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlag2_c,DLAG2_C)(fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlag2s_c,DLAG2S_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlags2_c,DLAGS2_C)(fwl_logical_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlagtf_c,DLAGTF_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlagtm_c,DLAGTM_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlagts_c,DLAGTS_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlagv2_c,DLAGV2_C)(fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlahqr_c,DLAHQR_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlahr2_c,DLAHR2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlahrd_c,DLAHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaic1_c,DLAIC1_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaisnan_c,DLAISNAN_C)(fwl_logical_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaln2_c,DLALN2_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlals0_c,DLALS0_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlalsa_c,DLALSA_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlalsd_c,DLALSD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlamrg_c,DLAMRG_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaneg_c,DLANEG_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlangb_c,DLANGB_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlange_c,DLANGE_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlangt_c,DLANGT_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlanhs_c,DLANHS_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlansb_c,DLANSB_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlansf_c,DLANSF_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlansp_c,DLANSP_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlanst_c,DLANST_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlansy_c,DLANSY_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlantb_c,DLANTB_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlantp_c,DLANTP_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlantr_c,DLANTR_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlanv2_c,DLANV2_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlapll_c,DLAPLL_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlapmr_c,DLAPMR_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlapmt_c,DLAPMT_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlapy2_c,DLAPY2_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlapy3_c,DLAPY3_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqgb_c,DLAQGB_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqge_c,DLAQGE_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqp2_c,DLAQP2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqps_c,DLAQPS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqr0_c,DLAQR0_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqr1_c,DLAQR1_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqr2_c,DLAQR2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqr3_c,DLAQR3_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqr4_c,DLAQR4_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqr5_c,DLAQR5_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqsb_c,DLAQSB_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqsp_c,DLAQSP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqsy_c,DLAQSY_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaqtr_c,DLAQTR_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlar1v_c,DLAR1V_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlar2v_c,DLAR2V_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarf_c,DLARF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarfb_c,DLARFB_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarfg_c,DLARFG_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarfgp_c,DLARFGP_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarft_c,DLARFT_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarfx_c,DLARFX_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlargv_c,DLARGV_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarnv_c,DLARNV_C)(fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarra_c,DLARRA_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarrb_c,DLARRB_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarrc_c,DLARRC_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarrd_c,DLARRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarre_c,DLARRE_C)(fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarrf_c,DLARRF_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarrj_c,DLARRJ_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarrk_c,DLARRK_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarrr_c,DLARRR_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarrv_c,DLARRV_C)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarscl2_c,DLARSCL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlartg_c,DLARTG_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlartgp_c,DLARTGP_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlartgs_c,DLARTGS_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlartv_c,DLARTV_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaruv_c,DLARUV_C)(fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarz_c,DLARZ_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarzb_c,DLARZB_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlarzt_c,DLARZT_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlas2_c,DLAS2_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlascl_c,DLASCL_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlascl2_c,DLASCL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd0_c,DLASD0_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd1_c,DLASD1_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd2_c,DLASD2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd3_c,DLASD3_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd4_c,DLASD4_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd5_c,DLASD5_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd6_c,DLASD6_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd7_c,DLASD7_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasd8_c,DLASD8_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasda_c,DLASDA_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasdq_c,DLASDQ_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasdt_c,DLASDT_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaset_c,DLASET_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasq1_c,DLASQ1_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasq2_c,DLASQ2_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasq3_c,DLASQ3_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwl_logical_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasq4_c,DLASQ4_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasq5_c,DLASQ5_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasq6_c,DLASQ6_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasr_c,DLASR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasrt_c,DLASRT_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlassq_c,DLASSQ_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasv2_c,DLASV2_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlaswp_c,DLASWP_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasy2_c,DLASY2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlasyf_c,DLASYF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlat2s_c,DLAT2S_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlatbs_c,DLATBS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlatdf_c,DLATDF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlatps_c,DLATPS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlatrd_c,DLATRD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlatrs_c,DLATRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlatrz_c,DLATRZ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlatzm_c,DLATZM_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlauu2_c,DLAUU2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dlauum_c,DLAUUM_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dopgtr_c,DOPGTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dopmtr_c,DOPMTR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorbdb_c,DORBDB_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorcsd_c,DORCSD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorg2l_c,DORG2L_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorg2r_c,DORG2R_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorgbr_c,DORGBR_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorghr_c,DORGHR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorgl2_c,DORGL2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorglq_c,DORGLQ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorgql_c,DORGQL_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorgqr_c,DORGQR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorgr2_c,DORGR2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorgrq_c,DORGRQ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorgtr_c,DORGTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorm2l_c,DORM2L_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorm2r_c,DORM2R_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormbr_c,DORMBR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormhr_c,DORMHR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dorml2_c,DORML2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormlq_c,DORMLQ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormql_c,DORMQL_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormqr_c,DORMQR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormr2_c,DORMR2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormr3_c,DORMR3_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormrq_c,DORMRQ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormrz_c,DORMRZ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dormtr_c,DORMTR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbcon_c,DPBCON_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbequ_c,DPBEQU_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbrfs_c,DPBRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbstf_c,DPBSTF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbsv_c,DPBSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbsvx_c,DPBSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbtf2_c,DPBTF2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbtrf_c,DPBTRF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpbtrs_c,DPBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpftrf_c,DPFTRF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpftri_c,DPFTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpftrs_c,DPFTRS_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpocon_c,DPOCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpoequ_c,DPOEQU_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpoequb_c,DPOEQUB_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dporfs_c,DPORFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dporfsx_c,DPORFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dposv_c,DPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dposvx_c,DPOSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dposvxx_c,DPOSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpotf2_c,DPOTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpotrf_c,DPOTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpotri_c,DPOTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpotrs_c,DPOTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dppcon_c,DPPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dppequ_c,DPPEQU_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpprfs_c,DPPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dppsv_c,DPPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dppsvx_c,DPPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpptrf_c,DPPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpptri_c,DPPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpptrs_c,DPPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpstf2_c,DPSTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpstrf_c,DPSTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dptcon_c,DPTCON_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpteqr_c,DPTEQR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dptrfs_c,DPTRFS_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dptsv_c,DPTSV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dptsvx_c,DPTSVX_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpttrf_c,DPTTRF_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dpttrs_c,DPTTRS_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dptts2_c,DPTTS2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(drscl_c,DRSCL_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbev_c,DSBEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbevd_c,DSBEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbevx_c,DSBEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbgst_c,DSBGST_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbgv_c,DSBGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbgvd_c,DSBGVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbgvx_c,DSBGVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsbtrd_c,DSBTRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsfrk_c,DSFRK_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsgesv_c,DSGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspcon_c,DSPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspev_c,DSPEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspevd_c,DSPEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspevx_c,DSPEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspgst_c,DSPGST_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspgv_c,DSPGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspgvd_c,DSPGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspgvx_c,DSPGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsposv_c,DSPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsprfs_c,DSPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspsv_c,DSPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dspsvx_c,DSPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsptrd_c,DSPTRD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsptrf_c,DSPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsptri_c,DSPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsptrs_c,DSPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstebz_c,DSTEBZ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstedc_c,DSTEDC_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstegr_c,DSTEGR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstein_c,DSTEIN_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstemr_c,DSTEMR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsteqr_c,DSTEQR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsterf_c,DSTERF_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstev_c,DSTEV_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstevd_c,DSTEVD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstevr_c,DSTEVR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dstevx_c,DSTEVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsycon_c,DSYCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyconv_c,DSYCONV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyequb_c,DSYEQUB_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyev_c,DSYEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyevd_c,DSYEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyevr_c,DSYEVR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyevx_c,DSYEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsygs2_c,DSYGS2_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsygst_c,DSYGST_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsygv_c,DSYGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsygvd_c,DSYGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsygvx_c,DSYGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyrfs_c,DSYRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyrfsx_c,DSYRFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsysv_c,DSYSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsysvx_c,DSYSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsysvxx_c,DSYSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsyswapr_c,DSYSWAPR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytd2_c,DSYTD2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytf2_c,DSYTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytrd_c,DSYTRD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytrf_c,DSYTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytri_c,DSYTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytri2_c,DSYTRI2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytri2x_c,DSYTRI2X_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytrs_c,DSYTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dsytrs2_c,DSYTRS2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtbcon_c,DTBCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtbrfs_c,DTBRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtbtrs_c,DTBTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtfsm_c,DTFSM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtftri_c,DTFTRI_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtfttp_c,DTFTTP_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtfttr_c,DTFTTR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtgevc_c,DTGEVC_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtgex2_c,DTGEX2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtgexc_c,DTGEXC_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtgsen_c,DTGSEN_C)(fwi_integer_t *, fwl_logical_t *, fwl_logical_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtgsja_c,DTGSJA_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtgsna_c,DTGSNA_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtgsy2_c,DTGSY2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtgsyl_c,DTGSYL_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtpcon_c,DTPCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtprfs_c,DTPRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtptri_c,DTPTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtptrs_c,DTPTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtpttf_c,DTPTTF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtpttr_c,DTPTTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrcon_c,DTRCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrevc_c,DTREVC_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrexc_c,DTREXC_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrrfs_c,DTRRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrsen_c,DTRSEN_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrsna_c,DTRSNA_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrsyl_c,DTRSYL_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrti2_c,DTRTI2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrtri_c,DTRTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrtrs_c,DTRTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrttf_c,DTRTTF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtrttp_c,DTRTTP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtzrqf_c,DTZRQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dtzrzf_c,DTZRZF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dzsum1_c,DZSUM1_C)(fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(icmax1_c,ICMAX1_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ieeeck_c,IEEECK_C)(fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilaclc_c,ILACLC_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilaclr_c,ILACLR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(iladiag_c,ILADIAG_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(iladlc_c,ILADLC_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(iladlr_c,ILADLR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilaenv_c,ILAENV_C)(fwi_integer_t *, fwi_integer_t *, fw_character_xX_t *, fw_character_xX_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilaprec_c,ILAPREC_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilaslc_c,ILASLC_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilaslr_c,ILASLR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilatrans_c,ILATRANS_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilauplo_c,ILAUPLO_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilaver_c,ILAVER_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilazlc_c,ILAZLC_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ilazlr_c,ILAZLR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(iparmq_c,IPARMQ_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(izmax1_c,IZMAX1_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lsamen_c,LSAMEN_C)(fwl_logical_t *, fwi_integer_t *, fw_character_xX_t *, fw_character_xX_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sbbcsd_c,SBBCSD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sbdsdc_c,SBDSDC_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sbdsqr_c,SBDSQR_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(scsum1_c,SCSUM1_C)(fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sdisna_c,SDISNA_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbbrd_c,SGBBRD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbcon_c,SGBCON_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbequ_c,SGBEQU_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbequb_c,SGBEQUB_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbrfs_c,SGBRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbrfsx_c,SGBRFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbsv_c,SGBSV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbsvx_c,SGBSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbsvxx_c,SGBSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbtf2_c,SGBTF2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbtrf_c,SGBTRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgbtrs_c,SGBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgebak_c,SGEBAK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgebal_c,SGEBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgebd2_c,SGEBD2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgebrd_c,SGEBRD_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgecon_c,SGECON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeequ_c,SGEEQU_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeequb_c,SGEEQUB_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgees_c,SGEES_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeesx_c,SGEESX_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeev_c,SGEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeevx_c,SGEEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgegs_c,SGEGS_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgegv_c,SGEGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgehd2_c,SGEHD2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgehrd_c,SGEHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgejsv_c,SGEJSV_C)(fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgelq2_c,SGELQ2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgelqf_c,SGELQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgels_c,SGELS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgelsd_c,SGELSD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgelss_c,SGELSS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgelsx_c,SGELSX_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgelsy_c,SGELSY_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeql2_c,SGEQL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeqlf_c,SGEQLF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeqp3_c,SGEQP3_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeqpf_c,SGEQPF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeqr2_c,SGEQR2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeqr2p_c,SGEQR2P_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeqrf_c,SGEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgeqrfp_c,SGEQRFP_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgerfs_c,SGERFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgerfsx_c,SGERFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgerq2_c,SGERQ2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgerqf_c,SGERQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesc2_c,SGESC2_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesdd_c,SGESDD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesv_c,SGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesvd_c,SGESVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesvj_c,SGESVJ_C)(fw_character_x1_t *, fw_character_x1_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesvx_c,SGESVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgesvxx_c,SGESVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgetc2_c,SGETC2_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgetf2_c,SGETF2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgetrf_c,SGETRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgetri_c,SGETRI_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgetrs_c,SGETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggbak_c,SGGBAK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggbal_c,SGGBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgges_c,SGGES_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggesx_c,SGGESX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwl_logical_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggev_c,SGGEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggevx_c,SGGEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggglm_c,SGGGLM_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgghrd_c,SGGHRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgglse_c,SGGLSE_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggqrf_c,SGGQRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggrqf_c,SGGRQF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggsvd_c,SGGSVD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sggsvp_c,SGGSVP_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgsvj0_c,SGSVJ0_C)(fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgsvj1_c,SGSVJ1_C)(fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgtcon_c,SGTCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgtrfs_c,SGTRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgtsv_c,SGTSV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgtsvx_c,SGTSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgttrf_c,SGTTRF_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgttrs_c,SGTTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sgtts2_c,SGTTS2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(shgeqz_c,SHGEQZ_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(shsein_c,SHSEIN_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(shseqr_c,SHSEQR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sisnan_c,SISNAN_C)(fwl_logical_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_gbamv_c,SLA_GBAMV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_gbrcond_c,SLA_GBRCOND_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_gbrfsx_extended_c,SLA_GBRFSX_EXTENDED_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_gbrpvgrw_c,SLA_GBRPVGRW_C)(fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_geamv_c,SLA_GEAMV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_gercond_c,SLA_GERCOND_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_gerfsx_extended_c,SLA_GERFSX_EXTENDED_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_lin_berr_c,SLA_LIN_BERR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_porcond_c,SLA_PORCOND_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_porfsx_extended_c,SLA_PORFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_porpvgrw_c,SLA_PORPVGRW_C)(fwr_real_t *, fw_character_x1_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_rpvgrw_c,SLA_RPVGRW_C)(fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_syamv_c,SLA_SYAMV_C)(fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_syrcond_c,SLA_SYRCOND_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_syrfsx_extended_c,SLA_SYRFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_syrpvgrw_c,SLA_SYRPVGRW_C)(fwr_real_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sla_wwaddw_c,SLA_WWADDW_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slabad_c,SLABAD_C)(fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slabrd_c,SLABRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slacn2_c,SLACN2_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slacon_c,SLACON_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slacpy_c,SLACPY_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sladiv_c,SLADIV_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slae2_c,SLAE2_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaebz_c,SLAEBZ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed0_c,SLAED0_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed1_c,SLAED1_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed2_c,SLAED2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed3_c,SLAED3_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed4_c,SLAED4_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed5_c,SLAED5_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed6_c,SLAED6_C)(fwi_integer_t *, fwl_logical_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed7_c,SLAED7_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed8_c,SLAED8_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaed9_c,SLAED9_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaeda_c,SLAEDA_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaein_c,SLAEIN_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaev2_c,SLAEV2_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaexc_c,SLAEXC_C)(fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slag2_c,SLAG2_C)(fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slag2d_c,SLAG2D_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slags2_c,SLAGS2_C)(fwl_logical_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slagtf_c,SLAGTF_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slagtm_c,SLAGTM_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slagts_c,SLAGTS_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slagv2_c,SLAGV2_C)(fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slahqr_c,SLAHQR_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slahr2_c,SLAHR2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slahrd_c,SLAHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaic1_c,SLAIC1_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaisnan_c,SLAISNAN_C)(fwl_logical_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaln2_c,SLALN2_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slals0_c,SLALS0_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slalsa_c,SLALSA_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slalsd_c,SLALSD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slamrg_c,SLAMRG_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaneg_c,SLANEG_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slangb_c,SLANGB_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slange_c,SLANGE_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slangt_c,SLANGT_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slanhs_c,SLANHS_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slansb_c,SLANSB_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slansf_c,SLANSF_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slansp_c,SLANSP_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slanst_c,SLANST_C)(fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slansy_c,SLANSY_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slantb_c,SLANTB_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slantp_c,SLANTP_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slantr_c,SLANTR_C)(fwr_real_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slanv2_c,SLANV2_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slapll_c,SLAPLL_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slapmr_c,SLAPMR_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slapmt_c,SLAPMT_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slapy2_c,SLAPY2_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slapy3_c,SLAPY3_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqgb_c,SLAQGB_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqge_c,SLAQGE_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqp2_c,SLAQP2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqps_c,SLAQPS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqr0_c,SLAQR0_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqr1_c,SLAQR1_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqr2_c,SLAQR2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqr3_c,SLAQR3_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqr4_c,SLAQR4_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqr5_c,SLAQR5_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqsb_c,SLAQSB_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqsp_c,SLAQSP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqsy_c,SLAQSY_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaqtr_c,SLAQTR_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slar1v_c,SLAR1V_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slar2v_c,SLAR2V_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarf_c,SLARF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarfb_c,SLARFB_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarfg_c,SLARFG_C)(fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarfgp_c,SLARFGP_C)(fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarft_c,SLARFT_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarfx_c,SLARFX_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slargv_c,SLARGV_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarnv_c,SLARNV_C)(fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarra_c,SLARRA_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarrb_c,SLARRB_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarrc_c,SLARRC_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarrd_c,SLARRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarre_c,SLARRE_C)(fw_character_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarrf_c,SLARRF_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarrj_c,SLARRJ_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarrk_c,SLARRK_C)(fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarrr_c,SLARRR_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarrv_c,SLARRV_C)(fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarscl2_c,SLARSCL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slartg_c,SLARTG_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slartgp_c,SLARTGP_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slartgs_c,SLARTGS_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slartv_c,SLARTV_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaruv_c,SLARUV_C)(fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarz_c,SLARZ_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarzb_c,SLARZB_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slarzt_c,SLARZT_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slas2_c,SLAS2_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slascl_c,SLASCL_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slascl2_c,SLASCL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd0_c,SLASD0_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd1_c,SLASD1_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd2_c,SLASD2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd3_c,SLASD3_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd4_c,SLASD4_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd5_c,SLASD5_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd6_c,SLASD6_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd7_c,SLASD7_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasd8_c,SLASD8_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasda_c,SLASDA_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasdq_c,SLASDQ_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasdt_c,SLASDT_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaset_c,SLASET_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasq1_c,SLASQ1_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasq2_c,SLASQ2_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasq3_c,SLASQ3_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwl_logical_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasq4_c,SLASQ4_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasq5_c,SLASQ5_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwl_logical_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasq6_c,SLASQ6_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasr_c,SLASR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasrt_c,SLASRT_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slassq_c,SLASSQ_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasv2_c,SLASV2_C)(fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slaswp_c,SLASWP_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasy2_c,SLASY2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slasyf_c,SLASYF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slatbs_c,SLATBS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slatdf_c,SLATDF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slatps_c,SLATPS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slatrd_c,SLATRD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slatrs_c,SLATRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slatrz_c,SLATRZ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slatzm_c,SLATZM_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slauu2_c,SLAUU2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(slauum_c,SLAUUM_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sopgtr_c,SOPGTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sopmtr_c,SOPMTR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorbdb_c,SORBDB_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorcsd_c,SORCSD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorg2l_c,SORG2L_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorg2r_c,SORG2R_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorgbr_c,SORGBR_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorghr_c,SORGHR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorgl2_c,SORGL2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorglq_c,SORGLQ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorgql_c,SORGQL_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorgqr_c,SORGQR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorgr2_c,SORGR2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorgrq_c,SORGRQ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorgtr_c,SORGTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorm2l_c,SORM2L_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorm2r_c,SORM2R_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormbr_c,SORMBR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormhr_c,SORMHR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sorml2_c,SORML2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormlq_c,SORMLQ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormql_c,SORMQL_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormqr_c,SORMQR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormr2_c,SORMR2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormr3_c,SORMR3_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormrq_c,SORMRQ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormrz_c,SORMRZ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sormtr_c,SORMTR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbcon_c,SPBCON_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbequ_c,SPBEQU_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbrfs_c,SPBRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbstf_c,SPBSTF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbsv_c,SPBSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbsvx_c,SPBSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbtf2_c,SPBTF2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbtrf_c,SPBTRF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spbtrs_c,SPBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spftrf_c,SPFTRF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spftri_c,SPFTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spftrs_c,SPFTRS_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spocon_c,SPOCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spoequ_c,SPOEQU_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spoequb_c,SPOEQUB_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sporfs_c,SPORFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sporfsx_c,SPORFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sposv_c,SPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sposvx_c,SPOSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sposvxx_c,SPOSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spotf2_c,SPOTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spotrf_c,SPOTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spotri_c,SPOTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spotrs_c,SPOTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sppcon_c,SPPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sppequ_c,SPPEQU_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spprfs_c,SPPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sppsv_c,SPPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sppsvx_c,SPPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spptrf_c,SPPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spptri_c,SPPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spptrs_c,SPPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spstf2_c,SPSTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spstrf_c,SPSTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sptcon_c,SPTCON_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spteqr_c,SPTEQR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sptrfs_c,SPTRFS_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sptsv_c,SPTSV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sptsvx_c,SPTSVX_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spttrf_c,SPTTRF_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(spttrs_c,SPTTRS_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sptts2_c,SPTTS2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(srscl_c,SRSCL_C)(fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbev_c,SSBEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbevd_c,SSBEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbevx_c,SSBEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbgst_c,SSBGST_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbgv_c,SSBGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbgvd_c,SSBGVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbgvx_c,SSBGVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssbtrd_c,SSBTRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssfrk_c,SSFRK_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspcon_c,SSPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspev_c,SSPEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspevd_c,SSPEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspevx_c,SSPEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspgst_c,SSPGST_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspgv_c,SSPGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspgvd_c,SSPGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspgvx_c,SSPGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssprfs_c,SSPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspsv_c,SSPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sspsvx_c,SSPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssptrd_c,SSPTRD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssptrf_c,SSPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssptri_c,SSPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssptrs_c,SSPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstebz_c,SSTEBZ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstedc_c,SSTEDC_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstegr_c,SSTEGR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstein_c,SSTEIN_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstemr_c,SSTEMR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssteqr_c,SSTEQR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssterf_c,SSTERF_C)(fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstev_c,SSTEV_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstevd_c,SSTEVD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstevr_c,SSTEVR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sstevx_c,SSTEVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssycon_c,SSYCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyconv_c,SSYCONV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyequb_c,SSYEQUB_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyev_c,SSYEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyevd_c,SSYEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyevr_c,SSYEVR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyevx_c,SSYEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssygs2_c,SSYGS2_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssygst_c,SSYGST_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssygv_c,SSYGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssygvd_c,SSYGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssygvx_c,SSYGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyrfs_c,SSYRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyrfsx_c,SSYRFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssysv_c,SSYSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssysvx_c,SSYSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssysvxx_c,SSYSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssyswapr_c,SSYSWAPR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytd2_c,SSYTD2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytf2_c,SSYTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytrd_c,SSYTRD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytrf_c,SSYTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytri_c,SSYTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytri2_c,SSYTRI2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytri2x_c,SSYTRI2X_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytrs_c,SSYTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ssytrs2_c,SSYTRS2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stbcon_c,STBCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stbrfs_c,STBRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stbtrs_c,STBTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stfsm_c,STFSM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stftri_c,STFTRI_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stfttp_c,STFTTP_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stfttr_c,STFTTR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stgevc_c,STGEVC_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stgex2_c,STGEX2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stgexc_c,STGEXC_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stgsen_c,STGSEN_C)(fwi_integer_t *, fwl_logical_t *, fwl_logical_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stgsja_c,STGSJA_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stgsna_c,STGSNA_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stgsy2_c,STGSY2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stgsyl_c,STGSYL_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stpcon_c,STPCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stprfs_c,STPRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stptri_c,STPTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stptrs_c,STPTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stpttf_c,STPTTF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stpttr_c,STPTTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strcon_c,STRCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strevc_c,STREVC_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strexc_c,STREXC_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strrfs_c,STRRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strsen_c,STRSEN_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strsna_c,STRSNA_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strsyl_c,STRSYL_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strti2_c,STRTI2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strtri_c,STRTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strtrs_c,STRTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strttf_c,STRTTF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(strttp_c,STRTTP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stzrqf_c,STZRQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stzrzf_c,STZRZF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fw_shape_t *, fwr_real_t *, fw_shape_t *, fwr_real_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zbbcsd_c,ZBBCSD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zbdsqr_c,ZBDSQR_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zcgesv_c,ZCGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zcposv_c,ZCPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zdrscl_c,ZDRSCL_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbbrd_c,ZGBBRD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbcon_c,ZGBCON_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbequ_c,ZGBEQU_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbequb_c,ZGBEQUB_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbrfs_c,ZGBRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbrfsx_c,ZGBRFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbsv_c,ZGBSV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbsvx_c,ZGBSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbsvxx_c,ZGBSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbtf2_c,ZGBTF2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbtrf_c,ZGBTRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgbtrs_c,ZGBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgebak_c,ZGEBAK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgebal_c,ZGEBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgebd2_c,ZGEBD2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgebrd_c,ZGEBRD_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgecon_c,ZGECON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeequ_c,ZGEEQU_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeequb_c,ZGEEQUB_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgees_c,ZGEES_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeesx_c,ZGEESX_C)(fw_character_t *, fw_character_t *, fwl_logical_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeev_c,ZGEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeevx_c,ZGEEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgegs_c,ZGEGS_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgegv_c,ZGEGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgehd2_c,ZGEHD2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgehrd_c,ZGEHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgelq2_c,ZGELQ2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgelqf_c,ZGELQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgels_c,ZGELS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgelsd_c,ZGELSD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgelss_c,ZGELSS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgelsx_c,ZGELSX_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgelsy_c,ZGELSY_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeql2_c,ZGEQL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeqlf_c,ZGEQLF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeqp3_c,ZGEQP3_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeqpf_c,ZGEQPF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeqr2_c,ZGEQR2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeqr2p_c,ZGEQR2P_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeqrf_c,ZGEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgeqrfp_c,ZGEQRFP_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgerfs_c,ZGERFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgerfsx_c,ZGERFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgerq2_c,ZGERQ2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgerqf_c,ZGERQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgesc2_c,ZGESC2_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgesdd_c,ZGESDD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgesv_c,ZGESV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgesvd_c,ZGESVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgesvx_c,ZGESVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgesvxx_c,ZGESVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgetc2_c,ZGETC2_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgetf2_c,ZGETF2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgetrf_c,ZGETRF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgetri_c,ZGETRI_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgetrs_c,ZGETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggbak_c,ZGGBAK_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggbal_c,ZGGBAL_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgges_c,ZGGES_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggesx_c,ZGGESX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwl_logical_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggev_c,ZGGEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggevx_c,ZGGEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggglm_c,ZGGGLM_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgghrd_c,ZGGHRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgglse_c,ZGGLSE_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggqrf_c,ZGGQRF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggrqf_c,ZGGRQF_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggsvd_c,ZGGSVD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zggsvp_c,ZGGSVP_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgtcon_c,ZGTCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgtrfs_c,ZGTRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgtsv_c,ZGTSV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgtsvx_c,ZGTSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgttrf_c,ZGTTRF_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgttrs_c,ZGTTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zgtts2_c,ZGTTS2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbev_c,ZHBEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbevd_c,ZHBEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbevx_c,ZHBEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbgst_c,ZHBGST_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbgv_c,ZHBGV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbgvd_c,ZHBGVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbgvx_c,ZHBGVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhbtrd_c,ZHBTRD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhecon_c,ZHECON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zheequb_c,ZHEEQUB_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zheev_c,ZHEEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zheevd_c,ZHEEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zheevr_c,ZHEEVR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zheevx_c,ZHEEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhegs2_c,ZHEGS2_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhegst_c,ZHEGST_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhegv_c,ZHEGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhegvd_c,ZHEGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhegvx_c,ZHEGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zherfs_c,ZHERFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zherfsx_c,ZHERFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhesv_c,ZHESV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhesvx_c,ZHESVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhesvxx_c,ZHESVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhetd2_c,ZHETD2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhetf2_c,ZHETF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhetrd_c,ZHETRD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhetrf_c,ZHETRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhetri_c,ZHETRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhetrs_c,ZHETRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhetrs2_c,ZHETRS2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhfrk_c,ZHFRK_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhgeqz_c,ZHGEQZ_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpcon_c,ZHPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpev_c,ZHPEV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpevd_c,ZHPEVD_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpevx_c,ZHPEVX_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpgst_c,ZHPGST_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpgv_c,ZHPGV_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpgvd_c,ZHPGVD_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpgvx_c,ZHPGVX_C)(fwi_integer_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhprfs_c,ZHPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpsv_c,ZHPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhpsvx_c,ZHPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhptrd_c,ZHPTRD_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhptrf_c,ZHPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhptri_c,ZHPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhptrs_c,ZHPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhsein_c,ZHSEIN_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zhseqr_c,ZHSEQR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_gbamv_c,ZLA_GBAMV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_gbrcond_c_c,ZLA_GBRCOND_C_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_gbrcond_x_c,ZLA_GBRCOND_X_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_gbrfsx_extended_c,ZLA_GBRFSX_EXTENDED_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_gbrpvgrw_c,ZLA_GBRPVGRW_C)(fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_geamv_c,ZLA_GEAMV_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_gercond_c_c,ZLA_GERCOND_C_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_gercond_x_c,ZLA_GERCOND_X_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_gerfsx_extended_c,ZLA_GERFSX_EXTENDED_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_heamv_c,ZLA_HEAMV_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_hercond_c_c,ZLA_HERCOND_C_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_hercond_x_c,ZLA_HERCOND_X_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_herfsx_extended_c,ZLA_HERFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_herpvgrw_c,ZLA_HERPVGRW_C)(fwr_dbl_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_lin_berr_c,ZLA_LIN_BERR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_porcond_c_c,ZLA_PORCOND_C_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_porcond_x_c,ZLA_PORCOND_X_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_porfsx_extended_c,ZLA_PORFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_porpvgrw_c,ZLA_PORPVGRW_C)(fwr_dbl_t *, fw_character_x1_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_rpvgrw_c,ZLA_RPVGRW_C)(fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_syamv_c,ZLA_SYAMV_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_syrcond_c_c,ZLA_SYRCOND_C_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_syrcond_x_c,ZLA_SYRCOND_X_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_syrfsx_extended_c,ZLA_SYRFSX_EXTENDED_C)(fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_syrpvgrw_c,ZLA_SYRPVGRW_C)(fwr_dbl_t *, fw_character_x1_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zla_wwaddw_c,ZLA_WWADDW_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlabrd_c,ZLABRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlacgv_c,ZLACGV_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlacn2_c,ZLACN2_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlacon_c,ZLACON_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlacp2_c,ZLACP2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlacpy_c,ZLACPY_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlacrm_c,ZLACRM_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlacrt_c,ZLACRT_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zladiv_c,ZLADIV_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaed0_c,ZLAED0_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaed7_c,ZLAED7_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaed8_c,ZLAED8_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaein_c,ZLAEIN_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaesy_c,ZLAESY_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaev2_c,ZLAEV2_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlag2c_c,ZLAG2C_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlags2_c,ZLAGS2_C)(fwl_logical_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlagtm_c,ZLAGTM_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlahef_c,ZLAHEF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlahqr_c,ZLAHQR_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlahr2_c,ZLAHR2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlahrd_c,ZLAHRD_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaic1_c,ZLAIC1_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlals0_c,ZLALS0_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlalsa_c,ZLALSA_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlalsd_c,ZLALSD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlangb_c,ZLANGB_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlange_c,ZLANGE_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlangt_c,ZLANGT_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlanhb_c,ZLANHB_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlanhe_c,ZLANHE_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlanhf_c,ZLANHF_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlanhp_c,ZLANHP_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlanhs_c,ZLANHS_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlanht_c,ZLANHT_C)(fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlansb_c,ZLANSB_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlansp_c,ZLANSP_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlansy_c,ZLANSY_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlantb_c,ZLANTB_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlantp_c,ZLANTP_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlantr_c,ZLANTR_C)(fwr_dbl_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlapll_c,ZLAPLL_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlapmr_c,ZLAPMR_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlapmt_c,ZLAPMT_C)(fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqgb_c,ZLAQGB_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqge_c,ZLAQGE_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqhb_c,ZLAQHB_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqhe_c,ZLAQHE_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqhp_c,ZLAQHP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqp2_c,ZLAQP2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqps_c,ZLAQPS_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqr0_c,ZLAQR0_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqr1_c,ZLAQR1_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqr2_c,ZLAQR2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqr3_c,ZLAQR3_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqr4_c,ZLAQR4_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqr5_c,ZLAQR5_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqsb_c,ZLAQSB_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqsp_c,ZLAQSP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaqsy_c,ZLAQSY_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_character_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlar1v_c,ZLAR1V_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwl_logical_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlar2v_c,ZLAR2V_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarcm_c,ZLARCM_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarf_c,ZLARF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarfb_c,ZLARFB_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarfg_c,ZLARFG_C)(fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarfgp_c,ZLARFGP_C)(fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarft_c,ZLARFT_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarfx_c,ZLARFX_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlargv_c,ZLARGV_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarnv_c,ZLARNV_C)(fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarrv_c,ZLARRV_C)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarscl2_c,ZLARSCL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlartg_c,ZLARTG_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlartv_c,ZLARTV_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarz_c,ZLARZ_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarzb_c,ZLARZB_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlarzt_c,ZLARZT_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlascl_c,ZLASCL_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlascl2_c,ZLASCL2_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaset_c,ZLASET_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlasr_c,ZLASR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlassq_c,ZLASSQ_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlaswp_c,ZLASWP_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlasyf_c,ZLASYF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlat2c_c,ZLAT2C_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlatbs_c,ZLATBS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlatdf_c,ZLATDF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlatps_c,ZLATPS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlatrd_c,ZLATRD_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlatrs_c,ZLATRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlatrz_c,ZLATRZ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlatzm_c,ZLATZM_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlauu2_c,ZLAUU2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zlauum_c,ZLAUUM_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbcon_c,ZPBCON_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbequ_c,ZPBEQU_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbrfs_c,ZPBRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbstf_c,ZPBSTF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbsv_c,ZPBSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbsvx_c,ZPBSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbtf2_c,ZPBTF2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbtrf_c,ZPBTRF_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpbtrs_c,ZPBTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpftrf_c,ZPFTRF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpftri_c,ZPFTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpftrs_c,ZPFTRS_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpocon_c,ZPOCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpoequ_c,ZPOEQU_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpoequb_c,ZPOEQUB_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zporfs_c,ZPORFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zporfsx_c,ZPORFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zposv_c,ZPOSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zposvx_c,ZPOSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zposvxx_c,ZPOSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpotf2_c,ZPOTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpotrf_c,ZPOTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpotri_c,ZPOTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpotrs_c,ZPOTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zppcon_c,ZPPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zppequ_c,ZPPEQU_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpprfs_c,ZPPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zppsv_c,ZPPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zppsvx_c,ZPPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpptrf_c,ZPPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpptri_c,ZPPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpptrs_c,ZPPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpstf2_c,ZPSTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpstrf_c,ZPSTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zptcon_c,ZPTCON_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpteqr_c,ZPTEQR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zptrfs_c,ZPTRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zptsv_c,ZPTSV_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zptsvx_c,ZPTSVX_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpttrf_c,ZPTTRF_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zpttrs_c,ZPTTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zptts2_c,ZPTTS2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zrot_c,ZROT_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zspcon_c,ZSPCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zspmv_c,ZSPMV_C)(fw_character_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zspr_c,ZSPR_C)(fw_character_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsprfs_c,ZSPRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zspsv_c,ZSPSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zspsvx_c,ZSPSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsptrf_c,ZSPTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsptri_c,ZSPTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsptrs_c,ZSPTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zstedc_c,ZSTEDC_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zstegr_c,ZSTEGR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zstein_c,ZSTEIN_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zstemr_c,ZSTEMR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwl_logical_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsteqr_c,ZSTEQR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsycon_c,ZSYCON_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsyconv_c,ZSYCONV_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsyequb_c,ZSYEQUB_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsymv_c,ZSYMV_C)(fw_character_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsyr_c,ZSYR_C)(fw_character_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsyrfs_c,ZSYRFS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsyrfsx_c,ZSYRFSX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsysv_c,ZSYSV_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsysvx_c,ZSYSVX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsysvxx_c,ZSYSVXX_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_character_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsyswapr_c,ZSYSWAPR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsytf2_c,ZSYTF2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsytrf_c,ZSYTRF_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsytri_c,ZSYTRI_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsytri2_c,ZSYTRI2_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsytri2x_c,ZSYTRI2X_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsytrs_c,ZSYTRS_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zsytrs2_c,ZSYTRS2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_shape_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztbcon_c,ZTBCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztbrfs_c,ZTBRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztbtrs_c,ZTBTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztfsm_c,ZTFSM_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztftri_c,ZTFTRI_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztfttp_c,ZTFTTP_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztfttr_c,ZTFTTR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztgevc_c,ZTGEVC_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztgex2_c,ZTGEX2_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztgexc_c,ZTGEXC_C)(fwl_logical_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztgsen_c,ZTGSEN_C)(fwi_integer_t *, fwl_logical_t *, fwl_logical_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztgsja_c,ZTGSJA_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztgsna_c,ZTGSNA_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztgsy2_c,ZTGSY2_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztgsyl_c,ZTGSYL_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztpcon_c,ZTPCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztprfs_c,ZTPRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztptri_c,ZTPTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztptrs_c,ZTPTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztpttf_c,ZTPTTF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztpttr_c,ZTPTTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrcon_c,ZTRCON_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrevc_c,ZTREVC_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrexc_c,ZTREXC_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrrfs_c,ZTRRFS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrsen_c,ZTRSEN_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrsna_c,ZTRSNA_C)(fw_character_t *, fw_character_t *, fw_shape_t *, fwl_logical_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrsyl_c,ZTRSYL_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrti2_c,ZTRTI2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrtri_c,ZTRTRI_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrtrs_c,ZTRTRS_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrttf_c,ZTRTTF_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztrttp_c,ZTRTTP_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztzrqf_c,ZTZRQF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ztzrzf_c,ZTZRZF_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunbdb_c,ZUNBDB_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zuncsd_c,ZUNCSD_C)(fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zung2l_c,ZUNG2L_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zung2r_c,ZUNG2R_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zungbr_c,ZUNGBR_C)(fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunghr_c,ZUNGHR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zungl2_c,ZUNGL2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunglq_c,ZUNGLQ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zungql_c,ZUNGQL_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zungqr_c,ZUNGQR_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zungr2_c,ZUNGR2_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zungrq_c,ZUNGRQ_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zungtr_c,ZUNGTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunm2l_c,ZUNM2L_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunm2r_c,ZUNM2R_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmbr_c,ZUNMBR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmhr_c,ZUNMHR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunml2_c,ZUNML2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmlq_c,ZUNMLQ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmql_c,ZUNMQL_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmqr_c,ZUNMQR_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmr2_c,ZUNMR2_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmr3_c,ZUNMR3_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmrq_c,ZUNMRQ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmrz_c,ZUNMRZ_C)(fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zunmtr_c,ZUNMTR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zupgtr_c,ZUPGTR_C)(fw_character_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(zupmtr_c,ZUPMTR_C)(fw_character_t *, fw_character_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define cbbcsd_c F_FUNC(cbbcsd_c,CBBCSD_C)
#define cbdsqr_c F_FUNC(cbdsqr_c,CBDSQR_C)
#define cgbbrd_c F_FUNC(cgbbrd_c,CGBBRD_C)
#define cgbcon_c F_FUNC(cgbcon_c,CGBCON_C)
#define cgbequ_c F_FUNC(cgbequ_c,CGBEQU_C)
#define cgbequb_c F_FUNC(cgbequb_c,CGBEQUB_C)
#define cgbrfs_c F_FUNC(cgbrfs_c,CGBRFS_C)
#define cgbrfsx_c F_FUNC(cgbrfsx_c,CGBRFSX_C)
#define cgbsv_c F_FUNC(cgbsv_c,CGBSV_C)
#define cgbsvx_c F_FUNC(cgbsvx_c,CGBSVX_C)
#define cgbsvxx_c F_FUNC(cgbsvxx_c,CGBSVXX_C)
#define cgbtf2_c F_FUNC(cgbtf2_c,CGBTF2_C)
#define cgbtrf_c F_FUNC(cgbtrf_c,CGBTRF_C)
#define cgbtrs_c F_FUNC(cgbtrs_c,CGBTRS_C)
#define cgebak_c F_FUNC(cgebak_c,CGEBAK_C)
#define cgebal_c F_FUNC(cgebal_c,CGEBAL_C)
#define cgebd2_c F_FUNC(cgebd2_c,CGEBD2_C)
#define cgebrd_c F_FUNC(cgebrd_c,CGEBRD_C)
#define cgecon_c F_FUNC(cgecon_c,CGECON_C)
#define cgeequ_c F_FUNC(cgeequ_c,CGEEQU_C)
#define cgeequb_c F_FUNC(cgeequb_c,CGEEQUB_C)
#define cgees_c F_FUNC(cgees_c,CGEES_C)
#define cgeesx_c F_FUNC(cgeesx_c,CGEESX_C)
#define cgeev_c F_FUNC(cgeev_c,CGEEV_C)
#define cgeevx_c F_FUNC(cgeevx_c,CGEEVX_C)
#define cgegs_c F_FUNC(cgegs_c,CGEGS_C)
#define cgegv_c F_FUNC(cgegv_c,CGEGV_C)
#define cgehd2_c F_FUNC(cgehd2_c,CGEHD2_C)
#define cgehrd_c F_FUNC(cgehrd_c,CGEHRD_C)
#define cgelq2_c F_FUNC(cgelq2_c,CGELQ2_C)
#define cgelqf_c F_FUNC(cgelqf_c,CGELQF_C)
#define cgels_c F_FUNC(cgels_c,CGELS_C)
#define cgelsd_c F_FUNC(cgelsd_c,CGELSD_C)
#define cgelss_c F_FUNC(cgelss_c,CGELSS_C)
#define cgelsx_c F_FUNC(cgelsx_c,CGELSX_C)
#define cgelsy_c F_FUNC(cgelsy_c,CGELSY_C)
#define cgeql2_c F_FUNC(cgeql2_c,CGEQL2_C)
#define cgeqlf_c F_FUNC(cgeqlf_c,CGEQLF_C)
#define cgeqp3_c F_FUNC(cgeqp3_c,CGEQP3_C)
#define cgeqpf_c F_FUNC(cgeqpf_c,CGEQPF_C)
#define cgeqr2_c F_FUNC(cgeqr2_c,CGEQR2_C)
#define cgeqr2p_c F_FUNC(cgeqr2p_c,CGEQR2P_C)
#define cgeqrf_c F_FUNC(cgeqrf_c,CGEQRF_C)
#define cgeqrfp_c F_FUNC(cgeqrfp_c,CGEQRFP_C)
#define cgerfs_c F_FUNC(cgerfs_c,CGERFS_C)
#define cgerfsx_c F_FUNC(cgerfsx_c,CGERFSX_C)
#define cgerq2_c F_FUNC(cgerq2_c,CGERQ2_C)
#define cgerqf_c F_FUNC(cgerqf_c,CGERQF_C)
#define cgesc2_c F_FUNC(cgesc2_c,CGESC2_C)
#define cgesdd_c F_FUNC(cgesdd_c,CGESDD_C)
#define cgesv_c F_FUNC(cgesv_c,CGESV_C)
#define cgesvd_c F_FUNC(cgesvd_c,CGESVD_C)
#define cgesvx_c F_FUNC(cgesvx_c,CGESVX_C)
#define cgesvxx_c F_FUNC(cgesvxx_c,CGESVXX_C)
#define cgetc2_c F_FUNC(cgetc2_c,CGETC2_C)
#define cgetf2_c F_FUNC(cgetf2_c,CGETF2_C)
#define cgetrf_c F_FUNC(cgetrf_c,CGETRF_C)
#define cgetri_c F_FUNC(cgetri_c,CGETRI_C)
#define cgetrs_c F_FUNC(cgetrs_c,CGETRS_C)
#define cggbak_c F_FUNC(cggbak_c,CGGBAK_C)
#define cggbal_c F_FUNC(cggbal_c,CGGBAL_C)
#define cgges_c F_FUNC(cgges_c,CGGES_C)
#define cggesx_c F_FUNC(cggesx_c,CGGESX_C)
#define cggev_c F_FUNC(cggev_c,CGGEV_C)
#define cggevx_c F_FUNC(cggevx_c,CGGEVX_C)
#define cggglm_c F_FUNC(cggglm_c,CGGGLM_C)
#define cgghrd_c F_FUNC(cgghrd_c,CGGHRD_C)
#define cgglse_c F_FUNC(cgglse_c,CGGLSE_C)
#define cggqrf_c F_FUNC(cggqrf_c,CGGQRF_C)
#define cggrqf_c F_FUNC(cggrqf_c,CGGRQF_C)
#define cggsvd_c F_FUNC(cggsvd_c,CGGSVD_C)
#define cggsvp_c F_FUNC(cggsvp_c,CGGSVP_C)
#define cgtcon_c F_FUNC(cgtcon_c,CGTCON_C)
#define cgtrfs_c F_FUNC(cgtrfs_c,CGTRFS_C)
#define cgtsv_c F_FUNC(cgtsv_c,CGTSV_C)
#define cgtsvx_c F_FUNC(cgtsvx_c,CGTSVX_C)
#define cgttrf_c F_FUNC(cgttrf_c,CGTTRF_C)
#define cgttrs_c F_FUNC(cgttrs_c,CGTTRS_C)
#define cgtts2_c F_FUNC(cgtts2_c,CGTTS2_C)
#define chbev_c F_FUNC(chbev_c,CHBEV_C)
#define chbevd_c F_FUNC(chbevd_c,CHBEVD_C)
#define chbevx_c F_FUNC(chbevx_c,CHBEVX_C)
#define chbgst_c F_FUNC(chbgst_c,CHBGST_C)
#define chbgv_c F_FUNC(chbgv_c,CHBGV_C)
#define chbgvd_c F_FUNC(chbgvd_c,CHBGVD_C)
#define chbgvx_c F_FUNC(chbgvx_c,CHBGVX_C)
#define chbtrd_c F_FUNC(chbtrd_c,CHBTRD_C)
#define checon_c F_FUNC(checon_c,CHECON_C)
#define cheequb_c F_FUNC(cheequb_c,CHEEQUB_C)
#define cheev_c F_FUNC(cheev_c,CHEEV_C)
#define cheevd_c F_FUNC(cheevd_c,CHEEVD_C)
#define cheevr_c F_FUNC(cheevr_c,CHEEVR_C)
#define cheevx_c F_FUNC(cheevx_c,CHEEVX_C)
#define chegs2_c F_FUNC(chegs2_c,CHEGS2_C)
#define chegst_c F_FUNC(chegst_c,CHEGST_C)
#define chegv_c F_FUNC(chegv_c,CHEGV_C)
#define chegvd_c F_FUNC(chegvd_c,CHEGVD_C)
#define chegvx_c F_FUNC(chegvx_c,CHEGVX_C)
#define cherfs_c F_FUNC(cherfs_c,CHERFS_C)
#define cherfsx_c F_FUNC(cherfsx_c,CHERFSX_C)
#define chesv_c F_FUNC(chesv_c,CHESV_C)
#define chesvx_c F_FUNC(chesvx_c,CHESVX_C)
#define chesvxx_c F_FUNC(chesvxx_c,CHESVXX_C)
#define chetd2_c F_FUNC(chetd2_c,CHETD2_C)
#define chetf2_c F_FUNC(chetf2_c,CHETF2_C)
#define chetrd_c F_FUNC(chetrd_c,CHETRD_C)
#define chetrf_c F_FUNC(chetrf_c,CHETRF_C)
#define chetri_c F_FUNC(chetri_c,CHETRI_C)
#define chetrs_c F_FUNC(chetrs_c,CHETRS_C)
#define chetrs2_c F_FUNC(chetrs2_c,CHETRS2_C)
#define chfrk_c F_FUNC(chfrk_c,CHFRK_C)
#define chgeqz_c F_FUNC(chgeqz_c,CHGEQZ_C)
#define chla_transtype_c F_FUNC(chla_transtype_c,CHLA_TRANSTYPE_C)
#define chpcon_c F_FUNC(chpcon_c,CHPCON_C)
#define chpev_c F_FUNC(chpev_c,CHPEV_C)
#define chpevd_c F_FUNC(chpevd_c,CHPEVD_C)
#define chpevx_c F_FUNC(chpevx_c,CHPEVX_C)
#define chpgst_c F_FUNC(chpgst_c,CHPGST_C)
#define chpgv_c F_FUNC(chpgv_c,CHPGV_C)
#define chpgvd_c F_FUNC(chpgvd_c,CHPGVD_C)
#define chpgvx_c F_FUNC(chpgvx_c,CHPGVX_C)
#define chprfs_c F_FUNC(chprfs_c,CHPRFS_C)
#define chpsv_c F_FUNC(chpsv_c,CHPSV_C)
#define chpsvx_c F_FUNC(chpsvx_c,CHPSVX_C)
#define chptrd_c F_FUNC(chptrd_c,CHPTRD_C)
#define chptrf_c F_FUNC(chptrf_c,CHPTRF_C)
#define chptri_c F_FUNC(chptri_c,CHPTRI_C)
#define chptrs_c F_FUNC(chptrs_c,CHPTRS_C)
#define chsein_c F_FUNC(chsein_c,CHSEIN_C)
#define chseqr_c F_FUNC(chseqr_c,CHSEQR_C)
#define cla_gbamv_c F_FUNC(cla_gbamv_c,CLA_GBAMV_C)
#define cla_gbrcond_c_c F_FUNC(cla_gbrcond_c_c,CLA_GBRCOND_C_C)
#define cla_gbrcond_x_c F_FUNC(cla_gbrcond_x_c,CLA_GBRCOND_X_C)
#define cla_gbrfsx_extended_c F_FUNC(cla_gbrfsx_extended_c,CLA_GBRFSX_EXTENDED_C)
#define cla_gbrpvgrw_c F_FUNC(cla_gbrpvgrw_c,CLA_GBRPVGRW_C)
#define cla_geamv_c F_FUNC(cla_geamv_c,CLA_GEAMV_C)
#define cla_gercond_c_c F_FUNC(cla_gercond_c_c,CLA_GERCOND_C_C)
#define cla_gercond_x_c F_FUNC(cla_gercond_x_c,CLA_GERCOND_X_C)
#define cla_gerfsx_extended_c F_FUNC(cla_gerfsx_extended_c,CLA_GERFSX_EXTENDED_C)
#define cla_heamv_c F_FUNC(cla_heamv_c,CLA_HEAMV_C)
#define cla_hercond_c_c F_FUNC(cla_hercond_c_c,CLA_HERCOND_C_C)
#define cla_hercond_x_c F_FUNC(cla_hercond_x_c,CLA_HERCOND_X_C)
#define cla_herfsx_extended_c F_FUNC(cla_herfsx_extended_c,CLA_HERFSX_EXTENDED_C)
#define cla_herpvgrw_c F_FUNC(cla_herpvgrw_c,CLA_HERPVGRW_C)
#define cla_lin_berr_c F_FUNC(cla_lin_berr_c,CLA_LIN_BERR_C)
#define cla_porcond_c_c F_FUNC(cla_porcond_c_c,CLA_PORCOND_C_C)
#define cla_porcond_x_c F_FUNC(cla_porcond_x_c,CLA_PORCOND_X_C)
#define cla_porfsx_extended_c F_FUNC(cla_porfsx_extended_c,CLA_PORFSX_EXTENDED_C)
#define cla_porpvgrw_c F_FUNC(cla_porpvgrw_c,CLA_PORPVGRW_C)
#define cla_rpvgrw_c F_FUNC(cla_rpvgrw_c,CLA_RPVGRW_C)
#define cla_syamv_c F_FUNC(cla_syamv_c,CLA_SYAMV_C)
#define cla_syrcond_c_c F_FUNC(cla_syrcond_c_c,CLA_SYRCOND_C_C)
#define cla_syrcond_x_c F_FUNC(cla_syrcond_x_c,CLA_SYRCOND_X_C)
#define cla_syrfsx_extended_c F_FUNC(cla_syrfsx_extended_c,CLA_SYRFSX_EXTENDED_C)
#define cla_syrpvgrw_c F_FUNC(cla_syrpvgrw_c,CLA_SYRPVGRW_C)
#define cla_wwaddw_c F_FUNC(cla_wwaddw_c,CLA_WWADDW_C)
#define clabrd_c F_FUNC(clabrd_c,CLABRD_C)
#define clacgv_c F_FUNC(clacgv_c,CLACGV_C)
#define clacn2_c F_FUNC(clacn2_c,CLACN2_C)
#define clacon_c F_FUNC(clacon_c,CLACON_C)
#define clacp2_c F_FUNC(clacp2_c,CLACP2_C)
#define clacpy_c F_FUNC(clacpy_c,CLACPY_C)
#define clacrm_c F_FUNC(clacrm_c,CLACRM_C)
#define clacrt_c F_FUNC(clacrt_c,CLACRT_C)
#define cladiv_c F_FUNC(cladiv_c,CLADIV_C)
#define claed0_c F_FUNC(claed0_c,CLAED0_C)
#define claed7_c F_FUNC(claed7_c,CLAED7_C)
#define claed8_c F_FUNC(claed8_c,CLAED8_C)
#define claein_c F_FUNC(claein_c,CLAEIN_C)
#define claesy_c F_FUNC(claesy_c,CLAESY_C)
#define claev2_c F_FUNC(claev2_c,CLAEV2_C)
#define clag2z_c F_FUNC(clag2z_c,CLAG2Z_C)
#define clags2_c F_FUNC(clags2_c,CLAGS2_C)
#define clagtm_c F_FUNC(clagtm_c,CLAGTM_C)
#define clahef_c F_FUNC(clahef_c,CLAHEF_C)
#define clahqr_c F_FUNC(clahqr_c,CLAHQR_C)
#define clahr2_c F_FUNC(clahr2_c,CLAHR2_C)
#define clahrd_c F_FUNC(clahrd_c,CLAHRD_C)
#define claic1_c F_FUNC(claic1_c,CLAIC1_C)
#define clals0_c F_FUNC(clals0_c,CLALS0_C)
#define clalsa_c F_FUNC(clalsa_c,CLALSA_C)
#define clalsd_c F_FUNC(clalsd_c,CLALSD_C)
#define clangb_c F_FUNC(clangb_c,CLANGB_C)
#define clange_c F_FUNC(clange_c,CLANGE_C)
#define clangt_c F_FUNC(clangt_c,CLANGT_C)
#define clanhb_c F_FUNC(clanhb_c,CLANHB_C)
#define clanhe_c F_FUNC(clanhe_c,CLANHE_C)
#define clanhf_c F_FUNC(clanhf_c,CLANHF_C)
#define clanhp_c F_FUNC(clanhp_c,CLANHP_C)
#define clanhs_c F_FUNC(clanhs_c,CLANHS_C)
#define clanht_c F_FUNC(clanht_c,CLANHT_C)
#define clansb_c F_FUNC(clansb_c,CLANSB_C)
#define clansp_c F_FUNC(clansp_c,CLANSP_C)
#define clansy_c F_FUNC(clansy_c,CLANSY_C)
#define clantb_c F_FUNC(clantb_c,CLANTB_C)
#define clantp_c F_FUNC(clantp_c,CLANTP_C)
#define clantr_c F_FUNC(clantr_c,CLANTR_C)
#define clapll_c F_FUNC(clapll_c,CLAPLL_C)
#define clapmr_c F_FUNC(clapmr_c,CLAPMR_C)
#define clapmt_c F_FUNC(clapmt_c,CLAPMT_C)
#define claqgb_c F_FUNC(claqgb_c,CLAQGB_C)
#define claqge_c F_FUNC(claqge_c,CLAQGE_C)
#define claqhb_c F_FUNC(claqhb_c,CLAQHB_C)
#define claqhe_c F_FUNC(claqhe_c,CLAQHE_C)
#define claqhp_c F_FUNC(claqhp_c,CLAQHP_C)
#define claqp2_c F_FUNC(claqp2_c,CLAQP2_C)
#define claqps_c F_FUNC(claqps_c,CLAQPS_C)
#define claqr0_c F_FUNC(claqr0_c,CLAQR0_C)
#define claqr1_c F_FUNC(claqr1_c,CLAQR1_C)
#define claqr2_c F_FUNC(claqr2_c,CLAQR2_C)
#define claqr3_c F_FUNC(claqr3_c,CLAQR3_C)
#define claqr4_c F_FUNC(claqr4_c,CLAQR4_C)
#define claqr5_c F_FUNC(claqr5_c,CLAQR5_C)
#define claqsb_c F_FUNC(claqsb_c,CLAQSB_C)
#define claqsp_c F_FUNC(claqsp_c,CLAQSP_C)
#define claqsy_c F_FUNC(claqsy_c,CLAQSY_C)
#define clar1v_c F_FUNC(clar1v_c,CLAR1V_C)
#define clar2v_c F_FUNC(clar2v_c,CLAR2V_C)
#define clarcm_c F_FUNC(clarcm_c,CLARCM_C)
#define clarf_c F_FUNC(clarf_c,CLARF_C)
#define clarfb_c F_FUNC(clarfb_c,CLARFB_C)
#define clarfg_c F_FUNC(clarfg_c,CLARFG_C)
#define clarfgp_c F_FUNC(clarfgp_c,CLARFGP_C)
#define clarft_c F_FUNC(clarft_c,CLARFT_C)
#define clarfx_c F_FUNC(clarfx_c,CLARFX_C)
#define clargv_c F_FUNC(clargv_c,CLARGV_C)
#define clarnv_c F_FUNC(clarnv_c,CLARNV_C)
#define clarrv_c F_FUNC(clarrv_c,CLARRV_C)
#define clarscl2_c F_FUNC(clarscl2_c,CLARSCL2_C)
#define clartg_c F_FUNC(clartg_c,CLARTG_C)
#define clartv_c F_FUNC(clartv_c,CLARTV_C)
#define clarz_c F_FUNC(clarz_c,CLARZ_C)
#define clarzb_c F_FUNC(clarzb_c,CLARZB_C)
#define clarzt_c F_FUNC(clarzt_c,CLARZT_C)
#define clascl_c F_FUNC(clascl_c,CLASCL_C)
#define clascl2_c F_FUNC(clascl2_c,CLASCL2_C)
#define claset_c F_FUNC(claset_c,CLASET_C)
#define clasr_c F_FUNC(clasr_c,CLASR_C)
#define classq_c F_FUNC(classq_c,CLASSQ_C)
#define claswp_c F_FUNC(claswp_c,CLASWP_C)
#define clasyf_c F_FUNC(clasyf_c,CLASYF_C)
#define clatbs_c F_FUNC(clatbs_c,CLATBS_C)
#define clatdf_c F_FUNC(clatdf_c,CLATDF_C)
#define clatps_c F_FUNC(clatps_c,CLATPS_C)
#define clatrd_c F_FUNC(clatrd_c,CLATRD_C)
#define clatrs_c F_FUNC(clatrs_c,CLATRS_C)
#define clatrz_c F_FUNC(clatrz_c,CLATRZ_C)
#define clatzm_c F_FUNC(clatzm_c,CLATZM_C)
#define clauu2_c F_FUNC(clauu2_c,CLAUU2_C)
#define clauum_c F_FUNC(clauum_c,CLAUUM_C)
#define cpbcon_c F_FUNC(cpbcon_c,CPBCON_C)
#define cpbequ_c F_FUNC(cpbequ_c,CPBEQU_C)
#define cpbrfs_c F_FUNC(cpbrfs_c,CPBRFS_C)
#define cpbstf_c F_FUNC(cpbstf_c,CPBSTF_C)
#define cpbsv_c F_FUNC(cpbsv_c,CPBSV_C)
#define cpbsvx_c F_FUNC(cpbsvx_c,CPBSVX_C)
#define cpbtf2_c F_FUNC(cpbtf2_c,CPBTF2_C)
#define cpbtrf_c F_FUNC(cpbtrf_c,CPBTRF_C)
#define cpbtrs_c F_FUNC(cpbtrs_c,CPBTRS_C)
#define cpftrf_c F_FUNC(cpftrf_c,CPFTRF_C)
#define cpftri_c F_FUNC(cpftri_c,CPFTRI_C)
#define cpftrs_c F_FUNC(cpftrs_c,CPFTRS_C)
#define cpocon_c F_FUNC(cpocon_c,CPOCON_C)
#define cpoequ_c F_FUNC(cpoequ_c,CPOEQU_C)
#define cpoequb_c F_FUNC(cpoequb_c,CPOEQUB_C)
#define cporfs_c F_FUNC(cporfs_c,CPORFS_C)
#define cporfsx_c F_FUNC(cporfsx_c,CPORFSX_C)
#define cposv_c F_FUNC(cposv_c,CPOSV_C)
#define cposvx_c F_FUNC(cposvx_c,CPOSVX_C)
#define cposvxx_c F_FUNC(cposvxx_c,CPOSVXX_C)
#define cpotf2_c F_FUNC(cpotf2_c,CPOTF2_C)
#define cpotrf_c F_FUNC(cpotrf_c,CPOTRF_C)
#define cpotri_c F_FUNC(cpotri_c,CPOTRI_C)
#define cpotrs_c F_FUNC(cpotrs_c,CPOTRS_C)
#define cppcon_c F_FUNC(cppcon_c,CPPCON_C)
#define cppequ_c F_FUNC(cppequ_c,CPPEQU_C)
#define cpprfs_c F_FUNC(cpprfs_c,CPPRFS_C)
#define cppsv_c F_FUNC(cppsv_c,CPPSV_C)
#define cppsvx_c F_FUNC(cppsvx_c,CPPSVX_C)
#define cpptrf_c F_FUNC(cpptrf_c,CPPTRF_C)
#define cpptri_c F_FUNC(cpptri_c,CPPTRI_C)
#define cpptrs_c F_FUNC(cpptrs_c,CPPTRS_C)
#define cpstf2_c F_FUNC(cpstf2_c,CPSTF2_C)
#define cpstrf_c F_FUNC(cpstrf_c,CPSTRF_C)
#define cptcon_c F_FUNC(cptcon_c,CPTCON_C)
#define cpteqr_c F_FUNC(cpteqr_c,CPTEQR_C)
#define cptrfs_c F_FUNC(cptrfs_c,CPTRFS_C)
#define cptsv_c F_FUNC(cptsv_c,CPTSV_C)
#define cptsvx_c F_FUNC(cptsvx_c,CPTSVX_C)
#define cpttrf_c F_FUNC(cpttrf_c,CPTTRF_C)
#define cpttrs_c F_FUNC(cpttrs_c,CPTTRS_C)
#define cptts2_c F_FUNC(cptts2_c,CPTTS2_C)
#define crot_c F_FUNC(crot_c,CROT_C)
#define cspcon_c F_FUNC(cspcon_c,CSPCON_C)
#define cspmv_c F_FUNC(cspmv_c,CSPMV_C)
#define cspr_c F_FUNC(cspr_c,CSPR_C)
#define csprfs_c F_FUNC(csprfs_c,CSPRFS_C)
#define cspsv_c F_FUNC(cspsv_c,CSPSV_C)
#define cspsvx_c F_FUNC(cspsvx_c,CSPSVX_C)
#define csptrf_c F_FUNC(csptrf_c,CSPTRF_C)
#define csptri_c F_FUNC(csptri_c,CSPTRI_C)
#define csptrs_c F_FUNC(csptrs_c,CSPTRS_C)
#define csrscl_c F_FUNC(csrscl_c,CSRSCL_C)
#define cstedc_c F_FUNC(cstedc_c,CSTEDC_C)
#define cstegr_c F_FUNC(cstegr_c,CSTEGR_C)
#define cstein_c F_FUNC(cstein_c,CSTEIN_C)
#define cstemr_c F_FUNC(cstemr_c,CSTEMR_C)
#define csteqr_c F_FUNC(csteqr_c,CSTEQR_C)
#define csycon_c F_FUNC(csycon_c,CSYCON_C)
#define csyconv_c F_FUNC(csyconv_c,CSYCONV_C)
#define csyequb_c F_FUNC(csyequb_c,CSYEQUB_C)
#define csymv_c F_FUNC(csymv_c,CSYMV_C)
#define csyr_c F_FUNC(csyr_c,CSYR_C)
#define csyrfs_c F_FUNC(csyrfs_c,CSYRFS_C)
#define csyrfsx_c F_FUNC(csyrfsx_c,CSYRFSX_C)
#define csysv_c F_FUNC(csysv_c,CSYSV_C)
#define csysvx_c F_FUNC(csysvx_c,CSYSVX_C)
#define csysvxx_c F_FUNC(csysvxx_c,CSYSVXX_C)
#define csyswapr_c F_FUNC(csyswapr_c,CSYSWAPR_C)
#define csytf2_c F_FUNC(csytf2_c,CSYTF2_C)
#define csytrf_c F_FUNC(csytrf_c,CSYTRF_C)
#define csytri_c F_FUNC(csytri_c,CSYTRI_C)
#define csytri2_c F_FUNC(csytri2_c,CSYTRI2_C)
#define csytri2x_c F_FUNC(csytri2x_c,CSYTRI2X_C)
#define csytrs_c F_FUNC(csytrs_c,CSYTRS_C)
#define csytrs2_c F_FUNC(csytrs2_c,CSYTRS2_C)
#define ctbcon_c F_FUNC(ctbcon_c,CTBCON_C)
#define ctbrfs_c F_FUNC(ctbrfs_c,CTBRFS_C)
#define ctbtrs_c F_FUNC(ctbtrs_c,CTBTRS_C)
#define ctfsm_c F_FUNC(ctfsm_c,CTFSM_C)
#define ctftri_c F_FUNC(ctftri_c,CTFTRI_C)
#define ctfttp_c F_FUNC(ctfttp_c,CTFTTP_C)
#define ctfttr_c F_FUNC(ctfttr_c,CTFTTR_C)
#define ctgevc_c F_FUNC(ctgevc_c,CTGEVC_C)
#define ctgex2_c F_FUNC(ctgex2_c,CTGEX2_C)
#define ctgexc_c F_FUNC(ctgexc_c,CTGEXC_C)
#define ctgsen_c F_FUNC(ctgsen_c,CTGSEN_C)
#define ctgsja_c F_FUNC(ctgsja_c,CTGSJA_C)
#define ctgsna_c F_FUNC(ctgsna_c,CTGSNA_C)
#define ctgsy2_c F_FUNC(ctgsy2_c,CTGSY2_C)
#define ctgsyl_c F_FUNC(ctgsyl_c,CTGSYL_C)
#define ctpcon_c F_FUNC(ctpcon_c,CTPCON_C)
#define ctprfs_c F_FUNC(ctprfs_c,CTPRFS_C)
#define ctptri_c F_FUNC(ctptri_c,CTPTRI_C)
#define ctptrs_c F_FUNC(ctptrs_c,CTPTRS_C)
#define ctpttf_c F_FUNC(ctpttf_c,CTPTTF_C)
#define ctpttr_c F_FUNC(ctpttr_c,CTPTTR_C)
#define ctrcon_c F_FUNC(ctrcon_c,CTRCON_C)
#define ctrevc_c F_FUNC(ctrevc_c,CTREVC_C)
#define ctrexc_c F_FUNC(ctrexc_c,CTREXC_C)
#define ctrrfs_c F_FUNC(ctrrfs_c,CTRRFS_C)
#define ctrsen_c F_FUNC(ctrsen_c,CTRSEN_C)
#define ctrsna_c F_FUNC(ctrsna_c,CTRSNA_C)
#define ctrsyl_c F_FUNC(ctrsyl_c,CTRSYL_C)
#define ctrti2_c F_FUNC(ctrti2_c,CTRTI2_C)
#define ctrtri_c F_FUNC(ctrtri_c,CTRTRI_C)
#define ctrtrs_c F_FUNC(ctrtrs_c,CTRTRS_C)
#define ctrttf_c F_FUNC(ctrttf_c,CTRTTF_C)
#define ctrttp_c F_FUNC(ctrttp_c,CTRTTP_C)
#define ctzrqf_c F_FUNC(ctzrqf_c,CTZRQF_C)
#define ctzrzf_c F_FUNC(ctzrzf_c,CTZRZF_C)
#define cunbdb_c F_FUNC(cunbdb_c,CUNBDB_C)
#define cuncsd_c F_FUNC(cuncsd_c,CUNCSD_C)
#define cung2l_c F_FUNC(cung2l_c,CUNG2L_C)
#define cung2r_c F_FUNC(cung2r_c,CUNG2R_C)
#define cungbr_c F_FUNC(cungbr_c,CUNGBR_C)
#define cunghr_c F_FUNC(cunghr_c,CUNGHR_C)
#define cungl2_c F_FUNC(cungl2_c,CUNGL2_C)
#define cunglq_c F_FUNC(cunglq_c,CUNGLQ_C)
#define cungql_c F_FUNC(cungql_c,CUNGQL_C)
#define cungqr_c F_FUNC(cungqr_c,CUNGQR_C)
#define cungr2_c F_FUNC(cungr2_c,CUNGR2_C)
#define cungrq_c F_FUNC(cungrq_c,CUNGRQ_C)
#define cungtr_c F_FUNC(cungtr_c,CUNGTR_C)
#define cunm2l_c F_FUNC(cunm2l_c,CUNM2L_C)
#define cunm2r_c F_FUNC(cunm2r_c,CUNM2R_C)
#define cunmbr_c F_FUNC(cunmbr_c,CUNMBR_C)
#define cunmhr_c F_FUNC(cunmhr_c,CUNMHR_C)
#define cunml2_c F_FUNC(cunml2_c,CUNML2_C)
#define cunmlq_c F_FUNC(cunmlq_c,CUNMLQ_C)
#define cunmql_c F_FUNC(cunmql_c,CUNMQL_C)
#define cunmqr_c F_FUNC(cunmqr_c,CUNMQR_C)
#define cunmr2_c F_FUNC(cunmr2_c,CUNMR2_C)
#define cunmr3_c F_FUNC(cunmr3_c,CUNMR3_C)
#define cunmrq_c F_FUNC(cunmrq_c,CUNMRQ_C)
#define cunmrz_c F_FUNC(cunmrz_c,CUNMRZ_C)
#define cunmtr_c F_FUNC(cunmtr_c,CUNMTR_C)
#define cupgtr_c F_FUNC(cupgtr_c,CUPGTR_C)
#define cupmtr_c F_FUNC(cupmtr_c,CUPMTR_C)
#define dbbcsd_c F_FUNC(dbbcsd_c,DBBCSD_C)
#define dbdsdc_c F_FUNC(dbdsdc_c,DBDSDC_C)
#define dbdsqr_c F_FUNC(dbdsqr_c,DBDSQR_C)
#define ddisna_c F_FUNC(ddisna_c,DDISNA_C)
#define dgbbrd_c F_FUNC(dgbbrd_c,DGBBRD_C)
#define dgbcon_c F_FUNC(dgbcon_c,DGBCON_C)
#define dgbequ_c F_FUNC(dgbequ_c,DGBEQU_C)
#define dgbequb_c F_FUNC(dgbequb_c,DGBEQUB_C)
#define dgbrfs_c F_FUNC(dgbrfs_c,DGBRFS_C)
#define dgbrfsx_c F_FUNC(dgbrfsx_c,DGBRFSX_C)
#define dgbsv_c F_FUNC(dgbsv_c,DGBSV_C)
#define dgbsvx_c F_FUNC(dgbsvx_c,DGBSVX_C)
#define dgbsvxx_c F_FUNC(dgbsvxx_c,DGBSVXX_C)
#define dgbtf2_c F_FUNC(dgbtf2_c,DGBTF2_C)
#define dgbtrf_c F_FUNC(dgbtrf_c,DGBTRF_C)
#define dgbtrs_c F_FUNC(dgbtrs_c,DGBTRS_C)
#define dgebak_c F_FUNC(dgebak_c,DGEBAK_C)
#define dgebal_c F_FUNC(dgebal_c,DGEBAL_C)
#define dgebd2_c F_FUNC(dgebd2_c,DGEBD2_C)
#define dgebrd_c F_FUNC(dgebrd_c,DGEBRD_C)
#define dgecon_c F_FUNC(dgecon_c,DGECON_C)
#define dgeequ_c F_FUNC(dgeequ_c,DGEEQU_C)
#define dgeequb_c F_FUNC(dgeequb_c,DGEEQUB_C)
#define dgees_c F_FUNC(dgees_c,DGEES_C)
#define dgeesx_c F_FUNC(dgeesx_c,DGEESX_C)
#define dgeev_c F_FUNC(dgeev_c,DGEEV_C)
#define dgeevx_c F_FUNC(dgeevx_c,DGEEVX_C)
#define dgegs_c F_FUNC(dgegs_c,DGEGS_C)
#define dgegv_c F_FUNC(dgegv_c,DGEGV_C)
#define dgehd2_c F_FUNC(dgehd2_c,DGEHD2_C)
#define dgehrd_c F_FUNC(dgehrd_c,DGEHRD_C)
#define dgejsv_c F_FUNC(dgejsv_c,DGEJSV_C)
#define dgelq2_c F_FUNC(dgelq2_c,DGELQ2_C)
#define dgelqf_c F_FUNC(dgelqf_c,DGELQF_C)
#define dgels_c F_FUNC(dgels_c,DGELS_C)
#define dgelsd_c F_FUNC(dgelsd_c,DGELSD_C)
#define dgelss_c F_FUNC(dgelss_c,DGELSS_C)
#define dgelsx_c F_FUNC(dgelsx_c,DGELSX_C)
#define dgelsy_c F_FUNC(dgelsy_c,DGELSY_C)
#define dgeql2_c F_FUNC(dgeql2_c,DGEQL2_C)
#define dgeqlf_c F_FUNC(dgeqlf_c,DGEQLF_C)
#define dgeqp3_c F_FUNC(dgeqp3_c,DGEQP3_C)
#define dgeqpf_c F_FUNC(dgeqpf_c,DGEQPF_C)
#define dgeqr2_c F_FUNC(dgeqr2_c,DGEQR2_C)
#define dgeqr2p_c F_FUNC(dgeqr2p_c,DGEQR2P_C)
#define dgeqrf_c F_FUNC(dgeqrf_c,DGEQRF_C)
#define dgeqrfp_c F_FUNC(dgeqrfp_c,DGEQRFP_C)
#define dgerfs_c F_FUNC(dgerfs_c,DGERFS_C)
#define dgerfsx_c F_FUNC(dgerfsx_c,DGERFSX_C)
#define dgerq2_c F_FUNC(dgerq2_c,DGERQ2_C)
#define dgerqf_c F_FUNC(dgerqf_c,DGERQF_C)
#define dgesc2_c F_FUNC(dgesc2_c,DGESC2_C)
#define dgesdd_c F_FUNC(dgesdd_c,DGESDD_C)
#define dgesv_c F_FUNC(dgesv_c,DGESV_C)
#define dgesvd_c F_FUNC(dgesvd_c,DGESVD_C)
#define dgesvj_c F_FUNC(dgesvj_c,DGESVJ_C)
#define dgesvx_c F_FUNC(dgesvx_c,DGESVX_C)
#define dgesvxx_c F_FUNC(dgesvxx_c,DGESVXX_C)
#define dgetc2_c F_FUNC(dgetc2_c,DGETC2_C)
#define dgetf2_c F_FUNC(dgetf2_c,DGETF2_C)
#define dgetrf_c F_FUNC(dgetrf_c,DGETRF_C)
#define dgetri_c F_FUNC(dgetri_c,DGETRI_C)
#define dgetrs_c F_FUNC(dgetrs_c,DGETRS_C)
#define dggbak_c F_FUNC(dggbak_c,DGGBAK_C)
#define dggbal_c F_FUNC(dggbal_c,DGGBAL_C)
#define dgges_c F_FUNC(dgges_c,DGGES_C)
#define dggesx_c F_FUNC(dggesx_c,DGGESX_C)
#define dggev_c F_FUNC(dggev_c,DGGEV_C)
#define dggevx_c F_FUNC(dggevx_c,DGGEVX_C)
#define dggglm_c F_FUNC(dggglm_c,DGGGLM_C)
#define dgghrd_c F_FUNC(dgghrd_c,DGGHRD_C)
#define dgglse_c F_FUNC(dgglse_c,DGGLSE_C)
#define dggqrf_c F_FUNC(dggqrf_c,DGGQRF_C)
#define dggrqf_c F_FUNC(dggrqf_c,DGGRQF_C)
#define dggsvd_c F_FUNC(dggsvd_c,DGGSVD_C)
#define dggsvp_c F_FUNC(dggsvp_c,DGGSVP_C)
#define dgsvj0_c F_FUNC(dgsvj0_c,DGSVJ0_C)
#define dgsvj1_c F_FUNC(dgsvj1_c,DGSVJ1_C)
#define dgtcon_c F_FUNC(dgtcon_c,DGTCON_C)
#define dgtrfs_c F_FUNC(dgtrfs_c,DGTRFS_C)
#define dgtsv_c F_FUNC(dgtsv_c,DGTSV_C)
#define dgtsvx_c F_FUNC(dgtsvx_c,DGTSVX_C)
#define dgttrf_c F_FUNC(dgttrf_c,DGTTRF_C)
#define dgttrs_c F_FUNC(dgttrs_c,DGTTRS_C)
#define dgtts2_c F_FUNC(dgtts2_c,DGTTS2_C)
#define dhgeqz_c F_FUNC(dhgeqz_c,DHGEQZ_C)
#define dhsein_c F_FUNC(dhsein_c,DHSEIN_C)
#define dhseqr_c F_FUNC(dhseqr_c,DHSEQR_C)
#define disnan_c F_FUNC(disnan_c,DISNAN_C)
#define dla_gbamv_c F_FUNC(dla_gbamv_c,DLA_GBAMV_C)
#define dla_gbrcond_c F_FUNC(dla_gbrcond_c,DLA_GBRCOND_C)
#define dla_gbrfsx_extended_c F_FUNC(dla_gbrfsx_extended_c,DLA_GBRFSX_EXTENDED_C)
#define dla_gbrpvgrw_c F_FUNC(dla_gbrpvgrw_c,DLA_GBRPVGRW_C)
#define dla_geamv_c F_FUNC(dla_geamv_c,DLA_GEAMV_C)
#define dla_gercond_c F_FUNC(dla_gercond_c,DLA_GERCOND_C)
#define dla_gerfsx_extended_c F_FUNC(dla_gerfsx_extended_c,DLA_GERFSX_EXTENDED_C)
#define dla_lin_berr_c F_FUNC(dla_lin_berr_c,DLA_LIN_BERR_C)
#define dla_porcond_c F_FUNC(dla_porcond_c,DLA_PORCOND_C)
#define dla_porfsx_extended_c F_FUNC(dla_porfsx_extended_c,DLA_PORFSX_EXTENDED_C)
#define dla_porpvgrw_c F_FUNC(dla_porpvgrw_c,DLA_PORPVGRW_C)
#define dla_rpvgrw_c F_FUNC(dla_rpvgrw_c,DLA_RPVGRW_C)
#define dla_syamv_c F_FUNC(dla_syamv_c,DLA_SYAMV_C)
#define dla_syrcond_c F_FUNC(dla_syrcond_c,DLA_SYRCOND_C)
#define dla_syrfsx_extended_c F_FUNC(dla_syrfsx_extended_c,DLA_SYRFSX_EXTENDED_C)
#define dla_syrpvgrw_c F_FUNC(dla_syrpvgrw_c,DLA_SYRPVGRW_C)
#define dla_wwaddw_c F_FUNC(dla_wwaddw_c,DLA_WWADDW_C)
#define dlabad_c F_FUNC(dlabad_c,DLABAD_C)
#define dlabrd_c F_FUNC(dlabrd_c,DLABRD_C)
#define dlacn2_c F_FUNC(dlacn2_c,DLACN2_C)
#define dlacon_c F_FUNC(dlacon_c,DLACON_C)
#define dlacpy_c F_FUNC(dlacpy_c,DLACPY_C)
#define dladiv_c F_FUNC(dladiv_c,DLADIV_C)
#define dlae2_c F_FUNC(dlae2_c,DLAE2_C)
#define dlaebz_c F_FUNC(dlaebz_c,DLAEBZ_C)
#define dlaed0_c F_FUNC(dlaed0_c,DLAED0_C)
#define dlaed1_c F_FUNC(dlaed1_c,DLAED1_C)
#define dlaed2_c F_FUNC(dlaed2_c,DLAED2_C)
#define dlaed3_c F_FUNC(dlaed3_c,DLAED3_C)
#define dlaed4_c F_FUNC(dlaed4_c,DLAED4_C)
#define dlaed5_c F_FUNC(dlaed5_c,DLAED5_C)
#define dlaed6_c F_FUNC(dlaed6_c,DLAED6_C)
#define dlaed7_c F_FUNC(dlaed7_c,DLAED7_C)
#define dlaed8_c F_FUNC(dlaed8_c,DLAED8_C)
#define dlaed9_c F_FUNC(dlaed9_c,DLAED9_C)
#define dlaeda_c F_FUNC(dlaeda_c,DLAEDA_C)
#define dlaein_c F_FUNC(dlaein_c,DLAEIN_C)
#define dlaev2_c F_FUNC(dlaev2_c,DLAEV2_C)
#define dlaexc_c F_FUNC(dlaexc_c,DLAEXC_C)
#define dlag2_c F_FUNC(dlag2_c,DLAG2_C)
#define dlag2s_c F_FUNC(dlag2s_c,DLAG2S_C)
#define dlags2_c F_FUNC(dlags2_c,DLAGS2_C)
#define dlagtf_c F_FUNC(dlagtf_c,DLAGTF_C)
#define dlagtm_c F_FUNC(dlagtm_c,DLAGTM_C)
#define dlagts_c F_FUNC(dlagts_c,DLAGTS_C)
#define dlagv2_c F_FUNC(dlagv2_c,DLAGV2_C)
#define dlahqr_c F_FUNC(dlahqr_c,DLAHQR_C)
#define dlahr2_c F_FUNC(dlahr2_c,DLAHR2_C)
#define dlahrd_c F_FUNC(dlahrd_c,DLAHRD_C)
#define dlaic1_c F_FUNC(dlaic1_c,DLAIC1_C)
#define dlaisnan_c F_FUNC(dlaisnan_c,DLAISNAN_C)
#define dlaln2_c F_FUNC(dlaln2_c,DLALN2_C)
#define dlals0_c F_FUNC(dlals0_c,DLALS0_C)
#define dlalsa_c F_FUNC(dlalsa_c,DLALSA_C)
#define dlalsd_c F_FUNC(dlalsd_c,DLALSD_C)
#define dlamrg_c F_FUNC(dlamrg_c,DLAMRG_C)
#define dlaneg_c F_FUNC(dlaneg_c,DLANEG_C)
#define dlangb_c F_FUNC(dlangb_c,DLANGB_C)
#define dlange_c F_FUNC(dlange_c,DLANGE_C)
#define dlangt_c F_FUNC(dlangt_c,DLANGT_C)
#define dlanhs_c F_FUNC(dlanhs_c,DLANHS_C)
#define dlansb_c F_FUNC(dlansb_c,DLANSB_C)
#define dlansf_c F_FUNC(dlansf_c,DLANSF_C)
#define dlansp_c F_FUNC(dlansp_c,DLANSP_C)
#define dlanst_c F_FUNC(dlanst_c,DLANST_C)
#define dlansy_c F_FUNC(dlansy_c,DLANSY_C)
#define dlantb_c F_FUNC(dlantb_c,DLANTB_C)
#define dlantp_c F_FUNC(dlantp_c,DLANTP_C)
#define dlantr_c F_FUNC(dlantr_c,DLANTR_C)
#define dlanv2_c F_FUNC(dlanv2_c,DLANV2_C)
#define dlapll_c F_FUNC(dlapll_c,DLAPLL_C)
#define dlapmr_c F_FUNC(dlapmr_c,DLAPMR_C)
#define dlapmt_c F_FUNC(dlapmt_c,DLAPMT_C)
#define dlapy2_c F_FUNC(dlapy2_c,DLAPY2_C)
#define dlapy3_c F_FUNC(dlapy3_c,DLAPY3_C)
#define dlaqgb_c F_FUNC(dlaqgb_c,DLAQGB_C)
#define dlaqge_c F_FUNC(dlaqge_c,DLAQGE_C)
#define dlaqp2_c F_FUNC(dlaqp2_c,DLAQP2_C)
#define dlaqps_c F_FUNC(dlaqps_c,DLAQPS_C)
#define dlaqr0_c F_FUNC(dlaqr0_c,DLAQR0_C)
#define dlaqr1_c F_FUNC(dlaqr1_c,DLAQR1_C)
#define dlaqr2_c F_FUNC(dlaqr2_c,DLAQR2_C)
#define dlaqr3_c F_FUNC(dlaqr3_c,DLAQR3_C)
#define dlaqr4_c F_FUNC(dlaqr4_c,DLAQR4_C)
#define dlaqr5_c F_FUNC(dlaqr5_c,DLAQR5_C)
#define dlaqsb_c F_FUNC(dlaqsb_c,DLAQSB_C)
#define dlaqsp_c F_FUNC(dlaqsp_c,DLAQSP_C)
#define dlaqsy_c F_FUNC(dlaqsy_c,DLAQSY_C)
#define dlaqtr_c F_FUNC(dlaqtr_c,DLAQTR_C)
#define dlar1v_c F_FUNC(dlar1v_c,DLAR1V_C)
#define dlar2v_c F_FUNC(dlar2v_c,DLAR2V_C)
#define dlarf_c F_FUNC(dlarf_c,DLARF_C)
#define dlarfb_c F_FUNC(dlarfb_c,DLARFB_C)
#define dlarfg_c F_FUNC(dlarfg_c,DLARFG_C)
#define dlarfgp_c F_FUNC(dlarfgp_c,DLARFGP_C)
#define dlarft_c F_FUNC(dlarft_c,DLARFT_C)
#define dlarfx_c F_FUNC(dlarfx_c,DLARFX_C)
#define dlargv_c F_FUNC(dlargv_c,DLARGV_C)
#define dlarnv_c F_FUNC(dlarnv_c,DLARNV_C)
#define dlarra_c F_FUNC(dlarra_c,DLARRA_C)
#define dlarrb_c F_FUNC(dlarrb_c,DLARRB_C)
#define dlarrc_c F_FUNC(dlarrc_c,DLARRC_C)
#define dlarrd_c F_FUNC(dlarrd_c,DLARRD_C)
#define dlarre_c F_FUNC(dlarre_c,DLARRE_C)
#define dlarrf_c F_FUNC(dlarrf_c,DLARRF_C)
#define dlarrj_c F_FUNC(dlarrj_c,DLARRJ_C)
#define dlarrk_c F_FUNC(dlarrk_c,DLARRK_C)
#define dlarrr_c F_FUNC(dlarrr_c,DLARRR_C)
#define dlarrv_c F_FUNC(dlarrv_c,DLARRV_C)
#define dlarscl2_c F_FUNC(dlarscl2_c,DLARSCL2_C)
#define dlartg_c F_FUNC(dlartg_c,DLARTG_C)
#define dlartgp_c F_FUNC(dlartgp_c,DLARTGP_C)
#define dlartgs_c F_FUNC(dlartgs_c,DLARTGS_C)
#define dlartv_c F_FUNC(dlartv_c,DLARTV_C)
#define dlaruv_c F_FUNC(dlaruv_c,DLARUV_C)
#define dlarz_c F_FUNC(dlarz_c,DLARZ_C)
#define dlarzb_c F_FUNC(dlarzb_c,DLARZB_C)
#define dlarzt_c F_FUNC(dlarzt_c,DLARZT_C)
#define dlas2_c F_FUNC(dlas2_c,DLAS2_C)
#define dlascl_c F_FUNC(dlascl_c,DLASCL_C)
#define dlascl2_c F_FUNC(dlascl2_c,DLASCL2_C)
#define dlasd0_c F_FUNC(dlasd0_c,DLASD0_C)
#define dlasd1_c F_FUNC(dlasd1_c,DLASD1_C)
#define dlasd2_c F_FUNC(dlasd2_c,DLASD2_C)
#define dlasd3_c F_FUNC(dlasd3_c,DLASD3_C)
#define dlasd4_c F_FUNC(dlasd4_c,DLASD4_C)
#define dlasd5_c F_FUNC(dlasd5_c,DLASD5_C)
#define dlasd6_c F_FUNC(dlasd6_c,DLASD6_C)
#define dlasd7_c F_FUNC(dlasd7_c,DLASD7_C)
#define dlasd8_c F_FUNC(dlasd8_c,DLASD8_C)
#define dlasda_c F_FUNC(dlasda_c,DLASDA_C)
#define dlasdq_c F_FUNC(dlasdq_c,DLASDQ_C)
#define dlasdt_c F_FUNC(dlasdt_c,DLASDT_C)
#define dlaset_c F_FUNC(dlaset_c,DLASET_C)
#define dlasq1_c F_FUNC(dlasq1_c,DLASQ1_C)
#define dlasq2_c F_FUNC(dlasq2_c,DLASQ2_C)
#define dlasq3_c F_FUNC(dlasq3_c,DLASQ3_C)
#define dlasq4_c F_FUNC(dlasq4_c,DLASQ4_C)
#define dlasq5_c F_FUNC(dlasq5_c,DLASQ5_C)
#define dlasq6_c F_FUNC(dlasq6_c,DLASQ6_C)
#define dlasr_c F_FUNC(dlasr_c,DLASR_C)
#define dlasrt_c F_FUNC(dlasrt_c,DLASRT_C)
#define dlassq_c F_FUNC(dlassq_c,DLASSQ_C)
#define dlasv2_c F_FUNC(dlasv2_c,DLASV2_C)
#define dlaswp_c F_FUNC(dlaswp_c,DLASWP_C)
#define dlasy2_c F_FUNC(dlasy2_c,DLASY2_C)
#define dlasyf_c F_FUNC(dlasyf_c,DLASYF_C)
#define dlat2s_c F_FUNC(dlat2s_c,DLAT2S_C)
#define dlatbs_c F_FUNC(dlatbs_c,DLATBS_C)
#define dlatdf_c F_FUNC(dlatdf_c,DLATDF_C)
#define dlatps_c F_FUNC(dlatps_c,DLATPS_C)
#define dlatrd_c F_FUNC(dlatrd_c,DLATRD_C)
#define dlatrs_c F_FUNC(dlatrs_c,DLATRS_C)
#define dlatrz_c F_FUNC(dlatrz_c,DLATRZ_C)
#define dlatzm_c F_FUNC(dlatzm_c,DLATZM_C)
#define dlauu2_c F_FUNC(dlauu2_c,DLAUU2_C)
#define dlauum_c F_FUNC(dlauum_c,DLAUUM_C)
#define dopgtr_c F_FUNC(dopgtr_c,DOPGTR_C)
#define dopmtr_c F_FUNC(dopmtr_c,DOPMTR_C)
#define dorbdb_c F_FUNC(dorbdb_c,DORBDB_C)
#define dorcsd_c F_FUNC(dorcsd_c,DORCSD_C)
#define dorg2l_c F_FUNC(dorg2l_c,DORG2L_C)
#define dorg2r_c F_FUNC(dorg2r_c,DORG2R_C)
#define dorgbr_c F_FUNC(dorgbr_c,DORGBR_C)
#define dorghr_c F_FUNC(dorghr_c,DORGHR_C)
#define dorgl2_c F_FUNC(dorgl2_c,DORGL2_C)
#define dorglq_c F_FUNC(dorglq_c,DORGLQ_C)
#define dorgql_c F_FUNC(dorgql_c,DORGQL_C)
#define dorgqr_c F_FUNC(dorgqr_c,DORGQR_C)
#define dorgr2_c F_FUNC(dorgr2_c,DORGR2_C)
#define dorgrq_c F_FUNC(dorgrq_c,DORGRQ_C)
#define dorgtr_c F_FUNC(dorgtr_c,DORGTR_C)
#define dorm2l_c F_FUNC(dorm2l_c,DORM2L_C)
#define dorm2r_c F_FUNC(dorm2r_c,DORM2R_C)
#define dormbr_c F_FUNC(dormbr_c,DORMBR_C)
#define dormhr_c F_FUNC(dormhr_c,DORMHR_C)
#define dorml2_c F_FUNC(dorml2_c,DORML2_C)
#define dormlq_c F_FUNC(dormlq_c,DORMLQ_C)
#define dormql_c F_FUNC(dormql_c,DORMQL_C)
#define dormqr_c F_FUNC(dormqr_c,DORMQR_C)
#define dormr2_c F_FUNC(dormr2_c,DORMR2_C)
#define dormr3_c F_FUNC(dormr3_c,DORMR3_C)
#define dormrq_c F_FUNC(dormrq_c,DORMRQ_C)
#define dormrz_c F_FUNC(dormrz_c,DORMRZ_C)
#define dormtr_c F_FUNC(dormtr_c,DORMTR_C)
#define dpbcon_c F_FUNC(dpbcon_c,DPBCON_C)
#define dpbequ_c F_FUNC(dpbequ_c,DPBEQU_C)
#define dpbrfs_c F_FUNC(dpbrfs_c,DPBRFS_C)
#define dpbstf_c F_FUNC(dpbstf_c,DPBSTF_C)
#define dpbsv_c F_FUNC(dpbsv_c,DPBSV_C)
#define dpbsvx_c F_FUNC(dpbsvx_c,DPBSVX_C)
#define dpbtf2_c F_FUNC(dpbtf2_c,DPBTF2_C)
#define dpbtrf_c F_FUNC(dpbtrf_c,DPBTRF_C)
#define dpbtrs_c F_FUNC(dpbtrs_c,DPBTRS_C)
#define dpftrf_c F_FUNC(dpftrf_c,DPFTRF_C)
#define dpftri_c F_FUNC(dpftri_c,DPFTRI_C)
#define dpftrs_c F_FUNC(dpftrs_c,DPFTRS_C)
#define dpocon_c F_FUNC(dpocon_c,DPOCON_C)
#define dpoequ_c F_FUNC(dpoequ_c,DPOEQU_C)
#define dpoequb_c F_FUNC(dpoequb_c,DPOEQUB_C)
#define dporfs_c F_FUNC(dporfs_c,DPORFS_C)
#define dporfsx_c F_FUNC(dporfsx_c,DPORFSX_C)
#define dposv_c F_FUNC(dposv_c,DPOSV_C)
#define dposvx_c F_FUNC(dposvx_c,DPOSVX_C)
#define dposvxx_c F_FUNC(dposvxx_c,DPOSVXX_C)
#define dpotf2_c F_FUNC(dpotf2_c,DPOTF2_C)
#define dpotrf_c F_FUNC(dpotrf_c,DPOTRF_C)
#define dpotri_c F_FUNC(dpotri_c,DPOTRI_C)
#define dpotrs_c F_FUNC(dpotrs_c,DPOTRS_C)
#define dppcon_c F_FUNC(dppcon_c,DPPCON_C)
#define dppequ_c F_FUNC(dppequ_c,DPPEQU_C)
#define dpprfs_c F_FUNC(dpprfs_c,DPPRFS_C)
#define dppsv_c F_FUNC(dppsv_c,DPPSV_C)
#define dppsvx_c F_FUNC(dppsvx_c,DPPSVX_C)
#define dpptrf_c F_FUNC(dpptrf_c,DPPTRF_C)
#define dpptri_c F_FUNC(dpptri_c,DPPTRI_C)
#define dpptrs_c F_FUNC(dpptrs_c,DPPTRS_C)
#define dpstf2_c F_FUNC(dpstf2_c,DPSTF2_C)
#define dpstrf_c F_FUNC(dpstrf_c,DPSTRF_C)
#define dptcon_c F_FUNC(dptcon_c,DPTCON_C)
#define dpteqr_c F_FUNC(dpteqr_c,DPTEQR_C)
#define dptrfs_c F_FUNC(dptrfs_c,DPTRFS_C)
#define dptsv_c F_FUNC(dptsv_c,DPTSV_C)
#define dptsvx_c F_FUNC(dptsvx_c,DPTSVX_C)
#define dpttrf_c F_FUNC(dpttrf_c,DPTTRF_C)
#define dpttrs_c F_FUNC(dpttrs_c,DPTTRS_C)
#define dptts2_c F_FUNC(dptts2_c,DPTTS2_C)
#define drscl_c F_FUNC(drscl_c,DRSCL_C)
#define dsbev_c F_FUNC(dsbev_c,DSBEV_C)
#define dsbevd_c F_FUNC(dsbevd_c,DSBEVD_C)
#define dsbevx_c F_FUNC(dsbevx_c,DSBEVX_C)
#define dsbgst_c F_FUNC(dsbgst_c,DSBGST_C)
#define dsbgv_c F_FUNC(dsbgv_c,DSBGV_C)
#define dsbgvd_c F_FUNC(dsbgvd_c,DSBGVD_C)
#define dsbgvx_c F_FUNC(dsbgvx_c,DSBGVX_C)
#define dsbtrd_c F_FUNC(dsbtrd_c,DSBTRD_C)
#define dsfrk_c F_FUNC(dsfrk_c,DSFRK_C)
#define dsgesv_c F_FUNC(dsgesv_c,DSGESV_C)
#define dspcon_c F_FUNC(dspcon_c,DSPCON_C)
#define dspev_c F_FUNC(dspev_c,DSPEV_C)
#define dspevd_c F_FUNC(dspevd_c,DSPEVD_C)
#define dspevx_c F_FUNC(dspevx_c,DSPEVX_C)
#define dspgst_c F_FUNC(dspgst_c,DSPGST_C)
#define dspgv_c F_FUNC(dspgv_c,DSPGV_C)
#define dspgvd_c F_FUNC(dspgvd_c,DSPGVD_C)
#define dspgvx_c F_FUNC(dspgvx_c,DSPGVX_C)
#define dsposv_c F_FUNC(dsposv_c,DSPOSV_C)
#define dsprfs_c F_FUNC(dsprfs_c,DSPRFS_C)
#define dspsv_c F_FUNC(dspsv_c,DSPSV_C)
#define dspsvx_c F_FUNC(dspsvx_c,DSPSVX_C)
#define dsptrd_c F_FUNC(dsptrd_c,DSPTRD_C)
#define dsptrf_c F_FUNC(dsptrf_c,DSPTRF_C)
#define dsptri_c F_FUNC(dsptri_c,DSPTRI_C)
#define dsptrs_c F_FUNC(dsptrs_c,DSPTRS_C)
#define dstebz_c F_FUNC(dstebz_c,DSTEBZ_C)
#define dstedc_c F_FUNC(dstedc_c,DSTEDC_C)
#define dstegr_c F_FUNC(dstegr_c,DSTEGR_C)
#define dstein_c F_FUNC(dstein_c,DSTEIN_C)
#define dstemr_c F_FUNC(dstemr_c,DSTEMR_C)
#define dsteqr_c F_FUNC(dsteqr_c,DSTEQR_C)
#define dsterf_c F_FUNC(dsterf_c,DSTERF_C)
#define dstev_c F_FUNC(dstev_c,DSTEV_C)
#define dstevd_c F_FUNC(dstevd_c,DSTEVD_C)
#define dstevr_c F_FUNC(dstevr_c,DSTEVR_C)
#define dstevx_c F_FUNC(dstevx_c,DSTEVX_C)
#define dsycon_c F_FUNC(dsycon_c,DSYCON_C)
#define dsyconv_c F_FUNC(dsyconv_c,DSYCONV_C)
#define dsyequb_c F_FUNC(dsyequb_c,DSYEQUB_C)
#define dsyev_c F_FUNC(dsyev_c,DSYEV_C)
#define dsyevd_c F_FUNC(dsyevd_c,DSYEVD_C)
#define dsyevr_c F_FUNC(dsyevr_c,DSYEVR_C)
#define dsyevx_c F_FUNC(dsyevx_c,DSYEVX_C)
#define dsygs2_c F_FUNC(dsygs2_c,DSYGS2_C)
#define dsygst_c F_FUNC(dsygst_c,DSYGST_C)
#define dsygv_c F_FUNC(dsygv_c,DSYGV_C)
#define dsygvd_c F_FUNC(dsygvd_c,DSYGVD_C)
#define dsygvx_c F_FUNC(dsygvx_c,DSYGVX_C)
#define dsyrfs_c F_FUNC(dsyrfs_c,DSYRFS_C)
#define dsyrfsx_c F_FUNC(dsyrfsx_c,DSYRFSX_C)
#define dsysv_c F_FUNC(dsysv_c,DSYSV_C)
#define dsysvx_c F_FUNC(dsysvx_c,DSYSVX_C)
#define dsysvxx_c F_FUNC(dsysvxx_c,DSYSVXX_C)
#define dsyswapr_c F_FUNC(dsyswapr_c,DSYSWAPR_C)
#define dsytd2_c F_FUNC(dsytd2_c,DSYTD2_C)
#define dsytf2_c F_FUNC(dsytf2_c,DSYTF2_C)
#define dsytrd_c F_FUNC(dsytrd_c,DSYTRD_C)
#define dsytrf_c F_FUNC(dsytrf_c,DSYTRF_C)
#define dsytri_c F_FUNC(dsytri_c,DSYTRI_C)
#define dsytri2_c F_FUNC(dsytri2_c,DSYTRI2_C)
#define dsytri2x_c F_FUNC(dsytri2x_c,DSYTRI2X_C)
#define dsytrs_c F_FUNC(dsytrs_c,DSYTRS_C)
#define dsytrs2_c F_FUNC(dsytrs2_c,DSYTRS2_C)
#define dtbcon_c F_FUNC(dtbcon_c,DTBCON_C)
#define dtbrfs_c F_FUNC(dtbrfs_c,DTBRFS_C)
#define dtbtrs_c F_FUNC(dtbtrs_c,DTBTRS_C)
#define dtfsm_c F_FUNC(dtfsm_c,DTFSM_C)
#define dtftri_c F_FUNC(dtftri_c,DTFTRI_C)
#define dtfttp_c F_FUNC(dtfttp_c,DTFTTP_C)
#define dtfttr_c F_FUNC(dtfttr_c,DTFTTR_C)
#define dtgevc_c F_FUNC(dtgevc_c,DTGEVC_C)
#define dtgex2_c F_FUNC(dtgex2_c,DTGEX2_C)
#define dtgexc_c F_FUNC(dtgexc_c,DTGEXC_C)
#define dtgsen_c F_FUNC(dtgsen_c,DTGSEN_C)
#define dtgsja_c F_FUNC(dtgsja_c,DTGSJA_C)
#define dtgsna_c F_FUNC(dtgsna_c,DTGSNA_C)
#define dtgsy2_c F_FUNC(dtgsy2_c,DTGSY2_C)
#define dtgsyl_c F_FUNC(dtgsyl_c,DTGSYL_C)
#define dtpcon_c F_FUNC(dtpcon_c,DTPCON_C)
#define dtprfs_c F_FUNC(dtprfs_c,DTPRFS_C)
#define dtptri_c F_FUNC(dtptri_c,DTPTRI_C)
#define dtptrs_c F_FUNC(dtptrs_c,DTPTRS_C)
#define dtpttf_c F_FUNC(dtpttf_c,DTPTTF_C)
#define dtpttr_c F_FUNC(dtpttr_c,DTPTTR_C)
#define dtrcon_c F_FUNC(dtrcon_c,DTRCON_C)
#define dtrevc_c F_FUNC(dtrevc_c,DTREVC_C)
#define dtrexc_c F_FUNC(dtrexc_c,DTREXC_C)
#define dtrrfs_c F_FUNC(dtrrfs_c,DTRRFS_C)
#define dtrsen_c F_FUNC(dtrsen_c,DTRSEN_C)
#define dtrsna_c F_FUNC(dtrsna_c,DTRSNA_C)
#define dtrsyl_c F_FUNC(dtrsyl_c,DTRSYL_C)
#define dtrti2_c F_FUNC(dtrti2_c,DTRTI2_C)
#define dtrtri_c F_FUNC(dtrtri_c,DTRTRI_C)
#define dtrtrs_c F_FUNC(dtrtrs_c,DTRTRS_C)
#define dtrttf_c F_FUNC(dtrttf_c,DTRTTF_C)
#define dtrttp_c F_FUNC(dtrttp_c,DTRTTP_C)
#define dtzrqf_c F_FUNC(dtzrqf_c,DTZRQF_C)
#define dtzrzf_c F_FUNC(dtzrzf_c,DTZRZF_C)
#define dzsum1_c F_FUNC(dzsum1_c,DZSUM1_C)
#define icmax1_c F_FUNC(icmax1_c,ICMAX1_C)
#define ieeeck_c F_FUNC(ieeeck_c,IEEECK_C)
#define ilaclc_c F_FUNC(ilaclc_c,ILACLC_C)
#define ilaclr_c F_FUNC(ilaclr_c,ILACLR_C)
#define iladiag_c F_FUNC(iladiag_c,ILADIAG_C)
#define iladlc_c F_FUNC(iladlc_c,ILADLC_C)
#define iladlr_c F_FUNC(iladlr_c,ILADLR_C)
#define ilaenv_c F_FUNC(ilaenv_c,ILAENV_C)
#define ilaprec_c F_FUNC(ilaprec_c,ILAPREC_C)
#define ilaslc_c F_FUNC(ilaslc_c,ILASLC_C)
#define ilaslr_c F_FUNC(ilaslr_c,ILASLR_C)
#define ilatrans_c F_FUNC(ilatrans_c,ILATRANS_C)
#define ilauplo_c F_FUNC(ilauplo_c,ILAUPLO_C)
#define ilaver_c F_FUNC(ilaver_c,ILAVER_C)
#define ilazlc_c F_FUNC(ilazlc_c,ILAZLC_C)
#define ilazlr_c F_FUNC(ilazlr_c,ILAZLR_C)
#define iparmq_c F_FUNC(iparmq_c,IPARMQ_C)
#define izmax1_c F_FUNC(izmax1_c,IZMAX1_C)
#define lsamen_c F_FUNC(lsamen_c,LSAMEN_C)
#define sbbcsd_c F_FUNC(sbbcsd_c,SBBCSD_C)
#define sbdsdc_c F_FUNC(sbdsdc_c,SBDSDC_C)
#define sbdsqr_c F_FUNC(sbdsqr_c,SBDSQR_C)
#define scsum1_c F_FUNC(scsum1_c,SCSUM1_C)
#define sdisna_c F_FUNC(sdisna_c,SDISNA_C)
#define sgbbrd_c F_FUNC(sgbbrd_c,SGBBRD_C)
#define sgbcon_c F_FUNC(sgbcon_c,SGBCON_C)
#define sgbequ_c F_FUNC(sgbequ_c,SGBEQU_C)
#define sgbequb_c F_FUNC(sgbequb_c,SGBEQUB_C)
#define sgbrfs_c F_FUNC(sgbrfs_c,SGBRFS_C)
#define sgbrfsx_c F_FUNC(sgbrfsx_c,SGBRFSX_C)
#define sgbsv_c F_FUNC(sgbsv_c,SGBSV_C)
#define sgbsvx_c F_FUNC(sgbsvx_c,SGBSVX_C)
#define sgbsvxx_c F_FUNC(sgbsvxx_c,SGBSVXX_C)
#define sgbtf2_c F_FUNC(sgbtf2_c,SGBTF2_C)
#define sgbtrf_c F_FUNC(sgbtrf_c,SGBTRF_C)
#define sgbtrs_c F_FUNC(sgbtrs_c,SGBTRS_C)
#define sgebak_c F_FUNC(sgebak_c,SGEBAK_C)
#define sgebal_c F_FUNC(sgebal_c,SGEBAL_C)
#define sgebd2_c F_FUNC(sgebd2_c,SGEBD2_C)
#define sgebrd_c F_FUNC(sgebrd_c,SGEBRD_C)
#define sgecon_c F_FUNC(sgecon_c,SGECON_C)
#define sgeequ_c F_FUNC(sgeequ_c,SGEEQU_C)
#define sgeequb_c F_FUNC(sgeequb_c,SGEEQUB_C)
#define sgees_c F_FUNC(sgees_c,SGEES_C)
#define sgeesx_c F_FUNC(sgeesx_c,SGEESX_C)
#define sgeev_c F_FUNC(sgeev_c,SGEEV_C)
#define sgeevx_c F_FUNC(sgeevx_c,SGEEVX_C)
#define sgegs_c F_FUNC(sgegs_c,SGEGS_C)
#define sgegv_c F_FUNC(sgegv_c,SGEGV_C)
#define sgehd2_c F_FUNC(sgehd2_c,SGEHD2_C)
#define sgehrd_c F_FUNC(sgehrd_c,SGEHRD_C)
#define sgejsv_c F_FUNC(sgejsv_c,SGEJSV_C)
#define sgelq2_c F_FUNC(sgelq2_c,SGELQ2_C)
#define sgelqf_c F_FUNC(sgelqf_c,SGELQF_C)
#define sgels_c F_FUNC(sgels_c,SGELS_C)
#define sgelsd_c F_FUNC(sgelsd_c,SGELSD_C)
#define sgelss_c F_FUNC(sgelss_c,SGELSS_C)
#define sgelsx_c F_FUNC(sgelsx_c,SGELSX_C)
#define sgelsy_c F_FUNC(sgelsy_c,SGELSY_C)
#define sgeql2_c F_FUNC(sgeql2_c,SGEQL2_C)
#define sgeqlf_c F_FUNC(sgeqlf_c,SGEQLF_C)
#define sgeqp3_c F_FUNC(sgeqp3_c,SGEQP3_C)
#define sgeqpf_c F_FUNC(sgeqpf_c,SGEQPF_C)
#define sgeqr2_c F_FUNC(sgeqr2_c,SGEQR2_C)
#define sgeqr2p_c F_FUNC(sgeqr2p_c,SGEQR2P_C)
#define sgeqrf_c F_FUNC(sgeqrf_c,SGEQRF_C)
#define sgeqrfp_c F_FUNC(sgeqrfp_c,SGEQRFP_C)
#define sgerfs_c F_FUNC(sgerfs_c,SGERFS_C)
#define sgerfsx_c F_FUNC(sgerfsx_c,SGERFSX_C)
#define sgerq2_c F_FUNC(sgerq2_c,SGERQ2_C)
#define sgerqf_c F_FUNC(sgerqf_c,SGERQF_C)
#define sgesc2_c F_FUNC(sgesc2_c,SGESC2_C)
#define sgesdd_c F_FUNC(sgesdd_c,SGESDD_C)
#define sgesv_c F_FUNC(sgesv_c,SGESV_C)
#define sgesvd_c F_FUNC(sgesvd_c,SGESVD_C)
#define sgesvj_c F_FUNC(sgesvj_c,SGESVJ_C)
#define sgesvx_c F_FUNC(sgesvx_c,SGESVX_C)
#define sgesvxx_c F_FUNC(sgesvxx_c,SGESVXX_C)
#define sgetc2_c F_FUNC(sgetc2_c,SGETC2_C)
#define sgetf2_c F_FUNC(sgetf2_c,SGETF2_C)
#define sgetrf_c F_FUNC(sgetrf_c,SGETRF_C)
#define sgetri_c F_FUNC(sgetri_c,SGETRI_C)
#define sgetrs_c F_FUNC(sgetrs_c,SGETRS_C)
#define sggbak_c F_FUNC(sggbak_c,SGGBAK_C)
#define sggbal_c F_FUNC(sggbal_c,SGGBAL_C)
#define sgges_c F_FUNC(sgges_c,SGGES_C)
#define sggesx_c F_FUNC(sggesx_c,SGGESX_C)
#define sggev_c F_FUNC(sggev_c,SGGEV_C)
#define sggevx_c F_FUNC(sggevx_c,SGGEVX_C)
#define sggglm_c F_FUNC(sggglm_c,SGGGLM_C)
#define sgghrd_c F_FUNC(sgghrd_c,SGGHRD_C)
#define sgglse_c F_FUNC(sgglse_c,SGGLSE_C)
#define sggqrf_c F_FUNC(sggqrf_c,SGGQRF_C)
#define sggrqf_c F_FUNC(sggrqf_c,SGGRQF_C)
#define sggsvd_c F_FUNC(sggsvd_c,SGGSVD_C)
#define sggsvp_c F_FUNC(sggsvp_c,SGGSVP_C)
#define sgsvj0_c F_FUNC(sgsvj0_c,SGSVJ0_C)
#define sgsvj1_c F_FUNC(sgsvj1_c,SGSVJ1_C)
#define sgtcon_c F_FUNC(sgtcon_c,SGTCON_C)
#define sgtrfs_c F_FUNC(sgtrfs_c,SGTRFS_C)
#define sgtsv_c F_FUNC(sgtsv_c,SGTSV_C)
#define sgtsvx_c F_FUNC(sgtsvx_c,SGTSVX_C)
#define sgttrf_c F_FUNC(sgttrf_c,SGTTRF_C)
#define sgttrs_c F_FUNC(sgttrs_c,SGTTRS_C)
#define sgtts2_c F_FUNC(sgtts2_c,SGTTS2_C)
#define shgeqz_c F_FUNC(shgeqz_c,SHGEQZ_C)
#define shsein_c F_FUNC(shsein_c,SHSEIN_C)
#define shseqr_c F_FUNC(shseqr_c,SHSEQR_C)
#define sisnan_c F_FUNC(sisnan_c,SISNAN_C)
#define sla_gbamv_c F_FUNC(sla_gbamv_c,SLA_GBAMV_C)
#define sla_gbrcond_c F_FUNC(sla_gbrcond_c,SLA_GBRCOND_C)
#define sla_gbrfsx_extended_c F_FUNC(sla_gbrfsx_extended_c,SLA_GBRFSX_EXTENDED_C)
#define sla_gbrpvgrw_c F_FUNC(sla_gbrpvgrw_c,SLA_GBRPVGRW_C)
#define sla_geamv_c F_FUNC(sla_geamv_c,SLA_GEAMV_C)
#define sla_gercond_c F_FUNC(sla_gercond_c,SLA_GERCOND_C)
#define sla_gerfsx_extended_c F_FUNC(sla_gerfsx_extended_c,SLA_GERFSX_EXTENDED_C)
#define sla_lin_berr_c F_FUNC(sla_lin_berr_c,SLA_LIN_BERR_C)
#define sla_porcond_c F_FUNC(sla_porcond_c,SLA_PORCOND_C)
#define sla_porfsx_extended_c F_FUNC(sla_porfsx_extended_c,SLA_PORFSX_EXTENDED_C)
#define sla_porpvgrw_c F_FUNC(sla_porpvgrw_c,SLA_PORPVGRW_C)
#define sla_rpvgrw_c F_FUNC(sla_rpvgrw_c,SLA_RPVGRW_C)
#define sla_syamv_c F_FUNC(sla_syamv_c,SLA_SYAMV_C)
#define sla_syrcond_c F_FUNC(sla_syrcond_c,SLA_SYRCOND_C)
#define sla_syrfsx_extended_c F_FUNC(sla_syrfsx_extended_c,SLA_SYRFSX_EXTENDED_C)
#define sla_syrpvgrw_c F_FUNC(sla_syrpvgrw_c,SLA_SYRPVGRW_C)
#define sla_wwaddw_c F_FUNC(sla_wwaddw_c,SLA_WWADDW_C)
#define slabad_c F_FUNC(slabad_c,SLABAD_C)
#define slabrd_c F_FUNC(slabrd_c,SLABRD_C)
#define slacn2_c F_FUNC(slacn2_c,SLACN2_C)
#define slacon_c F_FUNC(slacon_c,SLACON_C)
#define slacpy_c F_FUNC(slacpy_c,SLACPY_C)
#define sladiv_c F_FUNC(sladiv_c,SLADIV_C)
#define slae2_c F_FUNC(slae2_c,SLAE2_C)
#define slaebz_c F_FUNC(slaebz_c,SLAEBZ_C)
#define slaed0_c F_FUNC(slaed0_c,SLAED0_C)
#define slaed1_c F_FUNC(slaed1_c,SLAED1_C)
#define slaed2_c F_FUNC(slaed2_c,SLAED2_C)
#define slaed3_c F_FUNC(slaed3_c,SLAED3_C)
#define slaed4_c F_FUNC(slaed4_c,SLAED4_C)
#define slaed5_c F_FUNC(slaed5_c,SLAED5_C)
#define slaed6_c F_FUNC(slaed6_c,SLAED6_C)
#define slaed7_c F_FUNC(slaed7_c,SLAED7_C)
#define slaed8_c F_FUNC(slaed8_c,SLAED8_C)
#define slaed9_c F_FUNC(slaed9_c,SLAED9_C)
#define slaeda_c F_FUNC(slaeda_c,SLAEDA_C)
#define slaein_c F_FUNC(slaein_c,SLAEIN_C)
#define slaev2_c F_FUNC(slaev2_c,SLAEV2_C)
#define slaexc_c F_FUNC(slaexc_c,SLAEXC_C)
#define slag2_c F_FUNC(slag2_c,SLAG2_C)
#define slag2d_c F_FUNC(slag2d_c,SLAG2D_C)
#define slags2_c F_FUNC(slags2_c,SLAGS2_C)
#define slagtf_c F_FUNC(slagtf_c,SLAGTF_C)
#define slagtm_c F_FUNC(slagtm_c,SLAGTM_C)
#define slagts_c F_FUNC(slagts_c,SLAGTS_C)
#define slagv2_c F_FUNC(slagv2_c,SLAGV2_C)
#define slahqr_c F_FUNC(slahqr_c,SLAHQR_C)
#define slahr2_c F_FUNC(slahr2_c,SLAHR2_C)
#define slahrd_c F_FUNC(slahrd_c,SLAHRD_C)
#define slaic1_c F_FUNC(slaic1_c,SLAIC1_C)
#define slaisnan_c F_FUNC(slaisnan_c,SLAISNAN_C)
#define slaln2_c F_FUNC(slaln2_c,SLALN2_C)
#define slals0_c F_FUNC(slals0_c,SLALS0_C)
#define slalsa_c F_FUNC(slalsa_c,SLALSA_C)
#define slalsd_c F_FUNC(slalsd_c,SLALSD_C)
#define slamrg_c F_FUNC(slamrg_c,SLAMRG_C)
#define slaneg_c F_FUNC(slaneg_c,SLANEG_C)
#define slangb_c F_FUNC(slangb_c,SLANGB_C)
#define slange_c F_FUNC(slange_c,SLANGE_C)
#define slangt_c F_FUNC(slangt_c,SLANGT_C)
#define slanhs_c F_FUNC(slanhs_c,SLANHS_C)
#define slansb_c F_FUNC(slansb_c,SLANSB_C)
#define slansf_c F_FUNC(slansf_c,SLANSF_C)
#define slansp_c F_FUNC(slansp_c,SLANSP_C)
#define slanst_c F_FUNC(slanst_c,SLANST_C)
#define slansy_c F_FUNC(slansy_c,SLANSY_C)
#define slantb_c F_FUNC(slantb_c,SLANTB_C)
#define slantp_c F_FUNC(slantp_c,SLANTP_C)
#define slantr_c F_FUNC(slantr_c,SLANTR_C)
#define slanv2_c F_FUNC(slanv2_c,SLANV2_C)
#define slapll_c F_FUNC(slapll_c,SLAPLL_C)
#define slapmr_c F_FUNC(slapmr_c,SLAPMR_C)
#define slapmt_c F_FUNC(slapmt_c,SLAPMT_C)
#define slapy2_c F_FUNC(slapy2_c,SLAPY2_C)
#define slapy3_c F_FUNC(slapy3_c,SLAPY3_C)
#define slaqgb_c F_FUNC(slaqgb_c,SLAQGB_C)
#define slaqge_c F_FUNC(slaqge_c,SLAQGE_C)
#define slaqp2_c F_FUNC(slaqp2_c,SLAQP2_C)
#define slaqps_c F_FUNC(slaqps_c,SLAQPS_C)
#define slaqr0_c F_FUNC(slaqr0_c,SLAQR0_C)
#define slaqr1_c F_FUNC(slaqr1_c,SLAQR1_C)
#define slaqr2_c F_FUNC(slaqr2_c,SLAQR2_C)
#define slaqr3_c F_FUNC(slaqr3_c,SLAQR3_C)
#define slaqr4_c F_FUNC(slaqr4_c,SLAQR4_C)
#define slaqr5_c F_FUNC(slaqr5_c,SLAQR5_C)
#define slaqsb_c F_FUNC(slaqsb_c,SLAQSB_C)
#define slaqsp_c F_FUNC(slaqsp_c,SLAQSP_C)
#define slaqsy_c F_FUNC(slaqsy_c,SLAQSY_C)
#define slaqtr_c F_FUNC(slaqtr_c,SLAQTR_C)
#define slar1v_c F_FUNC(slar1v_c,SLAR1V_C)
#define slar2v_c F_FUNC(slar2v_c,SLAR2V_C)
#define slarf_c F_FUNC(slarf_c,SLARF_C)
#define slarfb_c F_FUNC(slarfb_c,SLARFB_C)
#define slarfg_c F_FUNC(slarfg_c,SLARFG_C)
#define slarfgp_c F_FUNC(slarfgp_c,SLARFGP_C)
#define slarft_c F_FUNC(slarft_c,SLARFT_C)
#define slarfx_c F_FUNC(slarfx_c,SLARFX_C)
#define slargv_c F_FUNC(slargv_c,SLARGV_C)
#define slarnv_c F_FUNC(slarnv_c,SLARNV_C)
#define slarra_c F_FUNC(slarra_c,SLARRA_C)
#define slarrb_c F_FUNC(slarrb_c,SLARRB_C)
#define slarrc_c F_FUNC(slarrc_c,SLARRC_C)
#define slarrd_c F_FUNC(slarrd_c,SLARRD_C)
#define slarre_c F_FUNC(slarre_c,SLARRE_C)
#define slarrf_c F_FUNC(slarrf_c,SLARRF_C)
#define slarrj_c F_FUNC(slarrj_c,SLARRJ_C)
#define slarrk_c F_FUNC(slarrk_c,SLARRK_C)
#define slarrr_c F_FUNC(slarrr_c,SLARRR_C)
#define slarrv_c F_FUNC(slarrv_c,SLARRV_C)
#define slarscl2_c F_FUNC(slarscl2_c,SLARSCL2_C)
#define slartg_c F_FUNC(slartg_c,SLARTG_C)
#define slartgp_c F_FUNC(slartgp_c,SLARTGP_C)
#define slartgs_c F_FUNC(slartgs_c,SLARTGS_C)
#define slartv_c F_FUNC(slartv_c,SLARTV_C)
#define slaruv_c F_FUNC(slaruv_c,SLARUV_C)
#define slarz_c F_FUNC(slarz_c,SLARZ_C)
#define slarzb_c F_FUNC(slarzb_c,SLARZB_C)
#define slarzt_c F_FUNC(slarzt_c,SLARZT_C)
#define slas2_c F_FUNC(slas2_c,SLAS2_C)
#define slascl_c F_FUNC(slascl_c,SLASCL_C)
#define slascl2_c F_FUNC(slascl2_c,SLASCL2_C)
#define slasd0_c F_FUNC(slasd0_c,SLASD0_C)
#define slasd1_c F_FUNC(slasd1_c,SLASD1_C)
#define slasd2_c F_FUNC(slasd2_c,SLASD2_C)
#define slasd3_c F_FUNC(slasd3_c,SLASD3_C)
#define slasd4_c F_FUNC(slasd4_c,SLASD4_C)
#define slasd5_c F_FUNC(slasd5_c,SLASD5_C)
#define slasd6_c F_FUNC(slasd6_c,SLASD6_C)
#define slasd7_c F_FUNC(slasd7_c,SLASD7_C)
#define slasd8_c F_FUNC(slasd8_c,SLASD8_C)
#define slasda_c F_FUNC(slasda_c,SLASDA_C)
#define slasdq_c F_FUNC(slasdq_c,SLASDQ_C)
#define slasdt_c F_FUNC(slasdt_c,SLASDT_C)
#define slaset_c F_FUNC(slaset_c,SLASET_C)
#define slasq1_c F_FUNC(slasq1_c,SLASQ1_C)
#define slasq2_c F_FUNC(slasq2_c,SLASQ2_C)
#define slasq3_c F_FUNC(slasq3_c,SLASQ3_C)
#define slasq4_c F_FUNC(slasq4_c,SLASQ4_C)
#define slasq5_c F_FUNC(slasq5_c,SLASQ5_C)
#define slasq6_c F_FUNC(slasq6_c,SLASQ6_C)
#define slasr_c F_FUNC(slasr_c,SLASR_C)
#define slasrt_c F_FUNC(slasrt_c,SLASRT_C)
#define slassq_c F_FUNC(slassq_c,SLASSQ_C)
#define slasv2_c F_FUNC(slasv2_c,SLASV2_C)
#define slaswp_c F_FUNC(slaswp_c,SLASWP_C)
#define slasy2_c F_FUNC(slasy2_c,SLASY2_C)
#define slasyf_c F_FUNC(slasyf_c,SLASYF_C)
#define slatbs_c F_FUNC(slatbs_c,SLATBS_C)
#define slatdf_c F_FUNC(slatdf_c,SLATDF_C)
#define slatps_c F_FUNC(slatps_c,SLATPS_C)
#define slatrd_c F_FUNC(slatrd_c,SLATRD_C)
#define slatrs_c F_FUNC(slatrs_c,SLATRS_C)
#define slatrz_c F_FUNC(slatrz_c,SLATRZ_C)
#define slatzm_c F_FUNC(slatzm_c,SLATZM_C)
#define slauu2_c F_FUNC(slauu2_c,SLAUU2_C)
#define slauum_c F_FUNC(slauum_c,SLAUUM_C)
#define sopgtr_c F_FUNC(sopgtr_c,SOPGTR_C)
#define sopmtr_c F_FUNC(sopmtr_c,SOPMTR_C)
#define sorbdb_c F_FUNC(sorbdb_c,SORBDB_C)
#define sorcsd_c F_FUNC(sorcsd_c,SORCSD_C)
#define sorg2l_c F_FUNC(sorg2l_c,SORG2L_C)
#define sorg2r_c F_FUNC(sorg2r_c,SORG2R_C)
#define sorgbr_c F_FUNC(sorgbr_c,SORGBR_C)
#define sorghr_c F_FUNC(sorghr_c,SORGHR_C)
#define sorgl2_c F_FUNC(sorgl2_c,SORGL2_C)
#define sorglq_c F_FUNC(sorglq_c,SORGLQ_C)
#define sorgql_c F_FUNC(sorgql_c,SORGQL_C)
#define sorgqr_c F_FUNC(sorgqr_c,SORGQR_C)
#define sorgr2_c F_FUNC(sorgr2_c,SORGR2_C)
#define sorgrq_c F_FUNC(sorgrq_c,SORGRQ_C)
#define sorgtr_c F_FUNC(sorgtr_c,SORGTR_C)
#define sorm2l_c F_FUNC(sorm2l_c,SORM2L_C)
#define sorm2r_c F_FUNC(sorm2r_c,SORM2R_C)
#define sormbr_c F_FUNC(sormbr_c,SORMBR_C)
#define sormhr_c F_FUNC(sormhr_c,SORMHR_C)
#define sorml2_c F_FUNC(sorml2_c,SORML2_C)
#define sormlq_c F_FUNC(sormlq_c,SORMLQ_C)
#define sormql_c F_FUNC(sormql_c,SORMQL_C)
#define sormqr_c F_FUNC(sormqr_c,SORMQR_C)
#define sormr2_c F_FUNC(sormr2_c,SORMR2_C)
#define sormr3_c F_FUNC(sormr3_c,SORMR3_C)
#define sormrq_c F_FUNC(sormrq_c,SORMRQ_C)
#define sormrz_c F_FUNC(sormrz_c,SORMRZ_C)
#define sormtr_c F_FUNC(sormtr_c,SORMTR_C)
#define spbcon_c F_FUNC(spbcon_c,SPBCON_C)
#define spbequ_c F_FUNC(spbequ_c,SPBEQU_C)
#define spbrfs_c F_FUNC(spbrfs_c,SPBRFS_C)
#define spbstf_c F_FUNC(spbstf_c,SPBSTF_C)
#define spbsv_c F_FUNC(spbsv_c,SPBSV_C)
#define spbsvx_c F_FUNC(spbsvx_c,SPBSVX_C)
#define spbtf2_c F_FUNC(spbtf2_c,SPBTF2_C)
#define spbtrf_c F_FUNC(spbtrf_c,SPBTRF_C)
#define spbtrs_c F_FUNC(spbtrs_c,SPBTRS_C)
#define spftrf_c F_FUNC(spftrf_c,SPFTRF_C)
#define spftri_c F_FUNC(spftri_c,SPFTRI_C)
#define spftrs_c F_FUNC(spftrs_c,SPFTRS_C)
#define spocon_c F_FUNC(spocon_c,SPOCON_C)
#define spoequ_c F_FUNC(spoequ_c,SPOEQU_C)
#define spoequb_c F_FUNC(spoequb_c,SPOEQUB_C)
#define sporfs_c F_FUNC(sporfs_c,SPORFS_C)
#define sporfsx_c F_FUNC(sporfsx_c,SPORFSX_C)
#define sposv_c F_FUNC(sposv_c,SPOSV_C)
#define sposvx_c F_FUNC(sposvx_c,SPOSVX_C)
#define sposvxx_c F_FUNC(sposvxx_c,SPOSVXX_C)
#define spotf2_c F_FUNC(spotf2_c,SPOTF2_C)
#define spotrf_c F_FUNC(spotrf_c,SPOTRF_C)
#define spotri_c F_FUNC(spotri_c,SPOTRI_C)
#define spotrs_c F_FUNC(spotrs_c,SPOTRS_C)
#define sppcon_c F_FUNC(sppcon_c,SPPCON_C)
#define sppequ_c F_FUNC(sppequ_c,SPPEQU_C)
#define spprfs_c F_FUNC(spprfs_c,SPPRFS_C)
#define sppsv_c F_FUNC(sppsv_c,SPPSV_C)
#define sppsvx_c F_FUNC(sppsvx_c,SPPSVX_C)
#define spptrf_c F_FUNC(spptrf_c,SPPTRF_C)
#define spptri_c F_FUNC(spptri_c,SPPTRI_C)
#define spptrs_c F_FUNC(spptrs_c,SPPTRS_C)
#define spstf2_c F_FUNC(spstf2_c,SPSTF2_C)
#define spstrf_c F_FUNC(spstrf_c,SPSTRF_C)
#define sptcon_c F_FUNC(sptcon_c,SPTCON_C)
#define spteqr_c F_FUNC(spteqr_c,SPTEQR_C)
#define sptrfs_c F_FUNC(sptrfs_c,SPTRFS_C)
#define sptsv_c F_FUNC(sptsv_c,SPTSV_C)
#define sptsvx_c F_FUNC(sptsvx_c,SPTSVX_C)
#define spttrf_c F_FUNC(spttrf_c,SPTTRF_C)
#define spttrs_c F_FUNC(spttrs_c,SPTTRS_C)
#define sptts2_c F_FUNC(sptts2_c,SPTTS2_C)
#define srscl_c F_FUNC(srscl_c,SRSCL_C)
#define ssbev_c F_FUNC(ssbev_c,SSBEV_C)
#define ssbevd_c F_FUNC(ssbevd_c,SSBEVD_C)
#define ssbevx_c F_FUNC(ssbevx_c,SSBEVX_C)
#define ssbgst_c F_FUNC(ssbgst_c,SSBGST_C)
#define ssbgv_c F_FUNC(ssbgv_c,SSBGV_C)
#define ssbgvd_c F_FUNC(ssbgvd_c,SSBGVD_C)
#define ssbgvx_c F_FUNC(ssbgvx_c,SSBGVX_C)
#define ssbtrd_c F_FUNC(ssbtrd_c,SSBTRD_C)
#define ssfrk_c F_FUNC(ssfrk_c,SSFRK_C)
#define sspcon_c F_FUNC(sspcon_c,SSPCON_C)
#define sspev_c F_FUNC(sspev_c,SSPEV_C)
#define sspevd_c F_FUNC(sspevd_c,SSPEVD_C)
#define sspevx_c F_FUNC(sspevx_c,SSPEVX_C)
#define sspgst_c F_FUNC(sspgst_c,SSPGST_C)
#define sspgv_c F_FUNC(sspgv_c,SSPGV_C)
#define sspgvd_c F_FUNC(sspgvd_c,SSPGVD_C)
#define sspgvx_c F_FUNC(sspgvx_c,SSPGVX_C)
#define ssprfs_c F_FUNC(ssprfs_c,SSPRFS_C)
#define sspsv_c F_FUNC(sspsv_c,SSPSV_C)
#define sspsvx_c F_FUNC(sspsvx_c,SSPSVX_C)
#define ssptrd_c F_FUNC(ssptrd_c,SSPTRD_C)
#define ssptrf_c F_FUNC(ssptrf_c,SSPTRF_C)
#define ssptri_c F_FUNC(ssptri_c,SSPTRI_C)
#define ssptrs_c F_FUNC(ssptrs_c,SSPTRS_C)
#define sstebz_c F_FUNC(sstebz_c,SSTEBZ_C)
#define sstedc_c F_FUNC(sstedc_c,SSTEDC_C)
#define sstegr_c F_FUNC(sstegr_c,SSTEGR_C)
#define sstein_c F_FUNC(sstein_c,SSTEIN_C)
#define sstemr_c F_FUNC(sstemr_c,SSTEMR_C)
#define ssteqr_c F_FUNC(ssteqr_c,SSTEQR_C)
#define ssterf_c F_FUNC(ssterf_c,SSTERF_C)
#define sstev_c F_FUNC(sstev_c,SSTEV_C)
#define sstevd_c F_FUNC(sstevd_c,SSTEVD_C)
#define sstevr_c F_FUNC(sstevr_c,SSTEVR_C)
#define sstevx_c F_FUNC(sstevx_c,SSTEVX_C)
#define ssycon_c F_FUNC(ssycon_c,SSYCON_C)
#define ssyconv_c F_FUNC(ssyconv_c,SSYCONV_C)
#define ssyequb_c F_FUNC(ssyequb_c,SSYEQUB_C)
#define ssyev_c F_FUNC(ssyev_c,SSYEV_C)
#define ssyevd_c F_FUNC(ssyevd_c,SSYEVD_C)
#define ssyevr_c F_FUNC(ssyevr_c,SSYEVR_C)
#define ssyevx_c F_FUNC(ssyevx_c,SSYEVX_C)
#define ssygs2_c F_FUNC(ssygs2_c,SSYGS2_C)
#define ssygst_c F_FUNC(ssygst_c,SSYGST_C)
#define ssygv_c F_FUNC(ssygv_c,SSYGV_C)
#define ssygvd_c F_FUNC(ssygvd_c,SSYGVD_C)
#define ssygvx_c F_FUNC(ssygvx_c,SSYGVX_C)
#define ssyrfs_c F_FUNC(ssyrfs_c,SSYRFS_C)
#define ssyrfsx_c F_FUNC(ssyrfsx_c,SSYRFSX_C)
#define ssysv_c F_FUNC(ssysv_c,SSYSV_C)
#define ssysvx_c F_FUNC(ssysvx_c,SSYSVX_C)
#define ssysvxx_c F_FUNC(ssysvxx_c,SSYSVXX_C)
#define ssyswapr_c F_FUNC(ssyswapr_c,SSYSWAPR_C)
#define ssytd2_c F_FUNC(ssytd2_c,SSYTD2_C)
#define ssytf2_c F_FUNC(ssytf2_c,SSYTF2_C)
#define ssytrd_c F_FUNC(ssytrd_c,SSYTRD_C)
#define ssytrf_c F_FUNC(ssytrf_c,SSYTRF_C)
#define ssytri_c F_FUNC(ssytri_c,SSYTRI_C)
#define ssytri2_c F_FUNC(ssytri2_c,SSYTRI2_C)
#define ssytri2x_c F_FUNC(ssytri2x_c,SSYTRI2X_C)
#define ssytrs_c F_FUNC(ssytrs_c,SSYTRS_C)
#define ssytrs2_c F_FUNC(ssytrs2_c,SSYTRS2_C)
#define stbcon_c F_FUNC(stbcon_c,STBCON_C)
#define stbrfs_c F_FUNC(stbrfs_c,STBRFS_C)
#define stbtrs_c F_FUNC(stbtrs_c,STBTRS_C)
#define stfsm_c F_FUNC(stfsm_c,STFSM_C)
#define stftri_c F_FUNC(stftri_c,STFTRI_C)
#define stfttp_c F_FUNC(stfttp_c,STFTTP_C)
#define stfttr_c F_FUNC(stfttr_c,STFTTR_C)
#define stgevc_c F_FUNC(stgevc_c,STGEVC_C)
#define stgex2_c F_FUNC(stgex2_c,STGEX2_C)
#define stgexc_c F_FUNC(stgexc_c,STGEXC_C)
#define stgsen_c F_FUNC(stgsen_c,STGSEN_C)
#define stgsja_c F_FUNC(stgsja_c,STGSJA_C)
#define stgsna_c F_FUNC(stgsna_c,STGSNA_C)
#define stgsy2_c F_FUNC(stgsy2_c,STGSY2_C)
#define stgsyl_c F_FUNC(stgsyl_c,STGSYL_C)
#define stpcon_c F_FUNC(stpcon_c,STPCON_C)
#define stprfs_c F_FUNC(stprfs_c,STPRFS_C)
#define stptri_c F_FUNC(stptri_c,STPTRI_C)
#define stptrs_c F_FUNC(stptrs_c,STPTRS_C)
#define stpttf_c F_FUNC(stpttf_c,STPTTF_C)
#define stpttr_c F_FUNC(stpttr_c,STPTTR_C)
#define strcon_c F_FUNC(strcon_c,STRCON_C)
#define strevc_c F_FUNC(strevc_c,STREVC_C)
#define strexc_c F_FUNC(strexc_c,STREXC_C)
#define strrfs_c F_FUNC(strrfs_c,STRRFS_C)
#define strsen_c F_FUNC(strsen_c,STRSEN_C)
#define strsna_c F_FUNC(strsna_c,STRSNA_C)
#define strsyl_c F_FUNC(strsyl_c,STRSYL_C)
#define strti2_c F_FUNC(strti2_c,STRTI2_C)
#define strtri_c F_FUNC(strtri_c,STRTRI_C)
#define strtrs_c F_FUNC(strtrs_c,STRTRS_C)
#define strttf_c F_FUNC(strttf_c,STRTTF_C)
#define strttp_c F_FUNC(strttp_c,STRTTP_C)
#define stzrqf_c F_FUNC(stzrqf_c,STZRQF_C)
#define stzrzf_c F_FUNC(stzrzf_c,STZRZF_C)
#define zbbcsd_c F_FUNC(zbbcsd_c,ZBBCSD_C)
#define zbdsqr_c F_FUNC(zbdsqr_c,ZBDSQR_C)
#define zcgesv_c F_FUNC(zcgesv_c,ZCGESV_C)
#define zcposv_c F_FUNC(zcposv_c,ZCPOSV_C)
#define zdrscl_c F_FUNC(zdrscl_c,ZDRSCL_C)
#define zgbbrd_c F_FUNC(zgbbrd_c,ZGBBRD_C)
#define zgbcon_c F_FUNC(zgbcon_c,ZGBCON_C)
#define zgbequ_c F_FUNC(zgbequ_c,ZGBEQU_C)
#define zgbequb_c F_FUNC(zgbequb_c,ZGBEQUB_C)
#define zgbrfs_c F_FUNC(zgbrfs_c,ZGBRFS_C)
#define zgbrfsx_c F_FUNC(zgbrfsx_c,ZGBRFSX_C)
#define zgbsv_c F_FUNC(zgbsv_c,ZGBSV_C)
#define zgbsvx_c F_FUNC(zgbsvx_c,ZGBSVX_C)
#define zgbsvxx_c F_FUNC(zgbsvxx_c,ZGBSVXX_C)
#define zgbtf2_c F_FUNC(zgbtf2_c,ZGBTF2_C)
#define zgbtrf_c F_FUNC(zgbtrf_c,ZGBTRF_C)
#define zgbtrs_c F_FUNC(zgbtrs_c,ZGBTRS_C)
#define zgebak_c F_FUNC(zgebak_c,ZGEBAK_C)
#define zgebal_c F_FUNC(zgebal_c,ZGEBAL_C)
#define zgebd2_c F_FUNC(zgebd2_c,ZGEBD2_C)
#define zgebrd_c F_FUNC(zgebrd_c,ZGEBRD_C)
#define zgecon_c F_FUNC(zgecon_c,ZGECON_C)
#define zgeequ_c F_FUNC(zgeequ_c,ZGEEQU_C)
#define zgeequb_c F_FUNC(zgeequb_c,ZGEEQUB_C)
#define zgees_c F_FUNC(zgees_c,ZGEES_C)
#define zgeesx_c F_FUNC(zgeesx_c,ZGEESX_C)
#define zgeev_c F_FUNC(zgeev_c,ZGEEV_C)
#define zgeevx_c F_FUNC(zgeevx_c,ZGEEVX_C)
#define zgegs_c F_FUNC(zgegs_c,ZGEGS_C)
#define zgegv_c F_FUNC(zgegv_c,ZGEGV_C)
#define zgehd2_c F_FUNC(zgehd2_c,ZGEHD2_C)
#define zgehrd_c F_FUNC(zgehrd_c,ZGEHRD_C)
#define zgelq2_c F_FUNC(zgelq2_c,ZGELQ2_C)
#define zgelqf_c F_FUNC(zgelqf_c,ZGELQF_C)
#define zgels_c F_FUNC(zgels_c,ZGELS_C)
#define zgelsd_c F_FUNC(zgelsd_c,ZGELSD_C)
#define zgelss_c F_FUNC(zgelss_c,ZGELSS_C)
#define zgelsx_c F_FUNC(zgelsx_c,ZGELSX_C)
#define zgelsy_c F_FUNC(zgelsy_c,ZGELSY_C)
#define zgeql2_c F_FUNC(zgeql2_c,ZGEQL2_C)
#define zgeqlf_c F_FUNC(zgeqlf_c,ZGEQLF_C)
#define zgeqp3_c F_FUNC(zgeqp3_c,ZGEQP3_C)
#define zgeqpf_c F_FUNC(zgeqpf_c,ZGEQPF_C)
#define zgeqr2_c F_FUNC(zgeqr2_c,ZGEQR2_C)
#define zgeqr2p_c F_FUNC(zgeqr2p_c,ZGEQR2P_C)
#define zgeqrf_c F_FUNC(zgeqrf_c,ZGEQRF_C)
#define zgeqrfp_c F_FUNC(zgeqrfp_c,ZGEQRFP_C)
#define zgerfs_c F_FUNC(zgerfs_c,ZGERFS_C)
#define zgerfsx_c F_FUNC(zgerfsx_c,ZGERFSX_C)
#define zgerq2_c F_FUNC(zgerq2_c,ZGERQ2_C)
#define zgerqf_c F_FUNC(zgerqf_c,ZGERQF_C)
#define zgesc2_c F_FUNC(zgesc2_c,ZGESC2_C)
#define zgesdd_c F_FUNC(zgesdd_c,ZGESDD_C)
#define zgesv_c F_FUNC(zgesv_c,ZGESV_C)
#define zgesvd_c F_FUNC(zgesvd_c,ZGESVD_C)
#define zgesvx_c F_FUNC(zgesvx_c,ZGESVX_C)
#define zgesvxx_c F_FUNC(zgesvxx_c,ZGESVXX_C)
#define zgetc2_c F_FUNC(zgetc2_c,ZGETC2_C)
#define zgetf2_c F_FUNC(zgetf2_c,ZGETF2_C)
#define zgetrf_c F_FUNC(zgetrf_c,ZGETRF_C)
#define zgetri_c F_FUNC(zgetri_c,ZGETRI_C)
#define zgetrs_c F_FUNC(zgetrs_c,ZGETRS_C)
#define zggbak_c F_FUNC(zggbak_c,ZGGBAK_C)
#define zggbal_c F_FUNC(zggbal_c,ZGGBAL_C)
#define zgges_c F_FUNC(zgges_c,ZGGES_C)
#define zggesx_c F_FUNC(zggesx_c,ZGGESX_C)
#define zggev_c F_FUNC(zggev_c,ZGGEV_C)
#define zggevx_c F_FUNC(zggevx_c,ZGGEVX_C)
#define zggglm_c F_FUNC(zggglm_c,ZGGGLM_C)
#define zgghrd_c F_FUNC(zgghrd_c,ZGGHRD_C)
#define zgglse_c F_FUNC(zgglse_c,ZGGLSE_C)
#define zggqrf_c F_FUNC(zggqrf_c,ZGGQRF_C)
#define zggrqf_c F_FUNC(zggrqf_c,ZGGRQF_C)
#define zggsvd_c F_FUNC(zggsvd_c,ZGGSVD_C)
#define zggsvp_c F_FUNC(zggsvp_c,ZGGSVP_C)
#define zgtcon_c F_FUNC(zgtcon_c,ZGTCON_C)
#define zgtrfs_c F_FUNC(zgtrfs_c,ZGTRFS_C)
#define zgtsv_c F_FUNC(zgtsv_c,ZGTSV_C)
#define zgtsvx_c F_FUNC(zgtsvx_c,ZGTSVX_C)
#define zgttrf_c F_FUNC(zgttrf_c,ZGTTRF_C)
#define zgttrs_c F_FUNC(zgttrs_c,ZGTTRS_C)
#define zgtts2_c F_FUNC(zgtts2_c,ZGTTS2_C)
#define zhbev_c F_FUNC(zhbev_c,ZHBEV_C)
#define zhbevd_c F_FUNC(zhbevd_c,ZHBEVD_C)
#define zhbevx_c F_FUNC(zhbevx_c,ZHBEVX_C)
#define zhbgst_c F_FUNC(zhbgst_c,ZHBGST_C)
#define zhbgv_c F_FUNC(zhbgv_c,ZHBGV_C)
#define zhbgvd_c F_FUNC(zhbgvd_c,ZHBGVD_C)
#define zhbgvx_c F_FUNC(zhbgvx_c,ZHBGVX_C)
#define zhbtrd_c F_FUNC(zhbtrd_c,ZHBTRD_C)
#define zhecon_c F_FUNC(zhecon_c,ZHECON_C)
#define zheequb_c F_FUNC(zheequb_c,ZHEEQUB_C)
#define zheev_c F_FUNC(zheev_c,ZHEEV_C)
#define zheevd_c F_FUNC(zheevd_c,ZHEEVD_C)
#define zheevr_c F_FUNC(zheevr_c,ZHEEVR_C)
#define zheevx_c F_FUNC(zheevx_c,ZHEEVX_C)
#define zhegs2_c F_FUNC(zhegs2_c,ZHEGS2_C)
#define zhegst_c F_FUNC(zhegst_c,ZHEGST_C)
#define zhegv_c F_FUNC(zhegv_c,ZHEGV_C)
#define zhegvd_c F_FUNC(zhegvd_c,ZHEGVD_C)
#define zhegvx_c F_FUNC(zhegvx_c,ZHEGVX_C)
#define zherfs_c F_FUNC(zherfs_c,ZHERFS_C)
#define zherfsx_c F_FUNC(zherfsx_c,ZHERFSX_C)
#define zhesv_c F_FUNC(zhesv_c,ZHESV_C)
#define zhesvx_c F_FUNC(zhesvx_c,ZHESVX_C)
#define zhesvxx_c F_FUNC(zhesvxx_c,ZHESVXX_C)
#define zhetd2_c F_FUNC(zhetd2_c,ZHETD2_C)
#define zhetf2_c F_FUNC(zhetf2_c,ZHETF2_C)
#define zhetrd_c F_FUNC(zhetrd_c,ZHETRD_C)
#define zhetrf_c F_FUNC(zhetrf_c,ZHETRF_C)
#define zhetri_c F_FUNC(zhetri_c,ZHETRI_C)
#define zhetrs_c F_FUNC(zhetrs_c,ZHETRS_C)
#define zhetrs2_c F_FUNC(zhetrs2_c,ZHETRS2_C)
#define zhfrk_c F_FUNC(zhfrk_c,ZHFRK_C)
#define zhgeqz_c F_FUNC(zhgeqz_c,ZHGEQZ_C)
#define zhpcon_c F_FUNC(zhpcon_c,ZHPCON_C)
#define zhpev_c F_FUNC(zhpev_c,ZHPEV_C)
#define zhpevd_c F_FUNC(zhpevd_c,ZHPEVD_C)
#define zhpevx_c F_FUNC(zhpevx_c,ZHPEVX_C)
#define zhpgst_c F_FUNC(zhpgst_c,ZHPGST_C)
#define zhpgv_c F_FUNC(zhpgv_c,ZHPGV_C)
#define zhpgvd_c F_FUNC(zhpgvd_c,ZHPGVD_C)
#define zhpgvx_c F_FUNC(zhpgvx_c,ZHPGVX_C)
#define zhprfs_c F_FUNC(zhprfs_c,ZHPRFS_C)
#define zhpsv_c F_FUNC(zhpsv_c,ZHPSV_C)
#define zhpsvx_c F_FUNC(zhpsvx_c,ZHPSVX_C)
#define zhptrd_c F_FUNC(zhptrd_c,ZHPTRD_C)
#define zhptrf_c F_FUNC(zhptrf_c,ZHPTRF_C)
#define zhptri_c F_FUNC(zhptri_c,ZHPTRI_C)
#define zhptrs_c F_FUNC(zhptrs_c,ZHPTRS_C)
#define zhsein_c F_FUNC(zhsein_c,ZHSEIN_C)
#define zhseqr_c F_FUNC(zhseqr_c,ZHSEQR_C)
#define zla_gbamv_c F_FUNC(zla_gbamv_c,ZLA_GBAMV_C)
#define zla_gbrcond_c_c F_FUNC(zla_gbrcond_c_c,ZLA_GBRCOND_C_C)
#define zla_gbrcond_x_c F_FUNC(zla_gbrcond_x_c,ZLA_GBRCOND_X_C)
#define zla_gbrfsx_extended_c F_FUNC(zla_gbrfsx_extended_c,ZLA_GBRFSX_EXTENDED_C)
#define zla_gbrpvgrw_c F_FUNC(zla_gbrpvgrw_c,ZLA_GBRPVGRW_C)
#define zla_geamv_c F_FUNC(zla_geamv_c,ZLA_GEAMV_C)
#define zla_gercond_c_c F_FUNC(zla_gercond_c_c,ZLA_GERCOND_C_C)
#define zla_gercond_x_c F_FUNC(zla_gercond_x_c,ZLA_GERCOND_X_C)
#define zla_gerfsx_extended_c F_FUNC(zla_gerfsx_extended_c,ZLA_GERFSX_EXTENDED_C)
#define zla_heamv_c F_FUNC(zla_heamv_c,ZLA_HEAMV_C)
#define zla_hercond_c_c F_FUNC(zla_hercond_c_c,ZLA_HERCOND_C_C)
#define zla_hercond_x_c F_FUNC(zla_hercond_x_c,ZLA_HERCOND_X_C)
#define zla_herfsx_extended_c F_FUNC(zla_herfsx_extended_c,ZLA_HERFSX_EXTENDED_C)
#define zla_herpvgrw_c F_FUNC(zla_herpvgrw_c,ZLA_HERPVGRW_C)
#define zla_lin_berr_c F_FUNC(zla_lin_berr_c,ZLA_LIN_BERR_C)
#define zla_porcond_c_c F_FUNC(zla_porcond_c_c,ZLA_PORCOND_C_C)
#define zla_porcond_x_c F_FUNC(zla_porcond_x_c,ZLA_PORCOND_X_C)
#define zla_porfsx_extended_c F_FUNC(zla_porfsx_extended_c,ZLA_PORFSX_EXTENDED_C)
#define zla_porpvgrw_c F_FUNC(zla_porpvgrw_c,ZLA_PORPVGRW_C)
#define zla_rpvgrw_c F_FUNC(zla_rpvgrw_c,ZLA_RPVGRW_C)
#define zla_syamv_c F_FUNC(zla_syamv_c,ZLA_SYAMV_C)
#define zla_syrcond_c_c F_FUNC(zla_syrcond_c_c,ZLA_SYRCOND_C_C)
#define zla_syrcond_x_c F_FUNC(zla_syrcond_x_c,ZLA_SYRCOND_X_C)
#define zla_syrfsx_extended_c F_FUNC(zla_syrfsx_extended_c,ZLA_SYRFSX_EXTENDED_C)
#define zla_syrpvgrw_c F_FUNC(zla_syrpvgrw_c,ZLA_SYRPVGRW_C)
#define zla_wwaddw_c F_FUNC(zla_wwaddw_c,ZLA_WWADDW_C)
#define zlabrd_c F_FUNC(zlabrd_c,ZLABRD_C)
#define zlacgv_c F_FUNC(zlacgv_c,ZLACGV_C)
#define zlacn2_c F_FUNC(zlacn2_c,ZLACN2_C)
#define zlacon_c F_FUNC(zlacon_c,ZLACON_C)
#define zlacp2_c F_FUNC(zlacp2_c,ZLACP2_C)
#define zlacpy_c F_FUNC(zlacpy_c,ZLACPY_C)
#define zlacrm_c F_FUNC(zlacrm_c,ZLACRM_C)
#define zlacrt_c F_FUNC(zlacrt_c,ZLACRT_C)
#define zladiv_c F_FUNC(zladiv_c,ZLADIV_C)
#define zlaed0_c F_FUNC(zlaed0_c,ZLAED0_C)
#define zlaed7_c F_FUNC(zlaed7_c,ZLAED7_C)
#define zlaed8_c F_FUNC(zlaed8_c,ZLAED8_C)
#define zlaein_c F_FUNC(zlaein_c,ZLAEIN_C)
#define zlaesy_c F_FUNC(zlaesy_c,ZLAESY_C)
#define zlaev2_c F_FUNC(zlaev2_c,ZLAEV2_C)
#define zlag2c_c F_FUNC(zlag2c_c,ZLAG2C_C)
#define zlags2_c F_FUNC(zlags2_c,ZLAGS2_C)
#define zlagtm_c F_FUNC(zlagtm_c,ZLAGTM_C)
#define zlahef_c F_FUNC(zlahef_c,ZLAHEF_C)
#define zlahqr_c F_FUNC(zlahqr_c,ZLAHQR_C)
#define zlahr2_c F_FUNC(zlahr2_c,ZLAHR2_C)
#define zlahrd_c F_FUNC(zlahrd_c,ZLAHRD_C)
#define zlaic1_c F_FUNC(zlaic1_c,ZLAIC1_C)
#define zlals0_c F_FUNC(zlals0_c,ZLALS0_C)
#define zlalsa_c F_FUNC(zlalsa_c,ZLALSA_C)
#define zlalsd_c F_FUNC(zlalsd_c,ZLALSD_C)
#define zlangb_c F_FUNC(zlangb_c,ZLANGB_C)
#define zlange_c F_FUNC(zlange_c,ZLANGE_C)
#define zlangt_c F_FUNC(zlangt_c,ZLANGT_C)
#define zlanhb_c F_FUNC(zlanhb_c,ZLANHB_C)
#define zlanhe_c F_FUNC(zlanhe_c,ZLANHE_C)
#define zlanhf_c F_FUNC(zlanhf_c,ZLANHF_C)
#define zlanhp_c F_FUNC(zlanhp_c,ZLANHP_C)
#define zlanhs_c F_FUNC(zlanhs_c,ZLANHS_C)
#define zlanht_c F_FUNC(zlanht_c,ZLANHT_C)
#define zlansb_c F_FUNC(zlansb_c,ZLANSB_C)
#define zlansp_c F_FUNC(zlansp_c,ZLANSP_C)
#define zlansy_c F_FUNC(zlansy_c,ZLANSY_C)
#define zlantb_c F_FUNC(zlantb_c,ZLANTB_C)
#define zlantp_c F_FUNC(zlantp_c,ZLANTP_C)
#define zlantr_c F_FUNC(zlantr_c,ZLANTR_C)
#define zlapll_c F_FUNC(zlapll_c,ZLAPLL_C)
#define zlapmr_c F_FUNC(zlapmr_c,ZLAPMR_C)
#define zlapmt_c F_FUNC(zlapmt_c,ZLAPMT_C)
#define zlaqgb_c F_FUNC(zlaqgb_c,ZLAQGB_C)
#define zlaqge_c F_FUNC(zlaqge_c,ZLAQGE_C)
#define zlaqhb_c F_FUNC(zlaqhb_c,ZLAQHB_C)
#define zlaqhe_c F_FUNC(zlaqhe_c,ZLAQHE_C)
#define zlaqhp_c F_FUNC(zlaqhp_c,ZLAQHP_C)
#define zlaqp2_c F_FUNC(zlaqp2_c,ZLAQP2_C)
#define zlaqps_c F_FUNC(zlaqps_c,ZLAQPS_C)
#define zlaqr0_c F_FUNC(zlaqr0_c,ZLAQR0_C)
#define zlaqr1_c F_FUNC(zlaqr1_c,ZLAQR1_C)
#define zlaqr2_c F_FUNC(zlaqr2_c,ZLAQR2_C)
#define zlaqr3_c F_FUNC(zlaqr3_c,ZLAQR3_C)
#define zlaqr4_c F_FUNC(zlaqr4_c,ZLAQR4_C)
#define zlaqr5_c F_FUNC(zlaqr5_c,ZLAQR5_C)
#define zlaqsb_c F_FUNC(zlaqsb_c,ZLAQSB_C)
#define zlaqsp_c F_FUNC(zlaqsp_c,ZLAQSP_C)
#define zlaqsy_c F_FUNC(zlaqsy_c,ZLAQSY_C)
#define zlar1v_c F_FUNC(zlar1v_c,ZLAR1V_C)
#define zlar2v_c F_FUNC(zlar2v_c,ZLAR2V_C)
#define zlarcm_c F_FUNC(zlarcm_c,ZLARCM_C)
#define zlarf_c F_FUNC(zlarf_c,ZLARF_C)
#define zlarfb_c F_FUNC(zlarfb_c,ZLARFB_C)
#define zlarfg_c F_FUNC(zlarfg_c,ZLARFG_C)
#define zlarfgp_c F_FUNC(zlarfgp_c,ZLARFGP_C)
#define zlarft_c F_FUNC(zlarft_c,ZLARFT_C)
#define zlarfx_c F_FUNC(zlarfx_c,ZLARFX_C)
#define zlargv_c F_FUNC(zlargv_c,ZLARGV_C)
#define zlarnv_c F_FUNC(zlarnv_c,ZLARNV_C)
#define zlarrv_c F_FUNC(zlarrv_c,ZLARRV_C)
#define zlarscl2_c F_FUNC(zlarscl2_c,ZLARSCL2_C)
#define zlartg_c F_FUNC(zlartg_c,ZLARTG_C)
#define zlartv_c F_FUNC(zlartv_c,ZLARTV_C)
#define zlarz_c F_FUNC(zlarz_c,ZLARZ_C)
#define zlarzb_c F_FUNC(zlarzb_c,ZLARZB_C)
#define zlarzt_c F_FUNC(zlarzt_c,ZLARZT_C)
#define zlascl_c F_FUNC(zlascl_c,ZLASCL_C)
#define zlascl2_c F_FUNC(zlascl2_c,ZLASCL2_C)
#define zlaset_c F_FUNC(zlaset_c,ZLASET_C)
#define zlasr_c F_FUNC(zlasr_c,ZLASR_C)
#define zlassq_c F_FUNC(zlassq_c,ZLASSQ_C)
#define zlaswp_c F_FUNC(zlaswp_c,ZLASWP_C)
#define zlasyf_c F_FUNC(zlasyf_c,ZLASYF_C)
#define zlat2c_c F_FUNC(zlat2c_c,ZLAT2C_C)
#define zlatbs_c F_FUNC(zlatbs_c,ZLATBS_C)
#define zlatdf_c F_FUNC(zlatdf_c,ZLATDF_C)
#define zlatps_c F_FUNC(zlatps_c,ZLATPS_C)
#define zlatrd_c F_FUNC(zlatrd_c,ZLATRD_C)
#define zlatrs_c F_FUNC(zlatrs_c,ZLATRS_C)
#define zlatrz_c F_FUNC(zlatrz_c,ZLATRZ_C)
#define zlatzm_c F_FUNC(zlatzm_c,ZLATZM_C)
#define zlauu2_c F_FUNC(zlauu2_c,ZLAUU2_C)
#define zlauum_c F_FUNC(zlauum_c,ZLAUUM_C)
#define zpbcon_c F_FUNC(zpbcon_c,ZPBCON_C)
#define zpbequ_c F_FUNC(zpbequ_c,ZPBEQU_C)
#define zpbrfs_c F_FUNC(zpbrfs_c,ZPBRFS_C)
#define zpbstf_c F_FUNC(zpbstf_c,ZPBSTF_C)
#define zpbsv_c F_FUNC(zpbsv_c,ZPBSV_C)
#define zpbsvx_c F_FUNC(zpbsvx_c,ZPBSVX_C)
#define zpbtf2_c F_FUNC(zpbtf2_c,ZPBTF2_C)
#define zpbtrf_c F_FUNC(zpbtrf_c,ZPBTRF_C)
#define zpbtrs_c F_FUNC(zpbtrs_c,ZPBTRS_C)
#define zpftrf_c F_FUNC(zpftrf_c,ZPFTRF_C)
#define zpftri_c F_FUNC(zpftri_c,ZPFTRI_C)
#define zpftrs_c F_FUNC(zpftrs_c,ZPFTRS_C)
#define zpocon_c F_FUNC(zpocon_c,ZPOCON_C)
#define zpoequ_c F_FUNC(zpoequ_c,ZPOEQU_C)
#define zpoequb_c F_FUNC(zpoequb_c,ZPOEQUB_C)
#define zporfs_c F_FUNC(zporfs_c,ZPORFS_C)
#define zporfsx_c F_FUNC(zporfsx_c,ZPORFSX_C)
#define zposv_c F_FUNC(zposv_c,ZPOSV_C)
#define zposvx_c F_FUNC(zposvx_c,ZPOSVX_C)
#define zposvxx_c F_FUNC(zposvxx_c,ZPOSVXX_C)
#define zpotf2_c F_FUNC(zpotf2_c,ZPOTF2_C)
#define zpotrf_c F_FUNC(zpotrf_c,ZPOTRF_C)
#define zpotri_c F_FUNC(zpotri_c,ZPOTRI_C)
#define zpotrs_c F_FUNC(zpotrs_c,ZPOTRS_C)
#define zppcon_c F_FUNC(zppcon_c,ZPPCON_C)
#define zppequ_c F_FUNC(zppequ_c,ZPPEQU_C)
#define zpprfs_c F_FUNC(zpprfs_c,ZPPRFS_C)
#define zppsv_c F_FUNC(zppsv_c,ZPPSV_C)
#define zppsvx_c F_FUNC(zppsvx_c,ZPPSVX_C)
#define zpptrf_c F_FUNC(zpptrf_c,ZPPTRF_C)
#define zpptri_c F_FUNC(zpptri_c,ZPPTRI_C)
#define zpptrs_c F_FUNC(zpptrs_c,ZPPTRS_C)
#define zpstf2_c F_FUNC(zpstf2_c,ZPSTF2_C)
#define zpstrf_c F_FUNC(zpstrf_c,ZPSTRF_C)
#define zptcon_c F_FUNC(zptcon_c,ZPTCON_C)
#define zpteqr_c F_FUNC(zpteqr_c,ZPTEQR_C)
#define zptrfs_c F_FUNC(zptrfs_c,ZPTRFS_C)
#define zptsv_c F_FUNC(zptsv_c,ZPTSV_C)
#define zptsvx_c F_FUNC(zptsvx_c,ZPTSVX_C)
#define zpttrf_c F_FUNC(zpttrf_c,ZPTTRF_C)
#define zpttrs_c F_FUNC(zpttrs_c,ZPTTRS_C)
#define zptts2_c F_FUNC(zptts2_c,ZPTTS2_C)
#define zrot_c F_FUNC(zrot_c,ZROT_C)
#define zspcon_c F_FUNC(zspcon_c,ZSPCON_C)
#define zspmv_c F_FUNC(zspmv_c,ZSPMV_C)
#define zspr_c F_FUNC(zspr_c,ZSPR_C)
#define zsprfs_c F_FUNC(zsprfs_c,ZSPRFS_C)
#define zspsv_c F_FUNC(zspsv_c,ZSPSV_C)
#define zspsvx_c F_FUNC(zspsvx_c,ZSPSVX_C)
#define zsptrf_c F_FUNC(zsptrf_c,ZSPTRF_C)
#define zsptri_c F_FUNC(zsptri_c,ZSPTRI_C)
#define zsptrs_c F_FUNC(zsptrs_c,ZSPTRS_C)
#define zstedc_c F_FUNC(zstedc_c,ZSTEDC_C)
#define zstegr_c F_FUNC(zstegr_c,ZSTEGR_C)
#define zstein_c F_FUNC(zstein_c,ZSTEIN_C)
#define zstemr_c F_FUNC(zstemr_c,ZSTEMR_C)
#define zsteqr_c F_FUNC(zsteqr_c,ZSTEQR_C)
#define zsycon_c F_FUNC(zsycon_c,ZSYCON_C)
#define zsyconv_c F_FUNC(zsyconv_c,ZSYCONV_C)
#define zsyequb_c F_FUNC(zsyequb_c,ZSYEQUB_C)
#define zsymv_c F_FUNC(zsymv_c,ZSYMV_C)
#define zsyr_c F_FUNC(zsyr_c,ZSYR_C)
#define zsyrfs_c F_FUNC(zsyrfs_c,ZSYRFS_C)
#define zsyrfsx_c F_FUNC(zsyrfsx_c,ZSYRFSX_C)
#define zsysv_c F_FUNC(zsysv_c,ZSYSV_C)
#define zsysvx_c F_FUNC(zsysvx_c,ZSYSVX_C)
#define zsysvxx_c F_FUNC(zsysvxx_c,ZSYSVXX_C)
#define zsyswapr_c F_FUNC(zsyswapr_c,ZSYSWAPR_C)
#define zsytf2_c F_FUNC(zsytf2_c,ZSYTF2_C)
#define zsytrf_c F_FUNC(zsytrf_c,ZSYTRF_C)
#define zsytri_c F_FUNC(zsytri_c,ZSYTRI_C)
#define zsytri2_c F_FUNC(zsytri2_c,ZSYTRI2_C)
#define zsytri2x_c F_FUNC(zsytri2x_c,ZSYTRI2X_C)
#define zsytrs_c F_FUNC(zsytrs_c,ZSYTRS_C)
#define zsytrs2_c F_FUNC(zsytrs2_c,ZSYTRS2_C)
#define ztbcon_c F_FUNC(ztbcon_c,ZTBCON_C)
#define ztbrfs_c F_FUNC(ztbrfs_c,ZTBRFS_C)
#define ztbtrs_c F_FUNC(ztbtrs_c,ZTBTRS_C)
#define ztfsm_c F_FUNC(ztfsm_c,ZTFSM_C)
#define ztftri_c F_FUNC(ztftri_c,ZTFTRI_C)
#define ztfttp_c F_FUNC(ztfttp_c,ZTFTTP_C)
#define ztfttr_c F_FUNC(ztfttr_c,ZTFTTR_C)
#define ztgevc_c F_FUNC(ztgevc_c,ZTGEVC_C)
#define ztgex2_c F_FUNC(ztgex2_c,ZTGEX2_C)
#define ztgexc_c F_FUNC(ztgexc_c,ZTGEXC_C)
#define ztgsen_c F_FUNC(ztgsen_c,ZTGSEN_C)
#define ztgsja_c F_FUNC(ztgsja_c,ZTGSJA_C)
#define ztgsna_c F_FUNC(ztgsna_c,ZTGSNA_C)
#define ztgsy2_c F_FUNC(ztgsy2_c,ZTGSY2_C)
#define ztgsyl_c F_FUNC(ztgsyl_c,ZTGSYL_C)
#define ztpcon_c F_FUNC(ztpcon_c,ZTPCON_C)
#define ztprfs_c F_FUNC(ztprfs_c,ZTPRFS_C)
#define ztptri_c F_FUNC(ztptri_c,ZTPTRI_C)
#define ztptrs_c F_FUNC(ztptrs_c,ZTPTRS_C)
#define ztpttf_c F_FUNC(ztpttf_c,ZTPTTF_C)
#define ztpttr_c F_FUNC(ztpttr_c,ZTPTTR_C)
#define ztrcon_c F_FUNC(ztrcon_c,ZTRCON_C)
#define ztrevc_c F_FUNC(ztrevc_c,ZTREVC_C)
#define ztrexc_c F_FUNC(ztrexc_c,ZTREXC_C)
#define ztrrfs_c F_FUNC(ztrrfs_c,ZTRRFS_C)
#define ztrsen_c F_FUNC(ztrsen_c,ZTRSEN_C)
#define ztrsna_c F_FUNC(ztrsna_c,ZTRSNA_C)
#define ztrsyl_c F_FUNC(ztrsyl_c,ZTRSYL_C)
#define ztrti2_c F_FUNC(ztrti2_c,ZTRTI2_C)
#define ztrtri_c F_FUNC(ztrtri_c,ZTRTRI_C)
#define ztrtrs_c F_FUNC(ztrtrs_c,ZTRTRS_C)
#define ztrttf_c F_FUNC(ztrttf_c,ZTRTTF_C)
#define ztrttp_c F_FUNC(ztrttp_c,ZTRTTP_C)
#define ztzrqf_c F_FUNC(ztzrqf_c,ZTZRQF_C)
#define ztzrzf_c F_FUNC(ztzrzf_c,ZTZRZF_C)
#define zunbdb_c F_FUNC(zunbdb_c,ZUNBDB_C)
#define zuncsd_c F_FUNC(zuncsd_c,ZUNCSD_C)
#define zung2l_c F_FUNC(zung2l_c,ZUNG2L_C)
#define zung2r_c F_FUNC(zung2r_c,ZUNG2R_C)
#define zungbr_c F_FUNC(zungbr_c,ZUNGBR_C)
#define zunghr_c F_FUNC(zunghr_c,ZUNGHR_C)
#define zungl2_c F_FUNC(zungl2_c,ZUNGL2_C)
#define zunglq_c F_FUNC(zunglq_c,ZUNGLQ_C)
#define zungql_c F_FUNC(zungql_c,ZUNGQL_C)
#define zungqr_c F_FUNC(zungqr_c,ZUNGQR_C)
#define zungr2_c F_FUNC(zungr2_c,ZUNGR2_C)
#define zungrq_c F_FUNC(zungrq_c,ZUNGRQ_C)
#define zungtr_c F_FUNC(zungtr_c,ZUNGTR_C)
#define zunm2l_c F_FUNC(zunm2l_c,ZUNM2L_C)
#define zunm2r_c F_FUNC(zunm2r_c,ZUNM2R_C)
#define zunmbr_c F_FUNC(zunmbr_c,ZUNMBR_C)
#define zunmhr_c F_FUNC(zunmhr_c,ZUNMHR_C)
#define zunml2_c F_FUNC(zunml2_c,ZUNML2_C)
#define zunmlq_c F_FUNC(zunmlq_c,ZUNMLQ_C)
#define zunmql_c F_FUNC(zunmql_c,ZUNMQL_C)
#define zunmqr_c F_FUNC(zunmqr_c,ZUNMQR_C)
#define zunmr2_c F_FUNC(zunmr2_c,ZUNMR2_C)
#define zunmr3_c F_FUNC(zunmr3_c,ZUNMR3_C)
#define zunmrq_c F_FUNC(zunmrq_c,ZUNMRQ_C)
#define zunmrz_c F_FUNC(zunmrz_c,ZUNMRZ_C)
#define zunmtr_c F_FUNC(zunmtr_c,ZUNMTR_C)
#define zupgtr_c F_FUNC(zupgtr_c,ZUPGTR_C)
#define zupmtr_c F_FUNC(zupmtr_c,ZUPMTR_C)
#endif
