      subroutine ddet_c_c(det, a_shape__, a, n, piv_shape__, piv, info, 
     &fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: det
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: n
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ddet_c
        fw_iserr__ = -1
        if ((n) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ddet_c(det, a, n, piv, info)
        fw_iserr__ = 0
      end subroutine ddet_c_c
      subroutine ddet_r_c(det, a_shape__, a, n, piv_shape__, piv, info, 
     &fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: det
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: n
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ddet_r
        fw_iserr__ = -1
        if ((n) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ddet_r(det, a, n, piv, info)
        fw_iserr__ = 0
      end subroutine ddet_r_c
      subroutine sdet_c_c(det, a_shape__, a, n, piv_shape__, piv, info, 
     &fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: det
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: n
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sdet_c
        fw_iserr__ = -1
        if ((n) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sdet_c(det, a, n, piv, info)
        fw_iserr__ = 0
      end subroutine sdet_c_c
      subroutine sdet_r_c(det, a_shape__, a, n, piv_shape__, piv, info, 
     &fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: det
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: n
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sdet_r
        fw_iserr__ = -1
        if ((n) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sdet_r(det, a, n, piv, info)
        fw_iserr__ = 0
      end subroutine sdet_r_c
      subroutine zdet_c_c(det, a_shape__, a, n, piv_shape__, piv, info, 
     &fw_iserr__, fw_errstr__)
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
        complex*16 :: det
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: n
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zdet_c
        fw_iserr__ = -1
        if ((n) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zdet_c(det, a, n, piv, info)
        fw_iserr__ = 0
      end subroutine zdet_c_c
      subroutine zdet_r_c(det, a_shape__, a, n, piv_shape__, piv, info, 
     &fw_iserr__, fw_errstr__)
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
        complex*16 :: det
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: n
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zdet_r
        fw_iserr__ = -1
        if ((n) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zdet_r(det, a, n, piv, info)
        fw_iserr__ = 0
      end subroutine zdet_r_c
      subroutine cdet_c_c(det, a_shape__, a, n, piv_shape__, piv, info, 
     &fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: det
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: n
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cdet_c
        fw_iserr__ = -1
        if ((n) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cdet_c(det, a, n, piv, info)
        fw_iserr__ = 0
      end subroutine cdet_c_c
      subroutine cdet_r_c(det, a_shape__, a, n, piv_shape__, piv, info, 
     &fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: det
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: n
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cdet_r
        fw_iserr__ = -1
        if ((n) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cdet_r(det, a, n, piv, info)
        fw_iserr__ = 0
      end subroutine cdet_r_c
      subroutine dlu_c_c(p_shape__, p, l_shape__, l, u_shape__, u, a_sha
     &pe__, a, m, n, k, piv_shape__, piv, info, permute_l, m1, fw_iserr_
     &_, fw_errstr__)
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
        integer, dimension(2) :: p_shape__
        real(kind=kind(0.0D0)), dimension(p_shape__(1), p_shape__(2)) ::
     & p
        integer, dimension(2) :: l_shape__
        real(kind=kind(0.0D0)), dimension(l_shape__(1), l_shape__(2)) ::
     & l
        integer, dimension(2) :: u_shape__
        real(kind=kind(0.0D0)), dimension(u_shape__(1), u_shape__(2)) ::
     & u
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: m
        integer :: n
        integer :: k
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: permute_l
        integer :: m1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dlu_c
        fw_iserr__ = -1
        if ((m1) .ne. (p_shape__(1)) .or. (m1) .lt. 0 .or. (m1) .gt. (p_
     &shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("p                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((m) .ne. (l_shape__(1)) .or. (k) .lt. 0 .or. (k) .gt. (l_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("l                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((k) .ne. (u_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (u_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("u                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((m) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((k) .lt. 0 .or. (k) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dlu_c(p, l, u, a, m, n, k, piv, info, permute_l, m1)
        fw_iserr__ = 0
      end subroutine dlu_c_c
      subroutine zlu_c_c(p_shape__, p, l_shape__, l, u_shape__, u, a_sha
     &pe__, a, m, n, k, piv_shape__, piv, info, permute_l, m1, fw_iserr_
     &_, fw_errstr__)
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
        integer, dimension(2) :: p_shape__
        real(kind=kind(0.0D0)), dimension(p_shape__(1), p_shape__(2)) ::
     & p
        integer, dimension(2) :: l_shape__
        complex*16, dimension(l_shape__(1), l_shape__(2)) :: l
        integer, dimension(2) :: u_shape__
        complex*16, dimension(u_shape__(1), u_shape__(2)) :: u
        integer, dimension(2) :: a_shape__
        complex*16, dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: m
        integer :: n
        integer :: k
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: permute_l
        integer :: m1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zlu_c
        fw_iserr__ = -1
        if ((m1) .ne. (p_shape__(1)) .or. (m1) .lt. 0 .or. (m1) .gt. (p_
     &shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("p                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((m) .ne. (l_shape__(1)) .or. (k) .lt. 0 .or. (k) .gt. (l_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("l                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((k) .ne. (u_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (u_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("u                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((m) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((k) .lt. 0 .or. (k) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zlu_c(p, l, u, a, m, n, k, piv, info, permute_l, m1)
        fw_iserr__ = 0
      end subroutine zlu_c_c
      subroutine slu_c_c(p_shape__, p, l_shape__, l, u_shape__, u, a_sha
     &pe__, a, m, n, k, piv_shape__, piv, info, permute_l, m1, fw_iserr_
     &_, fw_errstr__)
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
        integer, dimension(2) :: p_shape__
        real(kind=kind(0.0)), dimension(p_shape__(1), p_shape__(2)) :: p
        integer, dimension(2) :: l_shape__
        real(kind=kind(0.0)), dimension(l_shape__(1), l_shape__(2)) :: l
        integer, dimension(2) :: u_shape__
        real(kind=kind(0.0)), dimension(u_shape__(1), u_shape__(2)) :: u
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: m
        integer :: n
        integer :: k
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: permute_l
        integer :: m1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external slu_c
        fw_iserr__ = -1
        if ((m1) .ne. (p_shape__(1)) .or. (m1) .lt. 0 .or. (m1) .gt. (p_
     &shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("p                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((m) .ne. (l_shape__(1)) .or. (k) .lt. 0 .or. (k) .gt. (l_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("l                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((k) .ne. (u_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (u_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("u                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((m) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((k) .lt. 0 .or. (k) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call slu_c(p, l, u, a, m, n, k, piv, info, permute_l, m1)
        fw_iserr__ = 0
      end subroutine slu_c_c
      subroutine clu_c_c(p_shape__, p, l_shape__, l, u_shape__, u, a_sha
     &pe__, a, m, n, k, piv_shape__, piv, info, permute_l, m1, fw_iserr_
     &_, fw_errstr__)
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
        integer, dimension(2) :: p_shape__
        real(kind=kind(0.0)), dimension(p_shape__(1), p_shape__(2)) :: p
        integer, dimension(2) :: l_shape__
        complex(kind=kind((0.0,0.0))), dimension(l_shape__(1), l_shape__
     &(2)) :: l
        integer, dimension(2) :: u_shape__
        complex(kind=kind((0.0,0.0))), dimension(u_shape__(1), u_shape__
     &(2)) :: u
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: m
        integer :: n
        integer :: k
        integer, dimension(1) :: piv_shape__
        integer, dimension(piv_shape__(1)) :: piv
        integer :: info
        integer :: permute_l
        integer :: m1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external clu_c
        fw_iserr__ = -1
        if ((m1) .ne. (p_shape__(1)) .or. (m1) .lt. 0 .or. (m1) .gt. (p_
     &shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("p                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((m) .ne. (l_shape__(1)) .or. (k) .lt. 0 .or. (k) .gt. (l_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("l                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((k) .ne. (u_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (u_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("u                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((m) .ne. (a_shape__(1)) .or. (n) .lt. 0 .or. (n) .gt. (a_sha
     &pe__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((k) .lt. 0 .or. (k) .gt. (piv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("piv                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call clu_c(p, l, u, a, m, n, k, piv, info, permute_l, m1)
        fw_iserr__ = 0
      end subroutine clu_c_c
