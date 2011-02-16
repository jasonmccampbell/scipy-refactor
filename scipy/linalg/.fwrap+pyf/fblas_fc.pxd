from fwrap_ktp cimport *

cdef extern from "fblas_fc.h":
    void caxpy "F_FUNC(caxpy,CAXPY)"(
        fwi_integer_t * n,
        fwc_complex_t * ca,
        fwc_complex_t * cx,
        fwi_integer_t * incx,
        fwc_complex_t * cy,
        fwi_integer_t * incy
    )
    void ccopy "F_FUNC(ccopy,CCOPY)"(
        fwi_integer_t * n,
        fwc_complex_t * cx,
        fwi_integer_t * incx,
        fwc_complex_t * cy,
        fwi_integer_t * incy
    )
    void cgemm "F_FUNC(cgemm,CGEMM)"(
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
    )
    void cgemv "F_FUNC(cgemv,CGEMV)"(
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
    )
    void cgerc "F_FUNC(cgerc,CGERC)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_t * alpha,
        fwc_complex_t * x,
        fwi_integer_t * incx,
        fwc_complex_t * y,
        fwi_integer_t * incy,
        fwc_complex_t * a,
        fwi_integer_t * lda
    )
    void cgeru "F_FUNC(cgeru,CGERU)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_t * alpha,
        fwc_complex_t * x,
        fwi_integer_t * incx,
        fwc_complex_t * y,
        fwi_integer_t * incy,
        fwc_complex_t * a,
        fwi_integer_t * lda
    )
    void chemv "F_FUNC(chemv,CHEMV)"(
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
    )
    void crotg "F_FUNC(crotg,CROTG)"(
        fwc_complex_t * ca,
        fwc_complex_t * cb,
        fwr_real_t * c,
        fwc_complex_t * s
    )
    void cscal "F_FUNC(cscal,CSCAL)"(
        fwi_integer_t * n,
        fwc_complex_t * ca,
        fwc_complex_t * cx,
        fwi_integer_t * incx
    )
    void csrot "F_FUNC(csrot,CSROT)"(
        fwi_integer_t * n,
        fwc_complex_t * cx,
        fwi_integer_t * incx,
        fwc_complex_t * cy,
        fwi_integer_t * incy,
        fwr_real_t * c,
        fwr_real_t * s
    )
    void csscal "F_FUNC(csscal,CSSCAL)"(
        fwi_integer_t * n,
        fwr_real_t * sa,
        fwc_complex_t * cx,
        fwi_integer_t * incx
    )
    void cswap "F_FUNC(cswap,CSWAP)"(
        fwi_integer_t * n,
        fwc_complex_t * cx,
        fwi_integer_t * incx,
        fwc_complex_t * cy,
        fwi_integer_t * incy
    )
    void ctrmv "F_FUNC(ctrmv,CTRMV)"(
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
    )
    fwr_dbl_t dasum "F_FUNC(dasum,DASUM)"(
        fwi_integer_t * n,
        fwr_dbl_t * dx,
        fwi_integer_t * incx
    )
    void daxpy "F_FUNC(daxpy,DAXPY)"(
        fwi_integer_t * n,
        fwr_dbl_t * da,
        fwr_dbl_t * dx,
        fwi_integer_t * incx,
        fwr_dbl_t * dy,
        fwi_integer_t * incy
    )
    void dcopy "F_FUNC(dcopy,DCOPY)"(
        fwi_integer_t * n,
        fwr_dbl_t * dx,
        fwi_integer_t * incx,
        fwr_dbl_t * dy,
        fwi_integer_t * incy
    )
    fwr_dbl_t ddot "F_FUNC(ddot,DDOT)"(
        fwi_integer_t * n,
        fwr_dbl_t * dx,
        fwi_integer_t * incx,
        fwr_dbl_t * dy,
        fwi_integer_t * incy
    )
    void dgemm "F_FUNC(dgemm,DGEMM)"(
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
    )
    void dgemv "F_FUNC(dgemv,DGEMV)"(
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
    )
    void dger "F_FUNC(dger,DGER)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * alpha,
        fwr_dbl_t * x,
        fwi_integer_t * incx,
        fwr_dbl_t * y,
        fwi_integer_t * incy,
        fwr_dbl_t * a,
        fwi_integer_t * lda
    )
    fwr_dbl_t dnrm2 "F_FUNC(dnrm2,DNRM2)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwi_integer_t * incx
    )
    void drot "F_FUNC(drot,DROT)"(
        fwi_integer_t * n,
        fwr_dbl_t * dx,
        fwi_integer_t * incx,
        fwr_dbl_t * dy,
        fwi_integer_t * incy,
        fwr_dbl_t * c,
        fwr_dbl_t * s
    )
    void drotg "F_FUNC(drotg,DROTG)"(
        fwr_dbl_t * da,
        fwr_dbl_t * db,
        fwr_dbl_t * c,
        fwr_dbl_t * s
    )
    void drotm "F_FUNC(drotm,DROTM)"(
        fwi_integer_t * n,
        fwr_dbl_t * dx,
        fwi_integer_t * incx,
        fwr_dbl_t * dy,
        fwi_integer_t * incy,
        fwr_dbl_t * dparam
    )
    void drotmg "F_FUNC(drotmg,DROTMG)"(
        fwr_dbl_t * dd1,
        fwr_dbl_t * dd2,
        fwr_dbl_t * dx1,
        fwr_dbl_t * dy1,
        fwr_dbl_t * dparam
    )
    void dscal "F_FUNC(dscal,DSCAL)"(
        fwi_integer_t * n,
        fwr_dbl_t * da,
        fwr_dbl_t * dx,
        fwi_integer_t * incx
    )
    void dswap "F_FUNC(dswap,DSWAP)"(
        fwi_integer_t * n,
        fwr_dbl_t * dx,
        fwi_integer_t * incx,
        fwr_dbl_t * dy,
        fwi_integer_t * incy
    )
    void dsymv "F_FUNC(dsymv,DSYMV)"(
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
    )
    void dtrmv "F_FUNC(dtrmv,DTRMV)"(
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
    )
    fwr_dbl_t dzasum "F_FUNC(dzasum,DZASUM)"(
        fwi_integer_t * n,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx
    )
    fwr_dbl_t dznrm2 "F_FUNC(dznrm2,DZNRM2)"(
        fwi_integer_t * n,
        fwc_dbl_complex_t * x,
        fwi_integer_t * incx
    )
    void wcdotu "F_FUNC(wcdotu,WCDOTU)"(
        fwc_complex_t * r,
        fwi_integer_t * n,
        fwc_complex_t * cx,
        fwi_integer_t * incx,
        fwc_complex_t * cy,
        fwi_integer_t * incy
    )
    void wzdotu "F_FUNC(wzdotu,WZDOTU)"(
        fwc_dbl_complex_t * r,
        fwi_integer_t * n,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx,
        fwc_dbl_complex_t * zy,
        fwi_integer_t * incy
    )
    void wcdotc "F_FUNC(wcdotc,WCDOTC)"(
        fwc_complex_t * r,
        fwi_integer_t * n,
        fwc_complex_t * cx,
        fwi_integer_t * incx,
        fwc_complex_t * cy,
        fwi_integer_t * incy
    )
    void wzdotc "F_FUNC(wzdotc,WZDOTC)"(
        fwc_dbl_complex_t * r,
        fwi_integer_t * n,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx,
        fwc_dbl_complex_t * zy,
        fwi_integer_t * incy
    )
    fwi_integer_t icamax "F_FUNC(icamax,ICAMAX)"(
        fwi_integer_t * n,
        fwc_complex_t * cx,
        fwi_integer_t * incx
    )
    fwi_integer_t idamax "F_FUNC(idamax,IDAMAX)"(
        fwi_integer_t * n,
        fwr_dbl_t * dx,
        fwi_integer_t * incx
    )
    fwi_integer_t isamax "F_FUNC(isamax,ISAMAX)"(
        fwi_integer_t * n,
        fwr_real_t * sx,
        fwi_integer_t * incx
    )
    fwi_integer_t izamax "F_FUNC(izamax,IZAMAX)"(
        fwi_integer_t * n,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx
    )
    fwr_real_t sasum "F_FUNC(sasum,SASUM)"(
        fwi_integer_t * n,
        fwr_real_t * sx,
        fwi_integer_t * incx
    )
    void saxpy "F_FUNC(saxpy,SAXPY)"(
        fwi_integer_t * n,
        fwr_real_t * sa,
        fwr_real_t * sx,
        fwi_integer_t * incx,
        fwr_real_t * sy,
        fwi_integer_t * incy
    )
    fwr_real_t scasum "F_FUNC(scasum,SCASUM)"(
        fwi_integer_t * n,
        fwc_complex_t * cx,
        fwi_integer_t * incx
    )
    fwr_real_t scnrm2 "F_FUNC(scnrm2,SCNRM2)"(
        fwi_integer_t * n,
        fwc_complex_t * x,
        fwi_integer_t * incx
    )
    void scopy "F_FUNC(scopy,SCOPY)"(
        fwi_integer_t * n,
        fwr_real_t * sx,
        fwi_integer_t * incx,
        fwr_real_t * sy,
        fwi_integer_t * incy
    )
    fwr_real_t sdot "F_FUNC(sdot,SDOT)"(
        fwi_integer_t * n,
        fwr_real_t * sx,
        fwi_integer_t * incx,
        fwr_real_t * sy,
        fwi_integer_t * incy
    )
    void sgemm "F_FUNC(sgemm,SGEMM)"(
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
    )
    void sgemv "F_FUNC(sgemv,SGEMV)"(
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
    )
    void sger "F_FUNC(sger,SGER)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_real_t * alpha,
        fwr_real_t * x,
        fwi_integer_t * incx,
        fwr_real_t * y,
        fwi_integer_t * incy,
        fwr_real_t * a,
        fwi_integer_t * lda
    )
    fwr_real_t snrm2 "F_FUNC(snrm2,SNRM2)"(
        fwi_integer_t * n,
        fwr_real_t * x,
        fwi_integer_t * incx
    )
    void srot "F_FUNC(srot,SROT)"(
        fwi_integer_t * n,
        fwr_real_t * sx,
        fwi_integer_t * incx,
        fwr_real_t * sy,
        fwi_integer_t * incy,
        fwr_real_t * c,
        fwr_real_t * s
    )
    void srotg "F_FUNC(srotg,SROTG)"(
        fwr_real_t * sa,
        fwr_real_t * sb,
        fwr_real_t * c,
        fwr_real_t * s
    )
    void srotm "F_FUNC(srotm,SROTM)"(
        fwi_integer_t * n,
        fwr_real_t * sx,
        fwi_integer_t * incx,
        fwr_real_t * sy,
        fwi_integer_t * incy,
        fwr_real_t * sparam
    )
    void srotmg "F_FUNC(srotmg,SROTMG)"(
        fwr_real_t * sd1,
        fwr_real_t * sd2,
        fwr_real_t * sx1,
        fwr_real_t * sy1,
        fwr_real_t * sparam
    )
    void sscal "F_FUNC(sscal,SSCAL)"(
        fwi_integer_t * n,
        fwr_real_t * sa,
        fwr_real_t * sx,
        fwi_integer_t * incx
    )
    void sswap "F_FUNC(sswap,SSWAP)"(
        fwi_integer_t * n,
        fwr_real_t * sx,
        fwi_integer_t * incx,
        fwr_real_t * sy,
        fwi_integer_t * incy
    )
    void ssymv "F_FUNC(ssymv,SSYMV)"(
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
    )
    void strmv "F_FUNC(strmv,STRMV)"(
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
    )
    void zaxpy "F_FUNC(zaxpy,ZAXPY)"(
        fwi_integer_t * n,
        fwc_dbl_complex_t * za,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx,
        fwc_dbl_complex_t * zy,
        fwi_integer_t * incy
    )
    void zcopy "F_FUNC(zcopy,ZCOPY)"(
        fwi_integer_t * n,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx,
        fwc_dbl_complex_t * zy,
        fwi_integer_t * incy
    )
    void zdrot "F_FUNC(zdrot,ZDROT)"(
        fwi_integer_t * n,
        fwc_complex_x16_t * cx,
        fwi_integer_t * incx,
        fwc_complex_x16_t * cy,
        fwi_integer_t * incy,
        fwr_dbl_t * c,
        fwr_dbl_t * s
    )
    void zdscal "F_FUNC(zdscal,ZDSCAL)"(
        fwi_integer_t * n,
        fwr_dbl_t * da,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx
    )
    void zgemm "F_FUNC(zgemm,ZGEMM)"(
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
    )
    void zgemv "F_FUNC(zgemv,ZGEMV)"(
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
    )
    void zgerc "F_FUNC(zgerc,ZGERC)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_dbl_complex_t * alpha,
        fwc_dbl_complex_t * x,
        fwi_integer_t * incx,
        fwc_dbl_complex_t * y,
        fwi_integer_t * incy,
        fwc_dbl_complex_t * a,
        fwi_integer_t * lda
    )
    void zgeru "F_FUNC(zgeru,ZGERU)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_dbl_complex_t * alpha,
        fwc_dbl_complex_t * x,
        fwi_integer_t * incx,
        fwc_dbl_complex_t * y,
        fwi_integer_t * incy,
        fwc_dbl_complex_t * a,
        fwi_integer_t * lda
    )
    void zhemv "F_FUNC(zhemv,ZHEMV)"(
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
    )
    void zrotg "F_FUNC(zrotg,ZROTG)"(
        fwc_dbl_complex_t * ca,
        fwc_dbl_complex_t * cb,
        fwr_dbl_t * c,
        fwc_dbl_complex_t * s
    )
    void zscal "F_FUNC(zscal,ZSCAL)"(
        fwi_integer_t * n,
        fwc_dbl_complex_t * za,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx
    )
    void zswap "F_FUNC(zswap,ZSWAP)"(
        fwi_integer_t * n,
        fwc_dbl_complex_t * zx,
        fwi_integer_t * incx,
        fwc_dbl_complex_t * zy,
        fwi_integer_t * incy
    )
    void ztrmv "F_FUNC(ztrmv,ZTRMV)"(
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
    )
