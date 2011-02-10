from fwrap_ktp cimport *

cdef extern from "flapack_fc.h":
    ctypedef fwl_logical_t (*sgees_callback)(fwr_real_t*)
    ctypedef fwl_logical_t (*dgees_callback)(fwr_dbl_t*)
    ctypedef fwl_logical_t (*cgees_callback)(fwc_complex_t*)
    ctypedef fwl_logical_t (*zgees_callback)(fwc_complex_x16_t*)

    void cgbsv "F_FUNC(cgbsv,CGBSV)"(
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwi_integer_t * nrhs,
        fwc_complex_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info
    )
    void cgbtrf "F_FUNC(cgbtrf,CGBTRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwc_complex_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwi_integer_t * info
    )
    void cgbtrs "F_FUNC(cgbtrs,CGBTRS)"(
        char * trans,
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwi_integer_t * nrhs,
        fwc_complex_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t trans_len_
    )
    void cgebal "F_FUNC(cgebal,CGEBAL)"(
        char * job,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ilo,
        fwi_integer_t * ihi,
        fwr_real_t * scale,
        fwi_integer_t * info,
        size_t job_len_
    )
    void cgees "F_FUNC(cgees,CGEES)"(
        char * jobvs,
        char * sort,
        cgees_callback select,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * sdim,
        fwc_complex_t * w,
        fwc_complex_t * vs,
        fwi_integer_t * ldvs,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwl_logical_t * bwork,
        fwi_integer_t * info,
        size_t jobvs_len_,
        size_t sort_len_
    )
    void cgeev "F_FUNC(cgeev,CGEEV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * w,
        fwc_complex_t * vl,
        fwi_integer_t * ldvl,
        fwc_complex_t * vr,
        fwi_integer_t * ldvr,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void cgegv "F_FUNC(cgegv,CGEGV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwc_complex_t * alpha,
        fwc_complex_t * beta,
        fwc_complex_t * vl,
        fwi_integer_t * ldvl,
        fwc_complex_t * vr,
        fwi_integer_t * ldvr,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void cgehrd "F_FUNC(cgehrd,CGEHRD)"(
        fwi_integer_t * n,
        fwi_integer_t * ilo,
        fwi_integer_t * ihi,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * tau,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void cgelss "F_FUNC(cgelss,CGELSS)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * s,
        fwr_real_t * rcond,
        fwi_integer_t * rank,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * info
    )
    void cgeqrf "F_FUNC(cgeqrf,CGEQRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * tau,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void cgerqf "F_FUNC(cgerqf,CGERQF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * tau,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void cgesdd "F_FUNC(cgesdd,CGESDD)"(
        char * jobz,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwr_real_t * s,
        fwc_complex_t * u,
        fwi_integer_t * ldu,
        fwc_complex_t * vt,
        fwi_integer_t * ldvt,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * iwork,
        fwi_integer_t * info,
        size_t jobz_len_
    )
    void cgesv "F_FUNC(cgesv,CGESV)"(
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info
    )
    void cgetrf "F_FUNC(cgetrf,CGETRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwi_integer_t * info
    )
    void cgetri "F_FUNC(cgetri,CGETRI)"(
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void cgetrs "F_FUNC(cgetrs,CGETRS)"(
        char * trans,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t trans_len_
    )
    void cggev "F_FUNC(cggev,CGGEV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwc_complex_t * alpha,
        fwc_complex_t * beta,
        fwc_complex_t * vl,
        fwi_integer_t * ldvl,
        fwc_complex_t * vr,
        fwi_integer_t * ldvr,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void chbevd "F_FUNC(chbevd,CHBEVD)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwc_complex_t * ab,
        fwi_integer_t * ldab,
        fwr_real_t * w,
        fwc_complex_t * z,
        fwi_integer_t * ldz,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * lrwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void chbevx "F_FUNC(chbevx,CHBEVX)"(
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwc_complex_t * ab,
        fwi_integer_t * ldab,
        fwc_complex_t * q,
        fwi_integer_t * ldq,
        fwr_real_t * vl,
        fwr_real_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_real_t * abstol,
        fwi_integer_t * m,
        fwr_real_t * w,
        fwc_complex_t * z,
        fwi_integer_t * ldz,
        fwc_complex_t * work,
        fwr_real_t * rwork,
        fwi_integer_t * iwork,
        fwi_integer_t * ifail,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void cheev "F_FUNC(cheev,CHEEV)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwr_real_t * w,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void cheevr "F_FUNC(cheevr,CHEEVR)"(
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwr_real_t * vl,
        fwr_real_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_real_t * abstol,
        fwi_integer_t * m,
        fwr_real_t * w,
        fwc_complex_t * z,
        fwi_integer_t * ldz,
        fwi_integer_t * isuppz,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * lrwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void chegv "F_FUNC(chegv,CHEGV)"(
        fwi_integer_t * itype,
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * w,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void chegvd "F_FUNC(chegvd,CHEGVD)"(
        fwi_integer_t * itype,
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * w,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * lrwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void chegvx "F_FUNC(chegvx,CHEGVX)"(
        fwi_integer_t * itype,
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * vl,
        fwr_real_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_real_t * abstol,
        fwi_integer_t * m,
        fwr_real_t * w,
        fwc_complex_t * z,
        fwi_integer_t * ldz,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwr_real_t * rwork,
        fwi_integer_t * iwork,
        fwi_integer_t * ifail,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void claswp "F_FUNC(claswp,CLASWP)"(
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * k1,
        fwi_integer_t * k2,
        fwi_integer_t * ipiv,
        fwi_integer_t * incx
    )
    void clauum "F_FUNC(clauum,CLAUUM)"(
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void cpbsv "F_FUNC(cpbsv,CPBSV)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwi_integer_t * nrhs,
        fwc_complex_t * ab,
        fwi_integer_t * ldab,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void cpbtrf "F_FUNC(cpbtrf,CPBTRF)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwc_complex_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void cpbtrs "F_FUNC(cpbtrs,CPBTRS)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwi_integer_t * nrhs,
        fwc_complex_t * ab,
        fwi_integer_t * ldab,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void cposv "F_FUNC(cposv,CPOSV)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void cpotrf "F_FUNC(cpotrf,CPOTRF)"(
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void cpotri "F_FUNC(cpotri,CPOTRI)"(
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void cpotrs "F_FUNC(cpotrs,CPOTRS)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void ctrtri "F_FUNC(ctrtri,CTRTRI)"(
        char * uplo,
        char * diag,
        fwi_integer_t * n,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_,
        size_t diag_len_
    )
    void ctrtrs "F_FUNC(ctrtrs,CTRTRS)"(
        char * uplo,
        char * trans,
        char * diag,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_,
        size_t trans_len_,
        size_t diag_len_
    )
    void cungqr "F_FUNC(cungqr,CUNGQR)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * k,
        fwc_complex_t * a,
        fwi_integer_t * lda,
        fwc_complex_t * tau,
        fwc_complex_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void dgbsv "F_FUNC(dgbsv,DGBSV)"(
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwi_integer_t * nrhs,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info
    )
    void dgbtrf "F_FUNC(dgbtrf,DGBTRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwi_integer_t * info
    )
    void dgbtrs "F_FUNC(dgbtrs,DGBTRS)"(
        char * trans,
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwi_integer_t * nrhs,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t trans_len_
    )
    void dgebal "F_FUNC(dgebal,DGEBAL)"(
        char * job,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ilo,
        fwi_integer_t * ihi,
        fwr_dbl_t * scale,
        fwi_integer_t * info,
        size_t job_len_
    )
    void dgees "F_FUNC(dgees,DGEES)"(
        char * jobvs,
        char * sort,
        dgees_callback select,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * sdim,
        fwr_dbl_t * wr,
        fwr_dbl_t * wi,
        fwr_dbl_t * vs,
        fwi_integer_t * ldvs,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwl_logical_t * bwork,
        fwi_integer_t * info,
        size_t jobvs_len_,
        size_t sort_len_
    )
    void dgeev "F_FUNC(dgeev,DGEEV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * wr,
        fwr_dbl_t * wi,
        fwr_dbl_t * vl,
        fwi_integer_t * ldvl,
        fwr_dbl_t * vr,
        fwi_integer_t * ldvr,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void dgegv "F_FUNC(dgegv,DGEGV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * alphar,
        fwr_dbl_t * alphai,
        fwr_dbl_t * beta,
        fwr_dbl_t * vl,
        fwi_integer_t * ldvl,
        fwr_dbl_t * vr,
        fwi_integer_t * ldvr,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void dgehrd "F_FUNC(dgehrd,DGEHRD)"(
        fwi_integer_t * n,
        fwi_integer_t * ilo,
        fwi_integer_t * ihi,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * tau,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void dgelss "F_FUNC(dgelss,DGELSS)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * s,
        fwr_dbl_t * rcond,
        fwi_integer_t * rank,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void dgeqrf "F_FUNC(dgeqrf,DGEQRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * tau,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void dgerqf "F_FUNC(dgerqf,DGERQF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * tau,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void dgesdd "F_FUNC(dgesdd,DGESDD)"(
        char * jobz,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * s,
        fwr_dbl_t * u,
        fwi_integer_t * ldu,
        fwr_dbl_t * vt,
        fwi_integer_t * ldvt,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * info,
        size_t jobz_len_
    )
    void dgesv "F_FUNC(dgesv,DGESV)"(
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info
    )
    void dgetrf "F_FUNC(dgetrf,DGETRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwi_integer_t * info
    )
    void dgetri "F_FUNC(dgetri,DGETRI)"(
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void dgetrs "F_FUNC(dgetrs,DGETRS)"(
        char * trans,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t trans_len_
    )
    void dggev "F_FUNC(dggev,DGGEV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * alphar,
        fwr_dbl_t * alphai,
        fwr_dbl_t * beta,
        fwr_dbl_t * vl,
        fwi_integer_t * ldvl,
        fwr_dbl_t * vr,
        fwi_integer_t * ldvr,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    fwr_dbl_t dlamch "F_FUNC(dlamch,DLAMCH)"(
        char * cmach,
        size_t cmach_len_
    )
    void dlaswp "F_FUNC(dlaswp,DLASWP)"(
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * k1,
        fwi_integer_t * k2,
        fwi_integer_t * ipiv,
        fwi_integer_t * incx
    )
    void dlauum "F_FUNC(dlauum,DLAUUM)"(
        char * uplo,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void dorgqr "F_FUNC(dorgqr,DORGQR)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * k,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * tau,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void dpbsv "F_FUNC(dpbsv,DPBSV)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwi_integer_t * nrhs,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void dpbtrf "F_FUNC(dpbtrf,DPBTRF)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void dpbtrs "F_FUNC(dpbtrs,DPBTRS)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwi_integer_t * nrhs,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void dposv "F_FUNC(dposv,DPOSV)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void dpotrf "F_FUNC(dpotrf,DPOTRF)"(
        char * uplo,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void dpotri "F_FUNC(dpotri,DPOTRI)"(
        char * uplo,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void dpotrs "F_FUNC(dpotrs,DPOTRS)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void dsbev "F_FUNC(dsbev,DSBEV)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwr_dbl_t * w,
        fwr_dbl_t * z,
        fwi_integer_t * ldz,
        fwr_dbl_t * work,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void dsbevd "F_FUNC(dsbevd,DSBEVD)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwr_dbl_t * w,
        fwr_dbl_t * z,
        fwi_integer_t * ldz,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void dsbevx "F_FUNC(dsbevx,DSBEVX)"(
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwr_dbl_t * ab,
        fwi_integer_t * ldab,
        fwr_dbl_t * q,
        fwi_integer_t * ldq,
        fwr_dbl_t * vl,
        fwr_dbl_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_dbl_t * abstol,
        fwi_integer_t * m,
        fwr_dbl_t * w,
        fwr_dbl_t * z,
        fwi_integer_t * ldz,
        fwr_dbl_t * work,
        fwi_integer_t * iwork,
        fwi_integer_t * ifail,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void dsyev "F_FUNC(dsyev,DSYEV)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * w,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void dsyevr "F_FUNC(dsyevr,DSYEVR)"(
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * vl,
        fwr_dbl_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_dbl_t * abstol,
        fwi_integer_t * m,
        fwr_dbl_t * w,
        fwr_dbl_t * z,
        fwi_integer_t * ldz,
        fwi_integer_t * isuppz,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void dsygv "F_FUNC(dsygv,DSYGV)"(
        fwi_integer_t * itype,
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * w,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void dsygvd "F_FUNC(dsygvd,DSYGVD)"(
        fwi_integer_t * itype,
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * w,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void dsygvx "F_FUNC(dsygvx,DSYGVX)"(
        fwi_integer_t * itype,
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * vl,
        fwr_dbl_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_dbl_t * abstol,
        fwi_integer_t * m,
        fwr_dbl_t * w,
        fwr_dbl_t * z,
        fwi_integer_t * ldz,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * ifail,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void dtrtri "F_FUNC(dtrtri,DTRTRI)"(
        char * uplo,
        char * diag,
        fwi_integer_t * n,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_,
        size_t diag_len_
    )
    void dtrtrs "F_FUNC(dtrtrs,DTRTRS)"(
        char * uplo,
        char * trans,
        char * diag,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_dbl_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_,
        size_t trans_len_,
        size_t diag_len_
    )
    void sgbsv "F_FUNC(sgbsv,SGBSV)"(
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwi_integer_t * nrhs,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info
    )
    void sgbtrf "F_FUNC(sgbtrf,SGBTRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwi_integer_t * info
    )
    void sgbtrs "F_FUNC(sgbtrs,SGBTRS)"(
        char * trans,
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwi_integer_t * nrhs,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t trans_len_
    )
    void sgebal "F_FUNC(sgebal,SGEBAL)"(
        char * job,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ilo,
        fwi_integer_t * ihi,
        fwr_real_t * scale,
        fwi_integer_t * info,
        size_t job_len_
    )
    void sgees "F_FUNC(sgees,SGEES)"(
        char * jobvs,
        char * sort,
        sgees_callback select,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * sdim,
        fwr_real_t * wr,
        fwr_real_t * wi,
        fwr_real_t * vs,
        fwi_integer_t * ldvs,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwl_logical_t * bwork,
        fwi_integer_t * info,
        size_t jobvs_len_,
        size_t sort_len_
    )
    void sgeev "F_FUNC(sgeev,SGEEV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * wr,
        fwr_real_t * wi,
        fwr_real_t * vl,
        fwi_integer_t * ldvl,
        fwr_real_t * vr,
        fwi_integer_t * ldvr,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void sgegv "F_FUNC(sgegv,SGEGV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * alphar,
        fwr_real_t * alphai,
        fwr_real_t * beta,
        fwr_real_t * vl,
        fwi_integer_t * ldvl,
        fwr_real_t * vr,
        fwi_integer_t * ldvr,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void sgehrd "F_FUNC(sgehrd,SGEHRD)"(
        fwi_integer_t * n,
        fwi_integer_t * ilo,
        fwi_integer_t * ihi,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * tau,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void sgelss "F_FUNC(sgelss,SGELSS)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * s,
        fwr_real_t * rcond,
        fwi_integer_t * rank,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void sgeqrf "F_FUNC(sgeqrf,SGEQRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * tau,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void sgerqf "F_FUNC(sgerqf,SGERQF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * tau,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void sgesdd "F_FUNC(sgesdd,SGESDD)"(
        char * jobz,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * s,
        fwr_real_t * u,
        fwi_integer_t * ldu,
        fwr_real_t * vt,
        fwi_integer_t * ldvt,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * info,
        size_t jobz_len_
    )
    void sgesv "F_FUNC(sgesv,SGESV)"(
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info
    )
    void sgetrf "F_FUNC(sgetrf,SGETRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwi_integer_t * info
    )
    void sgetri "F_FUNC(sgetri,SGETRI)"(
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void sgetrs "F_FUNC(sgetrs,SGETRS)"(
        char * trans,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t trans_len_
    )
    void sggev "F_FUNC(sggev,SGGEV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * alphar,
        fwr_real_t * alphai,
        fwr_real_t * beta,
        fwr_real_t * vl,
        fwi_integer_t * ldvl,
        fwr_real_t * vr,
        fwi_integer_t * ldvr,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    fwr_real_t slamch "F_FUNC(slamch,SLAMCH)"(
        char * cmach,
        size_t cmach_len_
    )
    void slaswp "F_FUNC(slaswp,SLASWP)"(
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * k1,
        fwi_integer_t * k2,
        fwi_integer_t * ipiv,
        fwi_integer_t * incx
    )
    void slauum "F_FUNC(slauum,SLAUUM)"(
        char * uplo,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void sorgqr "F_FUNC(sorgqr,SORGQR)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * k,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * tau,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void spbsv "F_FUNC(spbsv,SPBSV)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwi_integer_t * nrhs,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void spbtrf "F_FUNC(spbtrf,SPBTRF)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void spbtrs "F_FUNC(spbtrs,SPBTRS)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwi_integer_t * nrhs,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void sposv "F_FUNC(sposv,SPOSV)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void spotrf "F_FUNC(spotrf,SPOTRF)"(
        char * uplo,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void spotri "F_FUNC(spotri,SPOTRI)"(
        char * uplo,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void spotrs "F_FUNC(spotrs,SPOTRS)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void ssbev "F_FUNC(ssbev,SSBEV)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwr_real_t * w,
        fwr_real_t * z,
        fwi_integer_t * ldz,
        fwr_real_t * work,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void ssbevd "F_FUNC(ssbevd,SSBEVD)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwr_real_t * w,
        fwr_real_t * z,
        fwi_integer_t * ldz,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void ssbevx "F_FUNC(ssbevx,SSBEVX)"(
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwr_real_t * ab,
        fwi_integer_t * ldab,
        fwr_real_t * q,
        fwi_integer_t * ldq,
        fwr_real_t * vl,
        fwr_real_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_real_t * abstol,
        fwi_integer_t * m,
        fwr_real_t * w,
        fwr_real_t * z,
        fwi_integer_t * ldz,
        fwr_real_t * work,
        fwi_integer_t * iwork,
        fwi_integer_t * ifail,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void ssyev "F_FUNC(ssyev,SSYEV)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * w,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void ssyevr "F_FUNC(ssyevr,SSYEVR)"(
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * vl,
        fwr_real_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_real_t * abstol,
        fwi_integer_t * m,
        fwr_real_t * w,
        fwr_real_t * z,
        fwi_integer_t * ldz,
        fwi_integer_t * isuppz,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void ssygv "F_FUNC(ssygv,SSYGV)"(
        fwi_integer_t * itype,
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * w,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void ssygvd "F_FUNC(ssygvd,SSYGVD)"(
        fwi_integer_t * itype,
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * w,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void ssygvx "F_FUNC(ssygvx,SSYGVX)"(
        fwi_integer_t * itype,
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwr_real_t * vl,
        fwr_real_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_real_t * abstol,
        fwi_integer_t * m,
        fwr_real_t * w,
        fwr_real_t * z,
        fwi_integer_t * ldz,
        fwr_real_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * ifail,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void strtri "F_FUNC(strtri,STRTRI)"(
        char * uplo,
        char * diag,
        fwi_integer_t * n,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_,
        size_t diag_len_
    )
    void strtrs "F_FUNC(strtrs,STRTRS)"(
        char * uplo,
        char * trans,
        char * diag,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwr_real_t * a,
        fwi_integer_t * lda,
        fwr_real_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_,
        size_t trans_len_,
        size_t diag_len_
    )
    void zgbsv "F_FUNC(zgbsv,ZGBSV)"(
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info
    )
    void zgbtrf "F_FUNC(zgbtrf,ZGBTRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwc_complex_x16_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwi_integer_t * info
    )
    void zgbtrs "F_FUNC(zgbtrs,ZGBTRS)"(
        char * trans,
        fwi_integer_t * n,
        fwi_integer_t * kl,
        fwi_integer_t * ku,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * ipiv,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t trans_len_
    )
    void zgebal "F_FUNC(zgebal,ZGEBAL)"(
        char * job,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ilo,
        fwi_integer_t * ihi,
        fwr_dbl_t * scale,
        fwi_integer_t * info,
        size_t job_len_
    )
    void zgees "F_FUNC(zgees,ZGEES)"(
        char * jobvs,
        char * sort,
        zgees_callback select,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * sdim,
        fwc_complex_x16_t * w,
        fwc_complex_x16_t * vs,
        fwi_integer_t * ldvs,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwl_logical_t * bwork,
        fwi_integer_t * info,
        size_t jobvs_len_,
        size_t sort_len_
    )
    void zgeev "F_FUNC(zgeev,ZGEEV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * w,
        fwc_complex_x16_t * vl,
        fwi_integer_t * ldvl,
        fwc_complex_x16_t * vr,
        fwi_integer_t * ldvr,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void zgegv "F_FUNC(zgegv,ZGEGV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwc_complex_x16_t * alpha,
        fwc_complex_x16_t * beta,
        fwc_complex_x16_t * vl,
        fwi_integer_t * ldvl,
        fwc_complex_x16_t * vr,
        fwi_integer_t * ldvr,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void zgehrd "F_FUNC(zgehrd,ZGEHRD)"(
        fwi_integer_t * n,
        fwi_integer_t * ilo,
        fwi_integer_t * ihi,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * tau,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void zgelss "F_FUNC(zgelss,ZGELSS)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * s,
        fwr_dbl_t * rcond,
        fwi_integer_t * rank,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * info
    )
    void zgeqrf "F_FUNC(zgeqrf,ZGEQRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * tau,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void zgerqf "F_FUNC(zgerqf,ZGERQF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * tau,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void zgesdd "F_FUNC(zgesdd,ZGESDD)"(
        char * jobz,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * s,
        fwc_complex_x16_t * u,
        fwi_integer_t * ldu,
        fwc_complex_x16_t * vt,
        fwi_integer_t * ldvt,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * iwork,
        fwi_integer_t * info,
        size_t jobz_len_
    )
    void zgesv "F_FUNC(zgesv,ZGESV)"(
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info
    )
    void zgetrf "F_FUNC(zgetrf,ZGETRF)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwi_integer_t * info
    )
    void zgetri "F_FUNC(zgetri,ZGETRI)"(
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
    void zgetrs "F_FUNC(zgetrs,ZGETRS)"(
        char * trans,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * ipiv,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t trans_len_
    )
    void zggev "F_FUNC(zggev,ZGGEV)"(
        char * jobvl,
        char * jobvr,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwc_complex_x16_t * alpha,
        fwc_complex_x16_t * beta,
        fwc_complex_x16_t * vl,
        fwi_integer_t * ldvl,
        fwc_complex_x16_t * vr,
        fwi_integer_t * ldvr,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * info,
        size_t jobvl_len_,
        size_t jobvr_len_
    )
    void zhbevd "F_FUNC(zhbevd,ZHBEVD)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwc_complex_x16_t * ab,
        fwi_integer_t * ldab,
        fwr_dbl_t * w,
        fwc_complex_x16_t * z,
        fwi_integer_t * ldz,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * lrwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void zhbevx "F_FUNC(zhbevx,ZHBEVX)"(
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwc_complex_x16_t * ab,
        fwi_integer_t * ldab,
        fwc_complex_x16_t * q,
        fwi_integer_t * ldq,
        fwr_dbl_t * vl,
        fwr_dbl_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_dbl_t * abstol,
        fwi_integer_t * m,
        fwr_dbl_t * w,
        fwc_complex_x16_t * z,
        fwi_integer_t * ldz,
        fwc_complex_x16_t * work,
        fwr_dbl_t * rwork,
        fwi_integer_t * iwork,
        fwi_integer_t * ifail,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void zheev "F_FUNC(zheev,ZHEEV)"(
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * w,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void zheevr "F_FUNC(zheevr,ZHEEVR)"(
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwr_dbl_t * vl,
        fwr_dbl_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_dbl_t * abstol,
        fwi_integer_t * m,
        fwr_dbl_t * w,
        fwc_complex_x16_t * z,
        fwi_integer_t * ldz,
        fwi_integer_t * isuppz,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * lrwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void zhegv "F_FUNC(zhegv,ZHEGV)"(
        fwi_integer_t * itype,
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * w,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void zhegvd "F_FUNC(zhegvd,ZHEGVD)"(
        fwi_integer_t * itype,
        char * jobz,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * w,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * lrwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t uplo_len_
    )
    void zhegvx "F_FUNC(zhegvx,ZHEGVX)"(
        fwi_integer_t * itype,
        char * jobz,
        char * range,
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwr_dbl_t * vl,
        fwr_dbl_t * vu,
        fwi_integer_t * il,
        fwi_integer_t * iu,
        fwr_dbl_t * abstol,
        fwi_integer_t * m,
        fwr_dbl_t * w,
        fwc_complex_x16_t * z,
        fwi_integer_t * ldz,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwr_dbl_t * rwork,
        fwi_integer_t * iwork,
        fwi_integer_t * ifail,
        fwi_integer_t * info,
        size_t jobz_len_,
        size_t range_len_,
        size_t uplo_len_
    )
    void zlaswp "F_FUNC(zlaswp,ZLASWP)"(
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * k1,
        fwi_integer_t * k2,
        fwi_integer_t * ipiv,
        fwi_integer_t * incx
    )
    void zlauum "F_FUNC(zlauum,ZLAUUM)"(
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void zpbsv "F_FUNC(zpbsv,ZPBSV)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * ab,
        fwi_integer_t * ldab,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void zpbtrf "F_FUNC(zpbtrf,ZPBTRF)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwc_complex_x16_t * ab,
        fwi_integer_t * ldab,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void zpbtrs "F_FUNC(zpbtrs,ZPBTRS)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * kd,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * ab,
        fwi_integer_t * ldab,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void zposv "F_FUNC(zposv,ZPOSV)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void zpotrf "F_FUNC(zpotrf,ZPOTRF)"(
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void zpotri "F_FUNC(zpotri,ZPOTRI)"(
        char * uplo,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void zpotrs "F_FUNC(zpotrs,ZPOTRS)"(
        char * uplo,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_
    )
    void ztrtri "F_FUNC(ztrtri,ZTRTRI)"(
        char * uplo,
        char * diag,
        fwi_integer_t * n,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwi_integer_t * info,
        size_t uplo_len_,
        size_t diag_len_
    )
    void ztrtrs "F_FUNC(ztrtrs,ZTRTRS)"(
        char * uplo,
        char * trans,
        char * diag,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * b,
        fwi_integer_t * ldb,
        fwi_integer_t * info,
        size_t uplo_len_,
        size_t trans_len_,
        size_t diag_len_
    )
    void zungqr "F_FUNC(zungqr,ZUNGQR)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * k,
        fwc_complex_x16_t * a,
        fwi_integer_t * lda,
        fwc_complex_x16_t * tau,
        fwc_complex_x16_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * info
    )
