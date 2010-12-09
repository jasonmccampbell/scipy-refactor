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
FORTRAN_CALLSPEC void F_FUNC(cpdsa_c,CPDSA_C)(fwi_integer_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cfs_c,CFS_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lqmn_c,LQMN_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clpmn_c,CLPMN_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(vvsa_c,VVSA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jdzo_c,JDZO_C)(fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cbk_c,CBK_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cjy01_c,CJY01_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rmn2sp_c,RMN2SP_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(bernob_c,BERNOB_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(bernoa_c,BERNOA_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(qstar_c,QSTAR_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cv0_c,CV0_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cvqm_c,CVQM_C)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cvql_c,CVQL_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csphjy_c,CSPHJY_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(msta1_c,MSTA1_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(msta2_c,MSTA2_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(envj_c,ENVJ_C)(fwr_real_x8_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ittjyb_c,ITTJYB_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ittjya_c,ITTJYA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cjylv_c,CJYLV_C)(fwr_dbl_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rmn2l_c,RMN2L_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(psi_spec_c,PSI_SPEC_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cva2_c,CVA2_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpmns_c,LPMNS_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cerf_c,CERF_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rswfp_c,RSWFP_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jyndd_c,JYNDD_C)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(gam0_c,GAM0_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cisib_c,CISIB_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(eulera_c,EULERA_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(refine_c,REFINE_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cisia_c,CISIA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(itsl0_c,ITSL0_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stvl1_c,STVL1_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clqn_c,CLQN_C)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stvl0_c,STVL0_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(airyzo_c,AIRYZO_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(error_c,ERROR_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cerror_c,CERROR_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(eulerb_c,EULERB_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cva1_c,CVA1_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ittikb_c,ITTIKB_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lqnb_c,LQNB_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cjk_c,CJK_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ittika_c,ITTIKA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lamv_c,LAMV_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chguit_c,CHGUIT_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(kmn_c,KMN_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lagzo_c,LAGZO_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(vvla_c,VVLA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cjyva_c,CJYVA_C)(fwr_dbl_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cjyvb_c,CJYVB_C)(fwr_dbl_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jy01a_c,JY01A_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(incog_c,INCOG_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(itikb_c,ITIKB_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(itika_c,ITIKA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jyv_c,JYV_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jynb_c,JYNB_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jynbh_c,JYNBH_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stvh1_c,STVH1_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(legzo_c,LEGZO_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(aswfa_c,ASWFA_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jyna_c,JYNA_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(pbdv_c,PBDV_C)(fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(itsh0_c,ITSH0_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cerzo_c,CERZO_C)(fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(gamma2_c,GAMMA2_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chgu_c,CHGU_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lamn_c,LAMN_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(comelp_c,COMELP_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(incob_c,INCOB_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cvf_c,CVF_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clpn_c,CLPN_C)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lqmns_c,LQMNS_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ciklv_c,CIKLV_C)(fwr_dbl_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(elit_c,ELIT_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(elit3_c,ELIT3_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(eix_c,EIX_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(eixz_c,EIXZ_C)(fwc_dbl_complex_t *, fwc_dbl_complex_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(e1xb_c,E1XB_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chgm_c,CHGM_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stvh0_c,STVH0_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(hygfx_c,HYGFX_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cchg_c,CCHG_C)(fwr_dbl_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(hygfz_c,HYGFZ_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(itairy_c,ITAIRY_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ikna_c,IKNA_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cjyna_c,CJYNA_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cjynb_c,CJYNB_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(iknb_c,IKNB_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpmn_c,LPMN_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(mtu0_c,MTU0_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cy01_c,CY01_C)(fwi_integer_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ffk_c,FFK_C)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(airya_c,AIRYA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(airyb_c,AIRYB_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(scka_c,SCKA_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sckb_c,SCKB_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpdla_c,CPDLA_C)(fwi_integer_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(fcszo_c,FCSZO_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(e1xa_c,E1XA_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpmv_c,LPMV_C)(fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cgama_c,CGAMA_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(aswfb_c,ASWFB_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chgus_c,CHGUS_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(itth0_c,ITTH0_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lgama_c,LGAMA_C)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lqna_c,LQNA_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dvla_c,DVLA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ik01a_c,IK01A_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpbdn_c,CPBDN_C)(fwi_integer_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ik01b_c,IK01B_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(beta_c,BETA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpn_c,LPN_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(fcoef_c,FCOEF_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sphi_c,SPHI_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(pbwa_c,PBWA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rmn1_c,RMN1_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(dvsa_c,DVSA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(e1z_c,E1Z_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(itjyb_c,ITJYB_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chgul_c,CHGUL_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(gmn_c,GMN_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(itjya_c,ITJYA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stvlv_c,STVLV_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rcty_c,RCTY_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(lpni_c,LPNI_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(klvna_c,KLVNA_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(chgubi_c,CHGUBI_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cyzo_c,CYZO_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(klvnb_c,KLVNB_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rmn2so_c,RMN2SO_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(csphik_c,CSPHIK_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(bjndd_c,BJNDD_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sphj_c,SPHJ_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(othpl_c,OTHPL_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(klvnzo_c,KLVNZO_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rswfo_c,RSWFO_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ch12n_c,CH12N_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jyzo_c,JYZO_C)(fwi_integer_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ikv_c,IKV_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sdmn_c,SDMN_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ajyik_c,AJYIK_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cikvb_c,CIKVB_C)(fwr_dbl_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cikva_c,CIKVA_C)(fwr_dbl_t *, fwc_complex_x16_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cfc_c,CFC_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(fcs_c,FCS_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(rctj_c,RCTJ_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(herzo_c,HERZO_C)(fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jy01b_c,JY01B_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(enxb_c,ENXB_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sphk_c,SPHK_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(enxa_c,ENXA_C)(fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(gaih_c,GAIH_C)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(pbvv_c,PBVV_C)(fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(clqmn_c,CLQMN_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(segv_c,SEGV_C)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(ciknb_c,CIKNB_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cikna_c,CIKNA_C)(fwi_integer_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fw_shape_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(mtu12_c,MTU12_C)(fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cik01_c,CIK01_C)(fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwc_complex_x16_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(cpsi_c,CPSI_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(sphy_c,SPHY_C)(fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fw_shape_t *, fwr_dbl_t *, fw_shape_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(jelp_c,JELP_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(stvhv_c,STVHV_C)(fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fw_character_t *);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define cpdsa_c F_FUNC(cpdsa_c,CPDSA_C)
#define cfs_c F_FUNC(cfs_c,CFS_C)
#define lqmn_c F_FUNC(lqmn_c,LQMN_C)
#define clpmn_c F_FUNC(clpmn_c,CLPMN_C)
#define vvsa_c F_FUNC(vvsa_c,VVSA_C)
#define jdzo_c F_FUNC(jdzo_c,JDZO_C)
#define cbk_c F_FUNC(cbk_c,CBK_C)
#define cjy01_c F_FUNC(cjy01_c,CJY01_C)
#define rmn2sp_c F_FUNC(rmn2sp_c,RMN2SP_C)
#define bernob_c F_FUNC(bernob_c,BERNOB_C)
#define bernoa_c F_FUNC(bernoa_c,BERNOA_C)
#define qstar_c F_FUNC(qstar_c,QSTAR_C)
#define cv0_c F_FUNC(cv0_c,CV0_C)
#define cvqm_c F_FUNC(cvqm_c,CVQM_C)
#define cvql_c F_FUNC(cvql_c,CVQL_C)
#define csphjy_c F_FUNC(csphjy_c,CSPHJY_C)
#define msta1_c F_FUNC(msta1_c,MSTA1_C)
#define msta2_c F_FUNC(msta2_c,MSTA2_C)
#define envj_c F_FUNC(envj_c,ENVJ_C)
#define ittjyb_c F_FUNC(ittjyb_c,ITTJYB_C)
#define ittjya_c F_FUNC(ittjya_c,ITTJYA_C)
#define cjylv_c F_FUNC(cjylv_c,CJYLV_C)
#define rmn2l_c F_FUNC(rmn2l_c,RMN2L_C)
#define psi_spec_c F_FUNC(psi_spec_c,PSI_SPEC_C)
#define cva2_c F_FUNC(cva2_c,CVA2_C)
#define lpmns_c F_FUNC(lpmns_c,LPMNS_C)
#define cerf_c F_FUNC(cerf_c,CERF_C)
#define rswfp_c F_FUNC(rswfp_c,RSWFP_C)
#define jyndd_c F_FUNC(jyndd_c,JYNDD_C)
#define gam0_c F_FUNC(gam0_c,GAM0_C)
#define cisib_c F_FUNC(cisib_c,CISIB_C)
#define eulera_c F_FUNC(eulera_c,EULERA_C)
#define refine_c F_FUNC(refine_c,REFINE_C)
#define cisia_c F_FUNC(cisia_c,CISIA_C)
#define itsl0_c F_FUNC(itsl0_c,ITSL0_C)
#define stvl1_c F_FUNC(stvl1_c,STVL1_C)
#define clqn_c F_FUNC(clqn_c,CLQN_C)
#define stvl0_c F_FUNC(stvl0_c,STVL0_C)
#define airyzo_c F_FUNC(airyzo_c,AIRYZO_C)
#define error_c F_FUNC(error_c,ERROR_C)
#define cerror_c F_FUNC(cerror_c,CERROR_C)
#define eulerb_c F_FUNC(eulerb_c,EULERB_C)
#define cva1_c F_FUNC(cva1_c,CVA1_C)
#define ittikb_c F_FUNC(ittikb_c,ITTIKB_C)
#define lqnb_c F_FUNC(lqnb_c,LQNB_C)
#define cjk_c F_FUNC(cjk_c,CJK_C)
#define ittika_c F_FUNC(ittika_c,ITTIKA_C)
#define lamv_c F_FUNC(lamv_c,LAMV_C)
#define chguit_c F_FUNC(chguit_c,CHGUIT_C)
#define kmn_c F_FUNC(kmn_c,KMN_C)
#define lagzo_c F_FUNC(lagzo_c,LAGZO_C)
#define vvla_c F_FUNC(vvla_c,VVLA_C)
#define cjyva_c F_FUNC(cjyva_c,CJYVA_C)
#define cjyvb_c F_FUNC(cjyvb_c,CJYVB_C)
#define jy01a_c F_FUNC(jy01a_c,JY01A_C)
#define incog_c F_FUNC(incog_c,INCOG_C)
#define itikb_c F_FUNC(itikb_c,ITIKB_C)
#define itika_c F_FUNC(itika_c,ITIKA_C)
#define jyv_c F_FUNC(jyv_c,JYV_C)
#define jynb_c F_FUNC(jynb_c,JYNB_C)
#define jynbh_c F_FUNC(jynbh_c,JYNBH_C)
#define stvh1_c F_FUNC(stvh1_c,STVH1_C)
#define legzo_c F_FUNC(legzo_c,LEGZO_C)
#define aswfa_c F_FUNC(aswfa_c,ASWFA_C)
#define jyna_c F_FUNC(jyna_c,JYNA_C)
#define pbdv_c F_FUNC(pbdv_c,PBDV_C)
#define itsh0_c F_FUNC(itsh0_c,ITSH0_C)
#define cerzo_c F_FUNC(cerzo_c,CERZO_C)
#define gamma2_c F_FUNC(gamma2_c,GAMMA2_C)
#define chgu_c F_FUNC(chgu_c,CHGU_C)
#define lamn_c F_FUNC(lamn_c,LAMN_C)
#define comelp_c F_FUNC(comelp_c,COMELP_C)
#define incob_c F_FUNC(incob_c,INCOB_C)
#define cvf_c F_FUNC(cvf_c,CVF_C)
#define clpn_c F_FUNC(clpn_c,CLPN_C)
#define lqmns_c F_FUNC(lqmns_c,LQMNS_C)
#define ciklv_c F_FUNC(ciklv_c,CIKLV_C)
#define elit_c F_FUNC(elit_c,ELIT_C)
#define elit3_c F_FUNC(elit3_c,ELIT3_C)
#define eix_c F_FUNC(eix_c,EIX_C)
#define eixz_c F_FUNC(eixz_c,EIXZ_C)
#define e1xb_c F_FUNC(e1xb_c,E1XB_C)
#define chgm_c F_FUNC(chgm_c,CHGM_C)
#define stvh0_c F_FUNC(stvh0_c,STVH0_C)
#define hygfx_c F_FUNC(hygfx_c,HYGFX_C)
#define cchg_c F_FUNC(cchg_c,CCHG_C)
#define hygfz_c F_FUNC(hygfz_c,HYGFZ_C)
#define itairy_c F_FUNC(itairy_c,ITAIRY_C)
#define ikna_c F_FUNC(ikna_c,IKNA_C)
#define cjyna_c F_FUNC(cjyna_c,CJYNA_C)
#define cjynb_c F_FUNC(cjynb_c,CJYNB_C)
#define iknb_c F_FUNC(iknb_c,IKNB_C)
#define lpmn_c F_FUNC(lpmn_c,LPMN_C)
#define mtu0_c F_FUNC(mtu0_c,MTU0_C)
#define cy01_c F_FUNC(cy01_c,CY01_C)
#define ffk_c F_FUNC(ffk_c,FFK_C)
#define airya_c F_FUNC(airya_c,AIRYA_C)
#define airyb_c F_FUNC(airyb_c,AIRYB_C)
#define scka_c F_FUNC(scka_c,SCKA_C)
#define sckb_c F_FUNC(sckb_c,SCKB_C)
#define cpdla_c F_FUNC(cpdla_c,CPDLA_C)
#define fcszo_c F_FUNC(fcszo_c,FCSZO_C)
#define e1xa_c F_FUNC(e1xa_c,E1XA_C)
#define lpmv_c F_FUNC(lpmv_c,LPMV_C)
#define cgama_c F_FUNC(cgama_c,CGAMA_C)
#define aswfb_c F_FUNC(aswfb_c,ASWFB_C)
#define chgus_c F_FUNC(chgus_c,CHGUS_C)
#define itth0_c F_FUNC(itth0_c,ITTH0_C)
#define lgama_c F_FUNC(lgama_c,LGAMA_C)
#define lqna_c F_FUNC(lqna_c,LQNA_C)
#define dvla_c F_FUNC(dvla_c,DVLA_C)
#define ik01a_c F_FUNC(ik01a_c,IK01A_C)
#define cpbdn_c F_FUNC(cpbdn_c,CPBDN_C)
#define ik01b_c F_FUNC(ik01b_c,IK01B_C)
#define beta_c F_FUNC(beta_c,BETA_C)
#define lpn_c F_FUNC(lpn_c,LPN_C)
#define fcoef_c F_FUNC(fcoef_c,FCOEF_C)
#define sphi_c F_FUNC(sphi_c,SPHI_C)
#define pbwa_c F_FUNC(pbwa_c,PBWA_C)
#define rmn1_c F_FUNC(rmn1_c,RMN1_C)
#define dvsa_c F_FUNC(dvsa_c,DVSA_C)
#define e1z_c F_FUNC(e1z_c,E1Z_C)
#define itjyb_c F_FUNC(itjyb_c,ITJYB_C)
#define chgul_c F_FUNC(chgul_c,CHGUL_C)
#define gmn_c F_FUNC(gmn_c,GMN_C)
#define itjya_c F_FUNC(itjya_c,ITJYA_C)
#define stvlv_c F_FUNC(stvlv_c,STVLV_C)
#define rcty_c F_FUNC(rcty_c,RCTY_C)
#define lpni_c F_FUNC(lpni_c,LPNI_C)
#define klvna_c F_FUNC(klvna_c,KLVNA_C)
#define chgubi_c F_FUNC(chgubi_c,CHGUBI_C)
#define cyzo_c F_FUNC(cyzo_c,CYZO_C)
#define klvnb_c F_FUNC(klvnb_c,KLVNB_C)
#define rmn2so_c F_FUNC(rmn2so_c,RMN2SO_C)
#define csphik_c F_FUNC(csphik_c,CSPHIK_C)
#define bjndd_c F_FUNC(bjndd_c,BJNDD_C)
#define sphj_c F_FUNC(sphj_c,SPHJ_C)
#define othpl_c F_FUNC(othpl_c,OTHPL_C)
#define klvnzo_c F_FUNC(klvnzo_c,KLVNZO_C)
#define rswfo_c F_FUNC(rswfo_c,RSWFO_C)
#define ch12n_c F_FUNC(ch12n_c,CH12N_C)
#define jyzo_c F_FUNC(jyzo_c,JYZO_C)
#define ikv_c F_FUNC(ikv_c,IKV_C)
#define sdmn_c F_FUNC(sdmn_c,SDMN_C)
#define ajyik_c F_FUNC(ajyik_c,AJYIK_C)
#define cikvb_c F_FUNC(cikvb_c,CIKVB_C)
#define cikva_c F_FUNC(cikva_c,CIKVA_C)
#define cfc_c F_FUNC(cfc_c,CFC_C)
#define fcs_c F_FUNC(fcs_c,FCS_C)
#define rctj_c F_FUNC(rctj_c,RCTJ_C)
#define herzo_c F_FUNC(herzo_c,HERZO_C)
#define jy01b_c F_FUNC(jy01b_c,JY01B_C)
#define enxb_c F_FUNC(enxb_c,ENXB_C)
#define sphk_c F_FUNC(sphk_c,SPHK_C)
#define enxa_c F_FUNC(enxa_c,ENXA_C)
#define gaih_c F_FUNC(gaih_c,GAIH_C)
#define pbvv_c F_FUNC(pbvv_c,PBVV_C)
#define clqmn_c F_FUNC(clqmn_c,CLQMN_C)
#define segv_c F_FUNC(segv_c,SEGV_C)
#define ciknb_c F_FUNC(ciknb_c,CIKNB_C)
#define cikna_c F_FUNC(cikna_c,CIKNA_C)
#define mtu12_c F_FUNC(mtu12_c,MTU12_C)
#define cik01_c F_FUNC(cik01_c,CIK01_C)
#define cpsi_c F_FUNC(cpsi_c,CPSI_C)
#define sphy_c F_FUNC(sphy_c,SPHY_C)
#define jelp_c F_FUNC(jelp_c,JELP_C)
#define stvhv_c F_FUNC(stvhv_c,STVHV_C)
#endif
