      subroutine cgbsv_c(n, kl, ku, nrhs, ab_shape__, ab, ldab, ipiv_sha
     &pe__, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: kl
        integer :: ku
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        complex(kind=kind((0.0,0.0))), dimension(ab_shape__(1), ab_shape
     &__(2)) :: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgbsv
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgbsv(n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine cgbsv_c
      subroutine cgbtrf_c(m, n, kl, ku, ab_shape__, ab, ldab, ipiv_shape
     &__, ipiv, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: kl
        integer :: ku
        integer, dimension(2) :: ab_shape__
        complex(kind=kind((0.0,0.0))), dimension(ab_shape__(1), ab_shape
     &__(2)) :: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgbtrf
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgbtrf(m, n, kl, ku, ab, ldab, ipiv, info)
        fw_iserr__ = 0
      end subroutine cgbtrf_c
      subroutine cgbtrs_c(trans, n, kl, ku, nrhs, ab_shape__, ab, ldab, 
     &ipiv_shape__, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr
     &__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: trans
        integer :: n
        integer :: kl
        integer :: ku
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        complex(kind=kind((0.0,0.0))), dimension(ab_shape__(1), ab_shape
     &__(2)) :: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgbtrs
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb, info
     &)
        fw_iserr__ = 0
      end subroutine cgbtrs_c
      subroutine cgebal_c(job, n, a_shape__, a, lda, ilo, ihi, scale_sha
     &pe__, scale, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: job
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: ilo
        integer :: ihi
        integer, dimension(1) :: scale_shape__
        real(kind=kind(0.0)), dimension(scale_shape__(1)) :: scale
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgebal
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgebal(job, n, a, lda, ilo, ihi, scale, info)
        fw_iserr__ = 0
      end subroutine cgebal_c
      subroutine cgees_c(jobvs, sort, select, n, a_shape__, a, lda, sdim
     &, w_shape__, w, vs_shape__, vs, ldvs, work_shape__, work, lwork, r
     &work_shape__, rwork, bwork_shape__, bwork, info, fw_iserr__, fw_er
     &rstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvs
        character(len=1, kind=kind('a')) :: sort
        integer(kind=kind(0)) :: select
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: sdim
        integer, dimension(1) :: w_shape__
        complex(kind=kind((0.0,0.0))), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: vs_shape__
        complex(kind=kind((0.0,0.0))), dimension(vs_shape__(1), vs_shape
     &__(2)) :: vs
        integer :: ldvs
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer, dimension(1) :: bwork_shape__
        integer(kind=kind(0)), dimension(bwork_shape__(1)) :: bwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgees
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvs) .ne. (vs_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vs                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgees(jobvs, sort, select, n, a, lda, sdim, w, vs, ldvs, wo
     &rk, lwork, rwork, bwork, info)
        fw_iserr__ = 0
      end subroutine cgees_c
      subroutine cgeev_c(jobvl, jobvr, n, a_shape__, a, lda, w_shape__, 
     &w, vl_shape__, vl, ldvl, vr_shape__, vr, ldvr, work_shape__, work,
     & lwork, rwork_shape__, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: w_shape__
        complex(kind=kind((0.0,0.0))), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: vl_shape__
        complex(kind=kind((0.0,0.0))), dimension(vl_shape__(1), vl_shape
     &__(2)) :: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        complex(kind=kind((0.0,0.0))), dimension(vr_shape__(1), vr_shape
     &__(2)) :: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgeev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgeev(jobvl, jobvr, n, a, lda, w, vl, ldvl, vr, ldvr, work,
     & lwork, rwork, info)
        fw_iserr__ = 0
      end subroutine cgeev_c
      subroutine cgegv_c(jobvl, jobvr, n, a_shape__, a, lda, b_shape__, 
     &b, ldb, alpha_shape__, alpha, beta_shape__, beta, vl_shape__, vl, 
     &ldvl, vr_shape__, vr, ldvr, work_shape__, work, lwork, rwork_shape
     &__, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer, dimension(1) :: alpha_shape__
        complex(kind=kind((0.0,0.0))), dimension(alpha_shape__(1)) :: al
     &pha
        integer, dimension(1) :: beta_shape__
        complex(kind=kind((0.0,0.0))), dimension(beta_shape__(1)) :: bet
     &a
        integer, dimension(2) :: vl_shape__
        complex(kind=kind((0.0,0.0))), dimension(vl_shape__(1), vl_shape
     &__(2)) :: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        complex(kind=kind((0.0,0.0))), dimension(vr_shape__(1), vr_shape
     &__(2)) :: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgegv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgegv(jobvl, jobvr, n, a, lda, b, ldb, alpha, beta, vl, ldv
     &l, vr, ldvr, work, lwork, rwork, info)
        fw_iserr__ = 0
      end subroutine cgegv_c
      subroutine cgehrd_c(n, ilo, ihi, a_shape__, a, lda, tau_shape__, t
     &au, work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: ilo
        integer :: ihi
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        complex(kind=kind((0.0,0.0))), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgehrd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgehrd(n, ilo, ihi, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine cgehrd_c
      subroutine cgelss_c(m, n, nrhs, a_shape__, a, lda, b_shape__, b, l
     &db, s_shape__, s, rcond, rank, work_shape__, work, lwork, rwork_sh
     &ape__, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer, dimension(1) :: s_shape__
        real(kind=kind(0.0)), dimension(s_shape__(1)) :: s
        real(kind=kind(0.0)) :: rcond
        integer :: rank
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgelss
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgelss(m, n, nrhs, a, lda, b, ldb, s, rcond, rank, work, lw
     &ork, rwork, info)
        fw_iserr__ = 0
      end subroutine cgelss_c
      subroutine cgeqrf_c(m, n, a_shape__, a, lda, tau_shape__, tau, wor
     &k_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        complex(kind=kind((0.0,0.0))), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgeqrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgeqrf(m, n, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine cgeqrf_c
      subroutine cgerqf_c(m, n, a_shape__, a, lda, tau_shape__, tau, wor
     &k_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        complex(kind=kind((0.0,0.0))), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgerqf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgerqf(m, n, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine cgerqf_c
      subroutine cgesdd_c(jobz, m, n, a_shape__, a, lda, s_shape__, s, u
     &_shape__, u, ldu, vt_shape__, vt, ldvt, work_shape__, work, lwork,
     & rwork_shape__, rwork, iwork_shape__, iwork, info, fw_iserr__, fw_
     &errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: s_shape__
        real(kind=kind(0.0)), dimension(s_shape__(1)) :: s
        integer, dimension(2) :: u_shape__
        complex(kind=kind((0.0,0.0))), dimension(u_shape__(1), u_shape__
     &(2)) :: u
        integer :: ldu
        integer, dimension(2) :: vt_shape__
        complex(kind=kind((0.0,0.0))), dimension(vt_shape__(1), vt_shape
     &__(2)) :: vt
        integer :: ldvt
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgesdd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldu) .ne. (u_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("u                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvt) .ne. (vt_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vt                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgesdd(jobz, m, n, a, lda, s, u, ldu, vt, ldvt, work, lwork
     &, rwork, iwork, info)
        fw_iserr__ = 0
      end subroutine cgesdd_c
      subroutine cgesv_c(n, nrhs, a_shape__, a, lda, ipiv_shape__, ipiv,
     & b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgesv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgesv(n, nrhs, a, lda, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine cgesv_c
      subroutine cgetrf_c(m, n, a_shape__, a, lda, ipiv_shape__, ipiv, i
     &nfo, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgetrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgetrf(m, n, a, lda, ipiv, info)
        fw_iserr__ = 0
      end subroutine cgetrf_c
      subroutine cgetri_c(n, a_shape__, a, lda, ipiv_shape__, ipiv, work
     &_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgetri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgetri(n, a, lda, ipiv, work, lwork, info)
        fw_iserr__ = 0
      end subroutine cgetri_c
      subroutine cgetrs_c(trans, n, nrhs, a_shape__, a, lda, ipiv_shape_
     &_, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: trans
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgetrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgetrs(trans, n, nrhs, a, lda, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine cgetrs_c
      subroutine cggev_c(jobvl, jobvr, n, a_shape__, a, lda, b_shape__, 
     &b, ldb, alpha_shape__, alpha, beta_shape__, beta, vl_shape__, vl, 
     &ldvl, vr_shape__, vr, ldvr, work_shape__, work, lwork, rwork_shape
     &__, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer, dimension(1) :: alpha_shape__
        complex(kind=kind((0.0,0.0))), dimension(alpha_shape__(1)) :: al
     &pha
        integer, dimension(1) :: beta_shape__
        complex(kind=kind((0.0,0.0))), dimension(beta_shape__(1)) :: bet
     &a
        integer, dimension(2) :: vl_shape__
        complex(kind=kind((0.0,0.0))), dimension(vl_shape__(1), vl_shape
     &__(2)) :: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        complex(kind=kind((0.0,0.0))), dimension(vr_shape__(1), vr_shape
     &__(2)) :: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cggev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cggev(jobvl, jobvr, n, a, lda, b, ldb, alpha, beta, vl, ldv
     &l, vr, ldvr, work, lwork, rwork, info)
        fw_iserr__ = 0
      end subroutine cggev_c
      subroutine chbevd_c(jobz, uplo, n, kd, ab_shape__, ab, ldab, w_sha
     &pe__, w, z_shape__, z, ldz, work_shape__, work, lwork, rwork_shape
     &__, rwork, lrwork, iwork_shape__, iwork, liwork, info, fw_iserr__,
     & fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        complex(kind=kind((0.0,0.0))), dimension(ab_shape__(1), ab_shape
     &__(2)) :: ab
        integer :: ldab
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        complex(kind=kind((0.0,0.0))), dimension(z_shape__(1), z_shape__
     &(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: lrwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chbevd
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call chbevd(jobz, uplo, n, kd, ab, ldab, w, z, ldz, work, lwork,
     & rwork, lrwork, iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine chbevd_c
      subroutine chbevx_c(jobz, range, uplo, n, kd, ab_shape__, ab, ldab
     &, q_shape__, q, ldq, vl, vu, il, iu, abstol, m, w_shape__, w, z_sh
     &ape__, z, ldz, work_shape__, work, rwork_shape__, rwork, iwork_sha
     &pe__, iwork, ifail_shape__, ifail, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        complex(kind=kind((0.0,0.0))), dimension(ab_shape__(1), ab_shape
     &__(2)) :: ab
        integer :: ldab
        integer, dimension(2) :: q_shape__
        complex(kind=kind((0.0,0.0))), dimension(q_shape__(1), q_shape__
     &(2)) :: q
        integer :: ldq
        real(kind=kind(0.0)) :: vl
        real(kind=kind(0.0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        complex(kind=kind((0.0,0.0))), dimension(z_shape__(1), z_shape__
     &(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer, dimension(1) :: ifail_shape__
        integer, dimension(ifail_shape__(1)) :: ifail
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chbevx
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldq) .ne. (q_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("q                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call chbevx(jobz, range, uplo, n, kd, ab, ldab, q, ldq, vl, vu, 
     &il, iu, abstol, m, w, z, ldz, work, rwork, iwork, ifail, info)
        fw_iserr__ = 0
      end subroutine chbevx_c
      subroutine cheev_c(jobz, uplo, n, a_shape__, a, lda, w_shape__, w,
     & work_shape__, work, lwork, rwork_shape__, rwork, info, fw_iserr__
     &, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cheev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cheev(jobz, uplo, n, a, lda, w, work, lwork, rwork, info)
        fw_iserr__ = 0
      end subroutine cheev_c
      subroutine cheevr_c(jobz, range, uplo, n, a_shape__, a, lda, vl, v
     &u, il, iu, abstol, m, w_shape__, w, z_shape__, z, ldz, isuppz_shap
     &e__, isuppz, work_shape__, work, lwork, rwork_shape__, rwork, lrwo
     &rk, iwork_shape__, iwork, liwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        real(kind=kind(0.0)) :: vl
        real(kind=kind(0.0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        complex(kind=kind((0.0,0.0))), dimension(z_shape__(1), z_shape__
     &(2)) :: z
        integer :: ldz
        integer, dimension(1) :: isuppz_shape__
        integer, dimension(isuppz_shape__(1)) :: isuppz
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: lrwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cheevr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cheevr(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol
     &, m, w, z, ldz, isuppz, work, lwork, rwork, lrwork, iwork, liwork,
     & info)
        fw_iserr__ = 0
      end subroutine cheevr_c
      subroutine chegv_c(itype, jobz, uplo, n, a_shape__, a, lda, b_shap
     &e__, b, ldb, w_shape__, w, work_shape__, work, lwork, rwork_shape_
     &_, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chegv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call chegv(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork,
     & rwork, info)
        fw_iserr__ = 0
      end subroutine chegv_c
      subroutine chegvd_c(itype, jobz, uplo, n, a_shape__, a, lda, b_sha
     &pe__, b, ldb, w_shape__, w, work_shape__, work, lwork, rwork_shape
     &__, rwork, lrwork, iwork_shape__, iwork, liwork, info, fw_iserr__,
     & fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer :: lrwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chegvd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call chegvd(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork
     &, rwork, lrwork, iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine chegvd_c
      subroutine chegvx_c(itype, jobz, range, uplo, n, a_shape__, a, lda
     &, b_shape__, b, ldb, vl, vu, il, iu, abstol, m, w_shape__, w, z_sh
     &ape__, z, ldz, work_shape__, work, lwork, rwork_shape__, rwork, iw
     &ork_shape__, iwork, ifail_shape__, ifail, info, fw_iserr__, fw_err
     &str__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        real(kind=kind(0.0)) :: vl
        real(kind=kind(0.0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        complex(kind=kind((0.0,0.0))), dimension(z_shape__(1), z_shape__
     &(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0)), dimension(rwork_shape__(1)) :: rwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer, dimension(1) :: ifail_shape__
        integer, dimension(ifail_shape__(1)) :: ifail
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chegvx
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call chegvx(itype, jobz, range, uplo, n, a, lda, b, ldb, vl, vu,
     & il, iu, abstol, m, w, z, ldz, work, lwork, rwork, iwork, ifail, i
     &nfo)
        fw_iserr__ = 0
      end subroutine chegvx_c
      subroutine claswp_c(n, a_shape__, a, lda, k1, k2, ipiv_shape__, ip
     &iv, incx, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: k1
        integer :: k2
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external claswp
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call claswp(n, a, lda, k1, k2, ipiv, incx)
        fw_iserr__ = 0
      end subroutine claswp_c
      subroutine clauum_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external clauum
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call clauum(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine clauum_c
      subroutine cpbsv_c(uplo, n, kd, nrhs, ab_shape__, ab, ldab, b_shap
     &e__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        complex(kind=kind((0.0,0.0))), dimension(ab_shape__(1), ab_shape
     &__(2)) :: ab
        integer :: ldab
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpbsv
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cpbsv(uplo, n, kd, nrhs, ab, ldab, b, ldb, info)
        fw_iserr__ = 0
      end subroutine cpbsv_c
      subroutine cpbtrf_c(uplo, n, kd, ab_shape__, ab, ldab, info, fw_is
     &err__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        complex(kind=kind((0.0,0.0))), dimension(ab_shape__(1), ab_shape
     &__(2)) :: ab
        integer :: ldab
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpbtrf
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cpbtrf(uplo, n, kd, ab, ldab, info)
        fw_iserr__ = 0
      end subroutine cpbtrf_c
      subroutine cpbtrs_c(uplo, n, kd, nrhs, ab_shape__, ab, ldab, b_sha
     &pe__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        complex(kind=kind((0.0,0.0))), dimension(ab_shape__(1), ab_shape
     &__(2)) :: ab
        integer :: ldab
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpbtrs
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cpbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb, info)
        fw_iserr__ = 0
      end subroutine cpbtrs_c
      subroutine cposv_c(uplo, n, nrhs, a_shape__, a, lda, b_shape__, b,
     & ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cposv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cposv(uplo, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine cposv_c
      subroutine cpotrf_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpotrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cpotrf(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine cpotrf_c
      subroutine cpotri_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpotri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cpotri(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine cpotri_c
      subroutine cpotrs_c(uplo, n, nrhs, a_shape__, a, lda, b_shape__, b
     &, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpotrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cpotrs(uplo, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine cpotrs_c
      subroutine ctrtri_c(uplo, diag, n, a_shape__, a, lda, info, fw_ise
     &rr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: diag
        integer :: n
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctrtri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ctrtri(uplo, diag, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine ctrtri_c
      subroutine ctrtrs_c(uplo, trans, diag, n, nrhs, a_shape__, a, lda,
     & b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: trans
        character(len=1, kind=kind('a')) :: diag
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctrtrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ctrtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine ctrtrs_c
      subroutine cungqr_c(m, n, k, a_shape__, a, lda, tau_shape__, tau, 
     &work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: k
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        complex(kind=kind((0.0,0.0))), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        complex(kind=kind((0.0,0.0))), dimension(work_shape__(1)) :: wor
     &k
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cungqr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cungqr(m, n, k, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine cungqr_c
      subroutine dgbsv_c(n, kl, ku, nrhs, ab_shape__, ab, ldab, ipiv_sha
     &pe__, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: kl
        integer :: ku
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgbsv
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgbsv(n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine dgbsv_c
      subroutine dgbtrf_c(m, n, kl, ku, ab_shape__, ab, ldab, ipiv_shape
     &__, ipiv, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: kl
        integer :: ku
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgbtrf
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgbtrf(m, n, kl, ku, ab, ldab, ipiv, info)
        fw_iserr__ = 0
      end subroutine dgbtrf_c
      subroutine dgbtrs_c(trans, n, kl, ku, nrhs, ab_shape__, ab, ldab, 
     &ipiv_shape__, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr
     &__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: trans
        integer :: n
        integer :: kl
        integer :: ku
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgbtrs
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb, info
     &)
        fw_iserr__ = 0
      end subroutine dgbtrs_c
      subroutine dgebal_c(job, n, a_shape__, a, lda, ilo, ihi, scale_sha
     &pe__, scale, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: job
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: ilo
        integer :: ihi
        integer, dimension(1) :: scale_shape__
        real(kind=kind(0.0D0)), dimension(scale_shape__(1)) :: scale
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgebal
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgebal(job, n, a, lda, ilo, ihi, scale, info)
        fw_iserr__ = 0
      end subroutine dgebal_c
      subroutine dgees_c(jobvs, sort, select, n, a_shape__, a, lda, sdim
     &, wr_shape__, wr, wi_shape__, wi, vs_shape__, vs, ldvs, work_shape
     &__, work, lwork, bwork_shape__, bwork, info, fw_iserr__, fw_errstr
     &__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvs
        character(len=1, kind=kind('a')) :: sort
        integer(kind=kind(0)) :: select
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: sdim
        integer, dimension(1) :: wr_shape__
        real(kind=kind(0.0D0)), dimension(wr_shape__(1)) :: wr
        integer, dimension(1) :: wi_shape__
        real(kind=kind(0.0D0)), dimension(wi_shape__(1)) :: wi
        integer, dimension(2) :: vs_shape__
        real(kind=kind(0.0D0)), dimension(vs_shape__(1), vs_shape__(2)) 
     &:: vs
        integer :: ldvs
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: bwork_shape__
        integer(kind=kind(0)), dimension(bwork_shape__(1)) :: bwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgees
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvs) .ne. (vs_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vs                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgees(jobvs, sort, select, n, a, lda, sdim, wr, wi, vs, ldv
     &s, work, lwork, bwork, info)
        fw_iserr__ = 0
      end subroutine dgees_c
      subroutine dgeev_c(jobvl, jobvr, n, a_shape__, a, lda, wr_shape__,
     & wr, wi_shape__, wi, vl_shape__, vl, ldvl, vr_shape__, vr, ldvr, w
     &ork_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: wr_shape__
        real(kind=kind(0.0D0)), dimension(wr_shape__(1)) :: wr
        integer, dimension(1) :: wi_shape__
        real(kind=kind(0.0D0)), dimension(wi_shape__(1)) :: wi
        integer, dimension(2) :: vl_shape__
        real(kind=kind(0.0D0)), dimension(vl_shape__(1), vl_shape__(2)) 
     &:: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        real(kind=kind(0.0D0)), dimension(vr_shape__(1), vr_shape__(2)) 
     &:: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgeev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgeev(jobvl, jobvr, n, a, lda, wr, wi, vl, ldvl, vr, ldvr, 
     &work, lwork, info)
        fw_iserr__ = 0
      end subroutine dgeev_c
      subroutine dgegv_c(jobvl, jobvr, n, a_shape__, a, lda, b_shape__, 
     &b, ldb, alphar_shape__, alphar, alphai_shape__, alphai, beta_shape
     &__, beta, vl_shape__, vl, ldvl, vr_shape__, vr, ldvr, work_shape__
     &, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer, dimension(1) :: alphar_shape__
        real(kind=kind(0.0D0)), dimension(alphar_shape__(1)) :: alphar
        integer, dimension(1) :: alphai_shape__
        real(kind=kind(0.0D0)), dimension(alphai_shape__(1)) :: alphai
        integer, dimension(1) :: beta_shape__
        real(kind=kind(0.0D0)), dimension(beta_shape__(1)) :: beta
        integer, dimension(2) :: vl_shape__
        real(kind=kind(0.0D0)), dimension(vl_shape__(1), vl_shape__(2)) 
     &:: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        real(kind=kind(0.0D0)), dimension(vr_shape__(1), vr_shape__(2)) 
     &:: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgegv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgegv(jobvl, jobvr, n, a, lda, b, ldb, alphar, alphai, beta
     &, vl, ldvl, vr, ldvr, work, lwork, info)
        fw_iserr__ = 0
      end subroutine dgegv_c
      subroutine dgehrd_c(n, ilo, ihi, a_shape__, a, lda, tau_shape__, t
     &au, work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: ilo
        integer :: ihi
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        real(kind=kind(0.0D0)), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgehrd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgehrd(n, ilo, ihi, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine dgehrd_c
      subroutine dgelss_c(m, n, nrhs, a_shape__, a, lda, b_shape__, b, l
     &db, s_shape__, s, rcond, rank, work_shape__, work, lwork, info, fw
     &_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer, dimension(1) :: s_shape__
        real(kind=kind(0.0D0)), dimension(s_shape__(1)) :: s
        real(kind=kind(0.0D0)) :: rcond
        integer :: rank
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgelss
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgelss(m, n, nrhs, a, lda, b, ldb, s, rcond, rank, work, lw
     &ork, info)
        fw_iserr__ = 0
      end subroutine dgelss_c
      subroutine dgeqrf_c(m, n, a_shape__, a, lda, tau_shape__, tau, wor
     &k_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        real(kind=kind(0.0D0)), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgeqrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgeqrf(m, n, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine dgeqrf_c
      subroutine dgerqf_c(m, n, a_shape__, a, lda, tau_shape__, tau, wor
     &k_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        real(kind=kind(0.0D0)), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgerqf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgerqf(m, n, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine dgerqf_c
      subroutine dgesdd_c(jobz, m, n, a_shape__, a, lda, s_shape__, s, u
     &_shape__, u, ldu, vt_shape__, vt, ldvt, work_shape__, work, lwork,
     & iwork_shape__, iwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: s_shape__
        real(kind=kind(0.0D0)), dimension(s_shape__(1)) :: s
        integer, dimension(2) :: u_shape__
        real(kind=kind(0.0D0)), dimension(u_shape__(1), u_shape__(2)) ::
     & u
        integer :: ldu
        integer, dimension(2) :: vt_shape__
        real(kind=kind(0.0D0)), dimension(vt_shape__(1), vt_shape__(2)) 
     &:: vt
        integer :: ldvt
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgesdd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldu) .ne. (u_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("u                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvt) .ne. (vt_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vt                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgesdd(jobz, m, n, a, lda, s, u, ldu, vt, ldvt, work, lwork
     &, iwork, info)
        fw_iserr__ = 0
      end subroutine dgesdd_c
      subroutine dgesv_c(n, nrhs, a_shape__, a, lda, ipiv_shape__, ipiv,
     & b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgesv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgesv(n, nrhs, a, lda, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine dgesv_c
      subroutine dgetrf_c(m, n, a_shape__, a, lda, ipiv_shape__, ipiv, i
     &nfo, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgetrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgetrf(m, n, a, lda, ipiv, info)
        fw_iserr__ = 0
      end subroutine dgetrf_c
      subroutine dgetri_c(n, a_shape__, a, lda, ipiv_shape__, ipiv, work
     &_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgetri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgetri(n, a, lda, ipiv, work, lwork, info)
        fw_iserr__ = 0
      end subroutine dgetri_c
      subroutine dgetrs_c(trans, n, nrhs, a_shape__, a, lda, ipiv_shape_
     &_, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: trans
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgetrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgetrs(trans, n, nrhs, a, lda, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine dgetrs_c
      subroutine dggev_c(jobvl, jobvr, n, a_shape__, a, lda, b_shape__, 
     &b, ldb, alphar_shape__, alphar, alphai_shape__, alphai, beta_shape
     &__, beta, vl_shape__, vl, ldvl, vr_shape__, vr, ldvr, work_shape__
     &, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer, dimension(1) :: alphar_shape__
        real(kind=kind(0.0D0)), dimension(alphar_shape__(1)) :: alphar
        integer, dimension(1) :: alphai_shape__
        real(kind=kind(0.0D0)), dimension(alphai_shape__(1)) :: alphai
        integer, dimension(1) :: beta_shape__
        real(kind=kind(0.0D0)), dimension(beta_shape__(1)) :: beta
        integer, dimension(2) :: vl_shape__
        real(kind=kind(0.0D0)), dimension(vl_shape__(1), vl_shape__(2)) 
     &:: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        real(kind=kind(0.0D0)), dimension(vr_shape__(1), vr_shape__(2)) 
     &:: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dggev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dggev(jobvl, jobvr, n, a, lda, b, ldb, alphar, alphai, beta
     &, vl, ldvl, vr, ldvr, work, lwork, info)
        fw_iserr__ = 0
      end subroutine dggev_c
      subroutine dlaswp_c(n, a_shape__, a, lda, k1, k2, ipiv_shape__, ip
     &iv, incx, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: k1
        integer :: k2
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dlaswp
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dlaswp(n, a, lda, k1, k2, ipiv, incx)
        fw_iserr__ = 0
      end subroutine dlaswp_c
      subroutine dlauum_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dlauum
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dlauum(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine dlauum_c
      subroutine dorgqr_c(m, n, k, a_shape__, a, lda, tau_shape__, tau, 
     &work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: k
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        real(kind=kind(0.0D0)), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dorgqr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dorgqr(m, n, k, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine dorgqr_c
      subroutine dpbsv_c(uplo, n, kd, nrhs, ab_shape__, ab, ldab, b_shap
     &e__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dpbsv
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dpbsv(uplo, n, kd, nrhs, ab, ldab, b, ldb, info)
        fw_iserr__ = 0
      end subroutine dpbsv_c
      subroutine dpbtrf_c(uplo, n, kd, ab_shape__, ab, ldab, info, fw_is
     &err__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dpbtrf
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dpbtrf(uplo, n, kd, ab, ldab, info)
        fw_iserr__ = 0
      end subroutine dpbtrf_c
      subroutine dpbtrs_c(uplo, n, kd, nrhs, ab_shape__, ab, ldab, b_sha
     &pe__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dpbtrs
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dpbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb, info)
        fw_iserr__ = 0
      end subroutine dpbtrs_c
      subroutine dposv_c(uplo, n, nrhs, a_shape__, a, lda, b_shape__, b,
     & ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dposv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dposv(uplo, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine dposv_c
      subroutine dpotrf_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dpotrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dpotrf(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine dpotrf_c
      subroutine dpotri_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dpotri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dpotri(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine dpotri_c
      subroutine dpotrs_c(uplo, n, nrhs, a_shape__, a, lda, b_shape__, b
     &, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dpotrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dpotrs(uplo, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine dpotrs_c
      subroutine dsbev_c(jobz, uplo, n, kd, ab_shape__, ab, ldab, w_shap
     &e__, w, z_shape__, z, ldz, work_shape__, work, info, fw_iserr__, f
     &w_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0D0)), dimension(z_shape__(1), z_shape__(2)) ::
     & z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsbev
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsbev(jobz, uplo, n, kd, ab, ldab, w, z, ldz, work, info)
        fw_iserr__ = 0
      end subroutine dsbev_c
      subroutine dsbevd_c(jobz, uplo, n, kd, ab_shape__, ab, ldab, w_sha
     &pe__, w, z_shape__, z, ldz, work_shape__, work, lwork, iwork_shape
     &__, iwork, liwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0D0)), dimension(z_shape__(1), z_shape__(2)) ::
     & z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsbevd
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsbevd(jobz, uplo, n, kd, ab, ldab, w, z, ldz, work, lwork,
     & iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine dsbevd_c
      subroutine dsbevx_c(jobz, range, uplo, n, kd, ab_shape__, ab, ldab
     &, q_shape__, q, ldq, vl, vu, il, iu, abstol, m, w_shape__, w, z_sh
     &ape__, z, ldz, work_shape__, work, iwork_shape__, iwork, ifail_sha
     &pe__, ifail, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0D0)), dimension(ab_shape__(1), ab_shape__(2)) 
     &:: ab
        integer :: ldab
        integer, dimension(2) :: q_shape__
        real(kind=kind(0.0D0)), dimension(q_shape__(1), q_shape__(2)) ::
     & q
        integer :: ldq
        real(kind=kind(0.0D0)) :: vl
        real(kind=kind(0.0D0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0D0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0D0)), dimension(z_shape__(1), z_shape__(2)) ::
     & z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer, dimension(1) :: ifail_shape__
        integer, dimension(ifail_shape__(1)) :: ifail
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsbevx
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldq) .ne. (q_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("q                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsbevx(jobz, range, uplo, n, kd, ab, ldab, q, ldq, vl, vu, 
     &il, iu, abstol, m, w, z, ldz, work, iwork, ifail, info)
        fw_iserr__ = 0
      end subroutine dsbevx_c
      subroutine dsyev_c(jobz, uplo, n, a_shape__, a, lda, w_shape__, w,
     & work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsyev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsyev(jobz, uplo, n, a, lda, w, work, lwork, info)
        fw_iserr__ = 0
      end subroutine dsyev_c
      subroutine dsyevr_c(jobz, range, uplo, n, a_shape__, a, lda, vl, v
     &u, il, iu, abstol, m, w_shape__, w, z_shape__, z, ldz, isuppz_shap
     &e__, isuppz, work_shape__, work, lwork, iwork_shape__, iwork, liwo
     &rk, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        real(kind=kind(0.0D0)) :: vl
        real(kind=kind(0.0D0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0D0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0D0)), dimension(z_shape__(1), z_shape__(2)) ::
     & z
        integer :: ldz
        integer, dimension(1) :: isuppz_shape__
        integer, dimension(isuppz_shape__(1)) :: isuppz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsyevr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsyevr(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol
     &, m, w, z, ldz, isuppz, work, lwork, iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine dsyevr_c
      subroutine dsygv_c(itype, jobz, uplo, n, a_shape__, a, lda, b_shap
     &e__, b, ldb, w_shape__, w, work_shape__, work, lwork, info, fw_ise
     &rr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsygv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsygv(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork,
     & info)
        fw_iserr__ = 0
      end subroutine dsygv_c
      subroutine dsygvd_c(itype, jobz, uplo, n, a_shape__, a, lda, b_sha
     &pe__, b, ldb, w_shape__, w, work_shape__, work, lwork, iwork_shape
     &__, iwork, liwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsygvd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsygvd(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork
     &, iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine dsygvd_c
      subroutine dsygvx_c(itype, jobz, range, uplo, n, a_shape__, a, lda
     &, b_shape__, b, ldb, vl, vu, il, iu, abstol, m, w_shape__, w, z_sh
     &ape__, z, ldz, work_shape__, work, lwork, iwork_shape__, iwork, if
     &ail_shape__, ifail, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        real(kind=kind(0.0D0)) :: vl
        real(kind=kind(0.0D0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0D0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0D0)), dimension(z_shape__(1), z_shape__(2)) ::
     & z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0D0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer, dimension(1) :: ifail_shape__
        integer, dimension(ifail_shape__(1)) :: ifail
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsygvx
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsygvx(itype, jobz, range, uplo, n, a, lda, b, ldb, vl, vu,
     & il, iu, abstol, m, w, z, ldz, work, lwork, iwork, ifail, info)
        fw_iserr__ = 0
      end subroutine dsygvx_c
      subroutine dtrtri_c(uplo, diag, n, a_shape__, a, lda, info, fw_ise
     &rr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: diag
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtrtri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dtrtri(uplo, diag, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine dtrtri_c
      subroutine dtrtrs_c(uplo, trans, diag, n, nrhs, a_shape__, a, lda,
     & b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: trans
        character(len=1, kind=kind('a')) :: diag
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtrtrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dtrtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine dtrtrs_c
      subroutine sgbsv_c(n, kl, ku, nrhs, ab_shape__, ab, ldab, ipiv_sha
     &pe__, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: kl
        integer :: ku
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgbsv
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgbsv(n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine sgbsv_c
      subroutine sgbtrf_c(m, n, kl, ku, ab_shape__, ab, ldab, ipiv_shape
     &__, ipiv, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: kl
        integer :: ku
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgbtrf
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgbtrf(m, n, kl, ku, ab, ldab, ipiv, info)
        fw_iserr__ = 0
      end subroutine sgbtrf_c
      subroutine sgbtrs_c(trans, n, kl, ku, nrhs, ab_shape__, ab, ldab, 
     &ipiv_shape__, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr
     &__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: trans
        integer :: n
        integer :: kl
        integer :: ku
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgbtrs
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb, info
     &)
        fw_iserr__ = 0
      end subroutine sgbtrs_c
      subroutine sgebal_c(job, n, a_shape__, a, lda, ilo, ihi, scale_sha
     &pe__, scale, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: job
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: ilo
        integer :: ihi
        integer, dimension(1) :: scale_shape__
        real(kind=kind(0.0)), dimension(scale_shape__(1)) :: scale
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgebal
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgebal(job, n, a, lda, ilo, ihi, scale, info)
        fw_iserr__ = 0
      end subroutine sgebal_c
      subroutine sgees_c(jobvs, sort, select, n, a_shape__, a, lda, sdim
     &, wr_shape__, wr, wi_shape__, wi, vs_shape__, vs, ldvs, work_shape
     &__, work, lwork, bwork_shape__, bwork, info, fw_iserr__, fw_errstr
     &__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvs
        character(len=1, kind=kind('a')) :: sort
        integer(kind=kind(0)) :: select
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: sdim
        integer, dimension(1) :: wr_shape__
        real(kind=kind(0.0)), dimension(wr_shape__(1)) :: wr
        integer, dimension(1) :: wi_shape__
        real(kind=kind(0.0)), dimension(wi_shape__(1)) :: wi
        integer, dimension(2) :: vs_shape__
        real(kind=kind(0.0)), dimension(vs_shape__(1), vs_shape__(2)) ::
     & vs
        integer :: ldvs
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: bwork_shape__
        integer(kind=kind(0)), dimension(bwork_shape__(1)) :: bwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgees
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvs) .ne. (vs_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vs                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgees(jobvs, sort, select, n, a, lda, sdim, wr, wi, vs, ldv
     &s, work, lwork, bwork, info)
        fw_iserr__ = 0
      end subroutine sgees_c
      subroutine sgeev_c(jobvl, jobvr, n, a_shape__, a, lda, wr_shape__,
     & wr, wi_shape__, wi, vl_shape__, vl, ldvl, vr_shape__, vr, ldvr, w
     &ork_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: wr_shape__
        real(kind=kind(0.0)), dimension(wr_shape__(1)) :: wr
        integer, dimension(1) :: wi_shape__
        real(kind=kind(0.0)), dimension(wi_shape__(1)) :: wi
        integer, dimension(2) :: vl_shape__
        real(kind=kind(0.0)), dimension(vl_shape__(1), vl_shape__(2)) ::
     & vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        real(kind=kind(0.0)), dimension(vr_shape__(1), vr_shape__(2)) ::
     & vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgeev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgeev(jobvl, jobvr, n, a, lda, wr, wi, vl, ldvl, vr, ldvr, 
     &work, lwork, info)
        fw_iserr__ = 0
      end subroutine sgeev_c
      subroutine sgegv_c(jobvl, jobvr, n, a_shape__, a, lda, b_shape__, 
     &b, ldb, alphar_shape__, alphar, alphai_shape__, alphai, beta_shape
     &__, beta, vl_shape__, vl, ldvl, vr_shape__, vr, ldvr, work_shape__
     &, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: alphar_shape__
        real(kind=kind(0.0)), dimension(alphar_shape__(1)) :: alphar
        integer, dimension(1) :: alphai_shape__
        real(kind=kind(0.0)), dimension(alphai_shape__(1)) :: alphai
        integer, dimension(1) :: beta_shape__
        real(kind=kind(0.0)), dimension(beta_shape__(1)) :: beta
        integer, dimension(2) :: vl_shape__
        real(kind=kind(0.0)), dimension(vl_shape__(1), vl_shape__(2)) ::
     & vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        real(kind=kind(0.0)), dimension(vr_shape__(1), vr_shape__(2)) ::
     & vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgegv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgegv(jobvl, jobvr, n, a, lda, b, ldb, alphar, alphai, beta
     &, vl, ldvl, vr, ldvr, work, lwork, info)
        fw_iserr__ = 0
      end subroutine sgegv_c
      subroutine sgehrd_c(n, ilo, ihi, a_shape__, a, lda, tau_shape__, t
     &au, work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: ilo
        integer :: ihi
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        real(kind=kind(0.0)), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgehrd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgehrd(n, ilo, ihi, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine sgehrd_c
      subroutine sgelss_c(m, n, nrhs, a_shape__, a, lda, b_shape__, b, l
     &db, s_shape__, s, rcond, rank, work_shape__, work, lwork, info, fw
     &_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: s_shape__
        real(kind=kind(0.0)), dimension(s_shape__(1)) :: s
        real(kind=kind(0.0)) :: rcond
        integer :: rank
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgelss
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgelss(m, n, nrhs, a, lda, b, ldb, s, rcond, rank, work, lw
     &ork, info)
        fw_iserr__ = 0
      end subroutine sgelss_c
      subroutine sgeqrf_c(m, n, a_shape__, a, lda, tau_shape__, tau, wor
     &k_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        real(kind=kind(0.0)), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgeqrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgeqrf(m, n, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine sgeqrf_c
      subroutine sgerqf_c(m, n, a_shape__, a, lda, tau_shape__, tau, wor
     &k_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        real(kind=kind(0.0)), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgerqf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgerqf(m, n, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine sgerqf_c
      subroutine sgesdd_c(jobz, m, n, a_shape__, a, lda, s_shape__, s, u
     &_shape__, u, ldu, vt_shape__, vt, ldvt, work_shape__, work, lwork,
     & iwork_shape__, iwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: s_shape__
        real(kind=kind(0.0)), dimension(s_shape__(1)) :: s
        integer, dimension(2) :: u_shape__
        real(kind=kind(0.0)), dimension(u_shape__(1), u_shape__(2)) :: u
        integer :: ldu
        integer, dimension(2) :: vt_shape__
        real(kind=kind(0.0)), dimension(vt_shape__(1), vt_shape__(2)) ::
     & vt
        integer :: ldvt
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgesdd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldu) .ne. (u_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("u                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvt) .ne. (vt_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vt                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgesdd(jobz, m, n, a, lda, s, u, ldu, vt, ldvt, work, lwork
     &, iwork, info)
        fw_iserr__ = 0
      end subroutine sgesdd_c
      subroutine sgesv_c(n, nrhs, a_shape__, a, lda, ipiv_shape__, ipiv,
     & b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgesv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgesv(n, nrhs, a, lda, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine sgesv_c
      subroutine sgetrf_c(m, n, a_shape__, a, lda, ipiv_shape__, ipiv, i
     &nfo, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgetrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgetrf(m, n, a, lda, ipiv, info)
        fw_iserr__ = 0
      end subroutine sgetrf_c
      subroutine sgetri_c(n, a_shape__, a, lda, ipiv_shape__, ipiv, work
     &_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgetri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgetri(n, a, lda, ipiv, work, lwork, info)
        fw_iserr__ = 0
      end subroutine sgetri_c
      subroutine sgetrs_c(trans, n, nrhs, a_shape__, a, lda, ipiv_shape_
     &_, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: trans
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgetrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgetrs(trans, n, nrhs, a, lda, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine sgetrs_c
      subroutine sggev_c(jobvl, jobvr, n, a_shape__, a, lda, b_shape__, 
     &b, ldb, alphar_shape__, alphar, alphai_shape__, alphai, beta_shape
     &__, beta, vl_shape__, vl, ldvl, vr_shape__, vr, ldvr, work_shape__
     &, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: alphar_shape__
        real(kind=kind(0.0)), dimension(alphar_shape__(1)) :: alphar
        integer, dimension(1) :: alphai_shape__
        real(kind=kind(0.0)), dimension(alphai_shape__(1)) :: alphai
        integer, dimension(1) :: beta_shape__
        real(kind=kind(0.0)), dimension(beta_shape__(1)) :: beta
        integer, dimension(2) :: vl_shape__
        real(kind=kind(0.0)), dimension(vl_shape__(1), vl_shape__(2)) ::
     & vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        real(kind=kind(0.0)), dimension(vr_shape__(1), vr_shape__(2)) ::
     & vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sggev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sggev(jobvl, jobvr, n, a, lda, b, ldb, alphar, alphai, beta
     &, vl, ldvl, vr, ldvr, work, lwork, info)
        fw_iserr__ = 0
      end subroutine sggev_c
      subroutine slaswp_c(n, a_shape__, a, lda, k1, k2, ipiv_shape__, ip
     &iv, incx, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: k1
        integer :: k2
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external slaswp
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call slaswp(n, a, lda, k1, k2, ipiv, incx)
        fw_iserr__ = 0
      end subroutine slaswp_c
      subroutine slauum_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external slauum
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call slauum(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine slauum_c
      subroutine sorgqr_c(m, n, k, a_shape__, a, lda, tau_shape__, tau, 
     &work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: k
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        real(kind=kind(0.0)), dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sorgqr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sorgqr(m, n, k, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine sorgqr_c
      subroutine spbsv_c(uplo, n, kd, nrhs, ab_shape__, ab, ldab, b_shap
     &e__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external spbsv
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call spbsv(uplo, n, kd, nrhs, ab, ldab, b, ldb, info)
        fw_iserr__ = 0
      end subroutine spbsv_c
      subroutine spbtrf_c(uplo, n, kd, ab_shape__, ab, ldab, info, fw_is
     &err__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external spbtrf
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call spbtrf(uplo, n, kd, ab, ldab, info)
        fw_iserr__ = 0
      end subroutine spbtrf_c
      subroutine spbtrs_c(uplo, n, kd, nrhs, ab_shape__, ab, ldab, b_sha
     &pe__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external spbtrs
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call spbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb, info)
        fw_iserr__ = 0
      end subroutine spbtrs_c
      subroutine sposv_c(uplo, n, nrhs, a_shape__, a, lda, b_shape__, b,
     & ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sposv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sposv(uplo, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine sposv_c
      subroutine spotrf_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external spotrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call spotrf(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine spotrf_c
      subroutine spotri_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external spotri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call spotri(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine spotri_c
      subroutine spotrs_c(uplo, n, nrhs, a_shape__, a, lda, b_shape__, b
     &, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external spotrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call spotrs(uplo, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine spotrs_c
      subroutine ssbev_c(jobz, uplo, n, kd, ab_shape__, ab, ldab, w_shap
     &e__, w, z_shape__, z, ldz, work_shape__, work, info, fw_iserr__, f
     &w_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0)), dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssbev
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssbev(jobz, uplo, n, kd, ab, ldab, w, z, ldz, work, info)
        fw_iserr__ = 0
      end subroutine ssbev_c
      subroutine ssbevd_c(jobz, uplo, n, kd, ab_shape__, ab, ldab, w_sha
     &pe__, w, z_shape__, z, ldz, work_shape__, work, lwork, iwork_shape
     &__, iwork, liwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0)), dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssbevd
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssbevd(jobz, uplo, n, kd, ab, ldab, w, z, ldz, work, lwork,
     & iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine ssbevd_c
      subroutine ssbevx_c(jobz, range, uplo, n, kd, ab_shape__, ab, ldab
     &, q_shape__, q, ldq, vl, vu, il, iu, abstol, m, w_shape__, w, z_sh
     &ape__, z, ldz, work_shape__, work, iwork_shape__, iwork, ifail_sha
     &pe__, ifail, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        real(kind=kind(0.0)), dimension(ab_shape__(1), ab_shape__(2)) ::
     & ab
        integer :: ldab
        integer, dimension(2) :: q_shape__
        real(kind=kind(0.0)), dimension(q_shape__(1), q_shape__(2)) :: q
        integer :: ldq
        real(kind=kind(0.0)) :: vl
        real(kind=kind(0.0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0)), dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer, dimension(1) :: ifail_shape__
        integer, dimension(ifail_shape__(1)) :: ifail
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssbevx
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldq) .ne. (q_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("q                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssbevx(jobz, range, uplo, n, kd, ab, ldab, q, ldq, vl, vu, 
     &il, iu, abstol, m, w, z, ldz, work, iwork, ifail, info)
        fw_iserr__ = 0
      end subroutine ssbevx_c
      subroutine ssyev_c(jobz, uplo, n, a_shape__, a, lda, w_shape__, w,
     & work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssyev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssyev(jobz, uplo, n, a, lda, w, work, lwork, info)
        fw_iserr__ = 0
      end subroutine ssyev_c
      subroutine ssyevr_c(jobz, range, uplo, n, a_shape__, a, lda, vl, v
     &u, il, iu, abstol, m, w_shape__, w, z_shape__, z, ldz, isuppz_shap
     &e__, isuppz, work_shape__, work, lwork, iwork_shape__, iwork, liwo
     &rk, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        real(kind=kind(0.0)) :: vl
        real(kind=kind(0.0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0)), dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: isuppz_shape__
        integer, dimension(isuppz_shape__(1)) :: isuppz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssyevr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssyevr(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol
     &, m, w, z, ldz, isuppz, work, lwork, iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine ssyevr_c
      subroutine ssygv_c(itype, jobz, uplo, n, a_shape__, a, lda, b_shap
     &e__, b, ldb, w_shape__, w, work_shape__, work, lwork, info, fw_ise
     &rr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssygv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssygv(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork,
     & info)
        fw_iserr__ = 0
      end subroutine ssygv_c
      subroutine ssygvd_c(itype, jobz, uplo, n, a_shape__, a, lda, b_sha
     &pe__, b, ldb, w_shape__, w, work_shape__, work, lwork, iwork_shape
     &__, iwork, liwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssygvd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssygvd(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork
     &, iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine ssygvd_c
      subroutine ssygvx_c(itype, jobz, range, uplo, n, a_shape__, a, lda
     &, b_shape__, b, ldb, vl, vu, il, iu, abstol, m, w_shape__, w, z_sh
     &ape__, z, ldz, work_shape__, work, lwork, iwork_shape__, iwork, if
     &ail_shape__, ifail, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        real(kind=kind(0.0)) :: vl
        real(kind=kind(0.0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        real(kind=kind(0.0)), dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        real(kind=kind(0.0)), dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer, dimension(1) :: ifail_shape__
        integer, dimension(ifail_shape__(1)) :: ifail
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssygvx
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssygvx(itype, jobz, range, uplo, n, a, lda, b, ldb, vl, vu,
     & il, iu, abstol, m, w, z, ldz, work, lwork, iwork, ifail, info)
        fw_iserr__ = 0
      end subroutine ssygvx_c
      subroutine strtri_c(uplo, diag, n, a_shape__, a, lda, info, fw_ise
     &rr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: diag
        integer :: n
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external strtri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call strtri(uplo, diag, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine strtri_c
      subroutine strtrs_c(uplo, trans, diag, n, nrhs, a_shape__, a, lda,
     & b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: trans
        character(len=1, kind=kind('a')) :: diag
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external strtrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call strtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine strtrs_c
      subroutine zgbsv_c(n, kl, ku, nrhs, ab_shape__, ab, ldab, ipiv_sha
     &pe__, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: kl
        integer :: ku
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        complex*16, dimension(ab_shape__(1), ab_shape__(2)) :: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgbsv
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgbsv(n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine zgbsv_c
      subroutine zgbtrf_c(m, n, kl, ku, ab_shape__, ab, ldab, ipiv_shape
     &__, ipiv, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: kl
        integer :: ku
        integer, dimension(2) :: ab_shape__
        complex*16, dimension(ab_shape__(1), ab_shape__(2)) :: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgbtrf
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgbtrf(m, n, kl, ku, ab, ldab, ipiv, info)
        fw_iserr__ = 0
      end subroutine zgbtrf_c
      subroutine zgbtrs_c(trans, n, kl, ku, nrhs, ab_shape__, ab, ldab, 
     &ipiv_shape__, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr
     &__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: trans
        integer :: n
        integer :: kl
        integer :: ku
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        complex*16, dimension(ab_shape__(1), ab_shape__(2)) :: ab
        integer :: ldab
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgbtrs
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb, info
     &)
        fw_iserr__ = 0
      end subroutine zgbtrs_c
      subroutine zgebal_c(job, n, a_shape__, a, lda, ilo, ihi, scale_sha
     &pe__, scale, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: job
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: ilo
        integer :: ihi
        integer, dimension(1) :: scale_shape__
        real(kind=kind(0.0D0)), dimension(scale_shape__(1)) :: scale
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgebal
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgebal(job, n, a, lda, ilo, ihi, scale, info)
        fw_iserr__ = 0
      end subroutine zgebal_c
      subroutine zgees_c(jobvs, sort, select, n, a_shape__, a, lda, sdim
     &, w_shape__, w, vs_shape__, vs, ldvs, work_shape__, work, lwork, r
     &work_shape__, rwork, bwork_shape__, bwork, info, fw_iserr__, fw_er
     &rstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvs
        character(len=1, kind=kind('a')) :: sort
        integer(kind=kind(0)) :: select
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: sdim
        integer, dimension(1) :: w_shape__
        complex*16, dimension(w_shape__(1)) :: w
        integer, dimension(2) :: vs_shape__
        complex*16, dimension(vs_shape__(1), vs_shape__(2)) :: vs
        integer :: ldvs
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer, dimension(1) :: bwork_shape__
        integer(kind=kind(0)), dimension(bwork_shape__(1)) :: bwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgees
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvs) .ne. (vs_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vs                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgees(jobvs, sort, select, n, a, lda, sdim, w, vs, ldvs, wo
     &rk, lwork, rwork, bwork, info)
        fw_iserr__ = 0
      end subroutine zgees_c
      subroutine zgeev_c(jobvl, jobvr, n, a_shape__, a, lda, w_shape__, 
     &w, vl_shape__, vl, ldvl, vr_shape__, vr, ldvr, work_shape__, work,
     & lwork, rwork_shape__, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: w_shape__
        complex*16, dimension(w_shape__(1)) :: w
        integer, dimension(2) :: vl_shape__
        complex*16, dimension(vl_shape__(1), vl_shape__(2)) :: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        complex*16, dimension(vr_shape__(1), vr_shape__(2)) :: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgeev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgeev(jobvl, jobvr, n, a, lda, w, vl, ldvl, vr, ldvr, work,
     & lwork, rwork, info)
        fw_iserr__ = 0
      end subroutine zgeev_c
      subroutine zgegv_c(jobvl, jobvr, n, a_shape__, a, lda, b_shape__, 
     &b, ldb, alpha_shape__, alpha, beta_shape__, beta, vl_shape__, vl, 
     &ldvl, vr_shape__, vr, ldvr, work_shape__, work, lwork, rwork_shape
     &__, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: alpha_shape__
        complex*16, dimension(alpha_shape__(1)) :: alpha
        integer, dimension(1) :: beta_shape__
        complex*16, dimension(beta_shape__(1)) :: beta
        integer, dimension(2) :: vl_shape__
        complex*16, dimension(vl_shape__(1), vl_shape__(2)) :: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        complex*16, dimension(vr_shape__(1), vr_shape__(2)) :: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgegv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgegv(jobvl, jobvr, n, a, lda, b, ldb, alpha, beta, vl, ldv
     &l, vr, ldvr, work, lwork, rwork, info)
        fw_iserr__ = 0
      end subroutine zgegv_c
      subroutine zgehrd_c(n, ilo, ihi, a_shape__, a, lda, tau_shape__, t
     &au, work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: ilo
        integer :: ihi
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        complex*16, dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgehrd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgehrd(n, ilo, ihi, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine zgehrd_c
      subroutine zgelss_c(m, n, nrhs, a_shape__, a, lda, b_shape__, b, l
     &db, s_shape__, s, rcond, rank, work_shape__, work, lwork, rwork_sh
     &ape__, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: s_shape__
        real(kind=kind(0.0D0)), dimension(s_shape__(1)) :: s
        real(kind=kind(0.0D0)) :: rcond
        integer :: rank
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgelss
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgelss(m, n, nrhs, a, lda, b, ldb, s, rcond, rank, work, lw
     &ork, rwork, info)
        fw_iserr__ = 0
      end subroutine zgelss_c
      subroutine zgeqrf_c(m, n, a_shape__, a, lda, tau_shape__, tau, wor
     &k_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        complex*16, dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgeqrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgeqrf(m, n, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine zgeqrf_c
      subroutine zgerqf_c(m, n, a_shape__, a, lda, tau_shape__, tau, wor
     &k_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        complex*16, dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgerqf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgerqf(m, n, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine zgerqf_c
      subroutine zgesdd_c(jobz, m, n, a_shape__, a, lda, s_shape__, s, u
     &_shape__, u, ldu, vt_shape__, vt, ldvt, work_shape__, work, lwork,
     & rwork_shape__, rwork, iwork_shape__, iwork, info, fw_iserr__, fw_
     &errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: s_shape__
        real(kind=kind(0.0D0)), dimension(s_shape__(1)) :: s
        integer, dimension(2) :: u_shape__
        complex*16, dimension(u_shape__(1), u_shape__(2)) :: u
        integer :: ldu
        integer, dimension(2) :: vt_shape__
        complex*16, dimension(vt_shape__(1), vt_shape__(2)) :: vt
        integer :: ldvt
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgesdd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldu) .ne. (u_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("u                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvt) .ne. (vt_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vt                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgesdd(jobz, m, n, a, lda, s, u, ldu, vt, ldvt, work, lwork
     &, rwork, iwork, info)
        fw_iserr__ = 0
      end subroutine zgesdd_c
      subroutine zgesv_c(n, nrhs, a_shape__, a, lda, ipiv_shape__, ipiv,
     & b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgesv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgesv(n, nrhs, a, lda, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine zgesv_c
      subroutine zgetrf_c(m, n, a_shape__, a, lda, ipiv_shape__, ipiv, i
     &nfo, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgetrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgetrf(m, n, a, lda, ipiv, info)
        fw_iserr__ = 0
      end subroutine zgetrf_c
      subroutine zgetri_c(n, a_shape__, a, lda, ipiv_shape__, ipiv, work
     &_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgetri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgetri(n, a, lda, ipiv, work, lwork, info)
        fw_iserr__ = 0
      end subroutine zgetri_c
      subroutine zgetrs_c(trans, n, nrhs, a_shape__, a, lda, ipiv_shape_
     &_, ipiv, b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: trans
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgetrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgetrs(trans, n, nrhs, a, lda, ipiv, b, ldb, info)
        fw_iserr__ = 0
      end subroutine zgetrs_c
      subroutine zggev_c(jobvl, jobvr, n, a_shape__, a, lda, b_shape__, 
     &b, ldb, alpha_shape__, alpha, beta_shape__, beta, vl_shape__, vl, 
     &ldvl, vr_shape__, vr, ldvr, work_shape__, work, lwork, rwork_shape
     &__, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobvl
        character(len=1, kind=kind('a')) :: jobvr
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: alpha_shape__
        complex*16, dimension(alpha_shape__(1)) :: alpha
        integer, dimension(1) :: beta_shape__
        complex*16, dimension(beta_shape__(1)) :: beta
        integer, dimension(2) :: vl_shape__
        complex*16, dimension(vl_shape__(1), vl_shape__(2)) :: vl
        integer :: ldvl
        integer, dimension(2) :: vr_shape__
        complex*16, dimension(vr_shape__(1), vr_shape__(2)) :: vr
        integer :: ldvr
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zggev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvl) .ne. (vl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldvr) .ne. (vr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("vr                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zggev(jobvl, jobvr, n, a, lda, b, ldb, alpha, beta, vl, ldv
     &l, vr, ldvr, work, lwork, rwork, info)
        fw_iserr__ = 0
      end subroutine zggev_c
      subroutine zhbevd_c(jobz, uplo, n, kd, ab_shape__, ab, ldab, w_sha
     &pe__, w, z_shape__, z, ldz, work_shape__, work, lwork, rwork_shape
     &__, rwork, lrwork, iwork_shape__, iwork, liwork, info, fw_iserr__,
     & fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        complex*16, dimension(ab_shape__(1), ab_shape__(2)) :: ab
        integer :: ldab
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        complex*16, dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: lrwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhbevd
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zhbevd(jobz, uplo, n, kd, ab, ldab, w, z, ldz, work, lwork,
     & rwork, lrwork, iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine zhbevd_c
      subroutine zhbevx_c(jobz, range, uplo, n, kd, ab_shape__, ab, ldab
     &, q_shape__, q, ldq, vl, vu, il, iu, abstol, m, w_shape__, w, z_sh
     &ape__, z, ldz, work_shape__, work, rwork_shape__, rwork, iwork_sha
     &pe__, iwork, ifail_shape__, ifail, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        complex*16, dimension(ab_shape__(1), ab_shape__(2)) :: ab
        integer :: ldab
        integer, dimension(2) :: q_shape__
        complex*16, dimension(q_shape__(1), q_shape__(2)) :: q
        integer :: ldq
        real(kind=kind(0.0D0)) :: vl
        real(kind=kind(0.0D0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0D0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        complex*16, dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer, dimension(1) :: ifail_shape__
        integer, dimension(ifail_shape__(1)) :: ifail
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhbevx
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldq) .ne. (q_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("q                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zhbevx(jobz, range, uplo, n, kd, ab, ldab, q, ldq, vl, vu, 
     &il, iu, abstol, m, w, z, ldz, work, rwork, iwork, ifail, info)
        fw_iserr__ = 0
      end subroutine zhbevx_c
      subroutine zheev_c(jobz, uplo, n, a_shape__, a, lda, w_shape__, w,
     & work_shape__, work, lwork, rwork_shape__, rwork, info, fw_iserr__
     &, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zheev
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zheev(jobz, uplo, n, a, lda, w, work, lwork, rwork, info)
        fw_iserr__ = 0
      end subroutine zheev_c
      subroutine zheevr_c(jobz, range, uplo, n, a_shape__, a, lda, vl, v
     &u, il, iu, abstol, m, w_shape__, w, z_shape__, z, ldz, isuppz_shap
     &e__, isuppz, work_shape__, work, lwork, rwork_shape__, rwork, lrwo
     &rk, iwork_shape__, iwork, liwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        real(kind=kind(0.0D0)) :: vl
        real(kind=kind(0.0D0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0D0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        complex*16, dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: isuppz_shape__
        integer, dimension(isuppz_shape__(1)) :: isuppz
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: lrwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zheevr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zheevr(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol
     &, m, w, z, ldz, isuppz, work, lwork, rwork, lrwork, iwork, liwork,
     & info)
        fw_iserr__ = 0
      end subroutine zheevr_c
      subroutine zhegv_c(itype, jobz, uplo, n, a_shape__, a, lda, b_shap
     &e__, b, ldb, w_shape__, w, work_shape__, work, lwork, rwork_shape_
     &_, rwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhegv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zhegv(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork,
     & rwork, info)
        fw_iserr__ = 0
      end subroutine zhegv_c
      subroutine zhegvd_c(itype, jobz, uplo, n, a_shape__, a, lda, b_sha
     &pe__, b, ldb, w_shape__, w, work_shape__, work, lwork, rwork_shape
     &__, rwork, lrwork, iwork_shape__, iwork, liwork, info, fw_iserr__,
     & fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer :: lrwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer :: liwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhegvd
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zhegvd(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork
     &, rwork, lrwork, iwork, liwork, info)
        fw_iserr__ = 0
      end subroutine zhegvd_c
      subroutine zhegvx_c(itype, jobz, range, uplo, n, a_shape__, a, lda
     &, b_shape__, b, ldb, vl, vu, il, iu, abstol, m, w_shape__, w, z_sh
     &ape__, z, ldz, work_shape__, work, lwork, rwork_shape__, rwork, iw
     &ork_shape__, iwork, ifail_shape__, ifail, info, fw_iserr__, fw_err
     &str__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: itype
        character(len=1, kind=kind('a')) :: jobz
        character(len=1, kind=kind('a')) :: range
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        real(kind=kind(0.0D0)) :: vl
        real(kind=kind(0.0D0)) :: vu
        integer :: il
        integer :: iu
        real(kind=kind(0.0D0)) :: abstol
        integer :: m
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer, dimension(2) :: z_shape__
        complex*16, dimension(z_shape__(1), z_shape__(2)) :: z
        integer :: ldz
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer, dimension(1) :: rwork_shape__
        real(kind=kind(0.0D0)), dimension(rwork_shape__(1)) :: rwork
        integer, dimension(1) :: iwork_shape__
        integer, dimension(iwork_shape__(1)) :: iwork
        integer, dimension(1) :: ifail_shape__
        integer, dimension(ifail_shape__(1)) :: ifail
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhegvx
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldz) .ne. (z_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("z                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zhegvx(itype, jobz, range, uplo, n, a, lda, b, ldb, vl, vu,
     & il, iu, abstol, m, w, z, ldz, work, lwork, rwork, iwork, ifail, i
     &nfo)
        fw_iserr__ = 0
      end subroutine zhegvx_c
      subroutine zlaswp_c(n, a_shape__, a, lda, k1, k2, ipiv_shape__, ip
     &iv, incx, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: k1
        integer :: k2
        integer, dimension(1) :: ipiv_shape__
        integer, dimension(ipiv_shape__(1)) :: ipiv
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zlaswp
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zlaswp(n, a, lda, k1, k2, ipiv, incx)
        fw_iserr__ = 0
      end subroutine zlaswp_c
      subroutine zlauum_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zlauum
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zlauum(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine zlauum_c
      subroutine zpbsv_c(uplo, n, kd, nrhs, ab_shape__, ab, ldab, b_shap
     &e__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        complex*16, dimension(ab_shape__(1), ab_shape__(2)) :: ab
        integer :: ldab
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zpbsv
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zpbsv(uplo, n, kd, nrhs, ab, ldab, b, ldb, info)
        fw_iserr__ = 0
      end subroutine zpbsv_c
      subroutine zpbtrf_c(uplo, n, kd, ab_shape__, ab, ldab, info, fw_is
     &err__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer, dimension(2) :: ab_shape__
        complex*16, dimension(ab_shape__(1), ab_shape__(2)) :: ab
        integer :: ldab
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zpbtrf
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zpbtrf(uplo, n, kd, ab, ldab, info)
        fw_iserr__ = 0
      end subroutine zpbtrf_c
      subroutine zpbtrs_c(uplo, n, kd, nrhs, ab_shape__, ab, ldab, b_sha
     &pe__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: kd
        integer :: nrhs
        integer, dimension(2) :: ab_shape__
        complex*16, dimension(ab_shape__(1), ab_shape__(2)) :: ab
        integer :: ldab
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zpbtrs
        fw_iserr__ = -1
        if ((ldab) .ne. (ab_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ab                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zpbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb, info)
        fw_iserr__ = 0
      end subroutine zpbtrs_c
      subroutine zposv_c(uplo, n, nrhs, a_shape__, a, lda, b_shape__, b,
     & ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zposv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zposv(uplo, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine zposv_c
      subroutine zpotrf_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zpotrf
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zpotrf(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine zpotrf_c
      subroutine zpotri_c(uplo, n, a_shape__, a, lda, info, fw_iserr__, 
     &fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zpotri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zpotri(uplo, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine zpotri_c
      subroutine zpotrs_c(uplo, n, nrhs, a_shape__, a, lda, b_shape__, b
     &, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zpotrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zpotrs(uplo, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine zpotrs_c
      subroutine ztrtri_c(uplo, diag, n, a_shape__, a, lda, info, fw_ise
     &rr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: diag
        integer :: n
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztrtri
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ztrtri(uplo, diag, n, a, lda, info)
        fw_iserr__ = 0
      end subroutine ztrtri_c
      subroutine ztrtrs_c(uplo, trans, diag, n, nrhs, a_shape__, a, lda,
     & b_shape__, b, ldb, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: trans
        character(len=1, kind=kind('a')) :: diag
        integer :: n
        integer :: nrhs
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex*16, dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztrtrs
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldb) .ne. (b_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("b                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ztrtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, info)
        fw_iserr__ = 0
      end subroutine ztrtrs_c
      subroutine zungqr_c(m, n, k, a_shape__, a, lda, tau_shape__, tau, 
     &work_shape__, work, lwork, info, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: m
        integer :: n
        integer :: k
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: tau_shape__
        complex*16, dimension(tau_shape__(1)) :: tau
        integer, dimension(1) :: work_shape__
        complex*16, dimension(work_shape__(1)) :: work
        integer :: lwork
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zungqr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zungqr(m, n, k, a, lda, tau, work, lwork, info)
        fw_iserr__ = 0
      end subroutine zungqr_c
