from fwrap_ktp cimport *

cdef extern from "specfun_fc.h":
    void lqmn "F_FUNC(lqmn,LQMN)"(
        fwi_integer_t * mm,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * qm,
        fwr_dbl_t * qd
    )
    void clpmn "F_FUNC(clpmn,CLPMN)"(
        fwi_integer_t * mm,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * y,
        fwc_complex_x16_t * cpm,
        fwc_complex_x16_t * cpd
    )
    void jdzo "F_FUNC(jdzo,JDZO)"(
        fwi_integer_t * nt,
        fwi_integer_t * n,
        fwi_integer_t * m,
        fwi_integer_t * p,
        fwr_dbl_t * zo
    )
    void bernob "F_FUNC(bernob,BERNOB)"(
        fwi_integer_t * n,
        fwr_dbl_t * bn
    )
    void bernoa "F_FUNC(bernoa,BERNOA)"(
        fwi_integer_t * n,
        fwr_dbl_t * bn
    )
    void csphjy "F_FUNC(csphjy,CSPHJY)"(
        fwi_integer_t * n,
        fwc_complex_x16_t * z,
        fwi_integer_t * nm,
        fwc_complex_x16_t * csj,
        fwc_complex_x16_t * cdj,
        fwc_complex_x16_t * csy,
        fwc_complex_x16_t * cdy
    )
    void lpmns "F_FUNC(lpmns,LPMNS)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * pm,
        fwr_dbl_t * pd
    )
    void eulera "F_FUNC(eulera,EULERA)"(
        fwi_integer_t * n,
        fwr_dbl_t * en
    )
    void clqn "F_FUNC(clqn,CLQN)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * y,
        fwc_complex_x16_t * cqn,
        fwc_complex_x16_t * cqd
    )
    void airyzo "F_FUNC(airyzo,AIRYZO)"(
        fwi_integer_t * nt,
        fwi_integer_t * kf,
        fwr_dbl_t * xa,
        fwr_dbl_t * xb,
        fwr_dbl_t * xc,
        fwr_dbl_t * xd
    )
    void eulerb "F_FUNC(eulerb,EULERB)"(
        fwi_integer_t * n,
        fwr_dbl_t * en
    )
    void cva1 "F_FUNC(cva1,CVA1)"(
        fwi_integer_t * kd,
        fwi_integer_t * m,
        fwr_dbl_t * q,
        fwr_dbl_t * cv
    )
    void lqnb "F_FUNC(lqnb,LQNB)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * qn,
        fwr_dbl_t * qd
    )
    void lamv "F_FUNC(lamv,LAMV)"(
        fwr_dbl_t * v,
        fwr_dbl_t * x,
        fwr_dbl_t * vm,
        fwr_dbl_t * vl,
        fwr_dbl_t * dl
    )
    void lagzo "F_FUNC(lagzo,LAGZO)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * w
    )
    void legzo "F_FUNC(legzo,LEGZO)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * w
    )
    void pbdv "F_FUNC(pbdv,PBDV)"(
        fwr_dbl_t * v,
        fwr_dbl_t * x,
        fwr_dbl_t * dv,
        fwr_dbl_t * dp,
        fwr_dbl_t * pdf,
        fwr_dbl_t * pdd
    )
    void cerzo "F_FUNC(cerzo,CERZO)"(
        fwi_integer_t * nt,
        fwc_complex_x16_t * zo
    )
    void lamn "F_FUNC(lamn,LAMN)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwi_integer_t * nm,
        fwr_dbl_t * bl,
        fwr_dbl_t * dl
    )
    void clpn "F_FUNC(clpn,CLPN)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * y,
        fwc_complex_x16_t * cpn,
        fwc_complex_x16_t * cpd
    )
    void lqmns "F_FUNC(lqmns,LQMNS)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * qm,
        fwr_dbl_t * qd
    )
    void chgm "F_FUNC(chgm,CHGM)"(
        fwr_dbl_t * a,
        fwr_dbl_t * b,
        fwr_dbl_t * x,
        fwr_dbl_t * hg
    )
    void lpmn "F_FUNC(lpmn,LPMN)"(
        fwi_integer_t * mm,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * pm,
        fwr_dbl_t * pd
    )
    void fcszo "F_FUNC(fcszo,FCSZO)"(
        fwi_integer_t * kf,
        fwi_integer_t * nt,
        fwc_complex_x16_t * zo
    )
    void aswfb "F_FUNC(aswfb,ASWFB)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * c,
        fwr_dbl_t * x,
        fwi_integer_t * kd,
        fwr_dbl_t * cv,
        fwr_dbl_t * s1f,
        fwr_dbl_t * s1d
    )
    void lqna "F_FUNC(lqna,LQNA)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * qn,
        fwr_dbl_t * qd
    )
    void cpbdn "F_FUNC(cpbdn,CPBDN)"(
        fwi_integer_t * n,
        fwc_complex_x16_t * z,
        fwc_complex_x16_t * cpb,
        fwc_complex_x16_t * cpd
    )
    void lpn "F_FUNC(lpn,LPN)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * pn,
        fwr_dbl_t * pd
    )
    void fcoef "F_FUNC(fcoef,FCOEF)"(
        fwi_integer_t * kd,
        fwi_integer_t * m,
        fwr_dbl_t * q,
        fwr_dbl_t * a,
        fwr_dbl_t * fc__
    )
    void sphi "F_FUNC(sphi,SPHI)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwi_integer_t * nm,
        fwr_dbl_t * si,
        fwr_dbl_t * di
    )
    void rcty "F_FUNC(rcty,RCTY)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwi_integer_t * nm,
        fwr_dbl_t * ry,
        fwr_dbl_t * dy
    )
    void lpni "F_FUNC(lpni,LPNI)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * pn,
        fwr_dbl_t * pd,
        fwr_dbl_t * pl
    )
    void cyzo "F_FUNC(cyzo,CYZO)"(
        fwi_integer_t * nt,
        fwi_integer_t * kf,
        fwi_integer_t * kc,
        fwc_complex_x16_t * zo,
        fwc_complex_x16_t * zv
    )
    void csphik "F_FUNC(csphik,CSPHIK)"(
        fwi_integer_t * n,
        fwc_complex_x16_t * z,
        fwi_integer_t * nm,
        fwc_complex_x16_t * csi,
        fwc_complex_x16_t * cdi,
        fwc_complex_x16_t * csk,
        fwc_complex_x16_t * cdk
    )
    void sphj "F_FUNC(sphj,SPHJ)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwi_integer_t * nm,
        fwr_dbl_t * sj,
        fwr_dbl_t * dj
    )
    void othpl "F_FUNC(othpl,OTHPL)"(
        fwi_integer_t * kf,
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * pl,
        fwr_dbl_t * dpl
    )
    void klvnzo "F_FUNC(klvnzo,KLVNZO)"(
        fwi_integer_t * nt,
        fwi_integer_t * kd,
        fwr_dbl_t * zo
    )
    void jyzo "F_FUNC(jyzo,JYZO)"(
        fwi_integer_t * n,
        fwi_integer_t * nt,
        fwr_dbl_t * rj0,
        fwr_dbl_t * rj1,
        fwr_dbl_t * ry0,
        fwr_dbl_t * ry1
    )
    void rctj "F_FUNC(rctj,RCTJ)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwi_integer_t * nm,
        fwr_dbl_t * rj,
        fwr_dbl_t * dj
    )
    void herzo "F_FUNC(herzo,HERZO)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * w
    )
    void sphk "F_FUNC(sphk,SPHK)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwi_integer_t * nm,
        fwr_dbl_t * sk,
        fwr_dbl_t * dk
    )
    void pbvv "F_FUNC(pbvv,PBVV)"(
        fwr_dbl_t * v,
        fwr_dbl_t * x,
        fwr_dbl_t * vv,
        fwr_dbl_t * vp,
        fwr_dbl_t * pvf,
        fwr_dbl_t * pvd
    )
    void clqmn "F_FUNC(clqmn,CLQMN)"(
        fwi_integer_t * mm,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * y,
        fwc_complex_x16_t * cqm,
        fwc_complex_x16_t * cqd
    )
    void segv "F_FUNC(segv,SEGV)"(
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwr_dbl_t * c,
        fwi_integer_t * kd,
        fwr_dbl_t * cv,
        fwr_dbl_t * eg
    )
    void sphy "F_FUNC(sphy,SPHY)"(
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwi_integer_t * nm,
        fwr_dbl_t * sy,
        fwr_dbl_t * dy
    )
