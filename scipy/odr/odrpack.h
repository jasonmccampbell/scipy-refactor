#include "npy_arrayobject.h"

#if defined(NO_APPEND_FORTRAN)
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) F
#else
#define F_FUNC(f,F) f
#endif
#else
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) F##_
#else
#define F_FUNC(f,F) f##_
#endif
#endif

#define ISCONTIGUOUS(m) (PyArray_FLAGS(m) & CONTIGUOUS)

#define MAX(n1,n2) ((n1) > (n2))?(n1):(n2);
#define MIN(n1,n2) ((n1) > (n2))?(n2):(n1);


#ifdef __cplusplus
extern "C" {
#endif

extern void F_FUNC(dodrc,DODRC)(
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
    double *work, int *lwork, int *iwork, int *liwork, int *info);

extern void F_FUNC(dwinf,DWINF)(int *n, int *m, int *npx, int *nq, int *ldwe, int *ld2we, int *isodr,
    int *delta, int *eps, int *xplus, int *fn, int *sd, int *vcv, int *rvar,
    int *wss, int *wssde, int *wssep, int *rcond, int *eta, int *olmav, 
    int *tau, int *alpha, int *actrs, int *pnorm, int *rnors, int *prers,
    int *partl, int *sstol, int *taufc, int *apsma, int *betao, int *betac,
    int *betas, int *betan, int *s, int *ss, int *ssf, int *qraux, int *u,
    int *fs, int *fjacb, int *we1, int *diff, int *delts, int *deltn, 
    int *t, int *tt, int *omega, int *fjacd, int *wrk1, int *wrk2, 
    int *wrk3, int *wrk4, int *wrk5, int *wrk6, int *wrk7, int *lwkmn);

extern void F_FUNC(dluno, DLUNO)(int *, char *, int);
extern void F_FUNC(dlunc, DLUNC)(int *);

#ifdef __cplusplus
}
#endif

void fcn_callback(int *n, int *m, int *np, int *nq, int *ldn, int *ldm,
		  int *ldnp, double *beta, double *xplusd, int *ifixb,
		  int *ifixx, int *ldfix, int *ideval, double *f,
		  double *fjacb, double *fjacd, int *istop);

/*PyObject *gen_output(int n, int m, int np, int nq, int ldwe, int ld2we,
		     NpyArray *beta, NpyArray *work, NpyArray *iwork,
		     int isodr, int info, int full_output); */

//PyObject *odr(PyObject *self, PyObject *args, PyObject *kwds);

/*
#define PyArray_CONTIGUOUS(m) (ISCONTIGUOUS(m) ? Py_INCREF(m), m : \
(PyArrayObject *)(PyArray_ContiguousFromObject((PyObject *)(m), \
(m)->descr->type_num, 0,0)))
#define D(dbg) printf("we're here: %i\n", dbg)
#define EXIST(name,obj) if (obj==NULL){printf("%s\n",name);}
static void check_args(int n, int m, int np, int nq, 
		       PyArrayObject *beta,
		       PyArrayObject *y, int ldy, 
		       PyArrayObject *x, int ldx, 
		       PyArrayObject *we, int ldwe, int ld2we, 
		       PyArrayObject *wd, int ldwd, int ld2wd, 
		       PyArrayObject *ifixb, PyArrayObject *ifixx, int ldifx,
		       int job, int ndigit, double taufac, double sstol, 
		       double partol, int maxit,
		       PyArrayObject *stpb, PyArrayObject *stpd, int ldstpd,
		       PyArrayObject *sclb, PyArrayObject *scld, int ldscld,
		       PyArrayObject *work, int lwork, 
		       PyArrayObject *iwork, int liwork,
		       int info);
               */