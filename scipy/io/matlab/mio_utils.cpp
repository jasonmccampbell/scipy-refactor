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
  dict["__module__"] = "scipy.io.matlab.mio_utils";
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
#define __PYX_HAVE_API__scipy__io__matlab__mio_utils
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"

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
public delegate void *__pyx_delegate_t_5numpy_PyArray_DATA(NumpyDotNet::ndarray^);
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_intp_t *__pyx_delegate_t_5numpy_PyArray_DIMS(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5numpy_import_array(void);
static CYTHON_INLINE void import_array(void); /*proto*/
/* Module declarations from scipy.io.matlab.mio_utils */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate size_t __pyx_delegate_t_5scipy_2io_6matlab_9mio_utils_cproduct(System::Object^, int __pyx_skip_dispatch);
static size_t cproduct(System::Object^, int __pyx_skip_dispatch); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_2io_6matlab_9mio_utils_squeeze_element(NumpyDotNet::ndarray^, int __pyx_skip_dispatch);
static System::Object^ squeeze_element(NumpyDotNet::ndarray^, int __pyx_skip_dispatch); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate NumpyDotNet::ndarray^ __pyx_delegate_t_5scipy_2io_6matlab_9mio_utils_chars_to_strings(System::Object^, int __pyx_skip_dispatch);
static NumpyDotNet::ndarray^ chars_to_strings(System::Object^, int __pyx_skip_dispatch); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.io.matlab.mio_utils"

/* Implementation of scipy.io.matlab.mio_utils */
namespace clr_mio_utils {
  public ref class module_mio_utils sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_12_22;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_long_12_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_13_18;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_size_t_13_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_size_22_14;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_22_14;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_array_23_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_23_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_squeeze_24_12;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_24_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_25_14;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_25_14;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dtype_25_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isbuiltin_25_34;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_25_34;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_item_26_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_26_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_45_23;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_45_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dtype_51_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_str_51_30;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_58_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getslice_58_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_58_42;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dtype_60_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_str_60_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getslice_60_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_60_45;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_60_40;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_61_26;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getslice_61_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ascontiguousarray_63_12;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_63_30;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_view_64_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_64_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_reshape_65_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_65_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_189_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_189_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_191_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_191_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_195_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_195_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_199_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_199_49;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_0;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":9
 * 
 * 
 * cpdef size_t cproduct(tup):             # <<<<<<<<<<<<<<
 *     cdef size_t res = 1
 *     cdef int i
 */

static  size_t cproduct(System::Object^ __pyx_v_tup) {
  size_t __pyx_v_res;
  int __pyx_v_i;
  size_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  long __pyx_t_3;
  int __pyx_t_4;
  size_t __pyx_t_5;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":10
 * 
 * cpdef size_t cproduct(tup):
 *     cdef size_t res = 1             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(len(tup)):
 */
  __pyx_v_res = 1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":12
 *     cdef size_t res = 1
 *     cdef int i
 *     for i in range(len(tup)):             # <<<<<<<<<<<<<<
 *         res *= tup[i]
 *     return res
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
  __pyx_t_2 = __site_call1_12_22->Target(__site_call1_12_22, __pyx_context, __pyx_t_1, __pyx_v_tup);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_cvt_long_12_22->Target(__site_cvt_long_12_22, __pyx_t_2);
  __pyx_t_2 = nullptr;
  for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
    __pyx_v_i = __pyx_t_4;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":13
 *     cdef int i
 *     for i in range(len(tup)):
 *         res *= tup[i]             # <<<<<<<<<<<<<<
 *     return res
 * 
 */
    __pyx_t_2 = __site_getindex_13_18->Target(__site_getindex_13_18, __pyx_v_tup, ((System::Object^)__pyx_v_i));
    __pyx_t_5 = __site_cvt_size_t_13_18->Target(__site_cvt_size_t_13_18, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_res *= __pyx_t_5;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":14
 *     for i in range(len(tup)):
 *         res *= tup[i]
 *     return res             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_res;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":17
 * 
 * 
 * cpdef object squeeze_element(cnp.ndarray arr):             # <<<<<<<<<<<<<<
 *     ''' Return squeezed element
 * 
 */

static  System::Object^ squeeze_element(NumpyDotNet::ndarray^ __pyx_v_arr) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":22
 *     The returned object may not be an ndarray - for example if we do
 *     ``arr.item`` to return a ``mat_struct`` object from a struct array '''
 *     if not arr.size:             # <<<<<<<<<<<<<<
 *         return np.array([])
 *     arr = np.squeeze(arr)
 */
  __pyx_t_1 = __site_get_size_22_14->Target(__site_get_size_22_14, ((System::Object^)__pyx_v_arr), __pyx_context);
  __pyx_t_2 = __site_istrue_22_14->Target(__site_istrue_22_14, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = (!__pyx_t_2);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":23
 *     ``arr.item`` to return a ``mat_struct`` object from a struct array '''
 *     if not arr.size:
 *         return np.array([])             # <<<<<<<<<<<<<<
 *     arr = np.squeeze(arr)
 *     if not arr.shape and arr.dtype.isbuiltin: # 0d coverted to scalar
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
    __pyx_t_4 = __site_get_array_23_17->Target(__site_get_array_23_17, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
    __pyx_t_5 = __site_call1_23_23->Target(__site_call1_23_23, __pyx_context, __pyx_t_4, ((System::Object^)__pyx_t_1));
    __pyx_t_4 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":24
 *     if not arr.size:
 *         return np.array([])
 *     arr = np.squeeze(arr)             # <<<<<<<<<<<<<<
 *     if not arr.shape and arr.dtype.isbuiltin: # 0d coverted to scalar
 *         return arr.item()
 */
  __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_squeeze_24_12->Target(__site_get_squeeze_24_12, __pyx_t_5, __pyx_context);
  __pyx_t_5 = nullptr;
  __pyx_t_5 = __site_call1_24_20->Target(__site_call1_24_20, __pyx_context, __pyx_t_1, ((System::Object^)__pyx_v_arr));
  __pyx_t_1 = nullptr;
  if (__pyx_t_5 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arr = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":25
 *         return np.array([])
 *     arr = np.squeeze(arr)
 *     if not arr.shape and arr.dtype.isbuiltin: # 0d coverted to scalar             # <<<<<<<<<<<<<<
 *         return arr.item()
 *     return arr
 */
  __pyx_t_5 = __site_get_shape_25_14->Target(__site_get_shape_25_14, ((System::Object^)__pyx_v_arr), __pyx_context);
  __pyx_t_3 = __site_istrue_25_14->Target(__site_istrue_25_14, __pyx_t_5);
  __pyx_t_5 = nullptr;
  __pyx_t_2 = (!__pyx_t_3);
  if (__pyx_t_2) {
    __pyx_t_5 = __site_get_dtype_25_28->Target(__site_get_dtype_25_28, ((System::Object^)__pyx_v_arr), __pyx_context);
    __pyx_t_1 = __site_get_isbuiltin_25_34->Target(__site_get_isbuiltin_25_34, __pyx_t_5, __pyx_context);
    __pyx_t_5 = nullptr;
    __pyx_t_3 = __site_istrue_25_34->Target(__site_istrue_25_34, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_6 = __pyx_t_3;
  } else {
    __pyx_t_6 = __pyx_t_2;
  }
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":26
 *     arr = np.squeeze(arr)
 *     if not arr.shape and arr.dtype.isbuiltin: # 0d coverted to scalar
 *         return arr.item()             # <<<<<<<<<<<<<<
 *     return arr
 * 
 */
    __pyx_t_1 = __site_get_item_26_18->Target(__site_get_item_26_18, ((System::Object^)__pyx_v_arr), __pyx_context);
    __pyx_t_5 = __site_call0_26_23->Target(__site_call0_26_23, __pyx_context, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":27
 *     if not arr.shape and arr.dtype.isbuiltin: # 0d coverted to scalar
 *         return arr.item()
 *     return arr             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_arr);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":30
 * 
 * 
 * cpdef cnp.ndarray chars_to_strings(in_arr):             # <<<<<<<<<<<<<<
 *     ''' Convert final axis of char array to strings
 * 
 */

static  NumpyDotNet::ndarray^ chars_to_strings(System::Object^ __pyx_v_in_arr) {
  NumpyDotNet::ndarray^ __pyx_v_arr = nullptr;
  int __pyx_v_ndim;
  __pyx_t_5numpy_npy_intp *__pyx_v_dims;
  __pyx_t_5numpy_npy_intp __pyx_v_last_dim;
  System::Object^ __pyx_v_new_dt_str;
  System::Object^ __pyx_v_out_shape;
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_new_dt_str = nullptr;
  __pyx_v_out_shape = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":44
 *        ``arr``
 *     '''
 *     cdef cnp.ndarray arr = in_arr             # <<<<<<<<<<<<<<
 *     cdef int ndim = arr.ndim
 *     cdef cnp.npy_intp *dims = cnp.PyArray_DIMS(arr)
 */
  if (__pyx_v_in_arr == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_in_arr) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arr = ((NumpyDotNet::ndarray^)__pyx_v_in_arr);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":45
 *     '''
 *     cdef cnp.ndarray arr = in_arr
 *     cdef int ndim = arr.ndim             # <<<<<<<<<<<<<<
 *     cdef cnp.npy_intp *dims = cnp.PyArray_DIMS(arr)
 *     cdef cnp.npy_intp last_dim = dims[ndim-1]
 */
  __pyx_t_1 = __site_get_ndim_45_23->Target(__site_get_ndim_45_23, ((System::Object^)__pyx_v_arr), __pyx_context);
  __pyx_t_2 = __site_cvt_int_45_23->Target(__site_cvt_int_45_23, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_ndim = __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":46
 *     cdef cnp.ndarray arr = in_arr
 *     cdef int ndim = arr.ndim
 *     cdef cnp.npy_intp *dims = cnp.PyArray_DIMS(arr)             # <<<<<<<<<<<<<<
 *     cdef cnp.npy_intp last_dim = dims[ndim-1]
 *     cdef object new_dt_str, out_shape
 */
  __pyx_v_dims = PyArray_DIMS(__pyx_v_arr);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":47
 *     cdef int ndim = arr.ndim
 *     cdef cnp.npy_intp *dims = cnp.PyArray_DIMS(arr)
 *     cdef cnp.npy_intp last_dim = dims[ndim-1]             # <<<<<<<<<<<<<<
 *     cdef object new_dt_str, out_shape
 *     if last_dim == 0: # deal with empty array case
 */
  __pyx_v_last_dim = (__pyx_v_dims[(__pyx_v_ndim - 1)]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":49
 *     cdef cnp.npy_intp last_dim = dims[ndim-1]
 *     cdef object new_dt_str, out_shape
 *     if last_dim == 0: # deal with empty array case             # <<<<<<<<<<<<<<
 *         # Started with U1 - which is OK for us
 *         new_dt_str = arr.dtype.str
 */
  __pyx_t_3 = (__pyx_v_last_dim == 0);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":51
 *     if last_dim == 0: # deal with empty array case
 *         # Started with U1 - which is OK for us
 *         new_dt_str = arr.dtype.str             # <<<<<<<<<<<<<<
 *         # So far we only know this is an empty array and that the last length is
 *         # 0.  The other dimensions could be non-zero.  We set the next to last
 */
    __pyx_t_1 = __site_get_dtype_51_24->Target(__site_get_dtype_51_24, ((System::Object^)__pyx_v_arr), __pyx_context);
    __pyx_t_4 = __site_get_str_51_30->Target(__site_get_str_51_30, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_v_new_dt_str = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":55
 *         # 0.  The other dimensions could be non-zero.  We set the next to last
 *         # dimension to zero to signal emptiness
 *         if ndim == 2:             # <<<<<<<<<<<<<<
 *             out_shape = (0,)
 *         else:
 */
    __pyx_t_3 = (__pyx_v_ndim == 2);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":56
 *         # dimension to zero to signal emptiness
 *         if ndim == 2:
 *             out_shape = (0,)             # <<<<<<<<<<<<<<
 *         else:
 *             out_shape = in_arr.shape[:-2] + (0,)
 */
      __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0});
      __pyx_v_out_shape = __pyx_t_4;
      __pyx_t_4 = nullptr;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":58
 *             out_shape = (0,)
 *         else:
 *             out_shape = in_arr.shape[:-2] + (0,)             # <<<<<<<<<<<<<<
 *     else: # make new dtype string with N appended
 *         new_dt_str = arr.dtype.str[:-1] + str(last_dim)
 */
      __pyx_t_4 = __site_get_shape_58_30->Target(__site_get_shape_58_30, __pyx_v_in_arr, __pyx_context);
      __pyx_t_1 = __site_getslice_58_36->Target(__site_getslice_58_36, __pyx_t_4, 0, -2);
      __pyx_t_4 = nullptr;
      __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0});
      __pyx_t_5 = __site_op_add_58_42->Target(__site_op_add_58_42, __pyx_t_1, __pyx_t_4);
      __pyx_t_1 = nullptr;
      __pyx_t_4 = nullptr;
      __pyx_v_out_shape = __pyx_t_5;
      __pyx_t_5 = nullptr;
    }
    __pyx_L4:;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":60
 *             out_shape = in_arr.shape[:-2] + (0,)
 *     else: # make new dtype string with N appended
 *         new_dt_str = arr.dtype.str[:-1] + str(last_dim)             # <<<<<<<<<<<<<<
 *         out_shape = in_arr.shape[:-1]
 *     # Copy to deal with F ordered arrays
 */
    __pyx_t_5 = __site_get_dtype_60_24->Target(__site_get_dtype_60_24, ((System::Object^)__pyx_v_arr), __pyx_context);
    __pyx_t_4 = __site_get_str_60_30->Target(__site_get_str_60_30, __pyx_t_5, __pyx_context);
    __pyx_t_5 = nullptr;
    __pyx_t_5 = __site_getslice_60_34->Target(__site_getslice_60_34, __pyx_t_4, 0, -1);
    __pyx_t_4 = nullptr;
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "str");
    __pyx_t_1 = __pyx_v_last_dim;
    __pyx_t_6 = __site_call1_60_45->Target(__site_call1_60_45, __pyx_context, ((System::Object^)__pyx_t_4), __pyx_t_1);
    __pyx_t_4 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_op_add_60_40->Target(__site_op_add_60_40, __pyx_t_5, __pyx_t_6);
    __pyx_t_5 = nullptr;
    __pyx_t_6 = nullptr;
    __pyx_v_new_dt_str = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":61
 *     else: # make new dtype string with N appended
 *         new_dt_str = arr.dtype.str[:-1] + str(last_dim)
 *         out_shape = in_arr.shape[:-1]             # <<<<<<<<<<<<<<
 *     # Copy to deal with F ordered arrays
 *     arr = np.ascontiguousarray(arr)
 */
    __pyx_t_1 = __site_get_shape_61_26->Target(__site_get_shape_61_26, __pyx_v_in_arr, __pyx_context);
    __pyx_t_6 = __site_getslice_61_32->Target(__site_getslice_61_32, __pyx_t_1, 0, -1);
    __pyx_t_1 = nullptr;
    __pyx_v_out_shape = __pyx_t_6;
    __pyx_t_6 = nullptr;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":63
 *         out_shape = in_arr.shape[:-1]
 *     # Copy to deal with F ordered arrays
 *     arr = np.ascontiguousarray(arr)             # <<<<<<<<<<<<<<
 *     arr = arr.view(new_dt_str)
 *     return arr.reshape(out_shape)
 */
  __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_ascontiguousarray_63_12->Target(__site_get_ascontiguousarray_63_12, __pyx_t_6, __pyx_context);
  __pyx_t_6 = nullptr;
  __pyx_t_6 = __site_call1_63_30->Target(__site_call1_63_30, __pyx_context, __pyx_t_1, ((System::Object^)__pyx_v_arr));
  __pyx_t_1 = nullptr;
  if (__pyx_t_6 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arr = ((NumpyDotNet::ndarray^)__pyx_t_6);
  __pyx_t_6 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":64
 *     # Copy to deal with F ordered arrays
 *     arr = np.ascontiguousarray(arr)
 *     arr = arr.view(new_dt_str)             # <<<<<<<<<<<<<<
 *     return arr.reshape(out_shape)
 */
  __pyx_t_6 = __site_get_view_64_13->Target(__site_get_view_64_13, ((System::Object^)__pyx_v_arr), __pyx_context);
  __pyx_t_1 = __site_call1_64_18->Target(__site_call1_64_18, __pyx_context, __pyx_t_6, __pyx_v_new_dt_str);
  __pyx_t_6 = nullptr;
  if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arr = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":65
 *     arr = np.ascontiguousarray(arr)
 *     arr = arr.view(new_dt_str)
 *     return arr.reshape(out_shape)             # <<<<<<<<<<<<<<
 */
  __pyx_t_1 = __site_get_reshape_65_14->Target(__site_get_reshape_65_14, ((System::Object^)__pyx_v_arr), __pyx_context);
  __pyx_t_6 = __site_call1_65_22->Target(__site_call1_65_22, __pyx_context, __pyx_t_1, __pyx_v_out_shape);
  __pyx_t_1 = nullptr;
  if (__pyx_t_6 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_6);
  __pyx_t_6 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":180
 *     object Npy_INTERFACE_array "Npy_INTERFACE_OBJECT" (NpyArray*)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":183
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

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":185
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

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":186
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":188
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":189
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_189_18->Target(__site_get_append_189_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_189_25->Target(__site_call1_189_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":190
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":191
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n):
 */
  __pyx_t_5 = __site_get_zeros_191_16->Target(__site_get_zeros_191_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_191_22->Target(__site_call3_191_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":193
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline void* PyArray_DATA(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":195
 * cdef inline void* PyArray_DATA(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_195_49->Target(__site_get_Array_195_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_195_49->Target(__site_cvt_PY_LONG_LONG_195_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":197
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

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":199
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_Array_199_49->Target(__site_get_Array_199_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_199_49->Target(__site_cvt_PY_LONG_LONG_199_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":201
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
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
  __site_call1_12_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_long_12_22 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_getindex_13_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_size_t_13_18 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_get_size_22_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "size", false));
  __site_istrue_22_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_array_23_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "array", false));
  __site_call1_23_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_squeeze_24_12 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "squeeze", false));
  __site_call1_24_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_25_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_istrue_25_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_dtype_25_28 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dtype", false));
  __site_get_isbuiltin_25_34 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isbuiltin", false));
  __site_istrue_25_34 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_item_26_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "item", false));
  __site_call0_26_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_get_ndim_45_23 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_cvt_int_45_23 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_dtype_51_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dtype", false));
  __site_get_str_51_30 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "str", false));
  __site_get_shape_58_30 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getslice_58_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetSliceBinder(__pyx_context));
  __site_op_add_58_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_get_dtype_60_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dtype", false));
  __site_get_str_60_30 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "str", false));
  __site_getslice_60_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetSliceBinder(__pyx_context));
  __site_call1_60_45 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_60_40 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_get_shape_61_26 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getslice_61_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetSliceBinder(__pyx_context));
  __site_get_ascontiguousarray_63_12 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ascontiguousarray", false));
  __site_call1_63_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_view_64_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "view", false));
  __site_call1_64_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_reshape_65_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "reshape", false));
  __site_call1_65_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_append_189_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_189_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_191_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_191_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_195_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_195_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_199_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_199_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":5
 * '''
 * 
 * import numpy as np             # <<<<<<<<<<<<<<
 * cimport numpy as cnp
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio_utils.pyx":1
 * # -*- python -*- like file             # <<<<<<<<<<<<<<
 * ''' Utilities for generic processing of return arrays from read
 * '''
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":201
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
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
[assembly: PythonModule("scipy__io__matlab__mio_utils", module_mio_utils::typeid)];
};
