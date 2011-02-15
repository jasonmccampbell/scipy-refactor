cimport numpy as np
from fwrap_ktp cimport *
cimport convolve_fc as fc

cpdef object init_convolution_kernel(fwi_integer_t n, object kernel_func, fwi_integer_t d=*, object zero_nyquist=*, object kernel_func_extra_args=*, object omega=*)
cpdef object destroy_convolve_cache()
cpdef object convolve(object x, object omega, fwi_integer_t swap_real_imag=*, bint overwrite_x=*)
cpdef object convolve_z(object x, object omega_real, object omega_imag, bint overwrite_x=*)
