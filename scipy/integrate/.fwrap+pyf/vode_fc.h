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
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dvode,DVODE)(
    void (*f)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_real_t *, fwr_dbl_t *, fwi_integer_t *),
    fwi_integer_t * neq,
    fwr_dbl_t * y,
    fwr_dbl_t * t,
    fwr_dbl_t * tout,
    fwi_integer_t * itol,
    fwr_dbl_t * rtol,
    fwr_dbl_t * atol,
    fwi_integer_t * itask,
    fwi_integer_t * istate,
    fwi_integer_t * iopt,
    fwr_dbl_t * rwork,
    fwi_integer_t * lrw,
    fwi_integer_t * iwork,
    fwi_integer_t * liw,
    void (*jac)(void),
    fwi_integer_t * mf,
    fwr_dbl_t * rpar,
    fwi_integer_t * ipar
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zvode,ZVODE)(
    void (*f)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *),
    fwi_integer_t * neq,
    fwc_dbl_complex_t * y,
    fwr_dbl_t * t,
    fwr_dbl_t * tout,
    fwi_integer_t * itol,
    fwr_dbl_t * rtol,
    fwr_dbl_t * atol,
    fwi_integer_t * itask,
    fwi_integer_t * istate,
    fwi_integer_t * iopt,
    fwc_dbl_complex_t * zwork,
    fwi_integer_t * lzw,
    fwr_dbl_t * rwork,
    fwi_integer_t * lrw,
    fwi_integer_t * iwork,
    fwi_integer_t * liw,
    void (*jac)(void),
    fwi_integer_t * mf,
    fwr_real_t * rpar,
    fwi_integer_t * ipar
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

