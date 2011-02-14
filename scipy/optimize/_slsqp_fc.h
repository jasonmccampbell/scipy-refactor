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
FORTRAN_CALLSPEC void F_FUNC_MANGLING(slsqp,SLSQP)(
    fwi_integer_t * m,
    fwi_integer_t * meq,
    fwi_integer_t * la,
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * xl,
    fwr_dbl_t * xu,
    fwr_dbl_t * f,
    fwr_dbl_t * c,
    fwr_dbl_t * g,
    fwr_dbl_t * a,
    fwr_dbl_t * acc,
    fwi_integer_t * iter,
    fwi_integer_t * mode,
    fwr_dbl_t * w,
    fwi_integer_t * l_w,
    fwi_integer_t * jw,
    fwi_integer_t * l_jw
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

