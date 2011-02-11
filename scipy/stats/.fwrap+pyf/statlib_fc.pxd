from fwrap_ktp cimport *

cdef extern from "statlib_fc.h":
    void wprob "F_FUNC(wprob,WPROB)"(
        fwi_integer_t * test,
        fwi_integer_t * other,
        fwr_real_t * astart,
        fwr_real_t * a1,
        fwi_integer_t * l1,
        fwr_real_t * a2,
        fwr_real_t * a3,
        fwi_integer_t * ifault
    )
    void gscale "F_FUNC(gscale,GSCALE)"(
        fwi_integer_t * test,
        fwi_integer_t * other,
        fwr_real_t * astart,
        fwr_real_t * a1,
        fwi_integer_t * l1,
        fwr_real_t * a2,
        fwr_real_t * a3,
        fwi_integer_t * ifault
    )
    fwr_dbl_t prho "F_FUNC(prho,PRHO)"(
        fwi_integer_t * n,
        fwi_integer_t * is__,
        fwi_integer_t * ifault
    )
    void swilk "F_FUNC(swilk,SWILK)"(
        fwl_logical_t * init,
        fwr_real_t * x,
        fwi_integer_t * n,
        fwi_integer_t * n1,
        fwi_integer_t * n2,
        fwr_real_t * a,
        fwr_real_t * w,
        fwr_real_t * pw,
        fwi_integer_t * ifault
    )
