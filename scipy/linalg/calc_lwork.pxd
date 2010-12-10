cimport numpy as np
from calc_lwork_fc cimport *

cpdef api object gehrd(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t lo, fwi_integer_t hi)
cpdef api object gesdd(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t compute_uv)
cpdef api object gelss(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t nrhs)
cpdef api object getri(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n)
cpdef api object geev(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t compute_vl, fwi_integer_t compute_vr)
cpdef api object heev(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t lower)
cpdef api object syev(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t lower)
cpdef api object gees(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t compute_v)
cpdef api object geqrf(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t m, fwi_integer_t n)
cpdef api object gqr(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t m, fwi_integer_t n)
