      subroutine wprob_c(test, other, astart, a1_shape__, a1, l1, a2_sha
     &pe__, a2, a3_shape__, a3, ifault, fw_iserr__, fw_errstr__)
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
        integer :: test
        integer :: other
        real(kind=kind(0.0)) :: astart
        integer, dimension(1) :: a1_shape__
        real(kind=kind(0.0)), dimension(a1_shape__(1)) :: a1
        integer :: l1
        integer, dimension(1) :: a2_shape__
        real(kind=kind(0.0)), dimension(a2_shape__(1)) :: a2
        integer, dimension(1) :: a3_shape__
        real(kind=kind(0.0)), dimension(a3_shape__(1)) :: a3
        integer :: ifault
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external wprob
        fw_iserr__ = -1
        if ((l1) .lt. 0 .or. (l1) .gt. (a1_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a1                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((l1) .lt. 0 .or. (l1) .gt. (a2_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a2                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((l1) .lt. 0 .or. (l1) .gt. (a3_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a3                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call wprob(test, other, astart, a1, l1, a2, a3, ifault)
        fw_iserr__ = 0
      end subroutine wprob_c
      subroutine gscale_c(test, other, astart, a1_shape__, a1, l1, a2_sh
     &ape__, a2, a3_shape__, a3, ifault, fw_iserr__, fw_errstr__)
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
        integer :: test
        integer :: other
        real(kind=kind(0.0)) :: astart
        integer, dimension(1) :: a1_shape__
        real(kind=kind(0.0)), dimension(a1_shape__(1)) :: a1
        integer :: l1
        integer, dimension(1) :: a2_shape__
        real(kind=kind(0.0)), dimension(a2_shape__(1)) :: a2
        integer, dimension(1) :: a3_shape__
        real(kind=kind(0.0)), dimension(a3_shape__(1)) :: a3
        integer :: ifault
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gscale
        fw_iserr__ = -1
        if ((l1) .lt. 0 .or. (l1) .gt. (a1_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a1                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((l1) .lt. 0 .or. (l1) .gt. (a2_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a2                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((l1) .lt. 0 .or. (l1) .gt. (a3_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a3                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call gscale(test, other, astart, a1, l1, a2, a3, ifault)
        fw_iserr__ = 0
      end subroutine gscale_c
      subroutine prho_c(fw_ret_arg, n, is, ifault, fw_iserr__, fw_errstr
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        integer :: n
        integer :: is
        integer :: ifault
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: prho
        external prho
        fw_iserr__ = -1
        fw_ret_arg = prho(n, is, ifault)
        fw_iserr__ = 0
      end subroutine prho_c
      subroutine swilk_c(init, x_shape__, x, n, n1, n2, a_shape__, a, w,
     & pw, ifault, fw_iserr__, fw_errstr__)
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
        integer(kind=kind(0)) :: init
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: n
        integer :: n1
        integer :: n2
        integer, dimension(1) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1)) :: a
        real(kind=kind(0.0)) :: w
        real(kind=kind(0.0)) :: pw
        integer :: ifault
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external swilk
        fw_iserr__ = -1
        call swilk(init, x, n, n1, n2, a, w, pw, ifault)
        fw_iserr__ = 0
      end subroutine swilk_c
