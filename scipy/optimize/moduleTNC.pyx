import sys

from libc.stdlib cimport malloc, free
from pytools cimport PYOBJPTR, INITASSIGNOBJECT, READOBJECT, DEINITOBJECT

cdef extern from "tnc.h":
    cdef enum:
        TNC_MINRC
        TNC_ENOMEM
        TNC_EINVAL
        TNC_INFEASIBLE
        TNC_LOCALMINIMUM
        TNC_FCONVERGED
        TNC_XCONVERGED
        TNC_MAXFUN
        TNC_LSFAIL
        TNC_CONSTANT
        TNC_NOPROGRESS
        TNC_USERABORT

    ctypedef int tnc_function(double *x, double *f, double *g, void *state)

    int tnc(int n, double *x, double *f, double *g, tnc_function *function, void *state, double *low, double *up, double *scale, double *offset, int messages, int maxCGit, int maxnfeval, double eta, double stepmx, double accuracy, double fmin, double ftol, double xtol, double pgtol, double rescale, int *nfeval)

cdef struct pytnc_state:
    PYOBJPTR py_function
    int n
    int failed
    # Note: saved_exn is valid (and must be DEINIT'ed) iff failed is true
    PYOBJPTR saved_exn

cdef double *double_array(py_list, int *size):
    cdef double *x
    cdef int i

    if not isinstance(py_list, list):
        size[0] = -1
        return NULL

    size[0] = len(py_list)
    if size[0] <= 0: return NULL

    x = <double *>malloc(size[0] * sizeof(double))
    if x == NULL:
        return NULL

    try:
        for i in range(size[0]):
            x[i] = py_list[i]
    except:
        free(x)
        return NULL

    return x

cdef list_into_double_array(list py_list, double *x, int size):
    if size != len(py_list):
        raise ValueError

    cdef int i
    for i in range(size):
        x[i] = py_list[i]

cdef double_array_as_list(int size, double *x):
    # XXX Less efficient than original C version that used PyList_New
    # (but more portable)
    py_list = [None] * size

    cdef int i

    for i in range(size):
        py_list[i] = x[i]

cdef int function(double *x, double *f, double *g, void *state):
    cdef pytnc_state *py_state = <pytnc_state*>state

    try:
        py_list = double_array_as_list(py_state.n, x)

        py_function = READOBJECT(&py_state.py_function)

        result = py_function(py_list)

        if result is None:
            return 1

        f[0], py_grad = result

        list_into_double_array(py_grad, g, py_state.n)

        return 0
    except:
        assert not py_state.failed
        INITASSIGNOBJECT(&py_state.saved_exn, sys.exc_info())
        py_state.failed = 1
        return 1

def minimize(py_function, list py_x0, list py_low, list py_up, list py_scale, list py_offset,
             int msg, int maxCGit, int maxnfeval,
             double eta, double stepmx, double accuracy,
             double fmin, double ftol, double xtol, double pgtol,
             double rescale):
    cdef int n, n1, n2, n3, n4
    cdef int nfeval

    if not callable(py_function):
        raise TypeError, "tnc: function must be callable"

    cdef double *scale = double_array(py_scale, &n3)
    if n3 != 0 and scale == NULL:
        raise ValueError, "tnc: invalid scaling parameters."

    cdef double *offset = double_array(py_offset, &n4)
    if n4 != 0 and offset == NULL:
        if scale: free(scale)
        raise ValueError, "tnc: invalid offset parameters."
        
    cdef double *x = double_array(py_x0, &n)
    if n != 0 and x == NULL:
        if scale: free(scale)
        if offset: free(offset)
        raise ValueError, "tnc: invalid initial vector."

    cdef double *low = double_array(py_low, &n1)
    cdef double *up = double_array(py_up, &n2)
    if (n1 != 0 and low == NULL) or (n2 != 0 and up == NULL):
        if scale: free(scale)
        if x: free(x)
        if offset: free(offset)
        if low: free(low)
        if up: free(up)
        raise ValueError, "tnc: invalid bounds."

    if n1 != n2 or n != n1 or (scale != NULL and n != n3) or (offset != NULL and n != n4):
        if scale: free(scale)
        if x: free(x)
        if offset: free(offset)
        if low: free(low)
        if up: free(up)
        raise ValueError, "tnc: vector sizes must be equal."

    cdef pytnc_state py_state
    INITASSIGNOBJECT(&py_state.py_function, py_function)
    py_state.n = n
    py_state.failed = 0

    cdef double f
    
    cdef int rc = tnc(n, x, &f, NULL, function, &py_state, low, up, scale, offset, msg, maxCGit, maxnfeval, eta, stepmx, accuracy, fmin, ftol, xtol, pgtol, rescale, &nfeval)

    DEINITOBJECT(&py_state.py_function)

    if scale: free(scale)
    if offset: free(offset)
    if low: free(low)
    if up: free(up)

    if py_state.failed:
        if x: free(x)
        saved_exn = READOBJECT(&py_state.saved_exn)
        DEINITOBJECT(&py_state.saved_exn)
        raise saved_exn[0], saved_exn[1], saved_exn[2]

    if rc == TNC_ENOMEM:
        if x: free(x)
        raise MemoryError, "tnc: memory allocation failed."

    try:
        py_list = double_array_as_list(n, x)
    finally:
        if x: free(x)

    return (rc, nfeval, py_list)
