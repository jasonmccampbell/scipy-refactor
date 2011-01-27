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
