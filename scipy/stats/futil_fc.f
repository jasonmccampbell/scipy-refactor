      subroutine dqsort_c(n, arr_shape__, arr, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: arr_shape__
        real*8, dimension(arr_shape__(1)) :: arr
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dqsort
        fw_iserr__ = -1
        if ((n) .lt. 0 .or. (n) .gt. (arr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("arr                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dqsort(n, arr)
        fw_iserr__ = 0
      end subroutine dqsort_c
      subroutine dfreps_c(arr_shape__, arr, n, replist_shape__, replist,
     & repnum_shape__, repnum, nlist, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: arr_shape__
        real*8, dimension(arr_shape__(1)) :: arr
        integer :: n
        integer, dimension(1) :: replist_shape__
        real*8, dimension(replist_shape__(1)) :: replist
        integer, dimension(1) :: repnum_shape__
        integer, dimension(repnum_shape__(1)) :: repnum
        integer :: nlist
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dfreps
        fw_iserr__ = -1
        if ((n) .lt. 0 .or. (n) .gt. (arr_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("arr                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (replist_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("replist                             
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (repnum_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("repnum                              
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dfreps(arr, n, replist, repnum, nlist)
        fw_iserr__ = 0
      end subroutine dfreps_c
