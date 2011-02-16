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
    #define F_FUNC_MANGLING(f,F) f
#else
    #if defined(PREPEND_FORTRAN)
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC_MANGLING(f,F) _##F
            #else
                #define F_FUNC_MANGLING(f,F) _##f
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC_MANGLING(f,F) _##F##_
            #else
                #define F_FUNC_MANGLING(f,F) _##f##_
            #endif
        #endif
    #else
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC_MANGLING(f,F) F
            #else
                #error Can not happen
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC_MANGLING(f,F) F##_
            #else
                #define F_FUNC_MANGLING(f,F) f##_
            #endif
        #endif
    #endif
#endif

#if defined(__cplusplus)
#define F_FUNC(f,F) ::F_FUNC_MANGLING(f,F)
#else
#define F_FUNC(f,F) F_FUNC_MANGLING(f,F)
#endif


#if defined(__cplusplus)
extern "C" {
#endif
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lqmn,LQMN)(
    fwi_integer_t * mm,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * qm,
    fwr_dbl_t * qd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(clpmn,CLPMN)(
    fwi_integer_t * mm,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * y,
    fwc_complex_x16_t * cpm,
    fwc_complex_x16_t * cpd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(jdzo,JDZO)(
    fwi_integer_t * nt,
    fwi_integer_t * n,
    fwi_integer_t * m,
    fwi_integer_t * p,
    fwr_dbl_t * zo
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(bernob,BERNOB)(
    fwi_integer_t * n,
    fwr_dbl_t * bn
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(bernoa,BERNOA)(
    fwi_integer_t * n,
    fwr_dbl_t * bn
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(csphjy,CSPHJY)(
    fwi_integer_t * n,
    fwc_complex_x16_t * z,
    fwi_integer_t * nm,
    fwc_complex_x16_t * csj,
    fwc_complex_x16_t * cdj,
    fwc_complex_x16_t * csy,
    fwc_complex_x16_t * cdy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lpmns,LPMNS)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * pm,
    fwr_dbl_t * pd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(eulera,EULERA)(
    fwi_integer_t * n,
    fwr_dbl_t * en
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(clqn,CLQN)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * y,
    fwc_complex_x16_t * cqn,
    fwc_complex_x16_t * cqd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(airyzo,AIRYZO)(
    fwi_integer_t * nt,
    fwi_integer_t * kf,
    fwr_dbl_t * xa,
    fwr_dbl_t * xb,
    fwr_dbl_t * xc,
    fwr_dbl_t * xd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(eulerb,EULERB)(
    fwi_integer_t * n,
    fwr_dbl_t * en
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cva1,CVA1)(
    fwi_integer_t * kd,
    fwi_integer_t * m,
    fwr_dbl_t * q,
    fwr_dbl_t * cv
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lqnb,LQNB)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * qn,
    fwr_dbl_t * qd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lamv,LAMV)(
    fwr_dbl_t * v,
    fwr_dbl_t * x,
    fwr_dbl_t * vm,
    fwr_dbl_t * vl,
    fwr_dbl_t * dl
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lagzo,LAGZO)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * w
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(legzo,LEGZO)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * w
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(pbdv,PBDV)(
    fwr_dbl_t * v,
    fwr_dbl_t * x,
    fwr_dbl_t * dv,
    fwr_dbl_t * dp,
    fwr_dbl_t * pdf,
    fwr_dbl_t * pdd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cerzo,CERZO)(
    fwi_integer_t * nt,
    fwc_complex_x16_t * zo
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lamn,LAMN)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwi_integer_t * nm,
    fwr_dbl_t * bl,
    fwr_dbl_t * dl
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(clpn,CLPN)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * y,
    fwc_complex_x16_t * cpn,
    fwc_complex_x16_t * cpd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lqmns,LQMNS)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * qm,
    fwr_dbl_t * qd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(chgm,CHGM)(
    fwr_dbl_t * a,
    fwr_dbl_t * b,
    fwr_dbl_t * x,
    fwr_dbl_t * hg
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lpmn,LPMN)(
    fwi_integer_t * mm,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * pm,
    fwr_dbl_t * pd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(fcszo,FCSZO)(
    fwi_integer_t * kf,
    fwi_integer_t * nt,
    fwc_complex_x16_t * zo
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(aswfb,ASWFB)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * c,
    fwr_dbl_t * x,
    fwi_integer_t * kd,
    fwr_dbl_t * cv,
    fwr_dbl_t * s1f,
    fwr_dbl_t * s1d
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lqna,LQNA)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * qn,
    fwr_dbl_t * qd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cpbdn,CPBDN)(
    fwi_integer_t * n,
    fwc_complex_x16_t * z,
    fwc_complex_x16_t * cpb,
    fwc_complex_x16_t * cpd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lpn,LPN)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * pn,
    fwr_dbl_t * pd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(fcoef,FCOEF)(
    fwi_integer_t * kd,
    fwi_integer_t * m,
    fwr_dbl_t * q,
    fwr_dbl_t * a,
    fwr_dbl_t * fc__
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sphi,SPHI)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwi_integer_t * nm,
    fwr_dbl_t * si,
    fwr_dbl_t * di
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(rcty,RCTY)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwi_integer_t * nm,
    fwr_dbl_t * ry,
    fwr_dbl_t * dy
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(lpni,LPNI)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * pn,
    fwr_dbl_t * pd,
    fwr_dbl_t * pl
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(cyzo,CYZO)(
    fwi_integer_t * nt,
    fwi_integer_t * kf,
    fwi_integer_t * kc,
    fwc_complex_x16_t * zo,
    fwc_complex_x16_t * zv
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(csphik,CSPHIK)(
    fwi_integer_t * n,
    fwc_complex_x16_t * z,
    fwi_integer_t * nm,
    fwc_complex_x16_t * csi,
    fwc_complex_x16_t * cdi,
    fwc_complex_x16_t * csk,
    fwc_complex_x16_t * cdk
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sphj,SPHJ)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwi_integer_t * nm,
    fwr_dbl_t * sj,
    fwr_dbl_t * dj
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(othpl,OTHPL)(
    fwi_integer_t * kf,
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * pl,
    fwr_dbl_t * dpl
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(klvnzo,KLVNZO)(
    fwi_integer_t * nt,
    fwi_integer_t * kd,
    fwr_dbl_t * zo
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(jyzo,JYZO)(
    fwi_integer_t * n,
    fwi_integer_t * nt,
    fwr_dbl_t * rj0,
    fwr_dbl_t * rj1,
    fwr_dbl_t * ry0,
    fwr_dbl_t * ry1
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(rctj,RCTJ)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwi_integer_t * nm,
    fwr_dbl_t * rj,
    fwr_dbl_t * dj
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(herzo,HERZO)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * w
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sphk,SPHK)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwi_integer_t * nm,
    fwr_dbl_t * sk,
    fwr_dbl_t * dk
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(pbvv,PBVV)(
    fwr_dbl_t * v,
    fwr_dbl_t * x,
    fwr_dbl_t * vv,
    fwr_dbl_t * vp,
    fwr_dbl_t * pvf,
    fwr_dbl_t * pvd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(clqmn,CLQMN)(
    fwi_integer_t * mm,
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwr_dbl_t * y,
    fwc_complex_x16_t * cqm,
    fwc_complex_x16_t * cqd
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(segv,SEGV)(
    fwi_integer_t * m,
    fwi_integer_t * n,
    fwr_dbl_t * c,
    fwi_integer_t * kd,
    fwr_dbl_t * cv,
    fwr_dbl_t * eg
);
FORTRAN_CALLSPEC void F_FUNC_MANGLING(sphy,SPHY)(
    fwi_integer_t * n,
    fwr_dbl_t * x,
    fwi_integer_t * nm,
    fwr_dbl_t * sy,
    fwr_dbl_t * dy
);
#if defined(__cplusplus)
} /* extern "C" */
#endif

