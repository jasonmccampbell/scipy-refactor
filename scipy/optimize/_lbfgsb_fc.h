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
FORTRAN_CALLSPEC void F_FUNC(setulb,SETULB)(fwi_integer_t * n, fwi_integer_t * m, fwr_dbl_t * x, fwr_dbl_t * l, fwr_dbl_t * u, fwi_integer_t * nbd, fwr_dbl_t * f, fwr_dbl_t * g, fwr_dbl_t * factr, fwr_dbl_t * pgtol, fwr_dbl_t * wa, fwi_integer_t * iwa, fw_character_x60_t * task, fwi_integer_t * iprint, fw_character_x60_t * csave, fwl_logical_t * lsave, fwi_integer_t * isave, fwr_dbl_t * dsave);
FORTRAN_CALLSPEC void F_FUNC(mainlb,MAINLB)(fwi_integer_t * n, fwi_integer_t * m, fwr_dbl_t * x, fwr_dbl_t * l, fwr_dbl_t * u, fwi_integer_t * nbd, fwr_dbl_t * f, fwr_dbl_t * g, fwr_dbl_t * factr, fwr_dbl_t * pgtol, fwr_dbl_t * ws, fwr_dbl_t * wy, fwr_dbl_t * sy, fwr_dbl_t * ss, fwr_dbl_t * yy, fwr_dbl_t * wt, fwr_dbl_t * wn, fwr_dbl_t * snd, fwr_dbl_t * z, fwr_dbl_t * r, fwr_dbl_t * d, fwr_dbl_t * t, fwr_dbl_t * wa, fwr_dbl_t * sg, fwr_dbl_t * sgo, fwr_dbl_t * yg, fwr_dbl_t * ygo, fwi_integer_t * index, fwi_integer_t * iwhere, fwi_integer_t * indx2, fw_character_x60_t * task, fwi_integer_t * iprint, fw_character_x60_t * csave, fwl_logical_t * lsave, fwi_integer_t * isave, fwr_dbl_t * dsave);
FORTRAN_CALLSPEC void F_FUNC(active,ACTIVE)(fwi_integer_t * n, fwr_dbl_t * l, fwr_dbl_t * u, fwi_integer_t * nbd, fwr_dbl_t * x, fwi_integer_t * iwhere, fwi_integer_t * iprint, fwl_logical_t * prjctd, fwl_logical_t * cnstnd, fwl_logical_t * boxed);
FORTRAN_CALLSPEC void F_FUNC(bmv,BMV)(fwi_integer_t * m, fwr_dbl_t * sy, fwr_dbl_t * wt, fwi_integer_t * col, fwr_dbl_t * v, fwr_dbl_t * p, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(cauchy,CAUCHY)(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * l, fwr_dbl_t * u, fwi_integer_t * nbd, fwr_dbl_t * g, fwi_integer_t * iorder, fwi_integer_t * iwhere, fwr_dbl_t * t, fwr_dbl_t * d, fwr_dbl_t * xcp, fwi_integer_t * m, fwr_dbl_t * wy, fwr_dbl_t * ws, fwr_dbl_t * sy, fwr_dbl_t * wt, fwr_dbl_t * theta, fwi_integer_t * col, fwi_integer_t * head, fwr_dbl_t * p, fwr_dbl_t * c, fwr_dbl_t * wbp, fwr_dbl_t * v, fwi_integer_t * nint, fwr_dbl_t * sg, fwr_dbl_t * yg, fwi_integer_t * iprint, fwr_dbl_t * sbgnrm, fwi_integer_t * info, fwr_dbl_t * epsmch);
FORTRAN_CALLSPEC void F_FUNC(cmprlb,CMPRLB)(fwi_integer_t * n, fwi_integer_t * m, fwr_dbl_t * x, fwr_dbl_t * g, fwr_dbl_t * ws, fwr_dbl_t * wy, fwr_dbl_t * sy, fwr_dbl_t * wt, fwr_dbl_t * z, fwr_dbl_t * r, fwr_dbl_t * wa, fwi_integer_t * index, fwr_dbl_t * theta, fwi_integer_t * col, fwi_integer_t * head, fwi_integer_t * nfree, fwl_logical_t * cnstnd, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(errclb,ERRCLB)(fwi_integer_t * n, fwi_integer_t * m, fwr_dbl_t * factr, fwr_dbl_t * l, fwr_dbl_t * u, fwi_integer_t * nbd, fw_character_x60_t * task, fwi_integer_t * info, fwi_integer_t * k);
FORTRAN_CALLSPEC void F_FUNC(formk,FORMK)(fwi_integer_t * n, fwi_integer_t * nsub, fwi_integer_t * ind, fwi_integer_t * nenter, fwi_integer_t * ileave, fwi_integer_t * indx2, fwi_integer_t * iupdat, fwl_logical_t * updatd, fwr_dbl_t * wn, fwr_dbl_t * wn1, fwi_integer_t * m, fwr_dbl_t * ws, fwr_dbl_t * wy, fwr_dbl_t * sy, fwr_dbl_t * theta, fwi_integer_t * col, fwi_integer_t * head, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(formt,FORMT)(fwi_integer_t * m, fwr_dbl_t * wt, fwr_dbl_t * sy, fwr_dbl_t * ss, fwi_integer_t * col, fwr_dbl_t * theta, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(freev,FREEV)(fwi_integer_t * n, fwi_integer_t * nfree, fwi_integer_t * index, fwi_integer_t * nenter, fwi_integer_t * ileave, fwi_integer_t * indx2, fwi_integer_t * iwhere, fwl_logical_t * wrk, fwl_logical_t * updatd, fwl_logical_t * cnstnd, fwi_integer_t * iprint, fwi_integer_t * iter);
FORTRAN_CALLSPEC void F_FUNC(hpsolb,HPSOLB)(fwi_integer_t * n, fwr_dbl_t * t, fwi_integer_t * iorder, fwi_integer_t * iheap);
FORTRAN_CALLSPEC void F_FUNC(lnsrlb,LNSRLB)(fwi_integer_t * n, fwr_dbl_t * l, fwr_dbl_t * u, fwi_integer_t * nbd, fwr_dbl_t * x, fwr_dbl_t * f, fwr_dbl_t * fold, fwr_dbl_t * gd, fwr_dbl_t * gdold, fwr_dbl_t * g, fwr_dbl_t * d, fwr_dbl_t * r, fwr_dbl_t * t, fwr_dbl_t * z, fwr_dbl_t * stp, fwr_dbl_t * dnorm, fwr_dbl_t * dtd, fwr_dbl_t * xstep, fwr_dbl_t * stpmx, fwi_integer_t * iter, fwi_integer_t * ifun, fwi_integer_t * iback, fwi_integer_t * nfgv, fwi_integer_t * info, fw_character_x60_t * task, fwl_logical_t * boxed, fwl_logical_t * cnstnd, fw_character_x60_t * csave, fwi_integer_t * isave, fwr_dbl_t * dsave);
FORTRAN_CALLSPEC void F_FUNC(matupd,MATUPD)(fwi_integer_t * n, fwi_integer_t * m, fwr_dbl_t * ws, fwr_dbl_t * wy, fwr_dbl_t * sy, fwr_dbl_t * ss, fwr_dbl_t * d, fwr_dbl_t * r, fwi_integer_t * itail, fwi_integer_t * iupdat, fwi_integer_t * col, fwi_integer_t * head, fwr_dbl_t * theta, fwr_dbl_t * rr, fwr_dbl_t * dr, fwr_dbl_t * stp, fwr_dbl_t * dtd);
FORTRAN_CALLSPEC void F_FUNC(prn1lb,PRN1LB)(fwi_integer_t * n, fwi_integer_t * m, fwr_dbl_t * l, fwr_dbl_t * u, fwr_dbl_t * x, fwi_integer_t * iprint, fwi_integer_t * itfile, fwr_dbl_t * epsmch);
FORTRAN_CALLSPEC void F_FUNC(prn2lb,PRN2LB)(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * f, fwr_dbl_t * g, fwi_integer_t * iprint, fwi_integer_t * itfile, fwi_integer_t * iter, fwi_integer_t * nfgv, fwi_integer_t * nact, fwr_dbl_t * sbgnrm, fwi_integer_t * nint, fw_character_x3_t * word, fwi_integer_t * iword, fwi_integer_t * iback, fwr_dbl_t * stp, fwr_dbl_t * xstep);
FORTRAN_CALLSPEC void F_FUNC(prn3lb,PRN3LB)(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * f, fw_character_x60_t * task, fwi_integer_t * iprint, fwi_integer_t * info, fwi_integer_t * itfile, fwi_integer_t * iter, fwi_integer_t * nfgv, fwi_integer_t * nintol, fwi_integer_t * nskip, fwi_integer_t * nact, fwr_dbl_t * sbgnrm, fwr_dbl_t * time, fwi_integer_t * nint, fw_character_x3_t * word, fwi_integer_t * iback, fwr_dbl_t * stp, fwr_dbl_t * xstep, fwi_integer_t * k, fwr_dbl_t * cachyt, fwr_dbl_t * sbtime, fwr_dbl_t * lnscht);
FORTRAN_CALLSPEC void F_FUNC(projgr,PROJGR)(fwi_integer_t * n, fwr_dbl_t * l, fwr_dbl_t * u, fwi_integer_t * nbd, fwr_dbl_t * x, fwr_dbl_t * g, fwr_dbl_t * sbgnrm);
FORTRAN_CALLSPEC void F_FUNC(subsm,SUBSM)(fwi_integer_t * n, fwi_integer_t * m, fwi_integer_t * nsub, fwi_integer_t * ind, fwr_dbl_t * l, fwr_dbl_t * u, fwi_integer_t * nbd, fwr_dbl_t * x, fwr_dbl_t * d, fwr_dbl_t * ws, fwr_dbl_t * wy, fwr_dbl_t * theta, fwi_integer_t * col, fwi_integer_t * head, fwi_integer_t * iword, fwr_dbl_t * wv, fwr_dbl_t * wn, fwi_integer_t * iprint, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dcsrch,DCSRCH)(fwr_dbl_t * f, fwr_dbl_t * g, fwr_dbl_t * stp, fwr_dbl_t * ftol, fwr_dbl_t * gtol, fwr_dbl_t * xtol, fwr_dbl_t * stpmin, fwr_dbl_t * stpmax, fw_character_xX_t * task, fwi_integer_t * isave, fwr_dbl_t * dsave);
FORTRAN_CALLSPEC void F_FUNC(dcstep,DCSTEP)(fwr_dbl_t * stx, fwr_dbl_t * fx, fwr_dbl_t * dx, fwr_dbl_t * sty, fwr_dbl_t * fy, fwr_dbl_t * dy, fwr_dbl_t * stp, fwr_dbl_t * fp, fwr_dbl_t * dp, fwl_logical_t * brackt, fwr_dbl_t * stpmin, fwr_dbl_t * stpmax);
FORTRAN_CALLSPEC void F_FUNC(timer,TIMER)(fwr_dbl_t * ttime);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(dpmeps,DPMEPS)(void);
FORTRAN_CALLSPEC void F_FUNC(dpofa,DPOFA)(fwr_dbl_t * a, fwi_integer_t * lda, fwi_integer_t * n, fwi_integer_t * info);
FORTRAN_CALLSPEC void F_FUNC(dtrsl,DTRSL)(fwr_dbl_t * t, fwi_integer_t * ldt, fwi_integer_t * n, fwr_dbl_t * b, fwi_integer_t * job, fwi_integer_t * info);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define setulb F_FUNC(setulb,SETULB)
#define mainlb F_FUNC(mainlb,MAINLB)
#define active F_FUNC(active,ACTIVE)
#define bmv F_FUNC(bmv,BMV)
#define cauchy F_FUNC(cauchy,CAUCHY)
#define cmprlb F_FUNC(cmprlb,CMPRLB)
#define errclb F_FUNC(errclb,ERRCLB)
#define formk F_FUNC(formk,FORMK)
#define formt F_FUNC(formt,FORMT)
#define freev F_FUNC(freev,FREEV)
#define hpsolb F_FUNC(hpsolb,HPSOLB)
#define lnsrlb F_FUNC(lnsrlb,LNSRLB)
#define matupd F_FUNC(matupd,MATUPD)
#define prn1lb F_FUNC(prn1lb,PRN1LB)
#define prn2lb F_FUNC(prn2lb,PRN2LB)
#define prn3lb F_FUNC(prn3lb,PRN3LB)
#define projgr F_FUNC(projgr,PROJGR)
#define subsm F_FUNC(subsm,SUBSM)
#define dcsrch F_FUNC(dcsrch,DCSRCH)
#define dcstep F_FUNC(dcstep,DCSTEP)
#define timer F_FUNC(timer,TIMER)
#define dpmeps F_FUNC(dpmeps,DPMEPS)
#define dpofa F_FUNC(dpofa,DPOFA)
#define dtrsl F_FUNC(dtrsl,DTRSL)
#endif
