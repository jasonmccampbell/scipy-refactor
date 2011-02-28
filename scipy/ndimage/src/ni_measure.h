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

#ifndef NI_MEASURE_H
#define NI_MEASURE_H

#include "nd_image.h"

#ifdef __cplusplus
extern "C" {
#endif

/* structure for array regions to find objects: */
typedef struct {
    int start[NI_MAXDIM], end[NI_MAXDIM];
} NI_ObjectRegion;

int NI_Label(NpyArray*, NpyArray*, npy_intp*, NpyArray*);

int NI_FindObjects(NpyArray*, npy_intp, npy_intp*);

int NI_CenterOfMass(NpyArray*, NpyArray*, npy_intp, npy_intp,
                    npy_intp*, npy_intp, double*);

int NI_Histogram(NpyArray*, NpyArray*, npy_intp, npy_intp,
                 npy_intp*, npy_intp, NpyArray**, double, double,
                 npy_intp);

int NI_Statistics(NpyArray*, NpyArray*, npy_intp, npy_intp,
                  npy_intp*, npy_intp, double*, npy_intp*, double*,
                  double*, double*, npy_intp*, npy_intp*);

int NI_WatershedIFT(NpyArray*, NpyArray*, NpyArray*, 
                                        NpyArray*);

#ifdef __cplusplus
}
#endif

#endif
