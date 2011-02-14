from fwrap_ktp cimport *

cdef extern from "_slsqp_fc.h":
    void slsqp "F_FUNC(slsqp,SLSQP)"(
        fwi_integer_t * m,
        fwi_integer_t * meq,
        fwi_integer_t * la,
        fwi_integer_t * n,
        fwr_dbl_t * x,
        fwr_dbl_t * xl,
        fwr_dbl_t * xu,
        fwr_dbl_t * f,
        fwr_dbl_t * c,
        fwr_dbl_t * g,
        fwr_dbl_t * a,
        fwr_dbl_t * acc,
        fwi_integer_t * iter,
        fwi_integer_t * mode,
        fwr_dbl_t * w,
        fwi_integer_t * l_w,
        fwi_integer_t * jw,
        fwi_integer_t * l_jw
    )
