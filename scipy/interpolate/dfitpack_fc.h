#include "fwrap_ktp_header.h"

#if !defined(FORTRAN_CALLSPEC)
#define FORTRAN_CALLSPEC
#endif

#if !defined(NO_FORTRAN_MANGLING)
    #if !defined(PREPEND_FORTRAN) && defined(NO_APPEND_FORTRAN) && !defined(UPPERCASE_FORTRAN)
        #define NO_FORTRAN_MANGLING 1
    #endif
#endif
#if defined(NO_FORTRAN_MANGLING)
    #define F_FUNC(f,F) f
#else
    #if defined(PREPEND_FORTRAN)
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) _##F
            #else
                #define F_FUNC(f,F) _##f
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) _##F##_
            #else
                #define F_FUNC(f,F) _##f##_
            #endif
        #endif
    #else
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) F
            #else
                #error Can not happen
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) F##_
            #else
                #define F_FUNC(f,F) f##_
            #endif
        #endif
    #endif
#endif

#if defined(__cplusplus)
extern "C" {
#endif
FORTRAN_CALLSPEC void F_FUNC(bispeu,BISPEU)(fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * z, fwi_integer_t * m, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(bispev,BISPEV)(fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * x, fwi_integer_t * mx, fwr_real_x8_t * y, fwi_integer_t * my, fwr_real_x8_t * z, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(clocur,CLOCUR)(fwi_integer_t * iopt, fwi_integer_t * ipar, fwi_integer_t * idim, fwi_integer_t * m, fwr_real_x8_t * u, fwi_integer_t * mx, fwr_real_x8_t * x, fwr_real_x8_t * w, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * n, fwr_real_x8_t * t, fwi_integer_t * nc, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(cocosp,COCOSP)(fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * e, fwi_integer_t * maxtr, fwi_integer_t * maxbin, fwr_real_x8_t * c, fwr_real_x8_t * sq, fwr_real_x8_t * sx, fwl_logical_t * bind, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(concon,CONCON)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwr_real_x8_t * v, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * maxtr, fwi_integer_t * maxbin, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * sq, fwr_real_x8_t * sx, fwl_logical_t * bind, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(concur,CONCUR)(fwi_integer_t * iopt, fwi_integer_t * idim, fwi_integer_t * m, fwr_real_x8_t * u, fwi_integer_t * mx, fwr_real_x8_t * x, fwr_real_x8_t * xx, fwr_real_x8_t * w, fwi_integer_t * ib, fwr_real_x8_t * db, fwi_integer_t * nb, fwi_integer_t * ie, fwr_real_x8_t * de, fwi_integer_t * ne, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * n, fwr_real_x8_t * t, fwi_integer_t * nc, fwr_real_x8_t * c, fwi_integer_t * np, fwr_real_x8_t * cp, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(cualde,CUALDE)(fwi_integer_t * idim, fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * nc, fwi_integer_t * k1, fwr_real_x8_t * u, fwr_real_x8_t * d, fwi_integer_t * nd, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(curev,CUREV)(fwi_integer_t * idim, fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * nc, fwi_integer_t * k, fwr_real_x8_t * u, fwi_integer_t * m, fwr_real_x8_t * x, fwi_integer_t * mx, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(curfit,CURFIT)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC fwr_real_x8_t F_FUNC(dblint,DBLINT)(fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwr_real_x8_t * yb, fwr_real_x8_t * ye, fwr_real_x8_t * wrk);
FORTRAN_CALLSPEC fwr_real_x8_t F_FUNC(evapol,EVAPOL)(fwr_real_x8_t * tu, fwi_integer_t * nu, fwr_real_x8_t * tv, fwi_integer_t * nv, fwr_real_x8_t * c, fwr_real_x8_t * rad, fwr_real_x8_t * x, fwr_real_x8_t * y);
FORTRAN_CALLSPEC void F_FUNC(fourco,FOURCO)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwr_real_x8_t * alfa, fwi_integer_t * m, fwr_real_x8_t * ress, fwr_real_x8_t * resc, fwr_real_x8_t * wrk1, fwr_real_x8_t * wrk2, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpader,FPADER)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k1, fwr_real_x8_t * x, fwi_integer_t * l, fwr_real_x8_t * d);
FORTRAN_CALLSPEC void F_FUNC(fpadno,FPADNO)(fwi_integer_t * maxtr, fwi_integer_t * up, fwi_integer_t * left, fwi_integer_t * right, fwi_integer_t * info, fwi_integer_t * count, fwi_integer_t * merk, fwi_integer_t * jbind, fwi_integer_t * n1, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpadpo,FPADPO)(fwi_integer_t * idim, fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * nc, fwi_integer_t * k, fwr_real_x8_t * cp, fwi_integer_t * np, fwr_real_x8_t * cc, fwr_real_x8_t * t1, fwr_real_x8_t * t2);
FORTRAN_CALLSPEC void F_FUNC(fpback,FPBACK)(fwr_real_x8_t * a, fwr_real_x8_t * z, fwi_integer_t * n, fwi_integer_t * k, fwr_real_x8_t * c, fwi_integer_t * nest);
FORTRAN_CALLSPEC void F_FUNC(fpbacp,FPBACP)(fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * z, fwi_integer_t * n, fwi_integer_t * k, fwr_real_x8_t * c, fwi_integer_t * k1, fwi_integer_t * nest);
FORTRAN_CALLSPEC void F_FUNC(fpbfou,FPBFOU)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * par, fwr_real_x8_t * ress, fwr_real_x8_t * resc);
FORTRAN_CALLSPEC void F_FUNC(fpbisp,FPBISP)(fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * x, fwi_integer_t * mx, fwr_real_x8_t * y, fwi_integer_t * my, fwr_real_x8_t * z, fwr_real_x8_t * wx, fwr_real_x8_t * wy, fwi_integer_t * lx, fwi_integer_t * ly);
FORTRAN_CALLSPEC void F_FUNC(fpbspl,FPBSPL)(fwr_real_x8_t * t, fwi_integer_t * n, fwi_integer_t * k, fwr_real_x8_t * x, fwi_integer_t * l, fwr_real_x8_t * h);
FORTRAN_CALLSPEC void F_FUNC(fpchec,FPCHEC)(fwr_real_x8_t * x, fwi_integer_t * m, fwr_real_x8_t * t, fwi_integer_t * n, fwi_integer_t * k, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpched,FPCHED)(fwr_real_x8_t * x, fwi_integer_t * m, fwr_real_x8_t * t, fwi_integer_t * n, fwi_integer_t * k, fwi_integer_t * ib, fwi_integer_t * ie, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpchep,FPCHEP)(fwr_real_x8_t * x, fwi_integer_t * m, fwr_real_x8_t * t, fwi_integer_t * n, fwi_integer_t * k, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpclos,FPCLOS)(fwi_integer_t * iopt, fwi_integer_t * idim, fwi_integer_t * m, fwr_real_x8_t * u, fwi_integer_t * mx, fwr_real_x8_t * x, fwr_real_x8_t * w, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * n, fwr_real_x8_t * t, fwi_integer_t * nc, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fpint, fwr_real_x8_t * z, fwr_real_x8_t * a1, fwr_real_x8_t * a2, fwr_real_x8_t * b, fwr_real_x8_t * g1, fwr_real_x8_t * g2, fwr_real_x8_t * q, fwi_integer_t * nrdata, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpcoco,FPCOCO)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwr_real_x8_t * v, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * maxtr, fwi_integer_t * maxbin, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * sq, fwr_real_x8_t * sx, fwl_logical_t * bind, fwr_real_x8_t * e, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpcons,FPCONS)(fwi_integer_t * iopt, fwi_integer_t * idim, fwi_integer_t * m, fwr_real_x8_t * u, fwi_integer_t * mx, fwr_real_x8_t * x, fwr_real_x8_t * w, fwi_integer_t * ib, fwi_integer_t * ie, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * n, fwr_real_x8_t * t, fwi_integer_t * nc, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fpint, fwr_real_x8_t * z, fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * g, fwr_real_x8_t * q, fwi_integer_t * nrdata, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpcosp,FPCOSP)(fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * e, fwi_integer_t * maxtr, fwi_integer_t * maxbin, fwr_real_x8_t * c, fwr_real_x8_t * sq, fwr_real_x8_t * sx, fwl_logical_t * bind, fwi_integer_t * nm, fwi_integer_t * mb, fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * const, fwr_real_x8_t * z, fwr_real_x8_t * zz, fwr_real_x8_t * u, fwr_real_x8_t * q, fwi_integer_t * info, fwi_integer_t * up, fwi_integer_t * left, fwi_integer_t * right, fwi_integer_t * jbind, fwi_integer_t * ibind, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpcsin,FPCSIN)(fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * par, fwr_real_x8_t * sia, fwr_real_x8_t * coa, fwr_real_x8_t * sib, fwr_real_x8_t * cob, fwr_real_x8_t * ress, fwr_real_x8_t * resc);
FORTRAN_CALLSPEC void F_FUNC(fpcurf,FPCURF)(fwi_integer_t * iopt, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwi_integer_t * m, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fpint, fwr_real_x8_t * z, fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * g, fwr_real_x8_t * q, fwi_integer_t * nrdata, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpcuro,FPCURO)(fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * c, fwr_real_x8_t * d, fwr_real_x8_t * x, fwi_integer_t * n);
FORTRAN_CALLSPEC void F_FUNC(fpcyt1,FPCYT1)(fwr_real_x8_t * a, fwi_integer_t * n, fwi_integer_t * nn);
FORTRAN_CALLSPEC void F_FUNC(fpcyt2,FPCYT2)(fwr_real_x8_t * a, fwi_integer_t * n, fwr_real_x8_t * b, fwr_real_x8_t * c, fwi_integer_t * nn);
FORTRAN_CALLSPEC void F_FUNC(fpdeno,FPDENO)(fwi_integer_t * maxtr, fwi_integer_t * up, fwi_integer_t * left, fwi_integer_t * right, fwi_integer_t * nbind, fwi_integer_t * merk);
FORTRAN_CALLSPEC void F_FUNC(fpdisc,FPDISC)(fwr_real_x8_t * t, fwi_integer_t * n, fwi_integer_t * k2, fwr_real_x8_t * b, fwi_integer_t * nest);
FORTRAN_CALLSPEC void F_FUNC(fpfrno,FPFRNO)(fwi_integer_t * maxtr, fwi_integer_t * up, fwi_integer_t * left, fwi_integer_t * right, fwi_integer_t * info, fwi_integer_t * point, fwi_integer_t * merk, fwi_integer_t * n1, fwi_integer_t * count, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpgivs,FPGIVS)(fwr_real_x8_t * piv, fwr_real_x8_t * ww, fwr_real_x8_t * cos, fwr_real_x8_t * sin);
FORTRAN_CALLSPEC void F_FUNC(fpgrdi,FPGRDI)(fwi_integer_t * ifsu, fwi_integer_t * ifsv, fwi_integer_t * ifbu, fwi_integer_t * ifbv, fwi_integer_t * iback, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * z, fwi_integer_t * mz, fwr_real_x8_t * dz, fwi_integer_t * iop0, fwi_integer_t * iop1, fwr_real_x8_t * tu, fwi_integer_t * nu, fwr_real_x8_t * tv, fwi_integer_t * nv, fwr_real_x8_t * p, fwr_real_x8_t * c, fwi_integer_t * nc, fwr_real_x8_t * sq, fwr_real_x8_t * fp, fwr_real_x8_t * fpu, fwr_real_x8_t * fpv, fwi_integer_t * mm, fwi_integer_t * mvnu, fwr_real_x8_t * spu, fwr_real_x8_t * spv, fwr_real_x8_t * right, fwr_real_x8_t * q, fwr_real_x8_t * au, fwr_real_x8_t * av1, fwr_real_x8_t * av2, fwr_real_x8_t * bu, fwr_real_x8_t * bv, fwr_real_x8_t * aa, fwr_real_x8_t * bb, fwr_real_x8_t * cc, fwr_real_x8_t * cosi, fwi_integer_t * nru, fwi_integer_t * nrv);
FORTRAN_CALLSPEC void F_FUNC(fpgrpa,FPGRPA)(fwi_integer_t * ifsu, fwi_integer_t * ifsv, fwi_integer_t * ifbu, fwi_integer_t * ifbv, fwi_integer_t * idim, fwi_integer_t * ipar, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * z, fwi_integer_t * mz, fwr_real_x8_t * tu, fwi_integer_t * nu, fwr_real_x8_t * tv, fwi_integer_t * nv, fwr_real_x8_t * p, fwr_real_x8_t * c, fwi_integer_t * nc, fwr_real_x8_t * fp, fwr_real_x8_t * fpu, fwr_real_x8_t * fpv, fwi_integer_t * mm, fwi_integer_t * mvnu, fwr_real_x8_t * spu, fwr_real_x8_t * spv, fwr_real_x8_t * right, fwr_real_x8_t * q, fwr_real_x8_t * au, fwr_real_x8_t * au1, fwr_real_x8_t * av, fwr_real_x8_t * av1, fwr_real_x8_t * bu, fwr_real_x8_t * bv, fwi_integer_t * nru, fwi_integer_t * nrv);
FORTRAN_CALLSPEC void F_FUNC(fpgrre,FPGRRE)(fwi_integer_t * ifsx, fwi_integer_t * ifsy, fwi_integer_t * ifbx, fwi_integer_t * ifby, fwr_real_x8_t * x, fwi_integer_t * mx, fwr_real_x8_t * y, fwi_integer_t * my, fwr_real_x8_t * z, fwi_integer_t * mz, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * p, fwr_real_x8_t * c, fwi_integer_t * nc, fwr_real_x8_t * fp, fwr_real_x8_t * fpx, fwr_real_x8_t * fpy, fwi_integer_t * mm, fwi_integer_t * mynx, fwi_integer_t * kx1, fwi_integer_t * kx2, fwi_integer_t * ky1, fwi_integer_t * ky2, fwr_real_x8_t * spx, fwr_real_x8_t * spy, fwr_real_x8_t * right, fwr_real_x8_t * q, fwr_real_x8_t * ax, fwr_real_x8_t * ay, fwr_real_x8_t * bx, fwr_real_x8_t * by, fwi_integer_t * nrx, fwi_integer_t * nry);
FORTRAN_CALLSPEC void F_FUNC(fpgrsp,FPGRSP)(fwi_integer_t * ifsu, fwi_integer_t * ifsv, fwi_integer_t * ifbu, fwi_integer_t * ifbv, fwi_integer_t * iback, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * r, fwi_integer_t * mr, fwr_real_x8_t * dr, fwi_integer_t * iop0, fwi_integer_t * iop1, fwr_real_x8_t * tu, fwi_integer_t * nu, fwr_real_x8_t * tv, fwi_integer_t * nv, fwr_real_x8_t * p, fwr_real_x8_t * c, fwi_integer_t * nc, fwr_real_x8_t * sq, fwr_real_x8_t * fp, fwr_real_x8_t * fpu, fwr_real_x8_t * fpv, fwi_integer_t * mm, fwi_integer_t * mvnu, fwr_real_x8_t * spu, fwr_real_x8_t * spv, fwr_real_x8_t * right, fwr_real_x8_t * q, fwr_real_x8_t * au, fwr_real_x8_t * av1, fwr_real_x8_t * av2, fwr_real_x8_t * bu, fwr_real_x8_t * bv, fwr_real_x8_t * a0, fwr_real_x8_t * a1, fwr_real_x8_t * b0, fwr_real_x8_t * b1, fwr_real_x8_t * c0, fwr_real_x8_t * c1, fwr_real_x8_t * cosi, fwi_integer_t * nru, fwi_integer_t * nrv);
FORTRAN_CALLSPEC void F_FUNC(fpinst,FPINST)(fwi_integer_t * iopt, fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k, fwr_real_x8_t * x, fwi_integer_t * l, fwr_real_x8_t * tt, fwi_integer_t * nn, fwr_real_x8_t * cc, fwi_integer_t * nest);
FORTRAN_CALLSPEC void F_FUNC(fpintb,FPINTB)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * bint, fwi_integer_t * nk1, fwr_real_x8_t * x, fwr_real_x8_t * y);
FORTRAN_CALLSPEC void F_FUNC(fpknot,FPKNOT)(fwr_real_x8_t * x, fwi_integer_t * m, fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * fpint, fwi_integer_t * nrdata, fwi_integer_t * nrint, fwi_integer_t * nest, fwi_integer_t * istart);
FORTRAN_CALLSPEC void F_FUNC(fpopdi,FPOPDI)(fwi_integer_t * ifsu, fwi_integer_t * ifsv, fwi_integer_t * ifbu, fwi_integer_t * ifbv, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * z, fwi_integer_t * mz, fwr_real_x8_t * z0, fwr_real_x8_t * dz, fwi_integer_t * iopt, fwi_integer_t * ider, fwr_real_x8_t * tu, fwi_integer_t * nu, fwr_real_x8_t * tv, fwi_integer_t * nv, fwi_integer_t * nuest, fwi_integer_t * nvest, fwr_real_x8_t * p, fwr_real_x8_t * step, fwr_real_x8_t * c, fwi_integer_t * nc, fwr_real_x8_t * fp, fwr_real_x8_t * fpu, fwr_real_x8_t * fpv, fwi_integer_t * nru, fwi_integer_t * nrv, fwr_real_x8_t * wrk, fwi_integer_t * lwrk);
FORTRAN_CALLSPEC void F_FUNC(fpopsp,FPOPSP)(fwi_integer_t * ifsu, fwi_integer_t * ifsv, fwi_integer_t * ifbu, fwi_integer_t * ifbv, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * r, fwi_integer_t * mr, fwr_real_x8_t * r0, fwr_real_x8_t * r1, fwr_real_x8_t * dr, fwi_integer_t * iopt, fwi_integer_t * ider, fwr_real_x8_t * tu, fwi_integer_t * nu, fwr_real_x8_t * tv, fwi_integer_t * nv, fwi_integer_t * nuest, fwi_integer_t * nvest, fwr_real_x8_t * p, fwr_real_x8_t * step, fwr_real_x8_t * c, fwi_integer_t * nc, fwr_real_x8_t * fp, fwr_real_x8_t * fpu, fwr_real_x8_t * fpv, fwi_integer_t * nru, fwi_integer_t * nrv, fwr_real_x8_t * wrk, fwi_integer_t * lwrk);
FORTRAN_CALLSPEC void F_FUNC(fporde,FPORDE)(fwr_real_x8_t * x, fwr_real_x8_t * y, fwi_integer_t * m, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwi_integer_t * nummer, fwi_integer_t * index, fwi_integer_t * nreg);
FORTRAN_CALLSPEC void F_FUNC(fppara,FPPARA)(fwi_integer_t * iopt, fwi_integer_t * idim, fwi_integer_t * m, fwr_real_x8_t * u, fwi_integer_t * mx, fwr_real_x8_t * x, fwr_real_x8_t * w, fwr_real_x8_t * ub, fwr_real_x8_t * ue, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * n, fwr_real_x8_t * t, fwi_integer_t * nc, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fpint, fwr_real_x8_t * z, fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * g, fwr_real_x8_t * q, fwi_integer_t * nrdata, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fppasu,FPPASU)(fwi_integer_t * iopt, fwi_integer_t * ipar, fwi_integer_t * idim, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * z, fwi_integer_t * mz, fwr_real_x8_t * s, fwi_integer_t * nuest, fwi_integer_t * nvest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * nc, fwi_integer_t * nu, fwr_real_x8_t * tu, fwi_integer_t * nv, fwr_real_x8_t * tv, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fp0, fwr_real_x8_t * fpold, fwr_real_x8_t * reducu, fwr_real_x8_t * reducv, fwr_real_x8_t * fpintu, fwr_real_x8_t * fpintv, fwi_integer_t * lastdi, fwi_integer_t * nplusu, fwi_integer_t * nplusv, fwi_integer_t * nru, fwi_integer_t * nrv, fwi_integer_t * nrdatu, fwi_integer_t * nrdatv, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpperi,FPPERI)(fwi_integer_t * iopt, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwi_integer_t * m, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fpint, fwr_real_x8_t * z, fwr_real_x8_t * a1, fwr_real_x8_t * a2, fwr_real_x8_t * b, fwr_real_x8_t * g1, fwr_real_x8_t * g2, fwr_real_x8_t * q, fwi_integer_t * nrdata, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fppocu,FPPOCU)(fwi_integer_t * idim, fwi_integer_t * k, fwr_real_x8_t * a, fwr_real_x8_t * b, fwi_integer_t * ib, fwr_real_x8_t * db, fwi_integer_t * nb, fwi_integer_t * ie, fwr_real_x8_t * de, fwi_integer_t * ne, fwr_real_x8_t * cp, fwi_integer_t * np);
FORTRAN_CALLSPEC void F_FUNC(fppogr,FPPOGR)(fwi_integer_t * iopt, fwi_integer_t * ider, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * z, fwi_integer_t * mz, fwr_real_x8_t * z0, fwr_real_x8_t * r, fwr_real_x8_t * s, fwi_integer_t * nuest, fwi_integer_t * nvest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * nc, fwi_integer_t * nu, fwr_real_x8_t * tu, fwi_integer_t * nv, fwr_real_x8_t * tv, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fp0, fwr_real_x8_t * fpold, fwr_real_x8_t * reducu, fwr_real_x8_t * reducv, fwr_real_x8_t * fpintu, fwr_real_x8_t * fpintv, fwr_real_x8_t * dz, fwr_real_x8_t * step, fwi_integer_t * lastdi, fwi_integer_t * nplusu, fwi_integer_t * nplusv, fwi_integer_t * lasttu, fwi_integer_t * nru, fwi_integer_t * nrv, fwi_integer_t * nrdatu, fwi_integer_t * nrdatv, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fppola,FPPOLA)(fwi_integer_t * iopt1, fwi_integer_t * iopt2, fwi_integer_t * iopt3, fwi_integer_t * m, fwr_real_x8_t * u, fwr_real_x8_t * v, fwr_real_x8_t * z, fwr_real_x8_t * w, fwr_real_x8_t * rad, fwr_real_x8_t * s, fwi_integer_t * nuest, fwi_integer_t * nvest, fwr_real_x8_t * eta, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * ib1, fwi_integer_t * ib3, fwi_integer_t * nc, fwi_integer_t * ncc, fwi_integer_t * intest, fwi_integer_t * nrest, fwi_integer_t * nu, fwr_real_x8_t * tu, fwi_integer_t * nv, fwr_real_x8_t * tv, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * sup, fwr_real_x8_t * fpint, fwr_real_x8_t * coord, fwr_real_x8_t * f, fwr_real_x8_t * ff, fwr_real_x8_t * row, fwr_real_x8_t * cs, fwr_real_x8_t * cosi, fwr_real_x8_t * a, fwr_real_x8_t * q, fwr_real_x8_t * bu, fwr_real_x8_t * bv, fwr_real_x8_t * spu, fwr_real_x8_t * spv, fwr_real_x8_t * h, fwi_integer_t * index, fwi_integer_t * nummer, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fprank,FPRANK)(fwr_real_x8_t * a, fwr_real_x8_t * f, fwi_integer_t * n, fwi_integer_t * m, fwi_integer_t * na, fwr_real_x8_t * tol, fwr_real_x8_t * c, fwr_real_x8_t * sq, fwi_integer_t * rank, fwr_real_x8_t * aa, fwr_real_x8_t * ff, fwr_real_x8_t * h);
FORTRAN_CALLSPEC fwr_real_x8_t F_FUNC(fprati,FPRATI)(fwr_real_x8_t * p1, fwr_real_x8_t * f1, fwr_real_x8_t * p2, fwr_real_x8_t * f2, fwr_real_x8_t * p3, fwr_real_x8_t * f3);
FORTRAN_CALLSPEC void F_FUNC(fpregr,FPREGR)(fwi_integer_t * iopt, fwr_real_x8_t * x, fwi_integer_t * mx, fwr_real_x8_t * y, fwi_integer_t * my, fwr_real_x8_t * z, fwi_integer_t * mz, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwr_real_x8_t * yb, fwr_real_x8_t * ye, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * s, fwi_integer_t * nxest, fwi_integer_t * nyest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * nc, fwi_integer_t * nx, fwr_real_x8_t * tx, fwi_integer_t * ny, fwr_real_x8_t * ty, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fp0, fwr_real_x8_t * fpold, fwr_real_x8_t * reducx, fwr_real_x8_t * reducy, fwr_real_x8_t * fpintx, fwr_real_x8_t * fpinty, fwi_integer_t * lastdi, fwi_integer_t * nplusx, fwi_integer_t * nplusy, fwi_integer_t * nrx, fwi_integer_t * nry, fwi_integer_t * nrdatx, fwi_integer_t * nrdaty, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fprota,FPROTA)(fwr_real_x8_t * cos, fwr_real_x8_t * sin, fwr_real_x8_t * a, fwr_real_x8_t * b);
FORTRAN_CALLSPEC void F_FUNC(fprppo,FPRPPO)(fwi_integer_t * nu, fwi_integer_t * nv, fwi_integer_t * if1, fwi_integer_t * if2, fwr_real_x8_t * cosi, fwr_real_x8_t * ratio, fwr_real_x8_t * c, fwr_real_x8_t * f, fwi_integer_t * ncoff);
FORTRAN_CALLSPEC void F_FUNC(fprpsp,FPRPSP)(fwi_integer_t * nt, fwi_integer_t * np, fwr_real_x8_t * co, fwr_real_x8_t * si, fwr_real_x8_t * c, fwr_real_x8_t * f, fwi_integer_t * ncoff);
FORTRAN_CALLSPEC void F_FUNC(fpseno,FPSENO)(fwi_integer_t * maxtr, fwi_integer_t * up, fwi_integer_t * left, fwi_integer_t * right, fwi_integer_t * info, fwi_integer_t * merk, fwi_integer_t * ibind, fwi_integer_t * nbind);
FORTRAN_CALLSPEC void F_FUNC(fpspgr,FPSPGR)(fwi_integer_t * iopt, fwi_integer_t * ider, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * r, fwi_integer_t * mr, fwr_real_x8_t * r0, fwr_real_x8_t * r1, fwr_real_x8_t * s, fwi_integer_t * nuest, fwi_integer_t * nvest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * nc, fwi_integer_t * nu, fwr_real_x8_t * tu, fwi_integer_t * nv, fwr_real_x8_t * tv, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fp0, fwr_real_x8_t * fpold, fwr_real_x8_t * reducu, fwr_real_x8_t * reducv, fwr_real_x8_t * fpintu, fwr_real_x8_t * fpintv, fwr_real_x8_t * dr, fwr_real_x8_t * step, fwi_integer_t * lastdi, fwi_integer_t * nplusu, fwi_integer_t * nplusv, fwi_integer_t * lastu0, fwi_integer_t * lastu1, fwi_integer_t * nru, fwi_integer_t * nrv, fwi_integer_t * nrdatu, fwi_integer_t * nrdatv, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpsphe,FPSPHE)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * teta, fwr_real_x8_t * phi, fwr_real_x8_t * r, fwr_real_x8_t * w, fwr_real_x8_t * s, fwi_integer_t * ntest, fwi_integer_t * npest, fwr_real_x8_t * eta, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * ib1, fwi_integer_t * ib3, fwi_integer_t * nc, fwi_integer_t * ncc, fwi_integer_t * intest, fwi_integer_t * nrest, fwi_integer_t * nt, fwr_real_x8_t * tt, fwi_integer_t * np, fwr_real_x8_t * tp, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * sup, fwr_real_x8_t * fpint, fwr_real_x8_t * coord, fwr_real_x8_t * f, fwr_real_x8_t * ff, fwr_real_x8_t * row, fwr_real_x8_t * coco, fwr_real_x8_t * cosi, fwr_real_x8_t * a, fwr_real_x8_t * q, fwr_real_x8_t * bt, fwr_real_x8_t * bp, fwr_real_x8_t * spt, fwr_real_x8_t * spp, fwr_real_x8_t * h, fwi_integer_t * index, fwi_integer_t * nummer, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpsuev,FPSUEV)(fwi_integer_t * idim, fwr_real_x8_t * tu, fwi_integer_t * nu, fwr_real_x8_t * tv, fwi_integer_t * nv, fwr_real_x8_t * c, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * f, fwr_real_x8_t * wu, fwr_real_x8_t * wv, fwi_integer_t * lu, fwi_integer_t * lv);
FORTRAN_CALLSPEC void F_FUNC(fpsurf,FPSURF)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * z, fwr_real_x8_t * w, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwr_real_x8_t * yb, fwr_real_x8_t * ye, fwi_integer_t * kxx, fwi_integer_t * kyy, fwr_real_x8_t * s, fwi_integer_t * nxest, fwi_integer_t * nyest, fwr_real_x8_t * eta, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * nmax, fwi_integer_t * km1, fwi_integer_t * km2, fwi_integer_t * ib1, fwi_integer_t * ib3, fwi_integer_t * nc, fwi_integer_t * intest, fwi_integer_t * nrest, fwi_integer_t * nx0, fwr_real_x8_t * tx, fwi_integer_t * ny0, fwr_real_x8_t * ty, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fp0, fwr_real_x8_t * fpint, fwr_real_x8_t * coord, fwr_real_x8_t * f, fwr_real_x8_t * ff, fwr_real_x8_t * a, fwr_real_x8_t * q, fwr_real_x8_t * bx, fwr_real_x8_t * by, fwr_real_x8_t * spx, fwr_real_x8_t * spy, fwr_real_x8_t * h, fwi_integer_t * index, fwi_integer_t * nummer, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(fpsysy,FPSYSY)(fwr_real_x8_t * a, fwi_integer_t * n, fwr_real_x8_t * g);
FORTRAN_CALLSPEC void F_FUNC(fptrnp,FPTRNP)(fwi_integer_t * m, fwi_integer_t * mm, fwi_integer_t * idim, fwi_integer_t * n, fwi_integer_t * nr, fwr_real_x8_t * sp, fwr_real_x8_t * p, fwr_real_x8_t * b, fwr_real_x8_t * z, fwr_real_x8_t * a, fwr_real_x8_t * q, fwr_real_x8_t * right);
FORTRAN_CALLSPEC void F_FUNC(fptrpe,FPTRPE)(fwi_integer_t * m, fwi_integer_t * mm, fwi_integer_t * idim, fwi_integer_t * n, fwi_integer_t * nr, fwr_real_x8_t * sp, fwr_real_x8_t * p, fwr_real_x8_t * b, fwr_real_x8_t * z, fwr_real_x8_t * a, fwr_real_x8_t * aa, fwr_real_x8_t * q, fwr_real_x8_t * right);
FORTRAN_CALLSPEC void F_FUNC(insert,INSERT)(fwi_integer_t * iopt, fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k, fwr_real_x8_t * x, fwr_real_x8_t * tt, fwi_integer_t * nn, fwr_real_x8_t * cc, fwi_integer_t * nest, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(parcur,PARCUR)(fwi_integer_t * iopt, fwi_integer_t * ipar, fwi_integer_t * idim, fwi_integer_t * m, fwr_real_x8_t * u, fwi_integer_t * mx, fwr_real_x8_t * x, fwr_real_x8_t * w, fwr_real_x8_t * ub, fwr_real_x8_t * ue, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * n, fwr_real_x8_t * t, fwi_integer_t * nc, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(parder,PARDER)(fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwi_integer_t * nux, fwi_integer_t * nuy, fwr_real_x8_t * x, fwi_integer_t * mx, fwr_real_x8_t * y, fwi_integer_t * my, fwr_real_x8_t * z, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(parsur,PARSUR)(fwi_integer_t * iopt, fwi_integer_t * ipar, fwi_integer_t * idim, fwi_integer_t * mu, fwr_real_x8_t * u, fwi_integer_t * mv, fwr_real_x8_t * v, fwr_real_x8_t * f, fwr_real_x8_t * s, fwi_integer_t * nuest, fwi_integer_t * nvest, fwi_integer_t * nu, fwr_real_x8_t * tu, fwi_integer_t * nv, fwr_real_x8_t * tv, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(percur,PERCUR)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(pogrid,POGRID)(fwi_integer_t * iopt, fwi_integer_t * ider, fwi_integer_t * mu, fwr_real_x8_t * u, fwi_integer_t * mv, fwr_real_x8_t * v, fwr_real_x8_t * z, fwr_real_x8_t * z0, fwr_real_x8_t * r, fwr_real_x8_t * s, fwi_integer_t * nuest, fwi_integer_t * nvest, fwi_integer_t * nu, fwr_real_x8_t * tu, fwi_integer_t * nv, fwr_real_x8_t * tv, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(polar,POLAR)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * z, fwr_real_x8_t * w, fwr_real_x8_t * rad, fwr_real_x8_t * s, fwi_integer_t * nuest, fwi_integer_t * nvest, fwr_real_x8_t * eps, fwi_integer_t * nu, fwr_real_x8_t * tu, fwi_integer_t * nv, fwr_real_x8_t * tv, fwr_real_x8_t * u, fwr_real_x8_t * v, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk1, fwi_integer_t * lwrk1, fwr_real_x8_t * wrk2, fwi_integer_t * lwrk2, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(profil,PROFIL)(fwi_integer_t * iopt, fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * u, fwi_integer_t * nu, fwr_real_x8_t * cu, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(regrid,REGRID)(fwi_integer_t * iopt, fwi_integer_t * mx, fwr_real_x8_t * x, fwi_integer_t * my, fwr_real_x8_t * y, fwr_real_x8_t * z, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwr_real_x8_t * yb, fwr_real_x8_t * ye, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * s, fwi_integer_t * nxest, fwi_integer_t * nyest, fwi_integer_t * nx, fwr_real_x8_t * tx, fwi_integer_t * ny, fwr_real_x8_t * ty, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(spalde,SPALDE)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k1, fwr_real_x8_t * x, fwr_real_x8_t * d, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(spgrid,SPGRID)(fwi_integer_t * iopt, fwi_integer_t * ider, fwi_integer_t * mu, fwr_real_x8_t * u, fwi_integer_t * mv, fwr_real_x8_t * v, fwr_real_x8_t * r, fwr_real_x8_t * r0, fwr_real_x8_t * r1, fwr_real_x8_t * s, fwi_integer_t * nuest, fwi_integer_t * nvest, fwi_integer_t * nu, fwr_real_x8_t * tu, fwi_integer_t * nv, fwr_real_x8_t * tv, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(sphere,SPHERE)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * teta, fwr_real_x8_t * phi, fwr_real_x8_t * r, fwr_real_x8_t * w, fwr_real_x8_t * s, fwi_integer_t * ntest, fwi_integer_t * npest, fwr_real_x8_t * eps, fwi_integer_t * nt, fwr_real_x8_t * tt, fwi_integer_t * np, fwr_real_x8_t * tp, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk1, fwi_integer_t * lwrk1, fwr_real_x8_t * wrk2, fwi_integer_t * lwrk2, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(splder,SPLDER)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k, fwi_integer_t * nu, fwr_real_x8_t * x, fwr_real_x8_t * y, fwi_integer_t * m, fwi_integer_t * e, fwr_real_x8_t * wrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(splev,SPLEV)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k, fwr_real_x8_t * x, fwr_real_x8_t * y, fwi_integer_t * m, fwi_integer_t * e, fwi_integer_t * ier);
FORTRAN_CALLSPEC fwr_real_x8_t F_FUNC(splint,SPLINT)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k, fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * wrk);
FORTRAN_CALLSPEC void F_FUNC(sproot,SPROOT)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwr_real_x8_t * zero, fwi_integer_t * mest, fwi_integer_t * m, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(surev,SUREV)(fwi_integer_t * idim, fwr_real_x8_t * tu, fwi_integer_t * nu, fwr_real_x8_t * tv, fwi_integer_t * nv, fwr_real_x8_t * c, fwr_real_x8_t * u, fwi_integer_t * mu, fwr_real_x8_t * v, fwi_integer_t * mv, fwr_real_x8_t * f, fwi_integer_t * mf, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(surfit,SURFIT)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * z, fwr_real_x8_t * w, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwr_real_x8_t * yb, fwr_real_x8_t * ye, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * s, fwi_integer_t * nxest, fwi_integer_t * nyest, fwi_integer_t * nmax, fwr_real_x8_t * eps, fwi_integer_t * nx, fwr_real_x8_t * tx, fwi_integer_t * ny, fwr_real_x8_t * ty, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk1, fwi_integer_t * lwrk1, fwr_real_x8_t * wrk2, fwi_integer_t * lwrk2, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define bispeu F_FUNC(bispeu,BISPEU)
#define bispev F_FUNC(bispev,BISPEV)
#define clocur F_FUNC(clocur,CLOCUR)
#define cocosp F_FUNC(cocosp,COCOSP)
#define concon F_FUNC(concon,CONCON)
#define concur F_FUNC(concur,CONCUR)
#define cualde F_FUNC(cualde,CUALDE)
#define curev F_FUNC(curev,CUREV)
#define curfit F_FUNC(curfit,CURFIT)
#define dblint F_FUNC(dblint,DBLINT)
#define evapol F_FUNC(evapol,EVAPOL)
#define fourco F_FUNC(fourco,FOURCO)
#define fpader F_FUNC(fpader,FPADER)
#define fpadno F_FUNC(fpadno,FPADNO)
#define fpadpo F_FUNC(fpadpo,FPADPO)
#define fpback F_FUNC(fpback,FPBACK)
#define fpbacp F_FUNC(fpbacp,FPBACP)
#define fpbfou F_FUNC(fpbfou,FPBFOU)
#define fpbisp F_FUNC(fpbisp,FPBISP)
#define fpbspl F_FUNC(fpbspl,FPBSPL)
#define fpchec F_FUNC(fpchec,FPCHEC)
#define fpched F_FUNC(fpched,FPCHED)
#define fpchep F_FUNC(fpchep,FPCHEP)
#define fpclos F_FUNC(fpclos,FPCLOS)
#define fpcoco F_FUNC(fpcoco,FPCOCO)
#define fpcons F_FUNC(fpcons,FPCONS)
#define fpcosp F_FUNC(fpcosp,FPCOSP)
#define fpcsin F_FUNC(fpcsin,FPCSIN)
#define fpcurf F_FUNC(fpcurf,FPCURF)
#define fpcuro F_FUNC(fpcuro,FPCURO)
#define fpcyt1 F_FUNC(fpcyt1,FPCYT1)
#define fpcyt2 F_FUNC(fpcyt2,FPCYT2)
#define fpdeno F_FUNC(fpdeno,FPDENO)
#define fpdisc F_FUNC(fpdisc,FPDISC)
#define fpfrno F_FUNC(fpfrno,FPFRNO)
#define fpgivs F_FUNC(fpgivs,FPGIVS)
#define fpgrdi F_FUNC(fpgrdi,FPGRDI)
#define fpgrpa F_FUNC(fpgrpa,FPGRPA)
#define fpgrre F_FUNC(fpgrre,FPGRRE)
#define fpgrsp F_FUNC(fpgrsp,FPGRSP)
#define fpinst F_FUNC(fpinst,FPINST)
#define fpintb F_FUNC(fpintb,FPINTB)
#define fpknot F_FUNC(fpknot,FPKNOT)
#define fpopdi F_FUNC(fpopdi,FPOPDI)
#define fpopsp F_FUNC(fpopsp,FPOPSP)
#define fporde F_FUNC(fporde,FPORDE)
#define fppara F_FUNC(fppara,FPPARA)
#define fppasu F_FUNC(fppasu,FPPASU)
#define fpperi F_FUNC(fpperi,FPPERI)
#define fppocu F_FUNC(fppocu,FPPOCU)
#define fppogr F_FUNC(fppogr,FPPOGR)
#define fppola F_FUNC(fppola,FPPOLA)
#define fprank F_FUNC(fprank,FPRANK)
#define fprati F_FUNC(fprati,FPRATI)
#define fpregr F_FUNC(fpregr,FPREGR)
#define fprota F_FUNC(fprota,FPROTA)
#define fprppo F_FUNC(fprppo,FPRPPO)
#define fprpsp F_FUNC(fprpsp,FPRPSP)
#define fpseno F_FUNC(fpseno,FPSENO)
#define fpspgr F_FUNC(fpspgr,FPSPGR)
#define fpsphe F_FUNC(fpsphe,FPSPHE)
#define fpsuev F_FUNC(fpsuev,FPSUEV)
#define fpsurf F_FUNC(fpsurf,FPSURF)
#define fpsysy F_FUNC(fpsysy,FPSYSY)
#define fptrnp F_FUNC(fptrnp,FPTRNP)
#define fptrpe F_FUNC(fptrpe,FPTRPE)
#define insert F_FUNC(insert,INSERT)
#define parcur F_FUNC(parcur,PARCUR)
#define parder F_FUNC(parder,PARDER)
#define parsur F_FUNC(parsur,PARSUR)
#define percur F_FUNC(percur,PERCUR)
#define pogrid F_FUNC(pogrid,POGRID)
#define polar F_FUNC(polar,POLAR)
#define profil F_FUNC(profil,PROFIL)
#define regrid F_FUNC(regrid,REGRID)
#define spalde F_FUNC(spalde,SPALDE)
#define spgrid F_FUNC(spgrid,SPGRID)
#define sphere F_FUNC(sphere,SPHERE)
#define splder F_FUNC(splder,SPLDER)
#define splev F_FUNC(splev,SPLEV)
#define splint F_FUNC(splint,SPLINT)
#define sproot F_FUNC(sproot,SPROOT)
#define surev F_FUNC(surev,SUREV)
#define surfit F_FUNC(surfit,SURFIT)
#endif
