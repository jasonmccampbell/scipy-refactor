
#ifdef __cplusplus
#define GLOBALFUNC(x) ::x
#else
#define GLOBALFUNC(x) x
#endif

extern void zfft(fwc_complex_x16_t * x, fwi_integer_t n, fwi_integer_t direction, fwi_integer_t howmany, fwi_integer_t normalize);
extern void drfft(fwr_real_x8_t * x, fwi_integer_t n, fwi_integer_t direction, fwi_integer_t howmany, fwi_integer_t normalize);
extern void zrfft(fwc_complex_x16_t * x, fwi_integer_t n, fwi_integer_t direction, fwi_integer_t howmany, fwi_integer_t normalize);
extern void zfftnd(fwc_complex_x16_t * x, fwi_integer_t r, fwi_integer_t * s, fwi_integer_t direction, fwi_integer_t howmany, fwi_integer_t normalize);
extern void destroy_zfft_cache();
extern void destroy_zfftnd_cache();
extern void destroy_drfft_cache();
extern void cfft(fwc_complex_x8_t * x, fwi_integer_t n, fwi_integer_t direction, fwi_integer_t howmany, fwi_integer_t normalize);
extern void rfft(fwr_real_x4_t * x, fwi_integer_t n, fwi_integer_t direction, fwi_integer_t howmany, fwi_integer_t normalize);
extern void crfft(fwc_complex_x8_t * x, fwi_integer_t n, fwi_integer_t direction, fwi_integer_t howmany, fwi_integer_t normalize);
extern void cfftnd(fwc_complex_x8_t * x, fwi_integer_t r, fwi_integer_t * s, fwi_integer_t direction, fwi_integer_t howmany, fwi_integer_t normalize);
extern void destroy_cfft_cache();
extern void destroy_cfftnd_cache();
extern void destroy_rfft_cache();
extern void ddct1(fwr_real_x8_t * x, fwi_integer_t n, fwi_integer_t howmany, fwi_integer_t normalize);
extern void ddct2(fwr_real_x8_t * x, fwi_integer_t n, fwi_integer_t howmany, fwi_integer_t normalize);
extern void ddct3(fwr_real_x8_t * x, fwi_integer_t n, fwi_integer_t howmany, fwi_integer_t normalize);
extern void dct1(fwr_real_x4_t * x, fwi_integer_t n, fwi_integer_t howmany, fwi_integer_t normalize);
extern void dct2(fwr_real_x4_t * x, fwi_integer_t n, fwi_integer_t howmany, fwi_integer_t normalize);
extern void dct3(fwr_real_x4_t * x, fwi_integer_t n, fwi_integer_t howmany, fwi_integer_t normalize);
extern void destroy_ddct2_cache();
extern void destroy_ddct1_cache();
extern void destroy_dct2_cache();
extern void destroy_dct1_cache();
