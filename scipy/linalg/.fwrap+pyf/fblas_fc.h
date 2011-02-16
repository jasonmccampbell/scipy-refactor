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
FORTRAN_CALLSPEC void F_FUNC_MANGLING(caxpy,CAXPY)(
    fwi_integer_t * n,
    fwc_complex_t * ca,
    fwc_complex_t * cx,
    fwi_integer_t * incx,
    fwc_complex_t * cy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ccopy,CCOPY)(
    fwi_integer_t * n,
    fwc_complex_t * cx,
    fwi_integer_t * incx,
    fwc_complex_t * cy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgemm,CGEMM)(
    char * transa,
    char * transb,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwc_complex_t * alpha,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * b,
    fwi_integer_t * ldb,
    fwc_complex_t * beta,
    fwc_complex_t * c,
    fwi_integer_t * ldc,
    size_t transa_len_,
    size_t transb_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgemv,CGEMV)(
    char * trans,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_t * alpha,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * x,
    fwi_integer_t * incx,
    fwc_complex_t * beta,
    fwc_complex_t * y,
    fwi_integer_t * incy,
    size_t trans_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgerc,CGERC)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_t * alpha,
    fwc_complex_t * x,
    fwi_integer_t * incx,
    fwc_complex_t * y,
    fwi_integer_t * incy,
    fwc_complex_t * a,
    fwi_integer_t * lda
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgeru,CGERU)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_t * alpha,
    fwc_complex_t * x,
    fwi_integer_t * incx,
    fwc_complex_t * y,
    fwi_integer_t * incy,
    fwc_complex_t * a,
    fwi_integer_t * lda
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(chemv,CHEMV)(
    char * uplo,
    fwi_integer_t * n,
    fwc_complex_t * alpha,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * x,
    fwi_integer_t * incx,
    fwc_complex_t * beta,
    fwc_complex_t * y,
    fwi_integer_t * incy,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(crotg,CROTG)(
    fwc_complex_t * ca,
    fwc_complex_t * cb,
    fwr_real_t * c,
    fwc_complex_t * s
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cscal,CSCAL)(
    fwi_integer_t * n,
    fwc_complex_t * ca,
    fwc_complex_t * cx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(csrot,CSROT)(
    fwi_integer_t * n,
    fwc_complex_t * cx,
    fwi_integer_t * incx,
    fwc_complex_t * cy,
    fwi_integer_t * incy,
    fwr_real_t * c,
    fwr_real_t * s
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(csscal,CSSCAL)(
    fwi_integer_t * n,
    fwr_real_t * sa,
    fwc_complex_t * cx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cswap,CSWAP)(
    fwi_integer_t * n,
    fwc_complex_t * cx,
    fwi_integer_t * incx,
    fwc_complex_t * cy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ctrmv,CTRMV)(
    char * uplo,
    char * trans,
    char * diag,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * x,
    fwi_integer_t * incx,
    size_t uplo_len_,
    size_t trans_len_,
    size_t diag_len_
);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC_MANGLING(dasum,DASUM)(
    fwi_integer_t * n,
    fwr_dbl_t * dx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(daxpy,DAXPY)(
    fwi_integer_t * n,
    fwr_dbl_t * da,
    fwr_dbl_t * dx,
    fwi_integer_t * incx,
    fwr_dbl_t * dy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dcopy,DCOPY)(
    fwi_integer_t * n,
    fwr_dbl_t * dx,
    fwi_integer_t * incx,
    fwr_dbl_t * dy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC_MANGLING(ddot,DDOT)(
    fwi_integer_t * n,
    fwr_dbl_t * dx,
    fwi_integer_t * incx,
    fwr_dbl_t * dy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgemm,DGEMM)(
    char * transa,
    char * transb,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwr_dbl_t * alpha,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * b,
    fwi_integer_t * ldb,
    fwr_dbl_t * beta,
    fwr_dbl_t * c,
    fwi_integer_t * ldc,
    size_t transa_len_,
    size_t transb_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgemv,DGEMV)(
    char * trans,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * alpha,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * x,
    fwi_integer_t * incx,
    fwr_dbl_t * beta,
    fwr_dbl_t * y,
    fwi_integer_t * incy,
    size_t trans_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dger,DGER)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * alpha,
    fwr_dbl_t * x,
    fwi_integer_t * incx,
    fwr_dbl_t * y,
    fwi_integer_t * incy,
    fwr_dbl_t * a,
    fwi_integer_t * lda
);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC_MANGLING(dnrm2,DNRM2)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(drot,DROT)(
    fwi_integer_t * n,
    fwr_dbl_t * dx,
    fwi_integer_t * incx,
    fwr_dbl_t * dy,
    fwi_integer_t * incy,
    fwr_dbl_t * c,
    fwr_dbl_t * s
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(drotg,DROTG)(
    fwr_dbl_t * da,
    fwr_dbl_t * db,
    fwr_dbl_t * c,
    fwr_dbl_t * s
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(drotm,DROTM)(
    fwi_integer_t * n,
    fwr_dbl_t * dx,
    fwi_integer_t * incx,
    fwr_dbl_t * dy,
    fwi_integer_t * incy,
    fwr_dbl_t * dparam
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(drotmg,DROTMG)(
    fwr_dbl_t * dd1,
    fwr_dbl_t * dd2,
    fwr_dbl_t * dx1,
    fwr_dbl_t * dy1,
    fwr_dbl_t * dparam
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dscal,DSCAL)(
    fwi_integer_t * n,
    fwr_dbl_t * da,
    fwr_dbl_t * dx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dswap,DSWAP)(
    fwi_integer_t * n,
    fwr_dbl_t * dx,
    fwi_integer_t * incx,
    fwr_dbl_t * dy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsymv,DSYMV)(
    char * uplo,
    fwi_integer_t * n,
    fwr_dbl_t * alpha,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * x,
    fwi_integer_t * incx,
    fwr_dbl_t * beta,
    fwr_dbl_t * y,
    fwi_integer_t * incy,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dtrmv,DTRMV)(
    char * uplo,
    char * trans,
    char * diag,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * x,
    fwi_integer_t * incx,
    size_t uplo_len_,
    size_t trans_len_,
    size_t diag_len_
);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC_MANGLING(dzasum,DZASUM)(
    fwi_integer_t * n,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC_MANGLING(dznrm2,DZNRM2)(
    fwi_integer_t * n,
    fwc_dbl_complex_t * x,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(wcdotu,WCDOTU)(
    fwc_complex_t * r,
    fwi_integer_t * n,
    fwc_complex_t * cx,
    fwi_integer_t * incx,
    fwc_complex_t * cy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(wzdotu,WZDOTU)(
    fwc_dbl_complex_t * r,
    fwi_integer_t * n,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * zy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(wcdotc,WCDOTC)(
    fwc_complex_t * r,
    fwi_integer_t * n,
    fwc_complex_t * cx,
    fwi_integer_t * incx,
    fwc_complex_t * cy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(wzdotc,WZDOTC)(
    fwc_dbl_complex_t * r,
    fwi_integer_t * n,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * zy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC_MANGLING(icamax,ICAMAX)(
    fwi_integer_t * n,
    fwc_complex_t * cx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC_MANGLING(idamax,IDAMAX)(
    fwi_integer_t * n,
    fwr_dbl_t * dx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC_MANGLING(isamax,ISAMAX)(
    fwi_integer_t * n,
    fwr_real_t * sx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC_MANGLING(izamax,IZAMAX)(
    fwi_integer_t * n,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC fwr_real_t F_FUNC_MANGLING(sasum,SASUM)(
    fwi_integer_t * n,
    fwr_real_t * sx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(saxpy,SAXPY)(
    fwi_integer_t * n,
    fwr_real_t * sa,
    fwr_real_t * sx,
    fwi_integer_t * incx,
    fwr_real_t * sy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC fwr_real_t F_FUNC_MANGLING(scasum,SCASUM)(
    fwi_integer_t * n,
    fwc_complex_t * cx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC fwr_real_t F_FUNC_MANGLING(scnrm2,SCNRM2)(
    fwi_integer_t * n,
    fwc_complex_t * x,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(scopy,SCOPY)(
    fwi_integer_t * n,
    fwr_real_t * sx,
    fwi_integer_t * incx,
    fwr_real_t * sy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC fwr_real_t F_FUNC_MANGLING(sdot,SDOT)(
    fwi_integer_t * n,
    fwr_real_t * sx,
    fwi_integer_t * incx,
    fwr_real_t * sy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgemm,SGEMM)(
    char * transa,
    char * transb,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwr_real_t * alpha,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * b,
    fwi_integer_t * ldb,
    fwr_real_t * beta,
    fwr_real_t * c,
    fwi_integer_t * ldc,
    size_t transa_len_,
    size_t transb_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgemv,SGEMV)(
    char * trans,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_real_t * alpha,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * x,
    fwi_integer_t * incx,
    fwr_real_t * beta,
    fwr_real_t * y,
    fwi_integer_t * incy,
    size_t trans_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sger,SGER)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_real_t * alpha,
    fwr_real_t * x,
    fwi_integer_t * incx,
    fwr_real_t * y,
    fwi_integer_t * incy,
    fwr_real_t * a,
    fwi_integer_t * lda
);
FORTRAN_CALLSPEC fwr_real_t F_FUNC_MANGLING(snrm2,SNRM2)(
    fwi_integer_t * n,
    fwr_real_t * x,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(srot,SROT)(
    fwi_integer_t * n,
    fwr_real_t * sx,
    fwi_integer_t * incx,
    fwr_real_t * sy,
    fwi_integer_t * incy,
    fwr_real_t * c,
    fwr_real_t * s
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(srotg,SROTG)(
    fwr_real_t * sa,
    fwr_real_t * sb,
    fwr_real_t * c,
    fwr_real_t * s
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(srotm,SROTM)(
    fwi_integer_t * n,
    fwr_real_t * sx,
    fwi_integer_t * incx,
    fwr_real_t * sy,
    fwi_integer_t * incy,
    fwr_real_t * sparam
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(srotmg,SROTMG)(
    fwr_real_t * sd1,
    fwr_real_t * sd2,
    fwr_real_t * sx1,
    fwr_real_t * sy1,
    fwr_real_t * sparam
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sscal,SSCAL)(
    fwi_integer_t * n,
    fwr_real_t * sa,
    fwr_real_t * sx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sswap,SSWAP)(
    fwi_integer_t * n,
    fwr_real_t * sx,
    fwi_integer_t * incx,
    fwr_real_t * sy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssymv,SSYMV)(
    char * uplo,
    fwi_integer_t * n,
    fwr_real_t * alpha,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * x,
    fwi_integer_t * incx,
    fwr_real_t * beta,
    fwr_real_t * y,
    fwi_integer_t * incy,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(strmv,STRMV)(
    char * uplo,
    char * trans,
    char * diag,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * x,
    fwi_integer_t * incx,
    size_t uplo_len_,
    size_t trans_len_,
    size_t diag_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zaxpy,ZAXPY)(
    fwi_integer_t * n,
    fwc_dbl_complex_t * za,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * zy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zcopy,ZCOPY)(
    fwi_integer_t * n,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * zy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zdrot,ZDROT)(
    fwi_integer_t * n,
    fwc_complex_x16_t * cx,
    fwi_integer_t * incx,
    fwc_complex_x16_t * cy,
    fwi_integer_t * incy,
    fwr_dbl_t * c,
    fwr_dbl_t * s
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zdscal,ZDSCAL)(
    fwi_integer_t * n,
    fwr_dbl_t * da,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgemm,ZGEMM)(
    char * transa,
    char * transb,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwc_dbl_complex_t * alpha,
    fwc_dbl_complex_t * a,
    fwi_integer_t * lda,
    fwc_dbl_complex_t * b,
    fwi_integer_t * ldb,
    fwc_dbl_complex_t * beta,
    fwc_dbl_complex_t * c,
    fwi_integer_t * ldc,
    size_t transa_len_,
    size_t transb_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgemv,ZGEMV)(
    char * trans,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_dbl_complex_t * alpha,
    fwc_dbl_complex_t * a,
    fwi_integer_t * lda,
    fwc_dbl_complex_t * x,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * beta,
    fwc_dbl_complex_t * y,
    fwi_integer_t * incy,
    size_t trans_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgerc,ZGERC)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_dbl_complex_t * alpha,
    fwc_dbl_complex_t * x,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * y,
    fwi_integer_t * incy,
    fwc_dbl_complex_t * a,
    fwi_integer_t * lda
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgeru,ZGERU)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_dbl_complex_t * alpha,
    fwc_dbl_complex_t * x,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * y,
    fwi_integer_t * incy,
    fwc_dbl_complex_t * a,
    fwi_integer_t * lda
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zhemv,ZHEMV)(
    char * uplo,
    fwi_integer_t * n,
    fwc_dbl_complex_t * alpha,
    fwc_dbl_complex_t * a,
    fwi_integer_t * lda,
    fwc_dbl_complex_t * x,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * beta,
    fwc_dbl_complex_t * y,
    fwi_integer_t * incy,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zrotg,ZROTG)(
    fwc_dbl_complex_t * ca,
    fwc_dbl_complex_t * cb,
    fwr_dbl_t * c,
    fwc_dbl_complex_t * s
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zscal,ZSCAL)(
    fwi_integer_t * n,
    fwc_dbl_complex_t * za,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zswap,ZSWAP)(
    fwi_integer_t * n,
    fwc_dbl_complex_t * zx,
    fwi_integer_t * incx,
    fwc_dbl_complex_t * zy,
    fwi_integer_t * incy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ztrmv,ZTRMV)(
    char * uplo,
    char * trans,
    char * diag,
    fwi_integer_t * n,
    fwc_dbl_complex_t * a,
    fwi_integer_t * lda,
    fwc_dbl_complex_t * x,
    fwi_integer_t * incx,
    size_t uplo_len_,
    size_t trans_len_,
    size_t diag_len_
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

