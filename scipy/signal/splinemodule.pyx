include "numpy.pxd"


__version__ = '0.2'



cdef extern from "S_bspline_util.h":
    int S_cubic_spline2D(float*, float*, int, int, double, npy_intp*,
                         npy_intp*,float)
    int S_quadratic_spline2D(float*, float*, int, int, double, npy_intp*,
                             npy_intp*, float)
    int S_IIR_forback1(float, float, float*, float*, int, int, int, float)
    int S_IIR_forback2(double, double, float*, float*, int, int, int, float)
    int S_separable_2Dconvolve_mirror(float*, float*, int, int, float*, float*,
                                      int, int, npy_intp*, npy_intp*)

cdef extern from "D_bspline_util.h":
    int D_cubic_spline2D(double*, double*, int, int, double, npy_intp*,
                         npy_intp*, double)
    int D_quadratic_spline2D(double*, double*, int, int, double, npy_intp*,
                             npy_intp*, double)
    int D_IIR_forback1(double, double, double*, double*, int, int, int, double)
    int D_IIR_forback2(double, double, double*, double*, int, int, int, double)
    int D_separable_2Dconvolve_mirror(double*, double*, int, int, double*,
                                      double*, int, int, npy_intp*, npy_intp*)


cdef void convert_strides(npy_intp* instrides,
                          npy_intp* convstrides,
                          int size, int N):
    cdef int n
    cdef npy_intp bitshift

    bitshift = -1
    while size != 0:
        size >>= 1
        bitshift += 1

    for n from 0 <= n < N:
        convstrides[n] = instrides[n] >> bitshift


def cspline2d(image, lambda_=0.0, precision=-1.0):
    """cspline2d(input {, lambda, precision}) -> ck

    Description:

    Return the third-order B-spline coefficients over a regularly spacedi
    input grid for the two-dimensional input image.  The lambda argument
    specifies the amount of smoothing.  The precision argument allows specifying
    the precision used when computing the infinite sum needed to apply mirror-
    symmetric boundary conditions.
    """
    cdef int thetype, M, N, retval=0
    cdef npy_intp outstrides[2], instrides[2]
    cdef ndarray a_image, ck

    thetype = PyArray_ObjectType(image, NPY_FLOAT)
    thetype = min(thetype, NPY_DOUBLE)
    a_image = PyArray_FROMANY(image, thetype, 2, 2, NPY_CONTIGUOUS)

    ck = PyArray_NEW(NULL, 2, PyArray_DIMS(a_image), thetype, NULL, NULL, 0,
                     NPY_CONTIGUOUS, NULL)
    M = PyArray_DIMS(a_image)[0]
    N = PyArray_DIMS(a_image)[1]

    convert_strides(PyArray_STRIDES(a_image), instrides,
                    PyArray_DESCR(a_image).elsize, 2)
    outstrides[0] = N
    outstrides[1] = 1

    if thetype == NPY_FLOAT:
        if not (0.0 <= precision < 1.0):
            precision = 1e-3
        retval = S_cubic_spline2D(<float *> PyArray_DATA(a_image),
                                  <float *> PyArray_DATA(ck),
                                  M, N, lambda_, instrides, outstrides,
                                  precision)

    elif thetype == NPY_DOUBLE:
        if not (0.0 <= precision < 1.0):
            precision = 1e-6
        retval = D_cubic_spline2D(<double *> PyArray_DATA(a_image),
                                  <double *> PyArray_DATA(ck),
                                  M, N, lambda_, instrides, outstrides,
                                  precision)

    if retval == -3:
        raise Exception("Precision too high.  Error did not converge.")

    if retval < 0:
        raise Exception("Problem occurred inside routine")


def qspline2d(image, lambda_=0.0, precision=-1.0):
    """qspline2d(input {, lambda, precision}) -> qk

    Description:

    Return the second-order B-spline coefficients over a regularly spaced
    input grid for the two-dimensional input image.  The lambda argument
    specifies the amount of smoothing.  The precision argument allows specifying
    the precision used when computing the infinite sum needed to apply mirror-
    symmetric boundary conditions.
    """
    cdef int thetype, M, N, retval=0
    cdef npy_intp outstrides[2], instrides[2]
    cdef ndarray a_image, ck

    if lambda_ != 0.0:
        raise Exception("Smoothing spline not yet implemented.")

    thetype = PyArray_ObjectType(image, NPY_FLOAT)
    thetype = min(thetype, NPY_DOUBLE)
    a_image = PyArray_FROMANY(image, thetype, 2, 2, NPY_CONTIGUOUS)

    ck = PyArray_FROMANY(a_image, thetype, 2, 2, NPY_CONTIGUOUS)
    M = PyArray_DIMS(a_image)[0]
    N = PyArray_DIMS(a_image)[1]

    convert_strides(PyArray_STRIDES(a_image), instrides,
                    PyArray_DESCR(a_image).elsize, 2)
    outstrides[0] = N
    outstrides[1] = 1

    if thetype == NPY_FLOAT:
         if not (0.0 <= precision < 1.0):
            precision = 1e-3
         retval = S_quadratic_spline2D(<float *> PyArray_DATA(a_image),
                                       <float *> PyArray_DATA(ck),
                                       M, N, lambda_, instrides, outstrides,
                                       precision)

    elif thetype == NPY_DOUBLE:
        if not (0.0 <= precision < 1.0):
            precision = 1e-6
        retval = D_quadratic_spline2D(<double *> PyArray_DATA(a_image),
                                      <double *> PyArray_DATA(ck),
                                      M, N, lambda_, instrides, outstrides,
                                      precision)

    if retval == -3:
        raise Exception("Precision too high.  Error did not converge.")

    if retval < 0:
        raise Exception("Problem occurred inside routine")


def FIRsepsym2d(image, hrow, hcol):
    """sepfir2d(input, hrow, hcol) -> output

    Description:

    Convolve the rank-2 input array with the separable filter defined by the
    rank-1 arrays hrow, and hcol. Mirror symmetric boundary conditions are
    assumed.  This function can be used to find an image given its B-spline
    representation.
    """
    cdef int thetype, M, N, ret
    cdef npy_intp outstrides[2], instrides[2]
    cdef ndarray a_image, a_hrow, a_hcol

    thetype = PyArray_ObjectType(image, NPY_FLOAT)
    thetype = min(thetype, NPY_CDOUBLE)
    a_image = PyArray_FROMANY(image, thetype, 2, 2, NPY_CONTIGUOUS)
    a_hrow = PyArray_FROMANY(hrow, thetype, 1, 1, NPY_CONTIGUOUS)
    a_hcol = PyArray_FROMANY(hcol, thetype, 1, 1, NPY_CONTIGUOUS)

    out = <PyArrayObject *> PyArray_SimpleNew(2, PyArray_DIMS(a_image), thetype)
    M = PyArray_DIMS(a_image)[0]
    N = PyArray_DIMS(a_image)[1]

    convert_strides(PyArray_STRIDES(a_image), instrides,
                    PyArray_DESCR(a_image).elsize, 2)
    outstrides[0] = N
    outstrides[1] = 1

    if thetype == NPY_FLOAT:
        ret = S_separable_2Dconvolve_mirror(
            <float *> PyArray_DATA(a_image),
            <float *> PyArray_DATA(out), M, N,
            <float *> PyArray_DATA(a_hrow),
            <float *> PyArray_DATA(a_hcol),
            PyArray_DIMS(a_hrow)[0], PyArray_DIMS(a_hcol)[0],
            instrides, outstrides)

    elif thetype == NPY_DOUBLE:
        ret = D_separable_2Dconvolve_mirror(
            <double *> PyArray_DATA(a_image),
            <double *> PyArray_DATA(out), M, N,
            <double *> PyArray_DATA(a_hrow),
            <double *> PyArray_DATA(a_hcol),
            PyArray_DIMS(a_hrow)[0],PyArray_DIMS(a_hcol)[0],
            instrides, outstrides)

    else:
        raise Exception("Incorrect type.")

    if ret < 0:
        raise Exception("Problem occurred inside routine.")


def IIRsymorder1(sig, c0, z1, precision=-1.0):
    """symiirorder1(input, c0, z1 {, precision}) -> output

    Description:

    Implement a smoothing IIR filter with mirror-symmetric boundary conditions
    using a cascade of first-order sections.  The second section uses a
    reversed sequence.  This implements a system with the following
    transfer function and mirror-symmetric boundary conditions.

                           c0
           H(z) = ---------------------
                   (1-z1/z) (1 - z1 z)

    The resulting signal will have mirror symmetric boundary conditions as well.

    Inputs:

    input -- the input signal.
    c0, z1 -- parameters in the transfer function.
    precision -- specifies the precision for calculating initial conditions
                 of the recursive filter based on mirror-symmetric input.

    Output:

    output -- filtered signal.
    """
    cdef Py_complex c0, z1
    cdef int thetype, N, ret
    cdef npy_intp outstrides, instrides
    cdef float rc0, rz1
    cdef ndarray a_sig

    thetype = PyArray_ObjectType(sig, NPY_FLOAT)
    thetype = min(thetype, NPY_CDOUBLE)
    a_sig = PyArray_FROMANY(sig, thetype, 1, 1, NPY_CONTIGUOUS)

    out = <PyArrayObject *> PyArray_SimpleNew(1, PyArray_DIMS(a_sig), thetype)
    N = PyArray_DIMS(a_sig)[0]

    convert_strides(PyArray_STRIDES(a_sig), &instrides,
                    PyArray_DESCR(a_sig).elsize, 1)
    outstrides = 1

    if thetype == NPY_FLOAT:
        rc0 = c0.real
        rz1 = z1.real
        if not (0.0 <= precision < 1.0):
            precision = 1e-6
        ret = S_IIR_forback1(rc0, rz1,
                             <float *> PyArray_DATA(a_sig),
                             <float *> PyArray_DATA(out), N,
                             instrides, outstrides, <float> precision)

    elif thetype == NPY_DOUBLE:
        rc0 = c0.real
        rz1 = z1.real
        if not (0.0 <= precision < 1.0):
            precision = 1e-11
        ret = D_IIR_forback1(rc0, rz1,
                             <double *> PyArray_DATA(a_sig),
                             <double *> PyArray_DATA(out), N,
                             instrides, outstrides, precision)

    else:
        raise Exception("Incorrect type.")

    if ret == -1:
        raise Exception("Could not allocate enough memory.")
    if ret == -2:
        raise Exception("|z1| must be less than 1.0")
    if ret == -3:
        raise Exception("Sum to find symmetric boundary conditions did not "
                        "converge.")

    return PyArray_Return(out)


def IIRsymorder2(sig, r, omega, precision=-1.0):
    """symiirorder2(input, r, omega {, precision}) -> output

    Description:

    Implement a smoothing IIR filter with mirror-symmetric boundary conditions
    using a cascade of second-order sections.  The second section uses a
    reversed sequence.  This implements the following transfer function:

                                        cs^2
               H(z) = ---------------------------------------
                      (1 - a2/z - a3/z^2) (1 - a2 z - a3 z^2 )

    where a2 = (2 r cos omega)
          a3 = - r^2
          cs = 1 - 2 r cos omega + r^2

    Inputs:

    input -- the input signal.
    r, omega -- parameters in the transfer function.
    precision -- specifies the precision for calculating initial conditions
                 of the recursive filter based on mirror-symmetric input.

    Output:

    output -- filtered signal.
    """
    cdef int thetype, N, ret
    cdef npy_intp outstrides, instrides
    cdef ndarray a_sig

    thetype = PyArray_ObjectType(sig, NPY_FLOAT)
    thetype = min(thetype, NPY_DOUBLE)
    a_sig = PyArray_FROMANY(sig, thetype, 1, 1, NPY_CONTIGUOUS)

    out = <PyArrayObject *> PyArray_SimpleNew(1, PyArray_DIMS(a_sig),thetype)
    N = PyArray_DIMS(a_sig)[0]

    convert_strides(PyArray_STRIDES(a_sig), &instrides,
                    PyArray_DESCR(a_sig).elsize, 1)
    outstrides = 1

    if thetype == NPY_FLOAT:
        if not (0.0 <= precision < 1.0):
            precision = 1e-6
        ret = S_IIR_forback2(r, omega, <float *> PyArray_DATA(a_sig),
                             <float *> PyArray_DATA(out), N,
                             instrides, outstrides, precision)

    elif thetype == NPY_DOUBLE:
        if not (0.0 <= precision < 1.0):
            precision = 1e-11
        ret = D_IIR_forback2(r, omega, <double *> PyArray_DATA(a_sig),
                             <double *> PyArray_DATA(out), N,
                             instrides, outstrides, precision)

    else:
        raise Exception("Incorrect type.")

    if ret < 0:
        raise Exception("Problem occurred inside routine.")

    return PyArray_Return(out)
