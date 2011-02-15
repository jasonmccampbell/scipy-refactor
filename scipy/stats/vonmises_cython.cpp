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
  dict["__module__"] = "scipy.stats.vonmises_cython";
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
#define __PYX_HAVE_API__scipy__stats__vonmises_cython
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "math.h"

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
/* Cython code section 'complex_type_declarations' */
/* Cython code section 'type_declarations' */

/* Type declarations */

typedef void (*__pyx_t_5numpy_PyUFuncGenericFunction)(char **, __pyx_t_5numpy_npy_intp *, __pyx_t_5numpy_npy_intp *, void *);
/* Cython code section 'utility_code_proto' */

/* Run-time type information about structs used with buffers */
struct __Pyx_StructField_;

typedef struct {
  const char* name; /* for error messages only */
  struct __Pyx_StructField_* fields;
  size_t size;     /* sizeof(type) */
  char typegroup; /* _R_eal, _C_omplex, Signed _I_nt, _U_nsigned int, _S_truct, _P_ointer, _O_bject */
} __Pyx_TypeInfo;

typedef struct __Pyx_StructField_ {
  __Pyx_TypeInfo* type;
  const char* name;
  size_t offset;
} __Pyx_StructField;

typedef struct {
  __Pyx_StructField* field;
  size_t parent_offset;
} __Pyx_BufFmt_StackElem;


static CYTHON_INLINE void  __Pyx_GetBufferAndValidate(NumpyDotNet::IExtBufferProtocol^& buf, System::Object^ obj, __Pyx_TypeInfo* dtype, int flags, int nd, int cast, __Pyx_BufFmt_StackElem* stack);
static CYTHON_INLINE void __Pyx_SafeReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ info);
#define __Pyx_BufPtrFull1d(type, buf, i0, s0, o0) (type)(__Pyx_BufPtrFull1d_imp(buf, i0, s0, o0))
static CYTHON_INLINE void* __Pyx_BufPtrFull1d_imp(void* buf, Py_ssize_t i0, Py_ssize_t s0, Py_ssize_t o0);
static int __Pyx_GetBuffer(System::Object^ obj, NumpyDotNet::IExtBufferProtocol^& view, int flags);
static void __Pyx_ReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ view);

Py_ssize_t __Pyx_zeros[] = {0};
Py_ssize_t __Pyx_minusones[] = {-1};
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
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *);
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void *__pyx_delegate_t_5numpy_PyArray_DATA(NumpyDotNet::ndarray^);
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_intp_t *__pyx_delegate_t_5numpy_PyArray_DIMS(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
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
/* Module declarations from cython */
/* Module declarations from scipy.stats.vonmises_cython */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate double __pyx_delegate_t_5scipy_5stats_15vonmises_cython_von_mises_cdf_series(double, double, unsigned int);
static double von_mises_cdf_series(double, double, unsigned int); /*proto*/
/* Cython code section 'typeinfo' */
static __Pyx_TypeInfo __Pyx_TypeInfo_double = { "double", NULL, sizeof(double), 'R' };
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.stats.vonmises_cython"

/* Implementation of scipy.stats.vonmises_cython */
namespace clr_vonmises_cython {
  public ref class module_vonmises_cython sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_pi_26_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_26_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_26_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_26_14;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_pi_26_33;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_26_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_26_27;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_double_26_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_sqrt_29_10;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_pi_29_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_29_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_29_15;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exp_29_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_29_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_29_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_29_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_29_34;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_sin_30_12;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_30_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_30_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_30_9;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_31_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_32_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_32_26;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_32_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_32_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_32_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_32_33;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_32_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_32_49;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_32_47;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_32_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_32_52;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_32_63;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_32_68;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_32_66;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_32_71;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_32_60;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_32_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_pow_32_75;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_32_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_32_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_stats_33_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_norm_33_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_cdf_33_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_33_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_asarray_42_10;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_42_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_asarray_43_10;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_43_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_44_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_44_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_44_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_44_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_44_34;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_atleast_1d_46_10;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_46_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_atleast_1d_47_10;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_47_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_round_48_11;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_pi_48_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_48_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_48_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_48_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_49_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_pi_49_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_49_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_49_9;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_broadcast_arrays_56_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_56_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_57_15;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_57_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_float_57_39;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_57_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_59_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_60_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_61_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_astype_61_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_float_61_37;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_61_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_62_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_astype_62_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_float_62_37;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_62_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_63_22;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_long_63_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_70_10;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_OnesComplement_71_55;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_71_54;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_OnesComplement_71_70;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_71_69;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_71_51;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_OnesComplement_71_11;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_71_10;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_73_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_74_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_76_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_76_26;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_194_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_194_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_196_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_196_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_205_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_205_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_209_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_209_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_214_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_FromAny_214_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_214_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_217_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_217_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ior_218_14;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_219_77;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_222_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_225_14;
static CodeContext^ __pyx_context;
/* Cython code section 'dotnet_globals' */


static Types::PythonType^ __pyx_ptype_5numpy_ndarray = nullptr;
static Types::PythonType^ __pyx_ptype_5numpy_dtype = nullptr;


/* Cython code section 'decls' */
static int^ __pyx_int_0;
static int^ __pyx_int_2;
static int^ __pyx_int_3;
static int^ __pyx_int_4;
static int^ __pyx_int_16;
static int^ __pyx_int_24;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":12
 * 
 * 
 * cdef double von_mises_cdf_series(double k,double x,unsigned int p):             # <<<<<<<<<<<<<<
 *     cdef double s, c, sn, cn, R, V
 *     cdef unsigned int n
 */

static  double von_mises_cdf_series(double __pyx_v_k, double __pyx_v_x, unsigned int __pyx_v_p) {
  double __pyx_v_s;
  double __pyx_v_c;
  double __pyx_v_sn;
  double __pyx_v_cn;
  double __pyx_v_R;
  double __pyx_v_V;
  unsigned int __pyx_v_n;
  double __pyx_r;
  unsigned int __pyx_t_1;
  double __pyx_t_2;
  double __pyx_t_3;
  long __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":15
 *     cdef double s, c, sn, cn, R, V
 *     cdef unsigned int n
 *     s = sin(x)             # <<<<<<<<<<<<<<
 *     c = cos(x)
 *     sn = sin(p*x)
 */
  __pyx_v_s = sin(__pyx_v_x);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":16
 *     cdef unsigned int n
 *     s = sin(x)
 *     c = cos(x)             # <<<<<<<<<<<<<<
 *     sn = sin(p*x)
 *     cn = cos(p*x)
 */
  __pyx_v_c = cos(__pyx_v_x);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":17
 *     s = sin(x)
 *     c = cos(x)
 *     sn = sin(p*x)             # <<<<<<<<<<<<<<
 *     cn = cos(p*x)
 *     R = 0
 */
  __pyx_v_sn = sin((__pyx_v_p * __pyx_v_x));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":18
 *     c = cos(x)
 *     sn = sin(p*x)
 *     cn = cos(p*x)             # <<<<<<<<<<<<<<
 *     R = 0
 *     V = 0
 */
  __pyx_v_cn = cos((__pyx_v_p * __pyx_v_x));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":19
 *     sn = sin(p*x)
 *     cn = cos(p*x)
 *     R = 0             # <<<<<<<<<<<<<<
 *     V = 0
 *     for n in range(p-1,0,-1):
 */
  __pyx_v_R = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":20
 *     cn = cos(p*x)
 *     R = 0
 *     V = 0             # <<<<<<<<<<<<<<
 *     for n in range(p-1,0,-1):
 *         sn, cn = sn*c - cn*s, cn*c + sn*s
 */
  __pyx_v_V = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":21
 *     R = 0
 *     V = 0
 *     for n in range(p-1,0,-1):             # <<<<<<<<<<<<<<
 *         sn, cn = sn*c - cn*s, cn*c + sn*s
 *         R = 1./(2*n/k + R)
 */
  for (__pyx_t_1 = (__pyx_v_p - 1); __pyx_t_1 > 0; __pyx_t_1-=1) {
    __pyx_v_n = __pyx_t_1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":22
 *     V = 0
 *     for n in range(p-1,0,-1):
 *         sn, cn = sn*c - cn*s, cn*c + sn*s             # <<<<<<<<<<<<<<
 *         R = 1./(2*n/k + R)
 *         V = R*(sn/n+V)
 */
    __pyx_t_2 = ((__pyx_v_sn * __pyx_v_c) - (__pyx_v_cn * __pyx_v_s));
    __pyx_t_3 = ((__pyx_v_cn * __pyx_v_c) + (__pyx_v_sn * __pyx_v_s));
    __pyx_v_sn = __pyx_t_2;
    __pyx_v_cn = __pyx_t_3;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":23
 *     for n in range(p-1,0,-1):
 *         sn, cn = sn*c - cn*s, cn*c + sn*s
 *         R = 1./(2*n/k + R)             # <<<<<<<<<<<<<<
 *         V = R*(sn/n+V)
 * 
 */
    __pyx_t_4 = (2 * __pyx_v_n);
    if (unlikely(__pyx_v_k == 0)) {
      throw PythonOps::ZeroDivisionError("float division");
    }
    __pyx_t_3 = ((__pyx_t_4 / __pyx_v_k) + __pyx_v_R);
    if (unlikely(__pyx_t_3 == 0)) {
      throw PythonOps::ZeroDivisionError("float division");
    }
    __pyx_v_R = (1. / __pyx_t_3);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":24
 *         sn, cn = sn*c - cn*s, cn*c + sn*s
 *         R = 1./(2*n/k + R)
 *         V = R*(sn/n+V)             # <<<<<<<<<<<<<<
 * 
 *     return 0.5+x/(2*np.pi) + V/np.pi
 */
    if (unlikely(__pyx_v_n == 0)) {
      throw PythonOps::ZeroDivisionError("float division");
    }
    __pyx_v_V = (__pyx_v_R * ((__pyx_v_sn / __pyx_v_n) + __pyx_v_V));
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":26
 *         V = R*(sn/n+V)
 * 
 *     return 0.5+x/(2*np.pi) + V/np.pi             # <<<<<<<<<<<<<<
 * 
 * def von_mises_cdf_normalapprox(k,x,C1):
 */
  __pyx_t_5 = 0.5;
  __pyx_t_6 = __pyx_v_x;
  __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_8 = __site_get_pi_26_22->Target(__site_get_pi_26_22, __pyx_t_7, __pyx_context);
  __pyx_t_7 = nullptr;
  __pyx_t_7 = __site_op_mul_26_19->Target(__site_op_mul_26_19, __pyx_int_2, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_t_8 = __site_op_div_26_16->Target(__site_op_div_26_16, __pyx_t_6, __pyx_t_7);
  __pyx_t_6 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_7 = __site_op_add_26_14->Target(__site_op_add_26_14, __pyx_t_5, __pyx_t_8);
  __pyx_t_5 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_8 = __pyx_v_V;
  __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_6 = __site_get_pi_26_33->Target(__site_get_pi_26_33, __pyx_t_5, __pyx_context);
  __pyx_t_5 = nullptr;
  __pyx_t_5 = __site_op_div_26_30->Target(__site_op_div_26_30, __pyx_t_8, __pyx_t_6);
  __pyx_t_8 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_6 = __site_op_add_26_27->Target(__site_op_add_26_27, __pyx_t_7, __pyx_t_5);
  __pyx_t_7 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_3 = __site_cvt_double_26_27->Target(__site_cvt_double_26_27, __pyx_t_6);
  __pyx_t_6 = nullptr;
  __pyx_r = __pyx_t_3;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":28
 *     return 0.5+x/(2*np.pi) + V/np.pi
 * 
 * def von_mises_cdf_normalapprox(k,x,C1):             # <<<<<<<<<<<<<<
 *     b = np.sqrt(2/np.pi)*np.exp(k)/i0(k)
 *     z = b*np.sin(x/2.)
 */

static System::Object^ von_mises_cdf_normalapprox(System::Object^ k, System::Object^ x, System::Object^ C1) {
  System::Object^ __pyx_v_k = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_C1 = nullptr;
  System::Object^ __pyx_v_b;
  System::Object^ __pyx_v_z;
  System::Object^ __pyx_v_C;
  System::Object^ __pyx_v_chi;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_k = k;
  __pyx_v_x = x;
  __pyx_v_C1 = C1;
  __pyx_v_b = nullptr;
  __pyx_v_z = nullptr;
  __pyx_v_C = nullptr;
  __pyx_v_chi = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":29
 * 
 * def von_mises_cdf_normalapprox(k,x,C1):
 *     b = np.sqrt(2/np.pi)*np.exp(k)/i0(k)             # <<<<<<<<<<<<<<
 *     z = b*np.sin(x/2.)
 *     C = 24*k
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_sqrt_29_10->Target(__site_get_sqrt_29_10, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_3 = __site_get_pi_29_20->Target(__site_get_pi_29_20, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_div_29_17->Target(__site_op_div_29_17, __pyx_int_2, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_call1_29_15->Target(__site_call1_29_15, __pyx_context, __pyx_t_2, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_exp_29_27->Target(__site_get_exp_29_27, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_29_31->Target(__site_call1_29_31, __pyx_context, __pyx_t_2, __pyx_v_k);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_mul_29_24->Target(__site_op_mul_29_24, __pyx_t_3, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "i0");
  __pyx_t_3 = __site_call1_29_37->Target(__site_call1_29_37, __pyx_context, __pyx_t_1, __pyx_v_k);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_div_29_34->Target(__site_op_div_29_34, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_v_b = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":30
 * def von_mises_cdf_normalapprox(k,x,C1):
 *     b = np.sqrt(2/np.pi)*np.exp(k)/i0(k)
 *     z = b*np.sin(x/2.)             # <<<<<<<<<<<<<<
 *     C = 24*k
 *     chi = z - z**3/((C-2*z**2-16)/3.-(z**4+7/4.*z**2+167./2)/(C+C1-z**2+3))**2
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_3 = __site_get_sin_30_12->Target(__site_get_sin_30_12, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = 2.;
  __pyx_t_2 = __site_op_div_30_18->Target(__site_op_div_30_18, __pyx_v_x, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_30_16->Target(__site_call1_30_16, __pyx_context, __pyx_t_3, __pyx_t_2);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_mul_30_9->Target(__site_op_mul_30_9, __pyx_v_b, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_z = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":31
 *     b = np.sqrt(2/np.pi)*np.exp(k)/i0(k)
 *     z = b*np.sin(x/2.)
 *     C = 24*k             # <<<<<<<<<<<<<<
 *     chi = z - z**3/((C-2*z**2-16)/3.-(z**4+7/4.*z**2+167./2)/(C+C1-z**2+3))**2
 *     return scipy.stats.norm.cdf(z)
 */
  __pyx_t_2 = __site_op_mul_31_10->Target(__site_op_mul_31_10, __pyx_int_24, __pyx_v_k);
  __pyx_v_C = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":32
 *     z = b*np.sin(x/2.)
 *     C = 24*k
 *     chi = z - z**3/((C-2*z**2-16)/3.-(z**4+7/4.*z**2+167./2)/(C+C1-z**2+3))**2             # <<<<<<<<<<<<<<
 *     return scipy.stats.norm.cdf(z)
 * 
 */
  __pyx_t_2 = __site_op_pow_32_15->Target(__site_op_pow_32_15, __pyx_v_z, __pyx_int_3);
  __pyx_t_1 = __site_op_pow_32_26->Target(__site_op_pow_32_26, __pyx_v_z, __pyx_int_2);
  __pyx_t_3 = __site_op_mul_32_24->Target(__site_op_mul_32_24, __pyx_int_2, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_sub_32_22->Target(__site_op_sub_32_22, __pyx_v_C, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_sub_32_29->Target(__site_op_sub_32_29, __pyx_t_1, __pyx_int_16);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = 3.;
  __pyx_t_4 = __site_op_div_32_33->Target(__site_op_div_32_33, __pyx_t_3, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_pow_32_39->Target(__site_op_pow_32_39, __pyx_v_z, __pyx_int_4);
  __pyx_t_3 = (7.0 / 4.);
  __pyx_t_5 = __site_op_pow_32_49->Target(__site_op_pow_32_49, __pyx_v_z, __pyx_int_2);
  __pyx_t_6 = __site_op_mul_32_47->Target(__site_op_mul_32_47, __pyx_t_3, __pyx_t_5);
  __pyx_t_3 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_5 = __site_op_add_32_42->Target(__site_op_add_32_42, __pyx_t_1, __pyx_t_6);
  __pyx_t_1 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_6 = (167. / 2.0);
  __pyx_t_1 = __site_op_add_32_52->Target(__site_op_add_32_52, __pyx_t_5, __pyx_t_6);
  __pyx_t_5 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_6 = __site_op_add_32_63->Target(__site_op_add_32_63, __pyx_v_C, __pyx_v_C1);
  __pyx_t_5 = __site_op_pow_32_68->Target(__site_op_pow_32_68, __pyx_v_z, __pyx_int_2);
  __pyx_t_3 = __site_op_sub_32_66->Target(__site_op_sub_32_66, __pyx_t_6, __pyx_t_5);
  __pyx_t_6 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_5 = __site_op_add_32_71->Target(__site_op_add_32_71, __pyx_t_3, __pyx_int_3);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_div_32_60->Target(__site_op_div_32_60, __pyx_t_1, __pyx_t_5);
  __pyx_t_1 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_5 = __site_op_sub_32_36->Target(__site_op_sub_32_36, __pyx_t_4, __pyx_t_3);
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_pow_32_75->Target(__site_op_pow_32_75, __pyx_t_5, __pyx_int_2);
  __pyx_t_5 = nullptr;
  __pyx_t_5 = __site_op_div_32_18->Target(__site_op_div_32_18, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_sub_32_12->Target(__site_op_sub_32_12, __pyx_v_z, __pyx_t_5);
  __pyx_t_5 = nullptr;
  __pyx_v_chi = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":33
 *     C = 24*k
 *     chi = z - z**3/((C-2*z**2-16)/3.-(z**4+7/4.*z**2+167./2)/(C+C1-z**2+3))**2
 *     return scipy.stats.norm.cdf(z)             # <<<<<<<<<<<<<<
 * 
 * cimport cython
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "scipy");
  __pyx_t_5 = __site_get_stats_33_16->Target(__site_get_stats_33_16, __pyx_t_3, __pyx_context);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_get_norm_33_22->Target(__site_get_norm_33_22, __pyx_t_5, __pyx_context);
  __pyx_t_5 = nullptr;
  __pyx_t_5 = __site_get_cdf_33_27->Target(__site_get_cdf_33_27, __pyx_t_3, __pyx_context);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_call1_33_31->Target(__site_call1_33_31, __pyx_context, __pyx_t_5, __pyx_v_z);
  __pyx_t_5 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":37
 * cimport cython
 * @cython.boundscheck(False)
 * def von_mises_cdf(k,x):             # <<<<<<<<<<<<<<
 *     cdef np.ndarray[double, ndim=1] temp, temp_xs, temp_ks
 *     cdef unsigned int i, p
 */

static System::Object^ von_mises_cdf(System::Object^ k, System::Object^ x) {
  System::Object^ __pyx_v_k = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_temp;
  NumpyDotNet::ndarray^ __pyx_v_temp_xs;
  NumpyDotNet::ndarray^ __pyx_v_temp_ks;
  unsigned int __pyx_v_i;
  unsigned int __pyx_v_p;
  double __pyx_v_a1;
  double __pyx_v_a2;
  double __pyx_v_a3;
  double __pyx_v_a4;
  double __pyx_v_C1;
  double __pyx_v_CK;
  System::Object^ __pyx_v_zerodim;
  System::Object^ __pyx_v_ix;
  System::Object^ __pyx_v_bx;
  System::Object^ __pyx_v_bk;
  System::Object^ __pyx_v_result;
  System::Object^ __pyx_v_c_small_k;
  NumpyDotNet::IExtBufferProtocol^ __pyx_bstruct_temp;
  Py_ssize_t __pyx_bstride_0_temp = 0;
  Py_ssize_t __pyx_bshape_0_temp = 0;
  Py_ssize_t __pyx_boffset_0_temp = -1;
  NumpyDotNet::IExtBufferProtocol^ __pyx_bstruct_temp_xs;
  Py_ssize_t __pyx_bstride_0_temp_xs = 0;
  Py_ssize_t __pyx_bshape_0_temp_xs = 0;
  Py_ssize_t __pyx_boffset_0_temp_xs = -1;
  NumpyDotNet::IExtBufferProtocol^ __pyx_bstruct_temp_ks;
  Py_ssize_t __pyx_bstride_0_temp_ks = 0;
  Py_ssize_t __pyx_bshape_0_temp_ks = 0;
  Py_ssize_t __pyx_boffset_0_temp_ks = -1;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  double __pyx_t_5;
  double __pyx_t_6;
  double __pyx_t_7;
  double __pyx_t_8;
  array<System::Object^>^ __pyx_t_9;
  System::Object^ __pyx_t_10 = nullptr;
  NumpyDotNet::ndarray^ __pyx_t_11 = nullptr;
  int __pyx_t_12;
  long __pyx_t_13;
  unsigned int __pyx_t_14;
  unsigned int __pyx_t_15;
  unsigned int __pyx_t_16;
  unsigned int __pyx_t_17;
  unsigned int __pyx_t_18;
  unsigned int __pyx_t_19;
  unsigned int __pyx_t_20;
  unsigned int __pyx_t_21;
  unsigned int __pyx_t_22;
  unsigned int __pyx_t_23;
  System::Object^ __pyx_t_24 = nullptr;
  int __pyx_t_25;
  __pyx_v_k = k;
  __pyx_v_x = x;
  __pyx_v_temp = nullptr;
  __pyx_v_temp_xs = nullptr;
  __pyx_v_temp_ks = nullptr;
  __pyx_v_zerodim = nullptr;
  __pyx_v_ix = nullptr;
  __pyx_v_bx = nullptr;
  __pyx_v_bk = nullptr;
  __pyx_v_result = nullptr;
  __pyx_v_c_small_k = nullptr;
  __pyx_bstruct_temp = nullptr;
  __pyx_bstruct_temp_xs = nullptr;
  __pyx_bstruct_temp_ks = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":42
 *     cdef double a1, a2, a3, a4, C1, CK
 *     #k,x = np.broadcast_arrays(np.asarray(k),np.asarray(x))
 *     k = np.asarray(k)             # <<<<<<<<<<<<<<
 *     x = np.asarray(x)
 *     zerodim = k.ndim==0 and x.ndim==0
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_asarray_42_10->Target(__site_get_asarray_42_10, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_42_18->Target(__site_call1_42_18, __pyx_context, __pyx_t_2, __pyx_v_k);
  __pyx_t_2 = nullptr;
  __pyx_v_k = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":43
 *     #k,x = np.broadcast_arrays(np.asarray(k),np.asarray(x))
 *     k = np.asarray(k)
 *     x = np.asarray(x)             # <<<<<<<<<<<<<<
 *     zerodim = k.ndim==0 and x.ndim==0
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_asarray_43_10->Target(__site_get_asarray_43_10, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_43_18->Target(__site_call1_43_18, __pyx_context, __pyx_t_2, __pyx_v_x);
  __pyx_t_2 = nullptr;
  __pyx_v_x = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":44
 *     k = np.asarray(k)
 *     x = np.asarray(x)
 *     zerodim = k.ndim==0 and x.ndim==0             # <<<<<<<<<<<<<<
 * 
 *     k = np.atleast_1d(k)
 */
  __pyx_t_1 = __site_get_ndim_44_15->Target(__site_get_ndim_44_15, __pyx_v_k, __pyx_context);
  __pyx_t_2 = __site_op_eq_44_20->Target(__site_op_eq_44_20, __pyx_t_1, __pyx_int_0);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_cvt_bool_44_24->Target(__site_cvt_bool_44_24, __pyx_t_2);
  if (__pyx_t_3) {
    __pyx_t_2 = nullptr;
    __pyx_t_1 = __site_get_ndim_44_29->Target(__site_get_ndim_44_29, __pyx_v_x, __pyx_context);
    __pyx_t_4 = __site_op_eq_44_34->Target(__site_op_eq_44_34, __pyx_t_1, __pyx_int_0);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __pyx_t_4;
    __pyx_t_4 = nullptr;
  } else {
    __pyx_t_1 = __pyx_t_2;
    __pyx_t_2 = nullptr;
  }
  __pyx_v_zerodim = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":46
 *     zerodim = k.ndim==0 and x.ndim==0
 * 
 *     k = np.atleast_1d(k)             # <<<<<<<<<<<<<<
 *     x = np.atleast_1d(x)
 *     ix = np.round(x/(2*np.pi))
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_atleast_1d_46_10->Target(__site_get_atleast_1d_46_10, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_46_21->Target(__site_call1_46_21, __pyx_context, __pyx_t_2, __pyx_v_k);
  __pyx_t_2 = nullptr;
  __pyx_v_k = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":47
 * 
 *     k = np.atleast_1d(k)
 *     x = np.atleast_1d(x)             # <<<<<<<<<<<<<<
 *     ix = np.round(x/(2*np.pi))
 *     x = x-ix*2*np.pi
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_atleast_1d_47_10->Target(__site_get_atleast_1d_47_10, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_47_21->Target(__site_call1_47_21, __pyx_context, __pyx_t_2, __pyx_v_x);
  __pyx_t_2 = nullptr;
  __pyx_v_x = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":48
 *     k = np.atleast_1d(k)
 *     x = np.atleast_1d(x)
 *     ix = np.round(x/(2*np.pi))             # <<<<<<<<<<<<<<
 *     x = x-ix*2*np.pi
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_round_48_11->Target(__site_get_round_48_11, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_4 = __site_get_pi_48_25->Target(__site_get_pi_48_25, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_mul_48_22->Target(__site_op_mul_48_22, __pyx_int_2, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_op_div_48_19->Target(__site_op_div_48_19, __pyx_v_x, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_48_17->Target(__site_call1_48_17, __pyx_context, __pyx_t_2, __pyx_t_4);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_ix = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":49
 *     x = np.atleast_1d(x)
 *     ix = np.round(x/(2*np.pi))
 *     x = x-ix*2*np.pi             # <<<<<<<<<<<<<<
 * 
 *     # These values should give 12 decimal digits
 */
  __pyx_t_1 = __site_op_mul_49_12->Target(__site_op_mul_49_12, __pyx_v_ix, __pyx_int_2);
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_pi_49_17->Target(__site_get_pi_49_17, __pyx_t_4, __pyx_context);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_op_mul_49_14->Target(__site_op_mul_49_14, __pyx_t_1, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_sub_49_9->Target(__site_op_sub_49_9, __pyx_v_x, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_v_x = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":52
 * 
 *     # These values should give 12 decimal digits
 *     CK=50             # <<<<<<<<<<<<<<
 *     a1, a2, a3, a4 = [28., 0.5, 100., 5.0]
 *     C1 = 50.1
 */
  __pyx_v_CK = 50.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":53
 *     # These values should give 12 decimal digits
 *     CK=50
 *     a1, a2, a3, a4 = [28., 0.5, 100., 5.0]             # <<<<<<<<<<<<<<
 *     C1 = 50.1
 * 
 */
  __pyx_t_5 = 28.;
  __pyx_t_6 = 0.5;
  __pyx_t_7 = 100.;
  __pyx_t_8 = 5.0;
  __pyx_v_a1 = __pyx_t_5;
  __pyx_v_a2 = __pyx_t_6;
  __pyx_v_a3 = __pyx_t_7;
  __pyx_v_a4 = __pyx_t_8;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":54
 *     CK=50
 *     a1, a2, a3, a4 = [28., 0.5, 100., 5.0]
 *     C1 = 50.1             # <<<<<<<<<<<<<<
 * 
 *     bx, bk = np.broadcast_arrays(x,k)
 */
  __pyx_v_C1 = 50.1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":56
 *     C1 = 50.1
 * 
 *     bx, bk = np.broadcast_arrays(x,k)             # <<<<<<<<<<<<<<
 *     result = np.empty(bx.shape,dtype=np.float)
 * 
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_4 = __site_get_broadcast_arrays_56_15->Target(__site_get_broadcast_arrays_56_15, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call2_56_32->Target(__site_call2_56_32, __pyx_context, __pyx_t_4, __pyx_v_x, __pyx_v_k);
  __pyx_t_4 = nullptr;
  __pyx_t_9 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_2, 2)));
  __pyx_t_4 = __pyx_t_9[0];
  __pyx_t_1 = __pyx_t_9[1];
  __pyx_t_2 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_v_bx = __pyx_t_4;
  __pyx_t_4 = nullptr;
  __pyx_v_bk = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":57
 * 
 *     bx, bk = np.broadcast_arrays(x,k)
 *     result = np.empty(bx.shape,dtype=np.float)             # <<<<<<<<<<<<<<
 * 
 *     c_small_k = bk<CK
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_empty_57_15->Target(__site_get_empty_57_15, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_get_shape_57_24->Target(__site_get_shape_57_24, __pyx_v_bx, __pyx_context);
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_10 = __site_get_float_57_39->Target(__site_get_float_57_39, __pyx_t_4, __pyx_context);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_call1_dtype_57_21->Target(__site_call1_dtype_57_21, __pyx_context, __pyx_t_1, __pyx_t_2, __pyx_t_10);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_v_result = __pyx_t_4;
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":59
 *     result = np.empty(bx.shape,dtype=np.float)
 * 
 *     c_small_k = bk<CK             # <<<<<<<<<<<<<<
 *     temp = result[c_small_k]
 *     temp_xs = bx[c_small_k].astype(np.float)
 */
  __pyx_t_4 = __pyx_v_CK;
  __pyx_t_10 = __site_op_lt_59_18->Target(__site_op_lt_59_18, __pyx_v_bk, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_v_c_small_k = __pyx_t_10;
  __pyx_t_10 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":60
 * 
 *     c_small_k = bk<CK
 *     temp = result[c_small_k]             # <<<<<<<<<<<<<<
 *     temp_xs = bx[c_small_k].astype(np.float)
 *     temp_ks = bk[c_small_k].astype(np.float)
 */
  __pyx_t_10 = __site_getindex_60_17->Target(__site_getindex_60_17, __pyx_v_result, __pyx_v_c_small_k);
  if (__pyx_t_10 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_10) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_11 = ((NumpyDotNet::ndarray^)__pyx_t_10);
  {
    __Pyx_BufFmt_StackElem __pyx_stack[1];
    __Pyx_SafeReleaseBuffer(__pyx_bstruct_temp);
    __pyx_t_12 = __Pyx_GetBufferAndValidate(__pyx_bstruct_temp, __pyx_t_11, &__Pyx_TypeInfo_double, PyBUF_FORMAT| PyBUF_INDIRECT| PyBUF_WRITABLE, 1, 0, __pyx_stack);
    __pyx_bstride_0_temp = __pyx_bstruct_temp->Strides[0];
    __pyx_bshape_0_temp = __pyx_bstruct_temp->Shape[0];
    __pyx_boffset_0_temp = __pyx_bstruct_temp->SubOffsets[0];
  }
  __pyx_t_11 = nullptr;
  __pyx_v_temp = ((NumpyDotNet::ndarray^)__pyx_t_10);
  __pyx_t_10 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":61
 *     c_small_k = bk<CK
 *     temp = result[c_small_k]
 *     temp_xs = bx[c_small_k].astype(np.float)             # <<<<<<<<<<<<<<
 *     temp_ks = bk[c_small_k].astype(np.float)
 *     for i in range(len(temp)):
 */
  __pyx_t_10 = __site_getindex_61_16->Target(__site_getindex_61_16, __pyx_v_bx, __pyx_v_c_small_k);
  __pyx_t_4 = __site_get_astype_61_27->Target(__site_get_astype_61_27, __pyx_t_10, __pyx_context);
  __pyx_t_10 = nullptr;
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_float_61_37->Target(__site_get_float_61_37, __pyx_t_10, __pyx_context);
  __pyx_t_10 = nullptr;
  __pyx_t_10 = __site_call1_61_34->Target(__site_call1_61_34, __pyx_context, __pyx_t_4, __pyx_t_2);
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_10 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_10) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_11 = ((NumpyDotNet::ndarray^)__pyx_t_10);
  {
    __Pyx_BufFmt_StackElem __pyx_stack[1];
    __Pyx_SafeReleaseBuffer(__pyx_bstruct_temp_xs);
    __pyx_t_12 = __Pyx_GetBufferAndValidate(__pyx_bstruct_temp_xs, __pyx_t_11, &__Pyx_TypeInfo_double, PyBUF_FORMAT| PyBUF_INDIRECT, 1, 0, __pyx_stack);
    __pyx_bstride_0_temp_xs = __pyx_bstruct_temp_xs->Strides[0];
    __pyx_bshape_0_temp_xs = __pyx_bstruct_temp_xs->Shape[0];
    __pyx_boffset_0_temp_xs = __pyx_bstruct_temp_xs->SubOffsets[0];
  }
  __pyx_t_11 = nullptr;
  __pyx_v_temp_xs = ((NumpyDotNet::ndarray^)__pyx_t_10);
  __pyx_t_10 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":62
 *     temp = result[c_small_k]
 *     temp_xs = bx[c_small_k].astype(np.float)
 *     temp_ks = bk[c_small_k].astype(np.float)             # <<<<<<<<<<<<<<
 *     for i in range(len(temp)):
 *         p = <int>(1+a1+a2*temp_ks[i]-a3/(temp_ks[i]+a4))
 */
  __pyx_t_10 = __site_getindex_62_16->Target(__site_getindex_62_16, __pyx_v_bk, __pyx_v_c_small_k);
  __pyx_t_2 = __site_get_astype_62_27->Target(__site_get_astype_62_27, __pyx_t_10, __pyx_context);
  __pyx_t_10 = nullptr;
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_4 = __site_get_float_62_37->Target(__site_get_float_62_37, __pyx_t_10, __pyx_context);
  __pyx_t_10 = nullptr;
  __pyx_t_10 = __site_call1_62_34->Target(__site_call1_62_34, __pyx_context, __pyx_t_2, __pyx_t_4);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = nullptr;
  if (__pyx_t_10 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_10) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_11 = ((NumpyDotNet::ndarray^)__pyx_t_10);
  {
    __Pyx_BufFmt_StackElem __pyx_stack[1];
    __Pyx_SafeReleaseBuffer(__pyx_bstruct_temp_ks);
    __pyx_t_12 = __Pyx_GetBufferAndValidate(__pyx_bstruct_temp_ks, __pyx_t_11, &__Pyx_TypeInfo_double, PyBUF_FORMAT| PyBUF_INDIRECT, 1, 0, __pyx_stack);
    __pyx_bstride_0_temp_ks = __pyx_bstruct_temp_ks->Strides[0];
    __pyx_bshape_0_temp_ks = __pyx_bstruct_temp_ks->Shape[0];
    __pyx_boffset_0_temp_ks = __pyx_bstruct_temp_ks->SubOffsets[0];
  }
  __pyx_t_11 = nullptr;
  __pyx_v_temp_ks = ((NumpyDotNet::ndarray^)__pyx_t_10);
  __pyx_t_10 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":63
 *     temp_xs = bx[c_small_k].astype(np.float)
 *     temp_ks = bk[c_small_k].astype(np.float)
 *     for i in range(len(temp)):             # <<<<<<<<<<<<<<
 *         p = <int>(1+a1+a2*temp_ks[i]-a3/(temp_ks[i]+a4))
 *         temp[i] = von_mises_cdf_series(temp_ks[i],temp_xs[i],p)
 */
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "len");
  __pyx_t_4 = __site_call1_63_22->Target(__site_call1_63_22, __pyx_context, __pyx_t_10, ((System::Object^)__pyx_v_temp));
  __pyx_t_10 = nullptr;
  __pyx_t_13 = __site_cvt_long_63_22->Target(__site_cvt_long_63_22, __pyx_t_4);
  __pyx_t_4 = nullptr;
  for (__pyx_t_14 = 0; __pyx_t_14 < __pyx_t_13; __pyx_t_14+=1) {
    __pyx_v_i = __pyx_t_14;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":64
 *     temp_ks = bk[c_small_k].astype(np.float)
 *     for i in range(len(temp)):
 *         p = <int>(1+a1+a2*temp_ks[i]-a3/(temp_ks[i]+a4))             # <<<<<<<<<<<<<<
 *         temp[i] = von_mises_cdf_series(temp_ks[i],temp_xs[i],p)
 *         if temp[i]<0:
 */
    __pyx_t_15 = __pyx_v_i;
    __pyx_t_16 = __pyx_v_i;
    __pyx_t_8 = ((*__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp_ks->UnsafeAddress, __pyx_t_16, __pyx_bstride_0_temp_ks, __pyx_boffset_0_temp_ks)) + __pyx_v_a4);
    if (unlikely(__pyx_t_8 == 0)) {
      throw PythonOps::ZeroDivisionError("float division");
    }
    __pyx_v_p = ((int)(((1.0 + __pyx_v_a1) + (__pyx_v_a2 * (*__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp_ks->UnsafeAddress, __pyx_t_15, __pyx_bstride_0_temp_ks, __pyx_boffset_0_temp_ks)))) - (__pyx_v_a3 / __pyx_t_8)));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":65
 *     for i in range(len(temp)):
 *         p = <int>(1+a1+a2*temp_ks[i]-a3/(temp_ks[i]+a4))
 *         temp[i] = von_mises_cdf_series(temp_ks[i],temp_xs[i],p)             # <<<<<<<<<<<<<<
 *         if temp[i]<0:
 *             temp[i]=0
 */
    __pyx_t_17 = __pyx_v_i;
    __pyx_t_18 = __pyx_v_i;
    __pyx_t_19 = __pyx_v_i;
    *__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp->UnsafeAddress, __pyx_t_19, __pyx_bstride_0_temp, __pyx_boffset_0_temp) = von_mises_cdf_series((*__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp_ks->UnsafeAddress, __pyx_t_17, __pyx_bstride_0_temp_ks, __pyx_boffset_0_temp_ks)), (*__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp_xs->UnsafeAddress, __pyx_t_18, __pyx_bstride_0_temp_xs, __pyx_boffset_0_temp_xs)), __pyx_v_p);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":66
 *         p = <int>(1+a1+a2*temp_ks[i]-a3/(temp_ks[i]+a4))
 *         temp[i] = von_mises_cdf_series(temp_ks[i],temp_xs[i],p)
 *         if temp[i]<0:             # <<<<<<<<<<<<<<
 *             temp[i]=0
 *         elif temp[i]>1:
 */
    __pyx_t_20 = __pyx_v_i;
    __pyx_t_3 = ((*__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp->UnsafeAddress, __pyx_t_20, __pyx_bstride_0_temp, __pyx_boffset_0_temp)) < 0.0);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":67
 *         temp[i] = von_mises_cdf_series(temp_ks[i],temp_xs[i],p)
 *         if temp[i]<0:
 *             temp[i]=0             # <<<<<<<<<<<<<<
 *         elif temp[i]>1:
 *             temp[i]=1
 */
      __pyx_t_21 = __pyx_v_i;
      *__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp->UnsafeAddress, __pyx_t_21, __pyx_bstride_0_temp, __pyx_boffset_0_temp) = 0.0;
      goto __pyx_L7;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":68
 *         if temp[i]<0:
 *             temp[i]=0
 *         elif temp[i]>1:             # <<<<<<<<<<<<<<
 *             temp[i]=1
 *     result[c_small_k] = temp
 */
    __pyx_t_22 = __pyx_v_i;
    __pyx_t_3 = ((*__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp->UnsafeAddress, __pyx_t_22, __pyx_bstride_0_temp, __pyx_boffset_0_temp)) > 1.0);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":69
 *             temp[i]=0
 *         elif temp[i]>1:
 *             temp[i]=1             # <<<<<<<<<<<<<<
 *     result[c_small_k] = temp
 *     result[~c_small_k] = von_mises_cdf_normalapprox(bk[~c_small_k],bx[~c_small_k],C1)
 */
      __pyx_t_23 = __pyx_v_i;
      *__Pyx_BufPtrFull1d(double *, (double *)(long long)__pyx_bstruct_temp->UnsafeAddress, __pyx_t_23, __pyx_bstride_0_temp, __pyx_boffset_0_temp) = 1.0;
      goto __pyx_L7;
    }
    __pyx_L7:;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":70
 *         elif temp[i]>1:
 *             temp[i]=1
 *     result[c_small_k] = temp             # <<<<<<<<<<<<<<
 *     result[~c_small_k] = von_mises_cdf_normalapprox(bk[~c_small_k],bx[~c_small_k],C1)
 * 
 */
  __site_setindex_70_10->Target(__site_setindex_70_10, __pyx_v_result, __pyx_v_c_small_k, ((System::Object^)__pyx_v_temp));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":71
 *             temp[i]=1
 *     result[c_small_k] = temp
 *     result[~c_small_k] = von_mises_cdf_normalapprox(bk[~c_small_k],bx[~c_small_k],C1)             # <<<<<<<<<<<<<<
 * 
 *     if not zerodim:
 */
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "von_mises_cdf_normalapprox");
  __pyx_t_10 = __site_OnesComplement_71_55->Target(__site_OnesComplement_71_55, __pyx_v_c_small_k);
  __pyx_t_2 = __site_getindex_71_54->Target(__site_getindex_71_54, __pyx_v_bk, __pyx_t_10);
  __pyx_t_10 = nullptr;
  __pyx_t_10 = __site_OnesComplement_71_70->Target(__site_OnesComplement_71_70, __pyx_v_c_small_k);
  __pyx_t_1 = __site_getindex_71_69->Target(__site_getindex_71_69, __pyx_v_bx, __pyx_t_10);
  __pyx_t_10 = nullptr;
  __pyx_t_10 = __pyx_v_C1;
  __pyx_t_24 = __site_call3_71_51->Target(__site_call3_71_51, __pyx_context, __pyx_t_4, __pyx_t_2, __pyx_t_1, __pyx_t_10);
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_t_10 = __site_OnesComplement_71_11->Target(__site_OnesComplement_71_11, __pyx_v_c_small_k);
  __site_setindex_71_10->Target(__site_setindex_71_10, __pyx_v_result, __pyx_t_10, __pyx_t_24);
  __pyx_t_10 = nullptr;
  __pyx_t_24 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":73
 *     result[~c_small_k] = von_mises_cdf_normalapprox(bk[~c_small_k],bx[~c_small_k],C1)
 * 
 *     if not zerodim:             # <<<<<<<<<<<<<<
 *         return result+ix
 *     else:
 */
  __pyx_t_3 = __site_istrue_73_18->Target(__site_istrue_73_18, __pyx_v_zerodim);
  __pyx_t_25 = (!__pyx_t_3);
  if (__pyx_t_25) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":74
 * 
 *     if not zerodim:
 *         return result+ix             # <<<<<<<<<<<<<<
 *     else:
 *         return (result+ix)[0]
 */
    __pyx_t_24 = __site_op_add_74_21->Target(__site_op_add_74_21, __pyx_v_result, __pyx_v_ix);
    __pyx_r = __pyx_t_24;
    __pyx_t_24 = nullptr;
    goto __pyx_L0;
    goto __pyx_L8;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":76
 *         return result+ix
 *     else:
 *         return (result+ix)[0]             # <<<<<<<<<<<<<<
 */
    __pyx_t_24 = __site_op_add_76_22->Target(__site_op_add_76_22, __pyx_v_result, __pyx_v_ix);
    __pyx_t_10 = __site_getindex_76_26->Target(__site_getindex_76_26, __pyx_t_24, ((System::Object^)0));
    __pyx_t_24 = nullptr;
    __pyx_r = __pyx_t_10;
    __pyx_t_10 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L8:;

  __pyx_r = nullptr;
  __pyx_L0:;
  __Pyx_SafeReleaseBuffer(__pyx_bstruct_temp);
  __Pyx_SafeReleaseBuffer(__pyx_bstruct_temp_xs);
  __Pyx_SafeReleaseBuffer(__pyx_bstruct_temp_ks);
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":185
 *     object Npy_INTERFACE_array "Npy_INTERFACE_OBJECT" (NpyArray*)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":188
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

/* "../cython/include\numpy.pxd":190
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

  /* "../cython/include\numpy.pxd":191
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":193
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":194
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_194_18->Target(__site_get_append_194_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_194_25->Target(__site_call1_194_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":195
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":196
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):
 */
  __pyx_t_5 = __site_get_zeros_196_16->Target(__site_get_zeros_196_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_196_22->Target(__site_call3_196_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include\numpy.pxd":198
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":199
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

  /* "../cython/include\numpy.pxd":200
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

  /* "../cython/include\numpy.pxd":201
 *     assert subtype == NULL
 *     assert obj == NULL
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_New(__pyx_v_subtype, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, __pyx_v_strides, __pyx_v_data, __pyx_v_itemsize, __pyx_v_flags, __pyx_v_obj)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":203
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 * cdef inline void* PyArray_DATA(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":205
 * cdef inline void* PyArray_DATA(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_205_49->Target(__site_get_Array_205_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_205_49->Target(__site_cvt_PY_LONG_LONG_205_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":207
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

  /* "../cython/include\numpy.pxd":209
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_1 = __site_get_Array_209_49->Target(__site_get_Array_209_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_209_49->Target(__site_cvt_PY_LONG_LONG_209_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":211
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
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

  /* "../cython/include\numpy.pxd":212
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":213
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":214
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 */
  __pyx_t_1 = __site_get_NpyArray_214_22->Target(__site_get_NpyArray_214_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_FromAny_214_31->Target(__site_get_FromAny_214_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_214_39->Target(__site_call6_214_39, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":216
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

  /* "../cython/include\numpy.pxd":217
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_ENSURECOPY);
  __pyx_t_2 = __site_op_and_217_13->Target(__site_op_and_217_13, __pyx_v_flags, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_217_13->Target(__site_istrue_217_13, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3) {

    /* "../cython/include\numpy.pxd":218
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DEFAULT);
    __pyx_t_1 = __site_op_ior_218_14->Target(__site_op_ior_218_14, __pyx_v_flags, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_flags = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include\numpy.pxd":219
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Check(obj):
 */
  __pyx_t_4 = __site_cvt_int_219_77->Target(__site_cvt_int_219_77, __pyx_v_type);
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_4)); 
  __pyx_t_2 = PyArray_FromAny(__pyx_v_m, __pyx_t_1, __pyx_v_min, __pyx_v_max, __pyx_v_flags, Py_None); 
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":221
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

  /* "../cython/include\numpy.pxd":222
 * 
 * cdef inline object PyArray_Check(obj):
 *     return isinstance(obj, ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(obj):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_call2_222_21->Target(__site_call2_222_21, __pyx_context, __pyx_t_1, __pyx_v_obj, ((System::Object^)((System::Object^)__pyx_ptype_5numpy_ndarray)));
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":224
 *     return isinstance(obj, ndarray)
 * 
 * cdef inline object PyArray_NDIM(obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":225
 * 
 * cdef inline object PyArray_NDIM(obj):
 *     return obj.ndim             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_ndim_225_14->Target(__site_get_ndim_225_14, __pyx_v_obj, __pyx_context);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":227
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
  __pyx_int_2 = 2;
  __pyx_int_3 = 3;
  __pyx_int_4 = 4;
  __pyx_int_16 = 16;
  __pyx_int_24 = 24;

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
  __site_get_pi_26_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "pi", false));
  __site_op_mul_26_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_26_16 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_add_26_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_get_pi_26_33 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "pi", false));
  __site_op_div_26_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_add_26_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_double_26_27 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_get_sqrt_29_10 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "sqrt", false));
  __site_get_pi_29_20 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "pi", false));
  __site_op_div_29_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call1_29_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_exp_29_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exp", false));
  __site_call1_29_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mul_29_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call1_29_37 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_div_29_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_get_sin_30_12 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "sin", false));
  __site_op_div_30_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call1_30_16 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mul_30_9 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_mul_31_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_pow_32_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_pow_32_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_mul_32_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_sub_32_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_sub_32_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_div_32_33 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_pow_32_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_pow_32_49 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_mul_32_47 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_32_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_32_52 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_32_63 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_pow_32_68 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_sub_32_66 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_add_32_71 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_div_32_60 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_sub_32_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_pow_32_75 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Power));
  __site_op_div_32_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_sub_32_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_get_stats_33_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "stats", false));
  __site_get_norm_33_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "norm", false));
  __site_get_cdf_33_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "cdf", false));
  __site_call1_33_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_asarray_42_10 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "asarray", false));
  __site_call1_42_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_asarray_43_10 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "asarray", false));
  __site_call1_43_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_44_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_44_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_cvt_bool_44_24 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_44_29 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_44_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_get_atleast_1d_46_10 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "atleast_1d", false));
  __site_call1_46_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_atleast_1d_47_10 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "atleast_1d", false));
  __site_call1_47_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_round_48_11 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "round", false));
  __site_get_pi_48_25 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "pi", false));
  __site_op_mul_48_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_48_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_call1_48_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mul_49_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_get_pi_49_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "pi", false));
  __site_op_mul_49_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_sub_49_9 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_get_broadcast_arrays_56_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "broadcast_arrays", false));
  __site_call2_56_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_empty_57_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_get_shape_57_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_get_float_57_39 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "float", false));
  __site_call1_dtype_57_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_op_lt_59_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_getindex_60_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_61_16 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_get_astype_61_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "astype", false));
  __site_get_float_61_37 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "float", false));
  __site_call1_61_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_getindex_62_16 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_get_astype_62_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "astype", false));
  __site_get_float_62_37 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "float", false));
  __site_call1_62_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_63_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_long_63_22 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_setindex_70_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_OnesComplement_71_55 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::OnesComplement));
  __site_getindex_71_54 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_OnesComplement_71_70 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::OnesComplement));
  __site_getindex_71_69 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_call3_71_51 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_OnesComplement_71_11 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::OnesComplement));
  __site_setindex_71_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_istrue_73_18 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_add_74_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_76_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_getindex_76_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_get_append_194_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_194_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_196_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_196_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_205_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_205_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_209_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_209_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_214_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_FromAny_214_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "FromAny", false));
  __site_call6_214_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_op_and_217_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_istrue_217_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ior_218_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::OrAssign));
  __site_cvt_int_219_77 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call2_222_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_ndim_225_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
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
  System::Object^ __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":1
 * import numpy as np             # <<<<<<<<<<<<<<
 * import scipy.stats
 * from scipy.special import i0
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":2
 * import numpy as np
 * import scipy.stats             # <<<<<<<<<<<<<<
 * from scipy.special import i0
 * import numpy.testing
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "scipy.stats", -1));
  PythonOps::SetGlobal(__pyx_context, "scipy", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":3
 * import numpy as np
 * import scipy.stats
 * from scipy.special import i0             # <<<<<<<<<<<<<<
 * import numpy.testing
 * cimport numpy as np
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportWithNames(__pyx_context, "scipy.special", gcnew array<System::String^>{"i0"}, -1));
  __pyx_t_2 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "i0");
  PythonOps::SetGlobal(__pyx_context, "i0", __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":4
 * import scipy.stats
 * from scipy.special import i0
 * import numpy.testing             # <<<<<<<<<<<<<<
 * cimport numpy as np
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy.testing", -1));
  PythonOps::SetGlobal(__pyx_context, "numpy", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\vonmises_cython.pyx":1
 * import numpy as np             # <<<<<<<<<<<<<<
 * import scipy.stats
 * from scipy.special import i0
 */
  __pyx_t_1 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":227
 *     return obj.ndim
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 */
}
/* Cython code section 'cleanup_globals' */
/* Cython code section 'cleanup_module' */
/* Cython code section 'main_method' */
/* Cython code section 'utility_code_def' */

/* Runtime support code */

#if 0
static CYTHON_INLINE int __Pyx_IsLittleEndian(void) {
  unsigned int n = 1;
  return *(unsigned char*)(&n) != 0;
}

typedef struct {
  __Pyx_StructField root;
  __Pyx_BufFmt_StackElem* head;
  size_t fmt_offset;
  int new_count, enc_count;
  int is_complex;
  char enc_type;
  char packmode;
} __Pyx_BufFmt_Context;

static void __Pyx_BufFmt_Init(__Pyx_BufFmt_Context* ctx,
                              __Pyx_BufFmt_StackElem* stack,
                              __Pyx_TypeInfo* type) {
  stack[0].field = &ctx->root;
  stack[0].parent_offset = 0;
  ctx->root.type = type;
  ctx->root.name = "buffer dtype";
  ctx->root.offset = 0;
  ctx->head = stack;
  ctx->head->field = &ctx->root;
  ctx->fmt_offset = 0;
  ctx->head->parent_offset = 0;
  ctx->packmode = '@';
  ctx->new_count = 1;
  ctx->enc_count = 0;
  ctx->enc_type = 0;
  ctx->is_complex = 0;
  while (type->typegroup == 'S') {
    ++ctx->head;
    ctx->head->field = type->fields;
    ctx->head->parent_offset = 0;
    type = type->fields->type;
  }
}

static int __Pyx_BufFmt_ParseNumber(const char** ts) {
    int count;
    const char* t = *ts;
    if (*t < '0' || *t > '9') {
      return -1;
    } else {
        count = *t++ - '0';
        while (*t >= '0' && *t < '9') {
            count *= 10;
            count += *t++ - '0';
        }
    }
    *ts = t;
    return count;
}

static void __Pyx_BufFmt_RaiseUnexpectedChar(char ch) {
  char msg[] = {ch, 0};
  PyErr_Format(PyExc_ValueError, "Unexpected format string character: '%s'", msg);
}

static const char* __Pyx_BufFmt_DescribeTypeChar(char ch, int is_complex) {
  switch (ch) {
    case 'b': return "'char'";
    case 'B': return "'unsigned char'";
    case 'h': return "'short'";
    case 'H': return "'unsigned short'";
    case 'i': return "'int'";
    case 'I': return "'unsigned int'";
    case 'l': return "'long'";
    case 'L': return "'unsigned long'";
    case 'q': return "'long long'";
    case 'Q': return "'unsigned long long'";
    case 'f': return (is_complex ? "'complex float'" : "'float'");
    case 'd': return (is_complex ? "'complex double'" : "'double'");
    case 'g': return (is_complex ? "'complex long double'" : "'long double'");
    case 'T': return "a struct";
    case 'O': return "Python object";
    case 'P': return "a pointer";
    case 0: return "end";
    default: return "unparseable format string";
  }
}

static size_t __Pyx_BufFmt_TypeCharToStandardSize(char ch, int is_complex) {
  switch (ch) {
    case '?': case 'c': case 'b': case 'B': return 1;
    case 'h': case 'H': return 2;
    case 'i': case 'I': case 'l': case 'L': return 4;
    case 'q': case 'Q': return 8;
    case 'f': return (is_complex ? 8 : 4);
    case 'd': return (is_complex ? 16 : 8);
    case 'g': {
      PyErr_SetString(PyExc_ValueError, "Python does not define a standard format string size for long double ('g')..");
      return 0;
    }
    case 'O': case 'P': return sizeof(void*);
    default:
      __Pyx_BufFmt_RaiseUnexpectedChar(ch);
      return 0;
    }
}

static size_t __Pyx_BufFmt_TypeCharToNativeSize(char ch, int is_complex) {
  switch (ch) {
    case 'c': case 'b': case 'B': return 1;
    case 'h': case 'H': return sizeof(short);
    case 'i': case 'I': return sizeof(int);
    case 'l': case 'L': return sizeof(long);
    #ifdef HAVE_LONG_LONG
    case 'q': case 'Q': return sizeof(PY_LONG_LONG);
    #endif
    case 'f': return sizeof(float) * (is_complex ? 2 : 1);
    case 'd': return sizeof(double) * (is_complex ? 2 : 1);
    case 'g': return sizeof(long double) * (is_complex ? 2 : 1);
    case 'O': case 'P': return sizeof(void*);
    default: {
      __Pyx_BufFmt_RaiseUnexpectedChar(ch);
      return 0;
    }    
  }
}

typedef struct { char c; short x; } __Pyx_st_short;
typedef struct { char c; int x; } __Pyx_st_int;
typedef struct { char c; long x; } __Pyx_st_long;
typedef struct { char c; float x; } __Pyx_st_float;
typedef struct { char c; double x; } __Pyx_st_double;
typedef struct { char c; long double x; } __Pyx_st_longdouble;
typedef struct { char c; void *x; } __Pyx_st_void_p;
#ifdef HAVE_LONG_LONG
typedef struct { char c; PY_LONG_LONG x; } __Pyx_s_long_long;
#endif

static size_t __Pyx_BufFmt_TypeCharToAlignment(char ch, int is_complex) {
  switch (ch) {
    case '?': case 'c': case 'b': case 'B': return 1;
    case 'h': case 'H': return sizeof(__Pyx_st_short) - sizeof(short);
    case 'i': case 'I': return sizeof(__Pyx_st_int) - sizeof(int);
    case 'l': case 'L': return sizeof(__Pyx_st_long) - sizeof(long);
#ifdef HAVE_LONG_LONG
    case 'q': case 'Q': return sizeof(__Pyx_s_long_long) - sizeof(PY_LONG_LONG);
#endif
    case 'f': return sizeof(__Pyx_st_float) - sizeof(float);
    case 'd': return sizeof(__Pyx_st_double) - sizeof(double);
    case 'g': return sizeof(__Pyx_st_longdouble) - sizeof(long double);
    case 'P': case 'O': return sizeof(__Pyx_st_void_p) - sizeof(void*);
    default:
      __Pyx_BufFmt_RaiseUnexpectedChar(ch);
      return 0;
    }
}

static size_t __Pyx_BufFmt_TypeCharToGroup(char ch, int is_complex) {
  switch (ch) {
    case 'c': case 'b': case 'h': case 'i': case 'l': case 'q': return 'I';
    case 'B': case 'H': case 'I': case 'L': case 'Q': return 'U';
    case 'f': case 'd': case 'g': return (is_complex ? 'C' : 'R');
    case 'O': return 'O';
    case 'P': return 'P';
    default: {
      __Pyx_BufFmt_RaiseUnexpectedChar(ch);
      return 0;
    }    
  }
}

static void __Pyx_BufFmt_RaiseExpected(__Pyx_BufFmt_Context* ctx) {
  if (ctx->head == NULL || ctx->head->field == &ctx->root) {
    const char* expected;
    const char* quote;
    if (ctx->head == NULL) {
      expected = "end";
      quote = "";
    } else {
      expected = ctx->head->field->type->name;
      quote = "'";
    }
    PyErr_Format(PyExc_ValueError,
                 "Buffer dtype mismatch, expected %s%s%s but got %s",
                 quote, expected, quote,
                 __Pyx_BufFmt_DescribeTypeChar(ctx->enc_type, ctx->is_complex));
  } else {
    __Pyx_StructField* field = ctx->head->field;
    __Pyx_StructField* parent = (ctx->head - 1)->field;
    PyErr_Format(PyExc_ValueError,
                 "Buffer dtype mismatch, expected '%s' but got %s in '%s.%s'",
                 field->type->name, __Pyx_BufFmt_DescribeTypeChar(ctx->enc_type, ctx->is_complex),
                 parent->type->name, field->name);
  }
}

static int __Pyx_BufFmt_ProcessTypeChunk(__Pyx_BufFmt_Context* ctx) {
  char group;
  size_t size, offset;
  if (ctx->enc_type == 0) return 0;
  group = __Pyx_BufFmt_TypeCharToGroup(ctx->enc_type, ctx->is_complex);
  do {
    __Pyx_StructField* field = ctx->head->field;
    __Pyx_TypeInfo* type = field->type;
  
    if (ctx->packmode == '@' || ctx->packmode == '^') {
      size = __Pyx_BufFmt_TypeCharToNativeSize(ctx->enc_type, ctx->is_complex);
    } else {
      size = __Pyx_BufFmt_TypeCharToStandardSize(ctx->enc_type, ctx->is_complex);
    }
    if (ctx->packmode == '@') {
      int align_at = __Pyx_BufFmt_TypeCharToAlignment(ctx->enc_type, ctx->is_complex);
      int align_mod_offset;
      if (align_at == 0) return -1;
      align_mod_offset = ctx->fmt_offset % align_at;
      if (align_mod_offset > 0) ctx->fmt_offset += align_at - align_mod_offset;
    }

    if (type->size != size || type->typegroup != group) {
      if (type->typegroup == 'C' && type->fields != NULL) {
        /* special case -- treat as struct rather than complex number */
        size_t parent_offset = ctx->head->parent_offset + field->offset;
        ++ctx->head;
        ctx->head->field = type->fields;
        ctx->head->parent_offset = parent_offset;
        continue;
      }
    
      __Pyx_BufFmt_RaiseExpected(ctx);
      return -1;
    }

    offset = ctx->head->parent_offset + field->offset;
    if (ctx->fmt_offset != offset) {
      PyErr_Format(PyExc_ValueError,
                   "Buffer dtype mismatch; next field is at offset %"PY_FORMAT_SIZE_T"d "
                   "but %"PY_FORMAT_SIZE_T"d expected", ctx->fmt_offset, offset);
      return -1;
    }

    ctx->fmt_offset += size;
  
    --ctx->enc_count; /* Consume from buffer string */

    /* Done checking, move to next field, pushing or popping struct stack if needed */
    while (1) {
      if (field == &ctx->root) {
        ctx->head = NULL;
        if (ctx->enc_count != 0) {
          __Pyx_BufFmt_RaiseExpected(ctx);
          return -1;
        }
        break; /* breaks both loops as ctx->enc_count == 0 */
      }
      ctx->head->field = ++field;
      if (field->type == NULL) {
        --ctx->head;
        field = ctx->head->field;
        continue;
      } else if (field->type->typegroup == 'S') {
        size_t parent_offset = ctx->head->parent_offset + field->offset;
        if (field->type->fields->type == NULL) continue; /* empty struct */
        field = field->type->fields;
        ++ctx->head;
        ctx->head->field = field;
        ctx->head->parent_offset = parent_offset;
        break;
      } else {
        break;
      }
    }
  } while (ctx->enc_count);
  ctx->enc_type = 0;
  ctx->is_complex = 0;
  return 0;    
}

static int __Pyx_BufFmt_FirstPack(__Pyx_BufFmt_Context* ctx) {
  if (ctx->enc_type != 0 || ctx->packmode != '@') {
    PyErr_SetString(PyExc_ValueError, "Buffer packing mode currently only allowed at beginning of format string (this is a defect)");
    return -1;
  }
  return 0;
}

static const char* __Pyx_BufFmt_CheckString(__Pyx_BufFmt_Context* ctx, const char* ts) {
  int got_Z = 0;
  while (1) {
    switch(*ts) {
      case 0:
        if (ctx->enc_type != 0 && ctx->head == NULL) {
          __Pyx_BufFmt_RaiseExpected(ctx);
          return NULL;
        }
        if (__Pyx_BufFmt_ProcessTypeChunk(ctx) == -1) return NULL;
        if (ctx->head != NULL) {
          __Pyx_BufFmt_RaiseExpected(ctx);
          return NULL;
        }
        return ts;
      case ' ':
      case 10:
      case 13:
        ++ts;
        break;
      case '<':
        if (!__Pyx_IsLittleEndian()) {
          PyErr_SetString(PyExc_ValueError, "Little-endian buffer not supported on big-endian compiler");
          return NULL;
        }
        if (__Pyx_BufFmt_FirstPack(ctx) == -1) return NULL;
        ctx->packmode = '=';
        ++ts;
        break;
      case '>':
      case '!':
        if (__Pyx_IsLittleEndian()) {
          PyErr_SetString(PyExc_ValueError, "Big-endian buffer not supported on little-endian compiler");
          return NULL;
        }
        if (__Pyx_BufFmt_FirstPack(ctx) == -1) return NULL;
        ctx->packmode = '=';
        ++ts;
        break;
      case '=':
      case '@':
      case '^':
        if (__Pyx_BufFmt_FirstPack(ctx) == -1) return NULL;
        ctx->packmode = *ts++;
        break;
      case 'T': /* substruct */
        {
          int i;
          const char* ts_after_sub;
          int struct_count = ctx->new_count;
          ctx->new_count = 1;
          ++ts;
          if (*ts != '{') {
            PyErr_SetString(PyExc_ValueError, "Buffer acquisition: Expected '{' after 'T'");
            return NULL;
          }
          ++ts;
          ts_after_sub = ts;
          for (i = 0; i != struct_count; ++i) {
            ts_after_sub = __Pyx_BufFmt_CheckString(ctx, ts);
            if (!ts_after_sub) return NULL;
          }
          ts = ts_after_sub;
        }
        break;
      case '}': /* end of substruct; either repeat or move on */
        ++ts;
        return ts;
      case 'x':
        if (__Pyx_BufFmt_ProcessTypeChunk(ctx) == -1) return NULL;
        ctx->fmt_offset += ctx->new_count;
        ctx->new_count = 1;
        ctx->enc_count = 0;
        ctx->enc_type = 0;
        ++ts;
        break;
      case 'Z':
        got_Z = 1;
        ++ts;
        if (*ts != 'f' && *ts != 'd' && *ts != 'g') {
          __Pyx_BufFmt_RaiseUnexpectedChar('Z');
          return NULL;
        }        /* fall through */
      case 'c': case 'b': case 'B': case 'h': case 'H': case 'i': case 'I':
      case 'l': case 'L': case 'q': case 'Q':
      case 'f': case 'd': case 'g':
      case 'O':
        if (ctx->enc_type == *ts && got_Z == ctx->is_complex) {
          /* Continue pooling same type */
          ctx->enc_count += ctx->new_count;
        } else {
          /* New type */
          if (__Pyx_BufFmt_ProcessTypeChunk(ctx) == -1) return NULL;
          ctx->enc_count = ctx->new_count;
          ctx->enc_type = *ts;
          ctx->is_complex = got_Z;
        }
        ++ts;
        ctx->new_count = 1;
        got_Z = 0;
        break;
      default:
        {
          ctx->new_count = __Pyx_BufFmt_ParseNumber(&ts);
          if (ctx->new_count == -1) { /* First char was not a digit */
            char msg[2] = { *ts, 0 };
            PyErr_Format(PyExc_ValueError,
                         "Does not understand character buffer dtype format string ('%s')", msg);
            return NULL;
          }
        }
      
    }
  }
}
#endif

static CYTHON_INLINE void __Pyx_GetBufferAndValidate(NumpyDotNet::IExtBufferProtocol^& buf, System::Object^ obj, __Pyx_TypeInfo* dtype, int flags, int nd, int cast, __Pyx_BufFmt_StackElem* stack) {
  if (obj == Py_None) {
    buf = nullptr;
    return 0;
  }
  if (__Pyx_GetBuffer(obj, buf, flags) == -1) goto fail;
  if (buf->NumberDimensions != nd) {
#if 0
    XXX
    PyErr_Format(PyExc_ValueError,
                 "Buffer has wrong number of dimensions (expected %d, got %d)",
                 nd, buf->ndim);
#endif
    goto fail;
  }
  if (!cast) {
#if 0
    XXX
    __Pyx_BufFmt_Context ctx;
    __Pyx_BufFmt_Init(&ctx, stack, dtype);
    if (!__Pyx_BufFmt_CheckString(&ctx, buf->format)) goto fail;
#endif
  }
  if ((unsigned)buf->ItemSize != dtype->size) {
#if 0
    XXX
    PyErr_Format(PyExc_ValueError,
      "Item size of buffer (%"PY_FORMAT_SIZE_T"d byte%s) does not match size of '%s' (%"PY_FORMAT_SIZE_T"d byte%s)",
      buf->itemsize, (buf->itemsize > 1) ? "s" : "",
      dtype->name,
      dtype->size, (dtype->size > 1) ? "s" : "");
#endif
    goto fail;
  }
#if 0
  XXX
  if (buf->suboffsets == NULL) buf->suboffsets = __Pyx_minusones;
#endif
  return 0;
fail:;
  buf = nullptr;
  return -1;
}

static CYTHON_INLINE void __Pyx_SafeReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ info) {
  if (info == nullptr) return;
#if 0
  XXX
  if (info->buf == NULL) return;
  if (info->suboffsets == __Pyx_minusones) info->suboffsets = NULL;
#endif
  __Pyx_ReleaseBuffer(info);
}

static CYTHON_INLINE void* __Pyx_BufPtrFull1d_imp(void* buf, Py_ssize_t i0, Py_ssize_t s0, Py_ssize_t o0) {
  char* ptr = (char*)buf;
ptr += s0 * i0;
if (o0 >= 0) ptr = *((char**)ptr) + o0; 

return ptr;
}
  
static int __Pyx_GetBuffer(System::Object^ obj, NumpyDotNet::IExtBufferProtocol^& view, int flags) {
  view = NumpyDotNet::NpyBuffer::GetBufferForObject(obj, (NumpyDotNet::NpyBuffer::PyBuf)flags);
  return 0;
}
static void __Pyx_ReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ view) {
  /* do nothing */
}
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__stats__vonmises_cython", module_vonmises_cython::typeid)];
};
