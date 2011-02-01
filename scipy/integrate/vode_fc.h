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
FORTRAN_CALLSPEC void F_FUNC(dvode,DVODE)(
    void (*f)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void*),
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
    void (*jac)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, void *, void *),
    fwi_integer_t * mf,
    void * rpar, /* caller context */
    void * ipar /* caller context */
);
FORTRAN_CALLSPEC void F_FUNC(zvode,ZVODE)(
    void (*f)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwc_dbl_complex_t *, void *, void *),
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
    void (*jac)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fwi_integer_t *, void *, void *),
    fwi_integer_t * mf,
    void * rpar, /* caller context */
    void * ipar /* caller context */
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define dvode F_FUNC(dvode,DVODE)
#define zvode F_FUNC(zvode,ZVODE)
#endif
