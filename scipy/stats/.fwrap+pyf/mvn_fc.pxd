from fwrap_ktp cimport *

cdef extern from "mvn_fc.h":
    void mvnun "F_FUNC(mvnun,MVNUN)"(
        fwi_integer_t * d,
        fwi_integer_t * n,
        fwr_dbl_t * lower,
        fwr_dbl_t * upper,
        fwr_dbl_t * means,
        fwr_dbl_t * covar,
        fwi_integer_t * maxpts,
        fwr_dbl_t * abseps,
        fwr_dbl_t * releps,
        fwr_dbl_t * value,
        fwi_integer_t * inform
    )
    void mvndst "F_FUNC(mvndst,MVNDST)"(
        fwi_integer_t * n,
        fwr_dbl_t * lower,
        fwr_dbl_t * upper,
        fwi_integer_t * infin,
        fwr_dbl_t * correl,
        fwi_integer_t * maxpts,
        fwr_dbl_t * abseps,
        fwr_dbl_t * releps,
        fwr_dbl_t * error,
        fwr_dbl_t * value,
        fwi_integer_t * inform
    )
