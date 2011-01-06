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
FORTRAN_CALLSPEC void F_FUNC(nnls,NNLS)(fwr_dbl_t * a, fwi_integer_t * mda, fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * b, fwr_dbl_t * x, fwr_dbl_t * rnorm, fwr_dbl_t * w, fwr_dbl_t * zz, fwi_integer_t * index, fwi_integer_t * mode);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(diff,DIFF)(fwr_dbl_t * x, fwr_dbl_t * y);
FORTRAN_CALLSPEC void F_FUNC(h12,H12)(fwi_integer_t * mode, fwi_integer_t * lpivot, fwi_integer_t * l1, fwi_integer_t * m, fwr_dbl_t * u, fwi_integer_t * iue, fwr_dbl_t * up, fwr_dbl_t * c, fwi_integer_t * ice, fwi_integer_t * icv, fwi_integer_t * ncv);
FORTRAN_CALLSPEC void F_FUNC(g1,G1)(fwr_dbl_t * a, fwr_dbl_t * b, fwr_dbl_t * cterm, fwr_dbl_t * sterm, fwr_dbl_t * sig);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define nnls F_FUNC(nnls,NNLS)
#define diff F_FUNC(diff,DIFF)
#define h12 F_FUNC(h12,H12)
#define g1 F_FUNC(g1,G1)
#endif
