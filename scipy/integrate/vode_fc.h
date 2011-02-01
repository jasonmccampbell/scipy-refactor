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
FORTRAN_CALLSPEC void F_FUNC(dvode,DVODE)(void (*f)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_real_t *, fwr_dbl_t *, fwi_integer_t *), fwi_integer_t * neq, fwr_dbl_t * y, fwr_dbl_t * t, fwr_dbl_t * tout, fwi_integer_t * itol, fwr_dbl_t * rtol, fwr_dbl_t * atol, fwi_integer_t * itask, fwi_integer_t * istate, fwi_integer_t * iopt, fwr_dbl_t * rwork, fwi_integer_t * lrw, fwi_integer_t * iwork, fwi_integer_t * liw, void (*jac)(), fwi_integer_t * mf, fwr_dbl_t * rpar, fwi_integer_t * ipar);
FORTRAN_CALLSPEC void F_FUNC(dvhin,DVHIN)(fwi_integer_t * n, fwr_dbl_t * t0, fwr_dbl_t * y0, fwr_dbl_t * ydot, void (*f)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *), fwr_dbl_t * rpar, fwi_integer_t * ipar, fwr_dbl_t * tout, fwr_dbl_t * uround, fwr_dbl_t * ewt, fwi_integer_t * itol, fwr_dbl_t * atol, fwr_dbl_t * y, fwr_dbl_t * temp, fwr_dbl_t * h0, fwi_integer_t * niter, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(dvindy,DVINDY)(fwr_dbl_t * t, fwi_integer_t * k, fwr_dbl_t * yh, fwi_integer_t * ldyh, fwr_dbl_t * dky, fwi_integer_t * iflag);
FORTRAN_CALLSPEC void F_FUNC(dvstep,DVSTEP)(fwr_dbl_t * y, fwr_dbl_t * yh, fwi_integer_t * ldyh, fwr_dbl_t * yh1, fwr_dbl_t * ewt, fwr_dbl_t * savf, fwr_dbl_t * vsav, fwr_dbl_t * acor, fwr_dbl_t * wm, fwi_integer_t * iwm, void (*f)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *), void (*jac)(), void (*psol)(), void (*vnls)(fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *), fwr_dbl_t * rpar, fwi_integer_t * ipar);
FORTRAN_CALLSPEC void F_FUNC(dvset,DVSET)(void);
FORTRAN_CALLSPEC void F_FUNC(dvjust,DVJUST)(fwr_dbl_t * yh, fwi_integer_t * ldyh, fwi_integer_t * iord);
FORTRAN_CALLSPEC void F_FUNC(dvnlsd,DVNLSD)(fwr_dbl_t * y, fwr_dbl_t * yh, fwi_integer_t * ldyh, fwr_dbl_t * vsav, fwr_dbl_t * savf, fwr_dbl_t * ewt, fwr_dbl_t * acor, fwi_integer_t * iwm, fwr_dbl_t * wm, void (*f)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *), void (*jac)(), void (*pdum)(), fwi_integer_t * nflag, fwr_dbl_t * rpar, fwi_integer_t * ipar);
FORTRAN_CALLSPEC void F_FUNC(dvjac,DVJAC)(fwr_dbl_t * y, fwr_dbl_t * yh, fwi_integer_t * ldyh, fwr_dbl_t * ewt, fwr_dbl_t * ftem, fwr_dbl_t * savf, fwr_dbl_t * wm, fwi_integer_t * iwm, void (*f)(), void (*jac)(), fwi_integer_t * ierpj, fwr_dbl_t * rpar, fwi_integer_t * ipar);
FORTRAN_CALLSPEC void F_FUNC(dacopy,DACOPY)(fwi_integer_t * nrow, fwi_integer_t * ncol, fwr_dbl_t * a, fwi_integer_t * nrowa, fwr_dbl_t * b, fwi_integer_t * nrowb);
FORTRAN_CALLSPEC void F_FUNC(dvsol,DVSOL)(fwr_dbl_t * wm, fwi_integer_t * iwm, fwr_dbl_t * x, fwi_integer_t * iersl);
FORTRAN_CALLSPEC void F_FUNC(dvsrco,DVSRCO)(fwr_dbl_t * rsav, fwi_integer_t * isav, fwi_integer_t * job);
FORTRAN_CALLSPEC void F_FUNC(dewset,DEWSET)(fwi_integer_t * n, fwi_integer_t * itol, fwr_dbl_t * rtol, fwr_dbl_t * atol, fwr_dbl_t * ycur, fwr_dbl_t * ewt);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(dvnorm,DVNORM)(fwi_integer_t * n, fwr_dbl_t * v, fwr_dbl_t * w);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(d1mach,D1MACH)(fwi_integer_t * idum);
FORTRAN_CALLSPEC void F_FUNC(xerrwd,XERRWD)(char * msg, fwi_integer_t * nmes, fwi_integer_t * nerr, fwi_integer_t * level, fwi_integer_t * ni, fwi_integer_t * i1, fwi_integer_t * i2, fwi_integer_t * nr, fwr_dbl_t * r1, fwr_dbl_t * r2, size_t msg_len_);
FORTRAN_CALLSPEC void F_FUNC(xsetun,XSETUN)(fwi_integer_t * lun);
FORTRAN_CALLSPEC void F_FUNC(xsetf,XSETF)(fwi_integer_t * mflag);
FORTRAN_CALLSPEC fwi_integer_t F_FUNC(ixsav,IXSAV)(fwi_integer_t * ipar, fwi_integer_t * ivalue, fwl_logical_t * iset);
FORTRAN_CALLSPEC void F_FUNC(zvode,ZVODE)(void (*f)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwr_real_t *, fwr_real_t *, fwi_integer_t *), fwi_integer_t * neq, fwc_dbl_complex_t * y, fwr_dbl_t * t, fwr_dbl_t * tout, fwi_integer_t * itol, fwr_dbl_t * rtol, fwr_dbl_t * atol, fwi_integer_t * itask, fwi_integer_t * istate, fwi_integer_t * iopt, fwc_dbl_complex_t * zwork, fwi_integer_t * lzw, fwr_dbl_t * rwork, fwi_integer_t * lrw, fwi_integer_t * iwork, fwi_integer_t * liw, void (*jac)(), fwi_integer_t * mf, fwr_real_t * rpar, fwi_integer_t * ipar);
FORTRAN_CALLSPEC void F_FUNC(zvhin,ZVHIN)(fwi_integer_t * n, fwr_dbl_t * t0, fwc_dbl_complex_t * y0, fwc_dbl_complex_t * ydot, void (*f)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwc_dbl_complex_t *, fwr_real_t *, fwi_integer_t *), fwr_real_t * rpar, fwi_integer_t * ipar, fwr_dbl_t * tout, fwr_dbl_t * uround, fwr_dbl_t * ewt, fwi_integer_t * itol, fwr_dbl_t * atol, fwc_dbl_complex_t * y, fwc_dbl_complex_t * temp, fwr_dbl_t * h0, fwi_integer_t * niter, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(zvindy,ZVINDY)(fwr_dbl_t * t, fwi_integer_t * k, fwc_dbl_complex_t * yh, fwi_integer_t * ldyh, fwc_dbl_complex_t * dky, fwi_integer_t * iflag);
FORTRAN_CALLSPEC void F_FUNC(zvstep,ZVSTEP)(fwc_dbl_complex_t * y, fwc_dbl_complex_t * yh, fwi_integer_t * ldyh, fwc_dbl_complex_t * yh1, fwr_dbl_t * ewt, fwc_dbl_complex_t * savf, fwc_dbl_complex_t * vsav, fwc_dbl_complex_t * acor, fwc_dbl_complex_t * wm, fwi_integer_t * iwm, void (*f)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwc_dbl_complex_t *, fwr_real_t *, fwi_integer_t *), void (*jac)(), void (*psol)(), void (*vnls)(fwc_dbl_complex_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fwc_dbl_complex_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwc_dbl_complex_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *, fwr_real_t *, fwi_integer_t *), fwr_real_t * rpar, fwi_integer_t * ipar);
FORTRAN_CALLSPEC void F_FUNC(zvset,ZVSET)(void);
FORTRAN_CALLSPEC void F_FUNC(zvjust,ZVJUST)(fwc_dbl_complex_t * yh, fwi_integer_t * ldyh, fwi_integer_t * iord);
FORTRAN_CALLSPEC void F_FUNC(zvnlsd,ZVNLSD)(fwc_dbl_complex_t * y, fwc_dbl_complex_t * yh, fwi_integer_t * ldyh, fwc_dbl_complex_t * vsav, fwc_dbl_complex_t * savf, fwr_dbl_t * ewt, fwc_dbl_complex_t * acor, fwi_integer_t * iwm, fwc_dbl_complex_t * wm, void (*f)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwc_dbl_complex_t *, fwr_real_t *, fwi_integer_t *), void (*jac)(), void (*pdum)(), fwi_integer_t * nflag, fwr_real_t * rpar, fwi_integer_t * ipar);
FORTRAN_CALLSPEC void F_FUNC(zvjac,ZVJAC)(fwc_dbl_complex_t * y, fwc_dbl_complex_t * yh, fwi_integer_t * ldyh, fwr_dbl_t * ewt, fwc_dbl_complex_t * ftem, fwc_dbl_complex_t * savf, fwc_dbl_complex_t * wm, fwi_integer_t * iwm, void (*f)(), void (*jac)(), fwi_integer_t * ierpj, fwr_real_t * rpar, fwi_integer_t * ipar);
FORTRAN_CALLSPEC void F_FUNC(zacopy,ZACOPY)(fwi_integer_t * nrow, fwi_integer_t * ncol, fwc_dbl_complex_t * a, fwi_integer_t * nrowa, fwc_dbl_complex_t * b, fwi_integer_t * nrowb);
FORTRAN_CALLSPEC void F_FUNC(zvsol,ZVSOL)(fwc_dbl_complex_t * wm, fwi_integer_t * iwm, fwc_dbl_complex_t * x, fwi_integer_t * iersl);
FORTRAN_CALLSPEC void F_FUNC(zvsrco,ZVSRCO)(fwr_dbl_t * rsav, fwi_integer_t * isav, fwi_integer_t * job);
FORTRAN_CALLSPEC void F_FUNC(zewset,ZEWSET)(fwi_integer_t * n, fwi_integer_t * itol, fwr_dbl_t * rtol, fwr_dbl_t * atol, fwc_dbl_complex_t * ycur, fwr_dbl_t * ewt);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(zvnorm,ZVNORM)(fwi_integer_t * n, fwc_dbl_complex_t * v, fwr_dbl_t * w);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(zabssq,ZABSSQ)(fwc_dbl_complex_t * z);
FORTRAN_CALLSPEC void F_FUNC(dzscal,DZSCAL)(fwi_integer_t * n, fwr_dbl_t * da, fwc_dbl_complex_t * zx, fwi_integer_t * incx);
FORTRAN_CALLSPEC void F_FUNC(dzaxpy,DZAXPY)(fwi_integer_t * n, fwr_dbl_t * da, fwc_dbl_complex_t * zx, fwi_integer_t * incx, fwc_dbl_complex_t * zy, fwi_integer_t * incy);
FORTRAN_CALLSPEC fwr_dbl_t F_FUNC(dumach,DUMACH)(void);
FORTRAN_CALLSPEC void F_FUNC(dumsum,DUMSUM)(fwr_dbl_t * a, fwr_dbl_t * b, fwr_dbl_t * c);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define dvode F_FUNC(dvode,DVODE)
#define dvhin F_FUNC(dvhin,DVHIN)
#define dvindy F_FUNC(dvindy,DVINDY)
#define dvstep F_FUNC(dvstep,DVSTEP)
#define dvset F_FUNC(dvset,DVSET)
#define dvjust F_FUNC(dvjust,DVJUST)
#define dvnlsd F_FUNC(dvnlsd,DVNLSD)
#define dvjac F_FUNC(dvjac,DVJAC)
#define dacopy F_FUNC(dacopy,DACOPY)
#define dvsol F_FUNC(dvsol,DVSOL)
#define dvsrco F_FUNC(dvsrco,DVSRCO)
#define dewset F_FUNC(dewset,DEWSET)
#define dvnorm F_FUNC(dvnorm,DVNORM)
#define d1mach F_FUNC(d1mach,D1MACH)
#define xerrwd F_FUNC(xerrwd,XERRWD)
#define xsetun F_FUNC(xsetun,XSETUN)
#define xsetf F_FUNC(xsetf,XSETF)
#define ixsav F_FUNC(ixsav,IXSAV)
#define zvode F_FUNC(zvode,ZVODE)
#define zvhin F_FUNC(zvhin,ZVHIN)
#define zvindy F_FUNC(zvindy,ZVINDY)
#define zvstep F_FUNC(zvstep,ZVSTEP)
#define zvset F_FUNC(zvset,ZVSET)
#define zvjust F_FUNC(zvjust,ZVJUST)
#define zvnlsd F_FUNC(zvnlsd,ZVNLSD)
#define zvjac F_FUNC(zvjac,ZVJAC)
#define zacopy F_FUNC(zacopy,ZACOPY)
#define zvsol F_FUNC(zvsol,ZVSOL)
#define zvsrco F_FUNC(zvsrco,ZVSRCO)
#define zewset F_FUNC(zewset,ZEWSET)
#define zvnorm F_FUNC(zvnorm,ZVNORM)
#define zabssq F_FUNC(zabssq,ZABSSQ)
#define dzscal F_FUNC(dzscal,DZSCAL)
#define dzaxpy F_FUNC(dzaxpy,DZAXPY)
#define dumach F_FUNC(dumach,DUMACH)
#define dumsum F_FUNC(dumsum,DUMSUM)
#endif
