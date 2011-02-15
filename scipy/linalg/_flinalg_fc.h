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
    #define F_FUNC_MANGLING(f,F) f
#else
    #if defined(PREPEND_FORTRAN)
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC_MANGLING(f,F) _##F
            #else
                #define F_FUNC_MANGLING(f,F) _##f
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC_MANGLING(f,F) _##F##_
            #else
                #define F_FUNC_MANGLING(f,F) _##f##_
            #endif
        #endif
    #else
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC_MANGLING(f,F) F
            #else
                #error Can not happen
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC_MANGLING(f,F) F##_
            #else
                #define F_FUNC_MANGLING(f,F) f##_
            #endif
        #endif
    #endif
#endif

#if defined(__cplusplus)
#define F_FUNC(f,F) ::F_FUNC_MANGLING(f,F)
#else
#define F_FUNC(f,F) F_FUNC_MANGLING(f,F)
#endif


#if defined(__cplusplus)
extern "C" {
#endif
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ddet_c,DDET_C)(
    fwr_dbl_t * det,
    fwr_dbl_t * a,
    fwi_integer_t * n,
    fwi_integer_t * piv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ddet_r,DDET_R)(
    fwr_dbl_t * det,
    fwr_dbl_t * a,
    fwi_integer_t * n,
    fwi_integer_t * piv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sdet_c,SDET_C)(
    fwr_real_t * det,
    fwr_real_t * a,
    fwi_integer_t * n,
    fwi_integer_t * piv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sdet_r,SDET_R)(
    fwr_real_t * det,
    fwr_real_t * a,
    fwi_integer_t * n,
    fwi_integer_t * piv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zdet_c,ZDET_C)(
    fwc_complex_x16_t * det,
    fwc_complex_x16_t * a,
    fwi_integer_t * n,
    fwi_integer_t * piv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zdet_r,ZDET_R)(
    fwc_complex_x16_t * det,
    fwc_complex_x16_t * a,
    fwi_integer_t * n,
    fwi_integer_t * piv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cdet_c,CDET_C)(
    fwc_complex_t * det,
    fwc_complex_t * a,
    fwi_integer_t * n,
    fwi_integer_t * piv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cdet_r,CDET_R)(
    fwc_complex_t * det,
    fwc_complex_t * a,
    fwi_integer_t * n,
    fwi_integer_t * piv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dlu_c,DLU_C)(
    fwr_dbl_t * p,
    fwr_dbl_t * l,
    fwr_dbl_t * u,
    fwr_dbl_t * a,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwi_integer_t * piv,
    fwi_integer_t * info,
    fwi_integer_t * permute_l,
    fwi_integer_t * m1
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zlu_c,ZLU_C)(
    fwr_dbl_t * p,
    fwc_complex_x16_t * l,
    fwc_complex_x16_t * u,
    fwc_complex_x16_t * a,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwi_integer_t * piv,
    fwi_integer_t * info,
    fwi_integer_t * permute_l,
    fwi_integer_t * m1
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(slu_c,SLU_C)(
    fwr_real_t * p,
    fwr_real_t * l,
    fwr_real_t * u,
    fwr_real_t * a,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwi_integer_t * piv,
    fwi_integer_t * info,
    fwi_integer_t * permute_l,
    fwi_integer_t * m1
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(clu_c,CLU_C)(
    fwr_real_t * p,
    fwc_complex_t * l,
    fwc_complex_t * u,
    fwc_complex_t * a,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwi_integer_t * piv,
    fwi_integer_t * info,
    fwi_integer_t * permute_l,
    fwi_integer_t * m1
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

