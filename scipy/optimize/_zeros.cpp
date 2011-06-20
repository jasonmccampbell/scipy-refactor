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
  dict["__module__"] = "scipy.optimize._zeros";
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
#define __PYX_HAVE_API__scipy__optimize___zeros
#include "pytools.h"
#include "Zeros/zeros.h"

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

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":34
 * cdef double scipy_zeros_rtol = __compute_relative_precision()
 * 
 * cdef struct scipy_zeros_parameters:             # <<<<<<<<<<<<<<
 *      # First 3 fields must be here, must be in this order
 *      int funcalls
 */

public struct __pyx_t_5scipy_8optimize_6_zeros_scipy_zeros_parameters {
  int funcalls;
  int iterations;
  int error_num;
  PYOBJPTR function;
  PYOBJPTR args;
  __pyx_t_7pytools_cb_jmp_buf jmp_buf;
  PYOBJPTR exn_info;
};
/* Cython code section 'utility_code_proto' */
/* Cython code section 'module_declarations' */
/* Module declarations from pytools */
static CYTHON_INLINE System::Object^ INITOBJECT(PYOBJPTR *); /*proto*/
static CYTHON_INLINE int cb_setjmp(__pyx_t_7pytools_cb_jmp_buf); /*proto*/
static CYTHON_INLINE void cb_longjmp(__pyx_t_7pytools_cb_jmp_buf, int); /*proto*/
static CYTHON_INLINE System::Object^ cb_reraise(System::Object^); /*proto*/
/* Module declarations from scipy.optimize._zeros */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate double __pyx_delegate_t_5scipy_8optimize_6_zeros_scipy_zeros_functions_func(double, void *);
static double scipy_zeros_functions_func(double, void *); /*proto*/
static int scipy_zeros_cb_core(double *, double, void *); /*proto*/
static System::Object^ call_solver(solver_type, System::Object^, double, double, double, int, System::Object^, int, int); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.optimize._zeros"

/* Implementation of scipy.optimize._zeros */
namespace clr__zeros {
  public ref class module__zeros sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_32_59;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_32_59;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_ARGS_56_18;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_57_26;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exn_info_60_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_60_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_89_26;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_89_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_89_52;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_99_74;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_105_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_105_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_105_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_105_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_105_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_105_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_110_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_110_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_110_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_110_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_110_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_110_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_115_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_115_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_115_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_115_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_115_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_115_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_120_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_120_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_120_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_120_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_120_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_120_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_112_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_112_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_112_44;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_0;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":24
 *     double brentq(callback_type f, double xa, double xb, double xtol, double rtol, int iter, default_parameters *params)
 * 
 * def __compute_relative_precision():             # <<<<<<<<<<<<<<
 *     cdef double tol = 1
 * 
 */

static System::Object^ __compute_relative_precision() {
  double __pyx_v_tol;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":25
 * 
 * def __compute_relative_precision():
 *     cdef double tol = 1             # <<<<<<<<<<<<<<
 * 
 *     while tol + 1 != 1:
 */
  __pyx_v_tol = 1.0;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":27
 *     cdef double tol = 1
 * 
 *     while tol + 1 != 1:             # <<<<<<<<<<<<<<
 *         tol /= 2
 * 
 */
  while (1) {
    __pyx_t_1 = ((__pyx_v_tol + 1.0) != 1.0);
    if (!__pyx_t_1) break;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":28
 * 
 *     while tol + 1 != 1:
 *         tol /= 2             # <<<<<<<<<<<<<<
 * 
 *     return 2*tol
 */
    __pyx_v_tol /= 2.0;
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":30
 *         tol /= 2
 * 
 *     return 2*tol             # <<<<<<<<<<<<<<
 * 
 * cdef double scipy_zeros_rtol = __compute_relative_precision()
 */
  __pyx_t_2 = (2.0 * __pyx_v_tol);
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":44
 *      PYOBJPTR exn_info
 * 
 * cdef double scipy_zeros_functions_func(double x, void *params):             # <<<<<<<<<<<<<<
 *     cdef double result
 *     if scipy_zeros_cb_core(&result, x, params) == 0:
 */

static double (*__pyx_function_pointer_scipy_zeros_functions_func)(double, void *);
typedef double (*__pyx_fp_t_scipy_zeros_functions_func)(double, void *);
static __pyx_delegate_t_5scipy_8optimize_6_zeros_scipy_zeros_functions_func^ __pyx_delegate_val_scipy_zeros_functions_func;
static  double scipy_zeros_functions_func(double __pyx_v_x, void *__pyx_v_params) {
  double __pyx_v_result;
  double __pyx_r;
  int __pyx_t_1;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":46
 * cdef double scipy_zeros_functions_func(double x, void *params):
 *     cdef double result
 *     if scipy_zeros_cb_core(&result, x, params) == 0:             # <<<<<<<<<<<<<<
 *         return result
 *     else:
 */
  __pyx_t_1 = (scipy_zeros_cb_core((&__pyx_v_result), __pyx_v_x, __pyx_v_params) == 0);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":47
 *     cdef double result
 *     if scipy_zeros_cb_core(&result, x, params) == 0:
 *         return result             # <<<<<<<<<<<<<<
 *     else:
 *         cb_longjmp((<scipy_zeros_parameters*>params).jmp_buf, 1)
 */
    __pyx_r = __pyx_v_result;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":49
 *         return result
 *     else:
 *         cb_longjmp((<scipy_zeros_parameters*>params).jmp_buf, 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int scipy_zeros_cb_core(double *result, double x, void *vparams):
 */
    cb_longjmp(((struct __pyx_t_5scipy_8optimize_6_zeros_scipy_zeros_parameters *)__pyx_v_params)->jmp_buf, 1);
  }
  __pyx_L3:;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":51
 *         cb_longjmp((<scipy_zeros_parameters*>params).jmp_buf, 1)
 * 
 * cdef int scipy_zeros_cb_core(double *result, double x, void *vparams):             # <<<<<<<<<<<<<<
 *     cdef scipy_zeros_parameters *params = <scipy_zeros_parameters*>vparams
 *     try:
 */

static  int scipy_zeros_cb_core(double *__pyx_v_result, double __pyx_v_x, void *__pyx_v_vparams) {
  struct __pyx_t_5scipy_8optimize_6_zeros_scipy_zeros_parameters *__pyx_v_params;
  System::Object^ __pyx_v_args;
  System::Object^ __pyx_v_f;
  System::Object^ __pyx_v_retval;
  System::Object^ __pyx_v_exn_info;
  int __pyx_r;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  double __pyx_t_5;
  __pyx_v_args = nullptr;
  __pyx_v_f = nullptr;
  __pyx_v_retval = nullptr;
  __pyx_v_exn_info = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":52
 * 
 * cdef int scipy_zeros_cb_core(double *result, double x, void *vparams):
 *     cdef scipy_zeros_parameters *params = <scipy_zeros_parameters*>vparams             # <<<<<<<<<<<<<<
 *     try:
 *         args = READOBJECT(&params.args)
 */
  __pyx_v_params = ((struct __pyx_t_5scipy_8optimize_6_zeros_scipy_zeros_parameters *)__pyx_v_vparams);

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":53
 * cdef int scipy_zeros_cb_core(double *result, double x, void *vparams):
 *     cdef scipy_zeros_parameters *params = <scipy_zeros_parameters*>vparams
 *     try:             # <<<<<<<<<<<<<<
 *         args = READOBJECT(&params.args)
 *         f = READOBJECT(&params.function)
 */
  try {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":54
 *     cdef scipy_zeros_parameters *params = <scipy_zeros_parameters*>vparams
 *     try:
 *         args = READOBJECT(&params.args)             # <<<<<<<<<<<<<<
 *         f = READOBJECT(&params.function)
 *         retval = f(x, *args)
 */
    __pyx_t_3 = READOBJECT((&__pyx_v_params->args)); 
    __pyx_v_args = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":55
 *     try:
 *         args = READOBJECT(&params.args)
 *         f = READOBJECT(&params.function)             # <<<<<<<<<<<<<<
 *         retval = f(x, *args)
 *         result[0] = retval
 */
    __pyx_t_3 = READOBJECT((&__pyx_v_params->function)); 
    __pyx_v_f = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":56
 *         args = READOBJECT(&params.args)
 *         f = READOBJECT(&params.function)
 *         retval = f(x, *args)             # <<<<<<<<<<<<<<
 *         result[0] = retval
 *         return 0
 */
    __pyx_t_3 = __pyx_v_x;
    __pyx_t_4 = __site_call1_ARGS_56_18->Target(__site_call1_ARGS_56_18, __pyx_context, __pyx_v_f, __pyx_t_3, __pyx_v_args);
    __pyx_t_3 = nullptr;
    __pyx_v_retval = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":57
 *         f = READOBJECT(&params.function)
 *         retval = f(x, *args)
 *         result[0] = retval             # <<<<<<<<<<<<<<
 *         return 0
 *     except:
 */
    __pyx_t_5 = __site_cvt_cvt_double_57_26->Target(__site_cvt_cvt_double_57_26, __pyx_v_retval);
    (__pyx_v_result[0]) = __pyx_t_5;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":58
 *         retval = f(x, *args)
 *         result[0] = retval
 *         return 0             # <<<<<<<<<<<<<<
 *     except:
 *         exn_info = sys.exn_info()
 */
    __pyx_r = 0;
    goto __pyx_L0;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":59
 *         result[0] = retval
 *         return 0
 *     except:             # <<<<<<<<<<<<<<
 *         exn_info = sys.exn_info()
 *         cb_reraise(exn_info)
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.optimize._zeros.scipy_zeros_cb_core");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":60
 *         return 0
 *     except:
 *         exn_info = sys.exn_info()             # <<<<<<<<<<<<<<
 *         cb_reraise(exn_info)
 *         INITASSIGNOBJECT(&params.exn_info, exn_info)
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_3 = __site_get_exn_info_60_22->Target(__site_get_exn_info_60_22, __pyx_t_4, __pyx_context);
      __pyx_t_4 = nullptr;
      __pyx_t_4 = __site_call0_60_31->Target(__site_call0_60_31, __pyx_context, __pyx_t_3);
      __pyx_t_3 = nullptr;
      __pyx_v_exn_info = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":61
 *     except:
 *         exn_info = sys.exn_info()
 *         cb_reraise(exn_info)             # <<<<<<<<<<<<<<
 *         INITASSIGNOBJECT(&params.exn_info, exn_info)
 *         return 1
 */
      __pyx_t_4 = cb_reraise(__pyx_v_exn_info); 
      __pyx_t_4 = nullptr;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":62
 *         exn_info = sys.exn_info()
 *         cb_reraise(exn_info)
 *         INITASSIGNOBJECT(&params.exn_info, exn_info)             # <<<<<<<<<<<<<<
 *         return 1
 * 
 */
      INITASSIGNOBJECT((&__pyx_v_params->exn_info), __pyx_v_exn_info);

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":63
 *         cb_reraise(exn_info)
 *         INITASSIGNOBJECT(&params.exn_info, exn_info)
 *         return 1             # <<<<<<<<<<<<<<
 * 
 * cdef call_solver(solver_type solver, object f,
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

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":65
 *         return 1
 * 
 * cdef call_solver(solver_type solver, object f,             # <<<<<<<<<<<<<<
 *                  double a, double b, double xtol, int iter,
 *                  object xargs, int fulloutput, int disp):
 */

static  System::Object^ call_solver(solver_type __pyx_v_solver, System::Object^ __pyx_v_f, double __pyx_v_a, double __pyx_v_b, double __pyx_v_xtol, int __pyx_v_iter, System::Object^ __pyx_v_xargs, int __pyx_v_fulloutput, int __pyx_v_disp) {
  double __pyx_v_zero;
  int __pyx_v_flag;
  struct __pyx_t_5scipy_8optimize_6_zeros_scipy_zeros_parameters __pyx_v_params;
  System::Object^ __pyx_v_exn_info;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_exn_info = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":69
 *                  object xargs, int fulloutput, int disp):
 *     cdef double zero
 *     cdef int i, len, flag=0             # <<<<<<<<<<<<<<
 *     cdef scipy_zeros_parameters params
 * 
 */
  __pyx_v_flag = 0;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":72
 *     cdef scipy_zeros_parameters params
 * 
 *     if xtol < 0:             # <<<<<<<<<<<<<<
 *         raise ValueError, "xtol must be >= 0"
 * 
 */
  __pyx_t_1 = (__pyx_v_xtol < 0.0);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":73
 * 
 *     if xtol < 0:
 *         raise ValueError, "xtol must be >= 0"             # <<<<<<<<<<<<<<
 * 
 *     if iter < 0:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, ((System::Object^)"xtol must be >= 0"), nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":75
 *         raise ValueError, "xtol must be >= 0"
 * 
 *     if iter < 0:             # <<<<<<<<<<<<<<
 *         raise ValueError, "maxiter should be > 0"
 * 
 */
  __pyx_t_1 = (__pyx_v_iter < 0);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":76
 * 
 *     if iter < 0:
 *         raise ValueError, "maxiter should be > 0"             # <<<<<<<<<<<<<<
 * 
 *     INITASSIGNOBJECT(&params.function, f)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, ((System::Object^)"maxiter should be > 0"), nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":78
 *         raise ValueError, "maxiter should be > 0"
 * 
 *     INITASSIGNOBJECT(&params.function, f)             # <<<<<<<<<<<<<<
 *     INITASSIGNOBJECT(&params.args, xargs)
 *     params.error_num = 0
 */
  INITASSIGNOBJECT((&__pyx_v_params.function), __pyx_v_f);

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":79
 * 
 *     INITASSIGNOBJECT(&params.function, f)
 *     INITASSIGNOBJECT(&params.args, xargs)             # <<<<<<<<<<<<<<
 *     params.error_num = 0
 *     try:
 */
  INITASSIGNOBJECT((&__pyx_v_params.args), __pyx_v_xargs);

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":80
 *     INITASSIGNOBJECT(&params.function, f)
 *     INITASSIGNOBJECT(&params.args, xargs)
 *     params.error_num = 0             # <<<<<<<<<<<<<<
 *     try:
 *         if cb_setjmp(params.jmp_buf) == 0:
 */
  __pyx_v_params.error_num = 0;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":81
 *     INITASSIGNOBJECT(&params.args, xargs)
 *     params.error_num = 0
 *     try:             # <<<<<<<<<<<<<<
 *         if cb_setjmp(params.jmp_buf) == 0:
 *             zero = solver(scipy_zeros_functions_func, a, b,
 */
  try {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":82
 *     params.error_num = 0
 *     try:
 *         if cb_setjmp(params.jmp_buf) == 0:             # <<<<<<<<<<<<<<
 *             zero = solver(scipy_zeros_functions_func, a, b,
 *                           xtol, scipy_zeros_rtol, iter,
 */
    __pyx_t_1 = (cb_setjmp(__pyx_v_params.jmp_buf) == 0);
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":85
 *             zero = solver(scipy_zeros_functions_func, a, b,
 *                           xtol, scipy_zeros_rtol, iter,
 *                           <default_parameters*>&params)             # <<<<<<<<<<<<<<
 *         else:
 *             exn_info = READOBJECT(&params.exn_info)
 */
      __pyx_v_zero = __pyx_v_solver(__pyx_function_pointer_scipy_zeros_functions_func, __pyx_v_a, __pyx_v_b, __pyx_v_xtol, __pyx_v_5scipy_8optimize_6_zeros_scipy_zeros_rtol, __pyx_v_iter, ((default_parameters *)(&__pyx_v_params)));
      goto __pyx_L5;
    }
    /*else*/ {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":87
 *                           <default_parameters*>&params)
 *         else:
 *             exn_info = READOBJECT(&params.exn_info)             # <<<<<<<<<<<<<<
 *             DEINITOBJECT(&params.exn_info)
 *             raise exn_info[0], exn_info[1], exn_info[2]
 */
      __pyx_t_2 = READOBJECT((&__pyx_v_params.exn_info)); 
      __pyx_v_exn_info = __pyx_t_2;
      __pyx_t_2 = nullptr;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":88
 *         else:
 *             exn_info = READOBJECT(&params.exn_info)
 *             DEINITOBJECT(&params.exn_info)             # <<<<<<<<<<<<<<
 *             raise exn_info[0], exn_info[1], exn_info[2]
 * 
 */
      DEINITOBJECT((&__pyx_v_params.exn_info));

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":89
 *             exn_info = READOBJECT(&params.exn_info)
 *             DEINITOBJECT(&params.exn_info)
 *             raise exn_info[0], exn_info[1], exn_info[2]             # <<<<<<<<<<<<<<
 * 
 *     finally:
 */
      __pyx_t_2 = __site_getindex_89_26->Target(__site_getindex_89_26, __pyx_v_exn_info, ((System::Object^)0));
      __pyx_t_3 = __site_getindex_89_39->Target(__site_getindex_89_39, __pyx_v_exn_info, ((System::Object^)1));
      __pyx_t_4 = __site_getindex_89_52->Target(__site_getindex_89_52, __pyx_v_exn_info, ((System::Object^)2));
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, __pyx_t_3, __pyx_t_4);
      __pyx_t_2 = nullptr;
      __pyx_t_3 = nullptr;
      __pyx_t_4 = nullptr;
    }
    __pyx_L5:;
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":92
 * 
 *     finally:
 *         DEINITOBJECT(&params.function)             # <<<<<<<<<<<<<<
 *         DEINITOBJECT(&params.args)
 * 
 */
  finally {
    DEINITOBJECT((&__pyx_v_params.function));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":93
 *     finally:
 *         DEINITOBJECT(&params.function)
 *         DEINITOBJECT(&params.args)             # <<<<<<<<<<<<<<
 * 
 *     if params.error_num != 0:
 */
    DEINITOBJECT((&__pyx_v_params.args));
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":95
 *         DEINITOBJECT(&params.args)
 * 
 *     if params.error_num != 0:             # <<<<<<<<<<<<<<
 *         if params.error_num == SIGNERR:
 *             raise ValueError, "f(a) and f(b) must have different signs"
 */
  __pyx_t_1 = (__pyx_v_params.error_num != 0);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":96
 * 
 *     if params.error_num != 0:
 *         if params.error_num == SIGNERR:             # <<<<<<<<<<<<<<
 *             raise ValueError, "f(a) and f(b) must have different signs"
 *         if params.error_num == CONVERR:
 */
    __pyx_t_1 = (__pyx_v_params.error_num == SIGNERR);
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":97
 *     if params.error_num != 0:
 *         if params.error_num == SIGNERR:
 *             raise ValueError, "f(a) and f(b) must have different signs"             # <<<<<<<<<<<<<<
 *         if params.error_num == CONVERR:
 *             raise RuntimeError, "Failed to converge after %d iterations." % params.iterations
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, ((System::Object^)"f(a) and f(b) must have different signs"), nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":98
 *         if params.error_num == SIGNERR:
 *             raise ValueError, "f(a) and f(b) must have different signs"
 *         if params.error_num == CONVERR:             # <<<<<<<<<<<<<<
 *             raise RuntimeError, "Failed to converge after %d iterations." % params.iterations
 *     if fulloutput:
 */
    __pyx_t_1 = (__pyx_v_params.error_num == CONVERR);
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":99
 *             raise ValueError, "f(a) and f(b) must have different signs"
 *         if params.error_num == CONVERR:
 *             raise RuntimeError, "Failed to converge after %d iterations." % params.iterations             # <<<<<<<<<<<<<<
 *     if fulloutput:
 *         return (zero, params.funcalls, params.iterations, 0)
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
      __pyx_t_3 = __pyx_v_params.iterations;
      __pyx_t_2 = __site_op_mod_99_74->Target(__site_op_mod_99_74, ((System::Object^)"Failed to converge after %d iterations."), __pyx_t_3);
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, ((System::Object^)__pyx_t_2), nullptr);
      __pyx_t_4 = nullptr;
      __pyx_t_2 = nullptr;
      goto __pyx_L8;
    }
    __pyx_L8:;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":100
 *         if params.error_num == CONVERR:
 *             raise RuntimeError, "Failed to converge after %d iterations." % params.iterations
 *     if fulloutput:             # <<<<<<<<<<<<<<
 *         return (zero, params.funcalls, params.iterations, 0)
 *     else:
 */
  if (__pyx_v_fulloutput) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":101
 *             raise RuntimeError, "Failed to converge after %d iterations." % params.iterations
 *     if fulloutput:
 *         return (zero, params.funcalls, params.iterations, 0)             # <<<<<<<<<<<<<<
 *     else:
 *         return zero
 */
    __pyx_t_2 = __pyx_v_zero;
    __pyx_t_4 = __pyx_v_params.funcalls;
    __pyx_t_3 = __pyx_v_params.iterations;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_4, __pyx_t_3, __pyx_int_0});
    __pyx_t_2 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
    goto __pyx_L9;
  }
  /*else*/ {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":103
 *         return (zero, params.funcalls, params.iterations, 0)
 *     else:
 *         return zero             # <<<<<<<<<<<<<<
 * 
 * def _bisect(object f,
 */
    __pyx_t_5 = __pyx_v_zero;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L9:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":105
 *         return zero
 * 
 * def _bisect(object f,             # <<<<<<<<<<<<<<
 *             double a, double b, double xtol, int iter,
 *             object xargs, int fulloutput, int disp=1):
 */

static System::Object^ _bisect(System::Object^ f, System::Object^ a, System::Object^ b, System::Object^ xtol, System::Object^ iter, System::Object^ xargs, System::Object^ fulloutput, [InteropServices::Optional]System::Object^ disp) {
  System::Object^ __pyx_v_f = nullptr;
  double __pyx_v_a;
  double __pyx_v_b;
  double __pyx_v_xtol;
  int __pyx_v_iter;
  System::Object^ __pyx_v_xargs = nullptr;
  int __pyx_v_fulloutput;
  int __pyx_v_disp;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_f = f;
  __pyx_v_a = __site_cvt_cvt_double_105_0->Target(__site_cvt_cvt_double_105_0, a);
  __pyx_v_b = __site_cvt_cvt_double_105_0_1->Target(__site_cvt_cvt_double_105_0_1, b);
  __pyx_v_xtol = __site_cvt_cvt_double_105_0_2->Target(__site_cvt_cvt_double_105_0_2, xtol);
  __pyx_v_iter = __site_cvt_cvt_int_105_0->Target(__site_cvt_cvt_int_105_0, iter);
  __pyx_v_xargs = xargs;
  __pyx_v_fulloutput = __site_cvt_cvt_int_105_0_1->Target(__site_cvt_cvt_int_105_0_1, fulloutput);
  if (dynamic_cast<System::Reflection::Missing^>(disp) == nullptr) {
    __pyx_v_disp = __site_cvt_cvt_int_105_0_2->Target(__site_cvt_cvt_int_105_0_2, disp);
  } else {
    __pyx_v_disp = ((int)1);
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":108
 *             double a, double b, double xtol, int iter,
 *             object xargs, int fulloutput, int disp=1):
 *     return call_solver(bisect, f, a, b, xtol, iter, xargs, fulloutput, disp)             # <<<<<<<<<<<<<<
 * 
 * def _ridder(object f,
 */
  __pyx_t_1 = call_solver(bisect, __pyx_v_f, __pyx_v_a, __pyx_v_b, __pyx_v_xtol, __pyx_v_iter, __pyx_v_xargs, __pyx_v_fulloutput, __pyx_v_disp); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":110
 *     return call_solver(bisect, f, a, b, xtol, iter, xargs, fulloutput, disp)
 * 
 * def _ridder(object f,             # <<<<<<<<<<<<<<
 *             double a, double b, double xtol, int iter,
 *             object xargs, int fulloutput, int disp=1):
 */

static System::Object^ _ridder(System::Object^ f, System::Object^ a, System::Object^ b, System::Object^ xtol, System::Object^ iter, System::Object^ xargs, System::Object^ fulloutput, [InteropServices::Optional]System::Object^ disp) {
  System::Object^ __pyx_v_f = nullptr;
  double __pyx_v_a;
  double __pyx_v_b;
  double __pyx_v_xtol;
  int __pyx_v_iter;
  System::Object^ __pyx_v_xargs = nullptr;
  int __pyx_v_fulloutput;
  int __pyx_v_disp;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_f = f;
  __pyx_v_a = __site_cvt_cvt_double_110_0->Target(__site_cvt_cvt_double_110_0, a);
  __pyx_v_b = __site_cvt_cvt_double_110_0_1->Target(__site_cvt_cvt_double_110_0_1, b);
  __pyx_v_xtol = __site_cvt_cvt_double_110_0_2->Target(__site_cvt_cvt_double_110_0_2, xtol);
  __pyx_v_iter = __site_cvt_cvt_int_110_0->Target(__site_cvt_cvt_int_110_0, iter);
  __pyx_v_xargs = xargs;
  __pyx_v_fulloutput = __site_cvt_cvt_int_110_0_1->Target(__site_cvt_cvt_int_110_0_1, fulloutput);
  if (dynamic_cast<System::Reflection::Missing^>(disp) == nullptr) {
    __pyx_v_disp = __site_cvt_cvt_int_110_0_2->Target(__site_cvt_cvt_int_110_0_2, disp);
  } else {
    __pyx_v_disp = ((int)1);
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":113
 *             double a, double b, double xtol, int iter,
 *             object xargs, int fulloutput, int disp=1):
 *     return call_solver(ridder, f, a, b, xtol, iter, xargs, fulloutput, disp)             # <<<<<<<<<<<<<<
 * 
 * def _brenth(object f,
 */
  __pyx_t_1 = call_solver(ridder, __pyx_v_f, __pyx_v_a, __pyx_v_b, __pyx_v_xtol, __pyx_v_iter, __pyx_v_xargs, __pyx_v_fulloutput, __pyx_v_disp); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":115
 *     return call_solver(ridder, f, a, b, xtol, iter, xargs, fulloutput, disp)
 * 
 * def _brenth(object f,             # <<<<<<<<<<<<<<
 *             double a, double b, double xtol, int iter,
 *             object xargs, int fulloutput, int disp=1):
 */

static System::Object^ _brenth(System::Object^ f, System::Object^ a, System::Object^ b, System::Object^ xtol, System::Object^ iter, System::Object^ xargs, System::Object^ fulloutput, [InteropServices::Optional]System::Object^ disp) {
  System::Object^ __pyx_v_f = nullptr;
  double __pyx_v_a;
  double __pyx_v_b;
  double __pyx_v_xtol;
  int __pyx_v_iter;
  System::Object^ __pyx_v_xargs = nullptr;
  int __pyx_v_fulloutput;
  int __pyx_v_disp;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_f = f;
  __pyx_v_a = __site_cvt_cvt_double_115_0->Target(__site_cvt_cvt_double_115_0, a);
  __pyx_v_b = __site_cvt_cvt_double_115_0_1->Target(__site_cvt_cvt_double_115_0_1, b);
  __pyx_v_xtol = __site_cvt_cvt_double_115_0_2->Target(__site_cvt_cvt_double_115_0_2, xtol);
  __pyx_v_iter = __site_cvt_cvt_int_115_0->Target(__site_cvt_cvt_int_115_0, iter);
  __pyx_v_xargs = xargs;
  __pyx_v_fulloutput = __site_cvt_cvt_int_115_0_1->Target(__site_cvt_cvt_int_115_0_1, fulloutput);
  if (dynamic_cast<System::Reflection::Missing^>(disp) == nullptr) {
    __pyx_v_disp = __site_cvt_cvt_int_115_0_2->Target(__site_cvt_cvt_int_115_0_2, disp);
  } else {
    __pyx_v_disp = ((int)1);
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":118
 *             double a, double b, double xtol, int iter,
 *             object xargs, int fulloutput, int disp=1):
 *     return call_solver(brenth, f, a, b, xtol, iter, xargs, fulloutput, disp)             # <<<<<<<<<<<<<<
 * 
 * def _brentq(object f,
 */
  __pyx_t_1 = call_solver(brenth, __pyx_v_f, __pyx_v_a, __pyx_v_b, __pyx_v_xtol, __pyx_v_iter, __pyx_v_xargs, __pyx_v_fulloutput, __pyx_v_disp); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":120
 *     return call_solver(brenth, f, a, b, xtol, iter, xargs, fulloutput, disp)
 * 
 * def _brentq(object f,             # <<<<<<<<<<<<<<
 *             double a, double b, double xtol, int iter,
 *             object xargs, int fulloutput, int disp=1):
 */

static System::Object^ _brentq(System::Object^ f, System::Object^ a, System::Object^ b, System::Object^ xtol, System::Object^ iter, System::Object^ xargs, System::Object^ fulloutput, [InteropServices::Optional]System::Object^ disp) {
  System::Object^ __pyx_v_f = nullptr;
  double __pyx_v_a;
  double __pyx_v_b;
  double __pyx_v_xtol;
  int __pyx_v_iter;
  System::Object^ __pyx_v_xargs = nullptr;
  int __pyx_v_fulloutput;
  int __pyx_v_disp;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_f = f;
  __pyx_v_a = __site_cvt_cvt_double_120_0->Target(__site_cvt_cvt_double_120_0, a);
  __pyx_v_b = __site_cvt_cvt_double_120_0_1->Target(__site_cvt_cvt_double_120_0_1, b);
  __pyx_v_xtol = __site_cvt_cvt_double_120_0_2->Target(__site_cvt_cvt_double_120_0_2, xtol);
  __pyx_v_iter = __site_cvt_cvt_int_120_0->Target(__site_cvt_cvt_int_120_0, iter);
  __pyx_v_xargs = xargs;
  __pyx_v_fulloutput = __site_cvt_cvt_int_120_0_1->Target(__site_cvt_cvt_int_120_0_1, fulloutput);
  if (dynamic_cast<System::Reflection::Missing^>(disp) == nullptr) {
    __pyx_v_disp = __site_cvt_cvt_int_120_0_2->Target(__site_cvt_cvt_int_120_0_2, disp);
  } else {
    __pyx_v_disp = ((int)1);
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":123
 *             double a, double b, double xtol, int iter,
 *             object xargs, int fulloutput, int disp=1):
 *     return call_solver(brentq, f, a, b, xtol, iter, xargs, fulloutput, disp)             # <<<<<<<<<<<<<<
 * 
 */
  __pyx_t_1 = call_solver(brentq, __pyx_v_f, __pyx_v_a, __pyx_v_b, __pyx_v_xtol, __pyx_v_iter, __pyx_v_xargs, __pyx_v_fulloutput, __pyx_v_disp); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
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
  __site_call0_32_59 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_cvt_double_32_59 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_ARGS_56_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument(ArgumentType::List)})));
  __site_cvt_cvt_double_57_26 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_get_exn_info_60_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exn_info", false));
  __site_call0_60_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_getindex_89_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_89_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_89_52 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_mod_99_74 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_cvt_cvt_double_105_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_105_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_105_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_105_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_105_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_105_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_110_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_110_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_110_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_110_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_110_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_110_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_115_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_115_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_115_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_115_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_115_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_115_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_120_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_120_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_120_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_120_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_120_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_120_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
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
  __pyx_delegate_val_scipy_zeros_functions_func = gcnew __pyx_delegate_t_5scipy_8optimize_6_zeros_scipy_zeros_functions_func(scipy_zeros_functions_func);
  __pyx_function_pointer_scipy_zeros_functions_func = (__pyx_fp_t_scipy_zeros_functions_func)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_scipy_zeros_functions_func).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  double __pyx_t_3;
  PythonDictionary^ __pyx_t_4;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":1
 * import sys             # <<<<<<<<<<<<<<
 * 
 * from pytools cimport PYOBJPTR, INITOBJECT, INITASSIGNOBJECT, READOBJECT, DEINITOBJECT
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "sys", -1));
  PythonOps::SetGlobal(__pyx_context, "sys", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":32
 *     return 2*tol
 * 
 * cdef double scipy_zeros_rtol = __compute_relative_precision()             # <<<<<<<<<<<<<<
 * 
 * cdef struct scipy_zeros_parameters:
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "__compute_relative_precision");
  __pyx_t_2 = __site_call0_32_59->Target(__site_call0_32_59, __pyx_context, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_cvt_cvt_double_32_59->Target(__site_cvt_cvt_double_32_59, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_8optimize_6_zeros_scipy_zeros_rtol = __pyx_t_3;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_zeros.pyx":1
 * import sys             # <<<<<<<<<<<<<<
 * 
 * from pytools cimport PYOBJPTR, INITOBJECT, INITASSIGNOBJECT, READOBJECT, DEINITOBJECT
 */
  __pyx_t_4 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_4));
  __pyx_t_4 = nullptr;

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


static double __pyx_v_5scipy_8optimize_6_zeros_scipy_zeros_rtol;
/* Cython code section 'utility_code_def' */

/* Runtime support code */
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__optimize___zeros", module__zeros::typeid)];
};
