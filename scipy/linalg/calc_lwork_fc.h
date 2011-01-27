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
FORTRAN_CALLSPEC void F_FUNC(gehrd,GEHRD)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * lo, fwi_integer_t * hi, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(gesdd,GESDD)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * compute_uv, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(gelss,GELSS)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * nrhs, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(getri,GETRI)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(geev,GEEV)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * compute_vl, fwi_integer_t * compute_vr, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(heev,HEEV)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * lower, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(syev,SYEV)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * lower, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(gees,GEES)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * compute_v, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(geqrf,GEQRF)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * m, fwi_integer_t * n, size_t prefix_len_);
FORTRAN_CALLSPEC void F_FUNC(gqr,GQR)(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * m, fwi_integer_t * n, size_t prefix_len_);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define gehrd F_FUNC(gehrd,GEHRD)
#define gesdd F_FUNC(gesdd,GESDD)
#define gelss F_FUNC(gelss,GELSS)
#define getri F_FUNC(getri,GETRI)
#define geev F_FUNC(geev,GEEV)
#define heev F_FUNC(heev,HEEV)
#define syev F_FUNC(syev,SYEV)
#define gees F_FUNC(gees,GEES)
#define geqrf F_FUNC(geqrf,GEQRF)
#define gqr F_FUNC(gqr,GQR)
#endif
