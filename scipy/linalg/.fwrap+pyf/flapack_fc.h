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
FORTRAN_CALLSPEC void F_FUNC(cgbsv,CGBSV)(fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwi_integer_t * nrhs, fwc_complex_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgbtrf,CGBTRF)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwc_complex_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgbtrs,CGBTRS)(char * trans, fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwi_integer_t * nrhs, fwc_complex_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(cgebal,CGEBAL)(char * job, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * ilo, fwi_integer_t * ihi, fwr_real_t * scale, fwi_integer_t * info, size_t job_len_);
FORTRAN_CALLSPEC void F_FUNC(cgees,CGEES)(char * jobvs, char * sort, fwl_logical_t * select, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * sdim, fwc_complex_t * w, fwc_complex_t * vs, fwi_integer_t * ldvs, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwl_logical_t * bwork, fwi_integer_t * info, size_t jobvs_len_, size_t sort_len_);
FORTRAN_CALLSPEC void F_FUNC(cgeev,CGEEV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * w, fwc_complex_t * vl, fwi_integer_t * ldvl, fwc_complex_t * vr, fwi_integer_t * ldvr, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(cgegv,CGEGV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwc_complex_t * alpha, fwc_complex_t * beta, fwc_complex_t * vl, fwi_integer_t * ldvl, fwc_complex_t * vr, fwi_integer_t * ldvr, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(cgehrd,CGEHRD)(fwi_integer_t * n, fwi_integer_t * ilo, fwi_integer_t * ihi, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * tau, fwc_complex_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgelss,CGELSS)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwr_real_t * s, fwr_real_t * rcond, fwi_integer_t * rank, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgeqrf,CGEQRF)(fwi_integer_t * m, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * tau, fwc_complex_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgerqf,CGERQF)(fwi_integer_t * m, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * tau, fwc_complex_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgesdd,CGESDD)(char * jobz, fwi_integer_t * m, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwr_real_t * s, fwc_complex_t * u, fwi_integer_t * ldu, fwc_complex_t * vt, fwi_integer_t * ldvt, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * iwork, fwi_integer_t * info, size_t jobz_len_);
FORTRAN_CALLSPEC void F_FUNC(cgesv,CGESV)(fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgetrf,CGETRF)(fwi_integer_t * m, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgetri,CGETRI)(fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwc_complex_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cgetrs,CGETRS)(char * trans, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(cggev,CGGEV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwc_complex_t * alpha, fwc_complex_t * beta, fwc_complex_t * vl, fwi_integer_t * ldvl, fwc_complex_t * vr, fwi_integer_t * ldvr, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(chbevd,CHBEVD)(char * jobz, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwc_complex_t * ab, fwi_integer_t * ldab, fwr_real_t * w, fwc_complex_t * z, fwi_integer_t * ldz, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * lrwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(chbevx,CHBEVX)(char * jobz, char * range, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwc_complex_t * ab, fwi_integer_t * ldab, fwc_complex_t * q, fwi_integer_t * ldq, fwr_real_t * vl, fwr_real_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_real_t * abstol, fwi_integer_t * m, fwr_real_t * w, fwc_complex_t * z, fwi_integer_t * ldz, fwc_complex_t * work, fwr_real_t * rwork, fwi_integer_t * iwork, fwi_integer_t * ifail, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cheev,CHEEV)(char * jobz, char * uplo, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwr_real_t * w, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cheevr,CHEEVR)(char * jobz, char * range, char * uplo, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwr_real_t * vl, fwr_real_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_real_t * abstol, fwi_integer_t * m, fwr_real_t * w, fwc_complex_t * z, fwi_integer_t * ldz, fwi_integer_t * isuppz, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * lrwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(chegv,CHEGV)(fwi_integer_t * itype, char * jobz, char * uplo, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwr_real_t * w, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(chegvd,CHEGVD)(fwi_integer_t * itype, char * jobz, char * uplo, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwr_real_t * w, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * lrwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(chegvx,CHEGVX)(fwi_integer_t * itype, char * jobz, char * range, char * uplo, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwr_real_t * vl, fwr_real_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_real_t * abstol, fwi_integer_t * m, fwr_real_t * w, fwc_complex_t * z, fwi_integer_t * ldz, fwc_complex_t * work, fwi_integer_t * lwork, fwr_real_t * rwork, fwi_integer_t * iwork, fwi_integer_t * ifail, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(claswp,CLASWP)(fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * ipiv, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(clauum,CLAUUM)(char * uplo, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cpbsv,CPBSV)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwi_integer_t * nrhs, fwc_complex_t * ab, fwi_integer_t * ldab, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cpbtrf,CPBTRF)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwc_complex_t * ab, fwi_integer_t * ldab, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cpbtrs,CPBTRS)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwi_integer_t * nrhs, fwc_complex_t * ab, fwi_integer_t * ldab, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cposv,CPOSV)(char * uplo, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cpotrf,CPOTRF)(char * uplo, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cpotri,CPOTRI)(char * uplo, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(cpotrs,CPOTRS)(char * uplo, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ctrtri,CTRTRI)(char * uplo, char * diag, fwi_integer_t * n, fwc_complex_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(ctrtrs,CTRTRS)(char * uplo, char * trans, char * diag, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_, size_t trans_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(cungqr,CUNGQR)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwc_complex_t * a, fwi_integer_t * lda, fwc_complex_t * tau, fwc_complex_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgbsv,DGBSV)(fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwi_integer_t * nrhs, fwr_dbl_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgbtrf,DGBTRF)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwr_dbl_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgbtrs,DGBTRS)(char * trans, fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwi_integer_t * nrhs, fwr_dbl_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(dgebal,DGEBAL)(char * job, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * ilo, fwi_integer_t * ihi, fwr_dbl_t * scale, fwi_integer_t * info, size_t job_len_);
FORTRAN_CALLSPEC void F_FUNC(dgees,DGEES)(char * jobvs, char * sort, fwl_logical_t * select, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * sdim, fwr_dbl_t * wr, fwr_dbl_t * wi, fwr_dbl_t * vs, fwi_integer_t * ldvs, fwr_dbl_t * work, fwi_integer_t * lwork, fwl_logical_t * bwork, fwi_integer_t * info, size_t jobvs_len_, size_t sort_len_);
FORTRAN_CALLSPEC void F_FUNC(dgeev,DGEEV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * wr, fwr_dbl_t * wi, fwr_dbl_t * vl, fwi_integer_t * ldvl, fwr_dbl_t * vr, fwi_integer_t * ldvr, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(dgegv,DGEGV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwr_dbl_t * alphar, fwr_dbl_t * alphai, fwr_dbl_t * beta, fwr_dbl_t * vl, fwi_integer_t * ldvl, fwr_dbl_t * vr, fwi_integer_t * ldvr, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(dgehrd,DGEHRD)(fwi_integer_t * n, fwi_integer_t * ilo, fwi_integer_t * ihi, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * tau, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgelss,DGELSS)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwr_dbl_t * s, fwr_dbl_t * rcond, fwi_integer_t * rank, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgeqrf,DGEQRF)(fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * tau, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgerqf,DGERQF)(fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * tau, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgesdd,DGESDD)(char * jobz, fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * s, fwr_dbl_t * u, fwi_integer_t * ldu, fwr_dbl_t * vt, fwi_integer_t * ldvt, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * info, size_t jobz_len_);
FORTRAN_CALLSPEC void F_FUNC(dgesv,DGESV)(fwi_integer_t * n, fwi_integer_t * nrhs, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgetrf,DGETRF)(fwi_integer_t * m, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgetri,DGETRI)(fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dgetrs,DGETRS)(char * trans, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(dggev,DGGEV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwr_dbl_t * alphar, fwr_dbl_t * alphai, fwr_dbl_t * beta, fwr_dbl_t * vl, fwi_integer_t * ldvl, fwr_dbl_t * vr, fwi_integer_t * ldvr, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(dlamch,DLAMCH)(char * cmach, size_t cmach_len_);
FORTRAN_CALLSPEC void F_FUNC(dlaswp,DLASWP)(fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * ipiv, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(dlauum,DLAUUM)(char * uplo, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dorgqr,DORGQR)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * tau, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dpbsv,DPBSV)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwi_integer_t * nrhs, fwr_dbl_t * ab, fwi_integer_t * ldab, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dpbtrf,DPBTRF)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwr_dbl_t * ab, fwi_integer_t * ldab, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dpbtrs,DPBTRS)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwi_integer_t * nrhs, fwr_dbl_t * ab, fwi_integer_t * ldab, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dposv,DPOSV)(char * uplo, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dpotrf,DPOTRF)(char * uplo, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dpotri,DPOTRI)(char * uplo, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dpotrs,DPOTRS)(char * uplo, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dsbev,DSBEV)(char * jobz, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwr_dbl_t * ab, fwi_integer_t * ldab, fwr_dbl_t * w, fwr_dbl_t * z, fwi_integer_t * ldz, fwr_dbl_t * work, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dsbevd,DSBEVD)(char * jobz, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwr_dbl_t * ab, fwi_integer_t * ldab, fwr_dbl_t * w, fwr_dbl_t * z, fwi_integer_t * ldz, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dsbevx,DSBEVX)(char * jobz, char * range, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwr_dbl_t * ab, fwi_integer_t * ldab, fwr_dbl_t * q, fwi_integer_t * ldq, fwr_dbl_t * vl, fwr_dbl_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_dbl_t * abstol, fwi_integer_t * m, fwr_dbl_t * w, fwr_dbl_t * z, fwi_integer_t * ldz, fwr_dbl_t * work, fwi_integer_t * iwork, fwi_integer_t * ifail, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dsyev,DSYEV)(char * jobz, char * uplo, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * w, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dsyevr,DSYEVR)(char * jobz, char * range, char * uplo, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * vl, fwr_dbl_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_dbl_t * abstol, fwi_integer_t * m, fwr_dbl_t * w, fwr_dbl_t * z, fwi_integer_t * ldz, fwi_integer_t * isuppz, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dsygv,DSYGV)(fwi_integer_t * itype, char * jobz, char * uplo, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwr_dbl_t * w, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dsygvd,DSYGVD)(fwi_integer_t * itype, char * jobz, char * uplo, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwr_dbl_t * w, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dsygvx,DSYGVX)(fwi_integer_t * itype, char * jobz, char * range, char * uplo, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwr_dbl_t * vl, fwr_dbl_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_dbl_t * abstol, fwi_integer_t * m, fwr_dbl_t * w, fwr_dbl_t * z, fwi_integer_t * ldz, fwr_dbl_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * ifail, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(dtrtri,DTRTRI)(char * uplo, char * diag, fwi_integer_t * n, fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(dtrtrs,DTRTRS)(char * uplo, char * trans, char * diag, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_dbl_t * a, fwi_integer_t * lda, fwr_dbl_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_, size_t trans_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(sgbsv,SGBSV)(fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwi_integer_t * nrhs, fwr_real_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgbtrf,SGBTRF)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwr_real_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgbtrs,SGBTRS)(char * trans, fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwi_integer_t * nrhs, fwr_real_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(sgebal,SGEBAL)(char * job, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * ilo, fwi_integer_t * ihi, fwr_real_t * scale, fwi_integer_t * info, size_t job_len_);
FORTRAN_CALLSPEC void F_FUNC(sgees,SGEES)(char * jobvs, char * sort, fwl_logical_t * select, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * sdim, fwr_real_t * wr, fwr_real_t * wi, fwr_real_t * vs, fwi_integer_t * ldvs, fwr_real_t * work, fwi_integer_t * lwork, fwl_logical_t * bwork, fwi_integer_t * info, size_t jobvs_len_, size_t sort_len_);
FORTRAN_CALLSPEC void F_FUNC(sgeev,SGEEV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * wr, fwr_real_t * wi, fwr_real_t * vl, fwi_integer_t * ldvl, fwr_real_t * vr, fwi_integer_t * ldvr, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(sgegv,SGEGV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwr_real_t * alphar, fwr_real_t * alphai, fwr_real_t * beta, fwr_real_t * vl, fwi_integer_t * ldvl, fwr_real_t * vr, fwi_integer_t * ldvr, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(sgehrd,SGEHRD)(fwi_integer_t * n, fwi_integer_t * ilo, fwi_integer_t * ihi, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * tau, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgelss,SGELSS)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwr_real_t * s, fwr_real_t * rcond, fwi_integer_t * rank, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgeqrf,SGEQRF)(fwi_integer_t * m, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * tau, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgerqf,SGERQF)(fwi_integer_t * m, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * tau, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgesdd,SGESDD)(char * jobz, fwi_integer_t * m, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * s, fwr_real_t * u, fwi_integer_t * ldu, fwr_real_t * vt, fwi_integer_t * ldvt, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * info, size_t jobz_len_);
FORTRAN_CALLSPEC void F_FUNC(sgesv,SGESV)(fwi_integer_t * n, fwi_integer_t * nrhs, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgetrf,SGETRF)(fwi_integer_t * m, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgetri,SGETRI)(fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(sgetrs,SGETRS)(char * trans, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(sggev,SGGEV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwr_real_t * alphar, fwr_real_t * alphai, fwr_real_t * beta, fwr_real_t * vl, fwi_integer_t * ldvl, fwr_real_t * vr, fwi_integer_t * ldvr, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC fwr_real_t F_FUNC(slamch,SLAMCH)(char * cmach, size_t cmach_len_);
FORTRAN_CALLSPEC void F_FUNC(slaswp,SLASWP)(fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * ipiv, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(slauum,SLAUUM)(char * uplo, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(sorgqr,SORGQR)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * tau, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(spbsv,SPBSV)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwi_integer_t * nrhs, fwr_real_t * ab, fwi_integer_t * ldab, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(spbtrf,SPBTRF)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwr_real_t * ab, fwi_integer_t * ldab, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(spbtrs,SPBTRS)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwi_integer_t * nrhs, fwr_real_t * ab, fwi_integer_t * ldab, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(sposv,SPOSV)(char * uplo, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(spotrf,SPOTRF)(char * uplo, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(spotri,SPOTRI)(char * uplo, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(spotrs,SPOTRS)(char * uplo, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ssbev,SSBEV)(char * jobz, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwr_real_t * ab, fwi_integer_t * ldab, fwr_real_t * w, fwr_real_t * z, fwi_integer_t * ldz, fwr_real_t * work, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ssbevd,SSBEVD)(char * jobz, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwr_real_t * ab, fwi_integer_t * ldab, fwr_real_t * w, fwr_real_t * z, fwi_integer_t * ldz, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ssbevx,SSBEVX)(char * jobz, char * range, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwr_real_t * ab, fwi_integer_t * ldab, fwr_real_t * q, fwi_integer_t * ldq, fwr_real_t * vl, fwr_real_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_real_t * abstol, fwi_integer_t * m, fwr_real_t * w, fwr_real_t * z, fwi_integer_t * ldz, fwr_real_t * work, fwi_integer_t * iwork, fwi_integer_t * ifail, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ssyev,SSYEV)(char * jobz, char * uplo, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * w, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ssyevr,SSYEVR)(char * jobz, char * range, char * uplo, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * vl, fwr_real_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_real_t * abstol, fwi_integer_t * m, fwr_real_t * w, fwr_real_t * z, fwi_integer_t * ldz, fwi_integer_t * isuppz, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ssygv,SSYGV)(fwi_integer_t * itype, char * jobz, char * uplo, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwr_real_t * w, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ssygvd,SSYGVD)(fwi_integer_t * itype, char * jobz, char * uplo, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwr_real_t * w, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ssygvx,SSYGVX)(fwi_integer_t * itype, char * jobz, char * range, char * uplo, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwr_real_t * vl, fwr_real_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_real_t * abstol, fwi_integer_t * m, fwr_real_t * w, fwr_real_t * z, fwi_integer_t * ldz, fwr_real_t * work, fwi_integer_t * lwork, fwi_integer_t * iwork, fwi_integer_t * ifail, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(strtri,STRTRI)(char * uplo, char * diag, fwi_integer_t * n, fwr_real_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(strtrs,STRTRS)(char * uplo, char * trans, char * diag, fwi_integer_t * n, fwi_integer_t * nrhs, fwr_real_t * a, fwi_integer_t * lda, fwr_real_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_, size_t trans_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(zgbsv,ZGBSV)(fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwi_integer_t * nrhs, fwc_complex_x16_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgbtrf,ZGBTRF)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwc_complex_x16_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgbtrs,ZGBTRS)(char * trans, fwi_integer_t * n, fwi_integer_t * kl, fwi_integer_t * ku, fwi_integer_t * nrhs, fwc_complex_x16_t * ab, fwi_integer_t * ldab, fwi_integer_t * ipiv, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(zgebal,ZGEBAL)(char * job, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * ilo, fwi_integer_t * ihi, fwr_dbl_t * scale, fwi_integer_t * info, size_t job_len_);
FORTRAN_CALLSPEC void F_FUNC(zgees,ZGEES)(char * jobvs, char * sort, fwl_logical_t * select, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * sdim, fwc_complex_x16_t * w, fwc_complex_x16_t * vs, fwi_integer_t * ldvs, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwl_logical_t * bwork, fwi_integer_t * info, size_t jobvs_len_, size_t sort_len_);
FORTRAN_CALLSPEC void F_FUNC(zgeev,ZGEEV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * w, fwc_complex_x16_t * vl, fwi_integer_t * ldvl, fwc_complex_x16_t * vr, fwi_integer_t * ldvr, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(zgegv,ZGEGV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwc_complex_x16_t * alpha, fwc_complex_x16_t * beta, fwc_complex_x16_t * vl, fwi_integer_t * ldvl, fwc_complex_x16_t * vr, fwi_integer_t * ldvr, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(zgehrd,ZGEHRD)(fwi_integer_t * n, fwi_integer_t * ilo, fwi_integer_t * ihi, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * tau, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgelss,ZGELSS)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwr_dbl_t * s, fwr_dbl_t * rcond, fwi_integer_t * rank, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgeqrf,ZGEQRF)(fwi_integer_t * m, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * tau, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgerqf,ZGERQF)(fwi_integer_t * m, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * tau, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgesdd,ZGESDD)(char * jobz, fwi_integer_t * m, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwr_dbl_t * s, fwc_complex_x16_t * u, fwi_integer_t * ldu, fwc_complex_x16_t * vt, fwi_integer_t * ldvt, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * iwork, fwi_integer_t * info, size_t jobz_len_);
FORTRAN_CALLSPEC void F_FUNC(zgesv,ZGESV)(fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgetrf,ZGETRF)(fwi_integer_t * m, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgetri,ZGETRI)(fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(zgetrs,ZGETRS)(char * trans, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * ipiv, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t trans_len_);
FORTRAN_CALLSPEC void F_FUNC(zggev,ZGGEV)(char * jobvl, char * jobvr, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwc_complex_x16_t * alpha, fwc_complex_x16_t * beta, fwc_complex_x16_t * vl, fwi_integer_t * ldvl, fwc_complex_x16_t * vr, fwi_integer_t * ldvr, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * info, size_t jobvl_len_, size_t jobvr_len_);
FORTRAN_CALLSPEC void F_FUNC(zhbevd,ZHBEVD)(char * jobz, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwc_complex_x16_t * ab, fwi_integer_t * ldab, fwr_dbl_t * w, fwc_complex_x16_t * z, fwi_integer_t * ldz, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * lrwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zhbevx,ZHBEVX)(char * jobz, char * range, char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwc_complex_x16_t * ab, fwi_integer_t * ldab, fwc_complex_x16_t * q, fwi_integer_t * ldq, fwr_dbl_t * vl, fwr_dbl_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_dbl_t * abstol, fwi_integer_t * m, fwr_dbl_t * w, fwc_complex_x16_t * z, fwi_integer_t * ldz, fwc_complex_x16_t * work, fwr_dbl_t * rwork, fwi_integer_t * iwork, fwi_integer_t * ifail, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zheev,ZHEEV)(char * jobz, char * uplo, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwr_dbl_t * w, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zheevr,ZHEEVR)(char * jobz, char * range, char * uplo, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwr_dbl_t * vl, fwr_dbl_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_dbl_t * abstol, fwi_integer_t * m, fwr_dbl_t * w, fwc_complex_x16_t * z, fwi_integer_t * ldz, fwi_integer_t * isuppz, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * lrwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zhegv,ZHEGV)(fwi_integer_t * itype, char * jobz, char * uplo, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwr_dbl_t * w, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zhegvd,ZHEGVD)(fwi_integer_t * itype, char * jobz, char * uplo, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwr_dbl_t * w, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * lrwork, fwi_integer_t * iwork, fwi_integer_t * liwork, fwi_integer_t * info, size_t jobz_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zhegvx,ZHEGVX)(fwi_integer_t * itype, char * jobz, char * range, char * uplo, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwr_dbl_t * vl, fwr_dbl_t * vu, fwi_integer_t * il, fwi_integer_t * iu, fwr_dbl_t * abstol, fwi_integer_t * m, fwr_dbl_t * w, fwc_complex_x16_t * z, fwi_integer_t * ldz, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwr_dbl_t * rwork, fwi_integer_t * iwork, fwi_integer_t * ifail, fwi_integer_t * info, size_t jobz_len_, size_t range_len_, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zlaswp,ZLASWP)(fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * ipiv, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(zlauum,ZLAUUM)(char * uplo, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zpbsv,ZPBSV)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwi_integer_t * nrhs, fwc_complex_x16_t * ab, fwi_integer_t * ldab, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zpbtrf,ZPBTRF)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwc_complex_x16_t * ab, fwi_integer_t * ldab, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zpbtrs,ZPBTRS)(char * uplo, fwi_integer_t * n, fwi_integer_t * kd, fwi_integer_t * nrhs, fwc_complex_x16_t * ab, fwi_integer_t * ldab, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zposv,ZPOSV)(char * uplo, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zpotrf,ZPOTRF)(char * uplo, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zpotri,ZPOTRI)(char * uplo, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(zpotrs,ZPOTRS)(char * uplo, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_);
FORTRAN_CALLSPEC void F_FUNC(ztrtri,ZTRTRI)(char * uplo, char * diag, fwi_integer_t * n, fwc_complex_x16_t * a, fwi_integer_t * lda, fwi_integer_t * info, size_t uplo_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(ztrtrs,ZTRTRS)(char * uplo, char * trans, char * diag, fwi_integer_t * n, fwi_integer_t * nrhs, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * b, fwi_integer_t * ldb, fwi_integer_t * info, size_t uplo_len_, size_t trans_len_, size_t diag_len_);
FORTRAN_CALLSPEC void F_FUNC(zungqr,ZUNGQR)(fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * k, fwc_complex_x16_t * a, fwi_integer_t * lda, fwc_complex_x16_t * tau, fwc_complex_x16_t * work, fwi_integer_t * lwork, fwi_integer_t * info);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define cgbsv F_FUNC(cgbsv,CGBSV)
#define cgbtrf F_FUNC(cgbtrf,CGBTRF)
#define cgbtrs F_FUNC(cgbtrs,CGBTRS)
#define cgebal F_FUNC(cgebal,CGEBAL)
#define cgees F_FUNC(cgees,CGEES)
#define cgeev F_FUNC(cgeev,CGEEV)
#define cgegv F_FUNC(cgegv,CGEGV)
#define cgehrd F_FUNC(cgehrd,CGEHRD)
#define cgelss F_FUNC(cgelss,CGELSS)
#define cgeqrf F_FUNC(cgeqrf,CGEQRF)
#define cgerqf F_FUNC(cgerqf,CGERQF)
#define cgesdd F_FUNC(cgesdd,CGESDD)
#define cgesv F_FUNC(cgesv,CGESV)
#define cgetrf F_FUNC(cgetrf,CGETRF)
#define cgetri F_FUNC(cgetri,CGETRI)
#define cgetrs F_FUNC(cgetrs,CGETRS)
#define cggev F_FUNC(cggev,CGGEV)
#define chbevd F_FUNC(chbevd,CHBEVD)
#define chbevx F_FUNC(chbevx,CHBEVX)
#define cheev F_FUNC(cheev,CHEEV)
#define cheevr F_FUNC(cheevr,CHEEVR)
#define chegv F_FUNC(chegv,CHEGV)
#define chegvd F_FUNC(chegvd,CHEGVD)
#define chegvx F_FUNC(chegvx,CHEGVX)
#define claswp F_FUNC(claswp,CLASWP)
#define clauum F_FUNC(clauum,CLAUUM)
#define cpbsv F_FUNC(cpbsv,CPBSV)
#define cpbtrf F_FUNC(cpbtrf,CPBTRF)
#define cpbtrs F_FUNC(cpbtrs,CPBTRS)
#define cposv F_FUNC(cposv,CPOSV)
#define cpotrf F_FUNC(cpotrf,CPOTRF)
#define cpotri F_FUNC(cpotri,CPOTRI)
#define cpotrs F_FUNC(cpotrs,CPOTRS)
#define ctrtri F_FUNC(ctrtri,CTRTRI)
#define ctrtrs F_FUNC(ctrtrs,CTRTRS)
#define cungqr F_FUNC(cungqr,CUNGQR)
#define dgbsv F_FUNC(dgbsv,DGBSV)
#define dgbtrf F_FUNC(dgbtrf,DGBTRF)
#define dgbtrs F_FUNC(dgbtrs,DGBTRS)
#define dgebal F_FUNC(dgebal,DGEBAL)
#define dgees F_FUNC(dgees,DGEES)
#define dgeev F_FUNC(dgeev,DGEEV)
#define dgegv F_FUNC(dgegv,DGEGV)
#define dgehrd F_FUNC(dgehrd,DGEHRD)
#define dgelss F_FUNC(dgelss,DGELSS)
#define dgeqrf F_FUNC(dgeqrf,DGEQRF)
#define dgerqf F_FUNC(dgerqf,DGERQF)
#define dgesdd F_FUNC(dgesdd,DGESDD)
#define dgesv F_FUNC(dgesv,DGESV)
#define dgetrf F_FUNC(dgetrf,DGETRF)
#define dgetri F_FUNC(dgetri,DGETRI)
#define dgetrs F_FUNC(dgetrs,DGETRS)
#define dggev F_FUNC(dggev,DGGEV)
#define dlamch F_FUNC(dlamch,DLAMCH)
#define dlaswp F_FUNC(dlaswp,DLASWP)
#define dlauum F_FUNC(dlauum,DLAUUM)
#define dorgqr F_FUNC(dorgqr,DORGQR)
#define dpbsv F_FUNC(dpbsv,DPBSV)
#define dpbtrf F_FUNC(dpbtrf,DPBTRF)
#define dpbtrs F_FUNC(dpbtrs,DPBTRS)
#define dposv F_FUNC(dposv,DPOSV)
#define dpotrf F_FUNC(dpotrf,DPOTRF)
#define dpotri F_FUNC(dpotri,DPOTRI)
#define dpotrs F_FUNC(dpotrs,DPOTRS)
#define dsbev F_FUNC(dsbev,DSBEV)
#define dsbevd F_FUNC(dsbevd,DSBEVD)
#define dsbevx F_FUNC(dsbevx,DSBEVX)
#define dsyev F_FUNC(dsyev,DSYEV)
#define dsyevr F_FUNC(dsyevr,DSYEVR)
#define dsygv F_FUNC(dsygv,DSYGV)
#define dsygvd F_FUNC(dsygvd,DSYGVD)
#define dsygvx F_FUNC(dsygvx,DSYGVX)
#define dtrtri F_FUNC(dtrtri,DTRTRI)
#define dtrtrs F_FUNC(dtrtrs,DTRTRS)
#define sgbsv F_FUNC(sgbsv,SGBSV)
#define sgbtrf F_FUNC(sgbtrf,SGBTRF)
#define sgbtrs F_FUNC(sgbtrs,SGBTRS)
#define sgebal F_FUNC(sgebal,SGEBAL)
#define sgees F_FUNC(sgees,SGEES)
#define sgeev F_FUNC(sgeev,SGEEV)
#define sgegv F_FUNC(sgegv,SGEGV)
#define sgehrd F_FUNC(sgehrd,SGEHRD)
#define sgelss F_FUNC(sgelss,SGELSS)
#define sgeqrf F_FUNC(sgeqrf,SGEQRF)
#define sgerqf F_FUNC(sgerqf,SGERQF)
#define sgesdd F_FUNC(sgesdd,SGESDD)
#define sgesv F_FUNC(sgesv,SGESV)
#define sgetrf F_FUNC(sgetrf,SGETRF)
#define sgetri F_FUNC(sgetri,SGETRI)
#define sgetrs F_FUNC(sgetrs,SGETRS)
#define sggev F_FUNC(sggev,SGGEV)
#define slamch F_FUNC(slamch,SLAMCH)
#define slaswp F_FUNC(slaswp,SLASWP)
#define slauum F_FUNC(slauum,SLAUUM)
#define sorgqr F_FUNC(sorgqr,SORGQR)
#define spbsv F_FUNC(spbsv,SPBSV)
#define spbtrf F_FUNC(spbtrf,SPBTRF)
#define spbtrs F_FUNC(spbtrs,SPBTRS)
#define sposv F_FUNC(sposv,SPOSV)
#define spotrf F_FUNC(spotrf,SPOTRF)
#define spotri F_FUNC(spotri,SPOTRI)
#define spotrs F_FUNC(spotrs,SPOTRS)
#define ssbev F_FUNC(ssbev,SSBEV)
#define ssbevd F_FUNC(ssbevd,SSBEVD)
#define ssbevx F_FUNC(ssbevx,SSBEVX)
#define ssyev F_FUNC(ssyev,SSYEV)
#define ssyevr F_FUNC(ssyevr,SSYEVR)
#define ssygv F_FUNC(ssygv,SSYGV)
#define ssygvd F_FUNC(ssygvd,SSYGVD)
#define ssygvx F_FUNC(ssygvx,SSYGVX)
#define strtri F_FUNC(strtri,STRTRI)
#define strtrs F_FUNC(strtrs,STRTRS)
#define zgbsv F_FUNC(zgbsv,ZGBSV)
#define zgbtrf F_FUNC(zgbtrf,ZGBTRF)
#define zgbtrs F_FUNC(zgbtrs,ZGBTRS)
#define zgebal F_FUNC(zgebal,ZGEBAL)
#define zgees F_FUNC(zgees,ZGEES)
#define zgeev F_FUNC(zgeev,ZGEEV)
#define zgegv F_FUNC(zgegv,ZGEGV)
#define zgehrd F_FUNC(zgehrd,ZGEHRD)
#define zgelss F_FUNC(zgelss,ZGELSS)
#define zgeqrf F_FUNC(zgeqrf,ZGEQRF)
#define zgerqf F_FUNC(zgerqf,ZGERQF)
#define zgesdd F_FUNC(zgesdd,ZGESDD)
#define zgesv F_FUNC(zgesv,ZGESV)
#define zgetrf F_FUNC(zgetrf,ZGETRF)
#define zgetri F_FUNC(zgetri,ZGETRI)
#define zgetrs F_FUNC(zgetrs,ZGETRS)
#define zggev F_FUNC(zggev,ZGGEV)
#define zhbevd F_FUNC(zhbevd,ZHBEVD)
#define zhbevx F_FUNC(zhbevx,ZHBEVX)
#define zheev F_FUNC(zheev,ZHEEV)
#define zheevr F_FUNC(zheevr,ZHEEVR)
#define zhegv F_FUNC(zhegv,ZHEGV)
#define zhegvd F_FUNC(zhegvd,ZHEGVD)
#define zhegvx F_FUNC(zhegvx,ZHEGVX)
#define zlaswp F_FUNC(zlaswp,ZLASWP)
#define zlauum F_FUNC(zlauum,ZLAUUM)
#define zpbsv F_FUNC(zpbsv,ZPBSV)
#define zpbtrf F_FUNC(zpbtrf,ZPBTRF)
#define zpbtrs F_FUNC(zpbtrs,ZPBTRS)
#define zposv F_FUNC(zposv,ZPOSV)
#define zpotrf F_FUNC(zpotrf,ZPOTRF)
#define zpotri F_FUNC(zpotri,ZPOTRI)
#define zpotrs F_FUNC(zpotrs,ZPOTRS)
#define ztrtri F_FUNC(ztrtri,ZTRTRI)
#define ztrtrs F_FUNC(ztrtrs,ZTRTRS)
#define zungqr F_FUNC(zungqr,ZUNGQR)
#endif
