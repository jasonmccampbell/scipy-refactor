from fwrap_ktp cimport *

cdef extern from "convolve_fc.h":
    ctypedef double kernel_func_type(int k)
    void init_convolution_kernel "GLOBALFUNC(init_convolution_kernel)"(fwi_integer_t n, fwr_real_x8_t * omega, fwi_integer_t d, kernel_func_type * kernel_func, fwi_integer_t zero_nyquist)
    void destroy_convolve_cache "GLOBALFUNC(destroy_convolve_cache)"()
    void convolve "GLOBALFUNC(convolve)"(fwi_integer_t n, fwr_real_x8_t * x, fwr_real_x8_t * omega, fwi_integer_t swap_real_imag)
    void convolve_z "GLOBALFUNC(convolve_z)"(fwi_integer_t n, fwr_real_x8_t * x, fwr_real_x8_t * omega_real, fwr_real_x8_t * omega_imag)
