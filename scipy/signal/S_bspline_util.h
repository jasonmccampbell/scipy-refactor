#if defined(__cplusplus)
extern "C" {
#endif

int S_cubic_spline2D(float*, float*, int, int, double, intp*, intp*, float);
int S_quadratic_spline2D(float*, float*, int, int, double, intp*, intp*, float);
int S_IIR_forback1(float, float, float*, float*, int, int, int, float);
int S_IIR_forback2(double, double, float*, float*, int, int, int, float);
int S_separable_2Dconvolve_mirror(float*, float*, int, int, float*, float*,
                                  int, int, intp*, intp*);

#if defined(__cplusplus)
} /* extern "C" */
#endif
