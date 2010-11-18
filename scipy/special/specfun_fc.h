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

FORTRAN_CALLSPEC void F_FUNC(clqmn_c,CLQMN_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lqmn_c,LQMN_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clpmn_c,CLPMN_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jdzo_c,JDZO_C)(fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(bernob_c,BERNOB_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(bernoa_c,BERNOA_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csphjy_c,CSPHJY_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpmns_c,LPMNS_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(eulera_c,EULERA_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clqn_c,CLQN_C)(fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(airyzo_c,AIRYZO_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(eulerb_c,EULERB_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cva1_c,CVA1_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lqnb_c,LQNB_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lamv_c,LAMV_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lagzo_c,LAGZO_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(legzo_c,LEGZO_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(pbdv_c,PBDV_C)(fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cerzo_c,CERZO_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lamn_c,LAMN_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clpn_c,CLPN_C)(fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lqmns_c,LQMNS_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chgm_c,CHGM_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpmn_c,LPMN_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(fcszo_c,FCSZO_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(aswfb_c,ASWFB_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lqna_c,LQNA_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbdn_c,CPBDN_C)(fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpn_c,LPN_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(fcoef_c,FCOEF_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sphi_c,SPHI_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rcty_c,RCTY_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpni_c,LPNI_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cyzo_c,CYZO_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csphik_c,CSPHIK_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sphj_c,SPHJ_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(othpl_c,OTHPL_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(klvnzo_c,KLVNZO_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jyzo_c,JYZO_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rctj_c,RCTJ_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(herzo_c,HERZO_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sphk_c,SPHK_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(pbvv_c,PBVV_C)(fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(segv_c,SEGV_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sphy_c,SPHY_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);

#if !defined(NO_FORTRAN_MANGLING)
#define clqmn_c F_FUNC(clqmn_c,CLQMN_C)
#define lqmn_c F_FUNC(lqmn_c,LQMN_C)
#define clpmn_c F_FUNC(clpmn_c,CLPMN_C)
#define jdzo_c F_FUNC(jdzo_c,JDZO_C)
#define bernob_c F_FUNC(bernob_c,BERNOB_C)
#define bernoa_c F_FUNC(bernoa_c,BERNOA_C)
#define csphjy_c F_FUNC(csphjy_c,CSPHJY_C)
#define lpmns_c F_FUNC(lpmns_c,LPMNS_C)
#define eulera_c F_FUNC(eulera_c,EULERA_C)
#define clqn_c F_FUNC(clqn_c,CLQN_C)
#define airyzo_c F_FUNC(airyzo_c,AIRYZO_C)
#define eulerb_c F_FUNC(eulerb_c,EULERB_C)
#define cva1_c F_FUNC(cva1_c,CVA1_C)
#define lqnb_c F_FUNC(lqnb_c,LQNB_C)
#define lamv_c F_FUNC(lamv_c,LAMV_C)
#define lagzo_c F_FUNC(lagzo_c,LAGZO_C)
#define legzo_c F_FUNC(legzo_c,LEGZO_C)
#define pbdv_c F_FUNC(pbdv_c,PBDV_C)
#define cerzo_c F_FUNC(cerzo_c,CERZO_C)
#define lamn_c F_FUNC(lamn_c,LAMN_C)
#define clpn_c F_FUNC(clpn_c,CLPN_C)
#define lqmns_c F_FUNC(lqmns_c,LQMNS_C)
#define chgm_c F_FUNC(chgm_c,CHGM_C)
#define lpmn_c F_FUNC(lpmn_c,LPMN_C)
#define fcszo_c F_FUNC(fcszo_c,FCSZO_C)
#define aswfb_c F_FUNC(aswfb_c,ASWFB_C)
#define lqna_c F_FUNC(lqna_c,LQNA_C)
#define cpbdn_c F_FUNC(cpbdn_c,CPBDN_C)
#define lpn_c F_FUNC(lpn_c,LPN_C)
#define fcoef_c F_FUNC(fcoef_c,FCOEF_C)
#define sphi_c F_FUNC(sphi_c,SPHI_C)
#define rcty_c F_FUNC(rcty_c,RCTY_C)
#define lpni_c F_FUNC(lpni_c,LPNI_C)
#define cyzo_c F_FUNC(cyzo_c,CYZO_C)
#define csphik_c F_FUNC(csphik_c,CSPHIK_C)
#define sphj_c F_FUNC(sphj_c,SPHJ_C)
#define othpl_c F_FUNC(othpl_c,OTHPL_C)
#define klvnzo_c F_FUNC(klvnzo_c,KLVNZO_C)
#define jyzo_c F_FUNC(jyzo_c,JYZO_C)
#define rctj_c F_FUNC(rctj_c,RCTJ_C)
#define herzo_c F_FUNC(herzo_c,HERZO_C)
#define sphk_c F_FUNC(sphk_c,SPHK_C)
#define pbvv_c F_FUNC(pbvv_c,PBVV_C)
#define segv_c F_FUNC(segv_c,SEGV_C)
#define sphy_c F_FUNC(sphy_c,SPHY_C)
#endif
