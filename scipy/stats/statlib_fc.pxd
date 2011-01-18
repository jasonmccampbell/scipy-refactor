from fwrap_ktp cimport *

cdef extern from "statlib_fc.h":
    void wprob(fwi_integer_t * test, fwi_integer_t * other, fwr_real_t * astart, fwr_real_t * a1, fwi_integer_t * l1, fwr_real_t * a2, fwr_real_t * a3, fwi_integer_t * ifault)
    void gscale(fwi_integer_t * test, fwi_integer_t * other, fwr_real_t * astart, fwr_real_t * a1, fwi_integer_t * l1, fwr_real_t * a2, fwr_real_t * a3, fwi_integer_t * ifault)
    fwr_dbl_t prho(fwi_integer_t * n, fwi_integer_t * is, fwi_integer_t * ifault)
    void swilk(fwl_logical_t * init, fwr_real_t * x, fwi_integer_t * n, fwi_integer_t * n1, fwi_integer_t * n2, fwr_real_t * a, fwr_real_t * w, fwr_real_t * pw, fwi_integer_t * ifault)
