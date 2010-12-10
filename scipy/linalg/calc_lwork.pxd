cimport numpy as np
from calc_lwork_fc cimport *

cpdef api object gehrd(object prefix, fwi_integer_t n, fwi_integer_t lo, fwi_integer_t hi)
cpdef api object gesdd(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t compute_uv)
cpdef api object gelss(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t nrhs)
cpdef api object getri(object prefix, fwi_integer_t n)
cpdef api object geev(object prefix, fwi_integer_t n, fwi_integer_t compute_vl=*, fwi_integer_t compute_vr=*)
cpdef api object heev(object prefix, fwi_integer_t n, fwi_integer_t lower=*)
cpdef api object syev(object prefix, fwi_integer_t n, fwi_integer_t lower=*)
cpdef api object gees(object prefix, fwi_integer_t n, fwi_integer_t compute_v=*)
cpdef api object geqrf(object prefix, fwi_integer_t m, fwi_integer_t n)
cpdef api object gqr(object prefix, fwi_integer_t m, fwi_integer_t n)
