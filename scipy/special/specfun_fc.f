      subroutine cpdsa_c(n, z, cdn, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        complex*16 :: cdn
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpdsa
        fw_iserr__ = -1
        call cpdsa(n, z, cdn)
        fw_iserr__ = 0
      end subroutine cpdsa_c
      subroutine cfs_c(z, zf, zd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        complex*16 :: z
        complex*16 :: zf
        complex*16 :: zd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cfs
        fw_iserr__ = -1
        call cfs(z, zf, zd)
        fw_iserr__ = 0
      end subroutine cfs_c
      subroutine lqmn_c(mm, m, n, x, qm_shape__, qm, qd_shape__, qd, fw_
     &iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: mm
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer, dimension(2) :: qm_shape__
        real(kind=kind(0.0D0)), dimension(qm_shape__(1), qm_shape__(2)) 
     &:: qm
        integer, dimension(2) :: qd_shape__
        real(kind=kind(0.0D0)), dimension(qd_shape__(1), qd_shape__(2)) 
     &:: qd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lqmn
        fw_iserr__ = -1
        if (((mm) - (0) + 1) .ne. (qm_shape__(1)) .or. ((n) - (0) + 1) .
     &ne. (qm_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qm                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((mm) - (0) + 1) .ne. (qd_shape__(1)) .or. ((n) - (0) + 1) .
     &ne. (qd_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lqmn(mm, m, n, x, qm, qd)
        fw_iserr__ = 0
      end subroutine lqmn_c
      subroutine clpmn_c(mm, m, n, x, y, cpm_shape__, cpm, cpd_shape__, 
     &cpd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: mm
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: y
        integer, dimension(2) :: cpm_shape__
        complex*16, dimension(cpm_shape__(1), cpm_shape__(2)) :: cpm
        integer, dimension(2) :: cpd_shape__
        complex*16, dimension(cpd_shape__(1), cpd_shape__(2)) :: cpd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external clpmn
        fw_iserr__ = -1
        if (((mm) - (0) + 1) .ne. (cpm_shape__(1)) .or. ((n) - (0) + 1) 
     &.ne. (cpm_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cpm                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((mm) - (0) + 1) .ne. (cpd_shape__(1)) .or. ((n) - (0) + 1) 
     &.ne. (cpd_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cpd                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call clpmn(mm, m, n, x, y, cpm, cpd)
        fw_iserr__ = 0
      end subroutine clpmn_c
      subroutine vvsa_c(va, x, pv, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: va
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: pv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external vvsa
        fw_iserr__ = -1
        call vvsa(va, x, pv)
        fw_iserr__ = 0
      end subroutine vvsa_c
      subroutine jdzo_c(nt, n_shape__, n, m_shape__, m, p_shape__, p, zo
     &_shape__, zo, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: nt
        integer, dimension(1) :: n_shape__
        integer, dimension(n_shape__(1)) :: n
        integer, dimension(1) :: m_shape__
        integer, dimension(m_shape__(1)) :: m
        integer, dimension(1) :: p_shape__
        integer, dimension(p_shape__(1)) :: p
        integer, dimension(1) :: zo_shape__
        real(kind=kind(0.0D0)), dimension(zo_shape__(1)) :: zo
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jdzo
        fw_iserr__ = -1
        if ((1400) .ne. (n_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("n                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((1400) .ne. (m_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("m                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((1400) .ne. (p_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("p                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((1400) - (0) + 1) .ne. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call jdzo(nt, n, m, p, zo)
        fw_iserr__ = 0
      end subroutine jdzo_c
      subroutine cbk_c(m, n, c, cv, qt, ck_shape__, ck, bk_shape__, bk, 
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: cv
        real(kind=kind(0.0D0)) :: qt
        integer, dimension(1) :: ck_shape__
        real(kind=kind(0.0D0)), dimension(ck_shape__(1)) :: ck
        integer, dimension(1) :: bk_shape__
        real(kind=kind(0.0D0)), dimension(bk_shape__(1)) :: bk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cbk
        fw_iserr__ = -1
        if ((200) .ne. (ck_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ck                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((200) .ne. (bk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cbk(m, n, c, cv, qt, ck, bk)
        fw_iserr__ = 0
      end subroutine cbk_c
      subroutine cjy01_c(z, cbj0, cdj0, cbj1, cdj1, cby0, cdy0, cby1, cd
     &y1, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        complex*16 :: z
        complex*16 :: cbj0
        complex*16 :: cdj0
        complex*16 :: cbj1
        complex*16 :: cdj1
        complex*16 :: cby0
        complex*16 :: cdy0
        complex*16 :: cby1
        complex*16 :: cdy1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cjy01
        fw_iserr__ = -1
        call cjy01(z, cbj0, cdj0, cbj1, cdj1, cby0, cdy0, cby1, cdy1)
        fw_iserr__ = 0
      end subroutine cjy01_c
      subroutine rmn2sp_c(m, n, c, x, cv, df_shape__, df, kd, r2f, r2d, 
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: cv
        integer, dimension(1) :: df_shape__
        real(kind=kind(0.0D0)), dimension(df_shape__(1)) :: df
        integer :: kd
        real(kind=kind(0.0D0)) :: r2f
        real(kind=kind(0.0D0)) :: r2d
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rmn2sp
        fw_iserr__ = -1
        if ((200) .ne. (df_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("df                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call rmn2sp(m, n, c, x, cv, df, kd, r2f, r2d)
        fw_iserr__ = 0
      end subroutine rmn2sp_c
      subroutine bernob_c(n, bn_shape__, bn, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer, dimension(1) :: bn_shape__
        real(kind=kind(0.0D0)), dimension(bn_shape__(1)) :: bn
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external bernob
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (bn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call bernob(n, bn)
        fw_iserr__ = 0
      end subroutine bernob_c
      subroutine bernoa_c(n, bn_shape__, bn, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer, dimension(1) :: bn_shape__
        real(kind=kind(0.0D0)), dimension(bn_shape__(1)) :: bn
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external bernoa
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (bn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call bernoa(n, bn)
        fw_iserr__ = 0
      end subroutine bernoa_c
      subroutine qstar_c(m, n, c, ck_shape__, ck, ck1, qs, qt, fw_iserr_
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        integer, dimension(1) :: ck_shape__
        real(kind=kind(0.0D0)), dimension(ck_shape__(1)) :: ck
        real(kind=kind(0.0D0)) :: ck1
        real(kind=kind(0.0D0)) :: qs
        real(kind=kind(0.0D0)) :: qt
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external qstar
        fw_iserr__ = -1
        if ((200) .ne. (ck_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ck                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call qstar(m, n, c, ck, ck1, qs, qt)
        fw_iserr__ = 0
      end subroutine qstar_c
      subroutine cv0_c(kd, m, q, a0, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kd
        integer :: m
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: a0
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cv0
        fw_iserr__ = -1
        call cv0(kd, m, q, a0)
        fw_iserr__ = 0
      end subroutine cv0_c
      subroutine cvqm_c(m, q, a0, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: a0
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cvqm
        fw_iserr__ = -1
        call cvqm(m, q, a0)
        fw_iserr__ = 0
      end subroutine cvqm_c
      subroutine cvql_c(kd, m, q, a0, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kd
        integer :: m
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: a0
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cvql
        fw_iserr__ = -1
        call cvql(kd, m, q, a0)
        fw_iserr__ = 0
      end subroutine cvql_c
      subroutine csphjy_c(n, z, nm, csj_shape__, csj, cdj_shape__, cdj, 
     &csy_shape__, csy, cdy_shape__, cdy, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        integer :: nm
        integer, dimension(1) :: csj_shape__
        complex*16, dimension(csj_shape__(1)) :: csj
        integer, dimension(1) :: cdj_shape__
        complex*16, dimension(cdj_shape__(1)) :: cdj
        integer, dimension(1) :: csy_shape__
        complex*16, dimension(csy_shape__(1)) :: csy
        integer, dimension(1) :: cdy_shape__
        complex*16, dimension(cdy_shape__(1)) :: cdy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external csphjy
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (csj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("csj                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdj                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (csy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("csy                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdy                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call csphjy(n, z, nm, csj, cdj, csy, cdy)
        fw_iserr__ = 0
      end subroutine csphjy_c
      subroutine msta1_c(fw_ret_arg, x, mp, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer :: mp
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external msta1
        fw_iserr__ = -1
        fw_ret_arg = msta1(x, mp)
        fw_iserr__ = 0
      end subroutine msta1_c
      subroutine msta2_c(fw_ret_arg, x, n, mp, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer :: n
        integer :: mp
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external msta2
        fw_iserr__ = -1
        fw_ret_arg = msta2(x, n, mp)
        fw_iserr__ = 0
      end subroutine msta2_c
      subroutine envj_c(fw_ret_arg, n, x, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real*8 :: fw_ret_arg
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external envj
        fw_iserr__ = -1
        fw_ret_arg = envj(n, x)
        fw_iserr__ = 0
      end subroutine envj_c
      subroutine ittjyb_c(x, ttj, tty, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ttj
        real(kind=kind(0.0D0)) :: tty
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ittjyb
        fw_iserr__ = -1
        call ittjyb(x, ttj, tty)
        fw_iserr__ = 0
      end subroutine ittjyb_c
      subroutine ittjya_c(x, ttj, tty, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ttj
        real(kind=kind(0.0D0)) :: tty
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ittjya
        fw_iserr__ = -1
        call ittjya(x, ttj, tty)
        fw_iserr__ = 0
      end subroutine ittjya_c
      subroutine cjylv_c(v, z, cbjv, cdjv, cbyv, cdyv, fw_iserr__, fw_er
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
        real(kind=kind(0.0D0)) :: v
        complex*16 :: z
        complex*16 :: cbjv
        complex*16 :: cdjv
        complex*16 :: cbyv
        complex*16 :: cdyv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cjylv
        fw_iserr__ = -1
        call cjylv(v, z, cbjv, cdjv, cbyv, cdyv)
        fw_iserr__ = 0
      end subroutine cjylv_c
      subroutine rmn2l_c(m, n, c, x, df_shape__, df, kd, r2f, r2d, id, f
     &w_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: df_shape__
        real(kind=kind(0.0D0)), dimension(df_shape__(1)) :: df
        integer :: kd
        real(kind=kind(0.0D0)) :: r2f
        real(kind=kind(0.0D0)) :: r2d
        integer :: id
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rmn2l
        fw_iserr__ = -1
        if ((200) .ne. (df_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("df                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call rmn2l(m, n, c, x, df, kd, r2f, r2d, id)
        fw_iserr__ = 0
      end subroutine rmn2l_c
      subroutine psi_spec_c(x, ps, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ps
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external psi_spec
        fw_iserr__ = -1
        call psi_spec(x, ps)
        fw_iserr__ = 0
      end subroutine psi_spec_c
      subroutine cva2_c(kd, m, q, a, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kd
        integer :: m
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: a
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cva2
        fw_iserr__ = -1
        call cva2(kd, m, q, a)
        fw_iserr__ = 0
      end subroutine cva2_c
      subroutine lpmns_c(m, n, x, pm_shape__, pm, pd_shape__, pd, fw_ise
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: pm_shape__
        real(kind=kind(0.0D0)), dimension(pm_shape__(1)) :: pm
        integer, dimension(1) :: pd_shape__
        real(kind=kind(0.0D0)), dimension(pd_shape__(1)) :: pd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lpmns
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (pm_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pm                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (pd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lpmns(m, n, x, pm, pd)
        fw_iserr__ = 0
      end subroutine lpmns_c
      subroutine cerf_c(z, cer, cder, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        complex*16 :: z
        complex*16 :: cer
        complex*16 :: cder
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cerf
        fw_iserr__ = -1
        call cerf(z, cer, cder)
        fw_iserr__ = 0
      end subroutine cerf_c
      subroutine rswfp_c(m, n, c, x, cv, kf, r1f, r1d, r2f, r2d, fw_iser
     &r__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: cv
        integer :: kf
        real(kind=kind(0.0D0)) :: r1f
        real(kind=kind(0.0D0)) :: r1d
        real(kind=kind(0.0D0)) :: r2f
        real(kind=kind(0.0D0)) :: r2d
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rswfp
        fw_iserr__ = -1
        call rswfp(m, n, c, x, cv, kf, r1f, r1d, r2f, r2d)
        fw_iserr__ = 0
      end subroutine rswfp_c
      subroutine jyndd_c(n, x, bjn, djn, fjn, byn, dyn, fyn, fw_iserr__,
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: bjn
        real(kind=kind(0.0D0)) :: djn
        real(kind=kind(0.0D0)) :: fjn
        real(kind=kind(0.0D0)) :: byn
        real(kind=kind(0.0D0)) :: dyn
        real(kind=kind(0.0D0)) :: fyn
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jyndd
        fw_iserr__ = -1
        call jyndd(n, x, bjn, djn, fjn, byn, dyn, fyn)
        fw_iserr__ = 0
      end subroutine jyndd_c
      subroutine gam0_c(x, ga, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ga
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gam0
        fw_iserr__ = -1
        call gam0(x, ga)
        fw_iserr__ = 0
      end subroutine gam0_c
      subroutine cisib_c(x, ci, si, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ci
        real(kind=kind(0.0D0)) :: si
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cisib
        fw_iserr__ = -1
        call cisib(x, ci, si)
        fw_iserr__ = 0
      end subroutine cisib_c
      subroutine eulera_c(n, en_shape__, en, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer, dimension(1) :: en_shape__
        real(kind=kind(0.0D0)), dimension(en_shape__(1)) :: en
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external eulera
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (en_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("en                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call eulera(n, en)
        fw_iserr__ = 0
      end subroutine eulera_c
      subroutine refine_c(kd, m, q, a, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kd
        integer :: m
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: a
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external refine
        fw_iserr__ = -1
        call refine(kd, m, q, a)
        fw_iserr__ = 0
      end subroutine refine_c
      subroutine cisia_c(x, ci, si, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ci
        real(kind=kind(0.0D0)) :: si
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cisia
        fw_iserr__ = -1
        call cisia(x, ci, si)
        fw_iserr__ = 0
      end subroutine cisia_c
      subroutine itsl0_c(x, tl0, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: tl0
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external itsl0
        fw_iserr__ = -1
        call itsl0(x, tl0)
        fw_iserr__ = 0
      end subroutine itsl0_c
      subroutine stvl1_c(x, sl1, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: sl1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stvl1
        fw_iserr__ = -1
        call stvl1(x, sl1)
        fw_iserr__ = 0
      end subroutine stvl1_c
      subroutine clqn_c(n, x, y, cqn_shape__, cqn, cqd_shape__, cqd, fw_
     &iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: y
        integer, dimension(1) :: cqn_shape__
        complex*16, dimension(cqn_shape__(1)) :: cqn
        integer, dimension(1) :: cqd_shape__
        complex*16, dimension(cqd_shape__(1)) :: cqd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external clqn
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (cqn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cqn                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cqd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cqd                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call clqn(n, x, y, cqn, cqd)
        fw_iserr__ = 0
      end subroutine clqn_c
      subroutine stvl0_c(x, sl0, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: sl0
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stvl0
        fw_iserr__ = -1
        call stvl0(x, sl0)
        fw_iserr__ = 0
      end subroutine stvl0_c
      subroutine airyzo_c(nt, kf, xa_shape__, xa, xb_shape__, xb, xc_sha
     &pe__, xc, xd_shape__, xd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: nt
        integer :: kf
        integer, dimension(1) :: xa_shape__
        real(kind=kind(0.0D0)), dimension(xa_shape__(1)) :: xa
        integer, dimension(1) :: xb_shape__
        real(kind=kind(0.0D0)), dimension(xb_shape__(1)) :: xb
        integer, dimension(1) :: xc_shape__
        real(kind=kind(0.0D0)), dimension(xc_shape__(1)) :: xc
        integer, dimension(1) :: xd_shape__
        real(kind=kind(0.0D0)), dimension(xd_shape__(1)) :: xd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external airyzo
        fw_iserr__ = -1
        if ((nt) .ne. (xa_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("xa                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .ne. (xb_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("xb                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .ne. (xc_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("xc                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .ne. (xd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("xd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call airyzo(nt, kf, xa, xb, xc, xd)
        fw_iserr__ = 0
      end subroutine airyzo_c
      subroutine error_c(x, err, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: err
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external error
        fw_iserr__ = -1
        call error(x, err)
        fw_iserr__ = 0
      end subroutine error_c
      subroutine cerror_c(z, cer, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        complex*16 :: z
        complex*16 :: cer
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cerror
        fw_iserr__ = -1
        call cerror(z, cer)
        fw_iserr__ = 0
      end subroutine cerror_c
      subroutine eulerb_c(n, en_shape__, en, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer, dimension(1) :: en_shape__
        real(kind=kind(0.0D0)), dimension(en_shape__(1)) :: en
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external eulerb
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (en_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("en                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call eulerb(n, en)
        fw_iserr__ = 0
      end subroutine eulerb_c
      subroutine cva1_c(kd, m, q, cv_shape__, cv, fw_iserr__, fw_errstr_
     &_)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kd
        integer :: m
        real(kind=kind(0.0D0)) :: q
        integer, dimension(1) :: cv_shape__
        real(kind=kind(0.0D0)), dimension(cv_shape__(1)) :: cv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cva1
        fw_iserr__ = -1
        if ((200) .ne. (cv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cv                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cva1(kd, m, q, cv)
        fw_iserr__ = 0
      end subroutine cva1_c
      subroutine ittikb_c(x, tti, ttk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: tti
        real(kind=kind(0.0D0)) :: ttk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ittikb
        fw_iserr__ = -1
        call ittikb(x, tti, ttk)
        fw_iserr__ = 0
      end subroutine ittikb_c
      subroutine lqnb_c(n, x, qn_shape__, qn, qd_shape__, qd, fw_iserr__
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: qn_shape__
        real(kind=kind(0.0D0)), dimension(qn_shape__(1)) :: qn
        integer, dimension(1) :: qd_shape__
        real(kind=kind(0.0D0)), dimension(qd_shape__(1)) :: qd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lqnb
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (qn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (qd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lqnb(n, x, qn, qd)
        fw_iserr__ = 0
      end subroutine lqnb_c
      subroutine cjk_c(km, a_shape__, a, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: km
        integer, dimension(1) :: a_shape__
        real(kind=kind(0.0D0)), dimension(a_shape__(1)) :: a
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cjk
        fw_iserr__ = -1
        call cjk(km, a)
        fw_iserr__ = 0
      end subroutine cjk_c
      subroutine ittika_c(x, tti, ttk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: tti
        real(kind=kind(0.0D0)) :: ttk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ittika
        fw_iserr__ = -1
        call ittika(x, tti, ttk)
        fw_iserr__ = 0
      end subroutine ittika_c
      subroutine lamv_c(v, x, vm, vl_shape__, vl, dl_shape__, dl, fw_ise
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
        real(kind=kind(0.0D0)) :: v
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: vm
        integer, dimension(1) :: vl_shape__
        real(kind=kind(0.0D0)), dimension(vl_shape__(1)) :: vl
        integer, dimension(1) :: dl_shape__
        real(kind=kind(0.0D0)), dimension(dl_shape__(1)) :: dl
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lamv
        fw_iserr__ = -1
        call lamv(v, x, vm, vl, dl)
        fw_iserr__ = 0
      end subroutine lamv_c
      subroutine chguit_c(a, b, x, hu, id, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: hu
        integer :: id
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chguit
        fw_iserr__ = -1
        call chguit(a, b, x, hu, id)
        fw_iserr__ = 0
      end subroutine chguit_c
      subroutine kmn_c(m, n, c, cv, kd, df_shape__, df, dn_shape__, dn, 
     &ck1, ck2, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: cv
        integer :: kd
        integer, dimension(1) :: df_shape__
        real(kind=kind(0.0D0)), dimension(df_shape__(1)) :: df
        integer, dimension(1) :: dn_shape__
        real(kind=kind(0.0D0)), dimension(dn_shape__(1)) :: dn
        real(kind=kind(0.0D0)) :: ck1
        real(kind=kind(0.0D0)) :: ck2
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external kmn
        fw_iserr__ = -1
        if ((200) .ne. (df_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("df                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((200) .ne. (dn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call kmn(m, n, c, cv, kd, df, dn, ck1, ck2)
        fw_iserr__ = 0
      end subroutine kmn_c
      subroutine lagzo_c(n, x_shape__, x, w_shape__, w, fw_iserr__, fw_e
     &rrstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lagzo
        fw_iserr__ = -1
        if ((n) .ne. (x_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("x                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .ne. (w_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("w                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lagzo(n, x, w)
        fw_iserr__ = 0
      end subroutine lagzo_c
      subroutine vvla_c(va, x, pv, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: va
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: pv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external vvla
        fw_iserr__ = -1
        call vvla(va, x, pv)
        fw_iserr__ = 0
      end subroutine vvla_c
      subroutine cjyva_c(v, z, vm, cbj_shape__, cbj, cdj_shape__, cdj, c
     &by_shape__, cby, cdy_shape__, cdy, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        complex*16 :: z
        real(kind=kind(0.0D0)) :: vm
        integer, dimension(1) :: cbj_shape__
        complex*16, dimension(cbj_shape__(1)) :: cbj
        integer, dimension(1) :: cdj_shape__
        complex*16, dimension(cdj_shape__(1)) :: cdj
        integer, dimension(1) :: cby_shape__
        complex*16, dimension(cby_shape__(1)) :: cby
        integer, dimension(1) :: cdy_shape__
        complex*16, dimension(cdy_shape__(1)) :: cdy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cjyva
        fw_iserr__ = -1
        call cjyva(v, z, vm, cbj, cdj, cby, cdy)
        fw_iserr__ = 0
      end subroutine cjyva_c
      subroutine cjyvb_c(v, z, vm, cbj_shape__, cbj, cdj_shape__, cdj, c
     &by_shape__, cby, cdy_shape__, cdy, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        complex*16 :: z
        real(kind=kind(0.0D0)) :: vm
        integer, dimension(1) :: cbj_shape__
        complex*16, dimension(cbj_shape__(1)) :: cbj
        integer, dimension(1) :: cdj_shape__
        complex*16, dimension(cdj_shape__(1)) :: cdj
        integer, dimension(1) :: cby_shape__
        complex*16, dimension(cby_shape__(1)) :: cby
        integer, dimension(1) :: cdy_shape__
        complex*16, dimension(cdy_shape__(1)) :: cdy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cjyvb
        fw_iserr__ = -1
        call cjyvb(v, z, vm, cbj, cdj, cby, cdy)
        fw_iserr__ = 0
      end subroutine cjyvb_c
      subroutine jy01a_c(x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1, fw_i
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: bj0
        real(kind=kind(0.0D0)) :: dj0
        real(kind=kind(0.0D0)) :: bj1
        real(kind=kind(0.0D0)) :: dj1
        real(kind=kind(0.0D0)) :: by0
        real(kind=kind(0.0D0)) :: dy0
        real(kind=kind(0.0D0)) :: by1
        real(kind=kind(0.0D0)) :: dy1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jy01a
        fw_iserr__ = -1
        call jy01a(x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1)
        fw_iserr__ = 0
      end subroutine jy01a_c
      subroutine incog_c(a, x, gin, gim, gip, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: gin
        real(kind=kind(0.0D0)) :: gim
        real(kind=kind(0.0D0)) :: gip
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external incog
        fw_iserr__ = -1
        call incog(a, x, gin, gim, gip)
        fw_iserr__ = 0
      end subroutine incog_c
      subroutine itikb_c(x, ti, tk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ti
        real(kind=kind(0.0D0)) :: tk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external itikb
        fw_iserr__ = -1
        call itikb(x, ti, tk)
        fw_iserr__ = 0
      end subroutine itikb_c
      subroutine itika_c(x, ti, tk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ti
        real(kind=kind(0.0D0)) :: tk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external itika
        fw_iserr__ = -1
        call itika(x, ti, tk)
        fw_iserr__ = 0
      end subroutine itika_c
      subroutine jyv_c(v, x, vm, bj_shape__, bj, dj_shape__, dj, by_shap
     &e__, by, dy_shape__, dy, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: vm
        integer, dimension(1) :: bj_shape__
        real(kind=kind(0.0D0)), dimension(bj_shape__(1)) :: bj
        integer, dimension(1) :: dj_shape__
        real(kind=kind(0.0D0)), dimension(dj_shape__(1)) :: dj
        integer, dimension(1) :: by_shape__
        real(kind=kind(0.0D0)), dimension(by_shape__(1)) :: by
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jyv
        fw_iserr__ = -1
        call jyv(v, x, vm, bj, dj, by, dy)
        fw_iserr__ = 0
      end subroutine jyv_c
      subroutine jynb_c(n, x, nm, bj_shape__, bj, dj_shape__, dj, by_sha
     &pe__, by, dy_shape__, dy, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: bj_shape__
        real(kind=kind(0.0D0)), dimension(bj_shape__(1)) :: bj
        integer, dimension(1) :: dj_shape__
        real(kind=kind(0.0D0)), dimension(dj_shape__(1)) :: dj
        integer, dimension(1) :: by_shape__
        real(kind=kind(0.0D0)), dimension(by_shape__(1)) :: by
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jynb
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (bj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (by_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("by                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call jynb(n, x, nm, bj, dj, by, dy)
        fw_iserr__ = 0
      end subroutine jynb_c
      subroutine jynbh_c(n, nmin, x, nm, bj_shape__, bj, by_shape__, by,
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
        integer :: n
        integer :: nmin
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: bj_shape__
        real(kind=kind(0.0D0)), dimension(bj_shape__(1)) :: bj
        integer, dimension(1) :: by_shape__
        real(kind=kind(0.0D0)), dimension(by_shape__(1)) :: by
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jynbh
        fw_iserr__ = -1
        if (((n-nmin) - (0) + 1) .ne. (bj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n-nmin) - (0) + 1) .ne. (by_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("by                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call jynbh(n, nmin, x, nm, bj, by)
        fw_iserr__ = 0
      end subroutine jynbh_c
      subroutine stvh1_c(x, sh1, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: sh1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stvh1
        fw_iserr__ = -1
        call stvh1(x, sh1)
        fw_iserr__ = 0
      end subroutine stvh1_c
      subroutine legzo_c(n, x_shape__, x, w_shape__, w, fw_iserr__, fw_e
     &rrstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external legzo
        fw_iserr__ = -1
        if ((n) .ne. (x_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("x                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .ne. (w_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("w                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call legzo(n, x, w)
        fw_iserr__ = 0
      end subroutine legzo_c
      subroutine aswfa_c(m, n, c, x, kd, cv, s1f, s1d, fw_iserr__, fw_er
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        integer :: kd
        real(kind=kind(0.0D0)) :: cv
        real(kind=kind(0.0D0)) :: s1f
        real(kind=kind(0.0D0)) :: s1d
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external aswfa
        fw_iserr__ = -1
        call aswfa(m, n, c, x, kd, cv, s1f, s1d)
        fw_iserr__ = 0
      end subroutine aswfa_c
      subroutine jyna_c(n, x, nm, bj_shape__, bj, dj_shape__, dj, by_sha
     &pe__, by, dy_shape__, dy, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: bj_shape__
        real(kind=kind(0.0D0)), dimension(bj_shape__(1)) :: bj
        integer, dimension(1) :: dj_shape__
        real(kind=kind(0.0D0)), dimension(dj_shape__(1)) :: dj
        integer, dimension(1) :: by_shape__
        real(kind=kind(0.0D0)), dimension(by_shape__(1)) :: by
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jyna
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (bj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (by_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("by                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call jyna(n, x, nm, bj, dj, by, dy)
        fw_iserr__ = 0
      end subroutine jyna_c
      subroutine pbdv_c(v, x, dv_shape__, dv, dp_shape__, dp, pdf, pdd, 
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
        real(kind=kind(0.0D0)) :: v
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: dv_shape__
        real(kind=kind(0.0D0)), dimension(dv_shape__(1)) :: dv
        integer, dimension(1) :: dp_shape__
        real(kind=kind(0.0D0)), dimension(dp_shape__(1)) :: dp
        real(kind=kind(0.0D0)) :: pdf
        real(kind=kind(0.0D0)) :: pdd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external pbdv
        fw_iserr__ = -1
        call pbdv(v, x, dv, dp, pdf, pdd)
        fw_iserr__ = 0
      end subroutine pbdv_c
      subroutine itsh0_c(x, th0, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: th0
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external itsh0
        fw_iserr__ = -1
        call itsh0(x, th0)
        fw_iserr__ = 0
      end subroutine itsh0_c
      subroutine cerzo_c(nt, zo_shape__, zo, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: nt
        integer, dimension(1) :: zo_shape__
        complex*16, dimension(zo_shape__(1)) :: zo
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cerzo
        fw_iserr__ = -1
        if ((nt) .ne. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cerzo(nt, zo)
        fw_iserr__ = 0
      end subroutine cerzo_c
      subroutine gamma2_c(x, ga, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ga
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gamma2
        fw_iserr__ = -1
        call gamma2(x, ga)
        fw_iserr__ = 0
      end subroutine gamma2_c
      subroutine chgu_c(a, b, x, hu, md, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: hu
        integer :: md
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chgu
        fw_iserr__ = -1
        call chgu(a, b, x, hu, md)
        fw_iserr__ = 0
      end subroutine chgu_c
      subroutine lamn_c(n, x, nm, bl_shape__, bl, dl_shape__, dl, fw_ise
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: bl_shape__
        real(kind=kind(0.0D0)), dimension(bl_shape__(1)) :: bl
        integer, dimension(1) :: dl_shape__
        real(kind=kind(0.0D0)), dimension(dl_shape__(1)) :: dl
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lamn
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (bl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lamn(n, x, nm, bl, dl)
        fw_iserr__ = 0
      end subroutine lamn_c
      subroutine comelp_c(hk, ck, ce, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: hk
        real(kind=kind(0.0D0)) :: ck
        real(kind=kind(0.0D0)) :: ce
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external comelp
        fw_iserr__ = -1
        call comelp(hk, ck, ce)
        fw_iserr__ = 0
      end subroutine comelp_c
      subroutine incob_c(a, b, x, bix, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: bix
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external incob
        fw_iserr__ = -1
        call incob(a, b, x, bix)
        fw_iserr__ = 0
      end subroutine incob_c
      subroutine cvf_c(kd, m, q, a, mj, f, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kd
        integer :: m
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: a
        integer :: mj
        real(kind=kind(0.0D0)) :: f
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cvf
        fw_iserr__ = -1
        call cvf(kd, m, q, a, mj, f)
        fw_iserr__ = 0
      end subroutine cvf_c
      subroutine clpn_c(n, x, y, cpn_shape__, cpn, cpd_shape__, cpd, fw_
     &iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: y
        integer, dimension(1) :: cpn_shape__
        complex*16, dimension(cpn_shape__(1)) :: cpn
        integer, dimension(1) :: cpd_shape__
        complex*16, dimension(cpd_shape__(1)) :: cpd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external clpn
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (cpn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cpn                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cpd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cpd                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call clpn(n, x, y, cpn, cpd)
        fw_iserr__ = 0
      end subroutine clpn_c
      subroutine lqmns_c(m, n, x, qm_shape__, qm, qd_shape__, qd, fw_ise
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: qm_shape__
        real(kind=kind(0.0D0)), dimension(qm_shape__(1)) :: qm
        integer, dimension(1) :: qd_shape__
        real(kind=kind(0.0D0)), dimension(qd_shape__(1)) :: qd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lqmns
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (qm_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qm                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (qd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lqmns(m, n, x, qm, qd)
        fw_iserr__ = 0
      end subroutine lqmns_c
      subroutine ciklv_c(v, z, cbiv, cdiv, cbkv, cdkv, fw_iserr__, fw_er
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
        real(kind=kind(0.0D0)) :: v
        complex*16 :: z
        complex*16 :: cbiv
        complex*16 :: cdiv
        complex*16 :: cbkv
        complex*16 :: cdkv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ciklv
        fw_iserr__ = -1
        call ciklv(v, z, cbiv, cdiv, cbkv, cdkv)
        fw_iserr__ = 0
      end subroutine ciklv_c
      subroutine elit_c(hk, phi, fe, ee, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: hk
        real(kind=kind(0.0D0)) :: phi
        real(kind=kind(0.0D0)) :: fe
        real(kind=kind(0.0D0)) :: ee
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external elit
        fw_iserr__ = -1
        call elit(hk, phi, fe, ee)
        fw_iserr__ = 0
      end subroutine elit_c
      subroutine elit3_c(phi, hk, c, el3, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: phi
        real(kind=kind(0.0D0)) :: hk
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: el3
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external elit3
        fw_iserr__ = -1
        call elit3(phi, hk, c, el3)
        fw_iserr__ = 0
      end subroutine elit3_c
      subroutine eix_c(x, ei, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ei
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external eix
        fw_iserr__ = -1
        call eix(x, ei)
        fw_iserr__ = 0
      end subroutine eix_c
      subroutine eixz_c(z, cei, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        complex(kind=kind((0.0D0,0.0D0))) :: z
        complex(kind=kind((0.0D0,0.0D0))) :: cei
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external eixz
        fw_iserr__ = -1
        call eixz(z, cei)
        fw_iserr__ = 0
      end subroutine eixz_c
      subroutine e1xb_c(x, e1, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: e1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external e1xb
        fw_iserr__ = -1
        call e1xb(x, e1)
        fw_iserr__ = 0
      end subroutine e1xb_c
      subroutine chgm_c(a, b, x, hg, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: hg
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chgm
        fw_iserr__ = -1
        call chgm(a, b, x, hg)
        fw_iserr__ = 0
      end subroutine chgm_c
      subroutine stvh0_c(x, sh0, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: sh0
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stvh0
        fw_iserr__ = -1
        call stvh0(x, sh0)
        fw_iserr__ = 0
      end subroutine stvh0_c
      subroutine hygfx_c(a, b, c, x, hf, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: hf
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external hygfx
        fw_iserr__ = -1
        call hygfx(a, b, c, x, hf)
        fw_iserr__ = 0
      end subroutine hygfx_c
      subroutine cchg_c(a, b, z, chg, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        complex*16 :: chg
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cchg
        fw_iserr__ = -1
        call cchg(a, b, z, chg)
        fw_iserr__ = 0
      end subroutine cchg_c
      subroutine hygfz_c(a, b, c, z, zhf, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: c
        complex*16 :: z
        complex*16 :: zhf
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external hygfz
        fw_iserr__ = -1
        call hygfz(a, b, c, z, zhf)
        fw_iserr__ = 0
      end subroutine hygfz_c
      subroutine itairy_c(x, apt, bpt, ant, bnt, fw_iserr__, fw_errstr__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: apt
        real(kind=kind(0.0D0)) :: bpt
        real(kind=kind(0.0D0)) :: ant
        real(kind=kind(0.0D0)) :: bnt
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external itairy
        fw_iserr__ = -1
        call itairy(x, apt, bpt, ant, bnt)
        fw_iserr__ = 0
      end subroutine itairy_c
      subroutine ikna_c(n, x, nm, bi_shape__, bi, di_shape__, di, bk_sha
     &pe__, bk, dk_shape__, dk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: bi_shape__
        real(kind=kind(0.0D0)), dimension(bi_shape__(1)) :: bi
        integer, dimension(1) :: di_shape__
        real(kind=kind(0.0D0)), dimension(di_shape__(1)) :: di
        integer, dimension(1) :: bk_shape__
        real(kind=kind(0.0D0)), dimension(bk_shape__(1)) :: bk
        integer, dimension(1) :: dk_shape__
        real(kind=kind(0.0D0)), dimension(dk_shape__(1)) :: dk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ikna
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (bi_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bi                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (di_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("di                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (bk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ikna(n, x, nm, bi, di, bk, dk)
        fw_iserr__ = 0
      end subroutine ikna_c
      subroutine cjyna_c(n, z, nm, cbj_shape__, cbj, cdj_shape__, cdj, c
     &by_shape__, cby, cdy_shape__, cdy, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        integer :: nm
        integer, dimension(1) :: cbj_shape__
        complex*16, dimension(cbj_shape__(1)) :: cbj
        integer, dimension(1) :: cdj_shape__
        complex*16, dimension(cdj_shape__(1)) :: cdj
        integer, dimension(1) :: cby_shape__
        complex*16, dimension(cby_shape__(1)) :: cby
        integer, dimension(1) :: cdy_shape__
        complex*16, dimension(cdy_shape__(1)) :: cdy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cjyna
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (cbj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cbj                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdj                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cby_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cby                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdy                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cjyna(n, z, nm, cbj, cdj, cby, cdy)
        fw_iserr__ = 0
      end subroutine cjyna_c
      subroutine cjynb_c(n, z, nm, cbj_shape__, cbj, cdj_shape__, cdj, c
     &by_shape__, cby, cdy_shape__, cdy, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        integer :: nm
        integer, dimension(1) :: cbj_shape__
        complex*16, dimension(cbj_shape__(1)) :: cbj
        integer, dimension(1) :: cdj_shape__
        complex*16, dimension(cdj_shape__(1)) :: cdj
        integer, dimension(1) :: cby_shape__
        complex*16, dimension(cby_shape__(1)) :: cby
        integer, dimension(1) :: cdy_shape__
        complex*16, dimension(cdy_shape__(1)) :: cdy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cjynb
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (cbj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cbj                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdj                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cby_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cby                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdy                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cjynb(n, z, nm, cbj, cdj, cby, cdy)
        fw_iserr__ = 0
      end subroutine cjynb_c
      subroutine iknb_c(n, x, nm, bi_shape__, bi, di_shape__, di, bk_sha
     &pe__, bk, dk_shape__, dk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: bi_shape__
        real(kind=kind(0.0D0)), dimension(bi_shape__(1)) :: bi
        integer, dimension(1) :: di_shape__
        real(kind=kind(0.0D0)), dimension(di_shape__(1)) :: di
        integer, dimension(1) :: bk_shape__
        real(kind=kind(0.0D0)), dimension(bk_shape__(1)) :: bk
        integer, dimension(1) :: dk_shape__
        real(kind=kind(0.0D0)), dimension(dk_shape__(1)) :: dk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external iknb
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (bi_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bi                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (di_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("di                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (bk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call iknb(n, x, nm, bi, di, bk, dk)
        fw_iserr__ = 0
      end subroutine iknb_c
      subroutine lpmn_c(mm, m, n, x, pm_shape__, pm, pd_shape__, pd, fw_
     &iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: mm
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer, dimension(2) :: pm_shape__
        real(kind=kind(0.0D0)), dimension(pm_shape__(1), pm_shape__(2)) 
     &:: pm
        integer, dimension(2) :: pd_shape__
        real(kind=kind(0.0D0)), dimension(pd_shape__(1), pd_shape__(2)) 
     &:: pd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lpmn
        fw_iserr__ = -1
        if (((mm) - (0) + 1) .ne. (pm_shape__(1)) .or. ((n) - (0) + 1) .
     &ne. (pm_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pm                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((mm) - (0) + 1) .ne. (pd_shape__(1)) .or. ((n) - (0) + 1) .
     &ne. (pd_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lpmn(mm, m, n, x, pm, pd)
        fw_iserr__ = 0
      end subroutine lpmn_c
      subroutine mtu0_c(kf, m, q, x, csf, csd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kf
        integer :: m
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: csf
        real(kind=kind(0.0D0)) :: csd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external mtu0
        fw_iserr__ = -1
        call mtu0(kf, m, q, x, csf, csd)
        fw_iserr__ = 0
      end subroutine mtu0_c
      subroutine cy01_c(kf, z, zf, zd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kf
        complex*16 :: z
        complex*16 :: zf
        complex*16 :: zd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cy01
        fw_iserr__ = -1
        call cy01(kf, z, zf, zd)
        fw_iserr__ = 0
      end subroutine cy01_c
      subroutine ffk_c(ks, x, fr, fi, fm, fa, gr, gi, gm, ga, fw_iserr__
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
        integer :: ks
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: fr
        real(kind=kind(0.0D0)) :: fi
        real(kind=kind(0.0D0)) :: fm
        real(kind=kind(0.0D0)) :: fa
        real(kind=kind(0.0D0)) :: gr
        real(kind=kind(0.0D0)) :: gi
        real(kind=kind(0.0D0)) :: gm
        real(kind=kind(0.0D0)) :: ga
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ffk
        fw_iserr__ = -1
        call ffk(ks, x, fr, fi, fm, fa, gr, gi, gm, ga)
        fw_iserr__ = 0
      end subroutine ffk_c
      subroutine airya_c(x, ai, bi, ad, bd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ai
        real(kind=kind(0.0D0)) :: bi
        real(kind=kind(0.0D0)) :: ad
        real(kind=kind(0.0D0)) :: bd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external airya
        fw_iserr__ = -1
        call airya(x, ai, bi, ad, bd)
        fw_iserr__ = 0
      end subroutine airya_c
      subroutine airyb_c(x, ai, bi, ad, bd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ai
        real(kind=kind(0.0D0)) :: bi
        real(kind=kind(0.0D0)) :: ad
        real(kind=kind(0.0D0)) :: bd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external airyb
        fw_iserr__ = -1
        call airyb(x, ai, bi, ad, bd)
        fw_iserr__ = 0
      end subroutine airyb_c
      subroutine scka_c(m, n, c, cv, kd, ck_shape__, ck, fw_iserr__, fw_
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: cv
        integer :: kd
        integer, dimension(1) :: ck_shape__
        real(kind=kind(0.0D0)), dimension(ck_shape__(1)) :: ck
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external scka
        fw_iserr__ = -1
        if ((200) .ne. (ck_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ck                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call scka(m, n, c, cv, kd, ck)
        fw_iserr__ = 0
      end subroutine scka_c
      subroutine sckb_c(m, n, c, df_shape__, df, ck_shape__, ck, fw_iser
     &r__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: c
        integer, dimension(1) :: df_shape__
        real(kind=kind(0.0D0)), dimension(df_shape__(1)) :: df
        integer, dimension(1) :: ck_shape__
        real(kind=kind(0.0D0)), dimension(ck_shape__(1)) :: ck
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sckb
        fw_iserr__ = -1
        if ((200) .ne. (df_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("df                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((200) .ne. (ck_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ck                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sckb(m, n, c, df, ck)
        fw_iserr__ = 0
      end subroutine sckb_c
      subroutine cpdla_c(n, z, cdn, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        complex*16 :: cdn
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpdla
        fw_iserr__ = -1
        call cpdla(n, z, cdn)
        fw_iserr__ = 0
      end subroutine cpdla_c
      subroutine fcszo_c(kf, nt, zo_shape__, zo, fw_iserr__, fw_errstr__
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
        integer :: kf
        integer :: nt
        integer, dimension(1) :: zo_shape__
        complex*16, dimension(zo_shape__(1)) :: zo
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external fcszo
        fw_iserr__ = -1
        if ((nt) .ne. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call fcszo(kf, nt, zo)
        fw_iserr__ = 0
      end subroutine fcszo_c
      subroutine e1xa_c(x, e1, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: e1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external e1xa
        fw_iserr__ = -1
        call e1xa(x, e1)
        fw_iserr__ = 0
      end subroutine e1xa_c
      subroutine lpmv_c(v, m, x, pmv, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        integer :: m
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: pmv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lpmv
        fw_iserr__ = -1
        call lpmv(v, m, x, pmv)
        fw_iserr__ = 0
      end subroutine lpmv_c
      subroutine cgama_c(x, y, kf, gr, gi, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer :: kf
        real(kind=kind(0.0D0)) :: gr
        real(kind=kind(0.0D0)) :: gi
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cgama
        fw_iserr__ = -1
        call cgama(x, y, kf, gr, gi)
        fw_iserr__ = 0
      end subroutine cgama_c
      subroutine aswfb_c(m, n, c, x, kd, cv, s1f, s1d, fw_iserr__, fw_er
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        integer :: kd
        real(kind=kind(0.0D0)) :: cv
        real(kind=kind(0.0D0)) :: s1f
        real(kind=kind(0.0D0)) :: s1d
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external aswfb
        fw_iserr__ = -1
        call aswfb(m, n, c, x, kd, cv, s1f, s1d)
        fw_iserr__ = 0
      end subroutine aswfb_c
      subroutine chgus_c(a, b, x, hu, id, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: hu
        integer :: id
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chgus
        fw_iserr__ = -1
        call chgus(a, b, x, hu, id)
        fw_iserr__ = 0
      end subroutine chgus_c
      subroutine itth0_c(x, tth, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: tth
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external itth0
        fw_iserr__ = -1
        call itth0(x, tth)
        fw_iserr__ = 0
      end subroutine itth0_c
      subroutine lgama_c(kf, x, gl, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kf
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: gl
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lgama
        fw_iserr__ = -1
        call lgama(kf, x, gl)
        fw_iserr__ = 0
      end subroutine lgama_c
      subroutine lqna_c(n, x, qn_shape__, qn, qd_shape__, qd, fw_iserr__
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: qn_shape__
        real(kind=kind(0.0D0)), dimension(qn_shape__(1)) :: qn
        integer, dimension(1) :: qd_shape__
        real(kind=kind(0.0D0)), dimension(qd_shape__(1)) :: qd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lqna
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (qn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (qd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lqna(n, x, qn, qd)
        fw_iserr__ = 0
      end subroutine lqna_c
      subroutine dvla_c(va, x, pd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: va
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: pd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dvla
        fw_iserr__ = -1
        call dvla(va, x, pd)
        fw_iserr__ = 0
      end subroutine dvla_c
      subroutine ik01a_c(x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1, fw_i
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: bi0
        real(kind=kind(0.0D0)) :: di0
        real(kind=kind(0.0D0)) :: bi1
        real(kind=kind(0.0D0)) :: di1
        real(kind=kind(0.0D0)) :: bk0
        real(kind=kind(0.0D0)) :: dk0
        real(kind=kind(0.0D0)) :: bk1
        real(kind=kind(0.0D0)) :: dk1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ik01a
        fw_iserr__ = -1
        call ik01a(x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1)
        fw_iserr__ = 0
      end subroutine ik01a_c
      subroutine cpbdn_c(n, z, cpb_shape__, cpb, cpd_shape__, cpd, fw_is
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
        integer :: n
        complex*16 :: z
        integer, dimension(1) :: cpb_shape__
        complex*16, dimension(cpb_shape__(1)) :: cpb
        integer, dimension(1) :: cpd_shape__
        complex*16, dimension(cpd_shape__(1)) :: cpd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpbdn
        fw_iserr__ = -1
        call cpbdn(n, z, cpb, cpd)
        fw_iserr__ = 0
      end subroutine cpbdn_c
      subroutine ik01b_c(x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1, fw_i
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: bi0
        real(kind=kind(0.0D0)) :: di0
        real(kind=kind(0.0D0)) :: bi1
        real(kind=kind(0.0D0)) :: di1
        real(kind=kind(0.0D0)) :: bk0
        real(kind=kind(0.0D0)) :: dk0
        real(kind=kind(0.0D0)) :: bk1
        real(kind=kind(0.0D0)) :: dk1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ik01b
        fw_iserr__ = -1
        call ik01b(x, bi0, di0, bi1, di1, bk0, dk0, bk1, dk1)
        fw_iserr__ = 0
      end subroutine ik01b_c
      subroutine beta_c(p, q, bt, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: p
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: bt
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external beta
        fw_iserr__ = -1
        call beta(p, q, bt)
        fw_iserr__ = 0
      end subroutine beta_c
      subroutine lpn_c(n, x, pn_shape__, pn, pd_shape__, pd, fw_iserr__,
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: pn_shape__
        real(kind=kind(0.0D0)), dimension(pn_shape__(1)) :: pn
        integer, dimension(1) :: pd_shape__
        real(kind=kind(0.0D0)), dimension(pd_shape__(1)) :: pd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lpn
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (pn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (pd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lpn(n, x, pn, pd)
        fw_iserr__ = 0
      end subroutine lpn_c
      subroutine fcoef_c(kd, m, q, a, fc_shape__, fc, fw_iserr__, fw_err
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
        integer :: kd
        integer :: m
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: a
        integer, dimension(1) :: fc_shape__
        real(kind=kind(0.0D0)), dimension(fc_shape__(1)) :: fc
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external fcoef
        fw_iserr__ = -1
        if ((251) .ne. (fc_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("fc                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call fcoef(kd, m, q, a, fc)
        fw_iserr__ = 0
      end subroutine fcoef_c
      subroutine sphi_c(n, x, nm, si_shape__, si, di_shape__, di, fw_ise
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: si_shape__
        real(kind=kind(0.0D0)), dimension(si_shape__(1)) :: si
        integer, dimension(1) :: di_shape__
        real(kind=kind(0.0D0)), dimension(di_shape__(1)) :: di
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sphi
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (si_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("si                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (di_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("di                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sphi(n, x, nm, si, di)
        fw_iserr__ = 0
      end subroutine sphi_c
      subroutine pbwa_c(a, x, w1f, w1d, w2f, w2d, fw_iserr__, fw_errstr_
     &_)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: w1f
        real(kind=kind(0.0D0)) :: w1d
        real(kind=kind(0.0D0)) :: w2f
        real(kind=kind(0.0D0)) :: w2d
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external pbwa
        fw_iserr__ = -1
        call pbwa(a, x, w1f, w1d, w2f, w2d)
        fw_iserr__ = 0
      end subroutine pbwa_c
      subroutine rmn1_c(m, n, c, x, df_shape__, df, kd, r1f, r1d, fw_ise
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: df_shape__
        real(kind=kind(0.0D0)), dimension(df_shape__(1)) :: df
        integer :: kd
        real(kind=kind(0.0D0)) :: r1f
        real(kind=kind(0.0D0)) :: r1d
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rmn1
        fw_iserr__ = -1
        if ((200) .ne. (df_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("df                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call rmn1(m, n, c, x, df, kd, r1f, r1d)
        fw_iserr__ = 0
      end subroutine rmn1_c
      subroutine dvsa_c(va, x, pd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: va
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: pd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external dvsa
        fw_iserr__ = -1
        call dvsa(va, x, pd)
        fw_iserr__ = 0
      end subroutine dvsa_c
      subroutine e1z_c(z, ce1, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        complex*16 :: z
        complex*16 :: ce1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external e1z
        fw_iserr__ = -1
        call e1z(z, ce1)
        fw_iserr__ = 0
      end subroutine e1z_c
      subroutine itjyb_c(x, tj, ty, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: tj
        real(kind=kind(0.0D0)) :: ty
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external itjyb
        fw_iserr__ = -1
        call itjyb(x, tj, ty)
        fw_iserr__ = 0
      end subroutine itjyb_c
      subroutine chgul_c(a, b, x, hu, id, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: hu
        integer :: id
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chgul
        fw_iserr__ = -1
        call chgul(a, b, x, hu, id)
        fw_iserr__ = 0
      end subroutine chgul_c
      subroutine gmn_c(m, n, c, x, bk_shape__, bk, gf, gd, fw_iserr__, f
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: bk_shape__
        real(kind=kind(0.0D0)), dimension(bk_shape__(1)) :: bk
        real(kind=kind(0.0D0)) :: gf
        real(kind=kind(0.0D0)) :: gd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gmn
        fw_iserr__ = -1
        if ((200) .ne. (bk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call gmn(m, n, c, x, bk, gf, gd)
        fw_iserr__ = 0
      end subroutine gmn_c
      subroutine itjya_c(x, tj, ty, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: tj
        real(kind=kind(0.0D0)) :: ty
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external itjya
        fw_iserr__ = -1
        call itjya(x, tj, ty)
        fw_iserr__ = 0
      end subroutine itjya_c
      subroutine stvlv_c(v, x, slv, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: slv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stvlv
        fw_iserr__ = -1
        call stvlv(v, x, slv)
        fw_iserr__ = 0
      end subroutine stvlv_c
      subroutine rcty_c(n, x, nm, ry_shape__, ry, dy_shape__, dy, fw_ise
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: ry_shape__
        real(kind=kind(0.0D0)), dimension(ry_shape__(1)) :: ry
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rcty
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (ry_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ry                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call rcty(n, x, nm, ry, dy)
        fw_iserr__ = 0
      end subroutine rcty_c
      subroutine lpni_c(n, x, pn_shape__, pn, pd_shape__, pd, pl_shape__
     &, pl, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: pn_shape__
        real(kind=kind(0.0D0)), dimension(pn_shape__(1)) :: pn
        integer, dimension(1) :: pd_shape__
        real(kind=kind(0.0D0)), dimension(pd_shape__(1)) :: pd
        integer, dimension(1) :: pl_shape__
        real(kind=kind(0.0D0)), dimension(pl_shape__(1)) :: pl
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external lpni
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (pn_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (pd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (pl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lpni(n, x, pn, pd, pl)
        fw_iserr__ = 0
      end subroutine lpni_c
      subroutine klvna_c(x, ber, bei, ger, gei, der, dei, her, hei, fw_i
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: ber
        real(kind=kind(0.0D0)) :: bei
        real(kind=kind(0.0D0)) :: ger
        real(kind=kind(0.0D0)) :: gei
        real(kind=kind(0.0D0)) :: der
        real(kind=kind(0.0D0)) :: dei
        real(kind=kind(0.0D0)) :: her
        real(kind=kind(0.0D0)) :: hei
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external klvna
        fw_iserr__ = -1
        call klvna(x, ber, bei, ger, gei, der, dei, her, hei)
        fw_iserr__ = 0
      end subroutine klvna_c
      subroutine chgubi_c(a, b, x, hu, id, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: hu
        integer :: id
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external chgubi
        fw_iserr__ = -1
        call chgubi(a, b, x, hu, id)
        fw_iserr__ = 0
      end subroutine chgubi_c
      subroutine cyzo_c(nt, kf, kc, zo_shape__, zo, zv_shape__, zv, fw_i
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
        integer :: nt
        integer :: kf
        integer :: kc
        integer, dimension(1) :: zo_shape__
        complex*16, dimension(zo_shape__(1)) :: zo
        integer, dimension(1) :: zv_shape__
        complex*16, dimension(zv_shape__(1)) :: zv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cyzo
        fw_iserr__ = -1
        if ((nt) .ne. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .ne. (zv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zv                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cyzo(nt, kf, kc, zo, zv)
        fw_iserr__ = 0
      end subroutine cyzo_c
      subroutine klvnb_c(x, ber, bei, ger, gei, der, dei, her, hei, fw_i
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: ber
        real(kind=kind(0.0D0)) :: bei
        real(kind=kind(0.0D0)) :: ger
        real(kind=kind(0.0D0)) :: gei
        real(kind=kind(0.0D0)) :: der
        real(kind=kind(0.0D0)) :: dei
        real(kind=kind(0.0D0)) :: her
        real(kind=kind(0.0D0)) :: hei
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external klvnb
        fw_iserr__ = -1
        call klvnb(x, ber, bei, ger, gei, der, dei, her, hei)
        fw_iserr__ = 0
      end subroutine klvnb_c
      subroutine rmn2so_c(m, n, c, x, cv, df_shape__, df, kd, r2f, r2d, 
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: cv
        integer, dimension(1) :: df_shape__
        real(kind=kind(0.0D0)), dimension(df_shape__(1)) :: df
        integer :: kd
        real(kind=kind(0.0D0)) :: r2f
        real(kind=kind(0.0D0)) :: r2d
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rmn2so
        fw_iserr__ = -1
        if ((200) .ne. (df_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("df                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call rmn2so(m, n, c, x, cv, df, kd, r2f, r2d)
        fw_iserr__ = 0
      end subroutine rmn2so_c
      subroutine csphik_c(n, z, nm, csi_shape__, csi, cdi_shape__, cdi, 
     &csk_shape__, csk, cdk_shape__, cdk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        integer :: nm
        integer, dimension(1) :: csi_shape__
        complex*16, dimension(csi_shape__(1)) :: csi
        integer, dimension(1) :: cdi_shape__
        complex*16, dimension(cdi_shape__(1)) :: cdi
        integer, dimension(1) :: csk_shape__
        complex*16, dimension(csk_shape__(1)) :: csk
        integer, dimension(1) :: cdk_shape__
        complex*16, dimension(cdk_shape__(1)) :: cdk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external csphik
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (csi_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("csi                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdi_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdi                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (csk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("csk                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdk                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call csphik(n, z, nm, csi, cdi, csk, cdk)
        fw_iserr__ = 0
      end subroutine csphik_c
      subroutine bjndd_c(n, x, bj_shape__, bj, dj_shape__, dj, fj_shape_
     &_, fj, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: bj_shape__
        real(kind=kind(0.0D0)), dimension(bj_shape__(1)) :: bj
        integer, dimension(1) :: dj_shape__
        real(kind=kind(0.0D0)), dimension(dj_shape__(1)) :: dj
        integer, dimension(1) :: fj_shape__
        real(kind=kind(0.0D0)), dimension(fj_shape__(1)) :: fj
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external bjndd
        fw_iserr__ = -1
        if ((101) .ne. (bj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((101) .ne. (dj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((101) .ne. (fj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("fj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call bjndd(n, x, bj, dj, fj)
        fw_iserr__ = 0
      end subroutine bjndd_c
      subroutine sphj_c(n, x, nm, sj_shape__, sj, dj_shape__, dj, fw_ise
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: sj_shape__
        real(kind=kind(0.0D0)), dimension(sj_shape__(1)) :: sj
        integer, dimension(1) :: dj_shape__
        real(kind=kind(0.0D0)), dimension(dj_shape__(1)) :: dj
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sphj
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (sj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sphj(n, x, nm, sj, dj)
        fw_iserr__ = 0
      end subroutine sphj_c
      subroutine othpl_c(kf, n, x, pl_shape__, pl, dpl_shape__, dpl, fw_
     &iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: kf
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: pl_shape__
        real(kind=kind(0.0D0)), dimension(pl_shape__(1)) :: pl
        integer, dimension(1) :: dpl_shape__
        real(kind=kind(0.0D0)), dimension(dpl_shape__(1)) :: dpl
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external othpl
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (pl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dpl_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dpl                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call othpl(kf, n, x, pl, dpl)
        fw_iserr__ = 0
      end subroutine othpl_c
      subroutine klvnzo_c(nt, kd, zo_shape__, zo, fw_iserr__, fw_errstr_
     &_)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: nt
        integer :: kd
        integer, dimension(1) :: zo_shape__
        real(kind=kind(0.0D0)), dimension(zo_shape__(1)) :: zo
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external klvnzo
        fw_iserr__ = -1
        if ((nt) .ne. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call klvnzo(nt, kd, zo)
        fw_iserr__ = 0
      end subroutine klvnzo_c
      subroutine rswfo_c(m, n, c, x, cv, kf, r1f, r1d, r2f, r2d, fw_iser
     &r__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: cv
        integer :: kf
        real(kind=kind(0.0D0)) :: r1f
        real(kind=kind(0.0D0)) :: r1d
        real(kind=kind(0.0D0)) :: r2f
        real(kind=kind(0.0D0)) :: r2d
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rswfo
        fw_iserr__ = -1
        call rswfo(m, n, c, x, cv, kf, r1f, r1d, r2f, r2d)
        fw_iserr__ = 0
      end subroutine rswfo_c
      subroutine ch12n_c(n, z, nm, chf1_shape__, chf1, chd1_shape__, chd
     &1, chf2_shape__, chf2, chd2_shape__, chd2, fw_iserr__, fw_errstr__
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
        integer :: n
        complex*16 :: z
        integer :: nm
        integer, dimension(1) :: chf1_shape__
        complex*16, dimension(chf1_shape__(1)) :: chf1
        integer, dimension(1) :: chd1_shape__
        complex*16, dimension(chd1_shape__(1)) :: chd1
        integer, dimension(1) :: chf2_shape__
        complex*16, dimension(chf2_shape__(1)) :: chf2
        integer, dimension(1) :: chd2_shape__
        complex*16, dimension(chd2_shape__(1)) :: chd2
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ch12n
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (chf1_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("chf1                                
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (chd1_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("chd1                                
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (chf2_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("chf2                                
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (chd2_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("chd2                                
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ch12n(n, z, nm, chf1, chd1, chf2, chd2)
        fw_iserr__ = 0
      end subroutine ch12n_c
      subroutine jyzo_c(n, nt, rj0_shape__, rj0, rj1_shape__, rj1, ry0_s
     &hape__, ry0, ry1_shape__, ry1, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer :: nt
        integer, dimension(1) :: rj0_shape__
        real(kind=kind(0.0D0)), dimension(rj0_shape__(1)) :: rj0
        integer, dimension(1) :: rj1_shape__
        real(kind=kind(0.0D0)), dimension(rj1_shape__(1)) :: rj1
        integer, dimension(1) :: ry0_shape__
        real(kind=kind(0.0D0)), dimension(ry0_shape__(1)) :: ry0
        integer, dimension(1) :: ry1_shape__
        real(kind=kind(0.0D0)), dimension(ry1_shape__(1)) :: ry1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jyzo
        fw_iserr__ = -1
        if ((nt) .ne. (rj0_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("rj0                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .ne. (rj1_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("rj1                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .ne. (ry0_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ry0                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .ne. (ry1_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ry1                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call jyzo(n, nt, rj0, rj1, ry0, ry1)
        fw_iserr__ = 0
      end subroutine jyzo_c
      subroutine ikv_c(v, x, vm, bi_shape__, bi, di_shape__, di, bk_shap
     &e__, bk, dk_shape__, dk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: vm
        integer, dimension(1) :: bi_shape__
        real(kind=kind(0.0D0)), dimension(bi_shape__(1)) :: bi
        integer, dimension(1) :: di_shape__
        real(kind=kind(0.0D0)), dimension(di_shape__(1)) :: di
        integer, dimension(1) :: bk_shape__
        real(kind=kind(0.0D0)), dimension(bk_shape__(1)) :: bk
        integer, dimension(1) :: dk_shape__
        real(kind=kind(0.0D0)), dimension(dk_shape__(1)) :: dk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ikv
        fw_iserr__ = -1
        call ikv(v, x, vm, bi, di, bk, dk)
        fw_iserr__ = 0
      end subroutine ikv_c
      subroutine sdmn_c(m, n, c, cv, kd, df_shape__, df, fw_iserr__, fw_
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: cv
        integer :: kd
        integer, dimension(1) :: df_shape__
        real(kind=kind(0.0D0)), dimension(df_shape__(1)) :: df
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sdmn
        fw_iserr__ = -1
        if ((200) .ne. (df_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("df                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sdmn(m, n, c, cv, kd, df)
        fw_iserr__ = 0
      end subroutine sdmn_c
      subroutine ajyik_c(x, vj1, vj2, vy1, vy2, vi1, vi2, vk1, vk2, fw_i
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: vj1
        real(kind=kind(0.0D0)) :: vj2
        real(kind=kind(0.0D0)) :: vy1
        real(kind=kind(0.0D0)) :: vy2
        real(kind=kind(0.0D0)) :: vi1
        real(kind=kind(0.0D0)) :: vi2
        real(kind=kind(0.0D0)) :: vk1
        real(kind=kind(0.0D0)) :: vk2
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ajyik
        fw_iserr__ = -1
        call ajyik(x, vj1, vj2, vy1, vy2, vi1, vi2, vk1, vk2)
        fw_iserr__ = 0
      end subroutine ajyik_c
      subroutine cikvb_c(v, z, vm, cbi_shape__, cbi, cdi_shape__, cdi, c
     &bk_shape__, cbk, cdk_shape__, cdk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        complex*16 :: z
        real(kind=kind(0.0D0)) :: vm
        integer, dimension(1) :: cbi_shape__
        complex*16, dimension(cbi_shape__(1)) :: cbi
        integer, dimension(1) :: cdi_shape__
        complex*16, dimension(cdi_shape__(1)) :: cdi
        integer, dimension(1) :: cbk_shape__
        complex*16, dimension(cbk_shape__(1)) :: cbk
        integer, dimension(1) :: cdk_shape__
        complex*16, dimension(cdk_shape__(1)) :: cdk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cikvb
        fw_iserr__ = -1
        call cikvb(v, z, vm, cbi, cdi, cbk, cdk)
        fw_iserr__ = 0
      end subroutine cikvb_c
      subroutine cikva_c(v, z, vm, cbi_shape__, cbi, cdi_shape__, cdi, c
     &bk_shape__, cbk, cdk_shape__, cdk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        complex*16 :: z
        real(kind=kind(0.0D0)) :: vm
        integer, dimension(1) :: cbi_shape__
        complex*16, dimension(cbi_shape__(1)) :: cbi
        integer, dimension(1) :: cdi_shape__
        complex*16, dimension(cdi_shape__(1)) :: cdi
        integer, dimension(1) :: cbk_shape__
        complex*16, dimension(cbk_shape__(1)) :: cbk
        integer, dimension(1) :: cdk_shape__
        complex*16, dimension(cdk_shape__(1)) :: cdk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cikva
        fw_iserr__ = -1
        call cikva(v, z, vm, cbi, cdi, cbk, cdk)
        fw_iserr__ = 0
      end subroutine cikva_c
      subroutine cfc_c(z, zf, zd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        complex*16 :: z
        complex*16 :: zf
        complex*16 :: zd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cfc
        fw_iserr__ = -1
        call cfc(z, zf, zd)
        fw_iserr__ = 0
      end subroutine cfc_c
      subroutine fcs_c(x, c, s, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: c
        real(kind=kind(0.0D0)) :: s
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external fcs
        fw_iserr__ = -1
        call fcs(x, c, s)
        fw_iserr__ = 0
      end subroutine fcs_c
      subroutine rctj_c(n, x, nm, rj_shape__, rj, dj_shape__, dj, fw_ise
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: rj_shape__
        real(kind=kind(0.0D0)), dimension(rj_shape__(1)) :: rj
        integer, dimension(1) :: dj_shape__
        real(kind=kind(0.0D0)), dimension(dj_shape__(1)) :: dj
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external rctj
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (rj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("rj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dj_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call rctj(n, x, nm, rj, dj)
        fw_iserr__ = 0
      end subroutine rctj_c
      subroutine herzo_c(n, x_shape__, x, w_shape__, w, fw_iserr__, fw_e
     &rrstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        integer, dimension(1) :: x_shape__
        real(kind=kind(0.0D0)), dimension(x_shape__(1)) :: x
        integer, dimension(1) :: w_shape__
        real(kind=kind(0.0D0)), dimension(w_shape__(1)) :: w
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external herzo
        fw_iserr__ = -1
        if ((n) .ne. (x_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("x                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .ne. (w_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("w                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call herzo(n, x, w)
        fw_iserr__ = 0
      end subroutine herzo_c
      subroutine jy01b_c(x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1, fw_i
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
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: bj0
        real(kind=kind(0.0D0)) :: dj0
        real(kind=kind(0.0D0)) :: bj1
        real(kind=kind(0.0D0)) :: dj1
        real(kind=kind(0.0D0)) :: by0
        real(kind=kind(0.0D0)) :: dy0
        real(kind=kind(0.0D0)) :: by1
        real(kind=kind(0.0D0)) :: dy1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jy01b
        fw_iserr__ = -1
        call jy01b(x, bj0, dj0, bj1, dj1, by0, dy0, by1, dy1)
        fw_iserr__ = 0
      end subroutine jy01b_c
      subroutine enxb_c(n, x, en_shape__, en, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: en_shape__
        real(kind=kind(0.0D0)), dimension(en_shape__(1)) :: en
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external enxb
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (en_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("en                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call enxb(n, x, en)
        fw_iserr__ = 0
      end subroutine enxb_c
      subroutine sphk_c(n, x, nm, sk_shape__, sk, dk_shape__, dk, fw_ise
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: sk_shape__
        real(kind=kind(0.0D0)), dimension(sk_shape__(1)) :: sk
        integer, dimension(1) :: dk_shape__
        real(kind=kind(0.0D0)), dimension(dk_shape__(1)) :: dk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sphk
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (sk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sphk(n, x, nm, sk, dk)
        fw_iserr__ = 0
      end subroutine sphk_c
      subroutine enxa_c(n, x, en_shape__, en, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: en_shape__
        real(kind=kind(0.0D0)), dimension(en_shape__(1)) :: en
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external enxa
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (en_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("en                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call enxa(n, x, en)
        fw_iserr__ = 0
      end subroutine enxa_c
      subroutine gaih_c(x, ga, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: ga
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external gaih
        fw_iserr__ = -1
        call gaih(x, ga)
        fw_iserr__ = 0
      end subroutine gaih_c
      subroutine pbvv_c(v, x, vv_shape__, vv, vp_shape__, vp, pvf, pvd, 
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
        real(kind=kind(0.0D0)) :: v
        real(kind=kind(0.0D0)) :: x
        integer, dimension(1) :: vv_shape__
        real(kind=kind(0.0D0)), dimension(vv_shape__(1)) :: vv
        integer, dimension(1) :: vp_shape__
        real(kind=kind(0.0D0)), dimension(vp_shape__(1)) :: vp
        real(kind=kind(0.0D0)) :: pvf
        real(kind=kind(0.0D0)) :: pvd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external pbvv
        fw_iserr__ = -1
        call pbvv(v, x, vv, vp, pvf, pvd)
        fw_iserr__ = 0
      end subroutine pbvv_c
      subroutine clqmn_c(mm, m, n, x, y, cqm_shape__, cqm, cqd_shape__, 
     &cqd, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        integer :: mm
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: y
        integer, dimension(2) :: cqm_shape__
        complex*16, dimension(cqm_shape__(1), cqm_shape__(2)) :: cqm
        integer, dimension(2) :: cqd_shape__
        complex*16, dimension(cqd_shape__(1), cqd_shape__(2)) :: cqd
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external clqmn
        fw_iserr__ = -1
        if (((mm) - (0) + 1) .ne. (cqm_shape__(1)) .or. ((n) - (0) + 1) 
     &.ne. (cqm_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cqm                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((mm) - (0) + 1) .ne. (cqd_shape__(1)) .or. ((n) - (0) + 1) 
     &.ne. (cqd_shape__(2))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cqd                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call clqmn(mm, m, n, x, y, cqm, cqd)
        fw_iserr__ = 0
      end subroutine clqmn_c
      subroutine segv_c(m, n, c, kd, cv, eg_shape__, eg, fw_iserr__, fw_
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
        integer :: m
        integer :: n
        real(kind=kind(0.0D0)) :: c
        integer :: kd
        real(kind=kind(0.0D0)) :: cv
        integer, dimension(1) :: eg_shape__
        real(kind=kind(0.0D0)), dimension(eg_shape__(1)) :: eg
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external segv
        fw_iserr__ = -1
        if ((200) .ne. (eg_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("eg                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call segv(m, n, c, kd, cv, eg)
        fw_iserr__ = 0
      end subroutine segv_c
      subroutine ciknb_c(n, z, nm, cbi_shape__, cbi, cdi_shape__, cdi, c
     &bk_shape__, cbk, cdk_shape__, cdk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        integer :: nm
        integer, dimension(1) :: cbi_shape__
        complex*16, dimension(cbi_shape__(1)) :: cbi
        integer, dimension(1) :: cdi_shape__
        complex*16, dimension(cdi_shape__(1)) :: cdi
        integer, dimension(1) :: cbk_shape__
        complex*16, dimension(cbk_shape__(1)) :: cbk
        integer, dimension(1) :: cdk_shape__
        complex*16, dimension(cdk_shape__(1)) :: cdk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external ciknb
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (cbi_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cbi                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdi_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdi                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cbk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cbk                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdk                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call ciknb(n, z, nm, cbi, cdi, cbk, cdk)
        fw_iserr__ = 0
      end subroutine ciknb_c
      subroutine cikna_c(n, z, nm, cbi_shape__, cbi, cdi_shape__, cdi, c
     &bk_shape__, cbk, cdk_shape__, cdk, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        complex*16 :: z
        integer :: nm
        integer, dimension(1) :: cbi_shape__
        complex*16, dimension(cbi_shape__(1)) :: cbi
        integer, dimension(1) :: cdi_shape__
        complex*16, dimension(cdi_shape__(1)) :: cdi
        integer, dimension(1) :: cbk_shape__
        complex*16, dimension(cbk_shape__(1)) :: cbk
        integer, dimension(1) :: cdk_shape__
        complex*16, dimension(cdk_shape__(1)) :: cdk
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cikna
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (cbi_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cbi                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdi_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdi                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cbk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cbk                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (cdk_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdk                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cikna(n, z, nm, cbi, cdi, cbk, cdk)
        fw_iserr__ = 0
      end subroutine cikna_c
      subroutine mtu12_c(kf, kc, m, q, x, f1r, d1r, f2r, d2r, fw_iserr__
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
        integer :: kf
        integer :: kc
        integer :: m
        real(kind=kind(0.0D0)) :: q
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: f1r
        real(kind=kind(0.0D0)) :: d1r
        real(kind=kind(0.0D0)) :: f2r
        real(kind=kind(0.0D0)) :: d2r
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external mtu12
        fw_iserr__ = -1
        call mtu12(kf, kc, m, q, x, f1r, d1r, f2r, d2r)
        fw_iserr__ = 0
      end subroutine mtu12_c
      subroutine cik01_c(z, cbi0, cdi0, cbi1, cdi1, cbk0, cdk0, cbk1, cd
     &k1, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        complex*16 :: z
        complex*16 :: cbi0
        complex*16 :: cdi0
        complex*16 :: cbi1
        complex*16 :: cdi1
        complex*16 :: cbk0
        complex*16 :: cdk0
        complex*16 :: cbk1
        complex*16 :: cdk1
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cik01
        fw_iserr__ = -1
        call cik01(z, cbi0, cdi0, cbi1, cdi1, cbk0, cdk0, cbk1, cdk1)
        fw_iserr__ = 0
      end subroutine cik01_c
      subroutine cpsi_c(x, y, psr, psi, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
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
        real(kind=kind(0.0D0)) :: psr
        real(kind=kind(0.0D0)) :: psi
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external cpsi
        fw_iserr__ = -1
        call cpsi(x, y, psr, psi)
        fw_iserr__ = 0
      end subroutine cpsi_c
      subroutine sphy_c(n, x, nm, sy_shape__, sy, dy_shape__, dy, fw_ise
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
        integer :: n
        real(kind=kind(0.0D0)) :: x
        integer :: nm
        integer, dimension(1) :: sy_shape__
        real(kind=kind(0.0D0)), dimension(sy_shape__(1)) :: sy
        integer, dimension(1) :: dy_shape__
        real(kind=kind(0.0D0)), dimension(dy_shape__(1)) :: dy
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external sphy
        fw_iserr__ = -1
        if (((n) - (0) + 1) .ne. (sy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .ne. (dy_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sphy(n, x, nm, sy, dy)
        fw_iserr__ = 0
      end subroutine sphy_c
      subroutine jelp_c(u, hk, esn, ecn, edn, eph, fw_iserr__, fw_errstr
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
        real(kind=kind(0.0D0)) :: u
        real(kind=kind(0.0D0)) :: hk
        real(kind=kind(0.0D0)) :: esn
        real(kind=kind(0.0D0)) :: ecn
        real(kind=kind(0.0D0)) :: edn
        real(kind=kind(0.0D0)) :: eph
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external jelp
        fw_iserr__ = -1
        call jelp(u, hk, esn, ecn, edn, eph)
        fw_iserr__ = 0
      end subroutine jelp_c
      subroutine stvhv_c(v, x, hv, fw_iserr__, fw_errstr__)
        implicit none
        integer FW_ARR_DIM__
        parameter (FW_ARR_DIM__ = 2)
        integer FW_CHAR_SIZE__
        parameter (FW_CHAR_SIZE__ = 1)
        integer FW_INIT_ERR__
        parameter (FW_INIT_ERR__ = -1)
        integer FW_NO_ERR__
        parameter (FW_NO_ERR__ = 0)
        integer fw_errstr_len
        parameter (fw_errstr_len = 63)
        character C_NULL_CHAR
        parameter (C_NULL_CHAR = '\0')
        real(kind=kind(0.0D0)) :: v
        real(kind=kind(0.0D0)) :: x
        real(kind=kind(0.0D0)) :: hv
        integer :: fw_iserr__
        character(len=1, kind=kind('a')), dimension(63) :: fw_errstr__
        external stvhv
        fw_iserr__ = -1
        call stvhv(v, x, hv)
        fw_iserr__ = 0
      end subroutine stvhv_c
