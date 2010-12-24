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

#include <npy_api.h>
#include <npy_os.h>
#include "ni_support.h"
#include "ni_morphology.h"
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>

#define LIST_SIZE 100000

static void NpyErr_NoMemory(void)
{
    NpyErr_SetString(NpyExc_MemoryError, "no memory");
}


#define CASE_GET_MASK(_msk_value, _pm, _type) \
case t ## _type:                              \
    _msk_value = *(_type*)_pm ? 1 : 0;          \
    break

#define CASE_OUTPUT(_po, _out, _type) \
case t ## _type:                      \
    *(_type*)_po = (_type)_out;         \
    break

#define CASE_NI_ERODE_POINT(_pi, _out, _offsets, _filter_size, _type, \
                                                        _mv,  _border_value, _bv, _center_is_true,\
                                                        _true, _false, _changed)                  \
case t ## _type:                                                      \
{                                                                     \
    npy_intp _ii, _oo;                                                  \
    int _in = *(_type*)_pi ? 1 : 0;                                     \
    if (_mv) {                                                          \
        if (_center_is_true && _in == false) {                            \
            _changed = 0;                                                   \
            _out = _in;                                                     \
        } else {                                                          \
            _out = _true;                                                   \
            for(_ii = 0; _ii < _filter_size; _ii++) {                       \
                _oo = _offsets[_ii];                                          \
                if (_oo == _bv) {                                             \
                    if (!_border_value) {                                       \
                        _out = _false;                                            \
                        break;                                                    \
                    }                                                           \
                } else {                                                      \
                    int _nn = *(_type*)(_pi + _oo) ? _true : _false;            \
                    if (!_nn) {                                                 \
                        _out = _false;                                            \
                        break;                                                    \
                    }                                                           \
                }                                                             \
            }                                                               \
            _changed = _out != _in;                                         \
        }                                                                 \
    } else {                                                            \
        _out = _in;                                                       \
    }                                                                   \
}                                                                     \
break

int NI_BinaryErosion(NpyArray* input, NpyArray* strct,
                NpyArray* mask, NpyArray* output, int bdr_value,
                     npy_intp *origins, int invert, int center_is_true,
                     int* changed, NI_CoordinateList **coordinate_list)
{
    npy_intp struct_size = 0, *offsets = NULL, size, *oo, jj;
    npy_intp ssize, block_size = 0, *current = NULL, border_flag_value;
    int kk, true, false, msk_value;
    NI_Iterator ii, io, mi;
    NI_FilterIterator fi;
    npy_bool *ps, out = 0;
    char *pi, *po, *pm = NULL;
    NI_CoordinateBlock *block = NULL;

    ps = (npy_bool*)NpyArray_DATA(strct);
    ssize = 1;
    for(kk = 0; kk < NpyArray_NDIM(strct); kk++)
        ssize *= NpyArray_DIM(strct, kk);
    for(jj = 0; jj < ssize; jj++)
        if (ps[jj]) ++struct_size;
    if (mask) {
        if (!NI_InitPointIterator(mask, &mi))
            return 0;
        pm = (void *)NpyArray_DATA(mask);
    }
    /* calculate the filter offsets: */
    if (!NI_InitFilterOffsets(input, ps, NpyArray_DIMS(strct), origins,
                                    NI_EXTEND_CONSTANT, &offsets, &border_flag_value, NULL))
        goto exit;
    /* initialize input element iterator: */
    if (!NI_InitPointIterator(input, &ii))
        goto exit;
    /* initialize output element iterator: */
    if (!NI_InitPointIterator(output, &io))
        goto exit;
    /* initialize filter iterator: */
    if (!NI_InitFilterIterator(NpyArray_NDIM(input), NpyArray_DIMS(strct), struct_size,
                               NpyArray_DIMS(input), origins, &fi))
        goto exit;

    /* get data pointers an size: */
    pi = (void *)NpyArray_DATA(input);
    po = (void *)NpyArray_DATA(output);
    size = 1;
    for(kk = 0; kk < NpyArray_NDIM(input); kk++)
        size *= NpyArray_DIM(input, kk);
    if (invert) {
        bdr_value = bdr_value ? 0 : 1;
        true = 0;
        false = 1;
    } else {
        bdr_value = bdr_value ? 1 : 0;
        true = 1;
        false = 0;
    }
    if (coordinate_list) {
        block_size = LIST_SIZE / NpyArray_NDIM(input) / sizeof(int);
        if (block_size < 1)
            block_size = 1;
        if (block_size > size)
            block_size = size;
        *coordinate_list = NI_InitCoordinateList(block_size, NpyArray_NDIM(input));
        if (!*coordinate_list)
            goto exit;
    }
    /* iterator over the elements: */
    oo = offsets;
    *changed = 0;
    msk_value = 1;
    for(jj = 0; jj < size; jj++) {
        int pchange = 0;
        if (mask) {
            switch(NpyArray_TYPE(mask)) {
            CASE_GET_MASK(msk_value, pm, npy_bool);
            CASE_GET_MASK(msk_value, pm, npy_uint8);
            CASE_GET_MASK(msk_value, pm, npy_uint16);
            CASE_GET_MASK(msk_value, pm, npy_uint32);
#if HAS_UINT64
            CASE_GET_MASK(msk_value, pm, npy_uint64);
#endif
            CASE_GET_MASK(msk_value, pm, npy_int8);
            CASE_GET_MASK(msk_value, pm, npy_int16);
            CASE_GET_MASK(msk_value, pm, npy_int32);
            CASE_GET_MASK(msk_value, pm, npy_int64);
            CASE_GET_MASK(msk_value, pm, npy_float32);
            CASE_GET_MASK(msk_value, pm, npy_float64);
            default:
                NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
                return 0;
            }
        }
        switch (NpyArray_TYPE(input)) {
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_bool, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_uint8, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_uint16, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_uint32, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
#if HAS_UINT64
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_uint64, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
#endif
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_int8, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_int16, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_int32, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_int64, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_float32, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        CASE_NI_ERODE_POINT(pi, out, oo, struct_size, npy_float64, msk_value,
                                                bdr_value, border_flag_value, center_is_true,
                                                true, false, pchange);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
            goto exit;
        }
        switch (NpyArray_TYPE(output)) {
        CASE_OUTPUT(po, out, npy_bool);
        CASE_OUTPUT(po, out, npy_uint8);
        CASE_OUTPUT(po, out, npy_uint16);
        CASE_OUTPUT(po, out, npy_uint32);
#if HAS_UINT64
        CASE_OUTPUT(po, out, npy_uint64);
#endif
        CASE_OUTPUT(po, out, npy_int8);
        CASE_OUTPUT(po, out, npy_int16);
        CASE_OUTPUT(po, out, npy_int32);
        CASE_OUTPUT(po, out, npy_int64);
        CASE_OUTPUT(po, out, npy_float32);
        CASE_OUTPUT(po, out, npy_float64);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
            goto exit;
        }
        if (pchange) {
            *changed = 1;
            if (coordinate_list) {
                if (block == NULL ||  block->size == block_size) {
                    block = NI_CoordinateListAddBlock(*coordinate_list);
                    current = block->coordinates;
                }
                for(kk = 0; kk < NpyArray_NDIM(input); kk++)
                    *current++ = ii.coordinates[kk];
                block->size++;
            }
        }
        if (mask) {
            NI_FILTER_NEXT3(fi, ii, io, mi, oo, pi, po, pm);
        } else {
            NI_FILTER_NEXT2(fi, ii, io, oo, pi, po);
        }
    }

 exit:
    if (offsets)
        free(offsets);
    if (NpyErr_Occurred()) {
        if (coordinate_list) {
            NI_FreeCoordinateList(*coordinate_list);
            *coordinate_list = NULL;
        }
        return 0;
    } else {
        return 1;
    }
    return NpyErr_Occurred() ? 0 : 1;
}

#define CASE_ERODE_POINT2(_struct_size, _offsets, _coordinate_offsets, \
                                                    _pi, _oo, _irank, _list1, _list2,            \
                                                    _current_coors1, _current_coors2, _block1,   \
                                                    _block2, _bf_value, _true, _false, _type,    \
                                                    _mklist)                                     \
case t ## _type:                                                       \
{                                                                      \
    npy_intp _hh, _kk;                                                        \
    for(_hh = 0; _hh < _struct_size; _hh++) {                            \
        npy_intp _to = _offsets[_oo + _hh];                                   \
        if (_to != _bf_value && *(_type*)(_pi + _to) == _true) {           \
            if (_mklist) {                                                   \
                npy_intp *_tc = &(_coordinate_offsets[(_oo + _hh) * _irank]); \
                if (_block2 == NULL || _block2->size == _list2->block_size) {  \
                    _block2 = NI_CoordinateListAddBlock(_list2);                 \
                    _current_coors2 = _block2->coordinates;                      \
                }                                                              \
                for(_kk = 0; _kk < _irank; _kk++)                              \
                    *_current_coors2++ = _current_coors1[_kk] + _tc[_kk];        \
                _block2->size++;                                               \
            }                                                                \
            *(_type*)(_pi + _to) = _false;                                   \
        }                                                                  \
    }                                                                    \
}                                                                      \
break

int NI_BinaryErosion2(NpyArray* array, NpyArray* strct,
                      NpyArray* mask, int niter, npy_intp *origins,
                                            int invert, NI_CoordinateList **iclist)
{
    npy_intp struct_size = 0, *offsets = NULL, oo, jj, ssize;
    npy_intp *coordinate_offsets = NULL, size = 0;
    npy_intp *current_coordinates1 = NULL, *current_coordinates2 = NULL;
    npy_intp kk, border_flag_value, current = 0;
    int true, false;
    NI_Iterator ii, mi;
    NI_FilterIterator fi, ci;
    npy_bool *ps;
    char *pi, *ibase, *pm = NULL;
    NI_CoordinateBlock *block1 = NULL, *block2 = NULL;
    NI_CoordinateList *list1 = NULL, *list2 = NULL;

    ps = (npy_bool*)NpyArray_DATA(strct);
    ssize = 1;
    for(kk = 0; kk < NpyArray_NDIM(strct); kk++)
        ssize *= NpyArray_DIM(strct, kk);
    for(jj = 0; jj < ssize; jj++)
        if (ps[jj]) ++struct_size;

    /* calculate the filter offsets: */
    if (!NI_InitFilterOffsets(array, ps, NpyArray_DIMS(strct), origins,
                                                        NI_EXTEND_CONSTANT, &offsets,
                                                        &border_flag_value, &coordinate_offsets))
        goto exit;

    /* initialize input element iterator: */
    if (!NI_InitPointIterator(array, &ii))
        goto exit;

    /* initialize filter iterator: */
    if (!NI_InitFilterIterator(NpyArray_NDIM(array), NpyArray_DIMS(strct), struct_size,
                               NpyArray_DIMS(array), origins, &fi))
        goto exit;
    if (!NI_InitFilterIterator(NpyArray_NDIM(array), NpyArray_DIMS(strct),
                               struct_size * NpyArray_NDIM(array), NpyArray_DIMS(array),
                               origins, &ci))
        goto exit;

    /* get data pointers and size: */
    ibase = pi = (void *)NpyArray_DATA(array);

    if (invert) {
        true = 0;
        false = 1;
    } else {
        true = 1;
        false = 0;
    }

    if (mask) {
        /* iterator, data pointer and type of mask array: */
        if (!NI_InitPointIterator(mask, &mi))
            return 0;
        pm = (void *)NpyArray_DATA(mask);

        size = 1;
        for(kk = 0; kk < NpyArray_NDIM(array); kk++)
            size *= NpyArray_DIM(array, kk);

        for(jj = 0; jj < size; jj++) {
            if (*(npy_int8*)pm) {
                *(npy_int8*)pm = -1;
            } else {
                *(npy_int8*)pm = (npy_int8)*(npy_bool*)pi;
                *(npy_bool*)pi = false;
            }
            NI_ITERATOR_NEXT2(ii, mi,  pi, pm)
        }
        NI_ITERATOR_RESET(ii)
                pi = (void *)NpyArray_DATA(array);
    }

    list1 = NI_InitCoordinateList((*iclist)->block_size, (*iclist)->rank);
    list2 = NI_InitCoordinateList((*iclist)->block_size, (*iclist)->rank);
    if (!list1 || !list2)
        goto exit;
    if (NI_CoordinateListStealBlocks(list2, *iclist))
        goto exit;
    block2 = list2->blocks;
    jj = 0;
    while(block1 || block2) {
        int mklist = 1;
        if (!block1) {
            if (niter <= 0 || jj < niter) {
                if (NI_CoordinateListStealBlocks(list1, list2))
                    goto exit;
                block1 = list1->blocks;
                block2 = NULL;
                current_coordinates1 = block1->coordinates;
                current = 0;
                ++jj;
                mklist = niter <= 0 || jj < niter;
            } else {
                break;
            }
        }
        NI_ITERATOR_GOTO(ii, current_coordinates1, ibase, pi);
        NI_FILTER_GOTO(fi, ii, 0, oo);

        switch (NpyArray_TYPE(array)) {
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_bool, mklist);
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_uint8, mklist);
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_uint16, mklist);
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_uint32, mklist);
#if HAS_UINT64
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_uint64, mklist);
#endif
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_int8, mklist);
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_int16, mklist);
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_int32, mklist);
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_int64, mklist);
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_float32, mklist);
        CASE_ERODE_POINT2(struct_size, offsets, coordinate_offsets, pi,
                                            oo, NpyArray_NDIM(array), list1, list2, current_coordinates1,
                                            current_coordinates2, block1, block2,
                                            border_flag_value, true, false, npy_float64, mklist);
        default:
            NpyErr_SetString(NpyExc_RuntimeError, "data type not supported");
            goto exit;
        }

        ++current;
        if (current == block1->size) {
            block1 = NI_CoordinateListDeleteBlock(list1);
            if (block1) {
                current_coordinates1 = block1->coordinates;
                current = 0;
            }
        } else {
            current_coordinates1 += NpyArray_NDIM(array);
        }
    }

    if (mask) {
        NI_ITERATOR_RESET(ii)
        NI_ITERATOR_RESET(mi)
        pi = (void *)NpyArray_DATA(array);
        pm = (void *)NpyArray_DATA(mask);
        for(jj = 0; jj < size; jj++) {
            int value = *(npy_int8*)pm;
            if (value >= 0)
                *(npy_bool*)pi = value;
            NI_ITERATOR_NEXT2(ii, mi,  pi, pm)
        }
    }

 exit:
    if (offsets)
        free(offsets);
    if (coordinate_offsets)
        free(coordinate_offsets);
    NI_FreeCoordinateList(list1);
    NI_FreeCoordinateList(list2);
    if (NpyErr_Occurred()) {
        return 0;
    } else {
        return 1;
    }
    return NpyErr_Occurred() ? 0 : 1;
}


#define NI_DISTANCE_EUCLIDIAN  1
#define NI_DISTANCE_CITY_BLOCK 2
#define NI_DISTANCE_CHESSBOARD 3

typedef struct {
    npy_intp *coordinates;
    npy_intp index;
    void *next;
} NI_BorderElement;

int NI_DistanceTransformBruteForce(NpyArray* input, int metric,
                                                                     NpyArray *sampling_arr,
                                                                     NpyArray* distances,
                                                                     NpyArray* features)
{
    npy_intp size, jj, min_index = 0;
    int kk;
    NI_BorderElement *border_elements = NULL, *temp;
    NI_Iterator ii, di, fi;
    char *pi, *pd = NULL, *pf = NULL;
    npy_float64 *sampling = sampling_arr ? (void *)NpyArray_DATA(sampling_arr) : NULL;

    /* check the output arrays: */
    if (distances) {
            pd = (void *)NpyArray_DATA(distances);
        if (!NI_InitPointIterator(distances, &di))
            goto exit;
    }

    if (features) {
            pf = (void *)NpyArray_DATA(features);
        if (!NI_InitPointIterator(features, &fi))
            goto exit;
    }

    size = 1;
    for(kk = 0; kk < NpyArray_NDIM(input); kk++)
        size *= NpyArray_DIM(input, kk);
    pi = (void *)NpyArray_DATA(input);

    if (!NI_InitPointIterator(input, &ii))
        goto exit;

    for(jj = 0; jj < size; jj++) {
        if (*(npy_int8*)pi < 0) {
            temp = (NI_BorderElement*)malloc(sizeof(NI_BorderElement));
            if (!temp) {
                NpyErr_NoMemory();
                goto exit;
            }
            temp->next = border_elements;
            border_elements = temp;
            temp->index = jj;
            temp->coordinates = (npy_intp*)malloc(NpyArray_NDIM(input) * sizeof(npy_intp));
            for(kk = 0; kk < NpyArray_NDIM(input); kk++)
                    temp->coordinates[kk] = ii.coordinates[kk];
        }
        NI_ITERATOR_NEXT(ii, pi);
    }

    NI_ITERATOR_RESET(ii);
    pi = (void *)NpyArray_DATA(input);

    switch(metric) {
    case NI_DISTANCE_EUCLIDIAN:
        for(jj = 0; jj < size; jj++) {
            if (*(npy_int8*)pi > 0) {
                double distance = DBL_MAX;
                temp = border_elements;
                while(temp) {
                    double d = 0.0, t;
                    for(kk = 0; kk < NpyArray_NDIM(input); kk++) {
                        t = ii.coordinates[kk] - temp->coordinates[kk];
                        if (sampling)
                            t *= sampling[kk];
                        d += t * t;
                    }
                    if (d < distance) {
                        distance = d;
                        if (features)
                            min_index = temp->index;
                    }
                    temp = temp->next;
                }
                if (distances)
                    *(npy_float64*)pd = sqrt(distance);
                if (features)
                    *(npy_int32*)pf = min_index;
            } else {
                if (distances)
                    *(npy_float64*)pd = 0.0;
                if (features)
                    *(npy_int32*)pf = jj;
            }
            if (features && distances) {
                NI_ITERATOR_NEXT3(ii, di, fi, pi, pd, pf);
            } else if (distances) {
                NI_ITERATOR_NEXT2(ii, di, pi, pd);
            } else {
                NI_ITERATOR_NEXT2(ii, fi, pi, pf);
            }
        }
        break;
    case NI_DISTANCE_CITY_BLOCK:
    case NI_DISTANCE_CHESSBOARD:
        for(jj = 0; jj < size; jj++) {
            if (*(npy_int8*)pi > 0) {
                unsigned int distance = NPY_MAX_UINT;
                temp = border_elements;
                while(temp) {
                    unsigned int d = 0;
                    npy_intp t;
                    for(kk = 0; kk < NpyArray_NDIM(input); kk++) {
                        t = ii.coordinates[kk] - temp->coordinates[kk];
                        if (t < 0)
                            t = -t;
                        if (metric == NI_DISTANCE_CITY_BLOCK) {
                            d += t;
                        } else {
                            if ((unsigned int)t > d)
                                d = t;
                        }
                    }
                    if (d < distance) {
                        distance = d;
                        if (features)
                            min_index = temp->index;
                    }
                    temp = temp->next;
                }
                if (distances)
                    *(npy_uint32*)pd = distance;
                if (features)
                    *(npy_int32*)pf = min_index;
            } else {
                if (distances)
                    *(npy_uint32*)pd = 0;
                if (features)
                    *(npy_int32*)pf = jj;
            }
            if (features && distances) {
                NI_ITERATOR_NEXT3(ii, di, fi, pi, pd, pf);
            } else if (distances) {
                NI_ITERATOR_NEXT2(ii, di, pi, pd);
            } else {
                 NI_ITERATOR_NEXT2(ii, fi, pi, pf);
            }
        }
        break;
    default:
        NpyErr_SetString(NpyExc_RuntimeError,  "distance metric not supported");
        goto exit;
    }

 exit:
    while (border_elements) {
        temp = border_elements;
        border_elements = border_elements->next;
        if (temp->coordinates)
            free(temp->coordinates);
        free(temp);
    }
    return NpyErr_Occurred() ? 0 : 1;
}


int NI_DistanceTransformOnePass(NpyArray *strct,
                                NpyArray* distances,
                                NpyArray *features)
{
    int kk;
    npy_intp jj, ii, ssize, size, filter_size, mask_value, *oo;
    npy_intp *foffsets = NULL, *foo = NULL, *offsets = NULL;
    npy_bool *ps, *pf = NULL, *footprint = NULL;
    char *pd;
    NI_FilterIterator si, ti;
    NI_Iterator di, fi;

    ssize = 1;
    for(kk = 0; kk < NpyArray_NDIM(strct); kk++)
        ssize *= NpyArray_DIM(strct, kk);

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
    pd = (void *)NpyArray_DATA(distances);
    size = 1;
    for(kk = 0; kk < NpyArray_NDIM(distances); kk++)
        size *= NpyArray_DIM(distances, kk);
    if (!NI_InitPointIterator(distances, &di))
        goto exit;
    /* calculate the filter offsets: */
    if (!NI_InitFilterOffsets(distances, footprint, NpyArray_DIMS(strct), NULL,
                                                    NI_EXTEND_CONSTANT, &offsets, &mask_value, NULL))
        goto exit;
    /* initialize filter iterator: */
    if (!NI_InitFilterIterator(NpyArray_NDIM(distances), NpyArray_DIMS(strct),
                                                    filter_size, NpyArray_DIMS(distances), NULL, &si))
        goto exit;

    if (features) {
        npy_intp dummy;
        /* initialize point iterator: */
        pf = (void *)NpyArray_DATA(features);
        if (!NI_InitPointIterator(features, &fi))
            goto exit;
        /* calculate the filter offsets: */
        if (!NI_InitFilterOffsets(features, footprint, NpyArray_DIMS(strct),
                                                NULL, NI_EXTEND_CONSTANT, &foffsets, &dummy, NULL))
            goto exit;
        /* initialize filter iterator: */
        if (!NI_InitFilterIterator(NpyArray_NDIM(distances), NpyArray_DIMS(strct),
                                                     filter_size, NpyArray_DIMS(distances), NULL, &ti))
            goto exit;
    }
    /* iterator over the elements: */
    oo = offsets;
    if (features)
        foo = foffsets;
    for(jj = 0; jj < size; jj++) {
        npy_int32 value = *(npy_int32*)pd;
        if (value != 0) {
            npy_int32 min = value;
            npy_intp min_offset = 0;
            /* iterate over structuring element: */
            for(ii = 0; ii < filter_size; ii++) {
                npy_intp offset = oo[ii];
                npy_int32 tt = -1;
                if (offset < mask_value)
                    tt = *(npy_int32*)(pd + offset);
                if (tt >= 0) {
                    if ((min < 0) || (tt + 1 < min)) {
                        min = tt + 1;
                        if (features)
                            min_offset = foo[ii];
                    }
                }
            }
            *(npy_int32*)pd = min;
            if (features)
                *(npy_int32*)pf = *(npy_int32*)(pf + min_offset);
        }
        if (features) {
            NI_FILTER_NEXT(ti, fi, foo, pf);
        }
        NI_FILTER_NEXT(si, di, oo, pd);
    }

 exit:
    if (offsets) free(offsets);
    if (foffsets) free(foffsets);
    if (footprint)
        free(footprint);
    return NpyErr_Occurred() ? 0 : 1;
}

static void _VoronoiFT(char *pf, npy_intp len, npy_intp *coor, int rank,
                       int d, npy_intp stride, npy_intp cstride,
                       npy_intp **f, npy_intp *g, npy_float64 *sampling)
{
    npy_intp l = -1, ii, maxl, idx1, idx2;
    int jj;

    for(ii = 0; ii < len; ii++)
        for(jj = 0; jj < rank; jj++)
            f[ii][jj] = *(npy_int32*)(pf + ii * stride + cstride * jj);
    for(ii = 0; ii < len; ii++) {
        if (*(npy_int32*)(pf + ii * stride) >= 0) {
            double fd = f[ii][d];
            double wR = 0.0;
            for(jj = 0; jj < rank; jj++) {
                if (jj != d) {
                    double tw = f[ii][jj] - coor[jj];
                    if (sampling)
                        tw *= sampling[jj];
                    wR += tw * tw;
                }
            }
            while(l >= 1) {
                double a, b, c, uR = 0.0, vR = 0.0, f1;
                idx1 = g[l];
                f1 = f[idx1][d];
                idx2 = g[l - 1];
                a = f1 - f[idx2][d];
                b = fd - f1;
                if (sampling) {
                    a *= sampling[d];
                    b *= sampling[d];
                }
                c = a + b;
                for(jj = 0; jj < rank; jj++) {
                    if (jj != d) {
                        double cc = coor[jj];
                        double tu = f[idx2][jj] - cc;
                        double tv = f[idx1][jj] - cc;
                        if (sampling) {
                            tu *= sampling[jj];
                            tv *= sampling[jj];
                        }
                        uR += tu * tu;
                        vR += tv * tv;
                    }
                }
                if (c * vR - b * uR - a * wR - a * b * c <= 0.0)
                    break;
                --l;
            }
            ++l;
            g[l] = ii;
        }
    }
    maxl = l;
    if (maxl >= 0) {
        l = 0;
        for (ii = 0; ii < len; ii++) {
            double delta1 = 0.0, t;
            for(jj = 0; jj < rank; jj++) {
                t = jj == d ? f[g[l]][jj] - ii : f[g[l]][jj] - coor[jj];
                if (sampling)
                    t *= sampling[jj];
                delta1 += t * t;
            }
            while (l < maxl) {
                double delta2 = 0.0;
                for(jj = 0; jj < rank; jj++) {
                    t = jj == d ? f[g[l + 1]][jj] - ii : f[g[l + 1]][jj] - coor[jj];
                    if (sampling)
                        t *= sampling[jj];
                    delta2 += t * t;
                }
                if (delta1 <= delta2)
                    break;
                delta1 = delta2;
                ++l;
            }
            idx1 = g[l];
            for(jj = 0; jj < rank; jj++)
                *(npy_int32*)(pf + ii * stride + jj * cstride) = f[idx1][jj];
        }
    }
}


/* Recursive feature transform */
static void _ComputeFT(char *pi, char *pf, npy_intp *ishape,
                       npy_intp *istrides, npy_intp *fstrides, int rank,
                       int d, npy_intp *coor, npy_intp **f, npy_intp *g,
                                             NpyArray *features, npy_float64 *sampling)
{
    int kk;
    npy_intp jj;

    if (d == 0) {
        char *tf1 = pf;
        for(jj = 0; jj < ishape[0]; jj++) {
            if (*(npy_int8*)pi) {
                *(npy_int32*)tf1 = -1;
            } else {
                char *tf2 = tf1;
                *(npy_int32*)tf2 = jj;
                for(kk = 1; kk < rank; kk++) {
                    tf2 += fstrides[0];
                    *(npy_int32*)tf2 = coor[kk];
                }
            }
            pi += istrides[0];
            tf1 += fstrides[1];
        }
        _VoronoiFT(pf, ishape[0], coor, rank, 0, fstrides[1], fstrides[0], f,
                             g, sampling);
    } else {
        npy_uint32 axes = 0;
        char *tf = pf;
        npy_intp size = 1;
        NI_Iterator ii;

        for(jj = 0; jj < ishape[d]; jj++) {
            coor[d] = jj;
            _ComputeFT(pi, tf, ishape, istrides, fstrides, rank, d - 1, coor, f,
                                 g, features, sampling);
            pi += istrides[d];
            tf += fstrides[d + 1];
        }

        for(jj = 0; jj < d; jj++) {
            axes |= (npy_uint32)1 << (jj + 1);
            size *= ishape[jj];
        }
        NI_InitPointIterator(features, &ii);
        NI_SubspaceIterator(&ii, axes);
        tf = pf;
        for(jj = 0; jj < size; jj++) {
            for(kk = 0; kk < d; kk++)
                coor[kk] = ii.coordinates[kk];
            _VoronoiFT(tf, ishape[d], coor, rank, d, fstrides[d + 1],
                                 fstrides[0], f, g, sampling);
            NI_ITERATOR_NEXT(ii, tf);
        }
        for(kk = 0; kk < d; kk++)
            coor[kk] = 0;
    }
}

/* Exact euclidean feature transform, as described in: C. R. Maurer,
     Jr., R. Qi, V. Raghavan, "A linear time algorithm for computing
     exact euclidean distance transforms of binary images in arbitrary
     dimensions. IEEE Trans. PAMI 25, 265-270, 2003. */
int NI_EuclideanFeatureTransform(NpyArray* input,
                                                                 NpyArray *sampling_arr,
                                                                 NpyArray* features)
{
    int ii;
    npy_intp coor[NI_MAXDIM], mx = 0, jj;
    npy_intp *tmp = NULL, **f = NULL, *g = NULL;
    char *pi, *pf;
    npy_float64 *sampling = sampling_arr ? ((void *)NpyArray_DATA(sampling_arr)) : NULL;

    pi = (void *)NpyArray_DATA(input);
    pf = (void *)NpyArray_DATA(features);
    for(ii = 0; ii < NpyArray_NDIM(input); ii++) {
        coor[ii] = 0;
        if (NpyArray_DIM(input,ii) > mx)
            mx = NpyArray_DIM(input, ii);
    }

    /* Some temporaries */
    f = (npy_intp**)malloc(mx * sizeof(npy_intp*));
    g = (npy_intp*)malloc(mx * sizeof(npy_intp));
    tmp = (npy_intp*)malloc(mx * NpyArray_NDIM(input) * sizeof(npy_intp));
    if (!f || !g || !tmp) {
        NpyErr_NoMemory();
        goto exit;
    }
    for(jj = 0; jj < mx; jj++)
        f[jj] = tmp + jj * NpyArray_NDIM(input);

    /* First call of recursive feature transform */
    _ComputeFT(pi, pf, NpyArray_DIMS(input), NpyArray_STRIDES(input), NpyArray_STRIDES(features),
               NpyArray_NDIM(input), NpyArray_NDIM(input) - 1, coor, f, g, features, sampling);

 exit:
    if (f)
        free(f);
    if (g)
        free(g);
    if (tmp)
        free(tmp);

    return NpyErr_Occurred() ? 0 : 1;
}
