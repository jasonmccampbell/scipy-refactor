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
FORTRAN_CALLSPEC void F_FUNC_MANGLING(mvnun,MVNUN)(
    fwi_integer_t * d,
    fwi_integer_t * n,
    fwr_dbl_t * lower,
    fwr_dbl_t * upper,
    fwr_dbl_t * means,
    fwr_dbl_t * covar,
    fwi_integer_t * maxpts,
    fwr_dbl_t * abseps,
    fwr_dbl_t * releps,
    fwr_dbl_t * value,
    fwi_integer_t * inform
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(mvndst,MVNDST)(
    fwi_integer_t * n,
    fwr_dbl_t * lower,
    fwr_dbl_t * upper,
    fwi_integer_t * infin,
    fwr_dbl_t * correl,
    fwi_integer_t * maxpts,
    fwr_dbl_t * abseps,
    fwr_dbl_t * releps,
    fwr_dbl_t * error,
    fwr_dbl_t * value,
    fwi_integer_t * inform
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

