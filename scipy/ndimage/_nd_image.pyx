# Copyright (C) 2003-2005 Peter J. Verveer
# (ported to Cython by Dag Sverre Seljebotn)
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above
#    copyright notice, this list of conditions and the following
#    disclaimer in the documentation and/or other materials provided
#    with the distribution.
#
# 3. The name of the author may not be used to endorse or promote
#    products derived from this software without specific prior
#    written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
# OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
# DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
# GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
# WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#

import numpy as np

DEF DOTNET = False

cdef extern from "stdlib.h":
    void *malloc(int size)
    void free(void *ptr)
 
cdef extern from "npy_defs.h":
    ctypedef Py_ssize_t npy_intp
    ctypedef struct NpyArray:
        pass

    enum:
        NPY_NOTSWAPPED
        NPY_ALIGNED
        NPY_CONTIGUOUS
        NPY_WRITEABLE
        NPY_ENSURECOPY
        NPY_CARRAY
        NPY_UPDATEIFCOPY

    enum:
        NPY_INTP
        NPY_DOUBLE

        
    bint Npy_IsWriteable(NpyArray * a)
    int NpyArray_FLAGS(NpyArray * a)
    int NpyArray_NDIM(NpyArray * a)
    npy_intp* NpyArray_DIMS(NpyArray * a)
    bint NpyArray_ISCARRAY(NpyArray * a)
    bint NpyArray_ISBYTESWAPPED(NpyArray * a)
    bint NpyArray_ISALIGNED(NpyArray * a)
    bint NpyArray_ISCONTIGUOUS(NpyArray * a)
    bint NpyArray_ISWRITEABLE(NpyArray * a)
    int NpyArray_TYPE(NpyArray * a)
    npy_intp NpyArray_SIZE(NpyArray * a)
    char *NpyArray_DATA(NpyArray * a)
    
cdef extern from "npy_cython_macros.h":
    void NpyArray_SETBASE(NpyArray * obj, object value)
    void NpyArray_SETFLAGS(NpyArray * obj, int flags)
    ctypedef npy_intp ni_size_t

IF not DOTNET:
    # TODO, DO NOT import numpy.pxd for now, instead define parts we need below
    from cpython cimport (Py_INCREF, Py_DECREF, PyObject, PyErr_NoMemory)#, PyCallbable_Check)
    #, PyCapsule_GetDesc, PyCallbable_Check)

    cdef extern from "Python.h":
        bint PyCallable_Check(object o)

    #cdef extern from "numpy/npy_3kcompat.h":
    #    void *PyCapsule_AsVoidPtr(object obj)
    #    bint PyCapsule_Check(object obj)
                          
    cdef extern from "numpy/ndarrayobject.h":
                    
        ctypedef class numpy.ndarray [object PyArrayObject]:
            pass

        ctypedef class numpy.dtype [object PyArray_Descr]:
            pass

        ctypedef struct PyArrayObject:
            pass
        
        ctypedef struct PyArray_Descr:
            pass

        ctypedef struct PyTypeObject:
            pass

        PyTypeObject PyArray_Type

        # Note: Steals reference to newtype
        ndarray PyArray_CheckFromAny(object op, dtype newtype, int min_depth, int max_depth,
                                     int flags, PyObject * context)
        ndarray PyArray_Empty(int nd, npy_intp * dims, dtype descr, int fortran)
        dtype PyArray_DescrFromType(int typenum)
        dtype PyArray_DESCR(ndarray a)
        NpyArray * PyArray_ARRAY(ndarray m)
        
        ndarray PyArray_New(PyTypeObject *, int, npy_intp *, int, npy_intp *, char *, int, int, PyObject*)

        void import_array()


    cdef void* NULL_dtype = NULL

    cdef inline void incref(object o):
        Py_INCREF(o)

    cdef inline void decref(object o):
        Py_DECREF(o)

    cdef inline dtype DescrFromType(int typenum):
        return PyArray_DescrFromType(typenum)

    cdef inline ndarray CheckFromAny(object op, dtype newtype, int min_depth, int max_depth,
                                     int flags, object context):
        cdef PyArray_Descr* pdtype
        cdef PyObject* pcontext
        if newtype is None:
            decref(newtype)
            pdtype = NULL
        else:
            pdtype = <PyArray_Descr*>newtype
        if context is None:
            pcontext = NULL
        else:
            pcontext = <PyObject*>context
        return PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, pcontext)

    cdef inline ndarray array_New(int ndim, npy_intp *shape, int typenum, npy_intp *strides,
                                  char *data, int itemsize, int flags):
        return PyArray_New(&PyArray_Type, ndim, shape, typenum, strides, data,
                           itemsize, flags, NULL)

    cdef inline NpyArray* ARRAY(ndarray a):
        return PyArray_ARRAY(a)

    cdef inline ndarray Empty(int nd, npy_intp * dims, dtype descr, int fortran):
        return PyArray_Empty(nd, dims, descr, fortran)

    cdef inline dtype DESCR(ndarray a):
        return PyArray_DESCR(a)

    cdef inline bint is_callable(obj):
        return PyCallable_Check(obj)

    cdef inline int raise_no_memory() except 0:
        PyErr_NoMemory()
        return 1


##     cdef inline bint is_capsule(obj):
##         return PyCapsule_Check(obj)

##     cdef inline void *capsule_asvoidptr(obj):
##         return PyCapsule_AsVoidPtr(obj)

##     cdef inline void *capsule_getdesc(obj):
##         return PyCapsule_GetDesc(obj)


import_array()

#
# NI header files
#
cdef extern from "src/ni_support.h":
    ctypedef enum NI_ExtendMode:
        NI_EXTEND_FIRST = 0
        NI_EXTEND_NEAREST = 0
        NI_EXTEND_WRAP = 1
        NI_EXTEND_REFLECT = 2
        NI_EXTEND_MIRROR = 3
        NI_EXTEND_CONSTANT = 4
        NI_EXTEND_LAST = NI_EXTEND_CONSTANT
        NI_EXTEND_DEFAULT = NI_EXTEND_MIRROR

    ctypedef struct NI_CoordinateList:
        int block_size, rank
        void *blocks

    NI_CoordinateList* NI_InitCoordinateList(int, int) except NULL
    int NI_CoordinateListStealBlocks(NI_CoordinateList*, NI_CoordinateList*) except 1
    void NI_FreeCoordinateList(NI_CoordinateList*)
    
cdef extern from "src/ni_filters.h":
    int NI_Correlate1D(NpyArray*, NpyArray*, int, NpyArray*,
                       NI_ExtendMode, double, npy_intp) except 0
    int NI_Correlate(NpyArray*, NpyArray*, NpyArray*,
                     NI_ExtendMode, double, npy_intp*) except 0
    int NI_UniformFilter1D(NpyArray*, npy_intp, int, NpyArray*,
                           NI_ExtendMode, double, npy_intp) except 0
    int NI_MinOrMaxFilter1D(NpyArray*, npy_intp, int, NpyArray*,
                            NI_ExtendMode, double, npy_intp, int) except 0
    int NI_MinOrMaxFilter(NpyArray*, NpyArray*, NpyArray*,
                          NpyArray*, NI_ExtendMode, double, npy_intp*,
                          int) except 0
    int NI_RankFilter(NpyArray*, int, NpyArray*, NpyArray*,
                      NI_ExtendMode, double, npy_intp*) except 0
    int NI_GenericFilter1D(NpyArray*,
                           int (*)(double*, npy_intp, double*, npy_intp, void*) except 0,
                           void*, npy_intp, int,
                           NpyArray*, NI_ExtendMode, double, npy_intp) except 0
    int NI_GenericFilter(NpyArray*,
                         int (*)(double*, npy_intp, double*, void*) except 0,
                         void*, NpyArray*, NpyArray*,
                         NI_ExtendMode, double, npy_intp*)

cdef extern from "src/ni_fourier.h":
    int NI_FourierFilter(NpyArray*, NpyArray*, npy_intp, int,
                         NpyArray*, int) except 0
    int NI_FourierShift(NpyArray*, NpyArray*, npy_intp, int,
                        NpyArray*) except 0
    
cdef extern from "src/ni_interpolation.h":
    int NI_SplineFilter1D(NpyArray*, int, int, NpyArray*) except 0
    int NI_GeometricTransform(NpyArray*,
                              int (*)(npy_intp*, double*, int, int, void*) except 0,
                              void*, NpyArray*, NpyArray*,
                              NpyArray*, NpyArray*, int, int,
                              double) except 0
    int NI_ZoomShift(NpyArray*, NpyArray*, NpyArray*,
                     NpyArray*, int, int, double) except 0


cdef extern from "src/ni_measure.h":
    int NI_Label(NpyArray*, NpyArray*, npy_intp*, NpyArray*) except 0
    int NI_FindObjects(NpyArray*, npy_intp, npy_intp*) except 0
    int NI_CenterOfMass(NpyArray*, NpyArray*, npy_intp, npy_intp,
                        npy_intp*, npy_intp, double*) except 0
    int NI_Histogram(NpyArray*, NpyArray*, npy_intp, npy_intp,
                     npy_intp*, npy_intp, NpyArray**, double, double,
                     npy_intp) except 0
    int NI_Statistics(NpyArray*, NpyArray*, npy_intp, npy_intp,
                      npy_intp*, npy_intp, double*, npy_intp*, double*,
                      double*, double*, npy_intp*, npy_intp*) except 0
    int NI_WatershedIFT(NpyArray*, NpyArray*, NpyArray*, 
                        NpyArray*) except 0

cdef extern from "src/ni_morphology.h":
    int NI_BinaryErosion(NpyArray*, NpyArray*, NpyArray*, 
                         NpyArray*, int, npy_intp*, int, int, int*, NI_CoordinateList**) except 0
    int NI_BinaryErosion2(NpyArray*, NpyArray*, NpyArray*,
                          int, npy_intp*, int, NI_CoordinateList**) except 0
    int NI_DistanceTransformBruteForce(NpyArray*, int, NpyArray*,
                                       NpyArray*, NpyArray*) except 0
    int NI_DistanceTransformOnePass(NpyArray*, NpyArray *, NpyArray*) except 0
    int NI_EuclideanFeatureTransform(NpyArray*, NpyArray*, NpyArray*) except 0
    
    
#
# Utility code for input argument/array handling
#

cdef bint satisfies(NpyArray *a, int requirements, int typenum):
    cdef bint type_ok
    type_ok = (typenum == -1) or (NpyArray_TYPE(a) == typenum)
    if NpyArray_ISCARRAY(a):
        return type_ok
    if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):
        return False
    if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):
        return False
    if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):
        return False
    if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):
        return False
    if requirements & NPY_ENSURECOPY:
        return False
    return type_ok

# typenum is either a NumPy type number, *or* -1 for "any type"
cdef ndarray NA_InputArray(object a, int typenum, int requires):
    cdef dtype descr
    if typenum == -1:
        descr = None
    else:
        descr = DescrFromType(typenum)
    incref(descr) # CheckFromAny steals reference
    return CheckFromAny(a, descr, 0, 0, requires, None)

cdef ndarray NA_IoArray(object a, int typenum, int requires):
    cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)
    if not NpyArray_ISWRITEABLE(ARRAY(shadow)):
        raise ValueError("NA_IoArray: I/O array must be writable array")
    return shadow

cdef ndarray NA_OutputArray(object a_obj, int typenum, int requires):
    cdef dtype descr
    cdef NpyArray* a
    cdef NpyArray* ret
    cdef ndarray ret_obj

    if not isinstance(a_obj, ndarray):
        raise TypeError('NA_OutputArray: ndarray instance expected')

    a = ARRAY(a_obj)
    if not NpyArray_ISWRITEABLE(a):
        raise TypeError('NA_OutputArray: only writeable arrays work for output.')
    if satisfies(a, requires, typenum):
        return a_obj
    if typenum == -1:
        descr = DESCR(a_obj)
    else:
        descr = DescrFromType(typenum)
    incref(descr) # Empty steals reference
    ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
    ret = ARRAY(ret_obj)
    NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
    incref(a_obj)
    NpyArray_SETBASE(ret, a_obj)
    return ret_obj

cdef ndarray NI_ObjectToInputArray(object a):
    return NA_InputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)

cdef ndarray NI_ObjectToOutputArray(object a):
    return NA_OutputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)

cdef ndarray NI_ObjectToIoArray(object a):
    return NA_IoArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)


#
# Wrappers
#
def correlate1d(input, weights, int axis, output, NI_ExtendMode mode, double cval,
                ni_size_t origin):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray weights_ = NI_ObjectToInputArray(weights)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    NI_Correlate1D(ARRAY(input_), ARRAY(weights_), axis,
                   ARRAY(output_), <NI_ExtendMode>mode, cval, origin)

def correlate(input, weights, output, int mode, double cval, origin):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray weights_ = NI_ObjectToInputArray(weights)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
    if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):
        raise ValueError('origin.shape[0] != input.ndim')
    NI_Correlate(ARRAY(input_), ARRAY(weights_),
                 ARRAY(output_), <NI_ExtendMode>mode, cval,
                 <npy_intp*>NpyArray_DATA(ARRAY(origin_)))


def uniform_filter1d(object input, ni_size_t filter_size, int axis,
                     object output, int mode, double cval,
                     ni_size_t origin):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    NI_UniformFilter1D(ARRAY(input_), filter_size, axis, 
                       ARRAY(output_), <NI_ExtendMode>mode, cval, origin)

def min_or_max_filter1d(object input, ni_size_t filter_size, int axis,
                        object output, int mode, double cval,
                        ni_size_t origin, int minimum):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    NI_MinOrMaxFilter1D(ARRAY(input_), filter_size, axis, 
                        ARRAY(output_), <NI_ExtendMode>mode, cval,
                        origin, minimum)

def min_or_max_filter(object input, object footprint, object structure,
                      object output, int mode, double cval, object origin,
                      int minimum):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
    cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    cdef ndarray[npy_intp, mode='c'] origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
    NI_MinOrMaxFilter(ARRAY(input_),
                      ARRAY(footprint_),
                      NULL if structure_ is None else ARRAY(structure_),
                      ARRAY(output_),
                      <NI_ExtendMode>mode,
                      cval,
                      <npy_intp*>NpyArray_DATA(ARRAY(origin_)),
                      minimum)

def rank_filter(object input, int rank, object footprint,
                object output, int mode, double cval, object origin):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
    NI_RankFilter(ARRAY(input_),
                  rank,
                  ARRAY(footprint_),
                  ARRAY(output_),
                  <NI_ExtendMode>mode,
                  cval,
                  <npy_intp*>NpyArray_DATA(ARRAY(origin_)))
    

#
# Callback wrappers
#
cdef class CallbackInfo:
    cdef object function, args, kwargs
    def __init__(self, function, args, kwargs):
        if not is_callable(function):
            raise RuntimeError("function parameter is not callable")
        if not isinstance(args, tuple):
            raise RuntimeError("extra_arguments must be a tuple")
        if not isinstance(kwargs, dict):
            raise RuntimeError("extra_keywords must be a dictionary")
        self.function = function
        self.args = args
        self.kwargs = kwargs

cdef int cbwrapper_filter_1d(double *iline, npy_intp ilen, double *oline, npy_intp olen,
                             void* ctx) except 0:
    cdef CallbackInfo info = <CallbackInfo>ctx
    iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)
    oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
    info.function(iarr, oarr, *info.args, **info.kwargs)
    return 1

def generic_filter1d(object input, object callback, ni_size_t filter_size,
                     int axis, object output, int mode, double cval,
                     ni_size_t origin, object extra_arguments, object extra_keywords):
    cdef CallbackInfo info
    cdef void *ctx
    cdef int (*funcptr)(double*, npy_intp, double*, npy_intp, void*) except 0
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
##     if is_capsule(callback):
##         funcptr = capsule_asvoidptr(callback)
##         ctx = capsule_getdesc(callback)
    if True:
        funcptr = &cbwrapper_filter_1d
        info = CallbackInfo(callback, extra_arguments, extra_keywords)
        ctx = <void*>info
    NI_GenericFilter1D(ARRAY(input_), funcptr, ctx, filter_size, axis,
                       ARRAY(output_), <NI_ExtendMode>mode, cval, origin)

cdef int cbwrapper_filter(double *buffer, npy_intp filter_size,
                          double *output, void *ctx) except 0:
    cdef CallbackInfo info = <CallbackInfo>ctx
    pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],
                      <char*>buffer, 0, NPY_CARRAY)
    rv = info.function(pybuf, *info.args, **info.kwargs)
    output[0] = rv
    return 1

def generic_filter(object input, object callback, object footprint, object output,
                   int mode, double cval, object origin, object extra_arguments,
                   object extra_keywords):
    cdef int (*funcptr)(double*, npy_intp, double*, void*) except 0
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
##    if is_capsule(callback):
##        funcptr = capsule_asvoidptr(callback)
##        ctx = capsule_getdesc(callback)
    if True:
        funcptr = &cbwrapper_filter
        info = CallbackInfo(callback, extra_arguments, extra_keywords)
        ctx = <void*>info
    NI_GenericFilter(ARRAY(input_), funcptr, ctx, ARRAY(footprint_),
                     ARRAY(output_), <NI_ExtendMode>mode, cval,
                     <npy_intp*>NpyArray_DATA(ARRAY(origin_)))

def fourier_filter(object input, object parameters, ni_size_t n, int axis,
                   object output, int filter_type):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray parameters_ = NI_ObjectToInputArray(parameters)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    NI_FourierFilter(ARRAY(input_), ARRAY(parameters_), n, axis,
                     ARRAY(output_), filter_type)
    
def fourier_shift(object input, object shifts, ni_size_t n, int axis,
                  object output):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray shifts_ = NI_ObjectToInputArray(shifts)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    NI_FourierShift(ARRAY(input_), ARRAY(shifts_), n, axis,
                    ARRAY(output_))

def spline_filter1d(object input, int order, int axis, object output):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))

cdef int cbwrapper_map(npy_intp *ocoor, double *icoor,
                       int orank, int irank, void *ctx) except 0:
    cdef CallbackInfo info = <CallbackInfo>ctx
    cdef npy_intp i
    cdef tuple ret
    coors = tuple([ocoor[i] for i in range(orank)])
    ret = info.function(coors, *info.args, **info.kwargs)
    for i in range(irank):
        icoor[i] = ret[i]
    return 1

def geometric_transform(object input, object map_callback, object coordinates,
                        object matrix, object shift, object output,
                        int order, int mode, double cval, object extra_arguments,
                        object extra_keywords):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray coordinates_ = None if coordinates is None else NI_ObjectToInputArray(coordinates)
    cdef ndarray matrix_ = None if matrix is None else NI_ObjectToInputArray(matrix)
    cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    cdef int (*funcptr)(npy_intp*, double*, int, int, void*) except 0
    cdef CallbackInfo info
    cdef void *ctx
    
    if map_callback is not None:
        # TODO: Capsule support
        if True:
            funcptr = &cbwrapper_map
            info = CallbackInfo(map_callback, extra_arguments, extra_keywords)
            ctx = <void*>info

    else:
        funcptr = ctx = NULL

    NI_GeometricTransform(ARRAY(input_), funcptr, ctx,
                          NULL if matrix_ is None else ARRAY(matrix_),
                          NULL if shift_ is None else ARRAY(shift_),
                          NULL if coordinates_ is None else ARRAY(coordinates_),
                          ARRAY(output_), order, <NI_ExtendMode>mode, cval)
    

def zoom_shift(object input, object zoom, object shift, object output,
               int order, int mode, double cval):    
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray zoom_ = None if zoom is None else NI_ObjectToInputArray(zoom)
    cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    NI_ZoomShift(ARRAY(input_),
                 NULL if zoom_ is None else ARRAY(zoom_),
                 NULL if shift_ is None else ARRAY(shift_),
                 ARRAY(output_), order, <NI_ExtendMode>mode, cval)

def label(object input, object strct, object output):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray strct_ = NI_ObjectToInputArray(strct)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    cdef npy_intp max_label
    NI_Label(ARRAY(input_), ARRAY(strct_), &max_label, ARRAY(output_))
    return max_label

def find_objects(object input, npy_intp max_label):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef npy_intp *regions = NULL
    cdef int ndim = NpyArray_NDIM(ARRAY(input_))
    cdef list result
    cdef npy_intp i, idx
    if max_label < 0:
        max_label = 0
    if max_label > 0:
        if ndim > 0:
            regions = <npy_intp*>malloc(2 * max_label * ndim * sizeof(npy_intp))
        else:
            regions = <npy_intp*>malloc(max_label * sizeof(npy_intp))
        if regions == NULL:
            raise_no_memory()

    try:
        NI_FindObjects(ARRAY(input_), max_label, regions)
        result = [None] * max_label
        for ii in range(max_label):
            idx = 2 * ndim * ii if ndim > 0 else ii
            if regions[idx] >= 0:
                tup = [None] * ndim
                for jj in range(ndim):
                    slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
                    tup[jj] = slc
                result[ii] = tuple(tup)
            else:
                result[ii] = None
    finally:
        free(regions)

    return result

def watershed_ift(object input, object markers, object strct, object output):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray markers_ = NI_ObjectToInputArray(markers)
    cdef ndarray strct_ = NI_ObjectToInputArray(strct)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    NI_WatershedIFT(ARRAY(input_), ARRAY(markers_), ARRAY(strct_), ARRAY(output_))

def distance_transform_bf(object input, int metric, object sampling, object output,
                          object features):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
    cdef ndarray output_ = None if output is None else NI_ObjectToOutputArray(output)
    cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
    NI_DistanceTransformBruteForce(ARRAY(input_), metric,
                                   NULL if sampling_ is None else ARRAY(sampling_),
                                   NULL if output_ is None else ARRAY(output_),
                                   NULL if features_ is None else ARRAY(features_))

def distance_transform_op(object strct, object distances, object features):
    cdef ndarray strct_ = NI_ObjectToInputArray(strct)
    cdef ndarray distances_ = NI_ObjectToIoArray(distances)
    cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
    NI_DistanceTransformOnePass(ARRAY(strct_), ARRAY(distances_),
                                NULL if features_ is None else ARRAY(features_))

def euclidean_feature_transform(object input, object sampling, object features):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
    cdef ndarray features_ = NI_ObjectToOutputArray(features)
    NI_EuclideanFeatureTransform(ARRAY(input_),
                                 NULL if sampling_ is None else ARRAY(sampling_),
                                 ARRAY(features_))
    
cdef class CoordinateListWrapper:
    cdef NI_CoordinateList *ptr
    def __cinit__(self):
        self.ptr = NULL
    def __dealloc__(self):
        NI_FreeCoordinateList(self.ptr)

def binary_erosion(object input, object strct, object mask, object output,
                   int border_value, object origins, int invert,
                   int center_is_true, int return_coordinates):
    cdef ndarray input_ = NI_ObjectToInputArray(input)
    cdef ndarray strct_ = NI_ObjectToInputArray(strct)
    cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
    cdef ndarray output_ = NI_ObjectToOutputArray(output)
    cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
    cdef int changed
    cdef NI_CoordinateList *coordinate_list = NULL
    NI_BinaryErosion(ARRAY(input_),
                     ARRAY(strct_),
                     NULL if mask_ is None else ARRAY(mask_),
                     ARRAY(output_),
                     border_value,
                     <npy_intp*>NpyArray_DATA(ARRAY(origins_)),
                     invert,
                     center_is_true,
                     &changed,
                     &coordinate_list if return_coordinates else NULL)
    if return_coordinates:
        colist_wrapper = CoordinateListWrapper()
        colist_wrapper.ptr = coordinate_list
        return changed, colist_wrapper
    else:
        return changed

def binary_erosion2(object array, object strct, object mask, int niter,
                    object origins, int invert,
                    CoordinateListWrapper colist_wrapper):
    cdef ndarray array_ = NI_ObjectToIoArray(array)
    cdef ndarray strct_ = NI_ObjectToInputArray(strct)
    cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
    cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
    NI_BinaryErosion2(ARRAY(array_),
                      ARRAY(strct_),
                      NULL if mask_ is None else ARRAY(mask_),
                      niter,
                      <npy_intp*>NpyArray_DATA(ARRAY(origins_)),
                      invert,
                      &colist_wrapper.ptr)


# Notes:
# capsule not implemented yet (npy3_compat.h versions)
