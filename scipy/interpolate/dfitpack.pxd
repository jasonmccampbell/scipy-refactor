cimport numpy as np
from fwrap_ktp cimport *
cimport dfitpack_fc as fc

cpdef object bispeu(object tx, object ty, object c, fwi_integer_t kx, fwi_integer_t ky, object x, object y, object z=*)
cpdef object bispev(object tx, object ty, object c, fwi_integer_t kx, fwi_integer_t ky, object x, object y, object z=*)
cpdef object curfit(fwi_integer_t iopt, object x, object y, object w, object t, object wrk, object iwrk, object xb=*, object xe=*, fwi_integer_t k=*, fwr_real_x8_t s=*, object c=*)
cpdef object dblint(object tx, object ty, object c, fwi_integer_t kx, fwi_integer_t ky, fwr_real_x8_t xb, fwr_real_x8_t xe, fwr_real_x8_t yb, fwr_real_x8_t ye)
cpdef object fpcurf0(object x, object y, fwi_integer_t k, object w=*, object xb=*, object xe=*, object s=*, object nest=*, object t=*, object c=*, object fpint=*, object nrdata=*)
cpdef object fpcurf1(object x, object y, object w, fwr_real_x8_t xb, fwr_real_x8_t xe, fwi_integer_t k, fwr_real_x8_t s, fwi_integer_t n, object t, object c, fwr_real_x8_t fp, object fpint, object nrdata, fwi_integer_t ier, bint overwrite_x=*, bint overwrite_y=*, bint overwrite_w=*, bint overwrite_t=*, bint overwrite_c=*, bint overwrite_fpint=*, bint overwrite_nrdata=*)
cpdef object fpcurfm1(object x, object y, object w, fwi_integer_t k, object t, object xb=*, object xe=*, bint overwrite_t=*, object c=*, object fpint=*, object nrdata=*)
cpdef object percur(fwi_integer_t iopt, object x, object y, object w, object t, object wrk, object iwrk, fwi_integer_t k=*, fwr_real_x8_t s=*, object c=*)
cpdef object regrid_smth(object x, object y, object z, object xb=*, object xe=*, object yb=*, object ye=*, fwi_integer_t kx=*, fwi_integer_t ky=*, fwr_real_x8_t s=*, object tx=*, object ty=*, object c=*)
cpdef object spalde(object t, object c, fwi_integer_t k, fwr_real_x8_t x, object d=*)
cpdef object splder(object t, object c, fwi_integer_t k, object x, fwi_integer_t nu=*, fwi_integer_t e=*, object y=*)
cpdef object splev(object t, object c, fwi_integer_t k, object x, fwi_integer_t e=*, object y=*)
cpdef object splint(object t, object c, fwi_integer_t k, fwr_real_x8_t a, fwr_real_x8_t b)
cpdef object sproot(object t, object c, object mest=*, object zero=*)
cpdef object surfit_smth(object x, object y, object z, object w=*, object xb=*, object xe=*, object yb=*, object ye=*, fwi_integer_t kx=*, fwi_integer_t ky=*, object s=*, object nxest=*, object nyest=*, object eps=*, object lwrk2=*, object tx=*, object ty=*, object c=*, object wrk1=*)
cpdef object surfit_lsq(object x, object y, object z, object tx, object ty, object w=*, object xb=*, object xe=*, object yb=*, object ye=*, fwi_integer_t kx=*, fwi_integer_t ky=*, object eps=*, object lwrk2=*, bint overwrite_tx=*, bint overwrite_ty=*, object c=*)
