import sys

from pytools cimport PYOBJPTR, INITOBJECT, INITASSIGNOBJECT, READOBJECT, DEINITOBJECT
from pytools cimport cb_jmp_buf, cb_longjmp, cb_setjmp, cb_reraise

cdef extern from "Zeros/zeros.h":
    ctypedef struct default_parameters:
        int funcalls
        int iterations
        int error_num

    cdef enum:
        SIGNERR
        CONVERR

    ctypedef double (*callback_type)(double, void*)
    ctypedef double (*solver_type)(callback_type, double, double, double, double, int, default_parameters *)

    double bisect(callback_type f, double xa, double xb, double xtol, double rtol, int iter, default_parameters *params)
    double ridder(callback_type f, double xa, double xb, double xtol, double rtol, int iter, default_parameters *params)
    double brenth(callback_type f, double xa, double xb, double xtol, double rtol, int iter, default_parameters *params)
    double brentq(callback_type f, double xa, double xb, double xtol, double rtol, int iter, default_parameters *params)

def __compute_relative_precision():
    cdef double tol = 1

    while tol + 1 != 1:
        tol /= 2

    return 2*tol

cdef double scipy_zeros_rtol = __compute_relative_precision()

cdef struct scipy_zeros_parameters:
     # First 3 fields must be here, must be in this order
     int funcalls
     int iterations
     int error_num
     PYOBJPTR function
     PYOBJPTR args
     cb_jmp_buf jmp_buf
     PYOBJPTR exn_info     

cdef double scipy_zeros_functions_func(double x, void *params):
    cdef double result
    if scipy_zeros_cb_core(&result, x, params) == 0:
        return result
    else:
        cb_longjmp((<scipy_zeros_parameters*>params).jmp_buf, 1)

cdef int scipy_zeros_cb_core(double *result, double x, void *vparams):
    cdef scipy_zeros_parameters *params = <scipy_zeros_parameters*>vparams
    try:
        args = READOBJECT(&params.args)
        f = READOBJECT(&params.function)
        retval = f(x, *args)
        result[0] = retval
        return 0
    except:
        exn_info = sys.exn_info()
        cb_reraise(exn_info)
        INITASSIGNOBJECT(&params.exn_info, exn_info)
        return 1    

cdef call_solver(solver_type solver, object f,
                 double a, double b, double xtol, int iter,
                 object xargs, int fulloutput, int disp):
    cdef double zero
    cdef int i, len, flag=0
    cdef scipy_zeros_parameters params

    if xtol < 0:
        raise ValueError, "xtol must be >= 0"

    if iter < 0:
        raise ValueError, "maxiter should be > 0"

    INITASSIGNOBJECT(&params.function, f)
    INITASSIGNOBJECT(&params.args, xargs)
    params.error_num = 0
    try:
        if cb_setjmp(params.jmp_buf) == 0:
            zero = solver(scipy_zeros_functions_func, a, b,
                          xtol, scipy_zeros_rtol, iter,
                          <default_parameters*>&params)
        else:
            exn_info = READOBJECT(&params.exn_info)
            DEINITOBJECT(&params.exn_info)
            raise exn_info[0], exn_info[1], exn_info[2]

        if params.error_num != 0:
            if params.error_num == SIGNERR:
                raise ValueError, "f(a) and f(b) must have different signs"
            if params.error_num == CONVERR:
                raise RuntimeError, "Failed to converge after %d iterations." % params.iterations
            if fulloutput:
                return (zero, params.funcalls, params.iterations, 0)
            else:
                return zero
    finally:
        DEINITOBJECT(&params.function)
        DEINITOBJECT(&params.args)

def _bisect(object f,
            double a, double b, double xtol, int iter,
            object xargs, int fulloutput, int disp=1):
    return call_solver(bisect, f, a, b, xtol, iter, xargs, fulloutput, disp)

def _ridder(object f,
            double a, double b, double xtol, int iter,
            object xargs, int fulloutput, int disp=1):
    return call_solver(ridder, f, a, b, xtol, iter, xargs, fulloutput, disp)

def _brenth(object f,
            double a, double b, double xtol, int iter,
            object xargs, int fulloutput, int disp=1):
    return call_solver(brenth, f, a, b, xtol, iter, xargs, fulloutput, disp)

def _brentq(object f,
            double a, double b, double xtol, int iter,
            object xargs, int fulloutput, int disp=1):
    return call_solver(brentq, f, a, b, xtol, iter, xargs, fulloutput, disp)

