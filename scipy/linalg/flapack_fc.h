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

typedef fwl_logical_t (*sgees_callback)(fwr_real_t*);
typedef fwl_logical_t (*dgees_callback)(fwr_dbl_t*);
typedef fwl_logical_t (*cgees_callback)(fwc_complex_t*);
typedef fwl_logical_t (*zgees_callback)(fwc_complex_x16_t*);

#if defined(__cplusplus)
extern "C" {
#endif
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgbsv,CGBSV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgbtrf,CGBTRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * kl,
    fwi_integer_t * ku,
    fwc_complex_t * ab,
    fwi_integer_t * ldab,
    fwi_integer_t * ipiv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgbtrs,CGBTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgebal,CGEBAL)(
    char * job,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ilo,
    fwi_integer_t * ihi,
    fwr_real_t * scale,
    fwi_integer_t * info,
    size_t job_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgees,CGEES)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgeev,CGEEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgegv,CGEGV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgehrd,CGEHRD)(
    fwi_integer_t * n,
    fwi_integer_t * ilo,
    fwi_integer_t * ihi,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * tau,
    fwc_complex_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgelss,CGELSS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgeqrf,CGEQRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * tau,
    fwc_complex_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgerqf,CGERQF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * tau,
    fwc_complex_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgesdd,CGESDD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgesv,CGESV)(
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwc_complex_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgetrf,CGETRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgetri,CGETRI)(
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwc_complex_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cgetrs,CGETRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cggev,CGGEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(chbevd,CHBEVD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(chbevx,CHBEVX)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cheev,CHEEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cheevr,CHEEVR)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(chegv,CHEGV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(chegvd,CHEGVD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(chegvx,CHEGVX)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(claswp,CLASWP)(
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * k1,
    fwi_integer_t * k2,
    fwi_integer_t * ipiv,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(clauum,CLAUUM)(
    char * uplo,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cpbsv,CPBSV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cpbtrf,CPBTRF)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * kd,
    fwc_complex_t * ab,
    fwi_integer_t * ldab,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cpbtrs,CPBTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cposv,CPOSV)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cpotrf,CPOTRF)(
    char * uplo,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cpotri,CPOTRI)(
    char * uplo,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cpotrs,CPOTRS)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ctrtri,CTRTRI)(
    char * uplo,
    char * diag,
    fwi_integer_t * n,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_,
    size_t diag_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ctrtrs,CTRTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cungqr,CUNGQR)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * tau,
    fwc_complex_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cungrq,CUNGRQ)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwc_complex_t * a,
    fwi_integer_t * lda,
    fwc_complex_t * tau,
    fwc_complex_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgbsv,DGBSV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgbtrf,DGBTRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * kl,
    fwi_integer_t * ku,
    fwr_dbl_t * ab,
    fwi_integer_t * ldab,
    fwi_integer_t * ipiv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgbtrs,DGBTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgebal,DGEBAL)(
    char * job,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ilo,
    fwi_integer_t * ihi,
    fwr_dbl_t * scale,
    fwi_integer_t * info,
    size_t job_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgees,DGEES)(
    char * jobvs,
    char * sort,
    sgees_callback select,
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgeev,DGEEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgegv,DGEGV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgehrd,DGEHRD)(
    fwi_integer_t * n,
    fwi_integer_t * ilo,
    fwi_integer_t * ihi,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * tau,
    fwr_dbl_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgelss,DGELSS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgeqrf,DGEQRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * tau,
    fwr_dbl_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgerqf,DGERQF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * tau,
    fwr_dbl_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgesdd,DGESDD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgesv,DGESV)(
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwr_dbl_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgetrf,DGETRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgetri,DGETRI)(
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwr_dbl_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dgetrs,DGETRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dggev,DGGEV)(
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
);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC_MANGLING(dlamch,DLAMCH)(
    char * cmach,
    size_t cmach_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dlaswp,DLASWP)(
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * k1,
    fwi_integer_t * k2,
    fwi_integer_t * ipiv,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dlauum,DLAUUM)(
    char * uplo,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dorgqr,DORGQR)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * tau,
    fwr_dbl_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dorgrq,DORGRQ)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * tau,
    fwr_dbl_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dpbsv,DPBSV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dpbtrf,DPBTRF)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * kd,
    fwr_dbl_t * ab,
    fwi_integer_t * ldab,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dpbtrs,DPBTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dposv,DPOSV)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dpotrf,DPOTRF)(
    char * uplo,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dpotri,DPOTRI)(
    char * uplo,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dpotrs,DPOTRS)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwr_dbl_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsbev,DSBEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsbevd,DSBEVD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsbevx,DSBEVX)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsyev,DSYEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsyevr,DSYEVR)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsygv,DSYGV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsygvd,DSYGVD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dsygvx,DSYGVX)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dtrtri,DTRTRI)(
    char * uplo,
    char * diag,
    fwi_integer_t * n,
    fwr_dbl_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_,
    size_t diag_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(dtrtrs,DTRTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgbsv,SGBSV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgbtrf,SGBTRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * kl,
    fwi_integer_t * ku,
    fwr_real_t * ab,
    fwi_integer_t * ldab,
    fwi_integer_t * ipiv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgbtrs,SGBTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgebal,SGEBAL)(
    char * job,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ilo,
    fwi_integer_t * ihi,
    fwr_real_t * scale,
    fwi_integer_t * info,
    size_t job_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgees,SGEES)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgeev,SGEEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgegv,SGEGV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgehrd,SGEHRD)(
    fwi_integer_t * n,
    fwi_integer_t * ilo,
    fwi_integer_t * ihi,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * tau,
    fwr_real_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgelss,SGELSS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgeqrf,SGEQRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * tau,
    fwr_real_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgerqf,SGERQF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * tau,
    fwr_real_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgesdd,SGESDD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgesv,SGESV)(
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwr_real_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgetrf,SGETRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgetri,SGETRI)(
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwr_real_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sgetrs,SGETRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sggev,SGGEV)(
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
);
FORTRAN_CALLSPEC fwr_real_t F_FUNC_MANGLING(slamch,SLAMCH)(
    char * cmach,
    size_t cmach_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(slaswp,SLASWP)(
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * k1,
    fwi_integer_t * k2,
    fwi_integer_t * ipiv,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(slauum,SLAUUM)(
    char * uplo,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sorgqr,SORGQR)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * tau,
    fwr_real_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sorgrq,SORGRQ)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * tau,
    fwr_real_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(spbsv,SPBSV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(spbtrf,SPBTRF)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * kd,
    fwr_real_t * ab,
    fwi_integer_t * ldab,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(spbtrs,SPBTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sposv,SPOSV)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(spotrf,SPOTRF)(
    char * uplo,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(spotri,SPOTRI)(
    char * uplo,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(spotrs,SPOTRS)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwr_real_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssbev,SSBEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssbevd,SSBEVD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssbevx,SSBEVX)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssyev,SSYEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssyevr,SSYEVR)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssygv,SSYGV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssygvd,SSYGVD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ssygvx,SSYGVX)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(strtri,STRTRI)(
    char * uplo,
    char * diag,
    fwi_integer_t * n,
    fwr_real_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_,
    size_t diag_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(strtrs,STRTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgbsv,ZGBSV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgbtrf,ZGBTRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * kl,
    fwi_integer_t * ku,
    fwc_complex_x16_t * ab,
    fwi_integer_t * ldab,
    fwi_integer_t * ipiv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgbtrs,ZGBTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgebal,ZGEBAL)(
    char * job,
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ilo,
    fwi_integer_t * ihi,
    fwr_dbl_t * scale,
    fwi_integer_t * info,
    size_t job_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgees,ZGEES)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgeev,ZGEEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgegv,ZGEGV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgehrd,ZGEHRD)(
    fwi_integer_t * n,
    fwi_integer_t * ilo,
    fwi_integer_t * ihi,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwc_complex_x16_t * tau,
    fwc_complex_x16_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgelss,ZGELSS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgeqrf,ZGEQRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwc_complex_x16_t * tau,
    fwc_complex_x16_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgerqf,ZGERQF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwc_complex_x16_t * tau,
    fwc_complex_x16_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgesdd,ZGESDD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgesv,ZGESV)(
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwc_complex_x16_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgetrf,ZGETRF)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgetri,ZGETRI)(
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * ipiv,
    fwc_complex_x16_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zgetrs,ZGETRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zggev,ZGGEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zhbevd,ZHBEVD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zhbevx,ZHBEVX)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zheev,ZHEEV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zheevr,ZHEEVR)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zhegv,ZHEGV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zhegvd,ZHEGVD)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zhegvx,ZHEGVX)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zlaswp,ZLASWP)(
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * k1,
    fwi_integer_t * k2,
    fwi_integer_t * ipiv,
    fwi_integer_t * incx
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zlauum,ZLAUUM)(
    char * uplo,
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zpbsv,ZPBSV)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zpbtrf,ZPBTRF)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * kd,
    fwc_complex_x16_t * ab,
    fwi_integer_t * ldab,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zpbtrs,ZPBTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zposv,ZPOSV)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwc_complex_x16_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zpotrf,ZPOTRF)(
    char * uplo,
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zpotri,ZPOTRI)(
    char * uplo,
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zpotrs,ZPOTRS)(
    char * uplo,
    fwi_integer_t * n,
    fwi_integer_t * nrhs,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwc_complex_x16_t * b,
    fwi_integer_t * ldb,
    fwi_integer_t * info,
    size_t uplo_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ztrtri,ZTRTRI)(
    char * uplo,
    char * diag,
    fwi_integer_t * n,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwi_integer_t * info,
    size_t uplo_len_,
    size_t diag_len_
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(ztrtrs,ZTRTRS)(
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
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zungqr,ZUNGQR)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwc_complex_x16_t * tau,
    fwc_complex_x16_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(zungrq,ZUNGRQ)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwi_integer_t * k,
    fwc_complex_x16_t * a,
    fwi_integer_t * lda,
    fwc_complex_x16_t * tau,
    fwc_complex_x16_t * work,
    fwi_integer_t * lwork,
    fwi_integer_t * info
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

