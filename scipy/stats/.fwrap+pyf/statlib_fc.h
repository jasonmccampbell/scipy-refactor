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
FORTRAN_CALLSPEC void F_FUNC(wprob,WPROB)(fwi_integer_t * test, fwi_integer_t * other, fwr_real_t * astart, fwr_real_t * a1, fwi_integer_t * l1, fwr_real_t * a2, fwr_real_t * a3, fwi_integer_t * ifault);
FORTRAN_CALLSPEC void F_FUNC(gscale,GSCALE)(fwi_integer_t * test, fwi_integer_t * other, fwr_real_t * astart, fwr_real_t * a1, fwi_integer_t * l1, fwr_real_t * a2, fwr_real_t * a3, fwi_integer_t * ifault);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(prho,PRHO)(fwi_integer_t * n, fwi_integer_t * is, fwi_integer_t * ifault);
FORTRAN_CALLSPEC void F_FUNC(swilk,SWILK)(fwl_logical_t * init, fwr_real_t * x, fwi_integer_t * n, fwi_integer_t * n1, fwi_integer_t * n2, fwr_real_t * a, fwr_real_t * w, fwr_real_t * pw, fwi_integer_t * ifault);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define wprob F_FUNC(wprob,WPROB)
#define gscale F_FUNC(gscale,GSCALE)
#define prho F_FUNC(prho,PRHO)
#define swilk F_FUNC(swilk,SWILK)
#endif
