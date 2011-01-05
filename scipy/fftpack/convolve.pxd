cimport numpy as np
from fwrap_ktp cimport *
cimport convolve_fc as fc

cpdef api object init_convolution_kernel(fwi_integer_t n, object kernel_func, fwi_integer_t d=*, object zero_nyquist=*, object kernel_func_extra_args=*, object omega=*)
cpdef api object destroy_convolve_cache()
cpdef api object convolve(object x, object omega, fwi_integer_t swap_real_imag=*, bint overwrite_x=*)
cpdef api object convolve_z(object x, object omega_real, object omega_imag, bint overwrite_x=*)
