cdef extern from "stdlib.h" nogil:
    void *malloc(size_t size)

cimport numpy as np

ctypedef double complex Py_complex
ctypedef np.npy_intp intp

PyUFunc_None = -1

cdef extern from "cephes/cephes_names.h":
    pass

cdef extern from "cephes/mconf.h":
    int scipy_special_print_error_messages

cdef extern from "specfun_wrappers.h":
    Py_complex cgamma_wrap( Py_complex z)
    Py_complex clngamma_wrap( Py_complex z)
    Py_complex cpsi_wrap( Py_complex z)
    Py_complex crgamma_wrap( Py_complex z)
    Py_complex chyp2f1_wrap( double a, double b, double c, Py_complex z)
    Py_complex chyp1f1_wrap( double a, double b, Py_complex z)
    double hyp1f1_wrap( double a, double b, double x)
    double hypU_wrap(double a, double b, double x)
    double exp1_wrap(double x)
    double expi_wrap(double x)
    Py_complex cexp1_wrap(Py_complex z)
    Py_complex cexpi_wrap(Py_complex z)
    Py_complex cerf_wrap(Py_complex z)
    int itairy_wrap(double x, double *apt, double *bpt, double *ant, double *bnt)

    double struve_wrap(double v, double x)
    double itstruve0_wrap(double x)
    double it2struve0_wrap(double x)

    double modstruve_wrap(double v, double x)
    double itmodstruve0_wrap(double x)

    double ber_wrap(double x)
    double bei_wrap(double x)
    double ker_wrap(double x)
    double kei_wrap(double x)
    double berp_wrap(double x)
    double beip_wrap(double x)
    double kerp_wrap(double x)
    double keip_wrap(double x)

    int kelvin_wrap(double x, Py_complex *Be, Py_complex *Ke, Py_complex *Bep, Py_complex *Kep)

    int it1j0y0_wrap(double x, double *, double *)
    int it2j0y0_wrap(double x, double *, double *)
    int it1i0k0_wrap(double x, double *, double *)
    int it2i0k0_wrap(double x, double *, double *)

    int cfresnl_wrap(Py_complex x, Py_complex *sf, Py_complex *cf)
    double cem_cva_wrap(double m, double q)
    double sem_cva_wrap(double m, double q)
    int cem_wrap(double m, double q, double x, double *csf, double *csd)
    int sem_wrap(double m, double q, double x, double *csf, double *csd)
    int mcm1_wrap(double m, double q, double x, double *f1r, double *d1r)
    int msm1_wrap(double m, double q, double x, double *f1r, double *d1r)
    int mcm2_wrap(double m, double q, double x, double *f2r, double *d2r)
    int msm2_wrap(double m, double q, double x, double *f2r, double *d2r)
    double pmv_wrap(double, double, double)
    int pbwa_wrap(double, double, double *, double *)
    int pbdv_wrap(double, double, double *, double *)
    int pbvv_wrap(double, double, double *, double *)

    int prolate_aswfa_wrap(double, double, double, double, double, double *, double *)
    int prolate_radial1_wrap(double, double, double, double, double, double *, double *)
    int prolate_radial2_wrap(double, double, double, double, double, double *, double *)
    int oblate_aswfa_wrap(double, double, double, double, double, double *, double *)
    int oblate_radial1_wrap(double, double, double, double, double, double *, double *)
    int oblate_radial2_wrap(double, double, double, double, double, double *, double *)
    double prolate_aswfa_nocv_wrap(double, double, double, double, double *)
    double prolate_radial1_nocv_wrap(double, double, double, double, double *)
    double prolate_radial2_nocv_wrap(double, double, double, double, double *)
    double oblate_aswfa_nocv_wrap(double, double, double, double, double *)
    double oblate_radial1_nocv_wrap(double, double, double, double, double *)
    double oblate_radial2_nocv_wrap(double, double, double, double, double *)
    double prolate_segv_wrap(double, double, double)
    double oblate_segv_wrap(double, double, double)



    int modified_fresnel_plus_wrap(double x, Py_complex *F, Py_complex *K)
    int modified_fresnel_minus_wrap(double x, Py_complex *F, Py_complex *K)

cdef extern from "cdf_wrappers.h":
    double cdfbet3_wrap(double p, double x, double b)
    double cdfbet4_wrap(double p, double x, double a)

    double cdfbin2_wrap(double p, double xn, double pr)
    double cdfbin3_wrap(double p, double s, double pr)

    double cdfchi3_wrap(double p, double x)

    double cdfchn1_wrap(double x, double df, double nc)
    double cdfchn2_wrap(double p, double df, double nc)
    double cdfchn3_wrap(double p, double x, double nc)
    double cdfchn4_wrap(double p, double x, double df)

    double cdff3_wrap(double p, double f, double dfd)
    double cdff4_wrap(double p, double f, double dfn)

    double cdffnc1_wrap(double f, double dfn, double dfd, double nc)
    double cdffnc2_wrap(double p, double dfn, double dfd, double nc)
    double cdffnc3_wrap(double p, double f, double dfd, double nc)
    double cdffnc4_wrap(double p, double f, double dfn, double nc)
    double cdffnc5_wrap(double p, double f, double dfn, double dfd)

    double cdfgam1_wrap(double p, double x, double scl)
    double cdfgam2_wrap(double p, double x, double shp)
    double cdfgam3_wrap(double p, double x, double scl)
    double cdfgam4_wrap(double p, double x, double shp)

    double cdfnbn2_wrap(double p, double xn, double pr)
    double cdfnbn3_wrap(double p, double s, double pr)

    double cdfnor3_wrap(double p, double x, double std)
    double cdfnor4_wrap(double p, double x, double mn)

    double cdfpoi2_wrap(double p, double xlam)

    double cdft1_wrap(double p, double t)
    double cdft2_wrap(double p, double t)
    double cdft3_wrap(double p, double t)

    double cdftnc1_wrap(double df, double nc, double t)
    double cdftnc2_wrap(double df, double nc, double p)
    double cdftnc3_wrap(double p, double nc, double t)
    double cdftnc4_wrap(double df, double p, double t)

    double tukeylambdacdf(double x, double lambda_)

cdef extern from "misc.h":
    double besselpoly_ "besselpoly" (double a, double lambda_, double nu)
    double gammaincinv_ "gammaincinv" (double a, double x)

cdef extern from "toms_wrappers.h":
    Py_complex cwofz_wrap(Py_complex z)

cdef extern from "cephes.h":
    int airy_ "airy" ( double x, double *ai, double *aip, double *bi, double *bip )

    double bdtrc_ "bdtrc" ( int k, int n, double p ) 
    double bdtr_ "bdtr" ( int k, int n, double p ) 
    double bdtri_ "bdtri" ( int k, int n, double y ) 

    double beta_ "beta" ( double a, double b )
    double lbeta ( double a, double b )

    double btdtr_ "btdtr" ( double a, double b, double x ) 

    double cbrt_ "cbrt" ( double x )
    double chdtrc_ "chdtrc" ( double df, double x )
    double chdtr_ "chdtr" ( double df, double x )
    double chdtri_ "chdtri" ( double df, double y )
    double dawsn_ "dawsn" ( double xx )
    double ellie ( double phi, double m )
    double ellik ( double phi, double m )
    double ellpe ( double x )

    int ellpj ( double u, double m, double *sn, double *cn, double *dn, double *ph )
    double ellpk ( double x )
    double exp10_ "exp10" ( double x )
    double exp1m ( double x )
    double exp2_ "exp2" ( double x )

    double expn_ "expn" ( int n, double x )

    double fdtrc_ "fdtrc" ( double a, double b, double x ) 
    double fdtr_ "fdtr" ( double a, double b, double x ) 
    double fdtri_ "fdtri" ( double a, double b, double y ) 

    int fresnl ( double xxa, double *ssa, double *cca )
    double Gamma ( double x )
    double lgam ( double x )

    double gdtr_ "gdtr" ( double a, double b, double x ) 
    double gdtrc_ "gdtrc" ( double a, double b, double x ) 
    double gdtri ( double a, double b, double y ) 

    double hyp2f1_ "hyp2f1" ( double a, double b, double c, double x ) 
    double hyperg ( double a, double b, double x ) 
    double hyp2f0_ "hyp2f0" ( double a, double b, double x, int type, double *err )
    double onef2 ( double a, double b, double c, double x, double *err ) 
    double threef0 ( double a, double b, double c, double x, double *err )


    double i0_ "i0" ( double x )
    double i0e_ "i0e" ( double x )
    double i1_ "i1" ( double x )
    double i1e_ "i1e" ( double x )
    double igamc ( double a, double x )
    double igam ( double a, double x )
    double igami ( double a, double y0 )

    double incbet ( double aa, double bb, double xx ) 
    double incbi ( double aa, double bb, double yy0 ) 

    double iv_ "iv" ( double v, double x )
    double j0_ "j0" ( double x )
    double y0_ "y0" ( double x )
    double j1_ "j1" ( double x )
    double y1_ "y1" ( double x )

    double jn_ "jn" ( int n, double x )
    double jv_ "jv" ( double n, double x )
    double k0_ "k0" ( double x )
    double k0e_ "k0e" ( double x )
    double k1_ "k1" ( double x )
    double k1e_ "k1e" ( double x )
    double kn_ "kn" ( int nn, double x )
    double nbdtrc_ "nbdtrc" ( int k, int n, double p ) 
    double nbdtr_ "nbdtr" ( int k, int n, double p ) 
    double nbdtri_ "nbdtri" ( int k, int n, double p ) 

    double ndtr_ "ndtr" ( double a )
    double erfc_ "erfc" ( double a )
    double erf_ "erf" ( double x )
    double ndtri_ "ndtri" ( double y0 )

    double pdtrc_ "pdtrc" ( int k, double m )
    double pdtr_ "pdtr" ( int k, double m )
    double pdtri_ "pdtri" ( int k, double y )
    double psi_ "psi" ( double x )
    double rgamma_ "rgamma" ( double x )
    double round_ "round" ( double x )

    int shichi_ "shichi" ( double x, double *si, double *ci )
    int sici_ "sici" ( double x, double *si, double *ci )
    double radian_ "radian" ( double d, double m, double s )
    double sindg_ "sindg" ( double x ) 
    double cosdg_ "cosdg" ( double x )
    double spence_ "spence" ( double x )


    double yv_ "yv" ( double v, double x) 
    double tandg_ "tandg" ( double x )
    double cotdg_ "cotdg" ( double x )
    double log1p_ "log1p" ( double x ) 
    double expm1_ "expm1" ( double x ) 
    double cosm1_ "cosm1" ( double x ) 

    double yn_ "yn" ( int n, double x )
    double zeta_ "zeta" ( double x, double q )
    double zetac_ "zetac" ( double x )

    double smirnov_ "smirnov" (int n, double e )
    double smirnovi_ "smirnovi" (int n, double p )
    double kolmogorov_ "kolmogorov" ( double x )
    double kolmogi_ "kolmogi" ( double p )

cdef extern from "amos_wrappers.h":
    int ierr_to_mtherr( int nz, int ierr)
    void set_nan_if_no_computation_done(Py_complex *var, int ierr)
    int cairy_wrap(Py_complex z, Py_complex *ai, Py_complex *aip, Py_complex *bi, Py_complex *bip)
    int cairy_wrap_e(Py_complex z, Py_complex *ai, Py_complex *aip, Py_complex *bi, Py_complex *bip)
    int cairy_wrap_e_real(double z, double *ai, double *aip, double *bi, double *bip)
    Py_complex cbesi_wrap( double v, Py_complex z)
    Py_complex cbesi_wrap_e( double v, Py_complex z)
    double cbesi_wrap_e_real( double v, double z)
    Py_complex cbesj_wrap( double v, Py_complex z)
    Py_complex cbesj_wrap_e( double v, Py_complex z)
    double cbesj_wrap_e_real( double v, double z)
    Py_complex cbesy_wrap( double v, Py_complex z)
    Py_complex cbesy_wrap_e( double v, Py_complex z)
    double cbesy_wrap_e_real( double v, double z)
    Py_complex cbesk_wrap( double v, Py_complex z)
    Py_complex cbesk_wrap_e( double v, Py_complex z)  
    double cbesk_wrap_real( double v, double z)
    double cbesk_wrap_e_real( double v, double z)
    Py_complex cbesh_wrap1( double v, Py_complex z)
    Py_complex cbesh_wrap1_e( double v, Py_complex z)  
    Py_complex cbesh_wrap2( double v, Py_complex z)
    Py_complex cbesh_wrap2_e( double v, Py_complex z)

cdef extern from "npy_loops.h":
    void NpyUFunc_F_F(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_F_F_As_D_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_FF_F(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_FF_F_As_DD_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_D_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_DD_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_G_G(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_GG_G(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_f_f(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_f_f_As_d_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ff_f(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ff_f_As_dd_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_d_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dd_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_g_g(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_gg_g(char **args, intp *dimensions, intp *steps, void *func)

cdef extern from "ufunc_extras.h":
    void cephes_F_F_As_D_D(char **args, intp *dimensions, intp *steps, void *func)
    void cephes_D_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_f_ff_As_d_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_d_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_F_FF_As_D_DD(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_D_DD(char **args, intp *dimensions, intp *steps, void *func)

    void NpyUFunc_f_FF_As_d_DD(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_d_DD(char **args, intp *dimensions, intp *steps, void *func)

    void NpyUFunc_ff_ff_As_dd_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dd_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_f_ffff_As_d_dddd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_d_dddd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_f_ffff_As_D_DDDD(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_d_dddd_As_D_DDDD(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_F_FFFF_As_D_DDDD(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_D_DDDD(char **args, intp *dimensions, intp *steps, void *func)

    void NpyUFunc_f_FFFF_As_d_DDDD(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_d_DDDD(char **args, intp *dimensions, intp *steps, void *func)


    void NpyUFunc_ff_ffff_As_dd_dddd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dd_dddd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_fff_f_As_ddd_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ddd_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_fff_ff_As_ddd_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ddd_dd(char **args, intp *dimensions, intp *steps, void *func)

    void NpyUFunc_ff_f_As_id_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dd_d_As_id_d(char **args, intp *dimensions, intp *steps, void *func)

    void NpyUFunc_ff_f_As_dD_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dd_d_As_dD_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_fF_F_As_dD_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dD_D(char **args, intp *dimensions, intp *steps, void *func)

    void NpyUFunc_ffF_F_As_ddD_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ddD_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_fffF_F_As_dddD_D(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dddD_D(char **args, intp *dimensions, intp *steps, void *func)

    void NpyUFunc_fff_f_As_iid_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ddd_d_As_iid_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ffff_f_As_dddd_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dddd_d(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ffff_ff_As_dddd_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dddd_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_fffff_ff_As_ddddd_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ddddd_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_ffff_ff_As_dddi_dd(char **args, intp *dimensions, intp *steps, void *func)
    void NpyUFunc_dddd_dd_As_dddi_dd(char **args, intp *dimensions, intp *steps, void *func)


cdef np.NpyUFuncGenericFunction *cephes1_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes1rc_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*4)
cdef np.NpyUFuncGenericFunction *cephes1_2_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*4)
cdef np.NpyUFuncGenericFunction *cephes1_2c_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes1c_4_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*4)
cdef np.NpyUFuncGenericFunction *cephes1cpb_4_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes2_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes2_2_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes2_4_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes2a_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes2c_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*4)
cdef np.NpyUFuncGenericFunction *cephes2cpp_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes3_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*4)
cdef np.NpyUFuncGenericFunction *cephes3a_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes3_2_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes4_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*4)
cdef np.NpyUFuncGenericFunction *cephes4a_2_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes4_2_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes5_2_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)
cdef np.NpyUFuncGenericFunction *cephes1c_functions = <np.NpyUFuncGenericFunction*>malloc(sizeof(np.NpyUFuncGenericFunction)*2)

cdef void ** alloc_data_from_list(l):
    cdef void ** data = <void **>malloc(len(l) * sizeof(void*))
    for i in range(len(l)):
        data[i] = <void *><long long>(l[i])
    return data

cdef int errprint(self, int flag=-37):
    oldFlag = scipy_special_print_error_messages;
    if flag != -37:
        scipy_special_print_error_messages = (flag != 0)
    return oldFlag


cdef void ** airy_data = alloc_data_from_list([ <int> <void *>airy_, <int> <void *>airy_, <int> <void *>cairy_wrap, <int> <void *>cairy_wrap,])
cdef void ** airye_data = alloc_data_from_list([ <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e, <int> <void *>cairy_wrap_e, ])
cdef void ** itairy_data = alloc_data_from_list([ <int> <void *>itairy_wrap, <int> <void *>itairy_wrap, ])
cdef void ** kelvin_data = alloc_data_from_list([ <int> <void *>kelvin_wrap, <int> <void *>kelvin_wrap,])
cdef void ** ber_data = alloc_data_from_list([ <int> <void *>ber_wrap, <int> <void *>ber_wrap,])
cdef void ** bei_data = alloc_data_from_list([ <int> <void *>bei_wrap, <int> <void *>bei_wrap,])
cdef void ** ker_data = alloc_data_from_list([ <int> <void *>ker_wrap, <int> <void *>ker_wrap,])
cdef void ** kei_data = alloc_data_from_list([ <int> <void *>kei_wrap, <int> <void *>kei_wrap,])
cdef void ** berp_data = alloc_data_from_list([ <int> <void *>berp_wrap, <int> <void *>berp_wrap,])
cdef void ** beip_data = alloc_data_from_list([ <int> <void *>beip_wrap, <int> <void *>beip_wrap,])
cdef void ** kerp_data = alloc_data_from_list([ <int> <void *>kerp_wrap, <int> <void *>kerp_wrap,])
cdef void ** keip_data = alloc_data_from_list([ <int> <void *>keip_wrap, <int> <void *>keip_wrap,])
cdef void ** ellpj_data = alloc_data_from_list([ <int> <void *>ellpj, <int> <void *>ellpj,])
cdef void ** exp1_data = alloc_data_from_list([ <int> <void *>exp1_wrap, <int> <void *>exp1_wrap, <int> <void *>cexp1_wrap, <int> <void *>cexp1_wrap,])
cdef void ** expi_data = alloc_data_from_list([ <int> <void *>expi_wrap, <int> <void *>expi_wrap, <int> <void *>cexpi_wrap, <int> <void *>cexpi_wrap,])
cdef void ** expn_data = alloc_data_from_list([ <int> <void *>expn_, <int> <void *>expn_, ])
cdef void ** kn_data = alloc_data_from_list([ <int> <void *>kn_, <int> <void *>kn_, ])
cdef void ** pdtrc_data = alloc_data_from_list([ <int> <void *>pdtrc_, <int> <void *>pdtrc_, ])
cdef void ** pdtr_data = alloc_data_from_list([ <int> <void *>pdtr_, <int> <void *>pdtr_, ])
cdef void ** pdtri_data = alloc_data_from_list([ <int> <void *>pdtri_, <int> <void *>pdtri_, ])
cdef void ** fresnl_data = alloc_data_from_list([ <int> <void *>fresnl, <int> <void *>fresnl, <int> <void *>cfresnl_wrap, <int> <void *>cfresnl_wrap ])
cdef void ** shichi_data = alloc_data_from_list([ <int> <void *>shichi_, <int> <void *>shichi_, ])
cdef void ** sici_data = alloc_data_from_list([ <int> <void *>sici_, <int> <void *>sici_, ])
cdef void ** itj0y0_data = alloc_data_from_list([ <int> <void *>it1j0y0_wrap, <int> <void *>it1j0y0_wrap, ])
cdef void ** it2j0y0_data = alloc_data_from_list([ <int> <void *>it2j0y0_wrap, <int> <void *>it2j0y0_wrap, ])
cdef void ** iti0k0_data = alloc_data_from_list([ <int> <void *>it1i0k0_wrap, <int> <void *>it1i0k0_wrap, ])
cdef void ** it2i0k0_data = alloc_data_from_list([ <int> <void *>it2i0k0_wrap, <int> <void *>it2i0k0_wrap, ])
cdef void ** yn_data = alloc_data_from_list([ <int> <void *>yn_, <int> <void *>yn_, ])
cdef void ** smirnov_data = alloc_data_from_list([ <int> <void *>smirnov_, <int> <void *>smirnov_, ])
cdef void ** smirnovi_data = alloc_data_from_list([ <int> <void *>smirnovi_, <int> <void *>smirnovi_, ])
cdef void ** bdtrc_data = alloc_data_from_list([ <int> <void *>bdtrc_, <int> <void *>bdtrc_, ])
cdef void ** bdtr_data = alloc_data_from_list([ <int> <void *>bdtr_, <int> <void *>bdtr_, ])
cdef void ** bdtri_data = alloc_data_from_list([ <int> <void *>bdtri_, <int> <void *>bdtri_, ])
cdef void ** btdtr_data = alloc_data_from_list([ <int> <void *>btdtr_, <int> <void *>btdtr_, ])
cdef void ** btdtri_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
cdef void ** fdtrc_data = alloc_data_from_list([ <int> <void *>fdtrc_, <int> <void *>fdtrc_, ])
cdef void ** fdtr_data = alloc_data_from_list([ <int> <void *>fdtr_, <int> <void *>fdtr_, ])
cdef void ** fdtri_data = alloc_data_from_list([ <int> <void *>fdtri_, <int> <void *>fdtri_, ])
cdef void ** gdtrc_data = alloc_data_from_list([ <int> <void *>gdtrc_, <int> <void *>gdtrc_, ])
cdef void ** gdtr_data = alloc_data_from_list([ <int> <void *>gdtr_, <int> <void *>gdtr_, ])
cdef void ** hyp2f1_data = alloc_data_from_list([ <int> <void *>hyp2f1_, <int> <void *>hyp2f1_, <int> <void *>chyp2f1_wrap, <int> <void *>chyp2f1_wrap])
cdef void ** hyp1f1_data = alloc_data_from_list([ <int> <void *>hyp1f1_wrap, <int> <void *>hyp1f1_wrap, <int> <void *>chyp1f1_wrap, <int> <void *>chyp1f1_wrap])
cdef void ** hypU_data = alloc_data_from_list([ <int> <void *>hypU_wrap, <int> <void *>hypU_wrap, ])
cdef void ** hyp2f0_data = alloc_data_from_list([ <int> <void *>hyp2f0_, <int> <void *>hyp2f0_, ])
cdef void ** threef0_data = alloc_data_from_list([ <int> <void *>threef0, <int> <void *>threef0, ])
cdef void ** onef2_data = alloc_data_from_list([ <int> <void *>onef2, <int> <void *>onef2, ])
cdef void ** incbet_data = alloc_data_from_list([ <int> <void *>incbet, <int> <void *>incbet, ])
cdef void ** incbi_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
cdef void ** nbdtrc_data = alloc_data_from_list([ <int> <void *>nbdtrc_, <int> <void *>nbdtrc_, ])
cdef void ** nbdtr_data = alloc_data_from_list([ <int> <void *>nbdtr_, <int> <void *>nbdtr_, ])
cdef void ** nbdtri_data = alloc_data_from_list([ <int> <void *>nbdtri_, <int> <void *>nbdtri_, ])
cdef void ** beta_data = alloc_data_from_list([ <int> <void *>beta_, <int> <void *>beta_, ])
cdef void ** lbeta_data = alloc_data_from_list([ <int> <void *>lbeta, <int> <void *>lbeta, ])
cdef void ** cbrt_data = alloc_data_from_list([ <int> <void *>cbrt_, <int> <void *>cbrt_, ])
cdef void ** chdtrc_data = alloc_data_from_list([ <int> <void *>chdtrc_, <int> <void *>chdtrc_, ])
cdef void ** chdtr_data = alloc_data_from_list([ <int> <void *>chdtr_, <int> <void *>chdtr_, ])
cdef void ** chdtri_data = alloc_data_from_list([ <int> <void *>chdtri_, <int> <void *>chdtri_, ])
cdef void ** dawsn_data = alloc_data_from_list([  <int> <void *>dawsn_, <int> <void *>dawsn_, ])
cdef void ** ellie_data = alloc_data_from_list([ <int> <void *>ellie, <int> <void *>ellie, ])
cdef void ** ellik_data = alloc_data_from_list([ <int> <void *>ellik, <int> <void *>ellik, ])
cdef void ** ellpe_data = alloc_data_from_list([ <int> <void *>ellpe, <int> <void *>ellpe, ])
cdef void ** ellpk_data = alloc_data_from_list([ <int> <void *>ellpk, <int> <void *>ellpk, ])
cdef void ** exp10_data = alloc_data_from_list([ <int> <void *>exp10_, <int> <void *>exp10_, ])
cdef void ** exp2_data = alloc_data_from_list([ <int> <void *>exp2_, <int> <void *>exp2_, ])
cdef void ** Gamma_data = alloc_data_from_list([ <int> <void *>Gamma, <int> <void *>Gamma, <int> <void *>cgamma_wrap, <int> <void *>cgamma_wrap])
cdef void ** lgam_data = alloc_data_from_list([ <int> <void *>lgam, <int> <void *>lgam, <int> <void *>clngamma_wrap, <int> <void *>clngamma_wrap])
cdef void ** i0_data = alloc_data_from_list([ <int> <void *>i0_, <int> <void *>i0_, ])
cdef void ** i0e_data = alloc_data_from_list([ <int> <void *>i0e_, <int> <void *>i0e_, ])
cdef void ** i1_data = alloc_data_from_list([ <int> <void *>i1_, <int> <void *>i1_, ])
cdef void ** i1e_data = alloc_data_from_list([ <int> <void *>i1e_, <int> <void *>i1e_, ])
cdef void ** igamc_data = alloc_data_from_list([ <int> <void *>igamc, <int> <void *>igamc, ])
cdef void ** igam_data = alloc_data_from_list([ <int> <void *>igam, <int> <void *>igam, ])
cdef void ** igami_data = alloc_data_from_list([ <int> <void *>igami, <int> <void *>igami, ])
cdef void ** gammaincinv_data = alloc_data_from_list([ <int> <void *>gammaincinv_, <int> <void *>gammaincinv_, ])
cdef void ** iv_data = alloc_data_from_list([ <int> <void *>iv_, <int> <void *>iv_, <int> <void *>cbesi_wrap, <int> <void *>cbesi_wrap,])
cdef void ** ive_data = alloc_data_from_list([ <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e, <int> <void *>cbesi_wrap_e, ])
cdef void ** j0_data = alloc_data_from_list([ <int> <void *>j0_,  <int> <void *>j0_,  ])
cdef void ** y0_data = alloc_data_from_list([ <int> <void *>y0_, <int> <void *>y0_, ])
cdef void ** j1_data = alloc_data_from_list([ <int> <void *>j1_,  <int> <void *>j1_,  ])
cdef void ** y1_data = alloc_data_from_list([ <int> <void *>y1_, <int> <void *>y1_, ])
cdef void ** jv_data = alloc_data_from_list([ <int> <void *>jv_, <int> <void *>jv_, <int> <void *>cbesj_wrap, <int> <void *>cbesj_wrap,])
cdef void ** jve_data = alloc_data_from_list([ <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e, <int> <void *>cbesj_wrap_e, ])
cdef void ** yv_data = alloc_data_from_list([ <int> <void *>yv_, <int> <void *>yv_, <int> <void *>cbesy_wrap, <int> <void *>cbesy_wrap,])
cdef void ** yve_data = alloc_data_from_list([ <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e, <int> <void *>cbesy_wrap_e, ])
cdef void ** k0_data = alloc_data_from_list([ <int> <void *>k0_, <int> <void *>k0_, ])
cdef void ** k0e_data = alloc_data_from_list([ <int> <void *>k0e_, <int> <void *>k0e_, ])
cdef void ** k1_data = alloc_data_from_list([ <int> <void *>k1_, <int> <void *>k1_, ])
cdef void ** k1e_data = alloc_data_from_list([ <int> <void *>k1e_, <int> <void *>k1e_, ])
cdef void ** kv_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap, <int> <void *>cbesk_wrap,])
cdef void ** kve_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e, <int> <void *>cbesk_wrap_e,])
cdef void ** hankel1_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1, <int> <void *>cbesh_wrap1,])
cdef void ** hankel1e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1_e, <int> <void *>cbesh_wrap1_e,])
cdef void ** hankel2_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2, <int> <void *>cbesh_wrap2,])
cdef void ** hankel2e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2_e, <int> <void *>cbesh_wrap2_e,])
cdef void ** ndtr_data = alloc_data_from_list([ <int> <void *>ndtr_, <int> <void *>ndtr_, ])
cdef void ** erfc_data = alloc_data_from_list([ <int> <void *>erfc_, <int> <void *>erfc_, ])
cdef void ** erf_data = alloc_data_from_list([ <int> <void *>erf_, <int> <void *>erf_, <int> <void *>cerf_wrap, <int> <void *>cerf_wrap])
cdef void ** ndtri_data = alloc_data_from_list([ <int> <void *>ndtri_, <int> <void *>ndtri_, ])
cdef void ** psi_data = alloc_data_from_list([ <int> <void *>psi_, <int> <void *>psi_, <int> <void *>cpsi_wrap, <int> <void *>cpsi_wrap])
cdef void ** rgamma_data = alloc_data_from_list([ <int> <void *>rgamma_, <int> <void *>rgamma_, <int> <void *>crgamma_wrap, <int> <void *>crgamma_wrap])
cdef void ** round_data = alloc_data_from_list([ <int> <void *>round_, <int> <void *>round_, ])
cdef void ** sindg_data = alloc_data_from_list([ <int> <void *>sindg_, <int> <void *>sindg_, ])
cdef void ** cosdg_data = alloc_data_from_list([ <int> <void *>cosdg_, <int> <void *>cosdg_, ])
cdef void ** radian_data = alloc_data_from_list([ <int> <void *>radian_, <int> <void *>radian_, ])
cdef void ** tandg_data = alloc_data_from_list([ <int> <void *>tandg_, <int> <void *>tandg_, ])
cdef void ** cotdg_data = alloc_data_from_list([ <int> <void *>cotdg_, <int> <void *>cotdg_, ])
cdef void ** log1p_data = alloc_data_from_list([ <int> <void *>log1p_, <int> <void *>log1p_, ])
cdef void ** expm1_data = alloc_data_from_list([ <int> <void *>expm1_, <int> <void *>expm1_, ])
cdef void ** cosm1_data = alloc_data_from_list([ <int> <void *>cosm1_, <int> <void *>cosm1_, ])
cdef void ** spence_data = alloc_data_from_list([ <int> <void *>spence_, <int> <void *>spence_, ])
cdef void ** struve_data = alloc_data_from_list([ <int> <void *>struve_wrap, <int> <void *>struve_wrap, ])
cdef void ** modstruve_data = alloc_data_from_list([ <int> <void *>modstruve_wrap, <int> <void *>modstruve_wrap, ])
cdef void ** itmodstruve0_data = alloc_data_from_list([ <int> <void *>itmodstruve0_wrap, <int> <void *>itmodstruve0_wrap, ])
cdef void ** itstruve0_data = alloc_data_from_list([ <int> <void *>itstruve0_wrap, <int> <void *>itstruve0_wrap, ])
cdef void ** it2struve0_data = alloc_data_from_list([ <int> <void *>it2struve0_wrap, <int> <void *>it2struve0_wrap, ])
cdef void ** zeta_data = alloc_data_from_list([ <int> <void *>zeta_, <int> <void *>zeta_, ])
cdef void ** zetac_data = alloc_data_from_list([ <int> <void *>zetac_, <int> <void *>zetac_, ])
cdef void ** kolmogorov_data = alloc_data_from_list([ <int> <void *>kolmogorov_, <int> <void *>kolmogorov_, ])
cdef void ** kolmogi_data = alloc_data_from_list([ <int> <void *>kolmogi_, <int> <void *>kolmogi_, ])
cdef void ** wofz_data = alloc_data_from_list([ <int> <void *>cwofz_wrap, <int> <void *>cwofz_wrap, ])
cdef void ** besselpoly_data = alloc_data_from_list([<int> <void *>besselpoly_, <int> <void *>besselpoly_,])
cdef void ** cdfbet3_data = alloc_data_from_list([<int> <void *>cdfbet3_wrap, <int> <void *>cdfbet3_wrap])
cdef void ** cdfbet4_data = alloc_data_from_list([<int> <void *>cdfbet4_wrap, <int> <void *>cdfbet4_wrap])
cdef void ** cdfbin2_data = alloc_data_from_list([<int> <void *>cdfbin2_wrap, <int> <void *>cdfbin2_wrap])
cdef void ** cdfbin3_data = alloc_data_from_list([<int> <void *>cdfbin3_wrap, <int> <void *>cdfbin3_wrap])
cdef void ** cdfchi3_data = alloc_data_from_list([<int> <void *>cdfchi3_wrap, <int> <void *>cdfchi3_wrap])
cdef void ** cdfchn1_data = alloc_data_from_list([<int> <void *>cdfchn1_wrap, <int> <void *>cdfchn1_wrap])
cdef void ** cdfchn2_data = alloc_data_from_list([<int> <void *>cdfchn2_wrap, <int> <void *>cdfchn2_wrap])
cdef void ** cdfchn3_data = alloc_data_from_list([<int> <void *>cdfchn3_wrap, <int> <void *>cdfchn3_wrap])
cdef void ** cdfchn4_data = alloc_data_from_list([<int> <void *>cdfchn4_wrap, <int> <void *>cdfchn4_wrap])
cdef void ** cdff4_data = alloc_data_from_list([<int> <void *>cdff4_wrap, <int> <void *>cdff4_wrap])
cdef void ** cdffnc1_data = alloc_data_from_list([<int> <void *>cdffnc1_wrap, <int> <void *>cdffnc1_wrap])
cdef void ** cdffnc2_data = alloc_data_from_list([<int> <void *>cdffnc2_wrap, <int> <void *>cdffnc2_wrap])
cdef void ** cdffnc3_data = alloc_data_from_list([<int> <void *>cdffnc3_wrap, <int> <void *>cdffnc3_wrap])
cdef void ** cdffnc4_data = alloc_data_from_list([<int> <void *>cdffnc4_wrap, <int> <void *>cdffnc4_wrap])
cdef void ** cdffnc5_data = alloc_data_from_list([<int> <void *>cdffnc5_wrap, <int> <void *>cdffnc5_wrap])
cdef void ** cdfgam2_data = alloc_data_from_list([<int> <void *>cdfgam2_wrap, <int> <void *>cdfgam2_wrap])
cdef void ** cdfgam3_data = alloc_data_from_list([<int> <void *>cdfgam3_wrap, <int> <void *>cdfgam3_wrap])
cdef void ** cdfgam4_data = alloc_data_from_list([<int> <void *>cdfgam4_wrap, <int> <void *>cdfgam4_wrap])
cdef void ** cdfnbn2_data = alloc_data_from_list([<int> <void *>cdfnbn2_wrap, <int> <void *>cdfnbn2_wrap])
cdef void ** cdfnbn3_data = alloc_data_from_list([<int> <void *>cdfnbn3_wrap, <int> <void *>cdfnbn3_wrap])
cdef void ** cdfnor3_data = alloc_data_from_list([<int> <void *>cdfnor3_wrap, <int> <void *>cdfnor3_wrap])
cdef void ** cdfnor4_data = alloc_data_from_list([<int> <void *>cdfnor4_wrap, <int> <void *>cdfnor4_wrap])
cdef void ** cdfpoi2_data = alloc_data_from_list([<int> <void *>cdfpoi2_wrap, <int> <void *>cdfpoi2_wrap])
cdef void ** cdft1_data = alloc_data_from_list([<int> <void *>cdft1_wrap, <int> <void *>cdft1_wrap])
cdef void ** cdft2_data = alloc_data_from_list([<int> <void *>cdft2_wrap, <int> <void *>cdft2_wrap])
cdef void ** cdft3_data = alloc_data_from_list([<int> <void *>cdft3_wrap, <int> <void *>cdft3_wrap])
cdef void ** cdftnc1_data = alloc_data_from_list([<int> <void *>cdftnc1_wrap, <int> <void *>cdftnc1_wrap])
cdef void ** cdftnc2_data = alloc_data_from_list([<int> <void *>cdftnc2_wrap, <int> <void *>cdftnc2_wrap])
cdef void ** cdftnc3_data = alloc_data_from_list([<int> <void *>cdftnc3_wrap, <int> <void *>cdftnc3_wrap])
cdef void ** cdftnc4_data = alloc_data_from_list([<int> <void *>cdftnc4_wrap, <int> <void *>cdftnc4_wrap])
cdef void ** tklambda_data = alloc_data_from_list([<int> <void *>tukeylambdacdf, <int> <void *>tukeylambdacdf])
cdef void ** mathieu_a_data = alloc_data_from_list([<int> <void *>cem_cva_wrap, <int> <void *>cem_cva_wrap])
cdef void ** mathieu_b_data = alloc_data_from_list([<int> <void *>sem_cva_wrap, <int> <void *>sem_cva_wrap])
cdef void ** mathieu_cem_data = alloc_data_from_list([<int> <void *>cem_wrap, <int> <void *>cem_wrap])
cdef void ** mathieu_sem_data = alloc_data_from_list([<int> <void *>sem_wrap, <int> <void *>sem_wrap])
cdef void ** mathieu_mcem1_data = alloc_data_from_list([<int> <void *>mcm1_wrap, <int> <void *>mcm1_wrap])
cdef void ** mathieu_mcem2_data = alloc_data_from_list([<int> <void *>mcm2_wrap, <int> <void *>mcm2_wrap])
cdef void ** mathieu_msem1_data = alloc_data_from_list([<int> <void *>msm1_wrap, <int> <void *>msm1_wrap])
cdef void ** mathieu_msem2_data = alloc_data_from_list([<int> <void *>msm2_wrap, <int> <void *>msm2_wrap])
cdef void ** lpmv_data = alloc_data_from_list([<int> <void *>pmv_wrap, <int> <void *>pmv_wrap])
cdef void ** pbwa_data = alloc_data_from_list([<int> <void *>pbwa_wrap, <int> <void *>pbwa_wrap])
cdef void ** pbdv_data = alloc_data_from_list([<int> <void *>pbdv_wrap, <int> <void *>pbdv_wrap])
cdef void ** pbvv_data = alloc_data_from_list([<int> <void *>pbvv_wrap, <int> <void *>pbvv_wrap])
cdef void ** prolate_aswfa_data = alloc_data_from_list([<int> <void *>prolate_aswfa_wrap, <int> <void *>prolate_aswfa_wrap])
cdef void ** prolate_radial1_data = alloc_data_from_list([<int> <void *>prolate_radial1_wrap, <int> <void *>prolate_radial1_wrap])
cdef void ** prolate_radial2_data = alloc_data_from_list([<int> <void *>prolate_radial2_wrap, <int> <void *>prolate_radial2_wrap])
cdef void ** oblate_aswfa_data = alloc_data_from_list([<int> <void *>oblate_aswfa_wrap, <int> <void *>oblate_aswfa_wrap])
cdef void ** oblate_radial1_data = alloc_data_from_list([<int> <void *>oblate_radial1_wrap, <int> <void *>oblate_radial1_wrap])
cdef void ** oblate_radial2_data = alloc_data_from_list([<int> <void *>oblate_radial2_wrap, <int> <void *>oblate_radial2_wrap])
cdef void ** prolate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>prolate_aswfa_nocv_wrap, <int> <void *>prolate_aswfa_nocv_wrap])
cdef void ** prolate_radial1_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial1_nocv_wrap, <int> <void *>prolate_radial1_nocv_wrap])
cdef void ** prolate_radial2_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial2_nocv_wrap, <int> <void *>prolate_radial2_nocv_wrap])
cdef void ** oblate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>oblate_aswfa_nocv_wrap, <int> <void *>oblate_aswfa_nocv_wrap])
cdef void ** oblate_radial1_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial1_nocv_wrap, <int> <void *>oblate_radial1_nocv_wrap])
cdef void ** oblate_radial2_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial2_nocv_wrap, <int> <void *>oblate_radial2_nocv_wrap])
cdef void ** prolate_segv_data = alloc_data_from_list([<int> <void *>prolate_segv_wrap, <int> <void *>prolate_segv_wrap])
cdef void ** oblate_segv_data = alloc_data_from_list([<int> <void *>oblate_segv_wrap, <int> <void *>oblate_segv_wrap])
cdef void ** modfresnelp_data = alloc_data_from_list([<int> <void *>modified_fresnel_plus_wrap, <int> <void *>modified_fresnel_plus_wrap])
cdef void ** modfresnelm_data = alloc_data_from_list([<int> <void *>modified_fresnel_minus_wrap, <int> <void *>modified_fresnel_minus_wrap])

cdef char* alloc_types_from_list(l):
    cdef char* r = <char *>malloc(len(l))
    for i in range(len(l)):
        r[i] = l[i]
    return r

cdef char* cephes_7_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
cdef char* cephes_6_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
cdef char* cephes_5_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])

cdef char* cephes_5b2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, ])

cdef char* cephes_5c_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])

cdef char* cephes_5c2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])

cdef char* cephes_4_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])

cdef char* cephes_4c_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE ])

cdef char* cephes_3_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE,  ])
cdef char* cephes_3_cmplx_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT,   np.NPY_CDOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
cdef char* cephes_3c_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
cdef char* cephes_3cp_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
cdef char* cephes_2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,   ])
cdef char* cephes_1rc_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE  ])
cdef char* cephes_1c_types = alloc_types_from_list([ np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])

cephes1_functions[0] = NpyUFunc_f_f_As_d_d
cephes1_functions[1] = NpyUFunc_d_d
cephes1c_functions[0] = cephes_F_F_As_D_D
cephes1c_functions[1] = cephes_D_D
cephes1rc_functions[0] = NpyUFunc_f_f_As_d_d
cephes1rc_functions[1] = NpyUFunc_d_d
cephes1rc_functions[2] = cephes_F_F_As_D_D
cephes1rc_functions[3] = cephes_D_D
cephes1_2_functions[0] = NpyUFunc_f_ff_As_d_dd
cephes1_2_functions[1] = NpyUFunc_d_dd
cephes1_2_functions[2] = NpyUFunc_F_FF_As_D_DD
cephes1_2_functions[3] = NpyUFunc_D_DD
cephes1_2c_functions[0] = NpyUFunc_f_FF_As_d_DD
cephes1_2c_functions[1] = NpyUFunc_d_DD
cephes1c_4_functions[0] = NpyUFunc_f_ffff_As_d_dddd
cephes1c_4_functions[1] = NpyUFunc_d_dddd
cephes1c_4_functions[2] = NpyUFunc_F_FFFF_As_D_DDDD
cephes1c_4_functions[3] = NpyUFunc_D_DDDD
cephes1cpb_4_functions[0] = NpyUFunc_f_FFFF_As_d_DDDD
cephes1cpb_4_functions[1] = NpyUFunc_d_DDDD
cephes2_functions[0] = NpyUFunc_ff_f_As_dd_d
cephes2_functions[1] = NpyUFunc_dd_d
cephes2_2_functions[0] = NpyUFunc_ff_ff_As_dd_dd
cephes2_2_functions[1] = NpyUFunc_dd_dd
cephes2a_functions[0] = NpyUFunc_ff_f_As_id_d
cephes2a_functions[1] = NpyUFunc_dd_d_As_id_d
cephes2c_functions[0] = NpyUFunc_ff_f_As_dd_d
cephes2c_functions[1] = NpyUFunc_dd_d
cephes2c_functions[2] = NpyUFunc_fF_F_As_dD_D
cephes2c_functions[3] = NpyUFunc_dD_D
cephes2cpp_functions[0] = NpyUFunc_fF_F_As_dD_D
cephes2cpp_functions[1] = NpyUFunc_dD_D
cephes2_4_functions[0] = NpyUFunc_ff_ffff_As_dd_dddd
cephes2_4_functions[1] = NpyUFunc_dd_dddd
cephes3_functions[0] = NpyUFunc_fff_f_As_ddd_d
cephes3_functions[1] = NpyUFunc_ddd_d
cephes3_functions[2] = NpyUFunc_ffF_F_As_ddD_D
cephes3_functions[3] = NpyUFunc_ddD_D
cephes3a_functions[0] = NpyUFunc_fff_f_As_iid_d
cephes3a_functions[1] = NpyUFunc_ddd_d_As_iid_d
cephes3_2_functions[0] = NpyUFunc_fff_ff_As_ddd_dd
cephes3_2_functions[1] = NpyUFunc_ddd_dd
cephes4_functions[0] = NpyUFunc_ffff_f_As_dddd_d
cephes4_functions[1] = NpyUFunc_dddd_d
cephes4_functions[2] = NpyUFunc_fffF_F_As_dddD_D
cephes4_functions[3] = NpyUFunc_dddD_D
cephes4_2_functions[0] = NpyUFunc_ffff_ff_As_dddd_dd
cephes4_2_functions[1] = NpyUFunc_dddd_dd
cephes4a_2_functions[0] = NpyUFunc_ffff_ff_As_dddi_dd
cephes4a_2_functions[1] = NpyUFunc_dddd_dd_As_dddi_dd
cephes5_2_functions[0] = NpyUFunc_fffff_ff_As_ddddd_dd
cephes5_2_functions[1] = NpyUFunc_ddddd_dd

airy_doc = "(Ai,Aip,Bi,Bip)=airy(z) calculates the Airy functions and their derivatives\nevaluated at real or complex number z.  The Airy functions Ai and Bi \nare two independent solutions of y''(x)=xy.  Aip and Bip are the first derivatives\nevaluated at x of Ai and Bi respectively."
airye_doc = "(Aie,Aipe,Bie,Bipe)=airye(z) calculates the exponentially scaled Airy functions and \ntheir derivatives evaluated at real or complex number z.  \nairye(z)[0:1] = airy(z)[0:1] * exp(2.0/3.0*z*sqrt(z))\nairye(z)[2:3] = airy(z)[2:3] * exp(-abs((2.0/3.0*z*sqrt(z)).real))"
bdtr_doc = "y=bdtr(k,n,p) returns the sum of the terms 0 through k of the\nBinomial probability density:  sum(nCj p**j (1-p)**(n-j),j=0..k)"
bdtrc_doc = "y=bdtrc(k,n,p) returns the sum of the terms k+1 through n of the\nBinomial probability density: sum(nCj p**j (1-p)**(n-j), j=k+1..n)"
bdtri_doc = "p=bdtri(k,n,y) finds the probability p such that the sum of the\nterms 0 through k of the Binomial probability density is equal to the\ngiven cumulative probability y."
bei_doc = "y=bei(x) returns the Kelvin function bei x"
beip_doc = "y=beip(x) returns the derivative of the Kelvin function bei x"
ber_doc = "y=ber(x) returns the Kelvin function ber x"
berp_doc = "y=berp(x) returns the derivative of the Kelvin function ber x"
besselpoly_doc = "y=besselpoly(a,lam,nu) returns the value of the integral:\nintegral(x**lam * jv(nu,2*a*x),x=0..1)."
beta_doc = "y=beta(a,b) returns gamma(a) * gamma(b) / gamma(a+b)"
betainc_doc = "y=betainc(a,b,x) returns the incomplete beta integral of the\n" \
                "arguments, evaluated from zero to x: \n\n" \
                "gamma(a+b) / (gamma(a)*gamma(b)) * integral(t**(a-1) (1-t)**(b-1), t=0..x).\n" \
                "\n" \
                "Note\n" \
                "----\n" \
                "The incomplete beta is also sometimes defined without the terms\n" \
                "in gamma, in which case the above definition is the so-called regularized\n" \
                "incomplete beta. Under this definition, you can get the incomplete beta by\n" \
                "multiplying the result of the scipy function by beta(a, b)."
betaincinv_doc = "x=betaincinv(a,b,y) returns x such that betainc(a,b,x) = y."
betaln_doc = "y=betaln(a,b) returns the natural logarithm of the absolute value of\nbeta: ln(|beta(x)|)."
btdtr_doc = "y=btdtr(a,b,x) returns the area from zero to x under the beta\ndensity function: gamma(a+b)/(gamma(a)*gamma(b)))*integral(t**(a-1)\n(1-t)**(b-1), t=0..x).  SEE ALSO betainc"
btdtri_doc = "x=btdtri(a,b,p) returns the pth quantile of the beta distribution.  It is\neffectively the inverse of btdtr returning the value of x for which \nbtdtr(a,b,x) = p.   SEE ALSO betaincinv"
cbrt_doc = "y=cbrt(x) returns the real cube root of x."
chdtr_doc = "p=chdtr(v,x) Returns the area under the left hand tail (from 0 to x) of the Chi\nsquare probability density function with v degrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=0..x)"
chdtrc_doc = "p=chdtrc(v,x) returns the area under the right hand tail (from x to\ninfinity) of the Chi square probability density function with v\ndegrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=x..inf)"
chdtri_doc = "x=chdtri(v,p) returns the argument x such that chdtrc(v,x) is equal\nto p."
cosdg_doc = "y=cosdg(x) calculates the cosine of the angle x given in degrees."
cosm1_doc = "y=calculates cos(x) - 1 for use when x is near zero."
cotdg_doc = "y=cotdg(x) calculates the cotangent of the angle x given in degrees."
dawsn_doc = "y=dawsn(x) returns dawson's integral: exp(-x**2) *\nintegral(exp(t**2),t=0..x)."
ellipe_doc = "y=ellipe(m) returns the complete integral of the second kind:\nintegral(sqrt(1-m*sin(t)**2),t=0..pi/2)"
ellipeinc_doc = "y=ellipeinc(phi,m) returns the incomplete elliptic integral of the\nsecond kind: integral(sqrt(1-m*sin(t)**2),t=0..phi)"
ellipj_doc = "(sn,cn,dn,ph)=ellipj(u,m) calculates the Jacobian elliptic functions of\nparameter m between 0 and 1, and real u.  The returned functions are\noften written sn(u|m), cn(u|m), and dn(u|m).  The value of ph is such\nthat if u = ellik(ph,m), then sn(u|m) = sin(ph) and cn(u|m) = cos(ph)."
ellipk_doc = "y=ellipk(m) returns the complete integral of the first kind:\nintegral(1/sqrt(1-m*sin(t)**2),t=0..pi/2)"
ellipkinc_doc = "y=ellipkinc(phi,m) returns the incomplete elliptic integral of the first\nkind: integral(1/sqrt(1-m*sin(t)**2),t=0..phi)"
erf_doc = "y=erf(z) returns the error function of complex argument defined as\nas 2/sqrt(pi)*integral(exp(-t**2),t=0..z)"
erfc_doc = "y=erfc(x) returns 1 - erf(x)."
exp1_doc = "y=exp1(z) returns the exponential integral (n=1) of complex argument\nz: integral(exp(-z*t)/t,t=1..inf)."
exp10_doc = "y=exp10(x) returns 10 raised to the x power."
exp2_doc = "y=exp2(x) returns 2 raised to the x power."
expi_doc = "y=expi(x) returns an exponential integral of argument x defined as\nintegral(exp(t)/t,t=-inf..x).  See expn for a different exponential\nintegral."
expm1_doc = "y=expm1(x) calculates exp(x) - 1 for use when x is near zero."
expn_doc = "y=expn(n,x) returns the exponential integral for integer n and\nnon-negative x and n: integral(exp(-x*t) / t**n, t=1..inf)."
fdtr_doc = "y=fdtr(dfn,dfd,x) returns the area from zero to x under the F density\nfunction (also known as Snedcor's density or the variance ratio\ndensity).  This is the density of X = (unum/dfn)/(uden/dfd), where unum and\nuden are random variables having Chi square distributions with dfn and\ndfd degrees of freedom, respectively."
fdtrc_doc = "y=fdtrc(dfn,dfd,x) returns the complemented F distribution function."
fdtri_doc = "x=fdtri(dfn,dfd,p) finds the F density argument x such that \nfdtr(dfn,dfd,x)=p."
fdtridfd_doc = "x=fdtridfd(dfn,p,x) finds the F density argument dfd such that \nfdtr(dfn,dfd,x)=p."
fdtridfn_doc = "x=fdtridfn(p,dfd,x) finds the F density argument dfn such that \nfdtr(dfn,dfd,x)=p."
fresnel_doc = "(ssa,cca)=fresnel(z) returns the fresnel sin and cos integrals: integral(sin(pi/2\n* t**2),t=0..z) and integral(cos(pi/2 * t**2),t=0..z) for real or \ncomplex z."
gamma_doc = "y=gamma(z) returns the gamma function of the argument.  The gamma\nfunction is often referred to as the generalized factorial since \nz*gamma(z) = gamma(z+1) and gamma(n+1) = n! for natural number n."
gammainc_doc = "y=gammainc(a,x) returns the incomplete gamma integral defined as\n1 / gamma(a) * integral(exp(-t) * t**(a-1), t=0..x).  Both arguments\nmust be positive."
gammaincc_doc = "y=gammaincc(a,x) returns the complemented incomplete gamma integral\ndefined as 1 / gamma(a) * integral(exp(-t) * t**(a-1), t=x..inf) = 1 -\ngammainc(a,x).  Both arguments must be positive."
gammainccinv_doc = "x=gammainccinv(a,y) returns x such that gammaincc(a,x) = y."
gammaln_doc = "y=gammaln(z) returns the base e logarithm of the absolute value of the\ngamma function of z: ln(|gamma(z)|)"
gdtr_doc = "y=gdtr(a,b,x) returns the integral from zero to x of the gamma\nprobability density function: a**b / gamma(b) * integral(t**(b-1) exp(-at),t=0..x).\nThe arguments a and b are used differently here than in other definitions."
gdtrc_doc = "y=gdtrc(a,b,x) returns the integral from x to infinity of the gamma\nprobability density function.  SEE gdtr, gdtri"
gdtri_doc = "x=gdtri(a,b,p) returns pth quantile of the gamma distribution.  It is \nthe inverse of the gamma cdf returning the value of x for which \ngdtr(b,a,x) = p."
hankel1_doc = "y=hankel1(v,z) returns the Hankel function of the first kind for real order v and complex argument z."
hankel1e_doc = "y=hankel1e(v,z) returns the exponentially scaled Hankel function of the first\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(-1j * z)"
hankel2_doc = "y=hankel2(v,z) returns the Hankel function of the second kind for real order v and complex argument z."
hankel2e_doc = "y=hankel2e(v,z) returns the exponentially scaled Hankel function of the second\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(1j * z)"
hyp1f1_doc = "y=hyp1f1(a,b,x) returns the confluent hypergeometeric function\n( 1F1(a,b;x) ) evaluated at the values a, b, and x."
hyp1f2_doc = "(y,err)=hyp1f2(a,b,c,x) returns (y,err) with the hypergeometric function 1F2 in y and an error estimate in err."
hyp2f0_doc = "(y,err)=hyp2f0(a,b,x,type) returns (y,err) with the hypergeometric function 2F0 in y and an error estimate in err.  The input type determines a convergence factor and\ncan be either 1 or 2."
hyp2f1_doc = "y=hyp2f1(a,b,c,z) returns the gauss hypergeometric function\n( 2F1(a,b;c;z) )."
hyp3f0_doc = "(y,err)=hyp3f0(a,b,c,x) returns (y,err) with the hypergeometric function 3F0 in y and an error estimate in err."
hyperu_doc = "y=hyperu(a,b,x) returns the confluent hypergeometric function of the\nsecond kind U(a,b,x)."
i0_doc = "y=i0(x) returns the modified Bessel function of order 0 at x."
i0e_doc = "y=i0e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i0e(x) = exp(-|x|) * i0(x)."
i1_doc = "y=i1(x) returns the modified Bessel function of order 1 at x."
i1e_doc = "y=i1e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i1e(x) = exp(-|x|) * i1(x)."
it2i0k0_doc = "(ii0,ik0)=it2i0k0(x) returns the integrals int((i0(t)-1)/t,t=0..x) and \nint(k0(t)/t,t=x..infinitity)."
it2j0y0_doc = "(ij0,iy0)=it2j0y0(x) returns the integrals int((1-j0(t))/t,t=0..x) and \nint(y0(t)/t,t=x..infinitity)."
it2struve0_doc = "y=it2struve0(x) returns the integral of the Struve function of order 0 \ndivided by t from x to infinity:  integral(H0(t)/t, t=x..inf)."
itairy_doc = "(Apt,Bpt,Ant,Bnt)=itairy(x) calculates the integral of Airy functions from 0 to x\nfor positive (Apt, Bpt) and negative (Ant, Bnt) arguments."
iti0k0_doc = "(ii0,ik0)=iti0k0(x) returns simple integrals from 0 to x of the zeroth order \nmodified bessel functions i0 and k0."
itj0y0_doc = "(ij0,iy0)=itj0y0(x) returns simple integrals from 0 to x of the zeroth order \nbessel functions j0 and y0."
itmodstruve0_doc = "y=itmodstruve0(x) returns the integral of the modified Struve function\nof order 0 from 0 to x:  integral(L0(t), t=0..x)."
itstruve0_doc = "y=itstruve0(x) returns the integral of the Struve function of order 0 \nfrom 0 to x:  integral(H0(t), t=0..x)."
iv_doc = "y=iv(v,z) returns the modified Bessel function of real order v of\nz.  If z is of real type and negative, v must be integer valued."
ive_doc = "y=ive(v,z) returns the exponentially scaled modified Bessel function of \nreal order v and complex z: ive(v,z) = iv(v,z) * exp(-abs(z.real))"
j0_doc = "y=j0(x) returns the Bessel function of order 0 at x."
j1_doc = "y=j1(x) returns the Bessel function of order 1 at x."
jn_doc = "y=jn(n,x) returns the Bessel function of integer order n at  x."
jv_doc = "y=jv(v,z) returns the Bessel function of real order v at complex z."
jve_doc = "y=jve(v,z) returns the exponentially scaled Bessel function of real order\nv at complex z: jve(v,z) = jv(v,z) * exp(-abs(z.imag))"
k0_doc = "y=k0(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 0 at x."
k0e_doc = "y=k0e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 0 at x.  k0e(x) = exp(x) * k0(x)."
k1_doc = "y=i1(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 1 at x."
k1e_doc = "y=k1e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 1 at x.  k1e(x) = exp(x) * k1(x)"
kei_doc = "y=kei(x) returns the Kelvin function ker x"
keip_doc = "y=keip(x) returns the derivative of the Kelvin function kei x"
kelvin_doc = "(Be, Ke, Bep, Kep)=kelvin(x) returns the tuple (Be, Ke, Bep, Kep) which containes \ncomplex numbers representing the real and imaginary Kelvin functions \nand their derivatives evaluated at x.  For example, \nkelvin(x)[0].real = ber x and kelvin(x)[0].imag = bei x with similar \nrelationships for ker and kei."
ker_doc = "y=ker(x) returns the Kelvin function ker x"
kerp_doc = "y=kerp(x) returns the derivative of the Kelvin function ker x"
kn_doc = "y=kn(n,x) returns the modified Bessel function of the second kind (sometimes called the third kind) for\ninteger order n at x."
kolmogi_doc = "y=kolmogi(p) returns y such that kolmogorov(y) = p"
kolmogorov_doc = "p=kolmogorov(y) returns the complementary cumulative distribution \nfunction of Kolmogorov's limiting distribution (Kn* for large n) \nof a two-sided test for equality between an empirical and a theoretical \ndistribution. It is equal to the (limit as n->infinity of the) probability \nthat sqrt(n) * max absolute deviation > y."
kv_doc = "y=kv(v,z) returns the modified Bessel function of the second kind (sometimes called the third kind) for\nreal order v at complex z."
kve_doc = "y=kve(v,z) returns the exponentially scaled, modified Bessel function\nof the second kind (sometimes called the third kind) for real order v at complex z: kve(v,z) = kv(v,z) * exp(z)"
log1p_doc = "y=log1p(x) calculates log(1+x) for use when x is near zero."
lpmv_doc = "y=lpmv(m,v,x) returns the associated legendre function of integer order\nm and nonnegative degree v: |x|<=1."
mathieu_a_doc = "lmbda=mathieu_a(m,q) returns the characteristic value for the even solution, \nce_m(z,q), of Mathieu's equation"
mathieu_b_doc = "lmbda=mathieu_b(m,q) returns the characteristic value for the odd solution, \nse_m(z,q), of Mathieu's equation"
mathieu_cem_doc = "(y,yp)=mathieu_cem(m,q,x) returns the even Mathieu function, ce_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of ce_m(x,q)"
mathieu_modcem1_doc = "(y,yp)=mathieu_modcem1(m,q,x) evaluates the even modified Matheiu function \nof the first kind, Mc1m(x,q), and its derivative at x for order m and\nparameter q."
mathieu_modcem2_doc = "(y,yp)=mathieu_modcem2(m,q,x) evaluates the even modified Matheiu function \nof the second kind, Mc2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
mathieu_modsem1_doc = "(y,yp)=mathieu_modsem1(m,q,x) evaluates the odd modified Matheiu function \nof the first kind, Ms1m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
mathieu_modsem2_doc = "(y,yp)=mathieu_modsem2(m,q,x) evaluates the odd modified Matheiu function\nof the second kind, Ms2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
mathieu_sem_doc = "(y,yp)=mathieu_sem(m,q,x) returns the odd Mathieu function, se_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of se_m(x,q)."
modfresnelm_doc = "(fm,km)=modfresnelp(x) returns the modified fresnel integrals F_-(x) amd K_-(x)\nas fp=integral(exp(-1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(1j*(x*x+pi/4))*fp"
modfresnelp_doc = "(fp,kp)=modfresnelp(x) returns the modified fresnel integrals F_+(x) and K_+(x)\nas fp=integral(exp(1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(-1j*(x*x+pi/4))*fp"
modstruve_doc = "y=modstruve(v,x) returns the modified Struve function Lv(x) of order\nv at x, x must be positive unless v is an integer and it is recommended\nthat |v|<=20."
nbdtr_doc = "y=nbdtr(k,n,p) returns the sum of the terms 0 through k of the\nnegative binomial distribution: sum((n+j-1)Cj p**n (1-p)**j,j=0..k).\nIn a sequence of Bernoulli trials this is the probability that k or\nfewer failures precede the nth success."
nbdtrc_doc = "y=nbdtrc(k,n,p) returns the sum of the terms k+1 to infinity of the\nnegative binomial distribution."
nbdtri_doc = "p=nbdtri(k,n,y) finds the argument p such that nbdtr(k,n,p)=y."
nbdtrik_doc = "k=nbdtrik(y,n,p) finds the argument k such that nbdtr(k,n,p)=y."
nbdtrin_doc = "n=nbdtrin(k,y,p) finds the argument n such that nbdtr(k,n,p)=y."
ndtr_doc = "y=ndtr(x) returns the area under the standard Gaussian probability \ndensity function, integrated from minus infinity to x:\n1/sqrt(2*pi) * integral(exp(-t**2 / 2),t=-inf..x)"
ndtri_doc = "x=ndtri(y) returns the argument x for which the area udnder the\nGaussian probability density function (integrated from minus infinity\nto x) is equal to y."
obl_ang1_doc = "(s,sp)=obl_ang1(m,n,c,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
obl_ang1_cv_doc = "(s,sp)=obl_ang1_cv(m,n,c,cv,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
obl_cv_doc = "cv=obl_cv(m,n,c) computes the characteristic value of oblate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
obl_rad1_doc = "(s,sp)=obl_rad1(m,n,c,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
obl_rad1_cv_doc = "(s,sp)=obl_rad1_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
obl_rad2_doc = "(s,sp)=obl_rad2(m,n,c,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
obl_rad2_cv_doc = "(s,sp)=obl_rad2_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
pbdv_doc = "(d,dp)=pbdv(v,x) returns (d,dp) with the parabolic cylinder function Dv(x) in \nd and the derivative, Dv'(x) in dp."
pbvv_doc = "(v,vp)=pbvv(v,x) returns (v,vp) with the parabolic cylinder function Vv(x) in \nv and the derivative, Vv'(x) in vp."
pbwa_doc = "(w,wp)=pbwa(a,x) returns (w,wp) with the parabolic cylinder function W(a,x) in \nw and the derivative, W'(a,x) in wp.  May not be accurate for large (>5) \narguments in a and/or x."
pdtr_doc = "y=pdtr(k,m) returns the sum of the first k terms of the Poisson\ndistribution: sum(exp(-m) * m**j / j!, j=0..k) = gammaincc( k+1, m).\nArguments must both be positive and k an integer."
pdtrc_doc = "y=pdtrc(k,m) returns the sum of the terms from k+1 to infinity of the\nPoisson distribution: sum(exp(-m) * m**j / j!, j=k+1..inf) = gammainc( k+1, m).\nArguments must both be positive and k an integer."
pdtri_doc = "m=pdtri(k,y) returns the Poisson variable m such that the sum\nfrom 0 to k of the Poisson density is equal to the given probability\ny:  calculated by gammaincinv( k+1, y).  k must be a nonnegative integer and\ny between 0 and 1."
pdtrik_doc = "k=pdtrik(p,m) returns the quantile k such that pdtr(k,m)=p"
pro_ang1_doc = "(s,sp)=pro_ang1(m,n,c,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
pro_ang1_cv_doc = "(s,sp)=pro_ang1_cv(m,n,c,cv,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
pro_cv_doc = "cv=pro_cv(m,n,c) computes the characteristic value of prolate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
pro_rad1_doc = "(s,sp)=pro_rad1(m,n,c,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
pro_rad1_cv_doc = "(s,sp)=pro_rad1_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
pro_rad2_doc = "(s,sp)=pro_rad2(m,n,c,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
pro_rad2_cv_doc = "(s,sp)=pro_rad2_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
psi_doc = "y=psi(z) is the derivative of the logarithm of the gamma function\nevaluated at z (also called the digamma function)."
radian_doc = "y=radian(d,m,s) returns the angle given in (d)egrees, (m)inutes, and\n(s)econds in radians."
rgamma_doc = "y=rgamma(z) returns one divided by the gamma function of x."
round_doc = "y=Returns the nearest integer to x as a double precision\nfloating point result.  If x ends in 0.5 exactly, the\nnearest even integer is chosen."
shichi_doc = "(shi,chi)=shichi(x) returns the hyperbolic sine and cosine integrals:\nintegral(sinh(t)/t,t=0..x) and eul + ln x +\nintegral((cosh(t)-1)/t,t=0..x) where eul is Euler's Constant."
sici_doc = "(si,ci)=sici(x) returns in si the integral of the sinc function from 0 to x:\nintegral(sin(t)/t,t=0..x).  It returns in ci the cosine integral: eul + ln x +\nintegral((cos(t) - 1)/t,t=0..x)."
sindg_doc = "y=sindg(x) calculates the sine of the angle x given in degrees."
smirnov_doc = "y=smirnov(n,e) returns the exact Kolmogorov-Smirnov complementary \ncumulative distribution function (Dn+ or Dn-) for a one-sided test of \nequality between an empirical and a theoretical distribution. It is equal \nto the probability that the maximum difference between a theoretical \ndistribution and an empirical one based on n samples is greater than e."
smirnovi_doc = "e=smirnovi(n,y) returns e such that smirnov(n,e) = y."
spence_doc = "y=spence(x) returns the dilogarithm integral: -integral(log t /\n(t-1),t=1..x)"
stdtr_doc = "p=stdtr(df,t) returns the integral from minus infinity to t of the Student t\ndistribution with df > 0 degrees of freedom:\ngamma((df+1)/2)/(sqrt(df*pi)*gamma(df/2)) * integral((1+x**2/df)**(-df/2-1/2),\nx=-inf..t)"
stdtridf_doc = "t=stdtridf(p,t) returns the argument df such that stdtr(df,t) is equal to p."
stdtrit_doc = "t=stdtrit(df,p) returns the argument t such that stdtr(df,t) is equal to p."
struve_doc = "y=struve(v,x) returns the Struve function Hv(x) of order v at x, x\nmust be positive unless v is an integer."
tandg_doc = "y=tandg(x) calculates the tangent of the angle x given in degrees."
wofz_doc = "y=wofz(z) returns the value of the fadeeva function for complex argument\nz: exp(-z**2)*erfc(-i*z)"
y0_doc = "y=y0(x) returns the Bessel function of the second kind of order 0 at x."
y1_doc = "y=y1(x) returns the Bessel function of the second kind of order 1 at x."
yn_doc = "y=yn(n,x) returns the Bessel function of the second kind of integer\norder n at x."
yv_doc = "y=yv(v,z) returns the Bessel function of the second kind of real\norder v at complex z."
yve_doc = "y=yve(v,z) returns the exponentially scaled Bessel function of the second \nkind of real order v at complex z: yve(v,z) = yv(v,z) * exp(-abs(z.imag))"
zeta_doc = "y=zeta(x,q) returns the Riemann zeta function of two arguments:\nsum((k+q)**(-x),k=0..inf)"
zetac_doc = "y=zetac(x) returns 1.0 - the Riemann zeta function: sum(k**(-x), k=2..inf)"

gammaincinv_doc = """gammaincinv(a, y) returns x such that gammainc(a, x) = y."""

bdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrc", bdtrc_doc, 0)
bdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtr", bdtr_doc, 0)
bdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtri", bdtri_doc, 0)
btdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtr", btdtr_doc, 0)
btdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtri", btdtri_doc, 0)

fdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtrc", fdtrc_doc, 0)
fdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtr", fdtr_doc, 0)
fdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtri", fdtri_doc, 0)

gdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, gdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrc", gdtrc_doc, 0)
gdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, gdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtr", gdtr_doc, 0)

hyp2f1 = np.PyUFunc_FromFuncAndData(cephes4_functions, hyp2f1_data, cephes_5c2_types, 4, 4, 1, PyUFunc_None, "hyp2f1", hyp2f1_doc, 0)
hyp1f1 = np.PyUFunc_FromFuncAndData(cephes3_functions, hyp1f1_data, cephes_4c_types, 4, 3, 1, PyUFunc_None, "hyp1f1", hyp1f1_doc, 0)

hyperu = np.PyUFunc_FromFuncAndData(cephes3_functions, hypU_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "hyperu", hyperu_doc, 0)

hyp2f0 = np.PyUFunc_FromFuncAndData(cephes4a_2_functions, hyp2f0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp2f0", hyp2f0_doc, 0)
hyp1f2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, onef2_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp1f2", hyp1f2_doc, 0)
hyp3f0 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, threef0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp3f0", hyp3f0_doc, 0)

betainc = np.PyUFunc_FromFuncAndData(cephes3_functions, incbet_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "betainc", betainc_doc, 0)
betaincinv = np.PyUFunc_FromFuncAndData(cephes3_functions, incbi_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "betaincinv", betaincinv_doc, 0)

nbdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrc", nbdtrc_doc, 0)
nbdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtr", nbdtr_doc, 0)
nbdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtri", nbdtri_doc, 0)


beta = np.PyUFunc_FromFuncAndData(cephes2_functions, beta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "beta", beta_doc, 0)
betaln = np.PyUFunc_FromFuncAndData(cephes2_functions, lbeta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "betaln", betaln_doc, 0)
cbrt = np.PyUFunc_FromFuncAndData(cephes1_functions, cbrt_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cbrt", cbrt_doc, 0)
chdtrc = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtrc", chdtrc_doc, 0)
chdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtr", chdtr_doc, 0)
chdtri = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtri", chdtri_doc, 0)
dawsn = np.PyUFunc_FromFuncAndData(cephes1_functions, dawsn_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "dawsn", dawsn_doc, 0)
ellipeinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellie_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipeinc", ellipeinc_doc, 0)
ellipkinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellik_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipkinc", ellipkinc_doc, 0)
ellipe = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpe_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipe", ellipe_doc, 0)
ellipk = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpk_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipk", ellipk_doc, 0)
exp10 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp10_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp10", exp10_doc, 0)

exp2 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp2_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp2", exp2_doc, 0)
gamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, Gamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gamma", gamma_doc, 0)
gammaln = np.PyUFunc_FromFuncAndData(cephes1rc_functions, lgam_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gammaln", gammaln_doc, 0)
i0 = np.PyUFunc_FromFuncAndData(cephes1_functions, i0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0", i0_doc, 0)
i0e = np.PyUFunc_FromFuncAndData(cephes1_functions, i0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0e", i0e_doc, 0)
i1 = np.PyUFunc_FromFuncAndData(cephes1_functions, i1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1", i1_doc, 0)
i1e = np.PyUFunc_FromFuncAndData(cephes1_functions, i1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1e", i1e_doc, 0)

gammaincc = np.PyUFunc_FromFuncAndData(cephes2_functions, igamc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammaincc", gammaincc_doc, 0)
gammainc = np.PyUFunc_FromFuncAndData(cephes2_functions, igam_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainc", gammainc_doc, 0)
gammainccinv = np.PyUFunc_FromFuncAndData(cephes2_functions, igami_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainccinv", gammainccinv_doc, 0)
gammaincinv = np.PyUFunc_FromFuncAndData(cephes2_functions, gammaincinv_data,
                            cephes_3_types, 2, 2, 1, PyUFunc_None,
                            "gammaincinv", gammaincinv_doc, 0)

iv = np.PyUFunc_FromFuncAndData(cephes2c_functions, iv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "iv", iv_doc, 0)
ive = np.PyUFunc_FromFuncAndData(cephes2c_functions, ive_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "ive", ive_doc, 0)

ellipj = np.PyUFunc_FromFuncAndData(cephes2_4_functions, ellpj_data, cephes_6_types, 2, 2, 4, PyUFunc_None, "ellipj", ellipj_doc, 0)

expn = np.PyUFunc_FromFuncAndData(cephes2a_functions, expn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "expn", expn_doc, 0)
exp1 = np.PyUFunc_FromFuncAndData(cephes1rc_functions, exp1_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "exp1", exp1_doc, 0)
expi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, expi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "expi", expi_doc, 0)


kn = np.PyUFunc_FromFuncAndData(cephes2a_functions, kn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "kn", kn_doc, 0)
pdtrc = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrc", pdtrc_doc, 0)
pdtr = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtr", pdtr_doc, 0)
pdtri = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtri", pdtri_doc, 0)
yn = np.PyUFunc_FromFuncAndData(cephes2a_functions, yn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "yn", yn_doc, 0)
smirnov = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnov_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnov", smirnov_doc, 0)
smirnovi = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnovi_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnovi", smirnovi_doc, 0)

airy = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, airy_data, cephes_5c_types, 4, 1, 4, PyUFunc_None, "airy", airy_doc, 0)

itairy = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, itairy_data, cephes_5_types, 2, 1, 4, PyUFunc_None, "itairy", itairy_doc, 0)


airye = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, airye_data, cephes_5c_types, 4, 1, 4, PyUFunc_None, "airye", airye_doc, 0)

fresnel = np.PyUFunc_FromFuncAndData(cephes1_2_functions, fresnl_data, cephes_3_cmplx_types, 4, 1, 2, PyUFunc_None, "fresnel", fresnel_doc, 0)
shichi = np.PyUFunc_FromFuncAndData(cephes1_2_functions, shichi_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "shichi", shichi_doc, 0)
sici = np.PyUFunc_FromFuncAndData(cephes1_2_functions, sici_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "sici", sici_doc, 0)


itj0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, itj0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "itj0y0", itj0y0_doc, 0)
it2j0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2j0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2j0y0", it2j0y0_doc, 0)
iti0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, iti0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "iti0k0", iti0k0_doc, 0)
it2i0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2i0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2i0k0", it2i0k0_doc, 0)


j0 = np.PyUFunc_FromFuncAndData(cephes1_functions, j0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j0", j0_doc, 0)
y0 = np.PyUFunc_FromFuncAndData(cephes1_functions, y0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y0", y0_doc, 0)
j1 = np.PyUFunc_FromFuncAndData(cephes1_functions, j1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j1", j1_doc, 0)
y1 = np.PyUFunc_FromFuncAndData(cephes1_functions, y1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y1", y1_doc, 0)

jv = np.PyUFunc_FromFuncAndData(cephes2c_functions, jv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jv", jv_doc, 0)
jve = np.PyUFunc_FromFuncAndData(cephes2c_functions, jve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jve", jve_doc, 0)
yv = np.PyUFunc_FromFuncAndData(cephes2c_functions, yv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yv", yv_doc, 0)
yve = np.PyUFunc_FromFuncAndData(cephes2c_functions, yve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yve", yve_doc, 0)

# In cephes jv is more accurate than jn so we just alias jn to jv.
jn = np.PyUFunc_FromFuncAndData(cephes2c_functions, jv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jn", jn_doc, 0)

k0 = np.PyUFunc_FromFuncAndData(cephes1_functions, k0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0", k0_doc, 0)
k0e = np.PyUFunc_FromFuncAndData(cephes1_functions, k0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0e", k0e_doc, 0)
k1 = np.PyUFunc_FromFuncAndData(cephes1_functions, k1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1", k1_doc, 0)
k1e = np.PyUFunc_FromFuncAndData(cephes1_functions, k1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1e", k1e_doc, 0)
kv = np.PyUFunc_FromFuncAndData(cephes2c_functions, kv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kv", kv_doc, 0)
kve = np.PyUFunc_FromFuncAndData(cephes2c_functions, kve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kve", kve_doc, 0)

hankel1 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1", hankel1_doc, 0)
hankel1e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1e", hankel1e_doc, 0)
hankel2 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2", hankel2_doc, 0)
hankel2e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2e", hankel2e_doc, 0)


ndtr = np.PyUFunc_FromFuncAndData(cephes1_functions, ndtr_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ndtr", ndtr_doc, 0)

erfc = np.PyUFunc_FromFuncAndData(cephes1_functions, erfc_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "erfc", erfc_doc, 0)
erf = np.PyUFunc_FromFuncAndData(cephes1rc_functions, erf_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "erf", erf_doc, 0)

ndtri = np.PyUFunc_FromFuncAndData(cephes1_functions, ndtri_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ndtri", ndtri_doc, 0)
psi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, psi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "psi", psi_doc, 0)
rgamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, rgamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "rgamma", rgamma_doc, 0)
round = np.PyUFunc_FromFuncAndData(cephes1_functions, round_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "round", round_doc, 0)

sindg = np.PyUFunc_FromFuncAndData(cephes1_functions, sindg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "sindg", sindg_doc, 0)
cosdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cosdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosdg", cosdg_doc, 0)
radian = np.PyUFunc_FromFuncAndData(cephes3_functions, radian_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "radian", radian_doc, 0)
tandg = np.PyUFunc_FromFuncAndData(cephes1_functions, tandg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "tandg", tandg_doc, 0)
cotdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cotdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cotdg", cotdg_doc, 0)
log1p = np.PyUFunc_FromFuncAndData(cephes1_functions, log1p_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "log1p", log1p_doc, 0)
expm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, expm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "expm1", expm1_doc, 0)
cosm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, cosm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosm1", cosm1_doc, 0)

spence = np.PyUFunc_FromFuncAndData(cephes1_functions, spence_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "spence", spence_doc, 0)
zetac = np.PyUFunc_FromFuncAndData(cephes1_functions, zetac_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "zetac", zetac_doc, 0)

struve = np.PyUFunc_FromFuncAndData(cephes2_functions, struve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "struve", struve_doc, 0)
modstruve = np.PyUFunc_FromFuncAndData(cephes2_functions, modstruve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "modstruve", modstruve_doc, 0)
itstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itstruve0", itstruve0_doc, 0)
it2struve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, it2struve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "it2struve0", it2struve0_doc, 0)
itmodstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itmodstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itmodstruve0", itmodstruve0_doc, 0)

kelvin = np.PyUFunc_FromFuncAndData(cephes1cpb_4_functions, kelvin_data, cephes_5b2_types, 2, 1, 4, PyUFunc_None, "kelvin", kelvin_doc, 0)
ber = np.PyUFunc_FromFuncAndData(cephes1_functions, ber_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ber", ber_doc, 0)
bei = np.PyUFunc_FromFuncAndData(cephes1_functions, bei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "bei", bei_doc, 0)
ker = np.PyUFunc_FromFuncAndData(cephes1_functions, ker_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ker", ker_doc, 0)
kei = np.PyUFunc_FromFuncAndData(cephes1_functions, kei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kei", kei_doc, 0)
berp = np.PyUFunc_FromFuncAndData(cephes1_functions, berp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "berp", berp_doc, 0)
beip = np.PyUFunc_FromFuncAndData(cephes1_functions, beip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "beip", beip_doc, 0)
kerp = np.PyUFunc_FromFuncAndData(cephes1_functions, kerp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kerp", kerp_doc, 0)
keip = np.PyUFunc_FromFuncAndData(cephes1_functions, keip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "keip", keip_doc, 0)


zeta = np.PyUFunc_FromFuncAndData(cephes2_functions, zeta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "zeta", zeta_doc, 0)

kolmogorov = np.PyUFunc_FromFuncAndData(cephes1_functions, kolmogorov_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kolmogorov", kolmogorov_doc, 0)

kolmogi = np.PyUFunc_FromFuncAndData(cephes1_functions, kolmogi_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kolmogi", kolmogi_doc, 0)

wofz = np.PyUFunc_FromFuncAndData(cephes1c_functions, wofz_data, cephes_1c_types, 2, 1, 1, PyUFunc_None, "wofz", wofz_doc, 0)

besselpoly = np.PyUFunc_FromFuncAndData(cephes3_functions, besselpoly_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "besselpoly", besselpoly_doc, 0)

btdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbet3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtria", "", 0)
btdtrib = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbet4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtrib", "", 0)

bdtrik = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbin2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrik", "", 0)
bdtrin = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbin3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrin", "", 0)

chdtriv = np.PyUFunc_FromFuncAndData(cephes2_functions, cdfchi3_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtriv", "", 0)


chndtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtr", "", 0)
chndtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrix", "", 0)
chndtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtridf", "", 0)
chndtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrinc", "", 0)

fdtridfd = np.PyUFunc_FromFuncAndData(cephes3_functions, cdff4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtridfd", "", 0)

ncfdtr = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc1_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtr", "", 0)
ncfdtri = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc2_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtri", "", 0)
ncfdtridfn = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc3_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfn", "", 0)

ncfdtridfd = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc4_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfd", "", 0)
ncfdtrinc = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc5_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtrinc", "", 0)

gdtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrix", "", 0)
gdtrib = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrib", "", 0)
gdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtria", "", 0)

nbdtrik = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnbn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrik", "", 0)
nbdtrin = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnbn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrin", "", 0)

nrdtrimn = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnor3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nrdtrimn", "", 0)
nrdtrisd = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnor4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nrdtrisd", "", 0)

pdtrik = np.PyUFunc_FromFuncAndData(cephes2_functions, cdfpoi2_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrik", "", 0)

stdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft1_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtr", stdtr_doc, 0)
stdtrit = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft2_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtrit", stdtrit_doc, 0)
stdtridf = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft3_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtridf", stdtridf_doc, 0)

nctdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtr", "", 0)
nctdtrit = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrit", "", 0)
nctdtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtridf", "", 0)
nctdtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrinc", "", 0)

tklmbda = np.PyUFunc_FromFuncAndData(cephes2_functions, tklambda_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "tklmbda", "", 0)


mathieu_a = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_a_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_a", mathieu_a_doc, 0)
mathieu_b = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_b_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_b", mathieu_b_doc, 0)
mathieu_cem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_cem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_cem", mathieu_cem_doc, 0)
mathieu_sem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_sem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_sem", mathieu_sem_doc, 0)
mathieu_modcem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem1", mathieu_modcem1_doc, 0)
mathieu_modcem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem2", mathieu_modcem2_doc, 0)
mathieu_modsem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem1", mathieu_modsem1_doc, 0)
mathieu_modsem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem2", mathieu_modsem2_doc, 0)

lpmv = np.PyUFunc_FromFuncAndData(cephes3_functions, lpmv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "lpmv", lpmv_doc, 0)

pbwa = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbwa_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbwa", pbwa_doc, 0)
pbdv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbdv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbdv", pbdv_doc, 0)
pbvv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbvv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbvv", pbvv_doc, 0)

pro_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, prolate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "pro_cv", pro_cv_doc, 0)
obl_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, oblate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "obl_cv", obl_cv_doc, 0)
pro_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_ang1_cv", pro_ang1_cv_doc, 0)
pro_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad1_cv", pro_rad1_cv_doc, 0)
pro_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad2_cv", pro_rad2_cv_doc, 0)
obl_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_ang1_cv", obl_ang1_cv_doc, 0)
obl_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad1_cv", obl_rad1_cv_doc, 0)
obl_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad2_cv", obl_rad2_cv_doc, 0)
pro_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_ang1", pro_ang1_doc, 0)
pro_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad1", pro_rad1_doc, 0)
pro_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad2", pro_rad2_doc, 0)
obl_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_ang1", obl_ang1_doc, 0)
obl_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad1", obl_rad1_doc, 0)
obl_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad2", obl_rad2_doc, 0)



modfresnelp = np.PyUFunc_FromFuncAndData(cephes1_2c_functions, modfresnelp_data, cephes_3cp_types, 2, 1, 2, PyUFunc_None, "modfresnelp", modfresnelp_doc, 0)

modfresnelm = np.PyUFunc_FromFuncAndData(cephes1_2c_functions, modfresnelm_data, cephes_3cp_types, 2, 1, 2, PyUFunc_None, "modfresnelm", modfresnelm_doc, 0)
