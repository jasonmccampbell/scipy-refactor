#include <npy_math.h>

#if defined(__cplusplus)
extern "C" {
#endif

int D_cubic_spline2D(double*, double*, int, int, double, npy_intp*, npy_intp*,
                     double);
int D_quadratic_spline2D(double*, double*, int, int, double, npy_intp*,
                         npy_intp*, double);
int D_IIR_forback1(double, double, double*, double*, int, int, int, double);
int D_IIR_forback2(double, double, double*, double*, int, int, int, double);
int D_separable_2Dconvolve_mirror(double*, double*, int, int, double*, double*,
                                  int, int, npy_intp*, npy_intp*);

#if defined(__cplusplus)
} /* extern "C" */
#endif
