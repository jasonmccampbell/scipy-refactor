
cimport numpy as np
np.import_array()

cdef extern from "stdlib.h":
    void free(void *)

cdef extern from "sigtools.h":
    np.PyArray_CopySwapFunc array_get_copyswap_func(np.NpyArray *arr)

CORR_MODE_VALID = 0
CORR_MODE_SAME  = 1
CORR_MODE_FULL  = 2

def scipy_signal_sigtools_correlateND(np.ndarray ax, np.ndarray ay, np.ndarray aout, int mode):
    cdef np.NpyArrayIterObject *itx, *ity, *itz
    cdef int typenum, st

    typenum = np.PyArray_TYPE(ax)
    typenum = max(np.PyArray_TYPE(ay), typenum)
    typenum = max(np.PyArray_TYPE(aout), typenum)

    if np.PyArray_NDIM(ax) != np.PyArray_NDIM(ay):
        raise ValueError("Arrays must have the same number of dimensions.")

    if np.PyArray_NDIM(ax) == 0:
        raise ValueError("Cannot convolve zero-dimensional arrays.")

    itx = np.PyArray_IterNew(ax)
    ity = np.PyArray_IterNew(ay)
    itz = np.PyArray_IterNew(aout)

    st = _correlate_nd_imp(itx, ity, itz, typenum, mode);
    if st:
        return None

    return np.PyArray_Return(aout)


############################################################
# Implementation of the type-specific correlation 'kernels'
#
cdef int _imp_correlate_nd_ubyte(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef np.npy_ubyte acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_ubyte*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_byte(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef np.npy_byte acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_byte*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_ushort(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef np.npy_ushort acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_ushort*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_short(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef short acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<short*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_uint(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef np.npy_uint acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_uint*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_int(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef int acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<int*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_ulong(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef np.npy_ulong acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_ulong*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_long(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef long acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<long*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_ulonglong(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef np.npy_ulonglong acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_ulonglong*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_longlong(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef np.npy_longlong acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_longlong*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_float(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef float acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<float*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_double(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef double acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<double*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_longdouble(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef np.npy_intp i, j
    cdef np.npy_longdouble acc

    for i in range(curx.size):
        acc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_longdouble*>itz.dataptr)[0] = acc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_cfloat(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef int i, j
    cdef float racc, iacc
    cdef float *ptr1, *ptr2

    for i in range(curx.size):
        racc = 0
        iacc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            ptr1 = <float*>curneighx.dataptr
            ptr2 = <float*>ity.dataptr
            racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
            iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<float*>itz.dataptr)[0] = racc
        (<float*>itz.dataptr)[1] = iacc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_cdouble(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef int i, j
    cdef double racc, iacc
    cdef double *ptr1, *ptr2

    for i in range(curx.size):
        racc = 0
        iacc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            ptr1 = <double*>curneighx.dataptr
            ptr2 = <double*>ity.dataptr
            racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
            iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<double*>itz.dataptr)[0] = racc
        (<double*>itz.dataptr)[1] = iacc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0
cdef int _imp_correlate_nd_clongdouble(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef int i, j
    cdef np.npy_longdouble racc, iacc
    cdef np.npy_longdouble *ptr1, *ptr2

    for i in range(curx.size):
        racc = 0
        iacc = 0
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        for j in range(curneighx.size):
            ptr1 = <np.npy_longdouble*>curneighx.dataptr
            ptr2 = <np.npy_longdouble*>ity.dataptr
            racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
            iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)
        
        np.PyArrayNeighborhoodIter_Next(curx)

        (<np.npy_longdouble*>itz.dataptr)[0] = racc
        (<np.npy_longdouble*>itz.dataptr)[1] = iacc

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    return 0

cdef int _imp_correlate_nd_object(np.NpyArrayNeighborhoodIterObject *curx,
        np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz):
    cdef int i, j
    cdef char *zero
    cdef np.PyArray_CopySwapFunc copyswap = array_get_copyswap_func(curx.ao)

    zero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(curx.ao))

    for i in range(curx.size):
        np.PyArrayNeighborhoodIter_Reset(curneighx)
        copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)

        for j in range(curneighx.size):
            # compute tmp = acc + x * y. Not all objects supporting the
            # number protocol support inplace operations, so we do it the most
            # straightfoward way.
            tmp = <object>itz.dataptr + <object>curneighx.dataptr * <object>ity.dataptr

            <object>itz.dataptr = tmp

            np.PyArrayNeighborhoodIter_Next(curneighx)
            np.PyArray_ITER_NEXT(ity)

        np.PyArrayNeighborhoodIter_Next(curx)

        np.PyArray_ITER_NEXT(itz)
        np.PyArray_ITER_RESET(ity)

    np.PyDataMem_FREE(zero)

    return 0

def _correlate_nd_imp(np.NpyArrayIterObject* itx, np.NpyArrayIterObject *ity,
        np.NpyArrayIterObject *itz, int typenum, int mode):
    cdef np.NpyArrayNeighborhoodIterObject *curneighx, *curx
    cdef np.npy_intp i, nz, nx
    cdef np.npy_intp bounds[np.NPY_MAXDIMS*2]

    # Compute boundaries for the neighborhood iterator curx: curx is used to
    # traverse x directly, such as each point of the output is the
    # innerproduct of y with the neighborhood around curx */
    if mode == CORR_MODE_VALID:
        # Only walk through the input points such as the correponding
        # output will not depend on 0 padding
        for i in range(np.PyArray_NDIM(np.PyIter_ARRAY(itx))):
            bounds[2*i] = np.PyArray_DIMS(np.PyIter_ARRAY(ity))[i] - 1
            bounds[2*i+1] = np.PyArray_DIMS(np.PyIter_ARRAY(itx))[i] - 1
    elif mode == CORR_MODE_SAME:
        # Only walk through the input such as the output will be centered
        # relatively to the output as computed in the full mode
        for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
            nz = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i]
            # Recover 'original' nx, before it was zero-padded */
            nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
            if (nz - nx) % 2 == 0:
                bounds[2*i] = (nz - nx) / 2
            else:
                bounds[2*i] = (nz - nx - 1) / 2
                
            bounds[2*i+1] = bounds[2*i] + nx - 1
    elif mode == CORR_MODE_FULL:
        for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
            bounds[2*i] = 0;
            bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1
    else:
        raise SystemError

    curx = np.PyArray_NeighborhoodIterNew(itx, bounds,
                                np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)
    if (curx == NULL):
        raise SystemError("Could not create curx ?")

    # Compute boundaries for the neighborhood iterator: the neighborhood for x
    #   should have the same dimensions as y
    for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(ity.ao))):
        bounds[2*i] = -np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
        bounds[2*i+1] = 0

    curneighx = np.PyArray_NeighborhoodIterNew(<np.NpyArrayIterObject *>curx,
                        bounds, np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)

    if typenum == np.NPY_OBJECT:
        _imp_correlate_nd_object(curx, curneighx, ity, itz)
    elif typenum == np.NPY_UBYTE:
        _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
    elif typenum == np.NPY_BYTE:
        _imp_correlate_nd_byte(curx, curneighx, ity, itz)
    elif typenum == np.NPY_USHORT:
        _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
    elif typenum == np.NPY_SHORT:
        _imp_correlate_nd_short(curx, curneighx, ity, itz)
    elif typenum == np.NPY_UINT:
        _imp_correlate_nd_uint(curx, curneighx, ity, itz)
    elif typenum == np.NPY_INT:
        _imp_correlate_nd_int(curx, curneighx, ity, itz)
    elif typenum == np.NPY_ULONG:
        _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
    elif typenum == np.NPY_LONG:
        _imp_correlate_nd_long(curx, curneighx, ity, itz)
    elif typenum == np.NPY_ULONGLONG:
        _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
    elif typenum == np.NPY_LONGLONG:
        _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
    elif typenum == np.NPY_FLOAT:
        _imp_correlate_nd_float(curx, curneighx, ity, itz)
    elif typenum == np.NPY_DOUBLE:
        _imp_correlate_nd_double(curx, curneighx, ity, itz)
    elif typenum == np.NPY_LONGDOUBLE:
        _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
    elif typenum == np.NPY_CFLOAT:
        _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
    elif typenum == np.NPY_CDOUBLE:
        _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
    elif typenum == np.NPY_CLONGDOUBLE:
        _imp_correlate_nd_clongdouble(curx, curneighx, ity, itz)

    # The object array case does not worth being optimized, since most of
    # the cost is numerical operations, not iterators moving in this case ?
    else:
        raise ValueError("Unsupported type")

    return 0
