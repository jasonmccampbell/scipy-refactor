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
        if ((1400) .lt. 0 .or. (1400) .gt. (n_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("n                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((1400) .lt. 0 .or. (1400) .gt. (m_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("m                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((1400) .lt. 0 .or. (1400) .gt. (p_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("p                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((1400) - (0) + 1) .lt. 0 .or. ((1400) - (0) + 1) .gt. (zo_s
     &hape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call jdzo(nt, n, m, p, zo)
        fw_iserr__ = 0
      end subroutine jdzo_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (bn_shape__
     &(1))) then
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (bn_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call bernoa(n, bn)
        fw_iserr__ = 0
      end subroutine bernoa_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (csj_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("csj                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (cdj_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdj                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (csy_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("csy                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (cdy_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdy                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call csphjy(n, z, nm, csj, cdj, csy, cdy)
        fw_iserr__ = 0
      end subroutine csphjy_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (pm_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pm                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (pd_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lpmns(m, n, x, pm, pd)
        fw_iserr__ = 0
      end subroutine lpmns_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (en_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("en                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call eulera(n, en)
        fw_iserr__ = 0
      end subroutine eulera_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (cqn_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cqn                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (cqd_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cqd                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call clqn(n, x, y, cqn, cqd)
        fw_iserr__ = 0
      end subroutine clqn_c
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
        if ((nt) .lt. 0 .or. (nt) .gt. (xa_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("xa                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .lt. 0 .or. (nt) .gt. (xb_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("xb                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .lt. 0 .or. (nt) .gt. (xc_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("xc                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .lt. 0 .or. (nt) .gt. (xd_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("xd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call airyzo(nt, kf, xa, xb, xc, xd)
        fw_iserr__ = 0
      end subroutine airyzo_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (en_shape__
     &(1))) then
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
        if ((200) .lt. 0 .or. (200) .gt. (cv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cv                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cva1(kd, m, q, cv)
        fw_iserr__ = 0
      end subroutine cva1_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (qn_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (qd_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lqnb(n, x, qn, qd)
        fw_iserr__ = 0
      end subroutine lqnb_c
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
        if ((n) .lt. 0 .or. (n) .gt. (x_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("x                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (w_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("w                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lagzo(n, x, w)
        fw_iserr__ = 0
      end subroutine lagzo_c
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
        if ((n) .lt. 0 .or. (n) .gt. (x_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("x                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (w_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("w                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call legzo(n, x, w)
        fw_iserr__ = 0
      end subroutine legzo_c
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
        if ((nt) .lt. 0 .or. (nt) .gt. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cerzo(nt, zo)
        fw_iserr__ = 0
      end subroutine cerzo_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (bl_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("bl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (dl_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lamn(n, x, nm, bl, dl)
        fw_iserr__ = 0
      end subroutine lamn_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (cpn_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cpn                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (cpd_shape_
     &_(1))) then
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (qm_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qm                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (qd_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lqmns(m, n, x, qm, qd)
        fw_iserr__ = 0
      end subroutine lqmns_c
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
        if ((nt) .lt. 0 .or. (nt) .gt. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call fcszo(kf, nt, zo)
        fw_iserr__ = 0
      end subroutine fcszo_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (qn_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (qd_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("qd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lqna(n, x, qn, qd)
        fw_iserr__ = 0
      end subroutine lqna_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (pn_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (pd_shape__
     &(1))) then
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
        if ((251) .lt. 0 .or. (251) .gt. (fc_shape__(1))) then
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (si_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("si                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (di_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("di                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sphi(n, x, nm, si, di)
        fw_iserr__ = 0
      end subroutine sphi_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (ry_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ry                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (dy_shape__
     &(1))) then
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (pn_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pn                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (pd_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pd                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (pl_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call lpni(n, x, pn, pd, pl)
        fw_iserr__ = 0
      end subroutine lpni_c
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
        if ((nt) .lt. 0 .or. (nt) .gt. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .lt. 0 .or. (nt) .gt. (zv_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zv                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call cyzo(nt, kf, kc, zo, zv)
        fw_iserr__ = 0
      end subroutine cyzo_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (csi_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("csi                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (cdi_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdi                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (csk_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("csk                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (cdk_shape_
     &_(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("cdk                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call csphik(n, z, nm, csi, cdi, csk, cdk)
        fw_iserr__ = 0
      end subroutine csphik_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (sj_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (dj_shape__
     &(1))) then
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (pl_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("pl                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (dpl_shape_
     &_(1))) then
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
        if ((nt) .lt. 0 .or. (nt) .gt. (zo_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("zo                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call klvnzo(nt, kd, zo)
        fw_iserr__ = 0
      end subroutine klvnzo_c
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
        if ((nt) .lt. 0 .or. (nt) .gt. (rj0_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("rj0                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .lt. 0 .or. (nt) .gt. (rj1_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("rj1                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .lt. 0 .or. (nt) .gt. (ry0_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ry0                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((nt) .lt. 0 .or. (nt) .gt. (ry1_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("ry1                                 
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call jyzo(n, nt, rj0, rj1, ry0, ry1)
        fw_iserr__ = 0
      end subroutine jyzo_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (rj_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("rj                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (dj_shape__
     &(1))) then
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
        if ((n) .lt. 0 .or. (n) .gt. (x_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("x                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if ((n) .lt. 0 .or. (n) .gt. (w_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("w                                   
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call herzo(n, x, w)
        fw_iserr__ = 0
      end subroutine herzo_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (sk_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (dk_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dk                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sphk(n, x, nm, sk, dk)
        fw_iserr__ = 0
      end subroutine sphk_c
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
        if ((200) .lt. 0 .or. (200) .gt. (eg_shape__(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("eg                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call segv(m, n, c, kd, cv, eg)
        fw_iserr__ = 0
      end subroutine segv_c
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
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (sy_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("sy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        if (((n) - (0) + 1) .lt. 0 .or. ((n) - (0) + 1) .gt. (dy_shape__
     &(1))) then
            fw_iserr__ = FW_ARR_DIM__
            fw_errstr__ = transfer("dy                                  
     &                           ", fw_errstr__)
            fw_errstr__(fw_errstr_len) = C_NULL_CHAR
            return
        endif
        call sphy(n, x, nm, sy, dy)
        fw_iserr__ = 0
      end subroutine sphy_c
