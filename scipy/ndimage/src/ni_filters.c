/* Copyright (C) 2003-2005 Peter J. Verveer
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *
 * 3. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "ni_support.h"
#include "ni_filters.h"
#include <stdlib.h>
#include <math.h>

#define BUFFER_SIZE 256000

static void NpyErr_NoMemory(void)
{
    NpyErr_SetString(NpyExc_MemoryError, "no memory");
}


int NI_Correlate1D(NpyArray *input, NpyArray *weights,
                                     int axis, NpyArray *output, NI_ExtendMode mode,
                   double cval, npy_intp origin)
{
    int symmetric = 0, more;
    npy_intp ii, jj, ll, lines, length, size1, size2, filter_size;
    double *ibuffer = NULL, *obuffer = NULL;
    npy_float64 *fw;
    NI_LineBuffer iline_buffer, oline_buffer;

    /* test for symmetry or anti-symmetry: */
    filter_size = NpyArray_DIM(weights, 0);
    size1 = filter_size / 2;
    size2 = filter_size - size1 - 1;
    fw = (void *)NpyArray_DATA(weights);
    if (filter_size & 0x1) {
        symmetric = 1;
        for(ii = 1; ii <= filter_size / 2; ii++) {
            if (fabs(fw[ii + size1] - fw[size1 - ii]) > DBL_EPSILON) {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0) {
            symmetric = -1;
            for(ii = 1; ii <= filter_size / 2; ii++) {
                if (fabs(fw[size1 + ii] + fw[size1 - ii]) > DBL_EPSILON) {
                    symmetric = 0;
                    break;
                }
            }
        }
    }
    /* allocate and initialize the line buffers: */
    lines = -1;
    if (!NI_AllocateLineBuffer(input, axis, size1 + origin, size2 - origin,
                                                         &lines, BUFFER_SIZE, &ibuffer))
        goto exit;
    if (!NI_AllocateLineBuffer(output, axis, 0, 0, &lines, BUFFER_SIZE,
                                                         &obuffer))
        goto exit;
    if (!NI_InitLineBuffer(input, axis, size1 + origin, size2 - origin,
                                                            lines, ibuffer, mode, cval, &iline_buffer))
        goto exit;
    if (!NI_InitLineBuffer(output, axis, 0, 0, lines, obuffer, mode, 0.0,
                                                 &oline_buffer))
        goto exit;
    length = NpyArray_NDIM(input) > 0 ? NpyArray_DIM(input, axis) : 1;
    fw += size1;
    /* iterate over all the array lines: */
    do {
        /* copy lines from array to buffer: */
        if (!NI_ArrayToLineBuffer(&iline_buffer, &lines, &more))
            goto exit;
        /* iterate over the lines in the buffers: */
        for(ii = 0; ii < lines; ii++) {
            /* get lines: */
            double *iline = NI_GET_LINE(iline_buffer, ii) + size1;
            double *oline = NI_GET_LINE(oline_buffer, ii);
            /* the correlation calculation: */
            if (symmetric > 0) {
                for(ll = 0; ll < length; ll++) {
                    oline[ll] = iline[0] * fw[0];
                    for(jj = -size1 ; jj < 0; jj++)
                        oline[ll] += (iline[jj] + iline[-jj]) * fw[jj];
                    ++iline;
                }
            } else if (symmetric < 0) {
                for(ll = 0; ll < length; ll++) {
                    oline[ll] = iline[0] * fw[0];
                    for(jj = -size1 ; jj < 0; jj++)
                        oline[ll] += (iline[jj] - iline[-jj]) * fw[jj];
                    ++iline;
                }
            } else {
                for(ll = 0; ll < length; ll++) {
                    oline[ll] = iline[size2] * fw[size2];
                    for(jj = -size1; jj < size2; jj++)
                        oline[ll] += iline[jj] * fw[jj];
                    ++iline;
                }
            }
        }
        /* copy lines from buffer to array: */
        if (!NI_LineBufferToArray(&oline_buffer))
            goto exit;
    } while(more);
exit:
    if (ibuffer) free(ibuffer);
    if (obuffer) free(obuffer);
    return NpyErr_Occurred() ? 0 : 1;
}

#define CASE_CORRELATE_POINT(_pi, _weights, _offsets, _filter_size, \
                                                         _cvalue, _type, _res, _mv)             \
case t ## _type:                                                    \
{                                                                   \
    npy_intp _ii, _offset;                                            \
    for(_ii = 0; _ii < _filter_size; _ii++) {                         \
        _offset = _offsets[_ii];                                        \
        if (_offset == _mv)                                             \
            _res += _weights[_ii] * _cvalue;                              \
        else                                                            \
            _res += _weights[_ii] * (double)*(_type*)(_pi + _offset);     \
    }                                                                 \
}                                                                   \
break

#define CASE_FILTER_OUT(_po, _tmp, _type) \
case t ## _type:                          \
    *(_type*)_po = (_type)_tmp;             \
    break

int NI_Correlate(NpyArray* input, NpyArray* weights,
                                                NpyArray* output, NI_ExtendMode mode,
                 double cvalue, npy_intp *origins)
{
    npy_bool *pf = NULL;
    npy_intp fsize, jj, kk, filter_size = 0, border_flag_value;
    npy_intp *offsets = NULL, *oo, size;
    NI_FilterIterator fi;
    NI_Iterator ii, io;
    char *pi, *po;
    npy_float64 *pw;
    npy_float64 *ww = NULL;
    int ll;

    /* get the the footprint: */
    fsize = 1;
    for(ll = 0; ll < NpyArray_NDIM(weights); ll++)
        fsize *= NpyArray_DIM(weights, ll);
    pw = (npy_float64*)NpyArray_DATA(weights);
    pf = (npy_bool*)malloc(fsize * sizeof(npy_bool));
    if (!pf) {
        NpyErr_NoMemory();
        goto exit;
    }
    for(jj = 0; jj < fsize; jj++) {
        if (fabs(pw[jj]) > DBL_EPSILON) {
            pf[jj] = 1;
            ++filter_size;
        } else {
            pf[jj] = 0;
        }
    }
    /* copy the weights to contiguous memory: */
    ww = (npy_float64*)malloc(filter_size * sizeof(npy_float64));
    if (!ww) {
        NpyErr_NoMemory();
        goto exit;
    }
    jj = 0;
    for(kk = 0; kk < fsize; kk++) {
        if (pf[kk]) {
            ww[jj++] = pw[kk];
        }
    }
    /* initialize filter offsets: */
    if (!NI_InitFilterOffsets(input, pf, NpyArray_DIMS(weights), origins,
                                                        mode, &offsets, &border_flag_value, NULL))
        goto exit;
    /* initialize filter iterator: */
    if (!NI_InitFilterIterator(NpyArray_NDIM(input), NpyArray_DIMS(weights), filter_size,
                               NpyArray_DIMS(input), origins, &fi))
        goto exit;
    /* initialize input element iterator: */
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    /* initialize output element iterator: */
    if (!NI_InitPointIterator(output, &io))
        goto exit;
    /* get data pointers an array size: */
    pi = (void *)NpyArray_DATA(input);
    po = (void *)NpyArray_DATA(output);
    size = 1;
    for(ll = 0; ll < NpyArray_NDIM(input); ll++)
        size *= NpyArray_DIM(input, ll);
    /* iterator over the elements: */
    oo = offsets;
    for(jj = 0; jj < size; jj++) {
        double tmp = 0.0;
        switch (NpyArray_TYPE(input)) {
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_bool,
                                                     tmp, border_flag_value);
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_uint8,
                                                     tmp, border_flag_value);
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_uint16,
                                                     tmp, border_flag_value);
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_uint32,
                                                     tmp, border_flag_value);
#if HAS_UINT64
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_uint64,
                                                     tmp, border_flag_value);
#endif
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_int8,
                                                     tmp, border_flag_value);
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_int16,
                                                     tmp, border_flag_value);
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_int32,
                                                     tmp, border_flag_value);
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_int64,
                                                     tmp, border_flag_value);
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_float32,
                                                     tmp, border_flag_value);
            CASE_CORRELATE_POINT(pi, ww, oo, filter_size, cvalue, npy_float64,
                                                     tmp, border_flag_value);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "array type not supported");
            goto exit;
        }
        switch (NpyArray_TYPE(output)) {
            CASE_FILTER_OUT(po, tmp, npy_bool);
            CASE_FILTER_OUT(po, tmp, npy_uint8);
            CASE_FILTER_OUT(po, tmp, npy_uint16);
            CASE_FILTER_OUT(po, tmp, npy_uint32);
#if HAS_UINT64
            CASE_FILTER_OUT(po, tmp, npy_uint64);
#endif
            CASE_FILTER_OUT(po, tmp, npy_int8);
            CASE_FILTER_OUT(po, tmp, npy_int16);
            CASE_FILTER_OUT(po, tmp, npy_int32);
            CASE_FILTER_OUT(po, tmp, npy_int64);
            CASE_FILTER_OUT(po, tmp, npy_float32);
            CASE_FILTER_OUT(po, tmp, npy_float64);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "array type not supported");
            goto exit;
        }
        NI_FILTER_NEXT2(fi, ii, io, oo, pi, po);
    }
exit:
    if (offsets) free(offsets);
    if (ww) free(ww);
    if (pf) free(pf);
    return NpyErr_Occurred() ? 0 : 1;
}

int
NI_UniformFilter1D(NpyArray *input, npy_intp filter_size,
                                     int axis, NpyArray *output, NI_ExtendMode mode,
                   double cval, npy_intp origin)
{
    npy_intp lines, kk, ll, length, size1, size2;
    int more;
    double *ibuffer = NULL, *obuffer = NULL;
    NI_LineBuffer iline_buffer, oline_buffer;

    size1 = filter_size / 2;
    size2 = filter_size - size1 - 1;
    /* allocate and initialize the line buffers: */
    lines = -1;
    if (!NI_AllocateLineBuffer(input, axis, size1 + origin, size2 - origin,
                                                         &lines, BUFFER_SIZE, &ibuffer))
        goto exit;
    if (!NI_AllocateLineBuffer(output, axis, 0, 0, &lines, BUFFER_SIZE,
                                                         &obuffer))
        goto exit;
    if (!NI_InitLineBuffer(input, axis, size1 + origin, size2 - origin,
                                                            lines, ibuffer, mode, cval, &iline_buffer))
        goto exit;
    if (!NI_InitLineBuffer(output, axis, 0, 0, lines, obuffer, mode, 0.0,
                                                 &oline_buffer))
        goto exit;
    length = NpyArray_NDIM(input) > 0 ? NpyArray_DIM(input, axis) : 1;

    /* iterate over all the array lines: */
    do {
        /* copy lines from array to buffer: */
        if (!NI_ArrayToLineBuffer(&iline_buffer, &lines, &more))
            goto exit;
        /* iterate over the lines in the buffers: */
        for(kk = 0; kk < lines; kk++) {
            /* get lines: */
            double *iline = NI_GET_LINE(iline_buffer, kk);
            double *oline = NI_GET_LINE(oline_buffer, kk);
            /* do the uniform filter: */
            double tmp = 0.0;
            double *l1 = iline;
            double *l2 = iline + filter_size;
            for(ll = 0; ll < filter_size; ll++)
                tmp += iline[ll];
            tmp /= (double)filter_size;
            oline[0] = tmp;
            for(ll = 1; ll < length; ll++) {
                tmp += (*l2++ - *l1++) / (double)filter_size;
                oline[ll] = tmp;
            }
        }
        /* copy lines from buffer to array: */
        if (!NI_LineBufferToArray(&oline_buffer))
            goto exit;
    } while(more);

 exit:
    if (ibuffer) free(ibuffer);
    if (obuffer) free(obuffer);
    return NpyErr_Occurred() ? 0 : 1;
}

int
NI_MinOrMaxFilter1D(NpyArray *input, npy_intp filter_size,
                                        int axis, NpyArray *output, NI_ExtendMode mode,
                    double cval, npy_intp origin, int minimum)
{
    npy_intp lines, kk, jj, ll, length, size1, size2;
    int more;
    double *ibuffer = NULL, *obuffer = NULL;
    NI_LineBuffer iline_buffer, oline_buffer;

    size1 = filter_size / 2;
    size2 = filter_size - size1 - 1;
    /* allocate and initialize the line buffers: */
    lines = -1;
    if (!NI_AllocateLineBuffer(input, axis, size1 + origin, size2 - origin,
                                                         &lines, BUFFER_SIZE, &ibuffer))
        goto exit;
    if (!NI_AllocateLineBuffer(output, axis, 0, 0, &lines, BUFFER_SIZE,
                                                         &obuffer))
        goto exit;
    if (!NI_InitLineBuffer(input, axis, size1 + origin, size2 - origin,
                                                             lines, ibuffer, mode, cval, &iline_buffer))
        goto exit;
    if (!NI_InitLineBuffer(output, axis, 0, 0, lines, obuffer, mode, 0.0,
                                                 &oline_buffer))
        goto exit;
    length = NpyArray_NDIM(input) > 0 ? NpyArray_DIM(input, axis) : 1;

    /* iterate over all the array lines: */
    do {
        /* copy lines from array to buffer: */
        if (!NI_ArrayToLineBuffer(&iline_buffer, &lines, &more))
            goto exit;
        /* iterate over the lines in the buffers: */
        for(kk = 0; kk < lines; kk++) {
            /* get lines: */
            double *iline = NI_GET_LINE(iline_buffer, kk) + size1;
            double *oline = NI_GET_LINE(oline_buffer, kk);
            for(ll = 0; ll < length; ll++) {
            /* find minimum or maximum filter: */
                double val = iline[ll - size1];
                for(jj = -size1 + 1; jj <= size2; jj++) {
                    double tmp = iline[ll + jj];
                    if (minimum) {
                        if (tmp < val)
                            val = tmp;
                    } else {
                        if (tmp > val)
                            val = tmp;
                    }
                }
                oline[ll] = val;
            }
        }
        /* copy lines from buffer to array: */
        if (!NI_LineBufferToArray(&oline_buffer))
            goto exit;
    } while(more);

 exit:
    if (ibuffer) free(ibuffer);
    if (obuffer) free(obuffer);
    return NpyErr_Occurred() ? 0 : 1;
}


#define CASE_MIN_OR_MAX_POINT(_pi, _offsets, _filter_size, _cval, \
                                                            _type, _minimum, _res, _mv, _ss)    \
case t ## _type:                                                  \
{                                                                 \
    npy_intp _ii, _oo = *_offsets;                                \
    _type _cv = (_type)_cval, _tmp;                                 \
    _res = _oo == _mv ? _cv : *(_type*)(_pi + _oo);                 \
    if (_ss)                                                        \
        _res += *_ss;                                                 \
    for(_ii = 1; _ii < _filter_size; _ii++) {                       \
        _oo = _offsets[_ii];                                          \
        _tmp = _oo == _mv ? _cv : *(_type*)(_pi + _oo);               \
        if (_ss)                                                      \
            _tmp += _ss[_ii];                                           \
        if (_minimum) {                                               \
            if (_tmp < _res)                                            \
                _res = (_type)_tmp;                                       \
        } else {                                                      \
            if (_tmp > _res)                                            \
                _res = (_type)_tmp;                                       \
        }                                                             \
    }                                                               \
}                                                                 \
break

int NI_MinOrMaxFilter(NpyArray* input, NpyArray* footprint,
                NpyArray* structure, NpyArray* output,
                      NI_ExtendMode mode, double cvalue, npy_intp *origins,
                      int minimum)
{
    npy_bool *pf = NULL;
    npy_intp fsize, jj, kk, filter_size = 0, border_flag_value;
    npy_intp *offsets = NULL, *oo, size;
    NI_FilterIterator fi;
    NI_Iterator ii, io;
    char *pi, *po;
    int ll;
    double *ss = NULL;
    npy_float64 *ps;

    /* get the the footprint: */
    fsize = 1;
    for(ll = 0; ll < NpyArray_NDIM(footprint); ll++)
        fsize *= NpyArray_DIM(footprint, ll);
    pf = (npy_bool*)NpyArray_DATA(footprint);
    for(jj = 0; jj < fsize; jj++) {
        if (pf[jj]) {
            ++filter_size;
        }
    }
    /* get the structure: */
    if (structure) {
        ss = (double*)malloc(filter_size * sizeof(double));
        if (!ss) {
            NpyErr_NoMemory();
            goto exit;
        }
        /* copy the weights to contiguous memory: */
        ps = (npy_float64*)NpyArray_DATA(structure);
        jj = 0;
        for(kk = 0; kk < fsize; kk++)
            if (pf[kk])
                ss[jj++] = minimum ? -ps[kk] : ps[kk];
    }
    /* initialize filter offsets: */
    if (!NI_InitFilterOffsets(input, pf, NpyArray_DIMS(footprint), origins,
                                                        mode, &offsets, &border_flag_value, NULL))
        goto exit;
    /* initialize filter iterator: */
    if (!NI_InitFilterIterator(NpyArray_NDIM(input), NpyArray_DIMS(footprint),
                                                         filter_size, NpyArray_DIMS(input), origins, &fi))
        goto exit;
    /* initialize input element iterator: */
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    /* initialize output element iterator: */
    if (!NI_InitPointIterator(output, &io))
        goto exit;
    /* get data pointers an array size: */
    pi = (void *)NpyArray_DATA(input);
    po = (void *)NpyArray_DATA(output);
    size = 1;
    for(ll = 0; ll < NpyArray_NDIM(input); ll++)
        size *= NpyArray_DIM(input, ll);
    /* iterator over the elements: */
    oo = offsets;
    for(jj = 0; jj < size; jj++) {
        double tmp = 0.0;
        switch (NpyArray_TYPE(input)) {
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_bool,
                                                        minimum, tmp, border_flag_value, ss);
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_uint8,
                                                        minimum, tmp, border_flag_value, ss);
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_uint16,
                                                        minimum, tmp, border_flag_value, ss);
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_uint32,
                                                        minimum, tmp, border_flag_value, ss);
#if HAS_UINT64
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_uint64,
                                                        minimum, tmp, border_flag_value, ss);
#endif
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_int8,
                                                        minimum, tmp, border_flag_value, ss);
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_int16,
                                                        minimum, tmp, border_flag_value, ss);
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_int32,
                                                        minimum, tmp, border_flag_value, ss);
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_int64,
                                                        minimum, tmp, border_flag_value, ss);
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_float32,
                                                        minimum, tmp, border_flag_value, ss);
            CASE_MIN_OR_MAX_POINT(pi, oo, filter_size, cvalue, npy_float64,
                                                        minimum, tmp, border_flag_value, ss);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "array type not supported");
            goto exit;
        }
        switch (NpyArray_TYPE(output)) {
            CASE_FILTER_OUT(po, tmp, npy_bool);
            CASE_FILTER_OUT(po, tmp, npy_uint8);
            CASE_FILTER_OUT(po, tmp, npy_uint16);
            CASE_FILTER_OUT(po, tmp, npy_uint32);
#if HAS_UINT64
            CASE_FILTER_OUT(po, tmp, npy_uint64);
#endif
            CASE_FILTER_OUT(po, tmp, npy_int8);
            CASE_FILTER_OUT(po, tmp, npy_int16);
            CASE_FILTER_OUT(po, tmp, npy_int32);
            CASE_FILTER_OUT(po, tmp, npy_int64);
            CASE_FILTER_OUT(po, tmp, npy_float32);
            CASE_FILTER_OUT(po, tmp, npy_float64);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "array type not supported");
            goto exit;
        }
        NI_FILTER_NEXT2(fi, ii, io, oo, pi, po);
    }
exit:
    if (offsets) free(offsets);
    if (ss) free(ss);
    return NpyErr_Occurred() ? 0 : 1;
}

static double NI_Select(double *buffer, int min, int max, int rank)
{
    int ii, jj;
    double x, t;

    if (min == max)
        return buffer[min];

    x = buffer[min];
    ii = min - 1;
    jj = max + 1;
    for(;;) {
        do
            jj--;
        while(buffer[jj] > x);
        do
            ii++;
        while(buffer[ii] < x);
        if (ii < jj) {
            t = buffer[ii];
            buffer[ii] = buffer[jj];
            buffer[jj] = t;
        } else {
            break;
        }
    }

    ii = jj - min + 1;
    if (rank < ii)
        return NI_Select(buffer, min, jj, rank);
    else
        return NI_Select(buffer, jj + 1, max, rank - ii);
}

#define CASE_RANK_POINT(_pi, _offsets, _filter_size, _cval, _type, \
                                                _rank, _buffer, _res, _mv)                 \
case t ## _type:                                                   \
{                                                                  \
    npy_intp _ii;                                                  \
    for(_ii = 0; _ii < _filter_size; _ii++) {                        \
        npy_intp _offset = _offsets[_ii];                          \
        if (_offset == _mv)                                            \
            _buffer[_ii] = (_type)_cval;                                 \
        else                                                           \
            _buffer[_ii] = *(_type*)(_pi + _offsets[_ii]);               \
    }                                                                \
    _res = (_type)NI_Select(_buffer, 0, _filter_size - 1, _rank);    \
}                                                                  \
break

int NI_RankFilter(NpyArray* input, int rank,
                  NpyArray* footprint, NpyArray* output,
                  NI_ExtendMode mode, double cvalue, npy_intp *origins)
{
    npy_intp fsize, jj, filter_size = 0, border_flag_value;
    npy_intp *offsets = NULL, *oo, size;
    NI_FilterIterator fi;
    NI_Iterator ii, io;
    char *pi, *po;
    npy_bool *pf = NULL;
    double *buffer = NULL;
    int ll;

    /* get the the footprint: */
    fsize = 1;
    for(ll = 0; ll < NpyArray_NDIM(footprint); ll++)
        fsize *= NpyArray_DIM(footprint, ll);
    pf = (npy_bool*)NpyArray_DATA(footprint);
    for(jj = 0; jj < fsize; jj++) {
        if (pf[jj]) {
            ++filter_size;
        }
    }
    /* buffer for rank calculation: */
    buffer = (double*)malloc(filter_size * sizeof(double));
    if (!buffer) {
        NpyErr_NoMemory();
        goto exit;
    }
    /* iterator over the elements: */
    oo = offsets;
    /* initialize filter offsets: */
    if (!NI_InitFilterOffsets(input, pf, NpyArray_DIMS(footprint), origins,
                              mode, &offsets, &border_flag_value, NULL))
        goto exit;
    /* initialize filter iterator: */
    if (!NI_InitFilterIterator(NpyArray_NDIM(input), NpyArray_DIMS(footprint),
                               filter_size, NpyArray_DIMS(input), origins, &fi))
        goto exit;
    /* initialize input element iterator: */
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    /* initialize output element iterator: */
    if (!NI_InitPointIterator(output, &io))
        goto exit;
    /* get data pointers an array size: */
    pi = (void *)NpyArray_DATA(input);
    po = (void *)NpyArray_DATA(output);
    size = 1;
    for(ll = 0; ll < NpyArray_NDIM(input); ll++)
        size *= NpyArray_DIM(input, ll);
    /* iterator over the elements: */
    oo = offsets;
    for(jj = 0; jj < size; jj++) {
        double tmp = 0.0;
        switch (NpyArray_TYPE(input)) {
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_bool,
                                            rank, buffer, tmp, border_flag_value);
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_uint8,
                                            rank, buffer, tmp, border_flag_value);
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_uint16,
                                            rank, buffer, tmp, border_flag_value);
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_uint32,
                                            rank, buffer, tmp, border_flag_value);
#if HAS_UINT64
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_uint64,
                                            rank, buffer, tmp, border_flag_value);
#endif
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_int8,
                                            rank, buffer, tmp, border_flag_value);
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_int16,
                                            rank, buffer, tmp, border_flag_value);
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_int32,
                                            rank, buffer, tmp, border_flag_value);
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_int64,
                                            rank, buffer, tmp, border_flag_value);
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_float32,
                                            rank, buffer, tmp, border_flag_value);
            CASE_RANK_POINT(pi, oo, filter_size, cvalue, npy_float64,
                                            rank, buffer, tmp, border_flag_value);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "array type not supported");
            goto exit;
        }
        switch (NpyArray_TYPE(output)) {
            CASE_FILTER_OUT(po, tmp, npy_bool);
            CASE_FILTER_OUT(po, tmp, npy_uint8);
            CASE_FILTER_OUT(po, tmp, npy_uint16);
            CASE_FILTER_OUT(po, tmp, npy_uint32);
#if HAS_UINT64
            CASE_FILTER_OUT(po, tmp, npy_uint64);
#endif
            CASE_FILTER_OUT(po, tmp, npy_int8);
            CASE_FILTER_OUT(po, tmp, npy_int16);
            CASE_FILTER_OUT(po, tmp, npy_int32);
            CASE_FILTER_OUT(po, tmp, npy_int64);
            CASE_FILTER_OUT(po, tmp, npy_float32);
            CASE_FILTER_OUT(po, tmp, npy_float64);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "array type not supported");
            goto exit;
        }
        NI_FILTER_NEXT2(fi, ii, io, oo, pi, po);
    }
exit:
    if (offsets) free(offsets);
    if (buffer) free(buffer);
    return NpyErr_Occurred() ? 0 : 1;
}

int NI_GenericFilter1D(NpyArray *input,
            int (*function)(double*, npy_intp, double*, npy_intp, void*),
            void* data, npy_intp filter_size, int axis, NpyArray *output,
            NI_ExtendMode mode, double cval, npy_intp origin)
{
    int more;
    npy_intp ii, lines, length, size1, size2;
    double *ibuffer = NULL, *obuffer = NULL;
    NI_LineBuffer iline_buffer, oline_buffer;

    /* allocate and initialize the line buffers: */
    size1 = filter_size / 2;
    size2 = filter_size - size1 - 1;
    lines = -1;
    if (!NI_AllocateLineBuffer(input, axis, size1 + origin, size2 - origin,
                                                         &lines, BUFFER_SIZE, &ibuffer))
        goto exit;
    if (!NI_AllocateLineBuffer(output, axis, 0, 0, &lines, BUFFER_SIZE,
                                                         &obuffer))
        goto exit;
    if (!NI_InitLineBuffer(input, axis, size1 + origin, size2 - origin,
                                                            lines, ibuffer, mode, cval, &iline_buffer))
        goto exit;
    if (!NI_InitLineBuffer(output, axis, 0, 0, lines, obuffer, mode, 0.0,
                                                 &oline_buffer))
        goto exit;
    length = NpyArray_NDIM(input) > 0 ? NpyArray_DIM(input, axis) : 1;
    /* iterate over all the array lines: */
    do {
        /* copy lines from array to buffer: */
        if (!NI_ArrayToLineBuffer(&iline_buffer, &lines, &more))
            goto exit;
        /* iterate over the lines in the buffers: */
        for(ii = 0; ii < lines; ii++) {
            /* get lines: */
            double *iline = NI_GET_LINE(iline_buffer, ii);
            double *oline = NI_GET_LINE(oline_buffer, ii);
            if (!function(iline, length + size1 + size2, oline, length, data)) {
                if (!NpyErr_Occurred())
                    NpyErr_SetString(NpyExc_RuntimeError,
                                     "unknown error in line processing function");
                goto exit;
            }
        }
        /* copy lines from buffer to array: */
        if (!NI_LineBufferToArray(&oline_buffer))
            goto exit;
    } while(more);
exit:
    if (ibuffer) free(ibuffer);
    if (obuffer) free(obuffer);
    return NpyErr_Occurred() ? 0 : 1;
}

#define CASE_FILTER_POINT(_pi, _offsets, _filter_size, _cvalue, _type, \
                                                    _res, _mv, _function, _data, _buffer)        \
case t ## _type:                                                       \
{                                                                      \
    npy_intp _ii, _offset;                                             \
    for(_ii = 0; _ii < _filter_size; _ii++) {                            \
        _offset = _offsets[_ii];                                           \
        if (_offset == _mv)                                                \
            _buffer[_ii] = (double)_cvalue;                                  \
        else                                                               \
            _buffer[_ii] = (double)*(_type*)(_pi + _offset);                 \
    }                                                                    \
    if (!_function(_buffer, _filter_size, &_res, _data)) {               \
        if (!NpyErr_Occurred())                                             \
            NpyErr_SetString(NpyExc_RuntimeError,                              \
                                            "unknown error in filter function");             \
            goto exit;                                                       \
    }                                                                    \
}                                                                      \
break


int NI_GenericFilter(NpyArray* input,
            int (*function)(double*, npy_intp, double*, void*), void *data,
            NpyArray* footprint, NpyArray* output,
            NI_ExtendMode mode, double cvalue, npy_intp *origins)
{
    npy_bool *pf = NULL;
    npy_intp fsize, jj, filter_size = 0, border_flag_value;
    npy_intp *offsets = NULL, *oo, size;
    NI_FilterIterator fi;
    NI_Iterator ii, io;
    char *pi, *po;
    double *buffer = NULL;
    int ll;

    /* get the the footprint: */
    fsize = 1;
    for(ll = 0; ll < NpyArray_NDIM(footprint); ll++)
        fsize *= NpyArray_DIM(footprint, ll);
    pf = (npy_bool*)NpyArray_DATA(footprint);
    for(jj = 0; jj < fsize; jj++) {
        if (pf[jj])
            ++filter_size;
    }
    /* initialize filter offsets: */
    if (!NI_InitFilterOffsets(input, pf, NpyArray_DIMS(footprint), origins,
                              mode, &offsets, &border_flag_value, NULL))
        goto exit;
    /* initialize filter iterator: */
    if (!NI_InitFilterIterator(NpyArray_NDIM(input), NpyArray_DIMS(footprint),
                               filter_size, NpyArray_DIMS(input), origins, &fi))
        goto exit;
    /* initialize input element iterator: */
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    /* initialize output element iterator: */
    if (!NI_InitPointIterator(output, &io))
        goto exit;
    /* get data pointers an array size: */
    pi = (void *)NpyArray_DATA(input);
    po = (void *)NpyArray_DATA(output);
    size = 1;
    for(ll = 0; ll < NpyArray_NDIM(input); ll++)
        size *= NpyArray_DIM(input, ll);
    /* buffer for filter calculation: */
    buffer = (double*)malloc(filter_size * sizeof(double));
    if (!buffer) {
        NpyErr_NoMemory();
        goto exit;
    }
    /* iterate over the elements: */
    oo = offsets;
    for(jj = 0; jj < size; jj++) {
        double tmp = 0.0;
        switch (NpyArray_TYPE(input)) {
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_bool,
                                                tmp, border_flag_value, function, data, buffer);
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_uint8,
                                                tmp, border_flag_value, function, data, buffer);
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_uint16,
                                                tmp, border_flag_value, function, data, buffer);
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_uint32,
                                                tmp, border_flag_value, function, data, buffer);
#if HAS_UINT64
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_uint64,
                                                tmp, border_flag_value, function, data, buffer);
#endif
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_int8,
                                                tmp, border_flag_value, function, data, buffer);
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_int16,
                                                tmp, border_flag_value, function, data, buffer);
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_int32,
                                                tmp, border_flag_value, function, data, buffer);
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_int64,
                                                tmp, border_flag_value, function, data, buffer);
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_float32,
                                                tmp, border_flag_value, function, data, buffer);
            CASE_FILTER_POINT(pi, oo, filter_size, cvalue, npy_float64,
                                                tmp, border_flag_value, function, data, buffer);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "array type not supported");
            goto exit;
        }
        switch (NpyArray_TYPE(output)) {
            CASE_FILTER_OUT(po, tmp, npy_bool);
            CASE_FILTER_OUT(po, tmp, npy_uint8);
            CASE_FILTER_OUT(po, tmp, npy_uint16);
            CASE_FILTER_OUT(po, tmp, npy_uint32);
#if HAS_UINT64
            CASE_FILTER_OUT(po, tmp, npy_uint64);
#endif
            CASE_FILTER_OUT(po, tmp, npy_int8);
            CASE_FILTER_OUT(po, tmp, npy_int16);
            CASE_FILTER_OUT(po, tmp, npy_int32);
            CASE_FILTER_OUT(po, tmp, npy_int64);
            CASE_FILTER_OUT(po, tmp, npy_float32);
            CASE_FILTER_OUT(po, tmp, npy_float64);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "array type not supported");
            goto exit;
        }
        NI_FILTER_NEXT2(fi, ii, io, oo, pi, po);
    }
exit:
    if (offsets) free(offsets);
    if (buffer) free(buffer);
    return NpyErr_Occurred() ? 0 : 1;
}
