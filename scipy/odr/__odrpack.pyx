
import operator
cimport numpy as np
import numpy as np
np.import_array()

cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)

cdef extern from "npy_defs.h":
    ctypedef Py_ssize_t npy_intp
    ctypedef struct NpyArray:
        pass

    cdef void *Npy_INCREF(void *)
    cdef void Npy_DECREF(void *)

cdef extern from "odrpack.h":
    cdef void dodrc "F_FUNC(dodrc,DODRC)"(
        void (*fcn)(int *n, int *m, int *npx, int *nq, int *ldn, int *ldm, 
            int *ldnp, double *beta, double *xplusd, int *ifixb, int *ifixx, 
            int *ldifx, int *ideval, double *f, double *fjacb, double *fjacd, 
            int *istop),
        int *n, int *m, int *npx, int *nq, double *beta, double *y, int *ldy,
        double *x, int *ldx, double *we, int *ldwe, int *ld2we, double *wd,
        int *ldwd, int *ld2wd, int *ifixb, int *ifixx, int *ldifx, int *job,
        int *ndigit, double *taufac, double *sstol, double *partol, 
        int *maxit, int *iprint, int *lunerr, int *lunrpt, double *stpb,
        double *stpd, int *ldstpd, double *sclb, double *scld, int *ldscld,
        double *work, int *lwork, int *iwork, int *liwork, int *info)
        
    cdef void dwinf "F_FUNC(dwinf,DWINF)"(int *n, int *m, int *npx, int *nq, int *ldwe, int *ld2we, int *isodr,
        int *delta, int *eps, int *xplus, int *fn, int *sd, int *vcv, int *rvar,
        int *wss, int *wssde, int *wssep, int *rcond, int *eta, int *olmav, 
        int *tau, int *alpha, int *actrs, int *pnorm, int *rnors, int *prers,
        int *partl, int *sstol, int *taufc, int *apsma, int *betao, int *betac,
        int *betas, int *betan, int *s, int *ss, int *ssf, int *qraux, int *u,
        int *fs, int *fjacb, int *we1, int *diff, int *delts, int *deltn, 
        int *t, int *tt, int *omega, int *fjacd, int *wrk1, int *wrk2, 
        int *wrk3, int *wrk4, int *wrk5, int *wrk6, int *wrk7, int *lwkmn)

    cdef void dluno "F_FUNC(dluno, DLUNO)"(int *, char *, int)
    cdef void dlunc "F_FUNC(dlunc, DLUNC)"(int *)


cdef NpyArray *NpyArray_SimpleNew(int nd, npy_intp *dims, np.dtype descr):
    return np.NpyArray_New(NULL, nd, dims, np.PyDataType_TYPE_NUM(descr), NULL, NULL, descr.itemsize, 0, NULL)

class odr_stop(Exception):
    pass

class odr_error(Exception):
    pass

# Danger, global.  Used to pass data from odr to fcn_callback through intervening Fortran.
odr_global = { "fcn" : None, "fjacb" : None, "fjacd" : None, "pyBeta" : None, "extra_args" : None }


cdef object __evalArrayGenFunc(func, arglist, int *istop):
    if func is None:
        raise odr_error("Function has not been initialized")
        
    try:
        result = apply(func, arglist)
    except odr_stop, e:
        istop[0] = 1
        return
    except Exception, e:
        istop[0] = -1
        name = func.func_name
        msg = "Error occured while calling Python function"
        if name is not None:
            msg += " '%s'" % name
        raise odr_error(msg)

    try:
        result_array = np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, 0, 2)
    except Exception, e:
        istop[0] = -1
        raise odr_error("Result from function call is not a proper array of floats.")
    return result_array


cdef void fcn_callback(int *n, int *m, int *npx, int *nq, int *ldn, int *ldm,
    int *ldnp, double *beta, double *xplusd, int *ifixb,
    int *ifixx, int *ldfix, int *ideval, double *f,
    double *fjacb, double *fjacd, int *istop):

    cdef object result, result_array
    cdef object pyXplusD
    cdef npy_intp dim1[1], dim2[2]

    if m[0] != 1:
        dim2[0] = m[0]
        dim2[1] = n[0]
        pyXplusD = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
        memcpy(np.PyArray_DATA(pyXplusD), xplusd, m[0] * n[0] * sizeof(double))
    else:
        dim1[0] = n[0]
        pyXplusD = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
        memcpy(np.PyArray_DATA(pyXplusD), xplusd, n[0] * sizeof(double))

    arg01 = (odr_global["pyBeta"], pyXplusD)

    extra_args = odr_global["extra_args"]
    arglist = arg01 + (extra_args, ) if extra_args is not None else arg01

    istop[0] = 0

    memcpy(np.PyArray_DATA(odr_global["pyBeta"]), beta, npx[0] * sizeof(double))
    if (ideval[0] % 10) >= 1:
        # Compute f with odr_global.fcn
        result_array = __evalArrayGenFunc(odr_global["fcn"], arglist, istop)
        memcpy(f, np.PyArray_DATA(result_array), n[0] * nq[0] * sizeof(double))
    
    if ((ideval[0] / 10) % 10) >= 1:
        # Compute fjacb with odr_globals.fjacb
        result_array = __evalArrayGenFunc(odr_global["fjacb"], arglist, istop)

        if nq[0] != 1 and npx[0] != 1:
            # result_array should be rank-3
            if np.PyArray_NDIM(result_array) != 3:
                raise odr_error("Beta Jacobian is not rank-3")
        elif nq[0] == 1:
            # result_array should be rank-2
            if np.PyArray_NDIM(result_array) != 2:
                raise odr_error("Beta Jacobian is not rank-2")
        memcpy(fjacb, np.PyArray_DATA(result_array), n[0] * nq[0] * npx[0] * sizeof(double));

    if ((ideval[0] / 100) % 10) >= 1:
        # compute fjacd with odr_global.fjacd
        result_array = __evalArrayGenFunc(odr_global["fjacd"], arglist, istop)

        if nq[0] != 1 and m[0] != 1:
            # result_array should be rank-3
            if np.PyArray_NDIM(result_array) != 3:
                raise odr_error("xplusd Jacobian is not rank-3")
        elif nq[0] == 1 and m[0] != 1:
            # result_array should be rank-2
            if np.PyArray_NDIM(result_array) != 2:
                raise odr_error("xplusd Jacobian is not rank-2")
        elif nq[0] == 1 and m[0] == 1:
            # result_array should be rank-1
            if np.PyArray_NDIM(result_array) != 1:
                raise odr_error("xplusd Jacobian is not rank-1")

        memcpy(fjacd, np.PyArray_DATA(result_array), n[0] * nq[0] * m[0] * sizeof(double))



cdef object gen_output(int n, int m, int npx, int nq, int ldwe, int ld2we,
                       NpyArray *beta, NpyArray *work, NpyArray *iwork,
                       int isodr, int info, int full_output):
    cdef object sd_beta, cov_beta

    cdef int delta, eps, xplus, fn, sd, vcv, rvar, wss, wssde, wssep, rcond
    cdef int eta, olmav, tau, alpha, actrs, pnorm, rnors, prers, partl, sstol
    cdef int taufc, apsma, betao, betac, betas, betan, s, ss, ssf, qraux, u
    cdef int fs, fjacb, we1, diff, delts, deltn, t, tt, omega, fjacd
    cdef int wrk1, wrk2, wrk3, wrk4, wrk5, wrk6, wrk7, lwkmn
    cdef object deltaA, epsA, xplusA, fnA
    cdef double res_var, sum_square, sum_square_delta, sum_square_eps
    cdef double inv_condnum, rel_error
    cdef object work_ind

    cdef npy_intp dim1[1], dim2[2]

    if info == 50005:
        return NULL

    lwkmn = np.NpyArray_DIM(work, 0);

    dwinf(&n, &m, &npx, &nq, &ldwe, &ld2we, &isodr,
        &delta, &eps, &xplus, &fn, &sd, &vcv, &rvar, &wss, &wssde,
        &wssep, &rcond, &eta, &olmav, &tau, &alpha, &actrs, &pnorm,
        &rnors, &prers, &partl, &sstol, &taufc, &apsma, &betao, &betac,
        &betas, &betan, &s, &ss, &ssf, &qraux, &u, &fs, &fjacb, &we1,
        &diff, &delts, &deltn, &t, &tt, &omega, &fjacd, &wrk1, &wrk2,
        &wrk3, &wrk4, &wrk5, &wrk6, &wrk7, &lwkmn);

    # convert FORTRAN indices to C indices 
    delta-=1
    eps-=1
    xplus-=1
    fn-=1
    sd-=1
    vcv-=1
    rvar-=1
    wss-=1
    wssde-=1
    wssep-=1
    rcond-=1
    eta-=1
    olmav-=1
    tau-=1
    alpha-=1
    actrs-=1
    pnorm-=1
    rnors-=1
    prers-=1
    partl-=1
    sstol-=1
    taufc-=1
    apsma-=1
    betao-=1
    betac-=1
    betas-=1
    betan-=1
    s-=1
    ss-=1
    ssf-=1
    qraux-=1
    u-=1
    fs-=1
    fjacb-=1
    we1-=1
    diff-=1
    delts-=1
    deltn-=1
    t-=1
    tt-=1
    omega-=1
    fjacd-=1
    wrk1-=1
    wrk2-=1
    wrk3-=1
    wrk4-=1
    wrk5-=1
    wrk6-=1
    wrk7-=1

    dim1[0] = np.NpyArray_DIM(beta, 0);
    sd_beta = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
    dim2[0] = dim2[1] = np.NpyArray_DIM(beta, 0);
    cov_beta = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)

    memcpy(np.PyArray_DATA(sd_beta), <void *>(<double *>np.NpyArray_DATA(work) + sd),
        npx * sizeof(double));
    memcpy(np.PyArray_DATA(cov_beta), <void *>(<double *>np.NpyArray_DATA(work) + vcv),
        npx * npx * sizeof(double));

    retobj = None
    if not full_output:
        retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)), 
                  np.PyArray_Return(sd_beta), 
                  np.PyArray_Return(cov_beta))
        
    else:                
        work_ind = { 
            "delta" : delta,             "eps" : eps, 
            "xplus" : xplus,             "fn" : fn, 
            "sd" : sd,                   "vcv" : vcv, 
            "rvar" : rvar,               "wss" : wss, 
            "wssde" : wssde,             "wssep" : wssep,
            "rcond" : rcond,             "eta" : eta, 
            "olmav" : olmav,             "tau" : tau, 
            "alpha" : alpha,             "actrs" : actrs, 
            "pnorm" : pnorm,             "rnors" : rnors, 
            "prers" : prers,             "partl" : partl, 
            "sstol" : sstol,             "taufc" : taufc, 
            "apsma" : apsma,             "betao" : betao, 
            "betac" : betac,             "betas" : betas, 
            "betan" : betan,             "s" : s, 
            "ss" : ss,                   "ssf" : ssf, 
            "qraux" : qraux,             "u" : u, 
            "fs" : fs,                   "fjacb" : fjacb, 
            "we1" : we1,                 "diff" : diff, 
            "delts" : delts,             "deltn" : deltn, 
            "t" : t,                     "tt" : tt, 
            "omega" : omega,             "fjacd" : fjacd,
            "wrk1" : wrk1,               "wrk2" : wrk2, 
            "wrk3" : wrk3,               "wrk4" : wrk4, 
            "wrk5" : wrk5,               "wrk6" : wrk6, 
            "wrk7" : wrk7 }

        if m == 1:
            dim1[0] = n;
            deltaA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
            xplusA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
        else:
            dim2[0] = m;
            dim2[1] = n;
            deltaA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
            xplusA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)

        if nq == 1:
            dim1[0] = n;
            epsA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
            fnA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
        else:
            dim2[0] = nq;
            dim2[1] = n;
            epsA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
            fnA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)

        memcpy(np.PyArray_DATA(deltaA), <void *>(<double *>np.NpyArray_DATA(work) + delta),
            m * n * sizeof(double));
        memcpy(np.PyArray_DATA(epsA), <void *>(<double *>np.NpyArray_DATA(work) + eps),
            nq * n * sizeof(double));
        memcpy(np.PyArray_DATA(xplusA), <void *>(<double *>np.NpyArray_DATA(work) + xplus),
            m * n * sizeof(double));
        memcpy(np.PyArray_DATA(fnA), <void *>(<double *>np.NpyArray_DATA(work) + fn),
            nq * n * sizeof(double));

        res_var = (<double *>np.NpyArray_DATA(work))[rvar];
        sum_square = (<double *>np.NpyArray_DATA(work))[wss]
        sum_square_delta = (<double *>np.NpyArray_DATA(work))[wssde];
        sum_square_eps = (<double *>np.NpyArray_DATA(work))[wssep];
        inv_condnum = (<double *>np.NpyArray_DATA(work))[rcond];
        rel_error = (<double *>np.NpyArray_DATA(work))[eta];
    
        retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)), 
                  np.PyArray_Return(sd_beta), 
                  np.PyArray_Return(cov_beta),
                  { "delta" : np.PyArray_Return(deltaA), 
                    "eps" : np.PyArray_Return(epsA), 
                    "xplus" : np.PyArray_Return(xplusA), 
                    "y" : np.PyArray_Return(fnA), 
                    "res_var" : res_var, 
                    "sum_square" : sum_square,
                    "sum_square_delta" : sum_square_delta, 
                    "sum_square_eps" : sum_square_eps, 
                    "inv_condnum" : inv_condnum, 
                    "rel_error" : rel_error,
                    "work" : np.PyArray_Return(np.Npy_INTERFACE_array(work)), 
                    "work_ind" : work_ind, 
                    "iwork" : np.PyArray_Return(np.Npy_INTERFACE_array(iwork)), 
                    "info" : info })

    return retobj;

def __mustBeSeq(name, v):
    if v is not None and not operator.isSequenceType(v):
        raise TypeError("%s must be a sequence" % name)


def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,
    ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None, 
    int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0, 
    int maxit=-1, stpb=None, 
    stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):
    """
    odr(fcn, beta0, y, x,
        we=None, wd=None, fjacb=None, fjacd=None,
        extra_args=None, ifixx=None, ifixb=None, job=0, iprint=0,
        errfile=None, rptfile=None, ndigit=0,
        taufac=0.0, sstol=-1.0, partol=-1.0,
        maxit=-1, stpb=None, stpd=None,
        sclb=None, scld=None, work=None, iwork=None,
        full_output=0)
    """
    cdef int n, m, npx, nq, ldy, ldx, ldwe, ld2we, ldwd, ld2wd, ldifx
    cdef int lunerr = -1
    cdef int lunrpt = -1
    cdef int ldstpd, ldscld, lwork, liwork, info=0
    cdef int isodr = 1
    cdef int implicit
    cdef npy_intp dim1[1], dim2[2], dim3[3]
    cdef double val


    if not callable(fcn): raise TypeError("fcn must be callable")
    if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")
    if not operator.isSequenceType(y):
        try:
            val = int(y)
        except ValueError, e:
            raise TypeError("y must be a sequence or integer(if model is implicit)")
    if not operator.isSequenceType(x):
        raise TypeError("x must be a sequence")

    if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):
        raise TypeError("we must be a sequence or a number")
    if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):
        raise TypeError("wd must be a sequence or a number")

    if fjacb is not None and not callable(fjacb):
        raise TypeError("fjacb must be callable")
    if fjacd is not None and not callable(fjacd):
        raise TypeError("fjacd must be callable")

    # vars() doesn't work in Cython for IronPython because it doesn't create a context for this
    # function, we just get the context of the calling function which doesn't have these variables
    # defined in the dict.
    __mustBeSeq("extra_args", extra_args)
    __mustBeSeq("ifixx", ifixx)
    __mustBeSeq("ifixb", ifixb)
    __mustBeSeq("stpb", stpb)
    __mustBeSeq("stpd", stpd)
    __mustBeSeq("sclb", sclb)
    __mustBeSeq("scld", scld)
    __mustBeSeq("work", work)
    __mustBeSeq("iwork", iwork)

    if work is not None and not np.PyArray_Check(work):
        raise TypeError("work must be an array")
    if iwork is not None and not np.PyArray_Check(work):
        raise TypeError("iwork must be an array")

    implicit = (job % 10 == 1)
    if not implicit:
        y = np.PyArray_CopyFromObject(y, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
        if y is None:
            raise ValueError("y could not be made into a suitable array")
        x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
        if x is None:
            raise ValueError("x could not be made into a suitable array")

        n = y.shape[-1]
        if n != x.shape[-1]:
            raise ValueError("x and y don't have matching numbers of observations")
        nq = 1 if y.ndim == 1 else y.shape[0]
        ldx = ldy = n
    else:
        ldy = 1
        nq = int(y)
        dim1[0] = 1
    
        # Initialize y to a dummy array; never referenced
        y = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
        x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
        if x is None:
            raise ValueError("x could not be made into a suitable array")
        n = x.shape[-1]
        ldx = n

    m = 1 if x.ndim == 1 else x.shape[0]
    beta = np.PyArray_CopyFromObject(initbeta, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
    if beta is None:
        raise ValueError("initbeta could not be made into a suitable array")
    npx = beta.shape[0]

    if we is None:
        ldwe = ld2we = 1
        dim1[0] = n
        we = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
        we[0] = -1.0
    elif np.PyNumber_Check(we):
        try:    
            val = float(we)
            dim3[0] = nq
            dim3[1] = 1
            dim3[2] = 1
            we = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
            we[0,0,0] = val if implicit else -val
            ldwe = ld2we = 1
        except ValueError, e:
            raise ValueError("could not convert we to a suitable array")
    elif operator.isSequenceType(we):
        we = np.PyArray_CopyFromObject(we, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
        if we is None:
            raise ValueError("could not convert we to a suitable array")

        if we.ndim == 1 and nq == 1:
            ldwe = n
            ld2we = 1
        elif we.ndim == 1 and we.shape[0] == nq:
            # we is a rank-1 array with diagonal weightings to be broadcast
            # to all observations
            ldwe = 1
            ld2we = 1
        elif we.ndim == 3 and we.shape == (nq, nq, 1):
            # we is a rank-3 array with the covariant weightings to be broadcast
            # to all observations
            ldwe = 1
            ld2we = nq
        elif we.ndim == 2 and we.shape == (nq, nq):
            # we is a rank-2 array with the full covariant weightings to be
            # broadcast to all observations.
            ldwe = 1
            ld2we = nq
        elif we.ndim == 2 and we.shape == (nq, n):
            # we is a rank-2 array with the diagonal elements of the covariant
            # weightings for each observations
            ldwe = n
            ld2we = 1
        elif we.ndim == 3 and we.shape == (nq, nq, n):
            # we is the full specification of the covariant weights for each observation
            ldwe = n
            ld2we = nq
        else:
            raise ValueError("could not convert we to a suitable array")

    if wd is None:
        ldwd = ld2wd = 1
        dim1[0]= m
        wd = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
        wd[0] = -1.0
    elif np.PyNumber_Check(wd):
        try:
            val = float(wd)
            dim3[0] = 1
            dim3[1] = 1
            dim3[2] = m
            wd = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
            wd[0,0,0] = -val
            ldwd = 1
            ld2wd = 1
        except ValueError, e:
            raise ValueError("could not convert wd to a suitable array")
    elif operator.isSequenceType(wd):
        wd = np.PyArray_CopyFromObject(wd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
        if wd is None:
            raise ValueError("could not convert wd to a suitable array")

        if wd.ndim == 1 and m == 1:
            ldwd = n
            ld2wd = 1
        elif wd.ndim == 1 and wd.shape[0] == m:
            # wd is a rank-1 array with diagonal weightings to be broadcast
            # to all observations
            ldwd = 1
            ld2wd = 1
        elif wd.ndim == 3 and wd.shape == (m, m, 1):
            # wd is a rank-3 array with the covariant weightings to be
            # broadcast to all observations
            ldwd = 1
            ld2wd = m
        elif wd.ndim == 2 and wd.shape == (m, m):
            # wd is a rank-2 array wth the full covariant weightings to be
            # broadcast to all observations
            ldwd = 1
            ld2wd = m
        elif wd.ndim == 2 and wd.shape == (m, n):
            # wd is a rank-2 array with the diagonal element of the covariant
            # weightings for each observation.
            ldwd = n
            ld2wd = 1
        elif wd.ndim == 3 and wd.shape == (m, m, n):
            ldwd = n
            ld2wd = m
        else:
            raise ValueError("could not convert wd to a suitable array")

    if ifixb is None:
        dim1[0] = npx
        ifixb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_INT, False)
        ifixb[0] = -1
    else:
        ifixb = np.PyArray_CopyFromObject(ifixb, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)
        if ifixb is None or ifixb.shape[0] != npx:
            raise ValueError("could not convert ifixb to a suitable array")

    if ifixx is None:
        dim2[0] = m
        dim2[1] = 1
        ifixx = np.PyArray_EMPTY(2, &dim2[0], np.NPY_INT, False)
        ifixx[0,0] = -1
        ldifx = 1
    else:
        ifixx = np.PyArray_CopyFromObject(ifixx, np.PyArray_DescrFromType(np.NPY_INT), 1, 2)
        if ifixx is None:
            raise ValueError("could not convert ifixx to a suitable array")

        if ifixx.ndim == 1 and ifixx.shape[0] == m:
            ldifx = 1
        elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
            ldifx = n
        elif ifixx.ndim == 2 and ifixx.shape == (m, n):
            ldifx = n
        else:
            raise ValueError("could not convert ifixx to a suitable array")

    if errfile is not None:
        # Call Fortran's OPEN to open the file with a logical unit of 18.
        lunerr = 18;
        dluno(&lunerr, errfile, len(errfile))

    if rptfile is not None:
        lunrpt = 19
        dluno(&lunrpt, rptfile, len(rptfile))

    if stpb is None:
        dim1[0] = npx
        stpb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
        stpb[0] = 0.0
    else:
        stpb = np.PyArray_CopyFromObject(stpb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
        if stpb is None or stpb.shape[0] != npx:
            raise ValueError("could not convert stpb to a suitable array")

    if stpd is None:
        dim2[0] = 1
        dim2[1] = m
        stpd = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
        stpd[0,0] = 0.0
        ldstpd = 1
    else:
        stpd = np.PyArray_CopyFromObject(stpd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
        if stpd is None:
            raise ValueError("could not convert stpd to a suitable array")

        if stpd.ndim == 1 and stpd.shape[0] == m:
            ldstpd = 1
        elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
            ldstpd = n
        elif stpd.ndim == 2 and stpd.shape == (n, m):
            ldstpd = n
        else:
            raise ValueError("could not convert stpd to a suitable array")

    if sclb is None:
        dim1[0] = npx
        sclb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
        sclb[0] = 0.0
    else:
        sclb = np.PyArray_CopyFromObject(sclb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
        if sclb is None or sclb.shape[0] != npx:
            raise ValueError("could not convert sclb to a suitable array")

    if scld is None:
        dim2[0] = 1
        dim2[1] = n
        scld = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
        scld[0,0] = 0.0
        ldscld = 1
    else:
        scld = np.PyArray_CopyFromObject(scld, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
        if scld is None:
            raise ValueError("could not convert scld to a suitable array")

        if scld.ndim == 1 and scld.shape[0] == m:
            ldscld = 1
        elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
            ldscld = n
        elif scld.ndim == 2 and scld.shape == (n, m):
            ldscld = n
        else:
            raise ValueError("could not convert scld to a suitable array")

    if job % 10 < 2:
        # ODR not OLS
        lwork = \
            18 + 11 * npx + npx * npx + m + m * m + 4 * n * nq + 6 * n * m + \
            2 * n * nq * npx + 2 * n * nq * m + nq * nq + 5 * nq + nq * (npx + m) + \
            ldwe * ld2we * nq
        isodr = 1
    else:
        # OLS, not ODR 
        lwork = \
            18 + 11 * npx + npx * npx + m + m * m + 4 * n * nq + 2 * n * m + \
            2 * n * nq * npx + 5 * nq + nq * (npx + m) + ldwe * ld2we * nq 
        isodr = 0

    liwork = 20 + npx + nq * (npx + m)

    if (job / 10000) % 10 >= 1:
        # Fit is a restart, make sure work and iwork are input
        if work is None or iwork is None:
            raise ValueError("need to input work and iwork arrays to restart")

    if (job / 1000) % 10 >= 1:
        # delta should be supplied, make sure the user does
        if work is None:
            raise ValueError("need to input work array for delta initialization")

    if work is not None:
        work = np.PyArray_CopyFromObject(work, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
        if work is None:
            raise ValueError("could not convert work to a suitable array")

        if work.shape[0] < lwork:
            raise ValueError("work is too small")

    else:
        dim1[0] = lwork
        work = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)

    if iwork is not None:
        iwork = np.PyArray_CopyFromObject(iwork, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)
        if iwork is None:
            raise ValueError("could not convert iwork to a suitable array")

        if iwork.shape[0] < liwork:
            raise ValueError("iwork is too small")
    else:
        dim1[0] = liwork
        iwork = np.PyArray_EMPTY(1, &dim1[0], np.NPY_INT, False)

    # check if what job requests can be done with what the user has input
    # into the function.
    if (job / 10) % 10 >= 2:
        # derivatives are supported to be supplied.
        if fjacb is None or fjacd is None:
            raise ValueError("need fjacb and fjacd to calculate derivatives")

    # Setup the global data for the callback. 
    odr_global["fcn"] = fcn
    odr_global["fjacb"] = fjacb
    odr_global["fjacd"] = fjacd
    odr_global["pyBeta"] = beta
    odr_global["extra_args"] = extra_args

    dodrc(fcn_callback, &n, &m, &npx, &nq, <double *>np.PyArray_DATA(beta),
        <double *>np.PyArray_DATA(y), &ldy, <double *>np.PyArray_DATA(x), &ldx,
        <double *>np.PyArray_DATA(we), &ldwe, &ld2we,
        <double *>np.PyArray_DATA(wd), &ldwd, &ld2wd,
        <int *>np.PyArray_DATA(ifixb), <int *>np.PyArray_DATA(ifixx), &ldifx,
        &job, &ndigit, &taufac, &sstol, &partol, &maxit,
        &iprint, &lunerr, &lunrpt,
        <double *>np.PyArray_DATA(stpb), <double *>np.PyArray_DATA(stpd), &ldstpd,
        <double *>np.PyArray_DATA(sclb), <double *>np.PyArray_DATA(scld), &ldscld,
        <double *>np.PyArray_DATA(work), &lwork, <int *>np.PyArray_DATA(iwork), &liwork,
        &info);

    result = gen_output(n, m, npx, nq, ldwe, ld2we,
        np.PyArray_ARRAY(beta), np.PyArray_ARRAY(work), 
        np.PyArray_ARRAY(iwork), isodr, info, full_output);

    if result == None:
        raise RuntimeError("could not generate output")
    if lunerr != -1:
        dlunc(&lunerr)
    if lunrpt != -1:
        dlunc(&lunrpt)

    return result


