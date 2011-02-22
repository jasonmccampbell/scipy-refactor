
#ifdef __cplusplus
#define GLOBALFUNC(x) ::x
#else
#define GLOBALFUNC(x) x
#endif

typedef double kernel_func_type(int k);

#ifdef __cplusplus
extern "C" {
#endif

void init_convolution_kernel(fwi_integer_t n, fwr_real_x8_t * omega, fwi_integer_t d, kernel_func_type * kernel_func, fwi_integer_t zero_nyquist);
void destroy_convolve_cache();
void convolve(fwi_integer_t n, fwr_real_x8_t * x, fwr_real_x8_t * omega, fwi_integer_t swap_real_imag);
void convolve_z(fwi_integer_t n, fwr_real_x8_t * x, fwr_real_x8_t * omega_real, fwr_real_x8_t * omega_imag);

#ifdef __cplusplus
}
#endif