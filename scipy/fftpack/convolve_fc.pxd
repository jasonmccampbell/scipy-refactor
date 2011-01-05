from fwrap_ktp cimport *

cdef extern:
    fwr_real_x8_t kernel_func(fwi_integer_t k)
    void init_convolution_kernel(fwi_integer_t n, fwr_real_x8_t * omega, fwi_integer_t d, fwi_integer_t * kernel_func, fwi_integer_t zero_nyquist)
    void destroy_convolve_cache()
    void convolve(fwi_integer_t n, fwr_real_x8_t * x, fwr_real_x8_t * omega, fwi_integer_t swap_real_imag)
    void convolve_z(fwi_integer_t n, fwr_real_x8_t * x, fwr_real_x8_t * omega_real, fwr_real_x8_t * omega_imag)
