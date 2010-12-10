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
FORTRAN_CALLSPEC void F_FUNC(gehrd_c,GEHRD_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(gesdd_c,GESDD_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(gelss_c,GELSS_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(getri_c,GETRI_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(geev_c,GEEV_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(heev_c,HEEV_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(syev_c,SYEV_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(gees_c,GEES_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(geqrf_c,GEQRF_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
FORTRAN_CALLSPEC void F_FUNC(gqr_c,GQR_C)(fwi_integer_t *, fwi_integer_t *, fw_character_t *, fwi_integer_t *, fwi_integer_t *, fwi_integer_t *, fw_character_t *);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define gehrd_c F_FUNC(gehrd_c,GEHRD_C)
#define gesdd_c F_FUNC(gesdd_c,GESDD_C)
#define gelss_c F_FUNC(gelss_c,GELSS_C)
#define getri_c F_FUNC(getri_c,GETRI_C)
#define geev_c F_FUNC(geev_c,GEEV_C)
#define heev_c F_FUNC(heev_c,HEEV_C)
#define syev_c F_FUNC(syev_c,SYEV_C)
#define gees_c F_FUNC(gees_c,GEES_C)
#define geqrf_c F_FUNC(geqrf_c,GEQRF_C)
#define gqr_c F_FUNC(gqr_c,GQR_C)
#endif
