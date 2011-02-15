from fwrap_ktp cimport *

cdef extern from "_cobyla_fc.h":
    void cobyla "F_FUNC(cobyla,COBYLA)"(
        void (*calcfc)(fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *),
        fwi_integer_t * n,
        fwi_integer_t * m,
        fwr_dbl_t * x,
        fwr_dbl_t * rhobeg,
        fwr_dbl_t * rhoend,
        fwi_integer_t * iprint,
        fwi_integer_t * maxfun,
        fwr_dbl_t * w,
        fwi_integer_t * iact
    )
