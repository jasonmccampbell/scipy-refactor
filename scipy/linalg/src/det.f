
c     Calculate determinant of square matrix
c     Author: Pearu Peterson, March 2002
c
c     prefixes: d,z,s,c   (double,complex double,float,complex float)
c     suffixes: _c,_r     (column major order,row major order)

      subroutine ddet_c(det,a,n,piv,info)
      integer n,piv(n),i
      double precision det,a(n,n)
      external dgetrf
      call dgetrf(n,n,a,n,piv,info)
      det = 0d0
      if (info.ne.0) then
         return
      endif
      det = 1d0
      do 10,i=1,n
         if (piv(i).ne.i) then
            det = -det * a(i,i)
         else
            det = det * a(i,i)
         endif
 10   continue
      end

      subroutine ddet_r(det,a,n,piv,info)
      integer n,piv(n)
      double precision det,a(n,n)
      external ddet_c
      call ddet_c(det,a,n,piv,info)
      end

      subroutine sdet_c(det,a,n,piv,info)
      integer n,piv(n),i
      real det,a(n,n)
      external sgetrf
      call sgetrf(n,n,a,n,piv,info)
      det = 0e0
      if (info.ne.0) then
         return
      endif
      det = 1e0
      do 10,i=1,n
         if (piv(i).ne.i) then
            det = -det * a(i,i)
         else
            det = det * a(i,i)
         endif
 10   continue
      end

      subroutine sdet_r(det,a,n,piv,info)
      integer n,piv(n)
      real det,a(n,n)
      external sdet_c
      call sdet_c(det,a,n,piv,info)
      end

      subroutine zdet_c(det,a,n,piv,info)
      integer n,piv(n),i
      complex*16 det,a(n,n)
      external zgetrf
      call zgetrf(n,n,a,n,piv,info)
      det = (0d0,0d0)
      if (info.ne.0) then
         return
      endif
      det = (1d0,0d0)
      do 10,i=1,n
         if (piv(i).ne.i) then
            det = -det * a(i,i)
         else
            det = det * a(i,i)
         endif
 10   continue
      end

      subroutine zdet_r(det,a,n,piv,info)
      integer n,piv(n)
      complex*16 det,a(n,n)
      external zdet_c
      call zdet_c(det,a,n,piv,info)
      end

      subroutine cdet_c(det,a,n,piv,info)
      integer n,piv(n),i
      complex det,a(n,n)
      external cgetrf
      call cgetrf(n,n,a,n,piv,info)
      det = (0e0,0e0)
      if (info.ne.0) then
         return
      endif
      det = (1e0,0e0)
      do 10,i=1,n
         if (piv(i).ne.i) then
            det = -det * a(i,i)
         else
            det = det * a(i,i)
         endif
 10   continue
      end

      subroutine cdet_r(det,a,n,piv,info)
      integer n,piv(n)
      complex det,a(n,n)
      external cdet_c
      call cdet_c(det,a,n,piv,info)
      end



