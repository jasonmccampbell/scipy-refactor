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
FORTRAN_CALLSPEC void F_FUNC_MANGLING(gehrd,GEHRD)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * n,
    fwi_integer_t * lo,
    fwi_integer_t * hi,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(gesdd,GESDD)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * compute_uv,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(gelss,GELSS)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(getri,GETRI)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * n,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(geev,GEEV)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * n,
    fwi_integer_t * compute_vl,
    fwi_integer_t * compute_vr,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(heev,HEEV)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * n,
    fwi_integer_t * lower,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(syev,SYEV)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * n,
    fwi_integer_t * lower,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(gees,GEES)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * n,
    fwi_integer_t * compute_v,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(geqrf,GEQRF)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * m,
    fwi_integer_t * n,
    size_t prefix_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(gqr,GQR)(
    fwi_integer_t * min_lwork,
    fwi_integer_t * max_lwork,
    char * prefix,
    fwi_integer_t * m,
    fwi_integer_t * n,
    size_t prefix_len_
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

