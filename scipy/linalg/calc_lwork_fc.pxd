from fwrap_ktp cimport *

cdef extern from "calc_lwork_fc.h":
    void gehrd(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * lo, fwi_integer_t * hi, size_t prefix_len_)
    void gesdd(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * compute_uv, size_t prefix_len_)
    void gelss(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * m, fwi_integer_t * n, fwi_integer_t * nrhs, size_t prefix_len_)
    void getri(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, size_t prefix_len_)
    void geev(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * compute_vl, fwi_integer_t * compute_vr, size_t prefix_len_)
    void heev(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * lower, size_t prefix_len_)
    void syev(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * lower, size_t prefix_len_)
    void gees(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * n, fwi_integer_t * compute_v, size_t prefix_len_)
    void geqrf(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * m, fwi_integer_t * n, size_t prefix_len_)
    void gqr(fwi_integer_t * min_lwork, fwi_integer_t * max_lwork, char * prefix, fwi_integer_t * m, fwi_integer_t * n, size_t prefix_len_)
