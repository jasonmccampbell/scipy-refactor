from fwrap_ktp cimport *

cdef extern from "futil_fc.h":
    void dqsort(fwi_integer_t * n, fwr_real_x8_t * arr)
    void dfreps(fwr_real_x8_t * arr, fwi_integer_t * n, fwr_real_x8_t * replist, fwi_integer_t * repnum, fwi_integer_t * nlist)
