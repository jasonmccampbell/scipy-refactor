
c     Calculate LU decomposition of a matrix
c     Author: Pearu Peterson, March 2002
c
c     prefixes: d,z,s,c   (double,complex double,float,complex float)
c     suffixes: _c,_r     (column major order,row major order)

      subroutine dlu_c(p,l,u,a,m,n,k,piv,info,permute_l,m1)
      integer m,n,piv(k),i,j,k,permute_l,m1
      double precision l(m,k),u(k,n),a(m,n)
      double precision p(m1,m1)



      external dgetrf,dlaswp
      call dgetrf(m,n,a,m,piv,info)
      if (info.lt.0) then
         return
      endif
      do 20 i=1,m
         do 10, j=1,n
            if (j.le.k) then
               if (i.eq.j) then
                  l(i,j) = 1d0
               elseif (i.gt.j) then
                  l(i,j) = a(i,j)
               endif
            endif
            if (i.le.k.and.i.le.j) then
               u(i,j) = a(i,j)
            endif
 10      continue
 20   continue
      if (permute_l.ne.0) then
         call dlaswp(k,l,m,1,k,piv,-1)
      else
         do 25 i=1,m
            p(i,i)=1d0
 25       continue
         call dlaswp(m,p,m,1,k,piv,-1)
      endif
      end

      subroutine zlu_c(p,l,u,a,m,n,k,piv,info,permute_l,m1)
      integer m,n,piv(k),i,j,k,permute_l,m1
      complex*16 l(m,k),u(k,n),a(m,n)
      double precision p(m1,m1)



      external zgetrf,zlaswp,dlaswp
      call zgetrf(m,n,a,m,piv,info)
      if (info.lt.0) then
         return
      endif
      do 20 i=1,m
         do 10, j=1,n
            if (j.le.k) then
               if (i.eq.j) then
                  l(i,j) = 1d0
               elseif (i.gt.j) then
                  l(i,j) = a(i,j)
               endif
            endif
            if (i.le.k.and.i.le.j) then
               u(i,j) = a(i,j)
            endif
 10      continue
 20   continue
      if (permute_l.ne.0) then
         call zlaswp(k,l,m,1,k,piv,-1)
      else
         do 25 i=1,m
            p(i,i)=1d0
 25       continue
         call dlaswp(m,p,m,1,k,piv,-1)
      endif
      end

      subroutine slu_c(p,l,u,a,m,n,k,piv,info,permute_l,m1)
      integer m,n,piv(k),i,j,k,permute_l,m1
      real l(m,k),u(k,n),a(m,n)
      real p(m1,m1)



      external sgetrf,slaswp
      call sgetrf(m,n,a,m,piv,info)
      if (info.lt.0) then
         return
      endif
      do 20 i=1,m
         do 10, j=1,n
            if (j.le.k) then
               if (i.eq.j) then
                  l(i,j) = 1e0
               elseif (i.gt.j) then
                  l(i,j) = a(i,j)
               endif
            endif
            if (i.le.k.and.i.le.j) then
               u(i,j) = a(i,j)
            endif
 10      continue
 20   continue
      if (permute_l.ne.0) then
         call slaswp(k,l,m,1,k,piv,-1)
      else
         do 25 i=1,m
            p(i,i)=1e0
 25       continue
         call slaswp(m,p,m,1,k,piv,-1)
      endif
      end

      subroutine clu_c(p,l,u,a,m,n,k,piv,info,permute_l,m1)
      integer m,n,piv(k),i,j,k,permute_l,m1
      complex l(m,k),u(k,n),a(m,n)
      real p(m1,m1)



      external cgetrf,claswp,slaswp
      call cgetrf(m,n,a,m,piv,info)
      if (info.lt.0) then
         return
      endif
      do 20 i=1,m
         do 10, j=1,n
            if (j.le.k) then
               if (i.eq.j) then
                  l(i,j) = 1e0
               elseif (i.gt.j) then
                  l(i,j) = a(i,j)
               endif
            endif
            if (i.le.k.and.i.le.j) then
               u(i,j) = a(i,j)
            endif
 10      continue
 20   continue
      if (permute_l.ne.0) then
         call claswp(k,l,m,1,k,piv,-1)
      else
         do 25 i=1,m
            p(i,i)=1e0
 25       continue
         call slaswp(m,p,m,1,k,piv,-1)
      endif
      end
