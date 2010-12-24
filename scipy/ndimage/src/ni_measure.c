/* Copyright (C) 2003-2005 Peter J. Verveer
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the` following conditions
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
#include "ni_measure.h"
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <assert.h>

typedef struct {
    npy_int32 index1, index2;
    void* next;
} _index_pair;

#define CASE_LABEL(_p, _pi, _type) \
case t ## _type:                   \
    *_p = *(_type*)_pi ? -1 : 0;     \
    break


static void NpyErr_NoMemory(void)
{
    NpyErr_SetString(NpyExc_MemoryError, "no memory");
}


int NI_Label(NpyArray* input, NpyArray* strct,
             npy_intp *max_label, NpyArray* output)
{
    int kk;
    npy_intp jj, ll, ssize, size, filter_size, *offsets = NULL;
    npy_intp mask_value, *oo;
    npy_bool *ps, *footprint = NULL;
    char *pi, *po;
    npy_int32 index = 0, *index_map = NULL;
    NI_FilterIterator fi;
    NI_Iterator ii, io;
    _index_pair *pairs = NULL;

    /* structure size */
    ssize = 1;
    for(kk = 0; kk < NpyArray_NDIM(strct); kk++)
        ssize *= NpyArray_DIM(strct,kk);
    /* we only use the first half of the structure data, so we make a
         temporary structure for use with the filter functions: */
    footprint = (npy_bool*)malloc(ssize * sizeof(npy_bool));
    if (!footprint) {
        NpyErr_NoMemory();
        goto exit;
    }
    ps = (npy_bool*)NpyArray_DATA(strct);
    filter_size = 0;
    for(jj = 0; jj < ssize / 2; jj++) {
        footprint[jj] = ps[jj];
        if (ps[jj])
            ++filter_size;
    }
    for(jj = ssize / 2; jj < ssize; jj++)
        footprint[jj] = 0;
    /* get data and size */
    pi = (void *)NpyArray_DATA(input);
    po = (void *)NpyArray_DATA(output);
    size = 1;
    for(kk = 0; kk < NpyArray_NDIM(output); kk++)
        size *= NpyArray_DIM(output,kk);
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    if (!NI_InitPointIterator(output, &io))
        goto exit;
    /* set all elements in the output corresponding to non-zero elements
         in input to -1: */
    for(jj = 0; jj < size; jj++) {
        npy_int32 *p = (npy_int32*)po;
        switch (NpyArray_TYPE(input)) {
        CASE_LABEL(p, pi, npy_bool);
        CASE_LABEL(p, pi, npy_uint8);
        CASE_LABEL(p, pi, npy_uint16);
        CASE_LABEL(p, pi, npy_uint32);
#if HAS_UINT64
        CASE_LABEL(p, pi, npy_uint64);
#endif
        CASE_LABEL(p, pi, npy_int8);
        CASE_LABEL(p, pi, npy_int16);
        CASE_LABEL(p, pi, npy_int32);
        CASE_LABEL(p, pi, npy_int64);
        CASE_LABEL(p, pi, npy_float32);
        CASE_LABEL(p, pi, npy_float64);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
            goto exit;
        }
        NI_ITERATOR_NEXT2(ii, io, pi, po);
    }

    /* calculate the filter offsets: */
    if (!NI_InitFilterOffsets(output, footprint, NpyArray_DIMS(strct), NULL,
                              NI_EXTEND_CONSTANT, &offsets, &mask_value, NULL))
        goto exit;
    /* initialize filter iterator: */
    if (!NI_InitFilterIterator(NpyArray_NDIM(input), NpyArray_DIMS(strct), filter_size,
                               NpyArray_DIMS(input), NULL, &fi))
        goto exit;
    /* reset output iterator: */
    NI_ITERATOR_RESET(io);
    po = (void *)NpyArray_DATA(output);
    /* iterator over the elements: */
    oo = offsets;
    for(jj = 0; jj < size; jj++) {
        if (*(npy_int32*)po < 0) {
            npy_int32 neighbor = 0;
            /* iterate over structuring element: */
            for(ll = 0; ll < filter_size; ll++) {
                int offset = oo[ll];
                if (offset != mask_value) {
                    npy_int32 tt = *(npy_int32*)(po + offset);
                    if (tt > 0) {
                        /* this element is next to an already found object: */
                        if (neighbor && neighbor != tt) {
                            /* we have two objects that must be merged later: */
                            _index_pair* tp = (_index_pair*)malloc(sizeof(_index_pair));
                            if (!tp) {
                                NpyErr_NoMemory();
                                goto exit;
                            }
                            tp->next = pairs;
                            /* the pairs must be ordered: */
                            if (neighbor < tt) {
                                tp->index1 = neighbor;
                                tp->index2 = tt;
                            } else {
                                tp->index1 = tt;
                                tp->index2 = neighbor;
                            }
                            pairs = tp;
                        } else {
                            neighbor = tt;
                        }
                    }
                }
            }
            if (neighbor) {
                /* this point belongs to an existing object */
                *(npy_int32*)po = neighbor;
            } else {
                /* this may be a new object: */
                *(npy_int32*)po = ++index;
            }
        }
        NI_FILTER_NEXT(fi, io, oo, po);
    }
    *max_label = index;
    /* merge any touching objects: */
    if (pairs) {
        npy_int32 counter;
        index_map = (npy_int32*)malloc(index * sizeof(npy_int32));
        if (!index_map) {
            NpyErr_NoMemory();
            goto exit;
        }
        for(jj = 0; jj < index; jj++)
            index_map[jj] = (npy_int32)jj;
        while (pairs) {
            npy_int32 idx1 = pairs->index1 - 1;
            npy_int32 idx2 = pairs->index2 - 1;
            if (index_map[idx2] == idx1 || index_map[idx2] == idx2) {
                /* if this pair was already processed, or if idx2 was not
                     mapped yet, we delete this pair and map idx2 to idx1: */
                _index_pair *tp = pairs;
                pairs = tp->next;
                free(tp);
                index_map[idx2] = idx1;
            } else {
                /* idx2 was already mapped, therefore we find what it was
                     mapped to and change the current pair to the result of
                     that and idx1. Since the pair is not destroyed, it will be
                     re-processed with the adapted values.  */
                idx2 = index_map[idx2];
                /* keep the pairs ordered: */
                if (idx1 < idx2) {
                    pairs->index1 = idx1 + 1;
                    pairs->index2 = idx2 + 1;
                } else {
                    pairs->index1 = idx2 + 1;
                    pairs->index2 = idx1 + 1;
                }
            }
        }
        for(jj = 0; jj < index; jj++) {
            /* if the current index maps to a index that is also mapped,
                 change it to map to that index. Since an index always maps to
                 a lower index or to itself, this will make sure that at the
                 end all indices map to an unmapped index. */
            if (index_map[index_map[jj]] < index_map[jj])
                index_map[jj] = index_map[index_map[jj]];
        }
        /* renumber the indices that are not mapped: */
        counter = 0;
        for(jj = 0; jj < index; jj++)
            if (index_map[jj] == jj)
                index_map[jj] = ++counter;
            else
                index_map[jj] = index_map[index_map[jj]];
    }

    /* relabel the output if we merged some objects: */
    if (index_map) {
        *max_label = 0;
        NI_ITERATOR_RESET(io);
        po = (void *)NpyArray_DATA(output);
        for(jj = 0; jj < size; jj++) {
            npy_int32 p = *(npy_int32*)po;
            if (p > 0 )
                *(npy_int32*)po = index_map[p - 1];
            if (*(npy_int32*)po > *max_label)
                *max_label = *(npy_int32*)po;
            NI_ITERATOR_NEXT(io, po);
        }
    }
 exit:
    if (offsets) free(offsets);
    if (index_map) free(index_map);
    while (pairs) {
        _index_pair *tp = pairs;
        pairs = (_index_pair*)pairs->next;
        free(tp);
    }
    if (footprint)
        free(footprint);
    return NpyErr_Occurred() ? 0 : 1;
}

#define CASE_FIND_OBJECT_POINT(_pi, _regions, _rank, _dimensions, \
                                                             _max_label, _ii, _type)            \
case t ## _type:                                                  \
{                                                                 \
    int _kk;                                                        \
    npy_intp _sindex = *(_type*)_pi - 1;                            \
    if (_sindex >= 0 && _sindex < _max_label) {                     \
        if (_rank > 0) {                                              \
            _sindex *= 2 * _rank;                                       \
            if (_regions[_sindex] < 0) {                                \
                for(_kk = 0; _kk < _rank; _kk++) {                        \
                    npy_intp _cc = _ii.coordinates[_kk];            \
                    _regions[_sindex + _kk] = _cc;                          \
                    _regions[_sindex + _kk + _rank] = _cc + 1;              \
                }                                                         \
            } else {                                                    \
                for(_kk = 0; _kk < _rank; _kk++) {                        \
                    npy_intp _cc = _ii.coordinates[_kk];            \
                    if (_cc < _regions[_sindex + _kk])                      \
                        _regions[_sindex + _kk] = _cc;                        \
                    if (_cc + 1 > _regions[_sindex + _kk + _rank])          \
                        _regions[_sindex + _kk + _rank] = _cc + 1;            \
                }                                                         \
            }                                                           \
        } else {                                                      \
            _regions[_sindex] = 1;                                      \
        }                                                             \
    }                                                               \
}                                                                 \
break

int NI_FindObjects(NpyArray* input, npy_intp max_label,
                                     npy_intp* regions)
{
    int kk;
    npy_intp size, jj;
    NI_Iterator ii;
    char *pi;

    /* get input data, size and iterator: */
    pi = (void *)NpyArray_DATA(input);
    size = 1;
    for(kk = 0; kk < NpyArray_NDIM(input); kk++)
        size *= NpyArray_DIM(input, kk);
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    if (NpyArray_NDIM(input) > 0) {
        for(jj = 0; jj < 2 * NpyArray_NDIM(input) * max_label; jj++)
            regions[jj] = -1;
    } else {
        for(jj = 0; jj < max_label; jj++)
            regions[jj] = -1;
    }
    /* iterate over all points: */
    for(jj = 0 ; jj < size; jj++) {
        switch (NpyArray_TYPE(input)) {
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii,  npy_bool);
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii, npy_uint8);
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii, npy_uint16);
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii, npy_uint32);
#if HAS_UINT64
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii, npy_uint64);
#endif
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii, npy_int8);
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii, npy_int16);
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii, npy_int32);
        CASE_FIND_OBJECT_POINT(pi, regions, NpyArray_NDIM(input), NpyArray_DIMS(input),
                                                     max_label, ii, npy_int64);
            break;
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
            goto exit;
        }
        NI_ITERATOR_NEXT(ii, pi);
    }
 exit:
    return NpyErr_Occurred() ? 0 : 1;
}


/* macro to get input value: */
#if HAS_UINT64
#define NI_GET_VALUE(_pi, _v, _type)                                  \
{                                                                     \
    switch(_type) {                                                     \
    case tnpy_bool:                                                         \
        _v = (*(npy_bool*)_pi) != 0;                                          \
        break;                                                            \
    case tnpy_uint8:                                                        \
        _v = *(npy_uint8*)_pi;                                                \
        break;                                                            \
    case tnpy_uint16:                                                       \
        _v = *(npy_uint16*)_pi;                                               \
        break;                                                            \
    case tnpy_uint32:                                                       \
        _v = *(npy_uint32*)_pi;                                               \
        break;                                                            \
    case tnpy_int8:                                                         \
        _v = *(npy_int8*)_pi;                                                 \
        break;                                                            \
    case tnpy_int16:                                                        \
        _v = *(npy_int16*)_pi;                                                \
        break;                                                            \
    case tnpy_int32:                                                        \
        _v = *(npy_int32*)_pi;                                                \
        break;                                                            \
    case tnpy_int64:                                                        \
        _v = *(npy_int64*)_pi;                                                \
        break;                                                            \
    case tnpy_uint64:                                                       \
        _v = *(npy_uint64*)_pi;                                               \
        break;                                                            \
    case tnpy_float32:                                                      \
        _v = *(npy_float32*)_pi;                                              \
        break;                                                            \
    case tnpy_float64:                                                      \
        _v = *(npy_float64*)_pi;                                              \
        break;                                                            \
    default:                                                            \
            NpyErr_SetString(NpyExc_RuntimeError,                       \
                                         "data type not supported");  \
            return 0;                                                       \
    }                                                                   \
}
#else
#define NI_GET_VALUE(_pi, _v, _type)                                  \
{                                                                     \
    switch(_type) {                                                     \
    case tnpy_bool:                                                         \
        _v = (*(npy_bool*)_pi) != 0;                                          \
        break;                                                            \
    case tnpy_uint8:                                                        \
        _v = *(npy_uint8*)_pi;                                                \
        break;                                                            \
    case tnpy_uint16:                                                       \
        _v = *(npy_uint16*)_pi;                                               \
        break;                                                            \
    case tnpy_uint32:                                                       \
        _v = *(npy_uint32*)_pi;                                               \
        break;                                                            \
    case tnpy_int8:                                                         \
        _v = *(npy_int8*)_pi;                                                 \
        break;                                                            \
    case tnpy_int16:                                                        \
        _v = *(npy_int16*)_pi;                                                \
        break;                                                            \
    case tnpy_int32:                                                        \
        _v = *(npy_int32*)_pi;                                                \
        break;                                                            \
    case tnpy_int64:                                                        \
        _v = *(npy_int64*)_pi;                                                \
        break;                                                            \
    case tnpy_float32:                                                      \
        _v = *(npy_float32*)_pi;                                              \
        break;                                                            \
    case tnpy_float64:                                                      \
        _v = *(npy_float64*)_pi;                                              \
        break;                                                            \
    default:                                                            \
            NpyErr_SetString(NpyExc_RuntimeError,                       \
                                        "data type not supported");   \
            return 0;                                                       \
    }                                                                   \
}
#endif

/* macro to get label value: */
#if HAS_UINT64
#define NI_GET_LABEL(_pm, _label, _type)                              \
{                                                                     \
    if (_pm) {                                                          \
        switch(_type) {                                                   \
        case tnpy_bool:                                                       \
            _label = *(npy_bool*)_pm;                                           \
            break;                                                          \
        case tnpy_uint8:                                                      \
            _label = *(npy_uint8*)_pm;                                          \
            break;                                                          \
        case tnpy_uint16:                                                     \
            _label = *(npy_uint16*)_pm;                                         \
            break;                                                          \
        case tnpy_uint32:                                                     \
            _label = *(npy_uint32*)_pm;                                         \
            break;                                                          \
        case tnpy_uint64:                                                     \
            _label = *(npy_uint64*)_pm;                                         \
            break;                                                          \
        case tnpy_int8:                                                       \
            _label = *(npy_int8*)_pm;                                           \
            break;                                                          \
        case tnpy_int16:                                                      \
            _label = *(npy_int16*)_pm;                                          \
            break;                                                          \
        case tnpy_int32:                                                      \
            _label = *(npy_int32*)_pm;                                          \
             break;                                                         \
        case tnpy_int64:                                                      \
            _label = *(npy_int64*)_pm;                                          \
             break;                                                         \
        case tnpy_float32:                                                    \
            _label = *(npy_float32*)_pm;                                        \
            break;                                                          \
        case tnpy_float64:                                                    \
            _label = *(npy_float64*)_pm;                                        \
            break;                                                          \
        default:                                                          \
            NpyErr_SetString(NpyExc_RuntimeError,                       \
                                        "data type not supported");   \
            return 0;                                                       \
        }                                                                 \
    }                                                                   \
}
#else
#define NI_GET_LABEL(_pm, _label, _type)                              \
{                                                                     \
    if (_pm) {                                                          \
        switch(_type) {                                                   \
        case tnpy_bool:                                                       \
            _label = *(npy_bool*)_pm;                                           \
            break;                                                          \
        case tnpy_uint8:                                                      \
            _label = *(npy_uint8*)_pm;                                          \
            break;                                                          \
        case tnpy_uint16:                                                     \
            _label = *(npy_uint16*)_pm;                                         \
            break;                                                          \
        case tnpy_uint32:                                                     \
            _label = *(npy_uint32*)_pm;                                         \
            break;                                                          \
        case tnpy_int8:                                                       \
            _label = *(npy_int8*)_pm;                                           \
            break;                                                          \
        case tnpy_int16:                                                      \
            _label = *(npy_int16*)_pm;                                          \
            break;                                                          \
        case tnpy_int32:                                                      \
            _label = *(npy_nt32*)_pm;                                          \
             break;                                                         \
        case tnpy_int64:                                                      \
            _label = *(npy_int64*)_pm;                                          \
             break;                                                         \
        case tnpy_float32:                                                    \
            _label = *(npy_float32*)_pm;                                        \
            break;                                                          \
        case tnpy_float64:                                                    \
            _label = *(npy_float64*)_pm;                                        \
            break;                                                          \
        default:                                                          \
            NpyErr_SetString(NpyExc_RuntimeError,                       \
                                        "data type not supported");   \
            return 0;                                                       \
        }                                                                 \
    }                                                                   \
}
#endif

int NI_Statistics(NpyArray *input, NpyArray *labels,
    npy_intp min_label, npy_intp max_label, npy_intp *indices,
    npy_intp n_results, double *sum, npy_intp *total, double *variance,
    double *minimum, double *maximum, npy_intp* min_pos, npy_intp* max_pos)
{
    char *pi = NULL, *pm = NULL;
    NI_Iterator ii, mi;
    npy_intp jj, size, idx = 0, label = 1, doit = 1;
    int qq;

    /* input iterator: */
    if (!NI_InitPointIterator(input, &ii))
        return 0;
    /* input data: */
    pi = (void *)NpyArray_DATA(input);
    if (labels) {
        if (!NI_InitPointIterator(labels, &mi))
            return 0;
        pm = (void *)NpyArray_DATA(labels);
    }
    /* input size: */
    size = 1;
    for(qq = 0; qq < NpyArray_NDIM(input); qq++)
        size *= NpyArray_DIM(input, qq);
    for(jj = 0; jj < n_results; jj++) {
        if (sum)
            sum[jj] = 0.0;
        if (total)
            total[jj] = 0;
        if (variance)
            variance[jj] = 0;
        if (minimum)
            minimum[jj] = DBL_MAX;
        if (maximum)
            maximum[jj] = -DBL_MAX;
        if (min_pos)
            min_pos[jj] = 0;
        if (max_pos)
            max_pos[jj] = 0;
    }
    /* iterate over array: */
    for(jj = 0; jj < size; jj++) {
        NI_GET_LABEL(pm, label, NpyArray_TYPE(labels));
        if (min_label >= 0) {
            if (label >= min_label && label <= max_label) {
                idx = indices[label - min_label];
                doit = idx >= 0;
            } else {
                doit = 0;
            }
        } else {
            doit = label != 0;
        }
        if (doit) {
            double val;
            NI_GET_VALUE(pi, val, NpyArray_TYPE(input));
            if (sum)
                sum[idx] += val;
            if (total)
                total[idx]++;
            if (minimum && val < minimum[idx]) {
                minimum[idx] = val;
                if (min_pos)
                    min_pos[idx] = jj;
            }
            if (maximum && (val > maximum[idx])) {
                maximum[idx] = val;
                if (max_pos)
                    max_pos[idx] = jj;
            }
        }
        if (labels) {
            NI_ITERATOR_NEXT2(ii, mi, pi, pm);
        } else {
            NI_ITERATOR_NEXT(ii, pi);
        }
    }
    if (minimum) {
        for(jj = 0; jj < n_results; jj++) {
            if (!(minimum[jj] < DBL_MAX))
                minimum[jj] = 0.0;
        }
    }
    if (maximum) {
        for(jj = 0; jj < n_results; jj++) {
            if (!(maximum[jj] > -DBL_MAX))
                maximum[jj] = 0.0;
        }
    }
    if (variance) {
        int do_var = 0;
        for(jj = 0; jj < n_results; jj++)
            if (total[jj] > 1) {
                do_var = 1;
                break;
            }
        if (do_var) {
            /* reset input iterator: */
            NI_ITERATOR_RESET(ii);
            pi = (void *)NpyArray_DATA(input);
            if (labels) {
                /* reset label iterator: */
                NI_ITERATOR_RESET(mi);
                pm = (void *)NpyArray_DATA(labels);
            }
            for(jj = 0; jj < size; jj++) {
                NI_GET_LABEL(pm, label, NpyArray_TYPE(labels));
                if (min_label >= 0) {
                    if (label >= min_label && label <= max_label) {
                        idx = indices[label - min_label];
                        doit = idx >= 0;
                    } else {
                        doit = 0;
                    }
                } else {
                    doit = label != 0;
                }
                if (doit) {
                    double val;
                    NI_GET_VALUE(pi, val, NpyArray_TYPE(input));
                    val = val - sum[idx] / total[idx];
                    variance[idx] += val * val;
                }
                if (labels) {
                    NI_ITERATOR_NEXT2(ii, mi, pi, pm);
                } else {
                    NI_ITERATOR_NEXT(ii, pi);
                }
            }
            for(jj = 0; jj < n_results; jj++)
                variance[jj] = (total[jj] > 1 ?
                                                variance[jj] / (total[jj] - 1) : 0.0);
        }
    }
    return 1;
}


int NI_CenterOfMass(NpyArray *input, NpyArray *labels,
                    npy_intp min_label, npy_intp max_label, npy_intp *indices,
                    npy_intp n_results, double *center_of_mass)
{
    char *pi = NULL, *pm = NULL;
    NI_Iterator ii, mi;
    npy_intp jj, kk, size, idx = 0, label = 1, doit = 1;
    double *sum = NULL;
    int qq;

    /* input iterator: */
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    /* input data: */
    pi = (void *)NpyArray_DATA(input);
    if (labels) {
        if (!NI_InitPointIterator(labels, &mi))
            goto exit;
        pm = (void *)NpyArray_DATA(labels);
    }
    /* input size: */
    size = 1;
    for(qq = 0; qq < NpyArray_NDIM(input); qq++)
        size *= NpyArray_DIM(input, qq);
    sum = (double*)malloc(n_results * sizeof(double));
    if (!sum) {
        NpyErr_NoMemory();
        goto exit;
    }
    for(jj = 0; jj < n_results; jj++) {
        sum[jj] = 0.0;
        for(kk = 0; kk < NpyArray_NDIM(input); kk++)
            center_of_mass[jj * NpyArray_NDIM(input) + kk] = 0.0;
    }
    /* iterate over array: */
    for(jj = 0; jj < size; jj++) {
        NI_GET_LABEL(pm, label, NpyArray_TYPE(labels));
        if (min_label >= 0) {
            if (label >= min_label && label <= max_label) {
                idx = indices[label - min_label];
                doit = idx >= 0;
            } else {
                doit = 0;
            }
        } else {
            doit = label != 0;
        }
        if (doit) {
            double val;
            NI_GET_VALUE(pi, val, NpyArray_TYPE(input));
            sum[idx] += val;
            for(kk = 0; kk < NpyArray_NDIM(input); kk++)
                center_of_mass[idx * NpyArray_NDIM(input) + kk] += val * ii.coordinates[kk];
        }
        if (labels) {
            NI_ITERATOR_NEXT2(ii, mi, pi, pm);
        } else {
            NI_ITERATOR_NEXT(ii, pi);
        }
    }
    for(jj = 0; jj < n_results; jj++)
        for(kk = 0; kk < NpyArray_NDIM(input); kk++)
            center_of_mass[jj * NpyArray_NDIM(input) + kk] /= sum[jj];
 exit:
    if (sum)
        free(sum);
    return  NpyErr_Occurred() == 0;
}


int NI_Histogram(NpyArray *input, NpyArray *labels,
                 npy_intp min_label, npy_intp max_label, npy_intp *indices,
                 npy_intp n_results, NpyArray **histograms,
                 double min, double max, npy_intp nbins)
{
    char *pi = NULL, *pm = NULL;
    NI_Iterator ii, mi;
    npy_intp jj, kk, size, idx = 0, label = 1, doit = 1;
    npy_int32 **ph = NULL;
    double bsize;
    int qq;

    /* input iterator: */
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    /* input data: */
    pi = (void *)NpyArray_DATA(input);
    if (labels) {
        if (!NI_InitPointIterator(labels, &mi))
            goto exit;
        pm = (void *)NpyArray_DATA(labels);
    }
    ph = (npy_int32**)malloc(n_results * sizeof(npy_int32*));
    if (!ph) {
        NpyErr_NoMemory();
        goto exit;
    }
    for(jj = 0; jj < n_results; jj++) {
            ph[jj] = (npy_int32*)NpyArray_DATA(histograms[jj]);
            for(kk = 0; kk < nbins; kk++)
                    ph[jj][kk] = 0;
    }
    bsize = (max - min) / (double)nbins;
    /* input size: */
    size = 1;
    for(qq = 0; qq < NpyArray_NDIM(input); qq++)
        size *= NpyArray_DIM(input, qq);
    /* iterate over array: */
    for(jj = 0; jj < size; jj++) {
        NI_GET_LABEL(pm, label, NpyArray_TYPE(labels));
        if (min_label >= 0) {
            if (label >= min_label && label <= max_label) {
                idx = indices[label - min_label];
                doit = idx >= 0;
            } else {
                doit = 0;
            }
        } else {
            doit = label != 0;
        }
        if (doit) {
            int bin;
            double val;
            NI_GET_VALUE(pi, val, NpyArray_TYPE(input));
            if (val >= min && val < max) {
                bin = (int)((val - min) / bsize);
                ++(ph[idx][bin]);
            }
        }
        if (labels) {
            NI_ITERATOR_NEXT2(ii, mi, pi, pm);
        } else {
            NI_ITERATOR_NEXT(ii, pi);
        }
    }
 exit:
    if (ph)
        free(ph);
    return  NpyErr_Occurred() == 0;
}

#define WS_GET_INDEX(_index, _c_strides, _b_strides, _rank, _out, \
                                         _contiguous, _type)                          \
do {                                                              \
    if (_contiguous) {                                              \
        _out = _index * sizeof(_type);                                \
    } else {                                                        \
        int _qq;                                                      \
        npy_intp _cc, _idx = _index;                              \
        _out = 0;                                                     \
        for (_qq = 0; _qq < _rank; _qq++) {                           \
            _cc = _idx / _c_strides[_qq];                               \
            _idx -= _cc * _c_strides[_qq];                              \
            _out += _b_strides[_qq] * _cc;                              \
        }                                                             \
    }                                                               \
} while(0)

#define CASE_GET_INPUT(_ival, _pi, _type) \
case t ## _type:                          \
    _ival = *((_type*)_pi);                 \
    break

#define CASE_GET_LABEL(_label, _pm, _type) \
case t ## _type:                           \
    _label = *(_type*)_pm;                   \
    break

#define CASE_PUT_LABEL(_label, _pl, _type) \
case t ## _type:                           \
    *((_type*)_pl) = _label;                 \
    break

#define CASE_WINDEX1(_v_index, _p_index, _strides, _istrides, _irank,  \
                                         _icont, _p_idx, _v_idx, _pi, _vval, _pval, _type) \
case t ## _type:                                                       \
    WS_GET_INDEX(_v_index, _strides, _istrides, _irank, _p_idx, _icont,  \
                             _type);                                                 \
    WS_GET_INDEX(_p_index, _strides, _istrides, _irank, _v_idx, _icont,  \
                             _type);                                                 \
    _vval = *(_type*)(_pi + _v_idx);                                     \
    _pval = *(_type*)(_pi + _p_idx);                                     \
    break

#define CASE_WINDEX2(_v_index, _strides, _ostrides, _irank, _idx, \
                                         _ocont, _label, _pl, _type)                  \
case t ## _type:                                                  \
    WS_GET_INDEX(_v_index, _strides, _ostrides, _irank, _idx,       \
                             _ocont, _type);                                    \
    _label = *(_type*)(_pl + _idx);                                 \
    break

#define CASE_WINDEX3(_p_index, _strides, _ostrides, _irank, _idx, \
                                         _ocont, _label, _pl, _type)                  \
case t ## _type:                                                  \
    WS_GET_INDEX(_p_index, _strides, _ostrides, _irank, _idx,       \
                             _ocont, _type);                                    \
    *(_type*)(_pl + _idx) = _label;                                 \
break

#define DONE_TYPE npy_uint8
#define COST_TYPE npy_uint16
#define WS_MAXDIM 7

typedef struct {
    npy_intp index;
    COST_TYPE cost;
    void *next, *prev;
    DONE_TYPE done;
} NI_WatershedElement;

int NI_WatershedIFT(NpyArray* input, NpyArray* markers,
                    NpyArray* strct, NpyArray* output)
{
    char *pl, *pm, *pi;
    int ll;
    npy_intp size, jj, hh, kk, maxval;
    npy_intp strides[WS_MAXDIM], coordinates[WS_MAXDIM];
    npy_intp *nstrides = NULL, nneigh, ssize;
    int i_contiguous, o_contiguous;
    NI_WatershedElement *temp = NULL, **first = NULL, **last = NULL;
    npy_bool *ps = NULL;
    NI_Iterator mi, ii, li;

    i_contiguous = NpyArray_ISCONTIGUOUS(input);
    o_contiguous = NpyArray_ISCONTIGUOUS(output);
    ssize = 1;
    for(ll = 0; ll < NpyArray_NDIM(strct); ll++)
        ssize *= NpyArray_DIM(strct, ll);
    if (NpyArray_NDIM(input) > WS_MAXDIM) {
        NpyErr_SetString(NpyExc_RuntimeError, "too many dimensions");
        goto exit;
    }
    size = 1;
    for(ll = 0; ll < NpyArray_NDIM(input); ll++)
        size *= NpyArray_DIM(input, ll);
    /* Storage for the temporary queue data. */
    temp = (NI_WatershedElement*)malloc(size * sizeof(NI_WatershedElement));
    if (!temp) {
        NpyErr_NoMemory();
        goto exit;
    }
    pi = (void *)NpyArray_DATA(input);
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    /* Initialization and find the maximum of the input. */
    maxval = 0;
    for(jj = 0; jj < size; jj++) {
        int ival = 0;
        switch(NpyArray_TYPE(input)) {
        CASE_GET_INPUT(ival, pi, npy_uint8);
        CASE_GET_INPUT(ival, pi, npy_uint16);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
            goto exit;
        }
        temp[jj].index = jj;
        temp[jj].done = 0;
        if (ival > maxval)
            maxval = ival;
        NI_ITERATOR_NEXT(ii, pi);
    }
    pi = (void *)NpyArray_DATA(input);
    /* Allocate and initialize the storage for the queue. */
    first = (NI_WatershedElement**)malloc((maxval + 1) *
        sizeof(NI_WatershedElement*));
    last = (NI_WatershedElement**)malloc((maxval + 1) *
        sizeof(NI_WatershedElement*));
    if (!first || !last) {
        NpyErr_NoMemory();
        goto exit;
    }
    for(hh = 0; hh <= maxval; hh++) {
        first[hh] = NULL;
        last[hh] = NULL;
    }
    if (!NI_InitPointIterator(markers, &mi))
        goto exit;
    if (!NI_InitPointIterator(output, &li))
        goto exit;
    pm = (void *)NpyArray_DATA(markers);
    pl = (void *)NpyArray_DATA(output);
    /* initialize all nodes */
    for(ll = 0; ll < NpyArray_NDIM(input); ll++)
        coordinates[ll] = 0;
    for(jj = 0; jj < size; jj++) {
        /* get marker */
        int label = 0;
        switch(NpyArray_TYPE(markers)) {
        CASE_GET_LABEL(label, pm, npy_uint8);
        CASE_GET_LABEL(label, pm, npy_uint16);
        CASE_GET_LABEL(label, pm, npy_uint32);
#if HAS_UINT64
        CASE_GET_LABEL(label, pm, npy_uint64);
#endif
        CASE_GET_LABEL(label, pm, npy_int8);
        CASE_GET_LABEL(label, pm, npy_int16);
        CASE_GET_LABEL(label, pm, npy_int32);
        CASE_GET_LABEL(label, pm, npy_int64);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
            goto exit;
        }
        switch(NpyArray_TYPE(output)) {
        CASE_PUT_LABEL(label, pl, npy_uint8);
        CASE_PUT_LABEL(label, pl, npy_uint16);
        CASE_PUT_LABEL(label, pl, npy_uint32);
#if HAS_UINT64
        CASE_PUT_LABEL(label, pl, npy_uint64);
#endif
        CASE_PUT_LABEL(label, pl, npy_int8);
        CASE_PUT_LABEL(label, pl, npy_int16);
        CASE_PUT_LABEL(label, pl, npy_int32);
        CASE_PUT_LABEL(label, pl, npy_int64);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
            goto exit;
        }
        NI_ITERATOR_NEXT2(mi, li, pm, pl);
        if (label != 0) {
            /* This node is a marker */
            temp[jj].cost = 0;
            if (!first[0]) {
                first[0] = &(temp[jj]);
                first[0]->next = NULL;
                first[0]->prev = NULL;
                last[0] = first[0];
            } else {
                if (label > 0) {
                    /* object markers are enqueued at the beginning, so they
                       are processed first. */
                    temp[jj].next = first[0];
                    temp[jj].prev = NULL;
                    first[0]->prev = &(temp[jj]);
                    first[0] = &(temp[jj]);
                } else {
                    /* background markers are enqueued at the end, so they are
                         processed after the object markers. */
                    temp[jj].next = NULL;
                    temp[jj].prev = last[0];
                    last[0]->next = &(temp[jj]);
                    last[0] = &(temp[jj]);
                }
            }
        } else {
            /* This node is not a marker */
            temp[jj].cost = maxval + 1;
            temp[jj].next = NULL;
            temp[jj].prev = NULL;
        }
        for(ll = NpyArray_NDIM(input) - 1; ll >= 0; ll--)
            if (coordinates[ll] < NpyArray_DIM(input, ll) - 1) {
                coordinates[ll]++;
                break;
            } else {
                coordinates[ll] = 0;
            }
    }

    pl = (void *)NpyArray_DATA(output);
    ps = (npy_bool*)NpyArray_DATA(strct);
    nneigh = 0;
    for (kk = 0; kk < ssize; kk++)
        if (ps[kk] && kk != (ssize / 2))
            ++nneigh;
    nstrides = (npy_intp*)malloc(nneigh * sizeof(npy_intp));
    if (!nstrides) {
        NpyErr_NoMemory();
        goto exit;
    }
    strides[NpyArray_NDIM(input) - 1] = 1;
    for(ll = NpyArray_NDIM(input) - 2; ll >= 0; ll--)
        strides[ll] = NpyArray_DIM(input, ll + 1) * strides[ll + 1];
    for(ll = 0; ll < NpyArray_NDIM(input); ll++)
        coordinates[ll] = -1;
    for(kk = 0; kk < nneigh; kk++)
        nstrides[kk] = 0;
    jj = 0;
    for(kk = 0; kk < ssize; kk++) {
        if (ps[kk]) {
            int offset = 0;
            for(ll = 0; ll < NpyArray_NDIM(input); ll++)
                offset += coordinates[ll] * strides[ll];
            if (offset != 0)
                nstrides[jj++] += offset;
        }
        for(ll = NpyArray_NDIM(input) - 1; ll >= 0; ll--)
            if (coordinates[ll] < 1) {
                coordinates[ll]++;
                break;
            } else {
                coordinates[ll] = -1;
            }
    }
    /* Propagation phase: */
    for(jj = 0; jj <= maxval; jj++) {
        while (first[jj]) {
            /* dequeue first element: */
            NI_WatershedElement *v = first[jj];
            first[jj] = first[jj]->next;
            if (first[jj])
                first[jj]->prev = NULL;
            v->prev = NULL;
            v->next = NULL;
            /* Mark element as done: */
            v->done = 1;
            /* Iterate over the neighbors of the element: */
            for(hh = 0; hh < nneigh; hh++) {
                npy_intp v_index = v->index, p_index = v->index, idx, cc;
                int qq, outside = 0;
                p_index += nstrides[hh];
                /* check if the neighbor is within the extent of the array: */
                idx = p_index;
                for (qq = 0; qq < NpyArray_NDIM(input); qq++) {
                    cc = idx / strides[qq];
                    if (cc < 0 || cc >= NpyArray_DIM(input, qq)) {
                        outside = 1;
                        break;
                    }
                    idx -= cc * strides[qq];
                }
                if (!outside) {
                    NI_WatershedElement *p = &(temp[p_index]);
                    if (!(p->done)) {
                        /* If the neighbor was not processed yet: */
                        int max, pval, vval, wvp, pcost, label, p_idx, v_idx;
                        switch(NpyArray_TYPE(input)) {
                        CASE_WINDEX1(v_index, p_index, strides, NpyArray_STRIDES(input),
                                                 NpyArray_NDIM(input), i_contiguous, p_idx, v_idx, pi,
                                                 vval, pval, npy_uint8);
                        CASE_WINDEX1(v_index, p_index, strides, NpyArray_STRIDES(input),
                                                 NpyArray_NDIM(input), i_contiguous, p_idx, v_idx, pi,
                                                 vval, pval, npy_uint16);
                        default:
                            NpyErr_SetString(NpyExc_RuntimeError,
                                            "data type not supported");
                            goto exit;
                        }
                        /* Calculate cost: */
                        wvp = pval - vval;
                        if (wvp < 0)
                            wvp = -wvp;
                        /* Find the maximum of this cost and the current
                             element cost: */
                        pcost = p->cost;
                        max = v->cost > wvp ? v->cost : wvp;
                        if (max < pcost) {
                            /* If this maximum is less than the neighbors cost,
                                 adapt the cost and the label of the neighbor: */
                            int idx;
                            p->cost = max;
                            switch(NpyArray_TYPE(output)) {
                            CASE_WINDEX2(v_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_uint8);
                            CASE_WINDEX2(v_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_uint16);
                            CASE_WINDEX2(v_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_uint32);
#if HAS_UINT64
                            CASE_WINDEX2(v_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_uint64);
#endif
                            CASE_WINDEX2(v_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_int8);
                            CASE_WINDEX2(v_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_int16);
                            CASE_WINDEX2(v_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_int32);
                            CASE_WINDEX2(v_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_int64);
                            default:
                                NpyErr_SetString(NpyExc_RuntimeError,
                                                                "data type not supported");
                                goto exit;
                            }
                            switch(NpyArray_TYPE(output)) {
                            CASE_WINDEX3(p_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_uint8);
                            CASE_WINDEX3(p_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_uint16);
                            CASE_WINDEX3(p_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_uint32);
#if HAS_UINT64
                            CASE_WINDEX3(p_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_uint64);
#endif
                            CASE_WINDEX3(p_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_int8);
                            CASE_WINDEX3(p_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_int16);
                            CASE_WINDEX3(p_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_int32);
                            CASE_WINDEX3(p_index, strides, NpyArray_STRIDES(output), NpyArray_NDIM(input),
                                                     idx, o_contiguous, label, pl, npy_int64);
                            default:
                                NpyErr_SetString(NpyExc_RuntimeError,
                                                                "data type not supported");
                                goto exit;
                            }
                            /* If the neighbor is in a queue, remove it: */
                            if (p->next || p->prev) {
                                NI_WatershedElement *prev = p->prev, *next = p->next;
                                if (first[pcost] == p)
                                    first[pcost] = next;
                                if (last[pcost] == p)
                                    last[pcost] = prev;
                                if (prev)
                                    prev->next = next;
                                if (next)
                                    next->prev = prev;
                            }
                            /* Insert the neighbor in the appropiate queue: */
                            if (label < 0) {
                                p->prev = last[max];
                                p->next = NULL;
                                if (last[max])
                                    last[max]->next = p;
                                last[max] = p;
                                if (!first[max])
                                    first[max] = p;
                            } else {
                                p->next = first[max];
                                p->prev = NULL;
                                if (first[max])
                                    first[max]->prev = p;
                                first[max] = p;
                                if (!last[max])
                                    last[max] = p;
                            }
                        }
                    }
                }
            }
        }
    }
 exit:
    if (temp)
        free(temp);
    if (first)
        free(first);
    if (last)
        free(last);
    if (nstrides)
        free(nstrides);
    return NpyErr_Occurred() ? 0 : 1;
}
