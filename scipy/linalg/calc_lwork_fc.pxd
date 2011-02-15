from fwrap_ktp cimport *

cdef extern from "calc_lwork_fc.h":
    void gehrd "F_FUNC(gehrd,GEHRD)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * n,
        fwi_integer_t * lo,
        fwi_integer_t * hi,
        size_t prefix_len_
    )
    void gesdd "F_FUNC(gesdd,GESDD)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * compute_uv,
        size_t prefix_len_
    )
    void gelss "F_FUNC(gelss,GELSS)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * m,
        fwi_integer_t * n,
        fwi_integer_t * nrhs,
        size_t prefix_len_
    )
    void getri "F_FUNC(getri,GETRI)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * n,
        size_t prefix_len_
    )
    void geev "F_FUNC(geev,GEEV)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * n,
        fwi_integer_t * compute_vl,
        fwi_integer_t * compute_vr,
        size_t prefix_len_
    )
    void heev "F_FUNC(heev,HEEV)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * n,
        fwi_integer_t * lower,
        size_t prefix_len_
    )
    void syev "F_FUNC(syev,SYEV)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * n,
        fwi_integer_t * lower,
        size_t prefix_len_
    )
    void gees "F_FUNC(gees,GEES)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * n,
        fwi_integer_t * compute_v,
        size_t prefix_len_
    )
    void geqrf "F_FUNC(geqrf,GEQRF)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * m,
        fwi_integer_t * n,
        size_t prefix_len_
    )
    void gqr "F_FUNC(gqr,GQR)"(
        fwi_integer_t * min_lwork,
        fwi_integer_t * max_lwork,
        char * prefix,
        fwi_integer_t * m,
        fwi_integer_t * n,
        size_t prefix_len_
    )
