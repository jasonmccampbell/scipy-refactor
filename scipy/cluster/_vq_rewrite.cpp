/* Cython code section 'h_code' */


#define PY_LONG_LONG long long

using namespace System::Collections;
using namespace System::Numerics;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime;
using namespace System::Security::Permissions;
using namespace System::Linq::Expressions;
using namespace Microsoft::Scripting::Actions;
using namespace Microsoft::Scripting::Runtime;
using namespace Microsoft::Scripting;
using namespace IronPython;
using namespace IronPython::Runtime;
using namespace IronPython::Runtime::Operations;

#define Py_None nullptr
typedef int Py_ssize_t; // IronPython uses "int" for sizes even on 64-bit platforms
#define PY_SSIZE_T_MAX 2147483647

enum class Markers { Default };

static CodeContext^ mk_empty_context(CodeContext^ ctx) {
  PythonDictionary^ dict = gcnew PythonDictionary;
  dict["__module__"] = "scipy.cluster._vq_rewrite";
  return gcnew CodeContext(dict, ctx->ModuleContext);
}
  #define PyBUF_SIMPLE 0
  #define PyBUF_WRITABLE 0x0001
  #define PyBUF_FORMAT 0x0004
  #define PyBUF_ND 0x0008
  #define PyBUF_STRIDES (0x0010 | PyBUF_ND)
  #define PyBUF_C_CONTIGUOUS (0x0020 | PyBUF_STRIDES)
  #define PyBUF_F_CONTIGUOUS (0x0040 | PyBUF_STRIDES)
  #define PyBUF_ANY_CONTIGUOUS (0x0080 | PyBUF_STRIDES)
  #define PyBUF_INDIRECT (0x0100 | PyBUF_STRIDES)


/* inline attribute */
#ifndef CYTHON_INLINE
  #if defined(__GNUC__)
    #define CYTHON_INLINE __inline__
  #elif defined(_MSC_VER)
    #define CYTHON_INLINE __inline
  #elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define CYTHON_INLINE inline
  #else
    #define CYTHON_INLINE 
  #endif
#endif

/* unused attribute */
#ifndef CYTHON_UNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define CYTHON_UNUSED __attribute__ ((__unused__)) 
#   else
#     define CYTHON_UNUSED
#   endif
# elif defined(__ICC) || defined(__INTEL_COMPILER)
#   define CYTHON_UNUSED __attribute__ ((__unused__)) 
# else
#   define CYTHON_UNUSED 
# endif
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif

#if defined(WIN32) || defined(MS_WINDOWS)
#define _USE_MATH_DEFINES
#endif
#include <math.h>
#define __PYX_HAVE_API__scipy__cluster___vq_rewrite
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "math.h"
#include "npy_math.h"

#ifdef __GNUC__
/* Test for GCC > 2.95 */
#if __GNUC__ > 2 || (__GNUC__ == 2 && (__GNUC_MINOR__ > 95)) 
#define likely(x)   __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)
#else /* __GNUC__ > 2 ... */
#define likely(x)   (x)
#define unlikely(x) (x)
#endif /* __GNUC__ > 2 ... */
#else /* __GNUC__ */
#define likely(x)   (x)
#define unlikely(x) (x)
#endif /* __GNUC__ */
    
static const char * __pyx_cfilenm= __FILE__;

/* Cython code section 'filename_table' */

static const char *__pyx_f[] = {
  0
};
/* Cython code section 'utility_code_proto_before_types' */
/* Cython code section 'numeric_typedefs' */

typedef int __pyx_t_5numpy_npy_int;

typedef double __pyx_t_5numpy_double_t;

typedef int __pyx_t_5numpy_npy_intp;

typedef signed char __pyx_t_5numpy_npy_int8;

typedef signed short __pyx_t_5numpy_npy_int16;

typedef signed int __pyx_t_5numpy_npy_int32;

typedef signed PY_LONG_LONG __pyx_t_5numpy_npy_int64;

typedef unsigned char __pyx_t_5numpy_npy_uint8;

typedef unsigned short __pyx_t_5numpy_npy_uint16;

typedef unsigned int __pyx_t_5numpy_npy_uint32;

typedef unsigned PY_LONG_LONG __pyx_t_5numpy_npy_uint64;

typedef float __pyx_t_5numpy_npy_float32;

typedef double __pyx_t_5numpy_npy_float64;

typedef __pyx_t_5numpy_npy_intp __pyx_t_5numpy_intp_t;

typedef __pyx_t_5numpy_npy_int8 __pyx_t_5numpy_int8_t;

typedef __pyx_t_5numpy_npy_int16 __pyx_t_5numpy_int16_t;

typedef __pyx_t_5numpy_npy_int32 __pyx_t_5numpy_int32_t;

typedef __pyx_t_5numpy_npy_int64 __pyx_t_5numpy_int64_t;

typedef __pyx_t_5numpy_npy_uint8 __pyx_t_5numpy_uint8_t;

typedef __pyx_t_5numpy_npy_uint16 __pyx_t_5numpy_uint16_t;

typedef __pyx_t_5numpy_npy_uint32 __pyx_t_5numpy_uint32_t;

typedef __pyx_t_5numpy_npy_uint64 __pyx_t_5numpy_uint64_t;

typedef __pyx_t_5numpy_npy_float32 __pyx_t_5numpy_float32_t;

typedef __pyx_t_5numpy_npy_float64 __pyx_t_5numpy_float64_t;

typedef __pyx_t_5numpy_float64_t __pyx_t_5scipy_7cluster_11_vq_rewrite_float64_t;

typedef __pyx_t_5numpy_float32_t __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t;

typedef __pyx_t_5numpy_int32_t __pyx_t_5scipy_7cluster_11_vq_rewrite_int32_t;
/* Cython code section 'complex_type_declarations' */
/* Cython code section 'type_declarations' */

/* Type declarations */

typedef void (*__pyx_t_5numpy_PyUFuncGenericFunction)(char **, __pyx_t_5numpy_npy_intp *, __pyx_t_5numpy_npy_intp *, void *);
/* Cython code section 'utility_code_proto' */
/* Cython code section 'module_declarations' */
/* Module declarations from numpy */
/* Module declarations from numpy */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int);
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int);
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_EMPTY(int, __pyx_t_5numpy_intp_t *, int, int);
static CYTHON_INLINE System::Object^ PyArray_EMPTY(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *);
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5numpy_PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int);
static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void *__pyx_delegate_t_5numpy_PyArray_DATA(NumpyDotNet::ndarray^);
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_intp_t *__pyx_delegate_t_5numpy_PyArray_DIMS(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_intp_t __pyx_delegate_t_5numpy_PyArray_SIZE(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^);
static CYTHON_INLINE System::Object^ PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^);
static CYTHON_INLINE System::Object^ PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_Check(System::Object^);
static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_NDIM(System::Object^);
static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5numpy_import_array(void);
static CYTHON_INLINE void import_array(void); /*proto*/
/* Module declarations from scipy.cluster._vq_rewrite */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_7cluster_11_vq_rewrite_float_tvq(__pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *, __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *, int, int, int, __pyx_t_5numpy_npy_intp *, __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *);
static void float_tvq(__pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *, __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *, int, int, int, __pyx_t_5numpy_npy_intp *, __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.cluster._vq_rewrite"

/* Implementation of scipy.cluster._vq_rewrite */
namespace clr__vq_rewrite {
  public ref class module__vq_rewrite sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyArray_FROM_OF_82_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_82_30;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyArray_FROM_OF_83_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_83_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_85_12;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_85_18;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_85_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_86_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_86_26;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_86_26;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_87_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_87_27;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_87_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_88_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_88_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_88_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_89_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_89_27;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_89_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_92_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_94_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_94_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_94_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_95_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_95_30;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_95_30;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_96_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_96_35;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_96_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_97_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_97_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_97_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_99_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_99_35;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_99_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_102_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_106_62;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_106_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_115_17;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dtype_115_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_115_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dtype_117_10;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_float32_117_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_117_17;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_117_17;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_199_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_199_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_201_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_201_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_207_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_207_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_209_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_209_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_218_54;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_218_54;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_222_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_222_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_226_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_226_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_230_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_230_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_235_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_FromAny_235_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_235_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_238_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_238_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ior_239_14;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_240_77;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_243_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_246_14;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_1;
static int^ __pyx_int_2;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":29
 * np.import_array()
 * 
 * cdef void float_tvq(float32_t *obs, float32_t *code_book,             # <<<<<<<<<<<<<<
 *                    int ncodes, int nfeat, int nobs,
 *                    np.npy_intp *codes, float32_t *low_dist):
 */

static  void float_tvq(__pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *__pyx_v_obs, __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *__pyx_v_code_book, int __pyx_v_ncodes, int __pyx_v_nfeat, int __pyx_v_nobs, __pyx_t_5numpy_npy_intp *__pyx_v_codes, __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *__pyx_v_low_dist) {
  __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t __pyx_v_dist;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t __pyx_v_diff;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_int32_t __pyx_v_obs_index;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_int32_t __pyx_v_code_index;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_int32_t __pyx_v_feature;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_int32_t __pyx_v_offset;
  int __pyx_v_codebook_pos;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *__pyx_v_current_obs;
  int __pyx_t_1;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_int32_t __pyx_t_2;
  int __pyx_t_3;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_int32_t __pyx_t_4;
  int __pyx_t_5;
  __pyx_t_5scipy_7cluster_11_vq_rewrite_int32_t __pyx_t_6;
  int __pyx_t_7;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":39
 *     cdef float32_t dist, diff
 *     cdef int32_t obs_index, code_index, feature
 *     cdef int32_t offset = 0             # <<<<<<<<<<<<<<
 * 
 *     # Index and pointer to keep track of the current position in
 */
  __pyx_v_offset = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":46
 *     cdef float32_t *current_obs
 * 
 *     for obs_index in range(nobs):             # <<<<<<<<<<<<<<
 *         codebook_pos = 0
 *         low_dist[obs_index] = NPY_INFINITY
 */
  __pyx_t_1 = __pyx_v_nobs;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_obs_index = __pyx_t_2;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":47
 * 
 *     for obs_index in range(nobs):
 *         codebook_pos = 0             # <<<<<<<<<<<<<<
 *         low_dist[obs_index] = NPY_INFINITY
 *         for code_index in range(ncodes):
 */
    __pyx_v_codebook_pos = 0;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":48
 *     for obs_index in range(nobs):
 *         codebook_pos = 0
 *         low_dist[obs_index] = NPY_INFINITY             # <<<<<<<<<<<<<<
 *         for code_index in range(ncodes):
 *             dist = 0
 */
    (__pyx_v_low_dist[__pyx_v_obs_index]) = NPY_INFINITY;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":49
 *         codebook_pos = 0
 *         low_dist[obs_index] = NPY_INFINITY
 *         for code_index in range(ncodes):             # <<<<<<<<<<<<<<
 *             dist = 0
 * 
 */
    __pyx_t_3 = __pyx_v_ncodes;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_code_index = __pyx_t_4;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":50
 *         low_dist[obs_index] = NPY_INFINITY
 *         for code_index in range(ncodes):
 *             dist = 0             # <<<<<<<<<<<<<<
 * 
 *             # Distance between code_book[code_index] and obs[obs_index]
 */
      __pyx_v_dist = 0.0;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":53
 * 
 *             # Distance between code_book[code_index] and obs[obs_index]
 *             for feature in range(nfeat):             # <<<<<<<<<<<<<<
 * 
 *                 # Use current_obs pointer and codebook_pos to minimize
 */
      __pyx_t_5 = __pyx_v_nfeat;
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_feature = __pyx_t_6;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":57
 *                 # Use current_obs pointer and codebook_pos to minimize
 *                 # pointer arithmetic necessary (i.e. no multiplications)
 *                 current_obs = &(obs[offset])             # <<<<<<<<<<<<<<
 *                 diff = code_book[codebook_pos] - current_obs[feature]
 *                 dist += diff * diff
 */
        __pyx_v_current_obs = (&(__pyx_v_obs[__pyx_v_offset]));

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":58
 *                 # pointer arithmetic necessary (i.e. no multiplications)
 *                 current_obs = &(obs[offset])
 *                 diff = code_book[codebook_pos] - current_obs[feature]             # <<<<<<<<<<<<<<
 *                 dist += diff * diff
 *                 codebook_pos += 1
 */
        __pyx_v_diff = ((__pyx_v_code_book[__pyx_v_codebook_pos]) - (__pyx_v_current_obs[__pyx_v_feature]));

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":59
 *                 current_obs = &(obs[offset])
 *                 diff = code_book[codebook_pos] - current_obs[feature]
 *                 dist += diff * diff             # <<<<<<<<<<<<<<
 *                 codebook_pos += 1
 * 
 */
        __pyx_v_dist += (__pyx_v_diff * __pyx_v_diff);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":60
 *                 diff = code_book[codebook_pos] - current_obs[feature]
 *                 dist += diff * diff
 *                 codebook_pos += 1             # <<<<<<<<<<<<<<
 * 
 *             dist = sqrtf(dist)
 */
        __pyx_v_codebook_pos += 1;
      }

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":62
 *                 codebook_pos += 1
 * 
 *             dist = sqrtf(dist)             # <<<<<<<<<<<<<<
 * 
 *             # Replace the code assignment and record distance if necessary
 */
      __pyx_v_dist = sqrtf(__pyx_v_dist);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":65
 * 
 *             # Replace the code assignment and record distance if necessary
 *             if dist < low_dist[obs_index]:             # <<<<<<<<<<<<<<
 *                 codes[obs_index] = code_index
 *                 low_dist[obs_index] = dist
 */
      __pyx_t_7 = (__pyx_v_dist < (__pyx_v_low_dist[__pyx_v_obs_index]));
      if (__pyx_t_7) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":66
 *             # Replace the code assignment and record distance if necessary
 *             if dist < low_dist[obs_index]:
 *                 codes[obs_index] = code_index             # <<<<<<<<<<<<<<
 *                 low_dist[obs_index] = dist
 * 
 */
        (__pyx_v_codes[__pyx_v_obs_index]) = __pyx_v_code_index;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":67
 *             if dist < low_dist[obs_index]:
 *                 codes[obs_index] = code_index
 *                 low_dist[obs_index] = dist             # <<<<<<<<<<<<<<
 * 
 *         # Update the offset of the current observation
 */
        (__pyx_v_low_dist[__pyx_v_obs_index]) = __pyx_v_dist;
        goto __pyx_L9;
      }
      __pyx_L9:;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":70
 * 
 *         # Update the offset of the current observation
 *         offset += nfeat             # <<<<<<<<<<<<<<
 * 
 * def vq(np.ndarray obs, np.ndarray codes):
 */
    __pyx_v_offset += __pyx_v_nfeat;
  }

}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":72
 *         offset += nfeat
 * 
 * def vq(np.ndarray obs, np.ndarray codes):             # <<<<<<<<<<<<<<
 *     """
 *     Vector quantization ndarray wrapper.
 */

static System::Object^ vq(System::Object^ obs, System::Object^ codes) {
  NumpyDotNet::ndarray^ __pyx_v_obs = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_codes = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_v_nobs;
  __pyx_t_5numpy_npy_intp __pyx_v_ncodes;
  __pyx_t_5numpy_npy_intp __pyx_v_nfeat;
  __pyx_t_5numpy_npy_intp __pyx_v_nfeat_codes;
  NumpyDotNet::ndarray^ __pyx_v_obs_a;
  NumpyDotNet::ndarray^ __pyx_v_codes_a;
  NumpyDotNet::ndarray^ __pyx_v_outcodes;
  NumpyDotNet::ndarray^ __pyx_v_outdists;
  int __pyx_v_flags;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  __pyx_t_5numpy_npy_intp __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  __pyx_t_5numpy_npy_intp __pyx_t_7;
  __pyx_t_5numpy_npy_intp __pyx_t_8;
  __pyx_t_5numpy_npy_intp __pyx_t_9;
  __pyx_t_5numpy_npy_intp __pyx_t_10;
  System::Object^ __pyx_t_11 = nullptr;
  __pyx_v_obs = ((NumpyDotNet::ndarray^)obs);
  __pyx_v_codes = ((NumpyDotNet::ndarray^)codes);
  __pyx_v_obs_a = nullptr;
  __pyx_v_codes_a = nullptr;
  __pyx_v_outcodes = nullptr;
  __pyx_v_outdists = nullptr;
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_obs) == nullptr)) {
    throw PythonOps::TypeError("Argument 'obs' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_codes) == nullptr)) {
    throw PythonOps::TypeError("Argument 'codes' has incorrect type");
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":79
 *     cdef np.ndarray obs_a, codes_a
 *     cdef np.ndarray outcodes, outdists
 *     cdef int flags = np.NPY_CONTIGUOUS | np.NPY_NOTSWAPPED | np.NPY_ALIGNED             # <<<<<<<<<<<<<<
 * 
 *     # Ensure the arrays are contiguous - done in C to minimize overhead.
 */
  __pyx_v_flags = ((NPY_CONTIGUOUS | NPY_NOTSWAPPED) | NPY_ALIGNED);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":82
 * 
 *     # Ensure the arrays are contiguous - done in C to minimize overhead.
 *     obs_a = np.PyArray_FROM_OF(obs, flags)             # <<<<<<<<<<<<<<
 *     codes_a = np.PyArray_FROM_OF(codes, flags)
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_PyArray_FROM_OF_82_14->Target(__site_get_PyArray_FROM_OF_82_14, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __pyx_v_flags;
  __pyx_t_3 = __site_call2_82_30->Target(__site_call2_82_30, __pyx_context, __pyx_t_2, ((System::Object^)__pyx_v_obs), __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_obs_a = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":83
 *     # Ensure the arrays are contiguous - done in C to minimize overhead.
 *     obs_a = np.PyArray_FROM_OF(obs, flags)
 *     codes_a = np.PyArray_FROM_OF(codes, flags)             # <<<<<<<<<<<<<<
 * 
 *     if obs_a.ndim == 2:
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_PyArray_FROM_OF_83_16->Target(__site_get_PyArray_FROM_OF_83_16, __pyx_t_3, __pyx_context);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __pyx_v_flags;
  __pyx_t_2 = __site_call2_83_32->Target(__site_call2_83_32, __pyx_context, __pyx_t_1, ((System::Object^)__pyx_v_codes), __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  if (__pyx_t_2 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_codes_a = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":85
 *     codes_a = np.PyArray_FROM_OF(codes, flags)
 * 
 *     if obs_a.ndim == 2:             # <<<<<<<<<<<<<<
 *         nobs = obs_a.shape[0]
 *         nfeat = obs_a.shape[1]
 */
  __pyx_t_2 = __site_get_ndim_85_12->Target(__site_get_ndim_85_12, ((System::Object^)__pyx_v_obs_a), __pyx_context);
  __pyx_t_3 = __site_op_eq_85_18->Target(__site_op_eq_85_18, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_85_18->Target(__site_istrue_85_18, __pyx_t_3);
  __pyx_t_3 = nullptr;
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":86
 * 
 *     if obs_a.ndim == 2:
 *         nobs = obs_a.shape[0]             # <<<<<<<<<<<<<<
 *         nfeat = obs_a.shape[1]
 *     elif obs_a.ndim == 1:
 */
    __pyx_t_3 = __site_get_shape_86_20->Target(__site_get_shape_86_20, ((System::Object^)__pyx_v_obs_a), __pyx_context);
    __pyx_t_2 = __site_getindex_86_26->Target(__site_getindex_86_26, __pyx_t_3, ((System::Object^)0));
    __pyx_t_3 = nullptr;
    __pyx_t_5 = __site_cvt___pyx_t_5numpy_npy_intp_86_26->Target(__site_cvt___pyx_t_5numpy_npy_intp_86_26, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_nobs = __pyx_t_5;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":87
 *     if obs_a.ndim == 2:
 *         nobs = obs_a.shape[0]
 *         nfeat = obs_a.shape[1]             # <<<<<<<<<<<<<<
 *     elif obs_a.ndim == 1:
 *         nfeat = obs_a.shape[0]
 */
    __pyx_t_2 = __site_get_shape_87_21->Target(__site_get_shape_87_21, ((System::Object^)__pyx_v_obs_a), __pyx_context);
    __pyx_t_3 = __site_getindex_87_27->Target(__site_getindex_87_27, __pyx_t_2, ((System::Object^)1));
    __pyx_t_2 = nullptr;
    __pyx_t_6 = __site_cvt___pyx_t_5numpy_npy_intp_87_27->Target(__site_cvt___pyx_t_5numpy_npy_intp_87_27, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_nfeat = __pyx_t_6;
    goto __pyx_L5;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":88
 *         nobs = obs_a.shape[0]
 *         nfeat = obs_a.shape[1]
 *     elif obs_a.ndim == 1:             # <<<<<<<<<<<<<<
 *         nfeat = obs_a.shape[0]
 *         nobs = 1
 */
  __pyx_t_3 = __site_get_ndim_88_14->Target(__site_get_ndim_88_14, ((System::Object^)__pyx_v_obs_a), __pyx_context);
  __pyx_t_2 = __site_op_eq_88_20->Target(__site_op_eq_88_20, __pyx_t_3, __pyx_int_1);
  __pyx_t_3 = nullptr;
  __pyx_t_4 = __site_istrue_88_20->Target(__site_istrue_88_20, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":89
 *         nfeat = obs_a.shape[1]
 *     elif obs_a.ndim == 1:
 *         nfeat = obs_a.shape[0]             # <<<<<<<<<<<<<<
 *         nobs = 1
 *     else:
 */
    __pyx_t_2 = __site_get_shape_89_21->Target(__site_get_shape_89_21, ((System::Object^)__pyx_v_obs_a), __pyx_context);
    __pyx_t_3 = __site_getindex_89_27->Target(__site_getindex_89_27, __pyx_t_2, ((System::Object^)0));
    __pyx_t_2 = nullptr;
    __pyx_t_7 = __site_cvt___pyx_t_5numpy_npy_intp_89_27->Target(__site_cvt___pyx_t_5numpy_npy_intp_89_27, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_nfeat = __pyx_t_7;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":90
 *     elif obs_a.ndim == 1:
 *         nfeat = obs_a.shape[0]
 *         nobs = 1             # <<<<<<<<<<<<<<
 *     else:
 *         raise ValueError('obs must have 0 < obs.ndim <= 2')
 */
    __pyx_v_nobs = 1;
    goto __pyx_L5;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":92
 *         nobs = 1
 *     else:
 *         raise ValueError('obs must have 0 < obs.ndim <= 2')             # <<<<<<<<<<<<<<
 * 
 *     if codes_a.ndim == 2:
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_92_24->Target(__site_call1_92_24, __pyx_context, __pyx_t_3, ((System::Object^)"obs must have 0 < obs.ndim <= 2"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":94
 *         raise ValueError('obs must have 0 < obs.ndim <= 2')
 * 
 *     if codes_a.ndim == 2:             # <<<<<<<<<<<<<<
 *         ncodes = codes_a.shape[0]
 *         nfeat_codes = codes_a.shape[1]
 */
  __pyx_t_2 = __site_get_ndim_94_14->Target(__site_get_ndim_94_14, ((System::Object^)__pyx_v_codes_a), __pyx_context);
  __pyx_t_3 = __site_op_eq_94_20->Target(__site_op_eq_94_20, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_94_20->Target(__site_istrue_94_20, __pyx_t_3);
  __pyx_t_3 = nullptr;
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":95
 * 
 *     if codes_a.ndim == 2:
 *         ncodes = codes_a.shape[0]             # <<<<<<<<<<<<<<
 *         nfeat_codes = codes_a.shape[1]
 *     elif codes.ndim == 1:
 */
    __pyx_t_3 = __site_get_shape_95_24->Target(__site_get_shape_95_24, ((System::Object^)__pyx_v_codes_a), __pyx_context);
    __pyx_t_2 = __site_getindex_95_30->Target(__site_getindex_95_30, __pyx_t_3, ((System::Object^)0));
    __pyx_t_3 = nullptr;
    __pyx_t_8 = __site_cvt___pyx_t_5numpy_npy_intp_95_30->Target(__site_cvt___pyx_t_5numpy_npy_intp_95_30, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_ncodes = __pyx_t_8;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":96
 *     if codes_a.ndim == 2:
 *         ncodes = codes_a.shape[0]
 *         nfeat_codes = codes_a.shape[1]             # <<<<<<<<<<<<<<
 *     elif codes.ndim == 1:
 *         # Treat one dimensional arrays as row vectors.
 */
    __pyx_t_2 = __site_get_shape_96_29->Target(__site_get_shape_96_29, ((System::Object^)__pyx_v_codes_a), __pyx_context);
    __pyx_t_3 = __site_getindex_96_35->Target(__site_getindex_96_35, __pyx_t_2, ((System::Object^)1));
    __pyx_t_2 = nullptr;
    __pyx_t_9 = __site_cvt___pyx_t_5numpy_npy_intp_96_35->Target(__site_cvt___pyx_t_5numpy_npy_intp_96_35, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_nfeat_codes = __pyx_t_9;
    goto __pyx_L6;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":97
 *         ncodes = codes_a.shape[0]
 *         nfeat_codes = codes_a.shape[1]
 *     elif codes.ndim == 1:             # <<<<<<<<<<<<<<
 *         # Treat one dimensional arrays as row vectors.
 *         nfeat_codes = codes_a.shape[0]
 */
  __pyx_t_3 = __site_get_ndim_97_14->Target(__site_get_ndim_97_14, ((System::Object^)__pyx_v_codes), __pyx_context);
  __pyx_t_2 = __site_op_eq_97_20->Target(__site_op_eq_97_20, __pyx_t_3, __pyx_int_1);
  __pyx_t_3 = nullptr;
  __pyx_t_4 = __site_istrue_97_20->Target(__site_istrue_97_20, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":99
 *     elif codes.ndim == 1:
 *         # Treat one dimensional arrays as row vectors.
 *         nfeat_codes = codes_a.shape[0]             # <<<<<<<<<<<<<<
 *         ncodes = 1
 *     else:
 */
    __pyx_t_2 = __site_get_shape_99_29->Target(__site_get_shape_99_29, ((System::Object^)__pyx_v_codes_a), __pyx_context);
    __pyx_t_3 = __site_getindex_99_35->Target(__site_getindex_99_35, __pyx_t_2, ((System::Object^)0));
    __pyx_t_2 = nullptr;
    __pyx_t_10 = __site_cvt___pyx_t_5numpy_npy_intp_99_35->Target(__site_cvt___pyx_t_5numpy_npy_intp_99_35, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_nfeat_codes = __pyx_t_10;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":100
 *         # Treat one dimensional arrays as row vectors.
 *         nfeat_codes = codes_a.shape[0]
 *         ncodes = 1             # <<<<<<<<<<<<<<
 *     else:
 *         raise ValueError('codes must have 0 < codes.ndim <= 2')
 */
    __pyx_v_ncodes = 1;
    goto __pyx_L6;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":102
 *         ncodes = 1
 *     else:
 *         raise ValueError('codes must have 0 < codes.ndim <= 2')             # <<<<<<<<<<<<<<
 * 
 *     # Ensure the two arrays have the same number of features (columns).
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_102_24->Target(__site_call1_102_24, __pyx_context, __pyx_t_3, ((System::Object^)"codes must have 0 < codes.ndim <= 2"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":105
 * 
 *     # Ensure the two arrays have the same number of features (columns).
 *     if nfeat_codes != nfeat:             # <<<<<<<<<<<<<<
 *         raise ValueError('obs and codes must have same # of ' + \
 *                          'features (columns)')
 */
  __pyx_t_4 = (__pyx_v_nfeat_codes != __pyx_v_nfeat);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":106
 *     # Ensure the two arrays have the same number of features (columns).
 *     if nfeat_codes != nfeat:
 *         raise ValueError('obs and codes must have same # of ' + \             # <<<<<<<<<<<<<<
 *                          'features (columns)')
 * 
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_op_add_106_62->Target(__site_op_add_106_62, ((System::Object^)"obs and codes must have same # of "), ((System::Object^)"features (columns)"));
    __pyx_t_1 = __site_call1_106_24->Target(__site_call1_106_24, __pyx_context, __pyx_t_2, ((System::Object^)__pyx_t_3));
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":112
 *     # the resulting array has elements big enough to store indices
 *     # on that platform. Hence, PyArray_INTP.
 *     outcodes = np.PyArray_EMPTY(1, &nobs, np.NPY_INTP, 0)             # <<<<<<<<<<<<<<
 * 
 *     # This we just want to match the dtype of the input, so np.empty is fine.
 */
  __pyx_t_1 = PyArray_EMPTY(1, (&__pyx_v_nobs), NPY_INTP, 0); 
  if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_outcodes = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":115
 * 
 *     # This we just want to match the dtype of the input, so np.empty is fine.
 *     outdists = np.empty((nobs,), dtype=obs.dtype)             # <<<<<<<<<<<<<<
 * 
 *     if obs.dtype == np.float32:
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_3 = __site_get_empty_115_17->Target(__site_get_empty_115_17, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __pyx_v_nobs;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_get_dtype_115_42->Target(__site_get_dtype_115_42, ((System::Object^)__pyx_v_obs), __pyx_context);
  __pyx_t_11 = __site_call1_dtype_115_23->Target(__site_call1_dtype_115_23, __pyx_context, __pyx_t_3, __pyx_t_2, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  if (__pyx_t_11 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_11) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_outdists = ((NumpyDotNet::ndarray^)__pyx_t_11);
  __pyx_t_11 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":117
 *     outdists = np.empty((nobs,), dtype=obs.dtype)
 * 
 *     if obs.dtype == np.float32:             # <<<<<<<<<<<<<<
 *         float_tvq(<float32_t *>np.PyArray_DATA(obs_a), <float32_t *>np.PyArray_DATA(codes_a),
 *                   ncodes, nfeat, nobs, <np.npy_intp *>np.PyArray_DATA(outcodes),
 */
  __pyx_t_11 = __site_get_dtype_117_10->Target(__site_get_dtype_117_10, ((System::Object^)__pyx_v_obs), __pyx_context);
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_float32_117_22->Target(__site_get_float32_117_22, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_eq_117_17->Target(__site_op_eq_117_17, __pyx_t_11, __pyx_t_2);
  __pyx_t_11 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_117_17->Target(__site_istrue_117_17, __pyx_t_1);
  __pyx_t_1 = nullptr;
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":120
 *         float_tvq(<float32_t *>np.PyArray_DATA(obs_a), <float32_t *>np.PyArray_DATA(codes_a),
 *                   ncodes, nfeat, nobs, <np.npy_intp *>np.PyArray_DATA(outcodes),
 *                   <float32_t *>np.PyArray_DATA(outdists))             # <<<<<<<<<<<<<<
 * 
 *     return outcodes, outdists
 */
    float_tvq(((__pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *)PyArray_DATA(__pyx_v_obs_a)), ((__pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *)PyArray_DATA(__pyx_v_codes_a)), __pyx_v_ncodes, __pyx_v_nfeat, __pyx_v_nobs, ((__pyx_t_5numpy_npy_intp *)PyArray_DATA(__pyx_v_outcodes)), ((__pyx_t_5scipy_7cluster_11_vq_rewrite_float32_t *)PyArray_DATA(__pyx_v_outdists)));
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":122
 *                   <float32_t *>np.PyArray_DATA(outdists))
 * 
 *     return outcodes, outdists             # <<<<<<<<<<<<<<
 * 
 */
  __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_outcodes), ((System::Object^)__pyx_v_outdists)});
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":190
 *     object Npy_INTERFACE_array "Npy_INTERFACE_OBJECT" (NpyArray*)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":193
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyUFunc_FromFuncAndDataAndSignature(__pyx_v_func, __pyx_v_data, __pyx_v_types, __pyx_v_ntypes, __pyx_v_nin, __pyx_v_nout, __pyx_v_identity, __pyx_v_name, __pyx_v_doc, __pyx_v_c, NULL)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":195
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_ZEROS(int __pyx_v_ndim, __pyx_t_5numpy_intp_t *__pyx_v_shape, int __pyx_v_typenum, int __pyx_v_fortran) {
  System::Object^ __pyx_v_shape_list;
  int __pyx_v_i;
  System::Object^ __pyx_v_numpy;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_shape_list = nullptr;
  __pyx_v_numpy = nullptr;

  /* "../cython/include\numpy.pxd":196
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":198
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":199
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_199_18->Target(__site_get_append_199_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_199_25->Target(__site_call1_199_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":200
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":201
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 */
  __pyx_t_5 = __site_get_zeros_201_16->Target(__site_get_zeros_201_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_201_22->Target(__site_call3_201_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_6;
  __pyx_t_6 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":203
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_EMPTY(int __pyx_v_ndim, __pyx_t_5numpy_intp_t *__pyx_v_shape, int __pyx_v_typenum, int __pyx_v_fortran) {
  System::Object^ __pyx_v_shape_list;
  int __pyx_v_i;
  System::Object^ __pyx_v_numpy;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_shape_list = nullptr;
  __pyx_v_numpy = nullptr;

  /* "../cython/include\numpy.pxd":204
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":206
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":207
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_207_18->Target(__site_get_append_207_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_207_25->Target(__site_call1_207_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":208
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":209
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):
 */
  __pyx_t_5 = __site_get_empty_209_16->Target(__site_get_empty_209_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_209_22->Target(__site_call3_209_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_6;
  __pyx_t_6 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":211
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":212
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):
 *     assert subtype == NULL             # <<<<<<<<<<<<<<
 *     assert obj == NULL
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 */
  #ifndef PYREX_WITHOUT_ASSERTIONS
  if (unlikely(!(__pyx_v_subtype == NULL))) {
    PythonOps::RaiseAssertionError(nullptr);
  }
  #endif

  /* "../cython/include\numpy.pxd":213
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):
 *     assert subtype == NULL
 *     assert obj == NULL             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 */
  #ifndef PYREX_WITHOUT_ASSERTIONS
  if (unlikely(!(__pyx_v_obj == NULL))) {
    PythonOps::RaiseAssertionError(nullptr);
  }
  #endif

  /* "../cython/include\numpy.pxd":214
 *     assert subtype == NULL
 *     assert obj == NULL
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))             # <<<<<<<<<<<<<<
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_New(__pyx_v_subtype, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, __pyx_v_strides, __pyx_v_data, __pyx_v_itemsize, __pyx_v_flags, __pyx_v_obj)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":216
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):             # <<<<<<<<<<<<<<
 *      # XXX "long long" is wrong type
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)
 */

static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^ __pyx_v_n, int __pyx_v_flags) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":218
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 *      # XXX "long long" is wrong type
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_218_54->Target(__site_get_Array_218_54, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_218_54->Target(__site_cvt_PY_LONG_LONG_218_54, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_CHKFLAGS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)), __pyx_v_flags);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":220
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)
 * 
 * cdef inline void* PyArray_DATA(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":222
 * cdef inline void* PyArray_DATA(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_222_49->Target(__site_get_Array_222_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_222_49->Target(__site_cvt_PY_LONG_LONG_222_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":224
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":226
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_226_49->Target(__site_get_Array_226_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_226_49->Target(__site_cvt_PY_LONG_LONG_226_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":228
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":230
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_1 = __site_get_Array_230_49->Target(__site_get_Array_230_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_230_49->Target(__site_cvt_PY_LONG_LONG_230_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_SIZE(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":232
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):             # <<<<<<<<<<<<<<
 *     import clr
 *     import NumpyDotNet.NpyArray
 */

static CYTHON_INLINE System::Object^ PyArray_FromAny(System::Object^ __pyx_v_op, System::Object^ __pyx_v_newtype, System::Object^ __pyx_v_min_depth, System::Object^ __pyx_v_max_depth, System::Object^ __pyx_v_flags, System::Object^ __pyx_v_context) {
  System::Object^ __pyx_v_clr;
  System::Object^ __pyx_v_NumpyDotNet;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_v_clr = nullptr;
  __pyx_v_NumpyDotNet = nullptr;

  /* "../cython/include\numpy.pxd":233
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":234
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":235
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 */
  __pyx_t_1 = __site_get_NpyArray_235_22->Target(__site_get_NpyArray_235_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_FromAny_235_31->Target(__site_get_FromAny_235_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_235_39->Target(__site_call6_235_39, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":237
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):             # <<<<<<<<<<<<<<
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 */

static CYTHON_INLINE System::Object^ PyArray_FROMANY(System::Object^ __pyx_v_m, System::Object^ __pyx_v_type, System::Object^ __pyx_v_min, System::Object^ __pyx_v_max, System::Object^ __pyx_v_flags) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  int __pyx_t_4;

  /* "../cython/include\numpy.pxd":238
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_ENSURECOPY);
  __pyx_t_2 = __site_op_and_238_13->Target(__site_op_and_238_13, __pyx_v_flags, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_238_13->Target(__site_istrue_238_13, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3) {

    /* "../cython/include\numpy.pxd":239
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DEFAULT);
    __pyx_t_1 = __site_op_ior_239_14->Target(__site_op_ior_239_14, __pyx_v_flags, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_flags = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include\numpy.pxd":240
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Check(obj):
 */
  __pyx_t_4 = __site_cvt_int_240_77->Target(__site_cvt_int_240_77, __pyx_v_type);
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_4)); 
  __pyx_t_2 = PyArray_FromAny(__pyx_v_m, __pyx_t_1, __pyx_v_min, __pyx_v_max, __pyx_v_flags, nullptr); 
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":242
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 * cdef inline object PyArray_Check(obj):             # <<<<<<<<<<<<<<
 *     return isinstance(obj, ndarray)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":243
 * 
 * cdef inline object PyArray_Check(obj):
 *     return isinstance(obj, ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(obj):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_call2_243_21->Target(__site_call2_243_21, __pyx_context, __pyx_t_1, __pyx_v_obj, ((System::Object^)((System::Object^)__pyx_ptype_5numpy_ndarray)));
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":245
 *     return isinstance(obj, ndarray)
 * 
 * cdef inline object PyArray_NDIM(obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":246
 * 
 * cdef inline object PyArray_NDIM(obj):
 *     return obj.ndim             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_ndim_246_14->Target(__site_get_ndim_246_14, __pyx_v_obj, __pyx_context);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":248
 *     return obj.ndim
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 */

static CYTHON_INLINE void import_array(void) {

}
// XXX skipping all typeobj definitions
/* Cython code section 'pystring_table' */
/* Cython code section 'cached_builtins' */
/* Cython code section 'init_globals' */

static int __Pyx_InitGlobals(void) {
  __pyx_int_1 = 1;
  __pyx_int_2 = 2;

  return 0;
}
/* Cython code section 'init_module' */
static void __Pyx_InitSites(CodeContext^ __pyx_context) {
  const int PythonOperationKind_Contains = 5;
  const int PythonOperationKind_GetEnumeratorForIteration = 18;
  const int PythonOperationKind_FloorDivide = 23;
  const int PythonOperationKind_TrueDivide = 25;
  const int PythonOperationKind_InPlaceFloorDivide = 0x20000000 | 23;
  const int PythonOperationKind_InPlaceTrueDivide = 0x20000000 | 25;
  __site_get_PyArray_FROM_OF_82_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyArray_FROM_OF", false));
  __site_call2_82_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_PyArray_FROM_OF_83_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyArray_FROM_OF", false));
  __site_call2_83_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_ndim_85_12 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_85_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_85_18 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_86_20 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_86_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt___pyx_t_5numpy_npy_intp_86_26 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_87_21 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_87_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt___pyx_t_5numpy_npy_intp_87_27 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_88_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_88_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_88_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_89_21 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_89_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt___pyx_t_5numpy_npy_intp_89_27 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_92_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_94_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_94_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_94_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_95_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_95_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt___pyx_t_5numpy_npy_intp_95_30 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_96_29 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_96_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt___pyx_t_5numpy_npy_intp_96_35 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_97_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_97_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_97_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_99_29 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_99_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt___pyx_t_5numpy_npy_intp_99_35 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_102_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_106_62 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_106_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_115_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_get_dtype_115_42 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dtype", false));
  __site_call1_dtype_115_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_get_dtype_117_10 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dtype", false));
  __site_get_float32_117_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "float32", false));
  __site_op_eq_117_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_117_17 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_append_199_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_199_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_201_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_201_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_207_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_207_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_209_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_209_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_218_54 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_218_54 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_222_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_222_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_226_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_226_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_230_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_230_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_235_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_FromAny_235_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "FromAny", false));
  __site_call6_235_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_op_and_238_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_istrue_238_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ior_239_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::OrAssign));
  __site_cvt_int_240_77 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call2_243_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_ndim_246_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  /*--- Create function pointers ---*/
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":10
 * """
 * 
 * import numpy as np             # <<<<<<<<<<<<<<
 * cimport numpy as np
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":27
 * 
 * # Initialize the NumPy C API
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * cdef void float_tvq(float32_t *obs, float32_t *code_book,
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\cluster\_vq_rewrite.pyx":1
 * """             # <<<<<<<<<<<<<<
 * Cython rewrite of the vector quantization module, originally written
 * in C at src/vq.c and the wrapper at src/vq_module.c. This should be
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":248
 *     return obj.ndim
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 */
}
/* Cython code section 'cleanup_globals' */
/* Cython code section 'cleanup_module' */
/* Cython code section 'main_method' */
/* Cython code section 'dotnet_globals' */


static Types::PythonType^ __pyx_ptype_5numpy_ndarray = nullptr;
static Types::PythonType^ __pyx_ptype_5numpy_dtype = nullptr;

/* Cython code section 'utility_code_def' */

/* Runtime support code */
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__cluster___vq_rewrite", module__vq_rewrite::typeid)];
};
