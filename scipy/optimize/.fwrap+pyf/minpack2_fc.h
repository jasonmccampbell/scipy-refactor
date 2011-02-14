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
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dcsrch,DCSRCH)(
    fwr_dbl_t * stp,
    fwr_dbl_t * f,
    fwr_dbl_t * g,
    fwr_dbl_t * ftol,
    fwr_dbl_t * gtol,
    fwr_dbl_t * xtol,
    char * task,
    fwr_dbl_t * stpmin,
    fwr_dbl_t * stpmax,
    fwi_integer_t * isave,
    fwr_dbl_t * dsave,
    size_t task_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dcstep,DCSTEP)(
    fwr_dbl_t * stx,
    fwr_dbl_t * fx,
    fwr_dbl_t * dx,
    fwr_dbl_t * sty,
    fwr_dbl_t * fy,
    fwr_dbl_t * dy,
    fwr_dbl_t * stp,
    fwr_dbl_t * fp,
    fwr_dbl_t * dp,
    fwl_logical_t * brackt,
    fwr_dbl_t * stpmin,
    fwr_dbl_t * stpmax
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

