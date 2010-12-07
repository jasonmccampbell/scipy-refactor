      subroutine caxpy_c(n, ca, cx_shape__, cx, incx, cy_shape__, cy, in
     &cy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: ca
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer, dimension(1) :: cy_shape__
        complex(kind=kind((0.0,0.0))), dimension(cy_shape__(1)) :: cy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external caxpy
        fw_iserr__ = -1
        call caxpy(n, ca, cx, incx, cy, incy)
        fw_iserr__ = 0
      end subroutine caxpy_c
      subroutine ccopy_c(n, cx_shape__, cx, incx, cy_shape__, cy, incy, 
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
        integer :: n
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer, dimension(1) :: cy_shape__
        complex(kind=kind((0.0,0.0))), dimension(cy_shape__(1)) :: cy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ccopy
        fw_iserr__ = -1
        call ccopy(n, cx, incx, cy, incy)
        fw_iserr__ = 0
      end subroutine ccopy_c
      subroutine cdotc_c(fw_ret_arg, n, cx_shape__, cx, incx, cy_shape__
     &, cy, incy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer, dimension(1) :: cy_shape__
        complex(kind=kind((0.0,0.0))), dimension(cy_shape__(1)) :: cy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        complex(kind=kind((0.0,0.0))) :: cdotc
        external cdotc
        fw_iserr__ = -1
        fw_ret_arg = cdotc(n, cx, incx, cy, incy)
        fw_iserr__ = 0
      end subroutine cdotc_c
      subroutine cdotu_c(fw_ret_arg, n, cx_shape__, cx, incx, cy_shape__
     &, cy, incy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer, dimension(1) :: cy_shape__
        complex(kind=kind((0.0,0.0))), dimension(cy_shape__(1)) :: cy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        complex(kind=kind((0.0,0.0))) :: cdotu
        external cdotu
        fw_iserr__ = -1
        fw_ret_arg = cdotu(n, cx, incx, cy, incy)
        fw_iserr__ = 0
      end subroutine cdotu_c
      subroutine cgbmv_c(trans, m, n, kl, ku, alpha, a_shape__, a, lda, 
     &x_shape__, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errst
     &r__)
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
        integer :: m
        integer :: n
        integer :: kl
        integer :: ku
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgbmv(trans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y,
     & incy)
        fw_iserr__ = 0
      end subroutine cgbmv_c
      subroutine cgemm_c(transa, transb, m, n, k, alpha, a_shape__, a, l
     &da, b_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_err
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
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: transb
        integer :: m
        integer :: n
        integer :: k
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0,0.0))), dimension(c_shape__(1), c_shape__
     &(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgemm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgemm(transa, transb, m, n, k, alpha, a, lda, b, ldb, beta,
     & c, ldc)
        fw_iserr__ = 0
      end subroutine cgemm_c
      subroutine cgemv_c(trans, m, n, alpha, a_shape__, a, lda, x_shape_
     &_, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        integer :: m
        integer :: n
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgemv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgemv(trans, m, n, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine cgemv_c
      subroutine cgerc_c(m, n, alpha, x_shape__, x, incx, y_shape__, y, 
     &incy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgerc
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgerc(m, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine cgerc_c
      subroutine cgeru_c(m, n, alpha, x_shape__, x, incx, y_shape__, y, 
     &incy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgeru
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cgeru(m, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine cgeru_c
      subroutine chbmv_c(uplo, n, k, alpha, a_shape__, a, lda, x_shape__
     &, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        integer :: k
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call chbmv(uplo, n, k, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine chbmv_c
      subroutine chemm_c(side, uplo, m, n, alpha, a_shape__, a, lda, b_s
     &hape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        integer :: m
        integer :: n
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0,0.0))), dimension(c_shape__(1), c_shape__
     &(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chemm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call chemm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc
     &)
        fw_iserr__ = 0
      end subroutine chemm_c
      subroutine chemv_c(uplo, n, alpha, a_shape__, a, lda, x_shape__, x
     &, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chemv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call chemv(uplo, n, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine chemv_c
      subroutine cher_c(uplo, n, alpha, x_shape__, x, incx, a_shape__, a
     &, lda, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cher
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cher(uplo, n, alpha, x, incx, a, lda)
        fw_iserr__ = 0
      end subroutine cher_c
      subroutine cher2_c(uplo, n, alpha, x_shape__, x, incx, y_shape__, 
     &y, incy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cher2
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cher2(uplo, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine cher2_c
      subroutine cher2k_c(uplo, trans, n, k, alpha, a_shape__, a, lda, b
     &_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__
     &)
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
        integer :: n
        integer :: k
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        real(kind=kind(0.0)) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0,0.0))), dimension(c_shape__(1), c_shape__
     &(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cher2k
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cher2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, l
     &dc)
        fw_iserr__ = 0
      end subroutine cher2k_c
      subroutine cherk_c(uplo, trans, n, k, alpha, a_shape__, a, lda, be
     &ta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        integer :: n
        integer :: k
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        real(kind=kind(0.0)) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0,0.0))), dimension(c_shape__(1), c_shape__
     &(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cherk
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cherk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc)
        fw_iserr__ = 0
      end subroutine cherk_c
      subroutine chpmv_c(uplo, n, alpha, ap_shape__, ap, x_shape__, x, i
     &ncx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0,0.0))), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chpmv
        fw_iserr__ = -1
        call chpmv(uplo, n, alpha, ap, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine chpmv_c
      subroutine chpr_c(uplo, n, alpha, x_shape__, x, incx, ap_shape__, 
     &ap, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0,0.0))), dimension(ap_shape__(1)) :: ap
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chpr
        fw_iserr__ = -1
        call chpr(uplo, n, alpha, x, incx, ap)
        fw_iserr__ = 0
      end subroutine chpr_c
      subroutine chpr2_c(uplo, n, alpha, x_shape__, x, incx, y_shape__, 
     &y, incy, ap_shape__, ap, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0,0.0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0,0.0))), dimension(ap_shape__(1)) :: ap
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chpr2
        fw_iserr__ = -1
        call chpr2(uplo, n, alpha, x, incx, y, incy, ap)
        fw_iserr__ = 0
      end subroutine chpr2_c
      subroutine crotg_c(ca, cb, c, s, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0,0.0))) :: ca
        complex(kind=kind((0.0,0.0))) :: cb
        real(kind=kind(0.0)) :: c
        complex(kind=kind((0.0,0.0))) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external crotg
        fw_iserr__ = -1
        call crotg(ca, cb, c, s)
        fw_iserr__ = 0
      end subroutine crotg_c
      subroutine cscal_c(n, ca, cx_shape__, cx, incx, fw_iserr__, fw_err
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
        integer :: n
        complex(kind=kind((0.0,0.0))) :: ca
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cscal
        fw_iserr__ = -1
        call cscal(n, ca, cx, incx)
        fw_iserr__ = 0
      end subroutine cscal_c
      subroutine csrot_c(n, cx_shape__, cx, incx, cy_shape__, cy, incy, 
     &c, s, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer, dimension(1) :: cy_shape__
        complex(kind=kind((0.0,0.0))), dimension(cy_shape__(1)) :: cy
        integer :: incy
        real(kind=kind(0.0)) :: c
        real(kind=kind(0.0)) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external csrot
        fw_iserr__ = -1
        call csrot(n, cx, incx, cy, incy, c, s)
        fw_iserr__ = 0
      end subroutine csrot_c
      subroutine csscal_c(n, sa, cx_shape__, cx, incx, fw_iserr__, fw_er
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
        integer :: n
        real(kind=kind(0.0)) :: sa
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external csscal
        fw_iserr__ = -1
        call csscal(n, sa, cx, incx)
        fw_iserr__ = 0
      end subroutine csscal_c
      subroutine cswap_c(n, cx_shape__, cx, incx, cy_shape__, cy, incy, 
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
        integer :: n
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer, dimension(1) :: cy_shape__
        complex(kind=kind((0.0,0.0))), dimension(cy_shape__(1)) :: cy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cswap
        fw_iserr__ = -1
        call cswap(n, cx, incx, cy, incy)
        fw_iserr__ = 0
      end subroutine cswap_c
      subroutine csymm_c(side, uplo, m, n, alpha, a_shape__, a, lda, b_s
     &hape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        integer :: m
        integer :: n
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0,0.0))), dimension(c_shape__(1), c_shape__
     &(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external csymm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call csymm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc
     &)
        fw_iserr__ = 0
      end subroutine csymm_c
      subroutine csyr2k_c(uplo, trans, n, k, alpha, a_shape__, a, lda, b
     &_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__
     &)
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
        integer :: n
        integer :: k
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0,0.0))), dimension(c_shape__(1), c_shape__
     &(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external csyr2k
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call csyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, l
     &dc)
        fw_iserr__ = 0
      end subroutine csyr2k_c
      subroutine csyrk_c(uplo, trans, n, k, alpha, a_shape__, a, lda, be
     &ta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        integer :: n
        integer :: k
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        complex(kind=kind((0.0,0.0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0,0.0))), dimension(c_shape__(1), c_shape__
     &(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external csyrk
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call csyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc)
        fw_iserr__ = 0
      end subroutine csyrk_c
      subroutine ctbmv_c(uplo, trans, diag, n, k, a_shape__, a, lda, x_s
     &hape__, x, incx, fw_iserr__, fw_errstr__)
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
        integer :: k
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ctbmv(uplo, trans, diag, n, k, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine ctbmv_c
      subroutine ctbsv_c(uplo, trans, diag, n, k, a_shape__, a, lda, x_s
     &hape__, x, incx, fw_iserr__, fw_errstr__)
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
        integer :: k
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctbsv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ctbsv(uplo, trans, diag, n, k, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine ctbsv_c
      subroutine ctpmv_c(uplo, trans, diag, n, ap_shape__, ap, x_shape__
     &, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0,0.0))), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctpmv
        fw_iserr__ = -1
        call ctpmv(uplo, trans, diag, n, ap, x, incx)
        fw_iserr__ = 0
      end subroutine ctpmv_c
      subroutine ctpsv_c(uplo, trans, diag, n, ap_shape__, ap, x_shape__
     &, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0,0.0))), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctpsv
        fw_iserr__ = -1
        call ctpsv(uplo, trans, diag, n, ap, x, incx)
        fw_iserr__ = 0
      end subroutine ctpsv_c
      subroutine ctrmm_c(side, uplo, transa, diag, m, n, alpha, a_shape_
     &_, a, lda, b_shape__, b, ldb, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: diag
        integer :: m
        integer :: n
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctrmm
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
        call ctrmm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb
     &)
        fw_iserr__ = 0
      end subroutine ctrmm_c
      subroutine ctrmv_c(uplo, trans, diag, n, a_shape__, a, lda, x_shap
     &e__, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctrmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ctrmv(uplo, trans, diag, n, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine ctrmv_c
      subroutine ctrsm_c(side, uplo, transa, diag, m, n, alpha, a_shape_
     &_, a, lda, b_shape__, b, ldb, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: diag
        integer :: m
        integer :: n
        complex(kind=kind((0.0,0.0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0,0.0))), dimension(b_shape__(1), b_shape__
     &(2)) :: b
        integer :: ldb
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctrsm
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
        call ctrsm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb
     &)
        fw_iserr__ = 0
      end subroutine ctrsm_c
      subroutine ctrsv_c(uplo, trans, diag, n, a_shape__, a, lda, x_shap
     &e__, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0,0.0))), dimension(a_shape__(1), a_shape__
     &(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ctrsv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ctrsv(uplo, trans, diag, n, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine ctrsv_c
      subroutine dasum_c(fw_ret_arg, n, dx_shape__, dx, incx, fw_iserr__
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: dasum
        external dasum
        fw_iserr__ = -1
        fw_ret_arg = dasum(n, dx, incx)
        fw_iserr__ = 0
      end subroutine dasum_c
      subroutine daxpy_c(n, da, dx_shape__, dx, incx, dy_shape__, dy, in
     &cy, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: da
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external daxpy
        fw_iserr__ = -1
        call daxpy(n, da, dx, incx, dy, incy)
        fw_iserr__ = 0
      end subroutine daxpy_c
      subroutine dcabs1_c(fw_ret_arg, z, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: z
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: dcabs1
        external dcabs1
        fw_iserr__ = -1
        fw_ret_arg = dcabs1(z)
        fw_iserr__ = 0
      end subroutine dcabs1_c
      subroutine dcopy_c(n, dx_shape__, dx, incx, dy_shape__, dy, incy, 
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
        integer :: n
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dcopy
        fw_iserr__ = -1
        call dcopy(n, dx, incx, dy, incy)
        fw_iserr__ = 0
      end subroutine dcopy_c
      subroutine ddot_c(fw_ret_arg, n, dx_shape__, dx, incx, dy_shape__,
     & dy, incy, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: ddot
        external ddot
        fw_iserr__ = -1
        fw_ret_arg = ddot(n, dx, incx, dy, incy)
        fw_iserr__ = 0
      end subroutine ddot_c
      subroutine dgbmv_c(trans, m, n, kl, ku, alpha, a_shape__, a, lda, 
     &x_shape__, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errst
     &r__)
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
        integer :: m
        integer :: n
        integer :: kl
        integer :: ku
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgbmv(trans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y,
     & incy)
        fw_iserr__ = 0
      end subroutine dgbmv_c
      subroutine dgemm_c(transa, transb, m, n, k, alpha, a_shape__, a, l
     &da, b_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_err
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
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: transb
        integer :: m
        integer :: n
        integer :: k
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(2) :: c_shape__
        real(kind=kind(0.0D0)), dimension(c_shape__(1), c_shape__(2)) ::
     & c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgemm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgemm(transa, transb, m, n, k, alpha, a, lda, b, ldb, beta,
     & c, ldc)
        fw_iserr__ = 0
      end subroutine dgemm_c
      subroutine dgemv_c(trans, m, n, alpha, a_shape__, a, lda, x_shape_
     &_, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dgemv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dgemv(trans, m, n, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine dgemv_c
      subroutine dger_c(m, n, alpha, x_shape__, x, incx, y_shape__, y, i
     &ncy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dger
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dger(m, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine dger_c
      subroutine dnrm2_c(fw_ret_arg, n, x_shape__, x, incx, fw_iserr__, 
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: dnrm2
        external dnrm2
        fw_iserr__ = -1
        fw_ret_arg = dnrm2(n, x, incx)
        fw_iserr__ = 0
      end subroutine dnrm2_c
      subroutine drot_c(n, dx_shape__, dx, incx, dy_shape__, dy, incy, c
     &, s, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: incy
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external drot
        fw_iserr__ = -1
        call drot(n, dx, incx, dy, incy, c, s)
        fw_iserr__ = 0
      end subroutine drot_c
      subroutine drotg_c(da, db, c, s, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: da
        real(kind=kind(0.0D0)) :: db
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external drotg
        fw_iserr__ = -1
        call drotg(da, db, c, s)
        fw_iserr__ = 0
      end subroutine drotg_c
      subroutine drotm_c(n, dx_shape__, dx, incx, dy_shape__, dy, incy, 
     &dparam_shape__, dparam, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: incy
        integer, dimension(1) :: dparam_shape__
        real(kind=kind(0.0D0)), dimension(dparam_shape__(1)) :: dparam
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external drotm
        fw_iserr__ = -1
        if ((1) .lt. 0 .or. (1) .gt. (dx_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dx                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((1) .lt. 0 .or. (1) .gt. (dy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((5) .lt. 0 .or. (5) .gt. (dparam_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dparam                              
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call drotm(n, dx, incx, dy, incy, dparam)
        fw_iserr__ = 0
      end subroutine drotm_c
      subroutine drotmg_c(dd1, dd2, dx1, dy1, dparam_shape__, dparam, fw
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
        real(kind=kind(0.0D0)) :: dd1
        real(kind=kind(0.0D0)) :: dd2
        real(kind=kind(0.0D0)) :: dx1
        real(kind=kind(0.0D0)) :: dy1
        integer, dimension(1) :: dparam_shape__
        real(kind=kind(0.0D0)), dimension(dparam_shape__(1)) :: dparam
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external drotmg
        fw_iserr__ = -1
        if ((5) .lt. 0 .or. (5) .gt. (dparam_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dparam                              
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call drotmg(dd1, dd2, dx1, dy1, dparam)
        fw_iserr__ = 0
      end subroutine drotmg_c
      subroutine dsbmv_c(uplo, n, k, alpha, a_shape__, a, lda, x_shape__
     &, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        integer :: k
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsbmv(uplo, n, k, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine dsbmv_c
      subroutine dscal_c(n, da, dx_shape__, dx, incx, fw_iserr__, fw_err
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
        integer :: n
        real(kind=kind(0.0D0)) :: da
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dscal
        fw_iserr__ = -1
        call dscal(n, da, dx, incx)
        fw_iserr__ = 0
      end subroutine dscal_c
      subroutine dsdot_c(fw_ret_arg, n, sx_shape__, sx, incx, sy_shape__
     &, sy, incy, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0)), dimension(sy_shape__(1)) :: sy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: dsdot
        external dsdot
        fw_iserr__ = -1
        fw_ret_arg = dsdot(n, sx, incx, sy, incy)
        fw_iserr__ = 0
      end subroutine dsdot_c
      subroutine dspmv_c(uplo, n, alpha, ap_shape__, ap, x_shape__, x, i
     &ncx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0D0)), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dspmv
        fw_iserr__ = -1
        call dspmv(uplo, n, alpha, ap, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine dspmv_c
      subroutine dspr_c(uplo, n, alpha, x_shape__, x, incx, ap_shape__, 
     &ap, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0D0)), dimension(ap_shape__(1)) :: ap
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dspr
        fw_iserr__ = -1
        call dspr(uplo, n, alpha, x, incx, ap)
        fw_iserr__ = 0
      end subroutine dspr_c
      subroutine dspr2_c(uplo, n, alpha, x_shape__, x, incx, y_shape__, 
     &y, incy, ap_shape__, ap, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0D0)), dimension(ap_shape__(1)) :: ap
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dspr2
        fw_iserr__ = -1
        call dspr2(uplo, n, alpha, x, incx, y, incy, ap)
        fw_iserr__ = 0
      end subroutine dspr2_c
      subroutine dswap_c(n, dx_shape__, dx, incx, dy_shape__, dy, incy, 
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
        integer :: n
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dswap
        fw_iserr__ = -1
        call dswap(n, dx, incx, dy, incy)
        fw_iserr__ = 0
      end subroutine dswap_c
      subroutine dsymm_c(side, uplo, m, n, alpha, a_shape__, a, lda, b_s
     &hape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(2) :: c_shape__
        real(kind=kind(0.0D0)), dimension(c_shape__(1), c_shape__(2)) ::
     & c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsymm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsymm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc
     &)
        fw_iserr__ = 0
      end subroutine dsymm_c
      subroutine dsymv_c(uplo, n, alpha, a_shape__, a, lda, x_shape__, x
     &, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsymv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsymv(uplo, n, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine dsymv_c
      subroutine dsyr_c(uplo, n, alpha, x_shape__, x, incx, a_shape__, a
     &, lda, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsyr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsyr(uplo, n, alpha, x, incx, a, lda)
        fw_iserr__ = 0
      end subroutine dsyr_c
      subroutine dsyr2_c(uplo, n, alpha, x_shape__, x, incx, y_shape__, 
     &y, incy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0D0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsyr2
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsyr2(uplo, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine dsyr2_c
      subroutine dsyr2k_c(uplo, trans, n, k, alpha, a_shape__, a, lda, b
     &_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__
     &)
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
        integer :: n
        integer :: k
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(2) :: c_shape__
        real(kind=kind(0.0D0)), dimension(c_shape__(1), c_shape__(2)) ::
     & c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsyr2k
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, l
     &dc)
        fw_iserr__ = 0
      end subroutine dsyr2k_c
      subroutine dsyrk_c(uplo, trans, n, k, alpha, a_shape__, a, lda, be
     &ta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        integer :: n
        integer :: k
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(2) :: c_shape__
        real(kind=kind(0.0D0)), dimension(c_shape__(1), c_shape__(2)) ::
     & c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dsyrk
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dsyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc)
        fw_iserr__ = 0
      end subroutine dsyrk_c
      subroutine dtbmv_c(uplo, trans, diag, n, k, a_shape__, a, lda, x_s
     &hape__, x, incx, fw_iserr__, fw_errstr__)
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
        integer :: k
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dtbmv(uplo, trans, diag, n, k, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine dtbmv_c
      subroutine dtbsv_c(uplo, trans, diag, n, k, a_shape__, a, lda, x_s
     &hape__, x, incx, fw_iserr__, fw_errstr__)
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
        integer :: k
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtbsv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dtbsv(uplo, trans, diag, n, k, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine dtbsv_c
      subroutine dtpmv_c(uplo, trans, diag, n, ap_shape__, ap, x_shape__
     &, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0D0)), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtpmv
        fw_iserr__ = -1
        call dtpmv(uplo, trans, diag, n, ap, x, incx)
        fw_iserr__ = 0
      end subroutine dtpmv_c
      subroutine dtpsv_c(uplo, trans, diag, n, ap_shape__, ap, x_shape__
     &, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0D0)), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtpsv
        fw_iserr__ = -1
        call dtpsv(uplo, trans, diag, n, ap, x, incx)
        fw_iserr__ = 0
      end subroutine dtpsv_c
      subroutine dtrmm_c(side, uplo, transa, diag, m, n, alpha, a_shape_
     &_, a, lda, b_shape__, b, ldb, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: diag
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtrmm
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
        call dtrmm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb
     &)
        fw_iserr__ = 0
      end subroutine dtrmm_c
      subroutine dtrmv_c(uplo, trans, diag, n, a_shape__, a, lda, x_shap
     &e__, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtrmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dtrmv(uplo, trans, diag, n, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine dtrmv_c
      subroutine dtrsm_c(side, uplo, transa, diag, m, n, alpha, a_shape_
     &_, a, lda, b_shape__, b, ldb, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: diag
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0D0)), dimension(b_shape__(1), b_shape__(2)) ::
     & b
        integer :: ldb
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtrsm
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
        call dtrsm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb
     &)
        fw_iserr__ = 0
      end subroutine dtrsm_c
      subroutine dtrsv_c(uplo, trans, diag, n, a_shape__, a, lda, x_shap
     &e__, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1), a_shape__(2)) ::
     & a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dtrsv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call dtrsv(uplo, trans, diag, n, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine dtrsv_c
      subroutine dzasum_c(fw_ret_arg, n, zx_shape__, zx, incx, fw_iserr_
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: dzasum
        external dzasum
        fw_iserr__ = -1
        fw_ret_arg = dzasum(n, zx, incx)
        fw_iserr__ = 0
      end subroutine dzasum_c
      subroutine dznrm2_c(fw_ret_arg, n, x_shape__, x, incx, fw_iserr__,
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
        real(kind=kind(0.0D0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0D0)) :: dznrm2
        external dznrm2
        fw_iserr__ = -1
        fw_ret_arg = dznrm2(n, x, incx)
        fw_iserr__ = 0
      end subroutine dznrm2_c
      subroutine icamax_c(fw_ret_arg, n, cx_shape__, cx, incx, fw_iserr_
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
        integer :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        integer :: icamax
        external icamax
        fw_iserr__ = -1
        fw_ret_arg = icamax(n, cx, incx)
        fw_iserr__ = 0
      end subroutine icamax_c
      subroutine idamax_c(fw_ret_arg, n, dx_shape__, dx, incx, fw_iserr_
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
        integer :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: dx_shape__
        real(kind=kind(0.0D0)), dimension(dx_shape__(1)) :: dx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        integer :: idamax
        external idamax
        fw_iserr__ = -1
        fw_ret_arg = idamax(n, dx, incx)
        fw_iserr__ = 0
      end subroutine idamax_c
      subroutine isamax_c(fw_ret_arg, n, sx_shape__, sx, incx, fw_iserr_
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
        integer :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        integer :: isamax
        external isamax
        fw_iserr__ = -1
        fw_ret_arg = isamax(n, sx, incx)
        fw_iserr__ = 0
      end subroutine isamax_c
      subroutine izamax_c(fw_ret_arg, n, zx_shape__, zx, incx, fw_iserr_
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
        integer :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        integer :: izamax
        external izamax
        fw_iserr__ = -1
        fw_ret_arg = izamax(n, zx, incx)
        fw_iserr__ = 0
      end subroutine izamax_c
      subroutine sasum_c(fw_ret_arg, n, sx_shape__, sx, incx, fw_iserr__
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
        real(kind=kind(0.0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0)) :: sasum
        external sasum
        fw_iserr__ = -1
        fw_ret_arg = sasum(n, sx, incx)
        fw_iserr__ = 0
      end subroutine sasum_c
      subroutine saxpy_c(n, sa, sx_shape__, sx, incx, sy_shape__, sy, in
     &cy, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: sa
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0)), dimension(sy_shape__(1)) :: sy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external saxpy
        fw_iserr__ = -1
        call saxpy(n, sa, sx, incx, sy, incy)
        fw_iserr__ = 0
      end subroutine saxpy_c
      subroutine scabs1_c(fw_ret_arg, z, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: fw_ret_arg
        complex(kind=kind((0.0,0.0))) :: z
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0)) :: scabs1
        external scabs1
        fw_iserr__ = -1
        fw_ret_arg = scabs1(z)
        fw_iserr__ = 0
      end subroutine scabs1_c
      subroutine scasum_c(fw_ret_arg, n, cx_shape__, cx, incx, fw_iserr_
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
        real(kind=kind(0.0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: cx_shape__
        complex(kind=kind((0.0,0.0))), dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0)) :: scasum
        external scasum
        fw_iserr__ = -1
        fw_ret_arg = scasum(n, cx, incx)
        fw_iserr__ = 0
      end subroutine scasum_c
      subroutine scnrm2_c(fw_ret_arg, n, x_shape__, x, incx, fw_iserr__,
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
        real(kind=kind(0.0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0,0.0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0)) :: scnrm2
        external scnrm2
        fw_iserr__ = -1
        fw_ret_arg = scnrm2(n, x, incx)
        fw_iserr__ = 0
      end subroutine scnrm2_c
      subroutine scopy_c(n, sx_shape__, sx, incx, sy_shape__, sy, incy, 
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
        integer :: n
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0)), dimension(sy_shape__(1)) :: sy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external scopy
        fw_iserr__ = -1
        call scopy(n, sx, incx, sy, incy)
        fw_iserr__ = 0
      end subroutine scopy_c
      subroutine sdot_c(fw_ret_arg, n, sx_shape__, sx, incx, sy_shape__,
     & sy, incy, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0)), dimension(sy_shape__(1)) :: sy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0)) :: sdot
        external sdot
        fw_iserr__ = -1
        fw_ret_arg = sdot(n, sx, incx, sy, incy)
        fw_iserr__ = 0
      end subroutine sdot_c
      subroutine sdsdot_c(fw_ret_arg, n, sb, sx_shape__, sx, incx, sy_sh
     &ape__, sy, incy, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: fw_ret_arg
        integer :: n
        real(kind=kind(0.0)) :: sb
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0)), dimension(sy_shape__(1)) :: sy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0)) :: sdsdot
        external sdsdot
        fw_iserr__ = -1
        fw_ret_arg = sdsdot(n, sb, sx, incx, sy, incy)
        fw_iserr__ = 0
      end subroutine sdsdot_c
      subroutine sgbmv_c(trans, m, n, kl, ku, alpha, a_shape__, a, lda, 
     &x_shape__, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errst
     &r__)
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
        integer :: m
        integer :: n
        integer :: kl
        integer :: ku
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgbmv(trans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y,
     & incy)
        fw_iserr__ = 0
      end subroutine sgbmv_c
      subroutine sgemm_c(transa, transb, m, n, k, alpha, a_shape__, a, l
     &da, b_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_err
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
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: transb
        integer :: m
        integer :: n
        integer :: k
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        real(kind=kind(0.0)) :: beta
        integer, dimension(2) :: c_shape__
        real(kind=kind(0.0)), dimension(c_shape__(1), c_shape__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgemm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgemm(transa, transb, m, n, k, alpha, a, lda, b, ldb, beta,
     & c, ldc)
        fw_iserr__ = 0
      end subroutine sgemm_c
      subroutine sgemv_c(trans, m, n, alpha, a_shape__, a, lda, x_shape_
     &_, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        integer :: m
        integer :: n
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sgemv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sgemv(trans, m, n, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine sgemv_c
      subroutine sger_c(m, n, alpha, x_shape__, x, incx, y_shape__, y, i
     &ncy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sger
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sger(m, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine sger_c
      subroutine snrm2_c(fw_ret_arg, n, x_shape__, x, incx, fw_iserr__, 
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
        real(kind=kind(0.0)) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        real(kind=kind(0.0)) :: snrm2
        external snrm2
        fw_iserr__ = -1
        fw_ret_arg = snrm2(n, x, incx)
        fw_iserr__ = 0
      end subroutine snrm2_c
      subroutine srot_c(n, sx_shape__, sx, incx, sy_shape__, sy, incy, c
     &, s, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0)), dimension(sy_shape__(1)) :: sy
        integer :: incy
        real(kind=kind(0.0)) :: c
        real(kind=kind(0.0)) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external srot
        fw_iserr__ = -1
        call srot(n, sx, incx, sy, incy, c, s)
        fw_iserr__ = 0
      end subroutine srot_c
      subroutine srotg_c(sa, sb, c, s, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: sa
        real(kind=kind(0.0)) :: sb
        real(kind=kind(0.0)) :: c
        real(kind=kind(0.0)) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external srotg
        fw_iserr__ = -1
        call srotg(sa, sb, c, s)
        fw_iserr__ = 0
      end subroutine srotg_c
      subroutine srotm_c(n, sx_shape__, sx, incx, sy_shape__, sy, incy, 
     &sparam_shape__, sparam, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0)), dimension(sy_shape__(1)) :: sy
        integer :: incy
        integer, dimension(1) :: sparam_shape__
        real(kind=kind(0.0)), dimension(sparam_shape__(1)) :: sparam
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external srotm
        fw_iserr__ = -1
        if ((1) .lt. 0 .or. (1) .gt. (sx_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sx                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((1) .lt. 0 .or. (1) .gt. (sy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((5) .lt. 0 .or. (5) .gt. (sparam_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sparam                              
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call srotm(n, sx, incx, sy, incy, sparam)
        fw_iserr__ = 0
      end subroutine srotm_c
      subroutine srotmg_c(sd1, sd2, sx1, sy1, sparam_shape__, sparam, fw
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
        real(kind=kind(0.0)) :: sd1
        real(kind=kind(0.0)) :: sd2
        real(kind=kind(0.0)) :: sx1
        real(kind=kind(0.0)) :: sy1
        integer, dimension(1) :: sparam_shape__
        real(kind=kind(0.0)), dimension(sparam_shape__(1)) :: sparam
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external srotmg
        fw_iserr__ = -1
        if ((5) .lt. 0 .or. (5) .gt. (sparam_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sparam                              
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call srotmg(sd1, sd2, sx1, sy1, sparam)
        fw_iserr__ = 0
      end subroutine srotmg_c
      subroutine ssbmv_c(uplo, n, k, alpha, a_shape__, a, lda, x_shape__
     &, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        integer :: k
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssbmv(uplo, n, k, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine ssbmv_c
      subroutine sscal_c(n, sa, sx_shape__, sx, incx, fw_iserr__, fw_err
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
        integer :: n
        real(kind=kind(0.0)) :: sa
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sscal
        fw_iserr__ = -1
        call sscal(n, sa, sx, incx)
        fw_iserr__ = 0
      end subroutine sscal_c
      subroutine sspmv_c(uplo, n, alpha, ap_shape__, ap, x_shape__, x, i
     &ncx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0)), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sspmv
        fw_iserr__ = -1
        call sspmv(uplo, n, alpha, ap, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine sspmv_c
      subroutine sspr_c(uplo, n, alpha, x_shape__, x, incx, ap_shape__, 
     &ap, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0)), dimension(ap_shape__(1)) :: ap
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sspr
        fw_iserr__ = -1
        call sspr(uplo, n, alpha, x, incx, ap)
        fw_iserr__ = 0
      end subroutine sspr_c
      subroutine sspr2_c(uplo, n, alpha, x_shape__, x, incx, y_shape__, 
     &y, incy, ap_shape__, ap, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0)), dimension(ap_shape__(1)) :: ap
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sspr2
        fw_iserr__ = -1
        call sspr2(uplo, n, alpha, x, incx, y, incy, ap)
        fw_iserr__ = 0
      end subroutine sspr2_c
      subroutine sswap_c(n, sx_shape__, sx, incx, sy_shape__, sy, incy, 
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
        integer :: n
        integer, dimension(1) :: sx_shape__
        real(kind=kind(0.0)), dimension(sx_shape__(1)) :: sx
        integer :: incx
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0)), dimension(sy_shape__(1)) :: sy
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sswap
        fw_iserr__ = -1
        call sswap(n, sx, incx, sy, incy)
        fw_iserr__ = 0
      end subroutine sswap_c
      subroutine ssymm_c(side, uplo, m, n, alpha, a_shape__, a, lda, b_s
     &hape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        integer :: m
        integer :: n
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        real(kind=kind(0.0)) :: beta
        integer, dimension(2) :: c_shape__
        real(kind=kind(0.0)), dimension(c_shape__(1), c_shape__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssymm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssymm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc
     &)
        fw_iserr__ = 0
      end subroutine ssymm_c
      subroutine ssymv_c(uplo, n, alpha, a_shape__, a, lda, x_shape__, x
     &, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        real(kind=kind(0.0)) :: beta
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssymv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssymv(uplo, n, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine ssymv_c
      subroutine ssyr_c(uplo, n, alpha, x_shape__, x, incx, a_shape__, a
     &, lda, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssyr
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssyr(uplo, n, alpha, x, incx, a, lda)
        fw_iserr__ = 0
      end subroutine ssyr_c
      subroutine ssyr2_c(uplo, n, alpha, x_shape__, x, incx, y_shape__, 
     &y, incy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0)) :: alpha
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        real(kind=kind(0.0)), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssyr2
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssyr2(uplo, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine ssyr2_c
      subroutine ssyr2k_c(uplo, trans, n, k, alpha, a_shape__, a, lda, b
     &_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__
     &)
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
        integer :: n
        integer :: k
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        real(kind=kind(0.0)) :: beta
        integer, dimension(2) :: c_shape__
        real(kind=kind(0.0)), dimension(c_shape__(1), c_shape__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssyr2k
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, l
     &dc)
        fw_iserr__ = 0
      end subroutine ssyr2k_c
      subroutine ssyrk_c(uplo, trans, n, k, alpha, a_shape__, a, lda, be
     &ta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        integer :: n
        integer :: k
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        real(kind=kind(0.0)) :: beta
        integer, dimension(2) :: c_shape__
        real(kind=kind(0.0)), dimension(c_shape__(1), c_shape__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ssyrk
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ssyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc)
        fw_iserr__ = 0
      end subroutine ssyrk_c
      subroutine stbmv_c(uplo, trans, diag, n, k, a_shape__, a, lda, x_s
     &hape__, x, incx, fw_iserr__, fw_errstr__)
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
        integer :: k
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call stbmv(uplo, trans, diag, n, k, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine stbmv_c
      subroutine stbsv_c(uplo, trans, diag, n, k, a_shape__, a, lda, x_s
     &hape__, x, incx, fw_iserr__, fw_errstr__)
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
        integer :: k
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stbsv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call stbsv(uplo, trans, diag, n, k, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine stbsv_c
      subroutine stpmv_c(uplo, trans, diag, n, ap_shape__, ap, x_shape__
     &, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0)), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stpmv
        fw_iserr__ = -1
        call stpmv(uplo, trans, diag, n, ap, x, incx)
        fw_iserr__ = 0
      end subroutine stpmv_c
      subroutine stpsv_c(uplo, trans, diag, n, ap_shape__, ap, x_shape__
     &, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: ap_shape__
        real(kind=kind(0.0)), dimension(ap_shape__(1)) :: ap
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stpsv
        fw_iserr__ = -1
        call stpsv(uplo, trans, diag, n, ap, x, incx)
        fw_iserr__ = 0
      end subroutine stpsv_c
      subroutine strmm_c(side, uplo, transa, diag, m, n, alpha, a_shape_
     &_, a, lda, b_shape__, b, ldb, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: diag
        integer :: m
        integer :: n
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external strmm
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
        call strmm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb
     &)
        fw_iserr__ = 0
      end subroutine strmm_c
      subroutine strmv_c(uplo, trans, diag, n, a_shape__, a, lda, x_shap
     &e__, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external strmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call strmv(uplo, trans, diag, n, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine strmv_c
      subroutine strsm_c(side, uplo, transa, diag, m, n, alpha, a_shape_
     &_, a, lda, b_shape__, b, ldb, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: diag
        integer :: m
        integer :: n
        real(kind=kind(0.0)) :: alpha
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        real(kind=kind(0.0)), dimension(b_shape__(1), b_shape__(2)) :: b
        integer :: ldb
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external strsm
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
        call strsm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb
     &)
        fw_iserr__ = 0
      end subroutine strsm_c
      subroutine strsv_c(uplo, trans, diag, n, a_shape__, a, lda, x_shap
     &e__, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(2) :: a_shape__
        real(kind=kind(0.0)), dimension(a_shape__(1), a_shape__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0)), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external strsv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call strsv(uplo, trans, diag, n, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine strsv_c
      subroutine xerbla_c(fw_srname_len, srname, info, fw_iserr__, fw_er
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
        integer :: fw_srname_len
        character(len=6) :: srname
        integer :: info
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external xerbla
        fw_iserr__ = -1
        if (6 .ne. fw_srname_len) then
            fw_iserr__ = FW_CHAR_SIZE__
            fw_errstr__ = transfer("srname                              
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call xerbla(srname, info)
        fw_iserr__ = 0
      end subroutine xerbla_c
      subroutine zaxpy_c(n, za, zx_shape__, zx, incx, zy_shape__, zy, in
     &cy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: za
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer, dimension(1) :: zy_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zy_shape__(1)) :: z
     &y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zaxpy
        fw_iserr__ = -1
        call zaxpy(n, za, zx, incx, zy, incy)
        fw_iserr__ = 0
      end subroutine zaxpy_c
      subroutine zcopy_c(n, zx_shape__, zx, incx, zy_shape__, zy, incy, 
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
        integer :: n
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer, dimension(1) :: zy_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zy_shape__(1)) :: z
     &y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zcopy
        fw_iserr__ = -1
        call zcopy(n, zx, incx, zy, incy)
        fw_iserr__ = 0
      end subroutine zcopy_c
      subroutine zdotc_c(fw_ret_arg, n, zx_shape__, zx, incx, zy_shape__
     &, zy, incy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer, dimension(1) :: zy_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zy_shape__(1)) :: z
     &y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        complex(kind=kind((0.0D0,0.0D0))) :: zdotc
        external zdotc
        fw_iserr__ = -1
        fw_ret_arg = zdotc(n, zx, incx, zy, incy)
        fw_iserr__ = 0
      end subroutine zdotc_c
      subroutine zdotu_c(fw_ret_arg, n, zx_shape__, zx, incx, zy_shape__
     &, zy, incy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: fw_ret_arg
        integer :: n
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer, dimension(1) :: zy_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zy_shape__(1)) :: z
     &y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        complex(kind=kind((0.0D0,0.0D0))) :: zdotu
        external zdotu
        fw_iserr__ = -1
        fw_ret_arg = zdotu(n, zx, incx, zy, incy)
        fw_iserr__ = 0
      end subroutine zdotu_c
      subroutine zdrot_c(n, cx_shape__, cx, incx, cy_shape__, cy, incy, 
     &c, s, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: cx_shape__
        complex*16, dimension(cx_shape__(1)) :: cx
        integer :: incx
        integer, dimension(1) :: cy_shape__
        complex*16, dimension(cy_shape__(1)) :: cy
        integer :: incy
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zdrot
        fw_iserr__ = -1
        call zdrot(n, cx, incx, cy, incy, c, s)
        fw_iserr__ = 0
      end subroutine zdrot_c
      subroutine zdscal_c(n, da, zx_shape__, zx, incx, fw_iserr__, fw_er
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
        integer :: n
        real(kind=kind(0.0D0)) :: da
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zdscal
        fw_iserr__ = -1
        call zdscal(n, da, zx, incx)
        fw_iserr__ = 0
      end subroutine zdscal_c
      subroutine zgbmv_c(trans, m, n, kl, ku, alpha, a_shape__, a, lda, 
     &x_shape__, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errst
     &r__)
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
        integer :: m
        integer :: n
        integer :: kl
        integer :: ku
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgbmv(trans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y,
     & incy)
        fw_iserr__ = 0
      end subroutine zgbmv_c
      subroutine zgemm_c(transa, transb, m, n, k, alpha, a_shape__, a, l
     &da, b_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_err
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
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: transb
        integer :: m
        integer :: n
        integer :: k
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(b_shape__(1), b_sha
     &pe__(2)) :: b
        integer :: ldb
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(c_shape__(1), c_sha
     &pe__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgemm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgemm(transa, transb, m, n, k, alpha, a, lda, b, ldb, beta,
     & c, ldc)
        fw_iserr__ = 0
      end subroutine zgemm_c
      subroutine zgemv_c(trans, m, n, alpha, a_shape__, a, lda, x_shape_
     &_, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        integer :: m
        integer :: n
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgemv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgemv(trans, m, n, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine zgemv_c
      subroutine zgerc_c(m, n, alpha, x_shape__, x, incx, y_shape__, y, 
     &incy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgerc
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgerc(m, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine zgerc_c
      subroutine zgeru_c(m, n, alpha, x_shape__, x, incx, y_shape__, y, 
     &incy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zgeru
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zgeru(m, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine zgeru_c
      subroutine zhbmv_c(uplo, n, k, alpha, a_shape__, a, lda, x_shape__
     &, x, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        integer :: k
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zhbmv(uplo, n, k, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine zhbmv_c
      subroutine zhemm_c(side, uplo, m, n, alpha, a_shape__, a, lda, b_s
     &hape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        integer :: m
        integer :: n
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(b_shape__(1), b_sha
     &pe__(2)) :: b
        integer :: ldb
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(c_shape__(1), c_sha
     &pe__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhemm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zhemm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc
     &)
        fw_iserr__ = 0
      end subroutine zhemm_c
      subroutine zhemv_c(uplo, n, alpha, a_shape__, a, lda, x_shape__, x
     &, incx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhemv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zhemv(uplo, n, alpha, a, lda, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine zhemv_c
      subroutine zher_c(uplo, n, alpha, x_shape__, x, incx, a_shape__, a
     &, lda, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zher
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zher(uplo, n, alpha, x, incx, a, lda)
        fw_iserr__ = 0
      end subroutine zher_c
      subroutine zher2_c(uplo, n, alpha, x_shape__, x, incx, y_shape__, 
     &y, incy, a_shape__, a, lda, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zher2
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zher2(uplo, n, alpha, x, incx, y, incy, a, lda)
        fw_iserr__ = 0
      end subroutine zher2_c
      subroutine zher2k_c(uplo, trans, n, k, alpha, a_shape__, a, lda, b
     &_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__
     &)
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
        integer :: n
        integer :: k
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(b_shape__(1), b_sha
     &pe__(2)) :: b
        integer :: ldb
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(c_shape__(1), c_sha
     &pe__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zher2k
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zher2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, l
     &dc)
        fw_iserr__ = 0
      end subroutine zher2k_c
      subroutine zherk_c(uplo, trans, n, k, alpha, a_shape__, a, lda, be
     &ta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        integer :: n
        integer :: k
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        real(kind=kind(0.0D0)) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(c_shape__(1), c_sha
     &pe__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zherk
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zherk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc)
        fw_iserr__ = 0
      end subroutine zherk_c
      subroutine zhpmv_c(uplo, n, alpha, ap_shape__, ap, x_shape__, x, i
     &ncx, beta, y_shape__, y, incy, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(ap_shape__(1)) :: a
     &p
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhpmv
        fw_iserr__ = -1
        call zhpmv(uplo, n, alpha, ap, x, incx, beta, y, incy)
        fw_iserr__ = 0
      end subroutine zhpmv_c
      subroutine zhpr_c(uplo, n, alpha, x_shape__, x, incx, ap_shape__, 
     &ap, fw_iserr__, fw_errstr__)
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
        real(kind=kind(0.0D0)) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(ap_shape__(1)) :: a
     &p
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhpr
        fw_iserr__ = -1
        call zhpr(uplo, n, alpha, x, incx, ap)
        fw_iserr__ = 0
      end subroutine zhpr_c
      subroutine zhpr2_c(uplo, n, alpha, x_shape__, x, incx, y_shape__, 
     &y, incy, ap_shape__, ap, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer, dimension(1) :: y_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(y_shape__(1)) :: y
        integer :: incy
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(ap_shape__(1)) :: a
     &p
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zhpr2
        fw_iserr__ = -1
        call zhpr2(uplo, n, alpha, x, incx, y, incy, ap)
        fw_iserr__ = 0
      end subroutine zhpr2_c
      subroutine zrotg_c(ca, cb, c, s, fw_iserr__, fw_errstr__)
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
        complex(kind=kind((0.0D0,0.0D0))) :: ca
        complex(kind=kind((0.0D0,0.0D0))) :: cb
        real(kind=kind(0.0D0)) :: c
        complex(kind=kind((0.0D0,0.0D0))) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zrotg
        fw_iserr__ = -1
        call zrotg(ca, cb, c, s)
        fw_iserr__ = 0
      end subroutine zrotg_c
      subroutine zscal_c(n, za, zx_shape__, zx, incx, fw_iserr__, fw_err
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
        integer :: n
        complex(kind=kind((0.0D0,0.0D0))) :: za
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zscal
        fw_iserr__ = -1
        call zscal(n, za, zx, incx)
        fw_iserr__ = 0
      end subroutine zscal_c
      subroutine zswap_c(n, zx_shape__, zx, incx, zy_shape__, zy, incy, 
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
        integer :: n
        integer, dimension(1) :: zx_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zx_shape__(1)) :: z
     &x
        integer :: incx
        integer, dimension(1) :: zy_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(zy_shape__(1)) :: z
     &y
        integer :: incy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zswap
        fw_iserr__ = -1
        call zswap(n, zx, incx, zy, incy)
        fw_iserr__ = 0
      end subroutine zswap_c
      subroutine zsymm_c(side, uplo, m, n, alpha, a_shape__, a, lda, b_s
     &hape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        integer :: m
        integer :: n
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(b_shape__(1), b_sha
     &pe__(2)) :: b
        integer :: ldb
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(c_shape__(1), c_sha
     &pe__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zsymm
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zsymm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc
     &)
        fw_iserr__ = 0
      end subroutine zsymm_c
      subroutine zsyr2k_c(uplo, trans, n, k, alpha, a_shape__, a, lda, b
     &_shape__, b, ldb, beta, c_shape__, c, ldc, fw_iserr__, fw_errstr__
     &)
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
        integer :: n
        integer :: k
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(b_shape__(1), b_sha
     &pe__(2)) :: b
        integer :: ldb
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(c_shape__(1), c_sha
     &pe__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zsyr2k
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
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zsyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, l
     &dc)
        fw_iserr__ = 0
      end subroutine zsyr2k_c
      subroutine zsyrk_c(uplo, trans, n, k, alpha, a_shape__, a, lda, be
     &ta, c_shape__, c, ldc, fw_iserr__, fw_errstr__)
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
        integer :: n
        integer :: k
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        complex(kind=kind((0.0D0,0.0D0))) :: beta
        integer, dimension(2) :: c_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(c_shape__(1), c_sha
     &pe__(2)) :: c
        integer :: ldc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external zsyrk
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((ldc) .ne. (c_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("c                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call zsyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc)
        fw_iserr__ = 0
      end subroutine zsyrk_c
      subroutine ztbmv_c(uplo, trans, diag, n, k, a_shape__, a, lda, x_s
     &hape__, x, incx, fw_iserr__, fw_errstr__)
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
        integer :: k
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztbmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ztbmv(uplo, trans, diag, n, k, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine ztbmv_c
      subroutine ztbsv_c(uplo, trans, diag, n, k, a_shape__, a, lda, x_s
     &hape__, x, incx, fw_iserr__, fw_errstr__)
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
        integer :: k
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztbsv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ztbsv(uplo, trans, diag, n, k, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine ztbsv_c
      subroutine ztpmv_c(uplo, trans, diag, n, ap_shape__, ap, x_shape__
     &, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(ap_shape__(1)) :: a
     &p
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztpmv
        fw_iserr__ = -1
        call ztpmv(uplo, trans, diag, n, ap, x, incx)
        fw_iserr__ = 0
      end subroutine ztpmv_c
      subroutine ztpsv_c(uplo, trans, diag, n, ap_shape__, ap, x_shape__
     &, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(1) :: ap_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(ap_shape__(1)) :: a
     &p
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztpsv
        fw_iserr__ = -1
        call ztpsv(uplo, trans, diag, n, ap, x, incx)
        fw_iserr__ = 0
      end subroutine ztpsv_c
      subroutine ztrmm_c(side, uplo, transa, diag, m, n, alpha, a_shape_
     &_, a, lda, b_shape__, b, ldb, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: diag
        integer :: m
        integer :: n
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(b_shape__(1), b_sha
     &pe__(2)) :: b
        integer :: ldb
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztrmm
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
        call ztrmm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb
     &)
        fw_iserr__ = 0
      end subroutine ztrmm_c
      subroutine ztrmv_c(uplo, trans, diag, n, a_shape__, a, lda, x_shap
     &e__, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztrmv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ztrmv(uplo, trans, diag, n, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine ztrmv_c
      subroutine ztrsm_c(side, uplo, transa, diag, m, n, alpha, a_shape_
     &_, a, lda, b_shape__, b, ldb, fw_iserr__, fw_errstr__)
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
        character(len=1, kind=kind('a')) :: side
        character(len=1, kind=kind('a')) :: uplo
        character(len=1, kind=kind('a')) :: transa
        character(len=1, kind=kind('a')) :: diag
        integer :: m
        integer :: n
        complex(kind=kind((0.0D0,0.0D0))) :: alpha
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(2) :: b_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(b_shape__(1), b_sha
     &pe__(2)) :: b
        integer :: ldb
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztrsm
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
        call ztrsm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb
     &)
        fw_iserr__ = 0
      end subroutine ztrsm_c
      subroutine ztrsv_c(uplo, trans, diag, n, a_shape__, a, lda, x_shap
     &e__, x, incx, fw_iserr__, fw_errstr__)
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
        integer, dimension(2) :: a_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(a_shape__(1), a_sha
     &pe__(2)) :: a
        integer :: lda
        integer, dimension(1) :: x_shape__
        complex(kind=kind((0.0D0,0.0D0))), dimension(x_shape__(1)) :: x
        integer :: incx
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ztrsv
        fw_iserr__ = -1
        if ((lda) .ne. (a_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("a                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ztrsv(uplo, trans, diag, n, a, lda, x, incx)
        fw_iserr__ = 0
      end subroutine ztrsv_c
