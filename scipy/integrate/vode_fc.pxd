from fwrap_ktp cimport *

cdef extern from "vode_fc.h":
    void dvode "F_FUNC(dvode,DVODE)"(
        void (*f)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *),
        fwi_integer_t * neq,
        fwr_dbl_t * y,
        fwr_dbl_t * t,
        fwr_dbl_t * tout,
        fwi_integer_t * itol,
        fwr_dbl_t * rtol,
        fwr_dbl_t * atol,
        fwi_integer_t * itask,
        fwi_integer_t * istate,
        fwi_integer_t * iopt,
        fwr_dbl_t * rwork,
        fwi_integer_t * lrw,
        fwi_integer_t * iwork,
        fwi_integer_t * liw,
        void (*jac)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, void *, void *),
        fwi_integer_t * mf,
        void * rpar, # caller context
        void * ipar # caller context
    )
    void zvode "F_FUNC(zvode,ZVODE)"(
        void (*f)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwc_dbl_complex_t *, void *, void *),
        fwi_integer_t * neq,
        fwc_dbl_complex_t * y,
        fwr_dbl_t * t,
        fwr_dbl_t * tout,
        fwi_integer_t * itol,
        fwr_dbl_t * rtol,
        fwr_dbl_t * atol,
        fwi_integer_t * itask,
        fwi_integer_t * istate,
        fwi_integer_t * iopt,
        fwc_dbl_complex_t * zwork,
        fwi_integer_t * lzw,
        fwr_dbl_t * rwork,
        fwi_integer_t * lrw,
        fwi_integer_t * iwork,
        fwi_integer_t * liw,
        void (*jac)(fwi_integer_t *, fwr_dbl_t *, fwc_dbl_complex_t *, fwi_integer_t *, fwi_integer_t *, fwc_dbl_complex_t *, fwi_integer_t *, void *, void *),
        fwi_integer_t * mf,
        void * rpar, # caller context
        void * ipar # caller context
    )
