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
  dict["__module__"] = "scipy.special.orthogonal_eval";
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
#define __PYX_HAVE_API__scipy__special__orthogonal_eval
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "math.h"
#include "stdlib.h"

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

typedef __pyx_t_5numpy_npy_intp __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp;
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
/* Module declarations from scipy.special.orthogonal_eval */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate double __pyx_delegate_t_5scipy_7special_15orthogonal_eval_eval_poly_chebyt(long, double);
static double eval_poly_chebyt(long, double); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_7special_15orthogonal_eval__loop_id_d(char **, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *, void *);
static void _loop_id_d(char **, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *, void *); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.special.orthogonal_eval"

/* Implementation of scipy.special.orthogonal_eval */
namespace clr_orthogonal_eval {
  public ref class module_orthogonal_eval sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exp_92_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_92_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_92_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_92_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_92_40;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_92_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_92_57;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_92_59;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_92_55;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_92_46;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_92_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_96_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_96_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_Negate_97_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_98_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_98_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_98_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_99_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_100_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_100_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call4_101_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_101_30;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exp_105_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_105_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_105_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_105_44;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_105_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_105_33;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_105_59;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_105_61;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_105_57;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_105_48;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_105_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_106_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_106_41;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_106_46;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_106_48;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call4_106_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_106_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_110_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_110_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_110_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_110_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_110_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_110_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_110_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_110_41;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_110_35;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_Negate_111_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_112_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_112_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_113_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_114_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_114_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call4_115_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_115_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_124_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_128_9;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_Negate_129_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_130_9;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_132_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_132_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call4_133_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_133_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_137_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_out_137_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_141_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_141_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_141_12;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_145_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_145_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_out_145_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_149_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_149_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_out_149_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_Negate_154_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_155_9;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_157_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_157_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call4_158_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_158_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_162_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_162_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_out_162_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_166_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_166_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_Negate_167_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_168_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_170_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_170_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_out_174_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_broadcast_arrays_178_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_178_30;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_atleast_1d_179_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_179_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_like_182_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_182_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_182_35;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_182_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_182_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_183_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_183_14;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_any_183_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_183_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_183_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_184_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_186_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_186_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_188_9;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_188_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_189_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_189_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_189_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_189_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_189_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_189_43;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_189_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_190_46;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_190_52;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_190_35;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_190_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_189_7;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_OnesComplement_192_11;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_192_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_192_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_192_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_193_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_193_33;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_193_35;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_193_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_193_26;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_193_48;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_193_46;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_193_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_OnesComplement_194_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_194_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_194_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_OnesComplement_194_58;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_194_57;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_194_64;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_194_47;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_194_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_OnesComplement_193_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_193_7;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_200_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_200_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_Negate_200_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_200_46;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_200_41;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_200_38;
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
static int^ __pyx_int_0;
static int^ __pyx_int_1;
static int^ __pyx_int_2;
static int^ __pyx_int_neg_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":31
 *     void *malloc(size_t size)
 * 
 * cdef double eval_poly_chebyt(long k, double x) nogil:             # <<<<<<<<<<<<<<
 *     # Use Chebyshev T recurrence directly, see [MH]
 *     cdef long m
 */

static double (*__pyx_function_pointer_eval_poly_chebyt)(long, double);
typedef double (*__pyx_fp_t_eval_poly_chebyt)(long, double);
static __pyx_delegate_t_5scipy_7special_15orthogonal_eval_eval_poly_chebyt^ __pyx_delegate_val_eval_poly_chebyt;
static  double eval_poly_chebyt(long __pyx_v_k, double __pyx_v_x) {
  long __pyx_v_m;
  double __pyx_v_b2;
  double __pyx_v_b1;
  double __pyx_v_b0;
  double __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":36
 *     cdef double b2, b1, b0
 * 
 *     b2 = 0             # <<<<<<<<<<<<<<
 *     b1 = -1
 *     b0 = 0
 */
  __pyx_v_b2 = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":37
 * 
 *     b2 = 0
 *     b1 = -1             # <<<<<<<<<<<<<<
 *     b0 = 0
 *     x = 2*x
 */
  __pyx_v_b1 = -1.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":38
 *     b2 = 0
 *     b1 = -1
 *     b0 = 0             # <<<<<<<<<<<<<<
 *     x = 2*x
 *     for m in range(k+1):
 */
  __pyx_v_b0 = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":39
 *     b1 = -1
 *     b0 = 0
 *     x = 2*x             # <<<<<<<<<<<<<<
 *     for m in range(k+1):
 *         b2 = b1
 */
  __pyx_v_x = (2.0 * __pyx_v_x);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":40
 *     b0 = 0
 *     x = 2*x
 *     for m in range(k+1):             # <<<<<<<<<<<<<<
 *         b2 = b1
 *         b1 = b0
 */
  __pyx_t_1 = (__pyx_v_k + 1);
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_m = __pyx_t_2;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":41
 *     x = 2*x
 *     for m in range(k+1):
 *         b2 = b1             # <<<<<<<<<<<<<<
 *         b1 = b0
 *         b0 = x*b1 - b2
 */
    __pyx_v_b2 = __pyx_v_b1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":42
 *     for m in range(k+1):
 *         b2 = b1
 *         b1 = b0             # <<<<<<<<<<<<<<
 *         b0 = x*b1 - b2
 *     return (b0 - b2)/2.0
 */
    __pyx_v_b1 = __pyx_v_b0;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":43
 *         b2 = b1
 *         b1 = b0
 *         b0 = x*b1 - b2             # <<<<<<<<<<<<<<
 *     return (b0 - b2)/2.0
 * 
 */
    __pyx_v_b0 = ((__pyx_v_x * __pyx_v_b1) - __pyx_v_b2);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":44
 *         b1 = b0
 *         b0 = x*b1 - b2
 *     return (b0 - b2)/2.0             # <<<<<<<<<<<<<<
 * 
 * #------------------------------------------------------------------------------
 */
  __pyx_r = ((__pyx_v_b0 - __pyx_v_b2) / 2.0);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":50
 * #------------------------------------------------------------------------------
 * 
 * cdef void _loop_id_d(char **args, npy_intp *dimensions, npy_intp *steps,             # <<<<<<<<<<<<<<
 *                      void *func) nogil:
 *     cdef int i
 */

static void (*__pyx_function_pointer__loop_id_d)(char **, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *, void *);
typedef void (*__pyx_fp_t__loop_id_d)(char **, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *, void *);
static __pyx_delegate_t_5scipy_7special_15orthogonal_eval__loop_id_d^ __pyx_delegate_val__loop_id_d;
static  void _loop_id_d(char **__pyx_v_args, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *__pyx_v_dimensions, __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp *__pyx_v_steps, void *__pyx_v_func) {
  int __pyx_v_i;
  char *__pyx_v_ip1;
  char *__pyx_v_ip2;
  char *__pyx_v_op;
  __pyx_t_5scipy_7special_15orthogonal_eval_npy_intp __pyx_t_1;
  int __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":54
 *     cdef int i
 *     cdef double x
 *     cdef char *ip1=args[0], *ip2=args[1], *op=args[2]             # <<<<<<<<<<<<<<
 *     for i in range(0, dimensions[0]):
 *         (<double*>op)[0] = (<double(*)(long,double) nogil>func)(
 */
  __pyx_v_ip1 = (__pyx_v_args[0]);
  __pyx_v_ip2 = (__pyx_v_args[1]);
  __pyx_v_op = (__pyx_v_args[2]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":55
 *     cdef double x
 *     cdef char *ip1=args[0], *ip2=args[1], *op=args[2]
 *     for i in range(0, dimensions[0]):             # <<<<<<<<<<<<<<
 *         (<double*>op)[0] = (<double(*)(long,double) nogil>func)(
 *             (<long*>ip1)[0], (<double*>ip2)[0])
 */
  __pyx_t_1 = (__pyx_v_dimensions[0]);
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":56
 *     cdef char *ip1=args[0], *ip2=args[1], *op=args[2]
 *     for i in range(0, dimensions[0]):
 *         (<double*>op)[0] = (<double(*)(long,double) nogil>func)(             # <<<<<<<<<<<<<<
 *             (<long*>ip1)[0], (<double*>ip2)[0])
 *         ip1 += steps[0]; ip2 += steps[1]; op += steps[2]
 */
    (((double *)__pyx_v_op)[0]) = ((double (*)(long, double))__pyx_v_func)((((long *)__pyx_v_ip1)[0]), (((double *)__pyx_v_ip2)[0]));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":58
 *         (<double*>op)[0] = (<double(*)(long,double) nogil>func)(
 *             (<long*>ip1)[0], (<double*>ip2)[0])
 *         ip1 += steps[0]; ip2 += steps[1]; op += steps[2]             # <<<<<<<<<<<<<<
 * 
 * cdef char *_id_d_types = <char *>malloc(3)
 */
    __pyx_v_ip1 += (__pyx_v_steps[0]);
    __pyx_v_ip2 += (__pyx_v_steps[1]);
    __pyx_v_op += (__pyx_v_steps[2]);
  }

}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":90
 * from numpy import exp
 * 
 * def binom(n, k):             # <<<<<<<<<<<<<<
 *     """Binomial coefficient"""
 *     return np.exp(gammaln(1+n) - gammaln(1+k) - gammaln(1+n-k))
 */

static System::Object^ binom(System::Object^ n, System::Object^ k) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_k = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_n = n;
  __pyx_v_k = k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":92
 * def binom(n, k):
 *     """Binomial coefficient"""
 *     return np.exp(gammaln(1+n) - gammaln(1+k) - gammaln(1+n-k))             # <<<<<<<<<<<<<<
 * 
 * def eval_jacobi(n, alpha, beta, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_exp_92_13->Target(__site_get_exp_92_13, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "gammaln");
  __pyx_t_3 = __site_op_add_92_27->Target(__site_op_add_92_27, __pyx_int_1, __pyx_v_n);
  __pyx_t_4 = __site_call1_92_25->Target(__site_call1_92_25, __pyx_context, __pyx_t_1, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "gammaln");
  __pyx_t_1 = __site_op_add_92_42->Target(__site_op_add_92_42, __pyx_int_1, __pyx_v_k);
  __pyx_t_5 = __site_call1_92_40->Target(__site_call1_92_40, __pyx_context, __pyx_t_3, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_sub_92_31->Target(__site_op_sub_92_31, __pyx_t_4, __pyx_t_5);
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "gammaln");
  __pyx_t_4 = __site_op_add_92_57->Target(__site_op_add_92_57, __pyx_int_1, __pyx_v_n);
  __pyx_t_3 = __site_op_sub_92_59->Target(__site_op_sub_92_59, __pyx_t_4, __pyx_v_k);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_call1_92_55->Target(__site_call1_92_55, __pyx_context, __pyx_t_5, __pyx_t_3);
  __pyx_t_5 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_sub_92_46->Target(__site_op_sub_92_46, __pyx_t_1, __pyx_t_4);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_call1_92_17->Target(__site_call1_92_17, __pyx_context, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":94
 *     return np.exp(gammaln(1+n) - gammaln(1+k) - gammaln(1+n-k))
 * 
 * def eval_jacobi(n, alpha, beta, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate Jacobi polynomial at a point."""
 *     d = binom(n+alpha, n)
 */

static System::Object^ eval_jacobi(System::Object^ n, System::Object^ alpha, System::Object^ beta, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_alpha = nullptr;
  System::Object^ __pyx_v_beta = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_v_d;
  System::Object^ __pyx_v_a;
  System::Object^ __pyx_v_b;
  System::Object^ __pyx_v_c;
  System::Object^ __pyx_v_g;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_alpha = alpha;
  __pyx_v_beta = beta;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }
  __pyx_v_d = nullptr;
  __pyx_v_a = nullptr;
  __pyx_v_b = nullptr;
  __pyx_v_c = nullptr;
  __pyx_v_g = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":96
 * def eval_jacobi(n, alpha, beta, x, out=None):
 *     """Evaluate Jacobi polynomial at a point."""
 *     d = binom(n+alpha, n)             # <<<<<<<<<<<<<<
 *     a = -n
 *     b = n + alpha + beta + 1
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "binom");
  __pyx_t_2 = __site_op_add_96_15->Target(__site_op_add_96_15, __pyx_v_n, __pyx_v_alpha);
  __pyx_t_3 = __site_call2_96_13->Target(__site_call2_96_13, __pyx_context, __pyx_t_1, __pyx_t_2, __pyx_v_n);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_d = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":97
 *     """Evaluate Jacobi polynomial at a point."""
 *     d = binom(n+alpha, n)
 *     a = -n             # <<<<<<<<<<<<<<
 *     b = n + alpha + beta + 1
 *     c = alpha + 1
 */
  __pyx_t_3 = __site_Negate_97_8->Target(__site_Negate_97_8, __pyx_v_n);
  __pyx_v_a = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":98
 *     d = binom(n+alpha, n)
 *     a = -n
 *     b = n + alpha + beta + 1             # <<<<<<<<<<<<<<
 *     c = alpha + 1
 *     g = (1-x)/2.0
 */
  __pyx_t_3 = __site_op_add_98_10->Target(__site_op_add_98_10, __pyx_v_n, __pyx_v_alpha);
  __pyx_t_2 = __site_op_add_98_18->Target(__site_op_add_98_18, __pyx_t_3, __pyx_v_beta);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_add_98_25->Target(__site_op_add_98_25, __pyx_t_2, __pyx_int_1);
  __pyx_t_2 = nullptr;
  __pyx_v_b = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":99
 *     a = -n
 *     b = n + alpha + beta + 1
 *     c = alpha + 1             # <<<<<<<<<<<<<<
 *     g = (1-x)/2.0
 *     return hyp2f1(a, b, c, g) * d
 */
  __pyx_t_3 = __site_op_add_99_14->Target(__site_op_add_99_14, __pyx_v_alpha, __pyx_int_1);
  __pyx_v_c = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":100
 *     b = n + alpha + beta + 1
 *     c = alpha + 1
 *     g = (1-x)/2.0             # <<<<<<<<<<<<<<
 *     return hyp2f1(a, b, c, g) * d
 * 
 */
  __pyx_t_3 = __site_op_sub_100_10->Target(__site_op_sub_100_10, __pyx_int_1, __pyx_v_x);
  __pyx_t_2 = 2.0;
  __pyx_t_1 = __site_op_div_100_13->Target(__site_op_div_100_13, __pyx_t_3, __pyx_t_2);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_g = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":101
 *     c = alpha + 1
 *     g = (1-x)/2.0
 *     return hyp2f1(a, b, c, g) * d             # <<<<<<<<<<<<<<
 * 
 * def eval_sh_jacobi(n, p, q, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "hyp2f1");
  __pyx_t_2 = __site_call4_101_17->Target(__site_call4_101_17, __pyx_context, __pyx_t_1, __pyx_v_a, __pyx_v_b, __pyx_v_c, __pyx_v_g);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_mul_101_30->Target(__site_op_mul_101_30, __pyx_t_2, __pyx_v_d);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":103
 *     return hyp2f1(a, b, c, g) * d
 * 
 * def eval_sh_jacobi(n, p, q, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate shifted Jacobi polynomial at a point."""
 *     factor = np.exp(gammaln(1+n) + gammaln(n+p) - gammaln(2*n+p))
 */

static System::Object^ eval_sh_jacobi(System::Object^ n, System::Object^ p, System::Object^ q, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_p = nullptr;
  System::Object^ __pyx_v_q = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_v_factor;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_n = n;
  __pyx_v_p = p;
  __pyx_v_q = q;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }
  __pyx_v_factor = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":105
 * def eval_sh_jacobi(n, p, q, x, out=None):
 *     """Evaluate shifted Jacobi polynomial at a point."""
 *     factor = np.exp(gammaln(1+n) + gammaln(n+p) - gammaln(2*n+p))             # <<<<<<<<<<<<<<
 *     return factor * eval_jacobi(n, p-q, q-1, 2*x-1)
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_exp_105_15->Target(__site_get_exp_105_15, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "gammaln");
  __pyx_t_3 = __site_op_add_105_29->Target(__site_op_add_105_29, __pyx_int_1, __pyx_v_n);
  __pyx_t_4 = __site_call1_105_27->Target(__site_call1_105_27, __pyx_context, __pyx_t_1, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "gammaln");
  __pyx_t_1 = __site_op_add_105_44->Target(__site_op_add_105_44, __pyx_v_n, __pyx_v_p);
  __pyx_t_5 = __site_call1_105_42->Target(__site_call1_105_42, __pyx_context, __pyx_t_3, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_add_105_33->Target(__site_op_add_105_33, __pyx_t_4, __pyx_t_5);
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "gammaln");
  __pyx_t_4 = __site_op_mul_105_59->Target(__site_op_mul_105_59, __pyx_int_2, __pyx_v_n);
  __pyx_t_3 = __site_op_add_105_61->Target(__site_op_add_105_61, __pyx_t_4, __pyx_v_p);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_call1_105_57->Target(__site_call1_105_57, __pyx_context, __pyx_t_5, __pyx_t_3);
  __pyx_t_5 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_sub_105_48->Target(__site_op_sub_105_48, __pyx_t_1, __pyx_t_4);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_call1_105_19->Target(__site_call1_105_19, __pyx_context, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_v_factor = __pyx_t_4;
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":106
 *     """Evaluate shifted Jacobi polynomial at a point."""
 *     factor = np.exp(gammaln(1+n) + gammaln(n+p) - gammaln(2*n+p))
 *     return factor * eval_jacobi(n, p-q, q-1, 2*x-1)             # <<<<<<<<<<<<<<
 * 
 * def eval_gegenbauer(n, alpha, x, out=None):
 */
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "eval_jacobi");
  __pyx_t_3 = __site_op_sub_106_36->Target(__site_op_sub_106_36, __pyx_v_p, __pyx_v_q);
  __pyx_t_2 = __site_op_sub_106_41->Target(__site_op_sub_106_41, __pyx_v_q, __pyx_int_1);
  __pyx_t_1 = __site_op_mul_106_46->Target(__site_op_mul_106_46, __pyx_int_2, __pyx_v_x);
  __pyx_t_5 = __site_op_sub_106_48->Target(__site_op_sub_106_48, __pyx_t_1, __pyx_int_1);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call4_106_31->Target(__site_call4_106_31, __pyx_context, __pyx_t_4, __pyx_v_n, __pyx_t_3, __pyx_t_2, __pyx_t_5);
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_5 = __site_op_mul_106_18->Target(__site_op_mul_106_18, __pyx_v_factor, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":108
 *     return factor * eval_jacobi(n, p-q, q-1, 2*x-1)
 * 
 * def eval_gegenbauer(n, alpha, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate Gegenbauer polynomial at a point."""
 *     d = gamma(n+2*alpha)/gamma(1+n)/gamma(2*alpha)
 */

static System::Object^ eval_gegenbauer(System::Object^ n, System::Object^ alpha, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_alpha = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_v_d;
  System::Object^ __pyx_v_a;
  System::Object^ __pyx_v_b;
  System::Object^ __pyx_v_c;
  System::Object^ __pyx_v_g;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  __pyx_v_n = n;
  __pyx_v_alpha = alpha;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }
  __pyx_v_d = nullptr;
  __pyx_v_a = nullptr;
  __pyx_v_b = nullptr;
  __pyx_v_c = nullptr;
  __pyx_v_g = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":110
 * def eval_gegenbauer(n, alpha, x, out=None):
 *     """Evaluate Gegenbauer polynomial at a point."""
 *     d = gamma(n+2*alpha)/gamma(1+n)/gamma(2*alpha)             # <<<<<<<<<<<<<<
 *     a = -n
 *     b = n + 2*alpha
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "gamma");
  __pyx_t_2 = __site_op_mul_110_17->Target(__site_op_mul_110_17, __pyx_int_2, __pyx_v_alpha);
  __pyx_t_3 = __site_op_add_110_15->Target(__site_op_add_110_15, __pyx_v_n, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call1_110_13->Target(__site_call1_110_13, __pyx_context, __pyx_t_1, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "gamma");
  __pyx_t_1 = __site_op_add_110_32->Target(__site_op_add_110_32, __pyx_int_1, __pyx_v_n);
  __pyx_t_4 = __site_call1_110_30->Target(__site_call1_110_30, __pyx_context, __pyx_t_3, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_div_110_24->Target(__site_op_div_110_24, __pyx_t_2, __pyx_t_4);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "gamma");
  __pyx_t_2 = __site_op_mul_110_43->Target(__site_op_mul_110_43, __pyx_int_2, __pyx_v_alpha);
  __pyx_t_3 = __site_call1_110_41->Target(__site_call1_110_41, __pyx_context, __pyx_t_4, __pyx_t_2);
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_div_110_35->Target(__site_op_div_110_35, __pyx_t_1, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_v_d = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":111
 *     """Evaluate Gegenbauer polynomial at a point."""
 *     d = gamma(n+2*alpha)/gamma(1+n)/gamma(2*alpha)
 *     a = -n             # <<<<<<<<<<<<<<
 *     b = n + 2*alpha
 *     c = alpha + 0.5
 */
  __pyx_t_2 = __site_Negate_111_8->Target(__site_Negate_111_8, __pyx_v_n);
  __pyx_v_a = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":112
 *     d = gamma(n+2*alpha)/gamma(1+n)/gamma(2*alpha)
 *     a = -n
 *     b = n + 2*alpha             # <<<<<<<<<<<<<<
 *     c = alpha + 0.5
 *     g = (1-x)/2.0
 */
  __pyx_t_2 = __site_op_mul_112_13->Target(__site_op_mul_112_13, __pyx_int_2, __pyx_v_alpha);
  __pyx_t_3 = __site_op_add_112_10->Target(__site_op_add_112_10, __pyx_v_n, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_v_b = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":113
 *     a = -n
 *     b = n + 2*alpha
 *     c = alpha + 0.5             # <<<<<<<<<<<<<<
 *     g = (1-x)/2.0
 *     return hyp2f1(a, b, c, g) * d
 */
  __pyx_t_3 = 0.5;
  __pyx_t_2 = __site_op_add_113_14->Target(__site_op_add_113_14, __pyx_v_alpha, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_v_c = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":114
 *     b = n + 2*alpha
 *     c = alpha + 0.5
 *     g = (1-x)/2.0             # <<<<<<<<<<<<<<
 *     return hyp2f1(a, b, c, g) * d
 * 
 */
  __pyx_t_2 = __site_op_sub_114_10->Target(__site_op_sub_114_10, __pyx_int_1, __pyx_v_x);
  __pyx_t_3 = 2.0;
  __pyx_t_1 = __site_op_div_114_13->Target(__site_op_div_114_13, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_v_g = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":115
 *     c = alpha + 0.5
 *     g = (1-x)/2.0
 *     return hyp2f1(a, b, c, g) * d             # <<<<<<<<<<<<<<
 * 
 * def eval_chebyt(n, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "hyp2f1");
  __pyx_t_3 = __site_call4_115_17->Target(__site_call4_115_17, __pyx_context, __pyx_t_1, __pyx_v_a, __pyx_v_b, __pyx_v_c, __pyx_v_g);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_mul_115_30->Target(__site_op_mul_115_30, __pyx_t_3, __pyx_v_d);
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":117
 *     return hyp2f1(a, b, c, g) * d
 * 
 * def eval_chebyt(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """
 *     Evaluate Chebyshev T polynomial at a point.
 */

static System::Object^ eval_chebyt(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":124
 *     up to order ``10000``.
 *     """
 *     return _eval_chebyt(n, x, out)             # <<<<<<<<<<<<<<
 * 
 * def eval_chebyu(n, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "_eval_chebyt");
  __pyx_t_2 = __site_call3_124_23->Target(__site_call3_124_23, __pyx_context, __pyx_t_1, __pyx_v_n, __pyx_v_x, __pyx_v_out);
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":126
 *     return _eval_chebyt(n, x, out)
 * 
 * def eval_chebyu(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate Chebyshev U polynomial at a point."""
 *     d = n+1
 */

static System::Object^ eval_chebyu(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_v_d;
  System::Object^ __pyx_v_a;
  System::Object^ __pyx_v_b;
  double __pyx_v_c;
  System::Object^ __pyx_v_g;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }
  __pyx_v_d = nullptr;
  __pyx_v_a = nullptr;
  __pyx_v_b = nullptr;
  __pyx_v_g = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":128
 * def eval_chebyu(n, x, out=None):
 *     """Evaluate Chebyshev U polynomial at a point."""
 *     d = n+1             # <<<<<<<<<<<<<<
 *     a = -n
 *     b = n+2
 */
  __pyx_t_1 = __site_op_add_128_9->Target(__site_op_add_128_9, __pyx_v_n, __pyx_int_1);
  __pyx_v_d = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":129
 *     """Evaluate Chebyshev U polynomial at a point."""
 *     d = n+1
 *     a = -n             # <<<<<<<<<<<<<<
 *     b = n+2
 *     c = 1.5
 */
  __pyx_t_1 = __site_Negate_129_8->Target(__site_Negate_129_8, __pyx_v_n);
  __pyx_v_a = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":130
 *     d = n+1
 *     a = -n
 *     b = n+2             # <<<<<<<<<<<<<<
 *     c = 1.5
 *     g = (1-x)/2.0
 */
  __pyx_t_1 = __site_op_add_130_9->Target(__site_op_add_130_9, __pyx_v_n, __pyx_int_2);
  __pyx_v_b = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":131
 *     a = -n
 *     b = n+2
 *     c = 1.5             # <<<<<<<<<<<<<<
 *     g = (1-x)/2.0
 *     return hyp2f1(a, b, c, g) * d
 */
  __pyx_v_c = 1.5;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":132
 *     b = n+2
 *     c = 1.5
 *     g = (1-x)/2.0             # <<<<<<<<<<<<<<
 *     return hyp2f1(a, b, c, g) * d
 * 
 */
  __pyx_t_1 = __site_op_sub_132_10->Target(__site_op_sub_132_10, __pyx_int_1, __pyx_v_x);
  __pyx_t_2 = 2.0;
  __pyx_t_3 = __site_op_div_132_13->Target(__site_op_div_132_13, __pyx_t_1, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_g = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":133
 *     c = 1.5
 *     g = (1-x)/2.0
 *     return hyp2f1(a, b, c, g) * d             # <<<<<<<<<<<<<<
 * 
 * def eval_chebys(n, x, out=None):
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "hyp2f1");
  __pyx_t_2 = __pyx_v_c;
  __pyx_t_1 = __site_call4_133_17->Target(__site_call4_133_17, __pyx_context, __pyx_t_3, __pyx_v_a, __pyx_v_b, __pyx_t_2, __pyx_v_g);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_mul_133_30->Target(__site_op_mul_133_30, __pyx_t_1, __pyx_v_d);
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":135
 *     return hyp2f1(a, b, c, g) * d
 * 
 * def eval_chebys(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate Chebyshev S polynomial at a point."""
 *     return eval_chebyu(n, x/2, out=out)
 */

static System::Object^ eval_chebys(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":137
 * def eval_chebys(n, x, out=None):
 *     """Evaluate Chebyshev S polynomial at a point."""
 *     return eval_chebyu(n, x/2, out=out)             # <<<<<<<<<<<<<<
 * 
 * def eval_chebyc(n, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "eval_chebyu");
  __pyx_t_2 = __site_op_div_137_27->Target(__site_op_div_137_27, __pyx_v_x, __pyx_int_2);
  __pyx_t_3 = __site_call2_out_137_22->Target(__site_call2_out_137_22, __pyx_context, __pyx_t_1, __pyx_v_n, __pyx_t_2, __pyx_v_out);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":139
 *     return eval_chebyu(n, x/2, out=out)
 * 
 * def eval_chebyc(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate Chebyshev C polynomial at a point."""
 *     return 2*eval_chebyt(n, x/2.0, out)
 */

static System::Object^ eval_chebyc(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":141
 * def eval_chebyc(n, x, out=None):
 *     """Evaluate Chebyshev C polynomial at a point."""
 *     return 2*eval_chebyt(n, x/2.0, out)             # <<<<<<<<<<<<<<
 * 
 * def eval_sh_chebyt(n, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "eval_chebyt");
  __pyx_t_2 = 2.0;
  __pyx_t_3 = __site_op_div_141_29->Target(__site_op_div_141_29, __pyx_v_x, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call3_141_24->Target(__site_call3_141_24, __pyx_context, __pyx_t_1, __pyx_v_n, __pyx_t_3, __pyx_v_out);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_mul_141_12->Target(__site_op_mul_141_12, __pyx_int_2, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":143
 *     return 2*eval_chebyt(n, x/2.0, out)
 * 
 * def eval_sh_chebyt(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate shifted Chebyshev T polynomial at a point."""
 *     return eval_chebyt(n, 2*x-1, out=out)
 */

static System::Object^ eval_sh_chebyt(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":145
 * def eval_sh_chebyt(n, x, out=None):
 *     """Evaluate shifted Chebyshev T polynomial at a point."""
 *     return eval_chebyt(n, 2*x-1, out=out)             # <<<<<<<<<<<<<<
 * 
 * def eval_sh_chebyu(n, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "eval_chebyt");
  __pyx_t_2 = __site_op_mul_145_27->Target(__site_op_mul_145_27, __pyx_int_2, __pyx_v_x);
  __pyx_t_3 = __site_op_sub_145_29->Target(__site_op_sub_145_29, __pyx_t_2, __pyx_int_1);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call2_out_145_22->Target(__site_call2_out_145_22, __pyx_context, __pyx_t_1, __pyx_v_n, __pyx_t_3, __pyx_v_out);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":147
 *     return eval_chebyt(n, 2*x-1, out=out)
 * 
 * def eval_sh_chebyu(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate shifted Chebyshev U polynomial at a point."""
 *     return eval_chebyu(n, 2*x-1, out=out)
 */

static System::Object^ eval_sh_chebyu(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":149
 * def eval_sh_chebyu(n, x, out=None):
 *     """Evaluate shifted Chebyshev U polynomial at a point."""
 *     return eval_chebyu(n, 2*x-1, out=out)             # <<<<<<<<<<<<<<
 * 
 * def eval_legendre(n, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "eval_chebyu");
  __pyx_t_2 = __site_op_mul_149_27->Target(__site_op_mul_149_27, __pyx_int_2, __pyx_v_x);
  __pyx_t_3 = __site_op_sub_149_29->Target(__site_op_sub_149_29, __pyx_t_2, __pyx_int_1);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call2_out_149_22->Target(__site_call2_out_149_22, __pyx_context, __pyx_t_1, __pyx_v_n, __pyx_t_3, __pyx_v_out);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":151
 *     return eval_chebyu(n, 2*x-1, out=out)
 * 
 * def eval_legendre(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate Legendre polynomial at a point."""
 *     d = 1
 */

static System::Object^ eval_legendre(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_v_d;
  System::Object^ __pyx_v_a;
  System::Object^ __pyx_v_b;
  long __pyx_v_c;
  System::Object^ __pyx_v_g;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }
  __pyx_v_d = nullptr;
  __pyx_v_a = nullptr;
  __pyx_v_b = nullptr;
  __pyx_v_g = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":153
 * def eval_legendre(n, x, out=None):
 *     """Evaluate Legendre polynomial at a point."""
 *     d = 1             # <<<<<<<<<<<<<<
 *     a = -n
 *     b = n+1
 */
  __pyx_v_d = __pyx_int_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":154
 *     """Evaluate Legendre polynomial at a point."""
 *     d = 1
 *     a = -n             # <<<<<<<<<<<<<<
 *     b = n+1
 *     c = 1
 */
  __pyx_t_1 = __site_Negate_154_8->Target(__site_Negate_154_8, __pyx_v_n);
  __pyx_v_a = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":155
 *     d = 1
 *     a = -n
 *     b = n+1             # <<<<<<<<<<<<<<
 *     c = 1
 *     g = (1-x)/2.0
 */
  __pyx_t_1 = __site_op_add_155_9->Target(__site_op_add_155_9, __pyx_v_n, __pyx_int_1);
  __pyx_v_b = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":156
 *     a = -n
 *     b = n+1
 *     c = 1             # <<<<<<<<<<<<<<
 *     g = (1-x)/2.0
 *     return hyp2f1(a, b, c, g) * d
 */
  __pyx_v_c = 1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":157
 *     b = n+1
 *     c = 1
 *     g = (1-x)/2.0             # <<<<<<<<<<<<<<
 *     return hyp2f1(a, b, c, g) * d
 * 
 */
  __pyx_t_1 = __site_op_sub_157_10->Target(__site_op_sub_157_10, __pyx_int_1, __pyx_v_x);
  __pyx_t_2 = 2.0;
  __pyx_t_3 = __site_op_div_157_13->Target(__site_op_div_157_13, __pyx_t_1, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_g = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":158
 *     c = 1
 *     g = (1-x)/2.0
 *     return hyp2f1(a, b, c, g) * d             # <<<<<<<<<<<<<<
 * 
 * def eval_sh_legendre(n, x, out=None):
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "hyp2f1");
  __pyx_t_2 = __pyx_v_c;
  __pyx_t_1 = __site_call4_158_17->Target(__site_call4_158_17, __pyx_context, __pyx_t_3, __pyx_v_a, __pyx_v_b, __pyx_t_2, __pyx_v_g);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_mul_158_30->Target(__site_op_mul_158_30, __pyx_t_1, __pyx_v_d);
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":160
 *     return hyp2f1(a, b, c, g) * d
 * 
 * def eval_sh_legendre(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate shifted Legendre polynomial at a point."""
 *     return eval_legendre(n, 2*x-1, out=out)
 */

static System::Object^ eval_sh_legendre(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":162
 * def eval_sh_legendre(n, x, out=None):
 *     """Evaluate shifted Legendre polynomial at a point."""
 *     return eval_legendre(n, 2*x-1, out=out)             # <<<<<<<<<<<<<<
 * 
 * def eval_genlaguerre(n, alpha, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "eval_legendre");
  __pyx_t_2 = __site_op_mul_162_29->Target(__site_op_mul_162_29, __pyx_int_2, __pyx_v_x);
  __pyx_t_3 = __site_op_sub_162_31->Target(__site_op_sub_162_31, __pyx_t_2, __pyx_int_1);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call2_out_162_24->Target(__site_call2_out_162_24, __pyx_context, __pyx_t_1, __pyx_v_n, __pyx_t_3, __pyx_v_out);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":164
 *     return eval_legendre(n, 2*x-1, out=out)
 * 
 * def eval_genlaguerre(n, alpha, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate generalized Laguerre polynomial at a point."""
 *     d = binom(n+alpha, n)
 */

static System::Object^ eval_genlaguerre(System::Object^ n, System::Object^ alpha, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_alpha = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_v_d;
  System::Object^ __pyx_v_a;
  System::Object^ __pyx_v_b;
  System::Object^ __pyx_v_g;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_alpha = alpha;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }
  __pyx_v_d = nullptr;
  __pyx_v_a = nullptr;
  __pyx_v_b = nullptr;
  __pyx_v_g = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":166
 * def eval_genlaguerre(n, alpha, x, out=None):
 *     """Evaluate generalized Laguerre polynomial at a point."""
 *     d = binom(n+alpha, n)             # <<<<<<<<<<<<<<
 *     a = -n
 *     b = alpha + 1
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "binom");
  __pyx_t_2 = __site_op_add_166_15->Target(__site_op_add_166_15, __pyx_v_n, __pyx_v_alpha);
  __pyx_t_3 = __site_call2_166_13->Target(__site_call2_166_13, __pyx_context, __pyx_t_1, __pyx_t_2, __pyx_v_n);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_d = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":167
 *     """Evaluate generalized Laguerre polynomial at a point."""
 *     d = binom(n+alpha, n)
 *     a = -n             # <<<<<<<<<<<<<<
 *     b = alpha + 1
 *     g = x
 */
  __pyx_t_3 = __site_Negate_167_8->Target(__site_Negate_167_8, __pyx_v_n);
  __pyx_v_a = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":168
 *     d = binom(n+alpha, n)
 *     a = -n
 *     b = alpha + 1             # <<<<<<<<<<<<<<
 *     g = x
 *     return hyp1f1(a, b, g) * d
 */
  __pyx_t_3 = __site_op_add_168_14->Target(__site_op_add_168_14, __pyx_v_alpha, __pyx_int_1);
  __pyx_v_b = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":169
 *     a = -n
 *     b = alpha + 1
 *     g = x             # <<<<<<<<<<<<<<
 *     return hyp1f1(a, b, g) * d
 * 
 */
  __pyx_v_g = __pyx_v_x;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":170
 *     b = alpha + 1
 *     g = x
 *     return hyp1f1(a, b, g) * d             # <<<<<<<<<<<<<<
 * 
 * def eval_laguerre(n, x, out=None):
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "hyp1f1");
  __pyx_t_2 = __site_call3_170_17->Target(__site_call3_170_17, __pyx_context, __pyx_t_3, __pyx_v_a, __pyx_v_b, __pyx_v_g);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_mul_170_27->Target(__site_op_mul_170_27, __pyx_t_2, __pyx_v_d);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":172
 *     return hyp1f1(a, b, g) * d
 * 
 * def eval_laguerre(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate Laguerre polynomial at a point."""
 *     return eval_genlaguerre(n, 0., x, out=out)
 */

static System::Object^ eval_laguerre(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":174
 * def eval_laguerre(n, x, out=None):
 *     """Evaluate Laguerre polynomial at a point."""
 *     return eval_genlaguerre(n, 0., x, out=out)             # <<<<<<<<<<<<<<
 * 
 * def eval_hermite(n, x, out=None):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "eval_genlaguerre");
  __pyx_t_2 = 0.;
  __pyx_t_3 = __site_call3_out_174_27->Target(__site_call3_out_174_27, __pyx_context, __pyx_t_1, __pyx_v_n, __pyx_t_2, __pyx_v_x, __pyx_v_out);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":176
 *     return eval_genlaguerre(n, 0., x, out=out)
 * 
 * def eval_hermite(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate Hermite polynomial at a point."""
 *     n, x = np.broadcast_arrays(n, x)
 */

static System::Object^ eval_hermite(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_v_even;
  System::Object^ __pyx_v_m;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  array<System::Object^>^ __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  System::Object^ __pyx_t_6 = nullptr;
  System::Object^ __pyx_t_7 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }
  __pyx_v_even = nullptr;
  __pyx_v_m = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":178
 * def eval_hermite(n, x, out=None):
 *     """Evaluate Hermite polynomial at a point."""
 *     n, x = np.broadcast_arrays(n, x)             # <<<<<<<<<<<<<<
 *     n, x = np.atleast_1d(n, x)
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_broadcast_arrays_178_13->Target(__site_get_broadcast_arrays_178_13, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call2_178_30->Target(__site_call2_178_30, __pyx_context, __pyx_t_2, __pyx_v_n, __pyx_v_x);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_1, 2)));
  __pyx_t_2 = __pyx_t_3[0];
  __pyx_t_4 = __pyx_t_3[1];
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_v_n = __pyx_t_2;
  __pyx_t_2 = nullptr;
  __pyx_v_x = __pyx_t_4;
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":179
 *     """Evaluate Hermite polynomial at a point."""
 *     n, x = np.broadcast_arrays(n, x)
 *     n, x = np.atleast_1d(n, x)             # <<<<<<<<<<<<<<
 * 
 *     if out is None:
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_4 = __site_get_atleast_1d_179_13->Target(__site_get_atleast_1d_179_13, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call2_179_24->Target(__site_call2_179_24, __pyx_context, __pyx_t_4, __pyx_v_n, __pyx_v_x);
  __pyx_t_4 = nullptr;
  __pyx_t_3 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_1, 2)));
  __pyx_t_4 = __pyx_t_3[0];
  __pyx_t_2 = __pyx_t_3[1];
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_v_n = __pyx_t_4;
  __pyx_t_4 = nullptr;
  __pyx_v_x = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":181
 *     n, x = np.atleast_1d(n, x)
 * 
 *     if out is None:             # <<<<<<<<<<<<<<
 *         out = np.zeros_like(0*n + 0*x)
 *     if (n % 1 != 0).any():
 */
  __pyx_t_5 = (__pyx_v_out == nullptr);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":182
 * 
 *     if out is None:
 *         out = np.zeros_like(0*n + 0*x)             # <<<<<<<<<<<<<<
 *     if (n % 1 != 0).any():
 *         raise ValueError("Order must be integer")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
    __pyx_t_2 = __site_get_zeros_like_182_16->Target(__site_get_zeros_like_182_16, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_op_mul_182_29->Target(__site_op_mul_182_29, __pyx_int_0, __pyx_v_n);
    __pyx_t_4 = __site_op_mul_182_35->Target(__site_op_mul_182_35, __pyx_int_0, __pyx_v_x);
    __pyx_t_6 = __site_op_add_182_32->Target(__site_op_add_182_32, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_call1_182_27->Target(__site_call1_182_27, __pyx_context, __pyx_t_2, __pyx_t_6);
    __pyx_t_2 = nullptr;
    __pyx_t_6 = nullptr;
    __pyx_v_out = __pyx_t_4;
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":183
 *     if out is None:
 *         out = np.zeros_like(0*n + 0*x)
 *     if (n % 1 != 0).any():             # <<<<<<<<<<<<<<
 *         raise ValueError("Order must be integer")
 * 
 */
  __pyx_t_4 = __site_op_mod_183_10->Target(__site_op_mod_183_10, __pyx_v_n, __pyx_int_1);
  __pyx_t_6 = __site_op_ne_183_14->Target(__site_op_ne_183_14, __pyx_t_4, __pyx_int_0);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_get_any_183_19->Target(__site_get_any_183_19, __pyx_t_6, __pyx_context);
  __pyx_t_6 = nullptr;
  __pyx_t_6 = __site_call0_183_23->Target(__site_call0_183_23, __pyx_context, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_5 = __site_istrue_183_23->Target(__site_istrue_183_23, __pyx_t_6);
  __pyx_t_6 = nullptr;
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":184
 *         out = np.zeros_like(0*n + 0*x)
 *     if (n % 1 != 0).any():
 *         raise ValueError("Order must be integer")             # <<<<<<<<<<<<<<
 * 
 *     even = (n % 2 == 0)
 */
    __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_184_24->Target(__site_call1_184_24, __pyx_context, __pyx_t_6, ((System::Object^)"Order must be integer"));
    __pyx_t_6 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":186
 *         raise ValueError("Order must be integer")
 * 
 *     even = (n % 2 == 0)             # <<<<<<<<<<<<<<
 * 
 *     m = n[even]/2
 */
  __pyx_t_4 = __site_op_mod_186_14->Target(__site_op_mod_186_14, __pyx_v_n, __pyx_int_2);
  __pyx_t_6 = __site_op_eq_186_18->Target(__site_op_eq_186_18, __pyx_t_4, __pyx_int_0);
  __pyx_t_4 = nullptr;
  __pyx_v_even = __pyx_t_6;
  __pyx_t_6 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":188
 *     even = (n % 2 == 0)
 * 
 *     m = n[even]/2             # <<<<<<<<<<<<<<
 *     out[even] = ((-1)**m * 2**(2*m) * gamma(1+m)
 *                  * eval_genlaguerre(m, -0.5, x[even]**2))
 */
  __pyx_t_6 = __site_getindex_188_9->Target(__site_getindex_188_9, __pyx_v_n, __pyx_v_even);
  __pyx_t_4 = __site_op_div_188_15->Target(__site_op_div_188_15, __pyx_t_6, __pyx_int_2);
  __pyx_t_6 = nullptr;
  __pyx_v_m = __pyx_t_4;
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":189
 * 
 *     m = n[even]/2
 *     out[even] = ((-1)**m * 2**(2*m) * gamma(1+m)             # <<<<<<<<<<<<<<
 *                  * eval_genlaguerre(m, -0.5, x[even]**2))
 * 
 */
  __pyx_t_4 = __site_op_pow_189_21->Target(__site_op_pow_189_21, __pyx_int_neg_1, __pyx_v_m);
  __pyx_t_6 = __site_op_mul_189_32->Target(__site_op_mul_189_32, __pyx_int_2, __pyx_v_m);
  __pyx_t_2 = __site_op_pow_189_28->Target(__site_op_pow_189_28, __pyx_int_2, __pyx_t_6);
  __pyx_t_6 = nullptr;
  __pyx_t_6 = __site_op_mul_189_25->Target(__site_op_mul_189_25, __pyx_t_4, __pyx_t_2);
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "gamma");
  __pyx_t_4 = __site_op_add_189_45->Target(__site_op_add_189_45, __pyx_int_1, __pyx_v_m);
  __pyx_t_1 = __site_call1_189_43->Target(__site_call1_189_43, __pyx_context, __pyx_t_2, __pyx_t_4);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_op_mul_189_36->Target(__site_op_mul_189_36, __pyx_t_6, __pyx_t_1);
  __pyx_t_6 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":190
 *     m = n[even]/2
 *     out[even] = ((-1)**m * 2**(2*m) * gamma(1+m)
 *                  * eval_genlaguerre(m, -0.5, x[even]**2))             # <<<<<<<<<<<<<<
 * 
 *     m = (n[~even]-1)/2
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "eval_genlaguerre");
  __pyx_t_6 = (-0.5);
  __pyx_t_2 = __site_getindex_190_46->Target(__site_getindex_190_46, __pyx_v_x, __pyx_v_even);
  __pyx_t_7 = __site_op_pow_190_52->Target(__site_op_pow_190_52, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call3_190_35->Target(__site_call3_190_35, __pyx_context, __pyx_t_1, __pyx_v_m, __pyx_t_6, __pyx_t_7);
  __pyx_t_1 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_7 = __site_op_mul_190_17->Target(__site_op_mul_190_17, __pyx_t_4, __pyx_t_2);
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":189
 * 
 *     m = n[even]/2
 *     out[even] = ((-1)**m * 2**(2*m) * gamma(1+m)             # <<<<<<<<<<<<<<
 *                  * eval_genlaguerre(m, -0.5, x[even]**2))
 * 
 */
  __site_setindex_189_7->Target(__site_setindex_189_7, __pyx_v_out, __pyx_v_even, __pyx_t_7);
  __pyx_t_7 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":192
 *                  * eval_genlaguerre(m, -0.5, x[even]**2))
 * 
 *     m = (n[~even]-1)/2             # <<<<<<<<<<<<<<
 *     out[~even] = ((-1)**m * 2**(2*m+1) * gamma(1+m)
 *                   * x[~even] * eval_genlaguerre(m, 0.5, x[~even]**2))
 */
  __pyx_t_7 = __site_OnesComplement_192_11->Target(__site_OnesComplement_192_11, __pyx_v_even);
  __pyx_t_2 = __site_getindex_192_10->Target(__site_getindex_192_10, __pyx_v_n, __pyx_t_7);
  __pyx_t_7 = nullptr;
  __pyx_t_7 = __site_op_sub_192_17->Target(__site_op_sub_192_17, __pyx_t_2, __pyx_int_1);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_div_192_20->Target(__site_op_div_192_20, __pyx_t_7, __pyx_int_2);
  __pyx_t_7 = nullptr;
  __pyx_v_m = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":193
 * 
 *     m = (n[~even]-1)/2
 *     out[~even] = ((-1)**m * 2**(2*m+1) * gamma(1+m)             # <<<<<<<<<<<<<<
 *                   * x[~even] * eval_genlaguerre(m, 0.5, x[~even]**2))
 * 
 */
  __pyx_t_2 = __site_op_pow_193_22->Target(__site_op_pow_193_22, __pyx_int_neg_1, __pyx_v_m);
  __pyx_t_7 = __site_op_mul_193_33->Target(__site_op_mul_193_33, __pyx_int_2, __pyx_v_m);
  __pyx_t_4 = __site_op_add_193_35->Target(__site_op_add_193_35, __pyx_t_7, __pyx_int_1);
  __pyx_t_7 = nullptr;
  __pyx_t_7 = __site_op_pow_193_29->Target(__site_op_pow_193_29, __pyx_int_2, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_op_mul_193_26->Target(__site_op_mul_193_26, __pyx_t_2, __pyx_t_7);
  __pyx_t_2 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "gamma");
  __pyx_t_2 = __site_op_add_193_48->Target(__site_op_add_193_48, __pyx_int_1, __pyx_v_m);
  __pyx_t_6 = __site_call1_193_46->Target(__site_call1_193_46, __pyx_context, __pyx_t_7, __pyx_t_2);
  __pyx_t_7 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_mul_193_39->Target(__site_op_mul_193_39, __pyx_t_4, __pyx_t_6);
  __pyx_t_4 = nullptr;
  __pyx_t_6 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":194
 *     m = (n[~even]-1)/2
 *     out[~even] = ((-1)**m * 2**(2*m+1) * gamma(1+m)
 *                   * x[~even] * eval_genlaguerre(m, 0.5, x[~even]**2))             # <<<<<<<<<<<<<<
 * 
 *     return out
 */
  __pyx_t_6 = __site_OnesComplement_194_22->Target(__site_OnesComplement_194_22, __pyx_v_even);
  __pyx_t_4 = __site_getindex_194_21->Target(__site_getindex_194_21, __pyx_v_x, __pyx_t_6);
  __pyx_t_6 = nullptr;
  __pyx_t_6 = __site_op_mul_194_18->Target(__site_op_mul_194_18, __pyx_t_2, __pyx_t_4);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "eval_genlaguerre");
  __pyx_t_2 = 0.5;
  __pyx_t_7 = __site_OnesComplement_194_58->Target(__site_OnesComplement_194_58, __pyx_v_even);
  __pyx_t_1 = __site_getindex_194_57->Target(__site_getindex_194_57, __pyx_v_x, __pyx_t_7);
  __pyx_t_7 = nullptr;
  __pyx_t_7 = __site_op_pow_194_64->Target(__site_op_pow_194_64, __pyx_t_1, __pyx_int_2);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call3_194_47->Target(__site_call3_194_47, __pyx_context, __pyx_t_4, __pyx_v_m, __pyx_t_2, __pyx_t_7);
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_7 = __site_op_mul_194_29->Target(__site_op_mul_194_29, __pyx_t_6, __pyx_t_1);
  __pyx_t_6 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":193
 * 
 *     m = (n[~even]-1)/2
 *     out[~even] = ((-1)**m * 2**(2*m+1) * gamma(1+m)             # <<<<<<<<<<<<<<
 *                   * x[~even] * eval_genlaguerre(m, 0.5, x[~even]**2))
 * 
 */
  __pyx_t_1 = __site_OnesComplement_193_8->Target(__site_OnesComplement_193_8, __pyx_v_even);
  __site_setindex_193_7->Target(__site_setindex_193_7, __pyx_v_out, __pyx_t_1, __pyx_t_7);
  __pyx_t_1 = nullptr;
  __pyx_t_7 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":196
 *                   * x[~even] * eval_genlaguerre(m, 0.5, x[~even]**2))
 * 
 *     return out             # <<<<<<<<<<<<<<
 * 
 * def eval_hermitenorm(n, x, out=None):
 */
  __pyx_r = __pyx_v_out;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":198
 *     return out
 * 
 * def eval_hermitenorm(n, x, out=None):             # <<<<<<<<<<<<<<
 *     """Evaluate normalized Hermite polynomial at a point."""
 *     return eval_hermite(n, x/sqrt(2)) * 2**(-n/2.0)
 */

static System::Object^ eval_hermitenorm(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ out) {
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_out = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  __pyx_v_n = n;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(out) == nullptr) {
    __pyx_v_out = out;
  } else {
    __pyx_v_out = ((System::Object^)nullptr);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":200
 * def eval_hermitenorm(n, x, out=None):
 *     """Evaluate normalized Hermite polynomial at a point."""
 *     return eval_hermite(n, x/sqrt(2)) * 2**(-n/2.0)             # <<<<<<<<<<<<<<
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "eval_hermite");
  __pyx_t_2 = sqrt(2.0);
  __pyx_t_3 = __site_op_div_200_28->Target(__site_op_div_200_28, __pyx_v_x, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call2_200_23->Target(__site_call2_200_23, __pyx_context, __pyx_t_1, __pyx_v_n, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_Negate_200_44->Target(__site_Negate_200_44, __pyx_v_n);
  __pyx_t_1 = 2.0;
  __pyx_t_4 = __site_op_div_200_46->Target(__site_op_div_200_46, __pyx_t_3, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_pow_200_41->Target(__site_op_pow_200_41, __pyx_int_2, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_op_mul_200_38->Target(__site_op_mul_200_38, __pyx_t_2, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
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
  __pyx_int_0 = 0;
  __pyx_int_1 = 1;
  __pyx_int_2 = 2;
  __pyx_int_neg_1 = -1;

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
  __site_get_exp_92_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exp", false));
  __site_op_add_92_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_92_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_92_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_92_40 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_sub_92_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_add_92_57 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_sub_92_59 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_call1_92_55 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_sub_92_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_call1_92_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_96_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call2_96_13 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_Negate_97_8 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::Negate));
  __site_op_add_98_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_98_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_98_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_99_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_sub_100_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_div_100_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call4_101_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(4)));
  __site_op_mul_101_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_get_exp_105_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exp", false));
  __site_op_add_105_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_105_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_105_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_105_42 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_105_33 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_mul_105_59 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_105_61 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_105_57 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_sub_105_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_call1_105_19 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_sub_106_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_sub_106_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_mul_106_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_sub_106_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_call4_106_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(4)));
  __site_op_mul_106_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_mul_110_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_110_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_110_13 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_110_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_110_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_div_110_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_mul_110_43 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call1_110_41 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_div_110_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_Negate_111_8 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::Negate));
  __site_op_mul_112_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_112_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_113_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_sub_114_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_div_114_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call4_115_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(4)));
  __site_op_mul_115_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call3_124_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_op_add_128_9 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_Negate_129_8 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::Negate));
  __site_op_add_130_9 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_sub_132_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_div_132_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call4_133_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(4)));
  __site_op_mul_133_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_137_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call2_out_137_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument("out")})));
  __site_op_div_141_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call3_141_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_op_mul_141_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_mul_145_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_sub_145_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_call2_out_145_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument("out")})));
  __site_op_mul_149_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_sub_149_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_call2_out_149_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument("out")})));
  __site_Negate_154_8 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::Negate));
  __site_op_add_155_9 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_sub_157_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_div_157_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call4_158_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(4)));
  __site_op_mul_158_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_mul_162_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_sub_162_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_call2_out_162_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument("out")})));
  __site_op_add_166_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call2_166_13 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_Negate_167_8 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::Negate));
  __site_op_add_168_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call3_170_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_op_mul_170_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call3_out_174_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument::Simple, Argument("out")})));
  __site_get_broadcast_arrays_178_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "broadcast_arrays", false));
  __site_call2_178_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_atleast_1d_179_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "atleast_1d", false));
  __site_call2_179_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_zeros_like_182_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros_like", false));
  __site_op_mul_182_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_mul_182_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_182_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_182_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mod_183_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_op_ne_183_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_get_any_183_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "any", false));
  __site_call0_183_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_istrue_183_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_184_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mod_186_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_op_eq_186_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_getindex_188_9 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_div_188_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_pow_189_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_mul_189_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_pow_189_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_mul_189_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_189_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_189_43 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mul_189_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_getindex_190_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_pow_190_52 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_call3_190_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_op_mul_190_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_setindex_189_7 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_OnesComplement_192_11 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::OnesComplement));
  __site_getindex_192_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_sub_192_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_div_192_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_pow_193_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_mul_193_33 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_193_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_pow_193_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_mul_193_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_193_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_193_46 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mul_193_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_OnesComplement_194_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::OnesComplement));
  __site_getindex_194_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_mul_194_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_OnesComplement_194_58 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::OnesComplement));
  __site_getindex_194_57 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_pow_194_64 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_call3_194_47 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_op_mul_194_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_OnesComplement_193_8 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::OnesComplement));
  __site_setindex_193_7 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_op_div_200_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call2_200_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_Negate_200_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::Negate));
  __site_op_div_200_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_pow_200_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_mul_200_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
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
  __pyx_delegate_val_eval_poly_chebyt = gcnew __pyx_delegate_t_5scipy_7special_15orthogonal_eval_eval_poly_chebyt(eval_poly_chebyt);
  __pyx_function_pointer_eval_poly_chebyt = (__pyx_fp_t_eval_poly_chebyt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_eval_poly_chebyt).ToPointer());
  __pyx_delegate_val__loop_id_d = gcnew __pyx_delegate_t_5scipy_7special_15orthogonal_eval__loop_id_d(_loop_id_d);
  __pyx_function_pointer__loop_id_d = (__pyx_fp_t__loop_id_d)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val__loop_id_d).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  char *__pyx_t_2;
  System::IntPtr __pyx_t_3;
  char *__pyx_t_4;
  System::IntPtr __pyx_t_5;
  System::Object^ __pyx_t_6 = nullptr;
  PythonDictionary^ __pyx_t_7;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":60
 *         ip1 += steps[0]; ip2 += steps[1]; op += steps[2]
 * 
 * cdef char *_id_d_types = <char *>malloc(3)             # <<<<<<<<<<<<<<
 * 
 * cdef np.PyUFuncGenericFunction *_id_d_funcs = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction))
 */
  __pyx_v_5scipy_7special_15orthogonal_eval__id_d_types = ((char *)malloc(3));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":62
 * cdef char *_id_d_types = <char *>malloc(3)
 * 
 * cdef np.PyUFuncGenericFunction *_id_d_funcs = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction))             # <<<<<<<<<<<<<<
 * 
 * _id_d_types[0] = np.NPY_LONG
 */
  __pyx_v_5scipy_7special_15orthogonal_eval__id_d_funcs = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction))));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":64
 * cdef np.PyUFuncGenericFunction *_id_d_funcs = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction))
 * 
 * _id_d_types[0] = np.NPY_LONG             # <<<<<<<<<<<<<<
 * _id_d_types[1] = np.NPY_DOUBLE
 * _id_d_types[2] = np.NPY_DOUBLE
 */
  (__pyx_v_5scipy_7special_15orthogonal_eval__id_d_types[0]) = NPY_LONG;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":65
 * 
 * _id_d_types[0] = np.NPY_LONG
 * _id_d_types[1] = np.NPY_DOUBLE             # <<<<<<<<<<<<<<
 * _id_d_types[2] = np.NPY_DOUBLE
 * 
 */
  (__pyx_v_5scipy_7special_15orthogonal_eval__id_d_types[1]) = NPY_DOUBLE;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":66
 * _id_d_types[0] = np.NPY_LONG
 * _id_d_types[1] = np.NPY_DOUBLE
 * _id_d_types[2] = np.NPY_DOUBLE             # <<<<<<<<<<<<<<
 * 
 * _id_d_funcs[0] = _loop_id_d
 */
  (__pyx_v_5scipy_7special_15orthogonal_eval__id_d_types[2]) = NPY_DOUBLE;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":68
 * _id_d_types[2] = np.NPY_DOUBLE
 * 
 * _id_d_funcs[0] = _loop_id_d             # <<<<<<<<<<<<<<
 * 
 * #import_array()
 */
  (__pyx_v_5scipy_7special_15orthogonal_eval__id_d_funcs[0]) = __pyx_function_pointer__loop_id_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":75
 * #--
 * 
 * cdef void **chebyt_data = <void **>malloc(sizeof(void*))             # <<<<<<<<<<<<<<
 * chebyt_data[0] = <void*>eval_poly_chebyt
 * empty = ""
 */
  __pyx_v_5scipy_7special_15orthogonal_eval_chebyt_data = ((void **)malloc((sizeof(void *))));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":76
 * 
 * cdef void **chebyt_data = <void **>malloc(sizeof(void*))
 * chebyt_data[0] = <void*>eval_poly_chebyt             # <<<<<<<<<<<<<<
 * empty = ""
 * _eval_chebyt = np.PyUFunc_FromFuncAndData(_id_d_funcs, chebyt_data,
 */
  (__pyx_v_5scipy_7special_15orthogonal_eval_chebyt_data[0]) = ((void *)__pyx_function_pointer_eval_poly_chebyt);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":77
 * cdef void **chebyt_data = <void **>malloc(sizeof(void*))
 * chebyt_data[0] = <void*>eval_poly_chebyt
 * empty = ""             # <<<<<<<<<<<<<<
 * _eval_chebyt = np.PyUFunc_FromFuncAndData(_id_d_funcs, chebyt_data,
 *                                        _id_d_types, 1, 2, 1, 0, empty, empty, 0)
 */
  PythonOps::SetGlobal(__pyx_context, "empty", ((System::Object^)""));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":79
 * empty = ""
 * _eval_chebyt = np.PyUFunc_FromFuncAndData(_id_d_funcs, chebyt_data,
 *                                        _id_d_types, 1, 2, 1, 0, empty, empty, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "empty");
  __pyx_t_3 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_1));
  __pyx_t_2 = static_cast<char *>(__pyx_t_3.ToPointer());
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "empty");
  __pyx_t_5 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_1));
  __pyx_t_4 = static_cast<char *>(__pyx_t_5.ToPointer());
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_15orthogonal_eval__id_d_funcs, __pyx_v_5scipy_7special_15orthogonal_eval_chebyt_data, __pyx_v_5scipy_7special_15orthogonal_eval__id_d_types, 1, 2, 1, 0, __pyx_t_2, __pyx_t_4, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_3);
  InteropServices::Marshal::FreeHGlobal(__pyx_t_5);
  PythonOps::SetGlobal(__pyx_context, "_eval_chebyt", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":86
 * #------------------------------------------------------------------------------
 * 
 * import numpy as np             # <<<<<<<<<<<<<<
 * from scipy.special._cephes import gamma, hyp2f1, hyp1f1, gammaln
 * from numpy import exp
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":87
 * 
 * import numpy as np
 * from scipy.special._cephes import gamma, hyp2f1, hyp1f1, gammaln             # <<<<<<<<<<<<<<
 * from numpy import exp
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportWithNames(__pyx_context, "scipy.special._cephes", gcnew array<System::String^>{"gamma", "hyp2f1", "hyp1f1", "gammaln"}, -1));
  __pyx_t_6 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "gamma");
  PythonOps::SetGlobal(__pyx_context, "gamma", __pyx_t_6);
  __pyx_t_6 = nullptr;
  __pyx_t_6 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "hyp2f1");
  PythonOps::SetGlobal(__pyx_context, "hyp2f1", __pyx_t_6);
  __pyx_t_6 = nullptr;
  __pyx_t_6 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "hyp1f1");
  PythonOps::SetGlobal(__pyx_context, "hyp1f1", __pyx_t_6);
  __pyx_t_6 = nullptr;
  __pyx_t_6 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "gammaln");
  PythonOps::SetGlobal(__pyx_context, "gammaln", __pyx_t_6);
  __pyx_t_6 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":88
 * import numpy as np
 * from scipy.special._cephes import gamma, hyp2f1, hyp1f1, gammaln
 * from numpy import exp             # <<<<<<<<<<<<<<
 * 
 * def binom(n, k):
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportWithNames(__pyx_context, "numpy", gcnew array<System::String^>{"exp"}, -1));
  __pyx_t_6 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "exp");
  PythonOps::SetGlobal(__pyx_context, "exp", __pyx_t_6);
  __pyx_t_6 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\orthogonal_eval.pyx":1
 * """             # <<<<<<<<<<<<<<
 * Evaluate orthogonal polynomial values using recurrence relations
 * or by calling special functions.
 */
  __pyx_t_7 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_7));
  __pyx_t_7 = nullptr;

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

static char *__pyx_v_5scipy_7special_15orthogonal_eval__id_d_types;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_15orthogonal_eval__id_d_funcs;
static void **__pyx_v_5scipy_7special_15orthogonal_eval_chebyt_data;
/* Cython code section 'utility_code_def' */

/* Runtime support code */
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__special__orthogonal_eval", module_orthogonal_eval::typeid)];
};
