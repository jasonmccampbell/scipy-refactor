      subroutine gehrd_c(min_lwork, max_lwork, prefix, n, lo, hi, fw_ise
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: n
        integer :: lo
        integer :: hi
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gehrd
        fw_iserr__ = -1
        call gehrd(min_lwork, max_lwork, prefix, n, lo, hi)
        fw_iserr__ = 0
      end subroutine gehrd_c
      subroutine gesdd_c(min_lwork, max_lwork, prefix, m, n, compute_uv,
     & fw_iserr__, fw_errstr__)
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: m
        integer :: n
        integer :: compute_uv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gesdd
        fw_iserr__ = -1
        call gesdd(min_lwork, max_lwork, prefix, m, n, compute_uv)
        fw_iserr__ = 0
      end subroutine gesdd_c
      subroutine gelss_c(min_lwork, max_lwork, prefix, m, n, nrhs, fw_is
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: m
        integer :: n
        integer :: nrhs
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gelss
        fw_iserr__ = -1
        call gelss(min_lwork, max_lwork, prefix, m, n, nrhs)
        fw_iserr__ = 0
      end subroutine gelss_c
      subroutine getri_c(min_lwork, max_lwork, prefix, n, fw_iserr__, fw
     &_errstr__)
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: n
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external getri
        fw_iserr__ = -1
        call getri(min_lwork, max_lwork, prefix, n)
        fw_iserr__ = 0
      end subroutine getri_c
      subroutine geev_c(min_lwork, max_lwork, prefix, n, compute_vl, com
     &pute_vr, fw_iserr__, fw_errstr__)
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: n
        integer :: compute_vl
        integer :: compute_vr
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external geev
        fw_iserr__ = -1
        call geev(min_lwork, max_lwork, prefix, n, compute_vl, compute_v
     &r)
        fw_iserr__ = 0
      end subroutine geev_c
      subroutine heev_c(min_lwork, max_lwork, prefix, n, lower, fw_iserr
     &__, fw_errstr__)
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: n
        integer :: lower
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external heev
        fw_iserr__ = -1
        call heev(min_lwork, max_lwork, prefix, n, lower)
        fw_iserr__ = 0
      end subroutine heev_c
      subroutine syev_c(min_lwork, max_lwork, prefix, n, lower, fw_iserr
     &__, fw_errstr__)
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: n
        integer :: lower
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external syev
        fw_iserr__ = -1
        call syev(min_lwork, max_lwork, prefix, n, lower)
        fw_iserr__ = 0
      end subroutine syev_c
      subroutine gees_c(min_lwork, max_lwork, prefix, n, compute_v, fw_i
     &serr__, fw_errstr__)
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: n
        integer :: compute_v
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gees
        fw_iserr__ = -1
        call gees(min_lwork, max_lwork, prefix, n, compute_v)
        fw_iserr__ = 0
      end subroutine gees_c
      subroutine geqrf_c(min_lwork, max_lwork, prefix, m, n, fw_iserr__,
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: m
        integer :: n
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external geqrf
        fw_iserr__ = -1
        call geqrf(min_lwork, max_lwork, prefix, m, n)
        fw_iserr__ = 0
      end subroutine geqrf_c
      subroutine gqr_c(min_lwork, max_lwork, prefix, m, n, fw_iserr__, f
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
        integer :: min_lwork
        integer :: max_lwork
        character(len=1, kind=kind('a')) :: prefix
        integer :: m
        integer :: n
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gqr
        fw_iserr__ = -1
        call gqr(min_lwork, max_lwork, prefix, m, n)
        fw_iserr__ = 0
      end subroutine gqr_c
