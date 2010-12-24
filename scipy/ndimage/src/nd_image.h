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

#ifndef ND_IMAGE_H
#define ND_IMAGE_H

#ifndef ND_IMPORT_ARRAY
#define NO_IMPORT_ARRAY
#endif

#include <npy_api.h>
#include <npy_arrayobject.h>

#undef NO_IMPORT_ARRAY


/* Eventually get rid of everything below this line */

typedef enum
{
         tAny=-1,
         tnpy_bool=NPY_BOOL,
         tnpy_int8=NPY_INT8,
         tnpy_uint8=NPY_UINT8,
         tnpy_int16=NPY_INT16,
         tnpy_uint16=NPY_UINT16,
         tnpy_int32=NPY_INT32,
         tnpy_uint32=NPY_UINT32,
         tnpy_int64=NPY_INT64,
         tnpy_uint64=NPY_UINT64,
         tnpy_float32=NPY_FLOAT32,
         tnpy_float64=NPY_FLOAT64,
         tnpy_complex64=NPY_COMPLEX64,
         tnpy_complex128=NPY_COMPLEX128,
         tnpy_object=NPY_OBJECT,        /* placeholder... does nothing */
         tMaxType=NPY_NTYPES,
         tDefault=NPY_FLOAT64,
         tnpy_ong=NPY_LONG,
} NumarrayType;

#define NI_MAXDIM NPY_MAXDIMS

#define MAXDIM NPY_MAXDIMS

#define HAS_UINT64 1



#ifdef ND_IMPORT_ARRAY

/* Numarray Helper Functions */


#define NUM_LITTLE_ENDIAN 0
#define NUM_BIG_ENDIAN 1

static int
NA_ByteOrder(void)
{
    unsigned int byteorder_test;
        byteorder_test = 1;
        if (*((char *) &byteorder_test))
                return NUM_LITTLE_ENDIAN;
        else
                return NUM_BIG_ENDIAN;
}


#endif /* ND_IMPORT_ARRAY */

#endif /* ND_IMAGE_H */
