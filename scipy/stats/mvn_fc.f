      subroutine mvnun_c(d, n, lower_shape__, lower, upper_shape__, uppe
     &r, means_shape__, means, covar_shape__, covar, maxpts, abseps, rel
     &eps, value, inform, fw_iserr__, fw_errstr__)
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
        integer :: d
        integer :: n
        integer, dimension(1) :: lower_shape__
        real(kind=kind(0.0D0)), dimension(lower_shape__(1)) :: lower
        integer, dimension(1) :: upper_shape__
        real(kind=kind(0.0D0)), dimension(upper_shape__(1)) :: upper
        integer, dimension(2) :: means_shape__
        real(kind=kind(0.0D0)), dimension(means_shape__(1), means_shape_
     &_(2)) :: means
        integer, dimension(2) :: covar_shape__
        real(kind=kind(0.0D0)), dimension(covar_shape__(1), covar_shape_
     &_(2)) :: covar
        integer :: maxpts
        real(kind=kind(0.0D0)) :: abseps
        real(kind=kind(0.0D0)) :: releps
        real(kind=kind(0.0D0)) :: value
        integer :: inform
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external mvnun
        fw_iserr__ = -1
        if ((d) .lt. 0 .or. (d) .gt. (lower_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("lower                               
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((d) .lt. 0 .or. (d) .gt. (upper_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("upper                               
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((d) .ne. (means_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (m
     &eans_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("means                               
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((d) .ne. (covar_shape__(1)) .or. (d) .lt. 0 .or. (d) .gt. (c
     &ovar_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("covar                               
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call mvnun(d, n, lower, upper, means, covar, maxpts, abseps, rel
     &eps, value, inform)
        fw_iserr__ = 0
      end subroutine mvnun_c
      subroutine mvndst_c(n, lower_shape__, lower, upper_shape__, upper,
     & infin_shape__, infin, correl_shape__, correl, maxpts, abseps, rel
     &eps, error, value, inform, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: lower_shape__
        real(kind=kind(0.0D0)), dimension(lower_shape__(1)) :: lower
        integer, dimension(1) :: upper_shape__
        real(kind=kind(0.0D0)), dimension(upper_shape__(1)) :: upper
        integer, dimension(1) :: infin_shape__
        integer, dimension(infin_shape__(1)) :: infin
        integer, dimension(1) :: correl_shape__
        real(kind=kind(0.0D0)), dimension(correl_shape__(1)) :: correl
        integer :: maxpts
        real(kind=kind(0.0D0)) :: abseps
        real(kind=kind(0.0D0)) :: releps
        real(kind=kind(0.0D0)) :: error
        real(kind=kind(0.0D0)) :: value
        integer :: inform
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external mvndst
        fw_iserr__ = -1
        call mvndst(n, lower, upper, infin, correl, maxpts, abseps, rele
     &ps, error, value, inform)
        fw_iserr__ = 0
      end subroutine mvndst_c
      subroutine mvndfn_c(fw_ret_arg, n, w_shape__, w, fw_iserr__, fw_er
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: mvndfn
        external mvndfn
        fw_iserr__ = -1
        fw_ret_arg = mvndfn(n, w)
        fw_iserr__ = 0
      end subroutine mvndfn_c
      subroutine mvnlms_c(a, b, infin, lower, upper, fw_iserr__, fw_errs
     &tr__)
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
        real(kind=kind(0.0D0)) :: a
        real(kind=kind(0.0D0)) :: b
        integer :: infin
        real(kind=kind(0.0D0)) :: lower
        real(kind=kind(0.0D0)) :: upper
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external mvnlms
        fw_iserr__ = -1
        call mvnlms(a, b, infin, lower, upper)
        fw_iserr__ = 0
      end subroutine mvnlms_c
      subroutine covsrt_c(n, lower_shape__, lower, upper_shape__, upper,
     & correl_shape__, correl, infin_shape__, infin, y_shape__, y, infis
     &, a_shape__, a, b_shape__, b, cov_shape__, cov, infi_shape__, infi
     &, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: lower_shape__
        real(kind=kind(0.0D0)), dimension(lower_shape__(1)) :: lower
        integer, dimension(1) :: upper_shape__
        real(kind=kind(0.0D0)), dimension(upper_shape__(1)) :: upper
        integer, dimension(1) :: correl_shape__
        real(kind=kind(0.0D0)), dimension(correl_shape__(1)) :: correl
        integer, dimension(1) :: infin_shape__
        integer, dimension(infin_shape__(1)) :: infin
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: infis
        integer, dimension(1) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1)) :: a
        integer, dimension(1) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1)) :: b
        integer, dimension(1) :: cov_shape__
        real(kind=kind(0.0D0)), dimension(cov_shape__(1)) :: cov
        integer, dimension(1) :: infi_shape__
        integer, dimension(infi_shape__(1)) :: infi
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external covsrt
        fw_iserr__ = -1
        call covsrt(n, lower, upper, correl, infin, y, infis, a, b, cov,
     & infi)
        fw_iserr__ = 0
      end subroutine covsrt_c
      subroutine dkswap_c(x, y, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: y
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dkswap
        fw_iserr__ = -1
        call dkswap(x, y)
        fw_iserr__ = 0
      end subroutine dkswap_c
      subroutine rcswp_c(p, q, a_shape__, a, b_shape__, b, infin_shape__
     &, infin, n, c_shape__, c, fw_iserr__, fw_errstr__)
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
        integer :: p
        integer :: q
        integer, dimension(1) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1)) :: a
        integer, dimension(1) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1)) :: b
        integer, dimension(1) :: infin_shape__
        integer, dimension(infin_shape__(1)) :: infin
        integer :: n
        integer, dimension(1) :: c_shape__
        real(kind=kind(0.0D0)), dimension(c_shape__(1)) :: c
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rcswp
        fw_iserr__ = -1
        call rcswp(p, q, a, b, infin, n, c)
        fw_iserr__ = 0
      end subroutine rcswp_c
      subroutine dkbvrc_c(ndim, minvls, maxvls, functn, abseps, releps, 
     &abserr, finest, inform, fw_iserr__, fw_errstr__)
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
        integer :: ndim
        integer :: minvls
        integer :: maxvls
        real(kind=kind(0.0D0)) :: functn
        real(kind=kind(0.0D0)) :: abseps
        real(kind=kind(0.0D0)) :: releps
        real(kind=kind(0.0D0)) :: abserr
        real(kind=kind(0.0D0)) :: finest
        integer :: inform
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dkbvrc
        fw_iserr__ = -1
        call dkbvrc(ndim, minvls, maxvls, functn, abseps, releps, abserr
     &, finest, inform)
        fw_iserr__ = 0
      end subroutine dkbvrc_c
      subroutine dksmrc_c(ndim, klim, sumkro, prime, vk_shape__, vk, fun
     &ctn, x_shape__, x, fw_iserr__, fw_errstr__)
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
        integer :: ndim
        integer :: klim
        real(kind=kind(0.0D0)) :: sumkro
        integer :: prime
        integer, dimension(1) :: vk_shape__
        real(kind=kind(0.0D0)), dimension(vk_shape__(1)) :: vk
        real(kind=kind(0.0D0)) :: functn
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dksmrc
        fw_iserr__ = -1
        call dksmrc(ndim, klim, sumkro, prime, vk, functn, x)
        fw_iserr__ = 0
      end subroutine dksmrc_c
      subroutine mvnphi_c(fw_ret_arg, z, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        real(kind=kind(0.0D0)) :: z
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: mvnphi
        external mvnphi
        fw_iserr__ = -1
        fw_ret_arg = mvnphi(z)
        fw_iserr__ = 0
      end subroutine mvnphi_c
      subroutine phinvs_c(fw_ret_arg, p, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        real(kind=kind(0.0D0)) :: p
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: phinvs
        external phinvs
        fw_iserr__ = -1
        fw_ret_arg = phinvs(p)
        fw_iserr__ = 0
      end subroutine phinvs_c
      subroutine bvnmvn_c(fw_ret_arg, lower_shape__, lower, upper_shape_
     &_, upper, infin_shape__, infin, correl, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        integer, dimension(1) :: lower_shape__
        real(kind=kind(0.0D0)), dimension(lower_shape__(1)) :: lower
        integer, dimension(1) :: upper_shape__
        real(kind=kind(0.0D0)), dimension(upper_shape__(1)) :: upper
        integer, dimension(1) :: infin_shape__
        integer, dimension(infin_shape__(1)) :: infin
        real(kind=kind(0.0D0)) :: correl
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: bvnmvn
        external bvnmvn
        fw_iserr__ = -1
        fw_ret_arg = bvnmvn(lower, upper, infin, correl)
        fw_iserr__ = 0
      end subroutine bvnmvn_c
      subroutine bvu_c(fw_ret_arg, sh, sk, r, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        real(kind=kind(0.0D0)) :: sh
        real(kind=kind(0.0D0)) :: sk
        real(kind=kind(0.0D0)) :: r
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: bvu
        external bvu
        fw_iserr__ = -1
        fw_ret_arg = bvu(sh, sk, r)
        fw_iserr__ = 0
      end subroutine bvu_c
      subroutine mvnuni_c(fw_ret_arg, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: mvnuni
        external mvnuni
        fw_iserr__ = -1
        fw_ret_arg = mvnuni()
        fw_iserr__ = 0
      end subroutine mvnuni_c
