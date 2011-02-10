cimport numpy as np
from fwrap_ktp cimport *
cimport calc_lwork_fc as fc

cpdef object gehrd(object prefix, fwi_integer_t n, fwi_integer_t lo, fwi_integer_t hi)
cpdef object gesdd(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t compute_uv)
cpdef object gelss(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t nrhs)
cpdef object getri(object prefix, fwi_integer_t n)
cpdef object geev(object prefix, fwi_integer_t n, fwi_integer_t compute_vl=*, fwi_integer_t compute_vr=*)
cpdef object heev(object prefix, fwi_integer_t n, fwi_integer_t lower=*)
cpdef object syev(object prefix, fwi_integer_t n, fwi_integer_t lower=*)
cpdef object gees(object prefix, fwi_integer_t n, fwi_integer_t compute_v=*)
cpdef object geqrf(object prefix, fwi_integer_t m, fwi_integer_t n)
cpdef object gqr(object prefix, fwi_integer_t m, fwi_integer_t n)
