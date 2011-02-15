from fwrap_ktp cimport *

cdef extern from "_dop_fc.h":
    void dopri5 "F_FUNC(dopri5,DOPRI5)"(
        fwi_integer_t * n,
        void (*fcn)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *),
        fwr_dbl_t * x,
        fwr_dbl_t * y,
        fwr_dbl_t * xend,
        fwr_dbl_t * rtol,
        fwr_dbl_t * atol,
        fwi_integer_t * itol,
        void (*solout)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *),
        fwi_integer_t * iout,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        void * rpar,
        void * ipar,
        fwi_integer_t * idid
    )
    void dop853 "F_FUNC(dop853,DOP853)"(
        fwi_integer_t * n,
        void (*fcn)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *),
        fwr_dbl_t * x,
        fwr_dbl_t * y,
        fwr_dbl_t * xend,
        fwr_dbl_t * rtol,
        fwr_dbl_t * atol,
        fwi_integer_t * itol,
        void (*solout)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *),
        fwi_integer_t * iout,
        fwr_dbl_t * work,
        fwi_integer_t * lwork,
        fwi_integer_t * iwork,
        fwi_integer_t * liwork,
        void * rpar,
        void * ipar,
        fwi_integer_t * idid
    )
