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
