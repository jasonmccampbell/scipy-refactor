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
  dict["__module__"] = "scipy.optimize.moduleTNC";
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
#define __PYX_HAVE_API__scipy__optimize__moduleTNC
#include "stdlib.h"
#include "pytools.h"
#include "tnc.h"

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

typedef int __pyx_t_7pytools_cb_jmp_buf;
/* Cython code section 'complex_type_declarations' */
/* Cython code section 'type_declarations' */

/* Type declarations */

/* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":25
 *     int tnc(int n, double *x, double *f, double *g, tnc_function *function, void *state, double *low, double *up, double *scale, double *offset, int messages, int maxCGit, int maxnfeval, double eta, double stepmx, double accuracy, double fmin, double ftol, double xtol, double pgtol, double rescale, int *nfeval)
 * 
 * cdef struct pytnc_state:             # <<<<<<<<<<<<<<
 *     PYOBJPTR py_function
 *     int n
 */

public struct __pyx_t_5scipy_8optimize_9moduleTNC_pytnc_state {
  PYOBJPTR py_function;
  int n;
  int failed;
  PYOBJPTR saved_exn;
};
/* Cython code section 'utility_code_proto' */
/* Cython code section 'module_declarations' */
/* Module declarations from libc.stdlib */
/* Module declarations from pytools */
static CYTHON_INLINE System::Object^ INITOBJECT(PYOBJPTR *); /*proto*/
static CYTHON_INLINE int cb_setjmp(__pyx_t_7pytools_cb_jmp_buf); /*proto*/
static CYTHON_INLINE void cb_longjmp(__pyx_t_7pytools_cb_jmp_buf, int); /*proto*/
static CYTHON_INLINE System::Object^ cb_reraise(System::Object^); /*proto*/
/* Module declarations from scipy.optimize.moduleTNC */
static double *double_array(System::Object^, int *); /*proto*/
static System::Object^ list_into_double_array(System::Object^, double *, int); /*proto*/
static System::Object^ double_array_as_list(int, double *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_8optimize_9moduleTNC_function(double *, double *, double *, void *);
static int function(double *, double *, double *, void *); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.optimize.moduleTNC"

/* Implementation of scipy.optimize.moduleTNC */
namespace clr_moduleTNC {
  public ref class module_moduleTNC sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_36_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_36_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_40_17;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_40_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_49_26;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_49_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_57_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_57_12;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_57_12;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_62_22;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_62_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_67_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_72_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_82_28;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_87_8;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_94_49;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_94_58;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_98_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_98_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_98_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_98_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_98_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_98_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_98_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_98_0_4;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_98_0_5;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_98_0_6;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_98_0_7;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_106_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_106_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_162_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_162_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_162_51;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_112_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_112_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_112_44;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":32
 *     PYOBJPTR saved_exn
 * 
 * cdef double *double_array(py_list, int *size):             # <<<<<<<<<<<<<<
 *     cdef double *x
 *     cdef int i
 */

static  double *double_array(System::Object^ __pyx_v_py_list, int *__pyx_v_size) {
  double *__pyx_v_x;
  int __pyx_v_i;
  double *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_9;
  int __pyx_t_10;
  double __pyx_t_11;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":36
 *     cdef int i
 * 
 *     if not isinstance(py_list, list):             # <<<<<<<<<<<<<<
 *         size[0] = -1
 *         return NULL
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "list");
  __pyx_t_3 = __site_call2_36_21->Target(__site_call2_36_21, __pyx_context, __pyx_t_1, __pyx_v_py_list, ((System::Object^)__pyx_t_2));
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_36_21->Target(__site_istrue_36_21, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":37
 * 
 *     if not isinstance(py_list, list):
 *         size[0] = -1             # <<<<<<<<<<<<<<
 *         return NULL
 * 
 */
    (__pyx_v_size[0]) = -1;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":38
 *     if not isinstance(py_list, list):
 *         size[0] = -1
 *         return NULL             # <<<<<<<<<<<<<<
 * 
 *     size[0] = len(py_list)
 */
    __pyx_r = NULL;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":40
 *         return NULL
 * 
 *     size[0] = len(py_list)             # <<<<<<<<<<<<<<
 *     if size[0] <= 0: return NULL
 * 
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "len");
  __pyx_t_2 = __site_call1_40_17->Target(__site_call1_40_17, __pyx_context, __pyx_t_3, __pyx_v_py_list);
  __pyx_t_3 = nullptr;
  __pyx_t_6 = __site_cvt_cvt_int_40_17->Target(__site_cvt_cvt_int_40_17, __pyx_t_2);
  __pyx_t_2 = nullptr;
  (__pyx_v_size[0]) = __pyx_t_6;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":41
 * 
 *     size[0] = len(py_list)
 *     if size[0] <= 0: return NULL             # <<<<<<<<<<<<<<
 * 
 *     x = <double *>malloc(size[0] * sizeof(double))
 */
  __pyx_t_5 = ((__pyx_v_size[0]) <= 0);
  if (__pyx_t_5) {
    __pyx_r = NULL;
    goto __pyx_L0;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":43
 *     if size[0] <= 0: return NULL
 * 
 *     x = <double *>malloc(size[0] * sizeof(double))             # <<<<<<<<<<<<<<
 *     if x == NULL:
 *         return NULL
 */
  __pyx_v_x = ((double *)malloc(((__pyx_v_size[0]) * (sizeof(double)))));

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":44
 * 
 *     x = <double *>malloc(size[0] * sizeof(double))
 *     if x == NULL:             # <<<<<<<<<<<<<<
 *         return NULL
 * 
 */
  __pyx_t_5 = (__pyx_v_x == NULL);
  if (__pyx_t_5) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":45
 *     x = <double *>malloc(size[0] * sizeof(double))
 *     if x == NULL:
 *         return NULL             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
    __pyx_r = NULL;
    goto __pyx_L0;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":47
 *         return NULL
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         for i in range(size[0]):
 *             x[i] = py_list[i]
 */
  try {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":48
 * 
 *     try:
 *         for i in range(size[0]):             # <<<<<<<<<<<<<<
 *             x[i] = py_list[i]
 *     except:
 */
    __pyx_t_9 = (__pyx_v_size[0]);
    for (__pyx_t_10 = 0; __pyx_t_10 < __pyx_t_9; __pyx_t_10+=1) {
      __pyx_v_i = __pyx_t_10;

      /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":49
 *     try:
 *         for i in range(size[0]):
 *             x[i] = py_list[i]             # <<<<<<<<<<<<<<
 *     except:
 *         free(x)
 */
      __pyx_t_2 = __site_getindex_49_26->Target(__site_getindex_49_26, __pyx_v_py_list, ((System::Object^)__pyx_v_i));
      __pyx_t_11 = __site_cvt_cvt_double_49_26->Target(__site_cvt_cvt_double_49_26, __pyx_t_2);
      __pyx_t_2 = nullptr;
      (__pyx_v_x[__pyx_v_i]) = __pyx_t_11;
    }
  } catch (System::Exception^ __pyx_lt_7) {
    System::Object^ __pyx_lt_8 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_7);

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":50
 *         for i in range(size[0]):
 *             x[i] = py_list[i]
 *     except:             # <<<<<<<<<<<<<<
 *         free(x)
 *         return NULL
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.optimize.moduleTNC.double_array");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_7);

      /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":51
 *             x[i] = py_list[i]
 *     except:
 *         free(x)             # <<<<<<<<<<<<<<
 *         return NULL
 * 
 */
      free(__pyx_v_x);

      /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":52
 *     except:
 *         free(x)
 *         return NULL             # <<<<<<<<<<<<<<
 * 
 *     return x
 */
      __pyx_r = NULL;
      goto __pyx_L0;
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":54
 *         return NULL
 * 
 *     return x             # <<<<<<<<<<<<<<
 * 
 * cdef list_into_double_array(list py_list, double *x, int size):
 */
  __pyx_r = __pyx_v_x;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":56
 *     return x
 * 
 * cdef list_into_double_array(list py_list, double *x, int size):             # <<<<<<<<<<<<<<
 *     if size != len(py_list):
 *         raise ValueError
 */

static  System::Object^ list_into_double_array(System::Object^ __pyx_v_py_list, double *__pyx_v_x, int __pyx_v_size) {
  int __pyx_v_i;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  double __pyx_t_7;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":57
 * 
 * cdef list_into_double_array(list py_list, double *x, int size):
 *     if size != len(py_list):             # <<<<<<<<<<<<<<
 *         raise ValueError
 * 
 */
  __pyx_t_1 = __pyx_v_size;
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "len");
  __pyx_t_3 = __site_call1_57_18->Target(__site_call1_57_18, __pyx_context, __pyx_t_2, ((System::Object^)__pyx_v_py_list));
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_ne_57_12->Target(__site_op_ne_57_12, __pyx_t_1, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = __site_istrue_57_12->Target(__site_istrue_57_12, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_4) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":58
 * cdef list_into_double_array(list py_list, double *x, int size):
 *     if size != len(py_list):
 *         raise ValueError             # <<<<<<<<<<<<<<
 * 
 *     cdef int i
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":61
 * 
 *     cdef int i
 *     for i in range(size):             # <<<<<<<<<<<<<<
 *         x[i] = py_list[i]
 * 
 */
  __pyx_t_5 = __pyx_v_size;
  for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
    __pyx_v_i = __pyx_t_6;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":62
 *     cdef int i
 *     for i in range(size):
 *         x[i] = py_list[i]             # <<<<<<<<<<<<<<
 * 
 * cdef double_array_as_list(int size, double *x):
 */
    __pyx_t_2 = __site_getindex_62_22->Target(__site_getindex_62_22, ((System::Object^)__pyx_v_py_list), ((System::Object^)__pyx_v_i));
    __pyx_t_7 = __site_cvt_cvt_double_62_22->Target(__site_cvt_cvt_double_62_22, __pyx_t_2);
    __pyx_t_2 = nullptr;
    (__pyx_v_x[__pyx_v_i]) = __pyx_t_7;
  }

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":64
 *         x[i] = py_list[i]
 * 
 * cdef double_array_as_list(int size, double *x):             # <<<<<<<<<<<<<<
 *     # XXX Less efficient than original C version that used PyList_New
 *     # (but more portable)
 */

static  System::Object^ double_array_as_list(int __pyx_v_size, double *__pyx_v_x) {
  System::Object^ __pyx_v_py_list;
  int __pyx_v_i;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_py_list = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":67
 *     # XXX Less efficient than original C version that used PyList_New
 *     # (but more portable)
 *     py_list = [None] * size             # <<<<<<<<<<<<<<
 * 
 *     cdef int i
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{nullptr});
  __pyx_t_2 = __pyx_v_size;
  __pyx_t_3 = __site_op_mul_67_21->Target(__site_op_mul_67_21, ((System::Object^)__pyx_t_1), __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_3 != nullptr && dynamic_cast<IronPython::Runtime::List^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_py_list = ((System::Object^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":71
 *     cdef int i
 * 
 *     for i in range(size):             # <<<<<<<<<<<<<<
 *         py_list[i] = x[i]
 * 
 */
  __pyx_t_4 = __pyx_v_size;
  for (__pyx_t_5 = 0; __pyx_t_5 < __pyx_t_4; __pyx_t_5+=1) {
    __pyx_v_i = __pyx_t_5;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":72
 * 
 *     for i in range(size):
 *         py_list[i] = x[i]             # <<<<<<<<<<<<<<
 * 
 * cdef int function(double *x, double *f, double *g, void *state):
 */
    __pyx_t_3 = (__pyx_v_x[__pyx_v_i]);
    __site_setindex_72_15->Target(__site_setindex_72_15, ((System::Object^)__pyx_v_py_list), ((System::Object^)__pyx_v_i), __pyx_t_3);
    __pyx_t_3 = nullptr;
  }

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":74
 *         py_list[i] = x[i]
 * 
 * cdef int function(double *x, double *f, double *g, void *state):             # <<<<<<<<<<<<<<
 *     cdef pytnc_state *py_state = <pytnc_state*>state
 * 
 */

static int (*__pyx_function_pointer_function)(double *, double *, double *, void *);
typedef int (*__pyx_fp_t_function)(double *, double *, double *, void *);
static __pyx_delegate_t_5scipy_8optimize_9moduleTNC_function^ __pyx_delegate_val_function;
static  int function(double *__pyx_v_x, double *__pyx_v_f, double *__pyx_v_g, void *__pyx_v_state) {
  struct __pyx_t_5scipy_8optimize_9moduleTNC_pytnc_state *__pyx_v_py_state;
  System::Object^ __pyx_v_py_list;
  System::Object^ __pyx_v_py_function;
  System::Object^ __pyx_v_result;
  System::Object^ __pyx_v_py_grad;
  int __pyx_r;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  array<System::Object^>^ __pyx_t_5;
  System::Object^ __pyx_t_6 = nullptr;
  double __pyx_t_7;
  __pyx_v_py_list = nullptr;
  __pyx_v_py_function = nullptr;
  __pyx_v_result = nullptr;
  __pyx_v_py_grad = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":75
 * 
 * cdef int function(double *x, double *f, double *g, void *state):
 *     cdef pytnc_state *py_state = <pytnc_state*>state             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
  __pyx_v_py_state = ((struct __pyx_t_5scipy_8optimize_9moduleTNC_pytnc_state *)__pyx_v_state);

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":77
 *     cdef pytnc_state *py_state = <pytnc_state*>state
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         py_list = double_array_as_list(py_state.n, x)
 * 
 */
  try {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":78
 * 
 *     try:
 *         py_list = double_array_as_list(py_state.n, x)             # <<<<<<<<<<<<<<
 * 
 *         py_function = READOBJECT(&py_state.py_function)
 */
    __pyx_t_3 = double_array_as_list(__pyx_v_py_state->n, __pyx_v_x); 
    __pyx_v_py_list = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":80
 *         py_list = double_array_as_list(py_state.n, x)
 * 
 *         py_function = READOBJECT(&py_state.py_function)             # <<<<<<<<<<<<<<
 * 
 *         result = py_function(py_list)
 */
    __pyx_t_3 = READOBJECT((&__pyx_v_py_state->py_function)); 
    __pyx_v_py_function = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":82
 *         py_function = READOBJECT(&py_state.py_function)
 * 
 *         result = py_function(py_list)             # <<<<<<<<<<<<<<
 * 
 *         if result is None:
 */
    __pyx_t_3 = __site_call1_82_28->Target(__site_call1_82_28, __pyx_context, __pyx_v_py_function, __pyx_v_py_list);
    __pyx_v_result = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":84
 *         result = py_function(py_list)
 * 
 *         if result is None:             # <<<<<<<<<<<<<<
 *             return 1
 * 
 */
    __pyx_t_4 = (__pyx_v_result == nullptr);
    if (__pyx_t_4) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":85
 * 
 *         if result is None:
 *             return 1             # <<<<<<<<<<<<<<
 * 
 *         f[0], py_grad = result
 */
      __pyx_r = 1;
      goto __pyx_L0;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":87
 *             return 1
 * 
 *         f[0], py_grad = result             # <<<<<<<<<<<<<<
 * 
 *         list_into_double_array(py_grad, g, py_state.n)
 */
    __pyx_t_5 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_result, 2)));
    __pyx_t_3 = __pyx_t_5[0];
    __pyx_t_7 = __site_cvt_cvt_double_87_8->Target(__site_cvt_cvt_double_87_8, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_t_6 = __pyx_t_5[1];
    __pyx_t_5 = nullptr;
    (__pyx_v_f[0]) = __pyx_t_7;
    __pyx_v_py_grad = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":89
 *         f[0], py_grad = result
 * 
 *         list_into_double_array(py_grad, g, py_state.n)             # <<<<<<<<<<<<<<
 * 
 *         return 0
 */
    if (__pyx_v_py_grad != nullptr && dynamic_cast<IronPython::Runtime::List^>(__pyx_v_py_grad) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_6 = list_into_double_array(((System::Object^)__pyx_v_py_grad), __pyx_v_g, __pyx_v_py_state->n); 
    __pyx_t_6 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":91
 *         list_into_double_array(py_grad, g, py_state.n)
 * 
 *         return 0             # <<<<<<<<<<<<<<
 *     except:
 *         assert not py_state.failed
 */
    __pyx_r = 0;
    goto __pyx_L0;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":92
 * 
 *         return 0
 *     except:             # <<<<<<<<<<<<<<
 *         assert not py_state.failed
 *         INITASSIGNOBJECT(&py_state.saved_exn, sys.exc_info())
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.optimize.moduleTNC.function");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":93
 *         return 0
 *     except:
 *         assert not py_state.failed             # <<<<<<<<<<<<<<
 *         INITASSIGNOBJECT(&py_state.saved_exn, sys.exc_info())
 *         py_state.failed = 1
 */
      #ifndef PYREX_WITHOUT_ASSERTIONS
      if (unlikely(!(!__pyx_v_py_state->failed))) {
        PythonOps::RaiseAssertionError(nullptr);
      }
      #endif

      /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":94
 *     except:
 *         assert not py_state.failed
 *         INITASSIGNOBJECT(&py_state.saved_exn, sys.exc_info())             # <<<<<<<<<<<<<<
 *         py_state.failed = 1
 *         return 1
 */
      __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_3 = __site_get_exc_info_94_49->Target(__site_get_exc_info_94_49, __pyx_t_6, __pyx_context);
      __pyx_t_6 = nullptr;
      __pyx_t_6 = __site_call0_94_58->Target(__site_call0_94_58, __pyx_context, __pyx_t_3);
      __pyx_t_3 = nullptr;
      INITASSIGNOBJECT((&__pyx_v_py_state->saved_exn), __pyx_t_6);
      __pyx_t_6 = nullptr;

      /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":95
 *         assert not py_state.failed
 *         INITASSIGNOBJECT(&py_state.saved_exn, sys.exc_info())
 *         py_state.failed = 1             # <<<<<<<<<<<<<<
 *         return 1
 * 
 */
      __pyx_v_py_state->failed = 1;

      /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":96
 *         INITASSIGNOBJECT(&py_state.saved_exn, sys.exc_info())
 *         py_state.failed = 1
 *         return 1             # <<<<<<<<<<<<<<
 * 
 * def minimize(py_function, list py_x0, list py_low, list py_up, list py_scale, list py_offset,
 */
      __pyx_r = 1;
      goto __pyx_L0;
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":98
 *         return 1
 * 
 * def minimize(py_function, list py_x0, list py_low, list py_up, list py_scale, list py_offset,             # <<<<<<<<<<<<<<
 *              int msg, int maxCGit, int maxnfeval,
 *              double eta, double stepmx, double accuracy,
 */

static System::Object^ minimize(System::Object^ py_function, System::Object^ py_x0, System::Object^ py_low, System::Object^ py_up, System::Object^ py_scale, System::Object^ py_offset, System::Object^ msg, System::Object^ maxCGit, System::Object^ maxnfeval, System::Object^ eta, System::Object^ stepmx, System::Object^ accuracy, System::Object^ fmin, System::Object^ ftol, System::Object^ xtol, System::Object^ pgtol, System::Object^ rescale) {
  System::Object^ __pyx_v_py_function = nullptr;
  System::Object^ __pyx_v_py_x0 = nullptr;
  System::Object^ __pyx_v_py_low = nullptr;
  System::Object^ __pyx_v_py_up = nullptr;
  System::Object^ __pyx_v_py_scale = nullptr;
  System::Object^ __pyx_v_py_offset = nullptr;
  int __pyx_v_msg;
  int __pyx_v_maxCGit;
  int __pyx_v_maxnfeval;
  double __pyx_v_eta;
  double __pyx_v_stepmx;
  double __pyx_v_accuracy;
  double __pyx_v_fmin;
  double __pyx_v_ftol;
  double __pyx_v_xtol;
  double __pyx_v_pgtol;
  double __pyx_v_rescale;
  int __pyx_v_n;
  int __pyx_v_n1;
  int __pyx_v_n2;
  int __pyx_v_n3;
  int __pyx_v_n4;
  int __pyx_v_nfeval;
  double *__pyx_v_scale;
  double *__pyx_v_offset;
  double *__pyx_v_x;
  double *__pyx_v_low;
  double *__pyx_v_up;
  struct __pyx_t_5scipy_8optimize_9moduleTNC_pytnc_state __pyx_v_py_state;
  double __pyx_v_f;
  int __pyx_v_rc;
  System::Object^ __pyx_v_saved_exn;
  System::Object^ __pyx_v_py_list;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  System::Object^ __pyx_t_9 = nullptr;
  __pyx_v_py_function = py_function;
  __pyx_v_py_x0 = ((System::Object^)py_x0);
  __pyx_v_py_low = ((System::Object^)py_low);
  __pyx_v_py_up = ((System::Object^)py_up);
  __pyx_v_py_scale = ((System::Object^)py_scale);
  __pyx_v_py_offset = ((System::Object^)py_offset);
  __pyx_v_msg = __site_cvt_cvt_int_98_0->Target(__site_cvt_cvt_int_98_0, msg);
  __pyx_v_maxCGit = __site_cvt_cvt_int_98_0_1->Target(__site_cvt_cvt_int_98_0_1, maxCGit);
  __pyx_v_maxnfeval = __site_cvt_cvt_int_98_0_2->Target(__site_cvt_cvt_int_98_0_2, maxnfeval);
  __pyx_v_eta = __site_cvt_cvt_double_98_0->Target(__site_cvt_cvt_double_98_0, eta);
  __pyx_v_stepmx = __site_cvt_cvt_double_98_0_1->Target(__site_cvt_cvt_double_98_0_1, stepmx);
  __pyx_v_accuracy = __site_cvt_cvt_double_98_0_2->Target(__site_cvt_cvt_double_98_0_2, accuracy);
  __pyx_v_fmin = __site_cvt_cvt_double_98_0_3->Target(__site_cvt_cvt_double_98_0_3, fmin);
  __pyx_v_ftol = __site_cvt_cvt_double_98_0_4->Target(__site_cvt_cvt_double_98_0_4, ftol);
  __pyx_v_xtol = __site_cvt_cvt_double_98_0_5->Target(__site_cvt_cvt_double_98_0_5, xtol);
  __pyx_v_pgtol = __site_cvt_cvt_double_98_0_6->Target(__site_cvt_cvt_double_98_0_6, pgtol);
  __pyx_v_rescale = __site_cvt_cvt_double_98_0_7->Target(__site_cvt_cvt_double_98_0_7, rescale);
  __pyx_v_saved_exn = nullptr;
  __pyx_v_py_list = nullptr;
  if (unlikely(dynamic_cast<IronPython::Runtime::List^>(__pyx_v_py_x0) == nullptr)) {
    throw PythonOps::TypeError("Argument 'py_x0' has incorrect type");
  }
  if (unlikely(dynamic_cast<IronPython::Runtime::List^>(__pyx_v_py_low) == nullptr)) {
    throw PythonOps::TypeError("Argument 'py_low' has incorrect type");
  }
  if (unlikely(dynamic_cast<IronPython::Runtime::List^>(__pyx_v_py_up) == nullptr)) {
    throw PythonOps::TypeError("Argument 'py_up' has incorrect type");
  }
  if (unlikely(dynamic_cast<IronPython::Runtime::List^>(__pyx_v_py_scale) == nullptr)) {
    throw PythonOps::TypeError("Argument 'py_scale' has incorrect type");
  }
  if (unlikely(dynamic_cast<IronPython::Runtime::List^>(__pyx_v_py_offset) == nullptr)) {
    throw PythonOps::TypeError("Argument 'py_offset' has incorrect type");
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":106
 *     cdef int nfeval
 * 
 *     if not callable(py_function):             # <<<<<<<<<<<<<<
 *         raise TypeError, "tnc: function must be callable"
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "callable");
  __pyx_t_2 = __site_call1_106_19->Target(__site_call1_106_19, __pyx_context, __pyx_t_1, __pyx_v_py_function);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_106_19->Target(__site_istrue_106_19, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = (!__pyx_t_3);
  if (__pyx_t_4) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":107
 * 
 *     if not callable(py_function):
 *         raise TypeError, "tnc: function must be callable"             # <<<<<<<<<<<<<<
 * 
 *     cdef double *scale = double_array(py_scale, &n3)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, ((System::Object^)"tnc: function must be callable"), nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":109
 *         raise TypeError, "tnc: function must be callable"
 * 
 *     cdef double *scale = double_array(py_scale, &n3)             # <<<<<<<<<<<<<<
 *     if n3 != 0 and scale == NULL:
 *         raise ValueError, "tnc: invalid scaling parameters."
 */
  __pyx_v_scale = double_array(((System::Object^)__pyx_v_py_scale), (&__pyx_v_n3));

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":110
 * 
 *     cdef double *scale = double_array(py_scale, &n3)
 *     if n3 != 0 and scale == NULL:             # <<<<<<<<<<<<<<
 *         raise ValueError, "tnc: invalid scaling parameters."
 * 
 */
  __pyx_t_4 = (__pyx_v_n3 != 0);
  if (__pyx_t_4) {
    __pyx_t_3 = (__pyx_v_scale == NULL);
    __pyx_t_5 = __pyx_t_3;
  } else {
    __pyx_t_5 = __pyx_t_4;
  }
  if (__pyx_t_5) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":111
 *     cdef double *scale = double_array(py_scale, &n3)
 *     if n3 != 0 and scale == NULL:
 *         raise ValueError, "tnc: invalid scaling parameters."             # <<<<<<<<<<<<<<
 * 
 *     cdef double *offset = double_array(py_offset, &n4)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, ((System::Object^)"tnc: invalid scaling parameters."), nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":113
 *         raise ValueError, "tnc: invalid scaling parameters."
 * 
 *     cdef double *offset = double_array(py_offset, &n4)             # <<<<<<<<<<<<<<
 *     if n4 != 0 and offset == NULL:
 *         if scale: free(scale)
 */
  __pyx_v_offset = double_array(((System::Object^)__pyx_v_py_offset), (&__pyx_v_n4));

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":114
 * 
 *     cdef double *offset = double_array(py_offset, &n4)
 *     if n4 != 0 and offset == NULL:             # <<<<<<<<<<<<<<
 *         if scale: free(scale)
 *         raise ValueError, "tnc: invalid offset parameters."
 */
  __pyx_t_5 = (__pyx_v_n4 != 0);
  if (__pyx_t_5) {
    __pyx_t_4 = (__pyx_v_offset == NULL);
    __pyx_t_3 = __pyx_t_4;
  } else {
    __pyx_t_3 = __pyx_t_5;
  }
  if (__pyx_t_3) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":115
 *     cdef double *offset = double_array(py_offset, &n4)
 *     if n4 != 0 and offset == NULL:
 *         if scale: free(scale)             # <<<<<<<<<<<<<<
 *         raise ValueError, "tnc: invalid offset parameters."
 * 
 */
    __pyx_t_3 = (__pyx_v_scale != 0);
    if (__pyx_t_3) {
      free(__pyx_v_scale);
      goto __pyx_L8;
    }
    __pyx_L8:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":116
 *     if n4 != 0 and offset == NULL:
 *         if scale: free(scale)
 *         raise ValueError, "tnc: invalid offset parameters."             # <<<<<<<<<<<<<<
 * 
 *     cdef double *x = double_array(py_x0, &n)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, ((System::Object^)"tnc: invalid offset parameters."), nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":118
 *         raise ValueError, "tnc: invalid offset parameters."
 * 
 *     cdef double *x = double_array(py_x0, &n)             # <<<<<<<<<<<<<<
 *     if n != 0 and x == NULL:
 *         if scale: free(scale)
 */
  __pyx_v_x = double_array(((System::Object^)__pyx_v_py_x0), (&__pyx_v_n));

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":119
 * 
 *     cdef double *x = double_array(py_x0, &n)
 *     if n != 0 and x == NULL:             # <<<<<<<<<<<<<<
 *         if scale: free(scale)
 *         if offset: free(offset)
 */
  __pyx_t_3 = (__pyx_v_n != 0);
  if (__pyx_t_3) {
    __pyx_t_5 = (__pyx_v_x == NULL);
    __pyx_t_4 = __pyx_t_5;
  } else {
    __pyx_t_4 = __pyx_t_3;
  }
  if (__pyx_t_4) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":120
 *     cdef double *x = double_array(py_x0, &n)
 *     if n != 0 and x == NULL:
 *         if scale: free(scale)             # <<<<<<<<<<<<<<
 *         if offset: free(offset)
 *         raise ValueError, "tnc: invalid initial vector."
 */
    __pyx_t_4 = (__pyx_v_scale != 0);
    if (__pyx_t_4) {
      free(__pyx_v_scale);
      goto __pyx_L10;
    }
    __pyx_L10:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":121
 *     if n != 0 and x == NULL:
 *         if scale: free(scale)
 *         if offset: free(offset)             # <<<<<<<<<<<<<<
 *         raise ValueError, "tnc: invalid initial vector."
 * 
 */
    __pyx_t_4 = (__pyx_v_offset != 0);
    if (__pyx_t_4) {
      free(__pyx_v_offset);
      goto __pyx_L11;
    }
    __pyx_L11:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":122
 *         if scale: free(scale)
 *         if offset: free(offset)
 *         raise ValueError, "tnc: invalid initial vector."             # <<<<<<<<<<<<<<
 * 
 *     cdef double *low = double_array(py_low, &n1)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, ((System::Object^)"tnc: invalid initial vector."), nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":124
 *         raise ValueError, "tnc: invalid initial vector."
 * 
 *     cdef double *low = double_array(py_low, &n1)             # <<<<<<<<<<<<<<
 *     cdef double *up = double_array(py_up, &n2)
 *     if (n1 != 0 and low == NULL) or (n2 != 0 and up == NULL):
 */
  __pyx_v_low = double_array(((System::Object^)__pyx_v_py_low), (&__pyx_v_n1));

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":125
 * 
 *     cdef double *low = double_array(py_low, &n1)
 *     cdef double *up = double_array(py_up, &n2)             # <<<<<<<<<<<<<<
 *     if (n1 != 0 and low == NULL) or (n2 != 0 and up == NULL):
 *         if scale: free(scale)
 */
  __pyx_v_up = double_array(((System::Object^)__pyx_v_py_up), (&__pyx_v_n2));

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":126
 *     cdef double *low = double_array(py_low, &n1)
 *     cdef double *up = double_array(py_up, &n2)
 *     if (n1 != 0 and low == NULL) or (n2 != 0 and up == NULL):             # <<<<<<<<<<<<<<
 *         if scale: free(scale)
 *         if x: free(x)
 */
  __pyx_t_4 = (__pyx_v_n1 != 0);
  if (__pyx_t_4) {
    __pyx_t_3 = (__pyx_v_low == NULL);
    __pyx_t_5 = __pyx_t_3;
  } else {
    __pyx_t_5 = __pyx_t_4;
  }
  if (!__pyx_t_5) {
    __pyx_t_4 = (__pyx_v_n2 != 0);
    if (__pyx_t_4) {
      __pyx_t_3 = (__pyx_v_up == NULL);
      __pyx_t_6 = __pyx_t_3;
    } else {
      __pyx_t_6 = __pyx_t_4;
    }
    __pyx_t_4 = __pyx_t_6;
  } else {
    __pyx_t_4 = __pyx_t_5;
  }
  if (__pyx_t_4) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":127
 *     cdef double *up = double_array(py_up, &n2)
 *     if (n1 != 0 and low == NULL) or (n2 != 0 and up == NULL):
 *         if scale: free(scale)             # <<<<<<<<<<<<<<
 *         if x: free(x)
 *         if offset: free(offset)
 */
    __pyx_t_4 = (__pyx_v_scale != 0);
    if (__pyx_t_4) {
      free(__pyx_v_scale);
      goto __pyx_L13;
    }
    __pyx_L13:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":128
 *     if (n1 != 0 and low == NULL) or (n2 != 0 and up == NULL):
 *         if scale: free(scale)
 *         if x: free(x)             # <<<<<<<<<<<<<<
 *         if offset: free(offset)
 *         if low: free(low)
 */
    __pyx_t_4 = (__pyx_v_x != 0);
    if (__pyx_t_4) {
      free(__pyx_v_x);
      goto __pyx_L14;
    }
    __pyx_L14:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":129
 *         if scale: free(scale)
 *         if x: free(x)
 *         if offset: free(offset)             # <<<<<<<<<<<<<<
 *         if low: free(low)
 *         if up: free(up)
 */
    __pyx_t_4 = (__pyx_v_offset != 0);
    if (__pyx_t_4) {
      free(__pyx_v_offset);
      goto __pyx_L15;
    }
    __pyx_L15:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":130
 *         if x: free(x)
 *         if offset: free(offset)
 *         if low: free(low)             # <<<<<<<<<<<<<<
 *         if up: free(up)
 *         raise ValueError, "tnc: invalid bounds."
 */
    __pyx_t_4 = (__pyx_v_low != 0);
    if (__pyx_t_4) {
      free(__pyx_v_low);
      goto __pyx_L16;
    }
    __pyx_L16:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":131
 *         if offset: free(offset)
 *         if low: free(low)
 *         if up: free(up)             # <<<<<<<<<<<<<<
 *         raise ValueError, "tnc: invalid bounds."
 * 
 */
    __pyx_t_4 = (__pyx_v_up != 0);
    if (__pyx_t_4) {
      free(__pyx_v_up);
      goto __pyx_L17;
    }
    __pyx_L17:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":132
 *         if low: free(low)
 *         if up: free(up)
 *         raise ValueError, "tnc: invalid bounds."             # <<<<<<<<<<<<<<
 * 
 *     if n1 != n2 or n != n1 or (scale != NULL and n != n3) or (offset != NULL and n != n4):
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, ((System::Object^)"tnc: invalid bounds."), nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":134
 *         raise ValueError, "tnc: invalid bounds."
 * 
 *     if n1 != n2 or n != n1 or (scale != NULL and n != n3) or (offset != NULL and n != n4):             # <<<<<<<<<<<<<<
 *         if scale: free(scale)
 *         if x: free(x)
 */
  __pyx_t_4 = (__pyx_v_n1 != __pyx_v_n2);
  if (!__pyx_t_4) {
    __pyx_t_5 = (__pyx_v_n != __pyx_v_n1);
    if (!__pyx_t_5) {
      __pyx_t_6 = (__pyx_v_scale != NULL);
      if (__pyx_t_6) {
        __pyx_t_3 = (__pyx_v_n != __pyx_v_n3);
        __pyx_t_7 = __pyx_t_3;
      } else {
        __pyx_t_7 = __pyx_t_6;
      }
      if (!__pyx_t_7) {
        __pyx_t_6 = (__pyx_v_offset != NULL);
        if (__pyx_t_6) {
          __pyx_t_3 = (__pyx_v_n != __pyx_v_n4);
          __pyx_t_8 = __pyx_t_3;
        } else {
          __pyx_t_8 = __pyx_t_6;
        }
        __pyx_t_6 = __pyx_t_8;
      } else {
        __pyx_t_6 = __pyx_t_7;
      }
      __pyx_t_7 = __pyx_t_6;
    } else {
      __pyx_t_7 = __pyx_t_5;
    }
    __pyx_t_5 = __pyx_t_7;
  } else {
    __pyx_t_5 = __pyx_t_4;
  }
  if (__pyx_t_5) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":135
 * 
 *     if n1 != n2 or n != n1 or (scale != NULL and n != n3) or (offset != NULL and n != n4):
 *         if scale: free(scale)             # <<<<<<<<<<<<<<
 *         if x: free(x)
 *         if offset: free(offset)
 */
    __pyx_t_5 = (__pyx_v_scale != 0);
    if (__pyx_t_5) {
      free(__pyx_v_scale);
      goto __pyx_L19;
    }
    __pyx_L19:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":136
 *     if n1 != n2 or n != n1 or (scale != NULL and n != n3) or (offset != NULL and n != n4):
 *         if scale: free(scale)
 *         if x: free(x)             # <<<<<<<<<<<<<<
 *         if offset: free(offset)
 *         if low: free(low)
 */
    __pyx_t_5 = (__pyx_v_x != 0);
    if (__pyx_t_5) {
      free(__pyx_v_x);
      goto __pyx_L20;
    }
    __pyx_L20:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":137
 *         if scale: free(scale)
 *         if x: free(x)
 *         if offset: free(offset)             # <<<<<<<<<<<<<<
 *         if low: free(low)
 *         if up: free(up)
 */
    __pyx_t_5 = (__pyx_v_offset != 0);
    if (__pyx_t_5) {
      free(__pyx_v_offset);
      goto __pyx_L21;
    }
    __pyx_L21:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":138
 *         if x: free(x)
 *         if offset: free(offset)
 *         if low: free(low)             # <<<<<<<<<<<<<<
 *         if up: free(up)
 *         raise ValueError, "tnc: vector sizes must be equal."
 */
    __pyx_t_5 = (__pyx_v_low != 0);
    if (__pyx_t_5) {
      free(__pyx_v_low);
      goto __pyx_L22;
    }
    __pyx_L22:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":139
 *         if offset: free(offset)
 *         if low: free(low)
 *         if up: free(up)             # <<<<<<<<<<<<<<
 *         raise ValueError, "tnc: vector sizes must be equal."
 * 
 */
    __pyx_t_5 = (__pyx_v_up != 0);
    if (__pyx_t_5) {
      free(__pyx_v_up);
      goto __pyx_L23;
    }
    __pyx_L23:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":140
 *         if low: free(low)
 *         if up: free(up)
 *         raise ValueError, "tnc: vector sizes must be equal."             # <<<<<<<<<<<<<<
 * 
 *     cdef pytnc_state py_state
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, ((System::Object^)"tnc: vector sizes must be equal."), nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L18;
  }
  __pyx_L18:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":143
 * 
 *     cdef pytnc_state py_state
 *     INITASSIGNOBJECT(&py_state.py_function, py_function)             # <<<<<<<<<<<<<<
 *     py_state.n = n
 *     py_state.failed = 0
 */
  INITASSIGNOBJECT((&__pyx_v_py_state.py_function), __pyx_v_py_function);

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":144
 *     cdef pytnc_state py_state
 *     INITASSIGNOBJECT(&py_state.py_function, py_function)
 *     py_state.n = n             # <<<<<<<<<<<<<<
 *     py_state.failed = 0
 * 
 */
  __pyx_v_py_state.n = __pyx_v_n;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":145
 *     INITASSIGNOBJECT(&py_state.py_function, py_function)
 *     py_state.n = n
 *     py_state.failed = 0             # <<<<<<<<<<<<<<
 * 
 *     cdef double f
 */
  __pyx_v_py_state.failed = 0;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":149
 *     cdef double f
 * 
 *     cdef int rc = tnc(n, x, &f, NULL, function, &py_state, low, up, scale, offset, msg, maxCGit, maxnfeval, eta, stepmx, accuracy, fmin, ftol, xtol, pgtol, rescale, &nfeval)             # <<<<<<<<<<<<<<
 * 
 *     DEINITOBJECT(&py_state.py_function)
 */
  __pyx_v_rc = tnc(__pyx_v_n, __pyx_v_x, (&__pyx_v_f), NULL, __pyx_function_pointer_function, (&__pyx_v_py_state), __pyx_v_low, __pyx_v_up, __pyx_v_scale, __pyx_v_offset, __pyx_v_msg, __pyx_v_maxCGit, __pyx_v_maxnfeval, __pyx_v_eta, __pyx_v_stepmx, __pyx_v_accuracy, __pyx_v_fmin, __pyx_v_ftol, __pyx_v_xtol, __pyx_v_pgtol, __pyx_v_rescale, (&__pyx_v_nfeval));

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":151
 *     cdef int rc = tnc(n, x, &f, NULL, function, &py_state, low, up, scale, offset, msg, maxCGit, maxnfeval, eta, stepmx, accuracy, fmin, ftol, xtol, pgtol, rescale, &nfeval)
 * 
 *     DEINITOBJECT(&py_state.py_function)             # <<<<<<<<<<<<<<
 * 
 *     if scale: free(scale)
 */
  DEINITOBJECT((&__pyx_v_py_state.py_function));

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":153
 *     DEINITOBJECT(&py_state.py_function)
 * 
 *     if scale: free(scale)             # <<<<<<<<<<<<<<
 *     if offset: free(offset)
 *     if low: free(low)
 */
  __pyx_t_5 = (__pyx_v_scale != 0);
  if (__pyx_t_5) {
    free(__pyx_v_scale);
    goto __pyx_L24;
  }
  __pyx_L24:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":154
 * 
 *     if scale: free(scale)
 *     if offset: free(offset)             # <<<<<<<<<<<<<<
 *     if low: free(low)
 *     if up: free(up)
 */
  __pyx_t_5 = (__pyx_v_offset != 0);
  if (__pyx_t_5) {
    free(__pyx_v_offset);
    goto __pyx_L25;
  }
  __pyx_L25:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":155
 *     if scale: free(scale)
 *     if offset: free(offset)
 *     if low: free(low)             # <<<<<<<<<<<<<<
 *     if up: free(up)
 * 
 */
  __pyx_t_5 = (__pyx_v_low != 0);
  if (__pyx_t_5) {
    free(__pyx_v_low);
    goto __pyx_L26;
  }
  __pyx_L26:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":156
 *     if offset: free(offset)
 *     if low: free(low)
 *     if up: free(up)             # <<<<<<<<<<<<<<
 * 
 *     if py_state.failed:
 */
  __pyx_t_5 = (__pyx_v_up != 0);
  if (__pyx_t_5) {
    free(__pyx_v_up);
    goto __pyx_L27;
  }
  __pyx_L27:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":158
 *     if up: free(up)
 * 
 *     if py_state.failed:             # <<<<<<<<<<<<<<
 *         if x: free(x)
 *         saved_exn = READOBJECT(&py_state.saved_exn)
 */
  if (__pyx_v_py_state.failed) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":159
 * 
 *     if py_state.failed:
 *         if x: free(x)             # <<<<<<<<<<<<<<
 *         saved_exn = READOBJECT(&py_state.saved_exn)
 *         DEINITOBJECT(&py_state.saved_exn)
 */
    __pyx_t_5 = (__pyx_v_x != 0);
    if (__pyx_t_5) {
      free(__pyx_v_x);
      goto __pyx_L29;
    }
    __pyx_L29:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":160
 *     if py_state.failed:
 *         if x: free(x)
 *         saved_exn = READOBJECT(&py_state.saved_exn)             # <<<<<<<<<<<<<<
 *         DEINITOBJECT(&py_state.saved_exn)
 *         raise saved_exn[0], saved_exn[1], saved_exn[2]
 */
    __pyx_t_2 = READOBJECT((&__pyx_v_py_state.saved_exn)); 
    __pyx_v_saved_exn = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":161
 *         if x: free(x)
 *         saved_exn = READOBJECT(&py_state.saved_exn)
 *         DEINITOBJECT(&py_state.saved_exn)             # <<<<<<<<<<<<<<
 *         raise saved_exn[0], saved_exn[1], saved_exn[2]
 * 
 */
    DEINITOBJECT((&__pyx_v_py_state.saved_exn));

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":162
 *         saved_exn = READOBJECT(&py_state.saved_exn)
 *         DEINITOBJECT(&py_state.saved_exn)
 *         raise saved_exn[0], saved_exn[1], saved_exn[2]             # <<<<<<<<<<<<<<
 * 
 *     if rc == TNC_ENOMEM:
 */
    __pyx_t_2 = __site_getindex_162_23->Target(__site_getindex_162_23, __pyx_v_saved_exn, ((System::Object^)0));
    __pyx_t_1 = __site_getindex_162_37->Target(__site_getindex_162_37, __pyx_v_saved_exn, ((System::Object^)1));
    __pyx_t_9 = __site_getindex_162_51->Target(__site_getindex_162_51, __pyx_v_saved_exn, ((System::Object^)2));
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, __pyx_t_1, __pyx_t_9);
    __pyx_t_2 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_9 = nullptr;
    goto __pyx_L28;
  }
  __pyx_L28:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":164
 *         raise saved_exn[0], saved_exn[1], saved_exn[2]
 * 
 *     if rc == TNC_ENOMEM:             # <<<<<<<<<<<<<<
 *         if x: free(x)
 *         raise MemoryError, "tnc: memory allocation failed."
 */
  __pyx_t_5 = (__pyx_v_rc == TNC_ENOMEM);
  if (__pyx_t_5) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":165
 * 
 *     if rc == TNC_ENOMEM:
 *         if x: free(x)             # <<<<<<<<<<<<<<
 *         raise MemoryError, "tnc: memory allocation failed."
 * 
 */
    __pyx_t_5 = (__pyx_v_x != 0);
    if (__pyx_t_5) {
      free(__pyx_v_x);
      goto __pyx_L31;
    }
    __pyx_L31:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":166
 *     if rc == TNC_ENOMEM:
 *         if x: free(x)
 *         raise MemoryError, "tnc: memory allocation failed."             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_9, ((System::Object^)"tnc: memory allocation failed."), nullptr);
    __pyx_t_9 = nullptr;
    goto __pyx_L30;
  }
  __pyx_L30:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":168
 *         raise MemoryError, "tnc: memory allocation failed."
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         py_list = double_array_as_list(n, x)
 *     finally:
 */
  try {

    /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":169
 * 
 *     try:
 *         py_list = double_array_as_list(n, x)             # <<<<<<<<<<<<<<
 *     finally:
 *         if x: free(x)
 */
    __pyx_t_9 = double_array_as_list(__pyx_v_n, __pyx_v_x); 
    __pyx_v_py_list = __pyx_t_9;
    __pyx_t_9 = nullptr;
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":171
 *         py_list = double_array_as_list(n, x)
 *     finally:
 *         if x: free(x)             # <<<<<<<<<<<<<<
 * 
 *     return (rc, nfeval, py_list)
 */
  finally {
    __pyx_t_5 = (__pyx_v_x != 0);
    if (__pyx_t_5) {
      free(__pyx_v_x);
      goto __pyx_L32;
    }
    __pyx_L32:;
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":173
 *         if x: free(x)
 * 
 *     return (rc, nfeval, py_list)             # <<<<<<<<<<<<<<
 */
  __pyx_t_9 = __pyx_v_rc;
  __pyx_t_1 = __pyx_v_nfeval;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_9, __pyx_t_1, __pyx_v_py_list});
  __pyx_t_9 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\pytools.pxd":21
 *      void DEINITOBJECT(PYOBJPTR* ptr)
 * 
 * cdef inline INITOBJECT(PYOBJPTR* ptr):             # <<<<<<<<<<<<<<
 *      INITASSIGNOBJECT(ptr, None)
 * 
 */

static CYTHON_INLINE System::Object^ INITOBJECT(PYOBJPTR *__pyx_v_ptr) {
  System::Object^ __pyx_r = nullptr;

  /* "../cython/include\pytools.pxd":22
 * 
 * cdef inline INITOBJECT(PYOBJPTR* ptr):
 *      INITASSIGNOBJECT(ptr, None)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  INITASSIGNOBJECT(__pyx_v_ptr, nullptr);

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "../cython/include\pytools.pxd":105
 * ctypedef int cb_jmp_buf
 * 
 * cdef inline int cb_setjmp(cb_jmp_buf buf):             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */

static CYTHON_INLINE int cb_setjmp(__pyx_t_7pytools_cb_jmp_buf __pyx_v_buf) {
  int __pyx_r;

  /* "../cython/include\pytools.pxd":106
 * 
 * cdef inline int cb_setjmp(cb_jmp_buf buf):
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * cdef inline void cb_longjmp(cb_jmp_buf buf, int v):
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\pytools.pxd":108
 *     return 0
 * 
 * cdef inline void cb_longjmp(cb_jmp_buf buf, int v):             # <<<<<<<<<<<<<<
 *     pass
 * 
 */

static CYTHON_INLINE void cb_longjmp(__pyx_t_7pytools_cb_jmp_buf __pyx_v_buf, int __pyx_v_v) {

}

/* "../cython/include\pytools.pxd":111
 *     pass
 * 
 * cdef inline cb_reraise(exn_info):             # <<<<<<<<<<<<<<
 *     raise exn_info[0], exn_info[1], exn_info[2]
 * 
 */

static CYTHON_INLINE System::Object^ cb_reraise(System::Object^ __pyx_v_exn_info) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;

  /* "../cython/include\pytools.pxd":112
 * 
 * cdef inline cb_reraise(exn_info):
 *     raise exn_info[0], exn_info[1], exn_info[2]             # <<<<<<<<<<<<<<
 * 
 * # The CPython implementation would look like this:
 */
  __pyx_t_1 = __site_getindex_112_18->Target(__site_getindex_112_18, __pyx_v_exn_info, ((System::Object^)0));
  __pyx_t_2 = __site_getindex_112_31->Target(__site_getindex_112_31, __pyx_v_exn_info, ((System::Object^)1));
  __pyx_t_3 = __site_getindex_112_44->Target(__site_getindex_112_44, __pyx_v_exn_info, ((System::Object^)2));
  throw PythonOps::MakeException(__pyx_context, __pyx_t_1, __pyx_t_2, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;

  __pyx_r = nullptr;
  return __pyx_r;
}
// XXX skipping all typeobj definitions
/* Cython code section 'pystring_table' */
/* Cython code section 'cached_builtins' */
/* Cython code section 'init_globals' */

static int __Pyx_InitGlobals(void) {

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
  __site_call2_36_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_36_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_40_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_40_17 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_getindex_49_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_double_49_26 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_57_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_ne_57_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_57_12 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_getindex_62_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_double_62_22 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_67_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_setindex_72_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_82_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_87_8 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_get_exc_info_94_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_94_58 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_cvt_int_98_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_98_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_98_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_98_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_98_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_98_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_98_0_3 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_98_0_4 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_98_0_5 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_98_0_6 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_98_0_7 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_106_19 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_106_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_getindex_162_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_162_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_162_51 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_112_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_112_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_112_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  /*--- Type import code ---*/
  /*--- Create function pointers ---*/
  __pyx_delegate_val_function = gcnew __pyx_delegate_t_5scipy_8optimize_9moduleTNC_function(function);
  __pyx_function_pointer_function = (__pyx_fp_t_function)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_function).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":1
 * import sys             # <<<<<<<<<<<<<<
 * 
 * from libc.stdlib cimport malloc, free
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "sys", -1));
  PythonOps::SetGlobal(__pyx_context, "sys", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\moduleTNC.pyx":98
 *         return 1
 * 
 * def minimize(py_function, list py_x0, list py_low, list py_up, list py_scale, list py_offset,             # <<<<<<<<<<<<<<
 *              int msg, int maxCGit, int maxnfeval,
 *              double eta, double stepmx, double accuracy,
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "../cython/include\pytools.pxd":111
 *     pass
 * 
 * cdef inline cb_reraise(exn_info):             # <<<<<<<<<<<<<<
 *     raise exn_info[0], exn_info[1], exn_info[2]
 * 
 */
}
/* Cython code section 'cleanup_globals' */
/* Cython code section 'cleanup_module' */
/* Cython code section 'main_method' */
/* Cython code section 'dotnet_globals' */



/* Cython code section 'utility_code_def' */

/* Runtime support code */
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__optimize__moduleTNC", module_moduleTNC::typeid)];
};
