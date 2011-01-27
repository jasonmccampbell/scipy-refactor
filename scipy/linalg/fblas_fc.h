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
FORTRAN_CALLSPEC void F_FUNC(caxpy,CAXPY)(fwi_integer_t * n, fwc_complex_t * ca, fwc_complex_t * cx, fwi_integer_t * incx, fwc_complex_t * cy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(ccopy,CCOPY)(fwi_integer_t * n, fwc_complex_t * cx, fwi_integer_t * incx, fwc_complex_t * cy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(cgemm,CGEMM)(char * transa, char * transb, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwc_complex_t * alpha, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwc_complex_t * beta, fwc_complex_t * c, fwi_integer_t * ldc, size_t transa_len_, size_t transb_len_);
FORTRAN_CALLSPEC void F_FUNC(cgemv,CGEMV)(char * trans, fwi_integer_t * m, fwi_integer_t * n, fwc_complex_t * alpha, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * x, fwi_integer_t * incx, fwc_complex_t * beta, fwc_complex_t * y, fwi_integer_t * incy, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(cgerc,CGERC)(fwi_integer_t * m, fwi_integer_t * n, fwc_complex_t * alpha, fwc_complex_t * x, fwi_integer_t * incx, fwc_complex_t * y, fwi_integer_t * incy, fwc_complex_t * a, fwi_integer_t * lda);
FORTRAN_CALLSPEC void F_FUNC(cgeru,CGERU)(fwi_integer_t * m, fwi_integer_t * n, fwc_complex_t * alpha, fwc_complex_t * x, fwi_integer_t * incx, fwc_complex_t * y, fwi_integer_t * incy, fwc_complex_t * a, fwi_integer_t * lda);
FORTRAN_CALLSPEC void F_FUNC(chemv,CHEMV)(char * uplo, fwi_integer_t * n, fwc_complex_t * alpha, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * x, fwi_integer_t * incx, fwc_complex_t * beta, fwc_complex_t * y, fwi_integer_t * incy, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(crotg,CROTG)(fwc_complex_t * ca, fwc_complex_t * cb, fwr_real_t * c, fwc_complex_t * s);
FORTRAN_CALLSPEC void F_FUNC(cscal,CSCAL)(fwi_integer_t * n, fwc_complex_t * ca, fwc_complex_t * cx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(csrot,CSROT)(fwi_integer_t * n, fwc_complex_t * cx, fwi_integer_t * incx, fwc_complex_t * cy, fwi_integer_t * incy, fwr_real_t * c, fwr_real_t * s);
FORTRAN_CALLSPEC void F_FUNC(csscal,CSSCAL)(fwi_integer_t * n, fwr_real_t * sa, fwc_complex_t * cx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(cswap,CSWAP)(fwi_integer_t * n, fwc_complex_t * cx, fwi_integer_t * incx, fwc_complex_t * cy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(ctrmv,CTRMV)(char * uplo, char * trans, char * diag, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * x, fwi_integer_t * incx, size_t uplo_len_, size_t trans_len_, size_t diag_len_);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(dasum,DASUM)(fwi_integer_t * n, fwr_dbl_t * dx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(daxpy,DAXPY)(fwi_integer_t * n, fwr_dbl_t * da, fwr_dbl_t * dx, fwi_integer_t * incx, fwr_dbl_t * dy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(dcopy,DCOPY)(fwi_integer_t * n, fwr_dbl_t * dx, fwi_integer_t * incx, fwr_dbl_t * dy, fwi_integer_t * incy);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(ddot,DDOT)(fwi_integer_t * n, fwr_dbl_t * dx, fwi_integer_t * incx, fwr_dbl_t * dy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(dgemm,DGEMM)(char * transa, char * transb, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwr_dbl_t * alpha, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwr_dbl_t * beta, fwr_dbl_t * c, fwi_integer_t * ldc, size_t transa_len_, size_t transb_len_);
FORTRAN_CALLSPEC void F_FUNC(dgemv,DGEMV)(char * trans, fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * alpha, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * x, fwi_integer_t * incx, fwr_dbl_t * beta, fwr_dbl_t * y, fwi_integer_t * incy, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(dger,DGER)(fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * alpha, fwr_dbl_t * x, fwi_integer_t * incx, fwr_dbl_t * y, fwi_integer_t * incy, fwr_dbl_t * a, fwi_integer_t * lda);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(dnrm2,DNRM2)(fwi_integer_t * n, fwr_dbl_t * x, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(drot,DROT)(fwi_integer_t * n, fwr_dbl_t * dx, fwi_integer_t * incx, fwr_dbl_t * dy, fwi_integer_t * incy, fwr_dbl_t * c, fwr_dbl_t * s);
FORTRAN_CALLSPEC void F_FUNC(drotg,DROTG)(fwr_dbl_t * da, fwr_dbl_t * db, fwr_dbl_t * c, fwr_dbl_t * s);
FORTRAN_CALLSPEC void F_FUNC(drotm,DROTM)(fwi_integer_t * n, fwr_dbl_t * dx, fwi_integer_t * incx, fwr_dbl_t * dy, fwi_integer_t * incy, fwr_dbl_t * dparam);
FORTRAN_CALLSPEC void F_FUNC(drotmg,DROTMG)(fwr_dbl_t * dd1, fwr_dbl_t * dd2, fwr_dbl_t * dx1, fwr_dbl_t * dy1, fwr_dbl_t * dparam);
FORTRAN_CALLSPEC void F_FUNC(dscal,DSCAL)(fwi_integer_t * n, fwr_dbl_t * da, fwr_dbl_t * dx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(dswap,DSWAP)(fwi_integer_t * n, fwr_dbl_t * dx, fwi_integer_t * incx, fwr_dbl_t * dy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(dsymv,DSYMV)(char * uplo, fwi_integer_t * n, fwr_dbl_t * alpha, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * x, fwi_integer_t * incx, fwr_dbl_t * beta, fwr_dbl_t * y, fwi_integer_t * incy, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dtrmv,DTRMV)(char * uplo, char * trans, char * diag, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * x, fwi_integer_t * incx, size_t uplo_len_, size_t trans_len_, size_t diag_len_);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(dzasum,DZASUM)(fwi_integer_t * n, fwc_dbl_complex_t * zx, fwi_integer_t * incx);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(dznrm2,DZNRM2)(fwi_integer_t * n, fwc_dbl_complex_t * x, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(wcdotu,WCDOTU)(fwc_complex_t * r, fwi_integer_t * n, fwc_complex_t * cx, fwi_integer_t * incx, fwc_complex_t * cy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(wzdotu,WZDOTU)(fwc_dbl_complex_t * r, fwi_integer_t * n, fwc_dbl_complex_t * zx, fwi_integer_t * incx, fwc_dbl_complex_t * zy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(wcdotc,WCDOTC)(fwc_complex_t * r, fwi_integer_t * n, fwc_complex_t * cx, fwi_integer_t * incx, fwc_complex_t * cy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(wzdotc,WZDOTC)(fwc_dbl_complex_t * r, fwi_integer_t * n, fwc_dbl_complex_t * zx, fwi_integer_t * incx, fwc_dbl_complex_t * zy, fwi_integer_t * incy);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC(icamax,ICAMAX)(fwi_integer_t * n, fwc_complex_t * cx, fwi_integer_t * incx);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC(idamax,IDAMAX)(fwi_integer_t * n, fwr_dbl_t * dx, fwi_integer_t * incx);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC(isamax,ISAMAX)(fwi_integer_t * n, fwr_real_t * sx, fwi_integer_t * incx);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC(izamax,IZAMAX)(fwi_integer_t * n, fwc_dbl_complex_t * zx, fwi_integer_t * incx);
FORTRAN_CALLSPEC fwr_real_t F_FUNC(sasum,SASUM)(fwi_integer_t * n, fwr_real_t * sx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(saxpy,SAXPY)(fwi_integer_t * n, fwr_real_t * sa, fwr_real_t * sx, fwi_integer_t * incx, fwr_real_t * sy, fwi_integer_t * incy);
FORTRAN_CALLSPEC fwr_real_t F_FUNC(scasum,SCASUM)(fwi_integer_t * n, fwc_complex_t * cx, fwi_integer_t * incx);
FORTRAN_CALLSPEC fwr_real_t F_FUNC(scnrm2,SCNRM2)(fwi_integer_t * n, fwc_complex_t * x, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(scopy,SCOPY)(fwi_integer_t * n, fwr_real_t * sx, fwi_integer_t * incx, fwr_real_t * sy, fwi_integer_t * incy);
FORTRAN_CALLSPEC fwr_real_t F_FUNC(sdot,SDOT)(fwi_integer_t * n, fwr_real_t * sx, fwi_integer_t * incx, fwr_real_t * sy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(sgemm,SGEMM)(char * transa, char * transb, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwr_real_t * alpha, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwr_real_t * beta, fwr_real_t * c, fwi_integer_t * ldc, size_t transa_len_, size_t transb_len_);
FORTRAN_CALLSPEC void F_FUNC(sgemv,SGEMV)(char * trans, fwi_integer_t * m, fwi_integer_t * n, fwr_real_t * alpha, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * x, fwi_integer_t * incx, fwr_real_t * beta, fwr_real_t * y, fwi_integer_t * incy, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(sger,SGER)(fwi_integer_t * m, fwi_integer_t * n, fwr_real_t * alpha, fwr_real_t * x, fwi_integer_t * incx, fwr_real_t * y, fwi_integer_t * incy, fwr_real_t * a, fwi_integer_t * lda);
FORTRAN_CALLSPEC fwr_real_t F_FUNC(snrm2,SNRM2)(fwi_integer_t * n, fwr_real_t * x, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(srot,SROT)(fwi_integer_t * n, fwr_real_t * sx, fwi_integer_t * incx, fwr_real_t * sy, fwi_integer_t * incy, fwr_real_t * c, fwr_real_t * s);
FORTRAN_CALLSPEC void F_FUNC(srotg,SROTG)(fwr_real_t * sa, fwr_real_t * sb, fwr_real_t * c, fwr_real_t * s);
FORTRAN_CALLSPEC void F_FUNC(srotm,SROTM)(fwi_integer_t * n, fwr_real_t * sx, fwi_integer_t * incx, fwr_real_t * sy, fwi_integer_t * incy, fwr_real_t * sparam);
FORTRAN_CALLSPEC void F_FUNC(srotmg,SROTMG)(fwr_real_t * sd1, fwr_real_t * sd2, fwr_real_t * sx1, fwr_real_t * sy1, fwr_real_t * sparam);
FORTRAN_CALLSPEC void F_FUNC(sscal,SSCAL)(fwi_integer_t * n, fwr_real_t * sa, fwr_real_t * sx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(sswap,SSWAP)(fwi_integer_t * n, fwr_real_t * sx, fwi_integer_t * incx, fwr_real_t * sy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(ssymv,SSYMV)(char * uplo, fwi_integer_t * n, fwr_real_t * alpha, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * x, fwi_integer_t * incx, fwr_real_t * beta, fwr_real_t * y, fwi_integer_t * incy, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(strmv,STRMV)(char * uplo, char * trans, char * diag, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * x, fwi_integer_t * incx, size_t uplo_len_, size_t trans_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(zaxpy,ZAXPY)(fwi_integer_t * n, fwc_dbl_complex_t * za, fwc_dbl_complex_t * zx, fwi_integer_t * incx, fwc_dbl_complex_t * zy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(zcopy,ZCOPY)(fwi_integer_t * n, fwc_dbl_complex_t * zx, fwi_integer_t * incx, fwc_dbl_complex_t * zy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(zdrot,ZDROT)(fwi_integer_t * n, fwc_complex_x16_t * cx, fwi_integer_t * incx, fwc_complex_x16_t * cy, fwi_integer_t * incy, fwr_dbl_t * c, fwr_dbl_t * s);
FORTRAN_CALLSPEC void F_FUNC(zdscal,ZDSCAL)(fwi_integer_t * n, fwr_dbl_t * da, fwc_dbl_complex_t * zx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(zgemm,ZGEMM)(char * transa, char * transb, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwc_dbl_complex_t * alpha, fwc_dbl_complex_t * a, fwi_integer_t * lda, fwc_dbl_complex_t * b, fwi_integer_t * ldb, fwc_dbl_complex_t * beta, fwc_dbl_complex_t * c, fwi_integer_t * ldc, size_t transa_len_, size_t transb_len_);
FORTRAN_CALLSPEC void F_FUNC(zgemv,ZGEMV)(char * trans, fwi_integer_t * m, fwi_integer_t * n, fwc_dbl_complex_t * alpha, fwc_dbl_complex_t * a, fwi_integer_t * lda, fwc_dbl_complex_t * x, fwi_integer_t * incx, fwc_dbl_complex_t * beta, fwc_dbl_complex_t * y, fwi_integer_t * incy, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(zgerc,ZGERC)(fwi_integer_t * m, fwi_integer_t * n, fwc_dbl_complex_t * alpha, fwc_dbl_complex_t * x, fwi_integer_t * incx, fwc_dbl_complex_t * y, fwi_integer_t * incy, fwc_dbl_complex_t * a, fwi_integer_t * lda);
FORTRAN_CALLSPEC void F_FUNC(zgeru,ZGERU)(fwi_integer_t * m, fwi_integer_t * n, fwc_dbl_complex_t * alpha, fwc_dbl_complex_t * x, fwi_integer_t * incx, fwc_dbl_complex_t * y, fwi_integer_t * incy, fwc_dbl_complex_t * a, fwi_integer_t * lda);
FORTRAN_CALLSPEC void F_FUNC(zhemv,ZHEMV)(char * uplo, fwi_integer_t * n, fwc_dbl_complex_t * alpha, fwc_dbl_complex_t * a, fwi_integer_t * lda, fwc_dbl_complex_t * x, fwi_integer_t * incx, fwc_dbl_complex_t * beta, fwc_dbl_complex_t * y, fwi_integer_t * incy, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zrotg,ZROTG)(fwc_dbl_complex_t * ca, fwc_dbl_complex_t * cb, fwr_dbl_t * c, fwc_dbl_complex_t * s);
FORTRAN_CALLSPEC void F_FUNC(zscal,ZSCAL)(fwi_integer_t * n, fwc_dbl_complex_t * za, fwc_dbl_complex_t * zx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(zswap,ZSWAP)(fwi_integer_t * n, fwc_dbl_complex_t * zx, fwi_integer_t * incx, fwc_dbl_complex_t * zy, fwi_integer_t * incy);
FORTRAN_CALLSPEC void F_FUNC(ztrmv,ZTRMV)(char * uplo, char * trans, char * diag, fwi_integer_t * n, fwc_dbl_complex_t * a, fwi_integer_t * lda, fwc_dbl_complex_t * x, fwi_integer_t * incx, size_t uplo_len_, size_t trans_len_, size_t diag_len_);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define caxpy F_FUNC(caxpy,CAXPY)
#define ccopy F_FUNC(ccopy,CCOPY)
#define cgemm F_FUNC(cgemm,CGEMM)
#define cgemv F_FUNC(cgemv,CGEMV)
#define cgerc F_FUNC(cgerc,CGERC)
#define cgeru F_FUNC(cgeru,CGERU)
#define chemv F_FUNC(chemv,CHEMV)
#define crotg F_FUNC(crotg,CROTG)
#define cscal F_FUNC(cscal,CSCAL)
#define csrot F_FUNC(csrot,CSROT)
#define csscal F_FUNC(csscal,CSSCAL)
#define cswap F_FUNC(cswap,CSWAP)
#define ctrmv F_FUNC(ctrmv,CTRMV)
#define dasum F_FUNC(dasum,DASUM)
#define daxpy F_FUNC(daxpy,DAXPY)
#define dcopy F_FUNC(dcopy,DCOPY)
#define ddot F_FUNC(ddot,DDOT)
#define dgemm F_FUNC(dgemm,DGEMM)
#define dgemv F_FUNC(dgemv,DGEMV)
#define dger F_FUNC(dger,DGER)
#define dnrm2 F_FUNC(dnrm2,DNRM2)
#define drot F_FUNC(drot,DROT)
#define drotg F_FUNC(drotg,DROTG)
#define drotm F_FUNC(drotm,DROTM)
#define drotmg F_FUNC(drotmg,DROTMG)
#define dscal F_FUNC(dscal,DSCAL)
#define dswap F_FUNC(dswap,DSWAP)
#define dsymv F_FUNC(dsymv,DSYMV)
#define dtrmv F_FUNC(dtrmv,DTRMV)
#define dzasum F_FUNC(dzasum,DZASUM)
#define dznrm2 F_FUNC(dznrm2,DZNRM2)
#define wcdotu F_FUNC(wcdotu,WCDOTU)
#define wzdotu F_FUNC(wzdotu,WZDOTU)
#define wcdotc F_FUNC(wcdotc,WCDOTC)
#define wzdotc F_FUNC(wzdotc,WZDOTC)
#define icamax F_FUNC(icamax,ICAMAX)
#define idamax F_FUNC(idamax,IDAMAX)
#define isamax F_FUNC(isamax,ISAMAX)
#define izamax F_FUNC(izamax,IZAMAX)
#define sasum F_FUNC(sasum,SASUM)
#define saxpy F_FUNC(saxpy,SAXPY)
#define scasum F_FUNC(scasum,SCASUM)
#define scnrm2 F_FUNC(scnrm2,SCNRM2)
#define scopy F_FUNC(scopy,SCOPY)
#define sdot F_FUNC(sdot,SDOT)
#define sgemm F_FUNC(sgemm,SGEMM)
#define sgemv F_FUNC(sgemv,SGEMV)
#define sger F_FUNC(sger,SGER)
#define snrm2 F_FUNC(snrm2,SNRM2)
#define srot F_FUNC(srot,SROT)
#define srotg F_FUNC(srotg,SROTG)
#define srotm F_FUNC(srotm,SROTM)
#define srotmg F_FUNC(srotmg,SROTMG)
#define sscal F_FUNC(sscal,SSCAL)
#define sswap F_FUNC(sswap,SSWAP)
#define ssymv F_FUNC(ssymv,SSYMV)
#define strmv F_FUNC(strmv,STRMV)
#define zaxpy F_FUNC(zaxpy,ZAXPY)
#define zcopy F_FUNC(zcopy,ZCOPY)
#define zdrot F_FUNC(zdrot,ZDROT)
#define zdscal F_FUNC(zdscal,ZDSCAL)
#define zgemm F_FUNC(zgemm,ZGEMM)
#define zgemv F_FUNC(zgemv,ZGEMV)
#define zgerc F_FUNC(zgerc,ZGERC)
#define zgeru F_FUNC(zgeru,ZGERU)
#define zhemv F_FUNC(zhemv,ZHEMV)
#define zrotg F_FUNC(zrotg,ZROTG)
#define zscal F_FUNC(zscal,ZSCAL)
#define zswap F_FUNC(zswap,ZSWAP)
#define ztrmv F_FUNC(ztrmv,ZTRMV)
#endif
