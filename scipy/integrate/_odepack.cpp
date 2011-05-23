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
  dict["__module__"] = "scipy.integrate._odepack";
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
#define __PYX_HAVE_API__scipy__integrate___odepack
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "__odepack.h"
#include "string.h"
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


#if !defined(CYTHON_CCOMPLEX)
  #if defined(__cplusplus)
    #define CYTHON_CCOMPLEX 1
  #elif defined(_Complex_I)
    #define CYTHON_CCOMPLEX 1
  #else
    #define CYTHON_CCOMPLEX 0
  #endif
#endif

#if CYTHON_CCOMPLEX
  #ifdef __cplusplus
    #include <complex>
  #else
    #include <complex.h>
  #endif
#endif

#if CYTHON_CCOMPLEX && !defined(__cplusplus) && defined(__sun__) && defined(__GNUC__)
  #undef _Complex_I
  #define _Complex_I 1.0fj
#endif
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

#if CYTHON_CCOMPLEX
  #ifdef __cplusplus
    typedef ::std::complex< float > __pyx_t_float_complex;
  #else
    typedef float _Complex __pyx_t_float_complex;
  #endif
#else
    typedef struct { float real, imag; } __pyx_t_float_complex;
#endif

#if CYTHON_CCOMPLEX
  #ifdef __cplusplus
    typedef ::std::complex< double > __pyx_t_double_complex;
  #else
    typedef double _Complex __pyx_t_double_complex;
  #endif
#else
    typedef struct { double real, imag; } __pyx_t_double_complex;
#endif
/* Cython code section 'type_declarations' */

/* Type declarations */

typedef void (*__pyx_t_5numpy_NpyUFuncGenericFunction)(char **, __pyx_t_5numpy_npy_intp *, __pyx_t_5numpy_npy_intp *, void *);

typedef __pyx_t_5numpy_NpyUFuncGenericFunction __pyx_t_5numpy_PyUFuncGenericFunction;

typedef npy_cfloat __pyx_t_5numpy_cfloat_t;

typedef npy_cdouble __pyx_t_5numpy_cdouble_t;

typedef npy_clongdouble __pyx_t_5numpy_clongdouble_t;

typedef npy_cdouble __pyx_t_5numpy_complex_t;
/* Cython code section 'utility_code_proto' */

#if CYTHON_CCOMPLEX
  #ifdef __cplusplus
    #define __Pyx_CREAL(z) ((z).real())
    #define __Pyx_CIMAG(z) ((z).imag())
  #else
    #define __Pyx_CREAL(z) (__real__(z))
    #define __Pyx_CIMAG(z) (__imag__(z))
  #endif
#else
    #define __Pyx_CREAL(z) ((z).real)
    #define __Pyx_CIMAG(z) ((z).imag)
#endif

#if defined(_WIN32) && defined(__cplusplus) && CYTHON_CCOMPLEX
    #define __Pyx_SET_CREAL(z,x) ((z).real(x))
    #define __Pyx_SET_CIMAG(z,y) ((z).imag(y))
#else
    #define __Pyx_SET_CREAL(z,x) __Pyx_CREAL(z) = (x)
    #define __Pyx_SET_CIMAG(z,y) __Pyx_CIMAG(z) = (y)
#endif

static CYTHON_INLINE __pyx_t_float_complex __pyx_t_float_complex_from_parts(float, float);

#if CYTHON_CCOMPLEX
    #define __Pyx_c_eqf(a, b)   ((a)==(b))
    #define __Pyx_c_sumf(a, b)  ((a)+(b))
    #define __Pyx_c_difff(a, b) ((a)-(b))
    #define __Pyx_c_prodf(a, b) ((a)*(b))
    #define __Pyx_c_quotf(a, b) ((a)/(b))
    #define __Pyx_c_negf(a)     (-(a))
  #ifdef __cplusplus
    #define __Pyx_c_is_zerof(z) ((z)==(float)0)
    #define __Pyx_c_conjf(z)    (::std::conj(z))
    /*#define __Pyx_c_absf(z)     (::std::abs(z))*/
  #else
    #define __Pyx_c_is_zerof(z) ((z)==0)
    #define __Pyx_c_conjf(z)    (conjf(z))
    /*#define __Pyx_c_absf(z)     (cabsf(z))*/
 #endif
#else
    static CYTHON_INLINE int __Pyx_c_eqf(__pyx_t_float_complex, __pyx_t_float_complex);
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_sumf(__pyx_t_float_complex, __pyx_t_float_complex);
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_difff(__pyx_t_float_complex, __pyx_t_float_complex);
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_prodf(__pyx_t_float_complex, __pyx_t_float_complex);
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_quotf(__pyx_t_float_complex, __pyx_t_float_complex);
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_negf(__pyx_t_float_complex);
    static CYTHON_INLINE int __Pyx_c_is_zerof(__pyx_t_float_complex);
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_conjf(__pyx_t_float_complex);
    /*static CYTHON_INLINE float __Pyx_c_absf(__pyx_t_float_complex);*/
#endif

static CYTHON_INLINE __pyx_t_double_complex __pyx_t_double_complex_from_parts(double, double);

#if CYTHON_CCOMPLEX
    #define __Pyx_c_eq(a, b)   ((a)==(b))
    #define __Pyx_c_sum(a, b)  ((a)+(b))
    #define __Pyx_c_diff(a, b) ((a)-(b))
    #define __Pyx_c_prod(a, b) ((a)*(b))
    #define __Pyx_c_quot(a, b) ((a)/(b))
    #define __Pyx_c_neg(a)     (-(a))
  #ifdef __cplusplus
    #define __Pyx_c_is_zero(z) ((z)==(double)0)
    #define __Pyx_c_conj(z)    (::std::conj(z))
    /*#define __Pyx_c_abs(z)     (::std::abs(z))*/
  #else
    #define __Pyx_c_is_zero(z) ((z)==0)
    #define __Pyx_c_conj(z)    (conj(z))
    /*#define __Pyx_c_abs(z)     (cabs(z))*/
 #endif
#else
    static CYTHON_INLINE int __Pyx_c_eq(__pyx_t_double_complex, __pyx_t_double_complex);
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_sum(__pyx_t_double_complex, __pyx_t_double_complex);
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_diff(__pyx_t_double_complex, __pyx_t_double_complex);
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_prod(__pyx_t_double_complex, __pyx_t_double_complex);
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_quot(__pyx_t_double_complex, __pyx_t_double_complex);
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_neg(__pyx_t_double_complex);
    static CYTHON_INLINE int __Pyx_c_is_zero(__pyx_t_double_complex);
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_conj(__pyx_t_double_complex);
    /*static CYTHON_INLINE double __Pyx_c_abs(__pyx_t_double_complex);*/
#endif
/* Cython code section 'module_declarations' */
/* Module declarations from numpy */
/* Module declarations from numpy */
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(NpyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_DescrFromType(int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5numpy_npy_intp *, int, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_EMPTY(int, __pyx_t_5numpy_npy_intp *, int, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Empty(int, __pyx_t_5numpy_npy_intp *, NumpyDotNet::dtype^, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_SimpleNewFromData(int, __pyx_t_5numpy_npy_intp *, int, void *); /*proto*/
static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int); /*proto*/
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_npy_intp *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_DIM(NumpyDotNet::ndarray^, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_NDIM(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_npy_intp PyArray_NBYTES(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE NpyArray *PyArray_ARRAY(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Return(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE System::Object^ NpyArray_Return(NpyArray *); /*proto*/
static CYTHON_INLINE int PyDataType_TYPE_NUM(NumpyDotNet::dtype^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_CopyFromObject(System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_ContiguousFromObject(System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_CheckFromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^); /*proto*/
static CYTHON_INLINE void import_array(void); /*proto*/
static CYTHON_INLINE System::Object^ PyNumber_Check(System::Object^); /*proto*/
/* Module declarations from scipy.integrate._odepack */
static System::Object^ INIT_JAC_FUNC(System::Object^, System::Object^, System::Object^, int, System::Object^); /*proto*/
static System::Object^ RESTORE_JAC_FUNC(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_8_odepack_ode_function(int *, double *, double *, double *);
static void ode_function(int *, double *, double *, double *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_9integrate_8_odepack_ode_jacobian_function(int *, double *, double *, int *, int *, double *, int *);
static int ode_jacobian_function(int *, double *, double *, int *, int *, double *, int *); /*proto*/
static void MATRIXC2F(double *, double *, int, int); /*proto*/
static System::Object^ setup_extra_inputs(System::Object^, System::Object^, System::Object^, int, int *); /*proto*/
static System::Object^ call_python_function(System::Object^, __pyx_t_5numpy_npy_intp, double *, System::Object^, int, System::Object^); /*proto*/
static int compute_lrw_liw(int *, int *, int, int, int, int, int, int); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.integrate._odepack"

/* Implementation of scipy.integrate._odepack */
namespace clr__odepack {
  public ref class module__odepack sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_41_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_41_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_42_20;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_44_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_44_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_44_62;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_44_62;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_45_20;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_59_4;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_62_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_62_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_62_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0_4;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0_5;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0_6;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0_7;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_62_0_8;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_120_8;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_133_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_172_28;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_172_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_177_51;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_177_62;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_gt_177_42;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_177_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_242_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_263_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_299_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_299_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_304_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_311_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_311_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_316_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_347_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_351_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_351_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_func_name_353_89;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_353_83;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_353_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_365_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_368_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_370_26;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_260_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_260_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_262_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_262_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_268_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_268_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_270_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_270_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_276_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_276_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_278_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_278_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_291_54;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_291_54;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_295_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_295_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_299_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_299_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_302_47;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_302_47;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_305_14;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_309_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_309_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_312_51;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_312_51;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_316_35;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_316_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Dtype_330_62;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_330_62;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_335_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_FromAny_335_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_335_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_344_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_344_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ior_345_14;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_346_77;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_349_78;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_355_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_CheckFromAny_355_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_355_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_359_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_359_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_367_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_367_45;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ScalarGeneric_367_73;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_367_58;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_0;
static int^ __pyx_int_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":30
 * __multipack_jac_transpose = -1
 * 
 * cdef INIT_JAC_FUNC(fun, Dfun, arg, int col_deriv, errobj):             # <<<<<<<<<<<<<<
 *     global __multipack_python_function
 *     global __multipack_extra_arguments
 */

static  System::Object^ INIT_JAC_FUNC(System::Object^ __pyx_v_fun, System::Object^ __pyx_v_Dfun, System::Object^ __pyx_v_arg, int __pyx_v_col_deriv, System::Object^ __pyx_v_errobj) {
  System::Object^ __pyx_v_globalStore;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  __pyx_v_globalStore = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":36
 *     global __multipack_jac_transpose
 * 
 *     globalStore = (__multipack_python_function, __multipack_extra_arguments,             # <<<<<<<<<<<<<<
 *                                __multipack_python_jacobian, __multipack_jac_transpose)
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "__multipack_python_function");
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "__multipack_extra_arguments");

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":37
 * 
 *     globalStore = (__multipack_python_function, __multipack_extra_arguments,
 *                                __multipack_python_jacobian, __multipack_jac_transpose)             # <<<<<<<<<<<<<<
 * 
 *     if arg is None:
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "__multipack_python_jacobian");
  __pyx_t_4 = __pyx_v_5scipy_9integrate_8_odepack___multipack_jac_transpose;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_3, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  if (__pyx_t_5 != nullptr && dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_globalStore = ((System::Object^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":39
 *                                __multipack_python_jacobian, __multipack_jac_transpose)
 * 
 *     if arg is None:             # <<<<<<<<<<<<<<
 *         arg = ()
 *     elif not isinstance(arg, tuple):
 */
  __pyx_t_6 = (__pyx_v_arg == nullptr);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":40
 * 
 *     if arg is None:
 *         arg = ()             # <<<<<<<<<<<<<<
 *     elif not isinstance(arg, tuple):
 *         raise errobj("Extra arguments must be in a tuple")
 */
    __pyx_v_arg = ((System::Object^)PythonOps::EmptyTuple);
    goto __pyx_L3;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":41
 *     if arg is None:
 *         arg = ()
 *     elif not isinstance(arg, tuple):             # <<<<<<<<<<<<<<
 *         raise errobj("Extra arguments must be in a tuple")
 * 
 */
  __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "tuple");
  __pyx_t_3 = __site_call2_41_23->Target(__site_call2_41_23, __pyx_context, __pyx_t_5, __pyx_v_arg, ((System::Object^)__pyx_t_4));
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_6 = __site_istrue_41_23->Target(__site_istrue_41_23, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_t_7 = (!__pyx_t_6);
  if (__pyx_t_7) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":42
 *         arg = ()
 *     elif not isinstance(arg, tuple):
 *         raise errobj("Extra arguments must be in a tuple")             # <<<<<<<<<<<<<<
 * 
 *     if not callable(fun) or (Dfun is not None and not callable(Dfun)):
 */
    __pyx_t_3 = __site_call1_42_20->Target(__site_call1_42_20, __pyx_context, __pyx_v_errobj, ((System::Object^)"Extra arguments must be in a tuple"));
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":44
 *         raise errobj("Extra arguments must be in a tuple")
 * 
 *     if not callable(fun) or (Dfun is not None and not callable(Dfun)):             # <<<<<<<<<<<<<<
 *         raise errobj("The function and its Jacobian must be callback functions.")
 *     __multipack_python_function = fun
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "callable");
  __pyx_t_4 = __site_call1_44_19->Target(__site_call1_44_19, __pyx_context, __pyx_t_3, __pyx_v_fun);
  __pyx_t_3 = nullptr;
  __pyx_t_7 = __site_istrue_44_19->Target(__site_istrue_44_19, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_6 = (!__pyx_t_7);
  if (!__pyx_t_6) {
    __pyx_t_7 = (__pyx_v_Dfun != nullptr);
    if (__pyx_t_7) {
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "callable");
      __pyx_t_3 = __site_call1_44_62->Target(__site_call1_44_62, __pyx_context, __pyx_t_4, __pyx_v_Dfun);
      __pyx_t_4 = nullptr;
      __pyx_t_8 = __site_istrue_44_62->Target(__site_istrue_44_62, __pyx_t_3);
      __pyx_t_3 = nullptr;
      __pyx_t_9 = (!__pyx_t_8);
      __pyx_t_8 = __pyx_t_9;
    } else {
      __pyx_t_8 = __pyx_t_7;
    }
    __pyx_t_7 = __pyx_t_8;
  } else {
    __pyx_t_7 = __pyx_t_6;
  }
  if (__pyx_t_7) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":45
 * 
 *     if not callable(fun) or (Dfun is not None and not callable(Dfun)):
 *         raise errobj("The function and its Jacobian must be callback functions.")             # <<<<<<<<<<<<<<
 *     __multipack_python_function = fun
 *     __multipack_extra_arguments = arg
 */
    __pyx_t_3 = __site_call1_45_20->Target(__site_call1_45_20, __pyx_context, __pyx_v_errobj, ((System::Object^)"The function and its Jacobian must be callback functions."));
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":46
 *     if not callable(fun) or (Dfun is not None and not callable(Dfun)):
 *         raise errobj("The function and its Jacobian must be callback functions.")
 *     __multipack_python_function = fun             # <<<<<<<<<<<<<<
 *     __multipack_extra_arguments = arg
 *     __multipack_python_jacobian = Dfun
 */
  PythonOps::SetGlobal(__pyx_context, "__multipack_python_function", __pyx_v_fun);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":47
 *         raise errobj("The function and its Jacobian must be callback functions.")
 *     __multipack_python_function = fun
 *     __multipack_extra_arguments = arg             # <<<<<<<<<<<<<<
 *     __multipack_python_jacobian = Dfun
 *     __multipack_jac_transpose = not col_deriv
 */
  PythonOps::SetGlobal(__pyx_context, "__multipack_extra_arguments", __pyx_v_arg);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":48
 *     __multipack_python_function = fun
 *     __multipack_extra_arguments = arg
 *     __multipack_python_jacobian = Dfun             # <<<<<<<<<<<<<<
 *     __multipack_jac_transpose = not col_deriv
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "__multipack_python_jacobian", __pyx_v_Dfun);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":49
 *     __multipack_extra_arguments = arg
 *     __multipack_python_jacobian = Dfun
 *     __multipack_jac_transpose = not col_deriv             # <<<<<<<<<<<<<<
 * 
 *     return globalStore
 */
  __pyx_v_5scipy_9integrate_8_odepack___multipack_jac_transpose = (!__pyx_v_col_deriv);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":51
 *     __multipack_jac_transpose = not col_deriv
 * 
 *     return globalStore             # <<<<<<<<<<<<<<
 * 
 * cdef RESTORE_JAC_FUNC(jacStore):
 */
  __pyx_r = ((System::Object^)__pyx_v_globalStore);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":53
 *     return globalStore
 * 
 * cdef RESTORE_JAC_FUNC(jacStore):             # <<<<<<<<<<<<<<
 *     global __multipack_python_function
 *     global __multipack_extra_arguments
 */

static  System::Object^ RESTORE_JAC_FUNC(System::Object^ __pyx_v_jacStore) {
  System::Object^ __pyx_r = nullptr;
  array<System::Object^>^ __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":59
 *     global __multipack_jac_transpose
 * 
 *     __multipack_python_function, __multipack_extra_arguments, __multipack_python_jacobian, __multipack_jac_transpose = jacStore             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_jacStore, 4)));
  __pyx_t_2 = __pyx_t_1[0];
  __pyx_t_3 = __pyx_t_1[1];
  __pyx_t_4 = __pyx_t_1[2];
  __pyx_t_5 = __pyx_t_1[3];
  __pyx_t_6 = __site_cvt_cvt_int_59_4->Target(__site_cvt_cvt_int_59_4, __pyx_t_5);
  __pyx_t_5 = nullptr;
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "__multipack_python_function", __pyx_t_2);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "__multipack_extra_arguments", __pyx_t_3);
  __pyx_t_3 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "__multipack_python_jacobian", __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_9integrate_8_odepack___multipack_jac_transpose = __pyx_t_6;

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":62
 * 
 * 
 * def odeint(fcn, y0, p_tout, extra_args=None, Dfun=None, int col_deriv=0, int ml=-1, int mu=-1,             # <<<<<<<<<<<<<<
 *             int full_output=0, rtol=None, atol=None, tcrit=None, double h0=0.0,
 *             double hmax=0.0, double hmin=0.0, int ixpr=0, int mxstep=0, int mxhnil=0, int mxordn=12,
 */

static System::Object^ odeint(System::Object^ fcn, System::Object^ y0, System::Object^ p_tout, [InteropServices::Optional]System::Object^ extra_args, [InteropServices::Optional]System::Object^ Dfun, [InteropServices::Optional]System::Object^ col_deriv, [InteropServices::Optional]System::Object^ ml, [InteropServices::Optional]System::Object^ mu, [InteropServices::Optional]System::Object^ full_output, [InteropServices::Optional]System::Object^ rtol, [InteropServices::Optional]System::Object^ atol, [InteropServices::Optional]System::Object^ tcrit, [InteropServices::Optional]System::Object^ h0, [InteropServices::Optional]System::Object^ hmax, [InteropServices::Optional]System::Object^ hmin, [InteropServices::Optional]System::Object^ ixpr, [InteropServices::Optional]System::Object^ mxstep, [InteropServices::Optional]System::Object^ mxhnil, [InteropServices::Optional]System::Object^ mxordn, [InteropServices::Optional]System::Object^ mxords) {
  System::Object^ __pyx_v_fcn = nullptr;
  System::Object^ __pyx_v_y0 = nullptr;
  System::Object^ __pyx_v_p_tout = nullptr;
  System::Object^ __pyx_v_extra_args = nullptr;
  System::Object^ __pyx_v_Dfun = nullptr;
  int __pyx_v_col_deriv;
  int __pyx_v_ml;
  int __pyx_v_mu;
  int __pyx_v_full_output;
  System::Object^ __pyx_v_rtol = nullptr;
  System::Object^ __pyx_v_atol = nullptr;
  System::Object^ __pyx_v_tcrit = nullptr;
  double __pyx_v_h0;
  double __pyx_v_hmax;
  double __pyx_v_hmin;
  int __pyx_v_ixpr;
  int __pyx_v_mxstep;
  int __pyx_v_mxhnil;
  int __pyx_v_mxordn;
  int __pyx_v_mxords;
  System::Object^ __pyx_v_store_multipack_globals;
  int __pyx_v_jt;
  double *__pyx_v_y;
  double *__pyx_v_tout;
  double *__pyx_v_yout;
  double *__pyx_v_yout_ptr;
  double *__pyx_v_tout_ptr;
  double *__pyx_v_rtol_ptr;
  double *__pyx_v_atol_ptr;
  double *__pyx_v_tcrit_ptr;
  double *__pyx_v_rwork;
  int __pyx_v_neq;
  int __pyx_v_ntimes;
  int __pyx_v_lrw;
  int __pyx_v_liw;
  int __pyx_v_itol;
  int __pyx_v_itask;
  int __pyx_v_istate;
  int __pyx_v_iopt;
  int __pyx_v_k;
  int __pyx_v_crit_ind;
  int *__pyx_v_iwork;
  __pyx_t_5numpy_npy_intp __pyx_v_dims[2];
  System::Object^ __pyx_v_ap_tout;
  double __pyx_v_t;
  int __pyx_v_numcrit;
  __pyx_t_5numpy_npy_intp __pyx_v_out_sz;
  System::Object^ __pyx_v_ap_y;
  System::Object^ __pyx_v_ap_yout;
  System::Object^ __pyx_v_ap_rtol;
  System::Object^ __pyx_v_ap_atol;
  System::Object^ __pyx_v_ap_tcrit;
  double *__pyx_v_wa;
  long __pyx_v_allocated;
  System::Object^ __pyx_v_ap_hu;
  System::Object^ __pyx_v_ap_tcur;
  System::Object^ __pyx_v_ap_tolsf;
  System::Object^ __pyx_v_ap_tsw;
  System::Object^ __pyx_v_ap_nst;
  System::Object^ __pyx_v_ap_nfe;
  System::Object^ __pyx_v_ap_nje;
  System::Object^ __pyx_v_ap_nqu;
  System::Object^ __pyx_v_ap_mused;
  long __pyx_v_imxer;
  int __pyx_v_lenrw;
  int __pyx_v_leniw;
  System::Object^ __pyx_v_props;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  int __pyx_t_4;
  int __pyx_t_5;
  array<System::Object^>^ __pyx_t_6;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;
  System::Object^ __pyx_t_9 = nullptr;
  int __pyx_t_10;
  int __pyx_t_11;
  int __pyx_t_12;
  int __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  int __pyx_t_16;
  int __pyx_t_17;
  double __pyx_t_18;
  PythonDictionary^ __pyx_t_19;
  __pyx_v_fcn = fcn;
  __pyx_v_y0 = y0;
  __pyx_v_p_tout = p_tout;
  if (dynamic_cast<System::Reflection::Missing^>(extra_args) == nullptr) {
    __pyx_v_extra_args = extra_args;
  } else {
    __pyx_v_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(Dfun) == nullptr) {
    __pyx_v_Dfun = Dfun;
  } else {
    __pyx_v_Dfun = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(col_deriv) == nullptr) {
    __pyx_v_col_deriv = __site_cvt_cvt_int_62_0->Target(__site_cvt_cvt_int_62_0, col_deriv);
  } else {
    __pyx_v_col_deriv = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ml) == nullptr) {
    __pyx_v_ml = __site_cvt_cvt_int_62_0_1->Target(__site_cvt_cvt_int_62_0_1, ml);
  } else {
    __pyx_v_ml = ((int)-1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(mu) == nullptr) {
    __pyx_v_mu = __site_cvt_cvt_int_62_0_2->Target(__site_cvt_cvt_int_62_0_2, mu);
  } else {
    __pyx_v_mu = ((int)-1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(full_output) == nullptr) {
    __pyx_v_full_output = __site_cvt_cvt_int_62_0_3->Target(__site_cvt_cvt_int_62_0_3, full_output);
  } else {
    __pyx_v_full_output = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(rtol) == nullptr) {
    __pyx_v_rtol = rtol;
  } else {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":63
 * 
 * def odeint(fcn, y0, p_tout, extra_args=None, Dfun=None, int col_deriv=0, int ml=-1, int mu=-1,
 *             int full_output=0, rtol=None, atol=None, tcrit=None, double h0=0.0,             # <<<<<<<<<<<<<<
 *             double hmax=0.0, double hmin=0.0, int ixpr=0, int mxstep=0, int mxhnil=0, int mxordn=12,
 *             int mxords=5):
 */
    __pyx_v_rtol = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(atol) == nullptr) {
    __pyx_v_atol = atol;
  } else {
    __pyx_v_atol = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(tcrit) == nullptr) {
    __pyx_v_tcrit = tcrit;
  } else {
    __pyx_v_tcrit = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(h0) == nullptr) {
    __pyx_v_h0 = __site_cvt_cvt_double_62_0->Target(__site_cvt_cvt_double_62_0, h0);
  } else {
    __pyx_v_h0 = ((double)0.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(hmax) == nullptr) {
    __pyx_v_hmax = __site_cvt_cvt_double_62_0_1->Target(__site_cvt_cvt_double_62_0_1, hmax);
  } else {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":64
 * def odeint(fcn, y0, p_tout, extra_args=None, Dfun=None, int col_deriv=0, int ml=-1, int mu=-1,
 *             int full_output=0, rtol=None, atol=None, tcrit=None, double h0=0.0,
 *             double hmax=0.0, double hmin=0.0, int ixpr=0, int mxstep=0, int mxhnil=0, int mxordn=12,             # <<<<<<<<<<<<<<
 *             int mxords=5):
 *     """[y,{infodict,}istate] = odeint(fun, y0, t, args=(), Dfun=None, col_deriv=0, ml=, mu=,
 */
    __pyx_v_hmax = ((double)0.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(hmin) == nullptr) {
    __pyx_v_hmin = __site_cvt_cvt_double_62_0_2->Target(__site_cvt_cvt_double_62_0_2, hmin);
  } else {
    __pyx_v_hmin = ((double)0.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ixpr) == nullptr) {
    __pyx_v_ixpr = __site_cvt_cvt_int_62_0_4->Target(__site_cvt_cvt_int_62_0_4, ixpr);
  } else {
    __pyx_v_ixpr = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(mxstep) == nullptr) {
    __pyx_v_mxstep = __site_cvt_cvt_int_62_0_5->Target(__site_cvt_cvt_int_62_0_5, mxstep);
  } else {
    __pyx_v_mxstep = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(mxhnil) == nullptr) {
    __pyx_v_mxhnil = __site_cvt_cvt_int_62_0_6->Target(__site_cvt_cvt_int_62_0_6, mxhnil);
  } else {
    __pyx_v_mxhnil = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(mxordn) == nullptr) {
    __pyx_v_mxordn = __site_cvt_cvt_int_62_0_7->Target(__site_cvt_cvt_int_62_0_7, mxordn);
  } else {
    __pyx_v_mxordn = ((int)12);
  }
  if (dynamic_cast<System::Reflection::Missing^>(mxords) == nullptr) {
    __pyx_v_mxords = __site_cvt_cvt_int_62_0_8->Target(__site_cvt_cvt_int_62_0_8, mxords);
  } else {
    __pyx_v_mxords = ((int)5);
  }
  __pyx_v_store_multipack_globals = nullptr;
  __pyx_v_ap_tout = nullptr;
  __pyx_v_ap_y = nullptr;
  __pyx_v_ap_yout = nullptr;
  __pyx_v_ap_rtol = nullptr;
  __pyx_v_ap_atol = nullptr;
  __pyx_v_ap_tcrit = nullptr;
  __pyx_v_ap_hu = nullptr;
  __pyx_v_ap_tcur = nullptr;
  __pyx_v_ap_tolsf = nullptr;
  __pyx_v_ap_tsw = nullptr;
  __pyx_v_ap_nst = nullptr;
  __pyx_v_ap_nfe = nullptr;
  __pyx_v_ap_nje = nullptr;
  __pyx_v_ap_nqu = nullptr;
  __pyx_v_ap_mused = nullptr;
  __pyx_v_props = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":73
 *     cdef object store_multipack_globals     # 4-tuple of objects
 *     cdef int store_multipack_globals3
 *     cdef int jt=4             # <<<<<<<<<<<<<<
 *     cdef double *y, *tout, *yout, *yout_ptr, *tout_ptr
 *     cdef double *rtol_ptr, *atol_ptr, *tcrit_ptr, *rwork
 */
  __pyx_v_jt = 4;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":76
 *     cdef double *y, *tout, *yout, *yout_ptr, *tout_ptr
 *     cdef double *rtol_ptr, *atol_ptr, *tcrit_ptr, *rwork
 *     cdef int neq, ntimes, lrw, liw, itol, itask=1, istate=1, iopt=0, k             # <<<<<<<<<<<<<<
 *     cdef int crit_ind=0
 *     cdef int *iwork
 */
  __pyx_v_itask = 1;
  __pyx_v_istate = 1;
  __pyx_v_iopt = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":77
 *     cdef double *rtol_ptr, *atol_ptr, *tcrit_ptr, *rwork
 *     cdef int neq, ntimes, lrw, liw, itol, itask=1, istate=1, iopt=0, k
 *     cdef int crit_ind=0             # <<<<<<<<<<<<<<
 *     cdef int *iwork
 *     cdef np.npy_intp dims[2]
 */
  __pyx_v_crit_ind = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":84
 *     cdef double *dCythonHack
 *     cdef int *iCythonHack
 *     cdef int numcrit=0             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp out_sz
 * 
 */
  __pyx_v_numcrit = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":87
 *     cdef np.npy_intp out_sz
 * 
 *     store_multipack_globals = INIT_JAC_FUNC(fcn,Dfun,extra_args,col_deriv, OdepackError)             # <<<<<<<<<<<<<<
 *     try:
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
  __pyx_t_2 = INIT_JAC_FUNC(__pyx_v_fcn, __pyx_v_Dfun, __pyx_v_extra_args, __pyx_v_col_deriv, __pyx_t_1); 
  __pyx_t_1 = nullptr;
  __pyx_v_store_multipack_globals = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":88
 * 
 *     store_multipack_globals = INIT_JAC_FUNC(fcn,Dfun,extra_args,col_deriv, OdepackError)
 *     try:             # <<<<<<<<<<<<<<
 * 
 *         # Set up jt, ml, and mu
 */
  try {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":91
 * 
 *         # Set up jt, ml, and mu
 *         if Dfun is None:             # <<<<<<<<<<<<<<
 *             jt += 1    # set jt for internally generated
 *         if ml < 0 and mu < 0:
 */
    __pyx_t_3 = (__pyx_v_Dfun == nullptr);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":92
 *         # Set up jt, ml, and mu
 *         if Dfun is None:
 *             jt += 1    # set jt for internally generated             # <<<<<<<<<<<<<<
 *         if ml < 0 and mu < 0:
 *             jt -= 3     # Neither ml nor mu given, market jt for full jacobian
 */
      __pyx_v_jt += 1;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":93
 *         if Dfun is None:
 *             jt += 1    # set jt for internally generated
 *         if ml < 0 and mu < 0:             # <<<<<<<<<<<<<<
 *             jt -= 3     # Neither ml nor mu given, market jt for full jacobian
 *         if ml < 0:
 */
    __pyx_t_3 = (__pyx_v_ml < 0);
    if (__pyx_t_3) {
      __pyx_t_4 = (__pyx_v_mu < 0);
      __pyx_t_5 = __pyx_t_4;
    } else {
      __pyx_t_5 = __pyx_t_3;
    }
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":94
 *             jt += 1    # set jt for internally generated
 *         if ml < 0 and mu < 0:
 *             jt -= 3     # Neither ml nor mu given, market jt for full jacobian             # <<<<<<<<<<<<<<
 *         if ml < 0:
 *             ml = 0      # if one but not both are given
 */
      __pyx_v_jt -= 3;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":95
 *         if ml < 0 and mu < 0:
 *             jt -= 3     # Neither ml nor mu given, market jt for full jacobian
 *         if ml < 0:             # <<<<<<<<<<<<<<
 *             ml = 0      # if one but not both are given
 *         if mu < 0:
 */
    __pyx_t_5 = (__pyx_v_ml < 0);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":96
 *             jt -= 3     # Neither ml nor mu given, market jt for full jacobian
 *         if ml < 0:
 *             ml = 0      # if one but not both are given             # <<<<<<<<<<<<<<
 *         if mu < 0:
 *             mu = 0
 */
      __pyx_v_ml = 0;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":97
 *         if ml < 0:
 *             ml = 0      # if one but not both are given
 *         if mu < 0:             # <<<<<<<<<<<<<<
 *             mu = 0
 * 
 */
    __pyx_t_5 = (__pyx_v_mu < 0);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":98
 *             ml = 0      # if one but not both are given
 *         if mu < 0:
 *             mu = 0             # <<<<<<<<<<<<<<
 * 
 *         # Initial input vector
 */
      __pyx_v_mu = 0;
      goto __pyx_L8;
    }
    __pyx_L8:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":101
 * 
 *         # Initial input vector
 *         ap_y = np.PyArray_ContiguousFromObject(y0, np.NPY_DOUBLE, 0, 1)             # <<<<<<<<<<<<<<
 *         y = <double *>np.PyArray_DATA(ap_y)
 *         neq = np.PyArray_SIZE(ap_y)
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
    __pyx_t_1 = PyArray_ContiguousFromObject(__pyx_v_y0, __pyx_t_2, __pyx_int_0, __pyx_int_1); 
    __pyx_t_2 = nullptr;
    __pyx_v_ap_y = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":102
 *         # Initial input vector
 *         ap_y = np.PyArray_ContiguousFromObject(y0, np.NPY_DOUBLE, 0, 1)
 *         y = <double *>np.PyArray_DATA(ap_y)             # <<<<<<<<<<<<<<
 *         neq = np.PyArray_SIZE(ap_y)
 *         dims[1] = neq
 */
    if (__pyx_v_ap_y != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_y) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y = ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_y)));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":103
 *         ap_y = np.PyArray_ContiguousFromObject(y0, np.NPY_DOUBLE, 0, 1)
 *         y = <double *>np.PyArray_DATA(ap_y)
 *         neq = np.PyArray_SIZE(ap_y)             # <<<<<<<<<<<<<<
 *         dims[1] = neq
 * 
 */
    if (__pyx_v_ap_y != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_y) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_neq = PyArray_SIZE(((NumpyDotNet::ndarray^)__pyx_v_ap_y));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":104
 *         y = <double *>np.PyArray_DATA(ap_y)
 *         neq = np.PyArray_SIZE(ap_y)
 *         dims[1] = neq             # <<<<<<<<<<<<<<
 * 
 *         # Set of output times for integration
 */
    (__pyx_v_dims[1]) = __pyx_v_neq;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":107
 * 
 *         # Set of output times for integration
 *         ap_tout = np.PyArray_ContiguousFromObject(p_tout, np.NPY_DOUBLE, 0, 1)             # <<<<<<<<<<<<<<
 *         tout = <double *>np.PyArray_DATA(ap_tout)
 *         ntimes = np.PyArray_SIZE(ap_tout)
 */
    __pyx_t_1 = (System::Object^)(long long)(NPY_DOUBLE);
    __pyx_t_2 = PyArray_ContiguousFromObject(__pyx_v_p_tout, __pyx_t_1, __pyx_int_0, __pyx_int_1); 
    __pyx_t_1 = nullptr;
    __pyx_v_ap_tout = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":108
 *         # Set of output times for integration
 *         ap_tout = np.PyArray_ContiguousFromObject(p_tout, np.NPY_DOUBLE, 0, 1)
 *         tout = <double *>np.PyArray_DATA(ap_tout)             # <<<<<<<<<<<<<<
 *         ntimes = np.PyArray_SIZE(ap_tout)
 *         dims[0] = ntimes
 */
    if (__pyx_v_ap_tout != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tout) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_tout = ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_tout)));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":109
 *         ap_tout = np.PyArray_ContiguousFromObject(p_tout, np.NPY_DOUBLE, 0, 1)
 *         tout = <double *>np.PyArray_DATA(ap_tout)
 *         ntimes = np.PyArray_SIZE(ap_tout)             # <<<<<<<<<<<<<<
 *         dims[0] = ntimes
 *         t = tout[0]
 */
    if (__pyx_v_ap_tout != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tout) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ntimes = PyArray_SIZE(((NumpyDotNet::ndarray^)__pyx_v_ap_tout));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":110
 *         tout = <double *>np.PyArray_DATA(ap_tout)
 *         ntimes = np.PyArray_SIZE(ap_tout)
 *         dims[0] = ntimes             # <<<<<<<<<<<<<<
 *         t = tout[0]
 * 
 */
    (__pyx_v_dims[0]) = __pyx_v_ntimes;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":111
 *         ntimes = np.PyArray_SIZE(ap_tout)
 *         dims[0] = ntimes
 *         t = tout[0]             # <<<<<<<<<<<<<<
 * 
 *         # Setup array to hold the output evaluations
 */
    __pyx_v_t = (__pyx_v_tout[0]);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":114
 * 
 *         # Setup array to hold the output evaluations
 *         ap_yout = np.PyArray_EMPTY(2, dims, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         yout = <double *>np.PyArray_DATA(ap_yout)
 *         # Copy initial vector into first row of output
 */
    __pyx_t_2 = PyArray_EMPTY(2, __pyx_v_dims, NPY_DOUBLE, 0); 
    __pyx_v_ap_yout = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":115
 *         # Setup array to hold the output evaluations
 *         ap_yout = np.PyArray_EMPTY(2, dims, np.NPY_DOUBLE, False)
 *         yout = <double *>np.PyArray_DATA(ap_yout)             # <<<<<<<<<<<<<<
 *         # Copy initial vector into first row of output
 *         memcpy(yout, y, neq*sizeof(double))     # copy intial value to output
 */
    if (__pyx_v_ap_yout != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_yout) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_yout = ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_yout)));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":117
 *         yout = <double *>np.PyArray_DATA(ap_yout)
 *         # Copy initial vector into first row of output
 *         memcpy(yout, y, neq*sizeof(double))     # copy intial value to output             # <<<<<<<<<<<<<<
 *         yout_ptr = yout + neq;                  # set output pointer to next position
 * 
 */
    memcpy(__pyx_v_yout, __pyx_v_y, (__pyx_v_neq * (sizeof(double))));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":118
 *         # Copy initial vector into first row of output
 *         memcpy(yout, y, neq*sizeof(double))     # copy intial value to output
 *         yout_ptr = yout + neq;                  # set output pointer to next position             # <<<<<<<<<<<<<<
 * 
 *         itol, ap_rtol, ap_atol, ap_tcrit = setup_extra_inputs(rtol, atol, tcrit, neq, &numcrit)
 */
    __pyx_v_yout_ptr = (__pyx_v_yout + __pyx_v_neq);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":120
 *         yout_ptr = yout + neq;                  # set output pointer to next position
 * 
 *         itol, ap_rtol, ap_atol, ap_tcrit = setup_extra_inputs(rtol, atol, tcrit, neq, &numcrit)             # <<<<<<<<<<<<<<
 *         if itol < 0:
 *             return None # Fail
 */
    __pyx_t_2 = setup_extra_inputs(__pyx_v_rtol, __pyx_v_atol, __pyx_v_tcrit, __pyx_v_neq, (&__pyx_v_numcrit)); 
    __pyx_t_6 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_2, 4)));
    __pyx_t_1 = __pyx_t_6[0];
    __pyx_t_10 = __site_cvt_cvt_int_120_8->Target(__site_cvt_cvt_int_120_8, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_7 = __pyx_t_6[1];
    __pyx_t_8 = __pyx_t_6[2];
    __pyx_t_9 = __pyx_t_6[3];
    __pyx_t_2 = nullptr;
    __pyx_t_6 = nullptr;
    __pyx_v_itol = __pyx_t_10;
    __pyx_v_ap_rtol = __pyx_t_7;
    __pyx_t_7 = nullptr;
    __pyx_v_ap_atol = __pyx_t_8;
    __pyx_t_8 = nullptr;
    __pyx_v_ap_tcrit = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":121
 * 
 *         itol, ap_rtol, ap_atol, ap_tcrit = setup_extra_inputs(rtol, atol, tcrit, neq, &numcrit)
 *         if itol < 0:             # <<<<<<<<<<<<<<
 *             return None # Fail
 * 
 */
    __pyx_t_5 = (__pyx_v_itol < 0);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":122
 *         itol, ap_rtol, ap_atol, ap_tcrit = setup_extra_inputs(rtol, atol, tcrit, neq, &numcrit)
 *         if itol < 0:
 *             return None # Fail             # <<<<<<<<<<<<<<
 * 
 *         rtol_ptr = <double *>np.PyArray_DATA(ap_rtol)
 */
      __pyx_r = nullptr;
      goto __pyx_L0;
      goto __pyx_L9;
    }
    __pyx_L9:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":124
 *             return None # Fail
 * 
 *         rtol_ptr = <double *>np.PyArray_DATA(ap_rtol)             # <<<<<<<<<<<<<<
 *         atol_ptr = <double *>np.PyArray_DATA(ap_atol)
 *         if tcrit is not None:
 */
    if (__pyx_v_ap_rtol != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_rtol) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_rtol_ptr = ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_rtol)));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":125
 * 
 *         rtol_ptr = <double *>np.PyArray_DATA(ap_rtol)
 *         atol_ptr = <double *>np.PyArray_DATA(ap_atol)             # <<<<<<<<<<<<<<
 *         if tcrit is not None:
 *             tcrit_ptr = <double *>np.PyArray_DATA(ap_tcrit)
 */
    if (__pyx_v_ap_atol != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_atol) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_atol_ptr = ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_atol)));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":126
 *         rtol_ptr = <double *>np.PyArray_DATA(ap_rtol)
 *         atol_ptr = <double *>np.PyArray_DATA(ap_atol)
 *         if tcrit is not None:             # <<<<<<<<<<<<<<
 *             tcrit_ptr = <double *>np.PyArray_DATA(ap_tcrit)
 * 
 */
    __pyx_t_5 = (__pyx_v_tcrit != nullptr);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":127
 *         atol_ptr = <double *>np.PyArray_DATA(ap_atol)
 *         if tcrit is not None:
 *             tcrit_ptr = <double *>np.PyArray_DATA(ap_tcrit)             # <<<<<<<<<<<<<<
 * 
 *         # Find size of working arrays
 */
      if (__pyx_v_ap_tcrit != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tcrit) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_tcrit_ptr = ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_tcrit)));
      goto __pyx_L10;
    }
    __pyx_L10:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":130
 * 
 *         # Find size of working arrays
 *         compute_lrw_liw(&lrw, &liw, neq, jt, ml, mu, mxordn, mxords)             # <<<<<<<<<<<<<<
 *         wa = <double *>malloc(lrw*sizeof(double) + liw*sizeof(int))
 *         if wa == NULL:
 */
    compute_lrw_liw((&__pyx_v_lrw), (&__pyx_v_liw), __pyx_v_neq, __pyx_v_jt, __pyx_v_ml, __pyx_v_mu, __pyx_v_mxordn, __pyx_v_mxords);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":131
 *         # Find size of working arrays
 *         compute_lrw_liw(&lrw, &liw, neq, jt, ml, mu, mxordn, mxords)
 *         wa = <double *>malloc(lrw*sizeof(double) + liw*sizeof(int))             # <<<<<<<<<<<<<<
 *         if wa == NULL:
 *             raise Exception("Insufficent memory")
 */
    __pyx_v_wa = ((double *)malloc(((__pyx_v_lrw * (sizeof(double))) + (__pyx_v_liw * (sizeof(int))))));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":132
 *         compute_lrw_liw(&lrw, &liw, neq, jt, ml, mu, mxordn, mxords)
 *         wa = <double *>malloc(lrw*sizeof(double) + liw*sizeof(int))
 *         if wa == NULL:             # <<<<<<<<<<<<<<
 *             raise Exception("Insufficent memory")
 *         allocated = 1;
 */
    __pyx_t_5 = (__pyx_v_wa == NULL);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":133
 *         wa = <double *>malloc(lrw*sizeof(double) + liw*sizeof(int))
 *         if wa == NULL:
 *             raise Exception("Insufficent memory")             # <<<<<<<<<<<<<<
 *         allocated = 1;
 *         rwork = wa;
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
      __pyx_t_9 = __site_call1_133_27->Target(__site_call1_133_27, __pyx_context, __pyx_t_2, ((System::Object^)"Insufficent memory"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L11;
    }
    __pyx_L11:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":134
 *         if wa == NULL:
 *             raise Exception("Insufficent memory")
 *         allocated = 1;             # <<<<<<<<<<<<<<
 *         rwork = wa;
 *         iwork = <int *>(wa + lrw)
 */
    __pyx_v_allocated = 1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":135
 *             raise Exception("Insufficent memory")
 *         allocated = 1;
 *         rwork = wa;             # <<<<<<<<<<<<<<
 *         iwork = <int *>(wa + lrw)
 * 
 */
    __pyx_v_rwork = __pyx_v_wa;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":136
 *         allocated = 1;
 *         rwork = wa;
 *         iwork = <int *>(wa + lrw)             # <<<<<<<<<<<<<<
 * 
 *         iwork[0] = ml
 */
    __pyx_v_iwork = ((int *)(__pyx_v_wa + __pyx_v_lrw));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":138
 *         iwork = <int *>(wa + lrw)
 * 
 *         iwork[0] = ml             # <<<<<<<<<<<<<<
 *         iwork[1] = mu      # ignored if not needed
 * 
 */
    (__pyx_v_iwork[0]) = __pyx_v_ml;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":139
 * 
 *         iwork[0] = ml
 *         iwork[1] = mu      # ignored if not needed             # <<<<<<<<<<<<<<
 * 
 *         if h0 != 0.0 or hmax != 0.0 or hmin != 0.0 or ixpr != 0 or mxstep != 0 or mxhnil != 0 or mxordn != 0 or mxords != 0:
 */
    (__pyx_v_iwork[1]) = __pyx_v_mu;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":141
 *         iwork[1] = mu      # ignored if not needed
 * 
 *         if h0 != 0.0 or hmax != 0.0 or hmin != 0.0 or ixpr != 0 or mxstep != 0 or mxhnil != 0 or mxordn != 0 or mxords != 0:             # <<<<<<<<<<<<<<
 *             rwork[4] = h0
 *             rwork[5] = hmax
 */
    __pyx_t_5 = (__pyx_v_h0 != 0.0);
    if (!__pyx_t_5) {
      __pyx_t_3 = (__pyx_v_hmax != 0.0);
      if (!__pyx_t_3) {
        __pyx_t_4 = (__pyx_v_hmin != 0.0);
        if (!__pyx_t_4) {
          __pyx_t_11 = (__pyx_v_ixpr != 0);
          if (!__pyx_t_11) {
            __pyx_t_12 = (__pyx_v_mxstep != 0);
            if (!__pyx_t_12) {
              __pyx_t_13 = (__pyx_v_mxhnil != 0);
              if (!__pyx_t_13) {
                __pyx_t_14 = (__pyx_v_mxordn != 0);
                if (!__pyx_t_14) {
                  __pyx_t_15 = (__pyx_v_mxords != 0);
                  __pyx_t_16 = __pyx_t_15;
                } else {
                  __pyx_t_16 = __pyx_t_14;
                }
                __pyx_t_14 = __pyx_t_16;
              } else {
                __pyx_t_14 = __pyx_t_13;
              }
              __pyx_t_13 = __pyx_t_14;
            } else {
              __pyx_t_13 = __pyx_t_12;
            }
            __pyx_t_12 = __pyx_t_13;
          } else {
            __pyx_t_12 = __pyx_t_11;
          }
          __pyx_t_11 = __pyx_t_12;
        } else {
          __pyx_t_11 = __pyx_t_4;
        }
        __pyx_t_4 = __pyx_t_11;
      } else {
        __pyx_t_4 = __pyx_t_3;
      }
      __pyx_t_3 = __pyx_t_4;
    } else {
      __pyx_t_3 = __pyx_t_5;
    }
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":142
 * 
 *         if h0 != 0.0 or hmax != 0.0 or hmin != 0.0 or ixpr != 0 or mxstep != 0 or mxhnil != 0 or mxordn != 0 or mxords != 0:
 *             rwork[4] = h0             # <<<<<<<<<<<<<<
 *             rwork[5] = hmax
 *             rwork[6] = hmin
 */
      (__pyx_v_rwork[4]) = __pyx_v_h0;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":143
 *         if h0 != 0.0 or hmax != 0.0 or hmin != 0.0 or ixpr != 0 or mxstep != 0 or mxhnil != 0 or mxordn != 0 or mxords != 0:
 *             rwork[4] = h0
 *             rwork[5] = hmax             # <<<<<<<<<<<<<<
 *             rwork[6] = hmin
 *             iwork[4] = ixpr
 */
      (__pyx_v_rwork[5]) = __pyx_v_hmax;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":144
 *             rwork[4] = h0
 *             rwork[5] = hmax
 *             rwork[6] = hmin             # <<<<<<<<<<<<<<
 *             iwork[4] = ixpr
 *             iwork[5] = mxstep
 */
      (__pyx_v_rwork[6]) = __pyx_v_hmin;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":145
 *             rwork[5] = hmax
 *             rwork[6] = hmin
 *             iwork[4] = ixpr             # <<<<<<<<<<<<<<
 *             iwork[5] = mxstep
 *             iwork[6] = mxhnil
 */
      (__pyx_v_iwork[4]) = __pyx_v_ixpr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":146
 *             rwork[6] = hmin
 *             iwork[4] = ixpr
 *             iwork[5] = mxstep             # <<<<<<<<<<<<<<
 *             iwork[6] = mxhnil
 *             iwork[7] = mxordn
 */
      (__pyx_v_iwork[5]) = __pyx_v_mxstep;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":147
 *             iwork[4] = ixpr
 *             iwork[5] = mxstep
 *             iwork[6] = mxhnil             # <<<<<<<<<<<<<<
 *             iwork[7] = mxordn
 *             iwork[8] = mxords
 */
      (__pyx_v_iwork[6]) = __pyx_v_mxhnil;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":148
 *             iwork[5] = mxstep
 *             iwork[6] = mxhnil
 *             iwork[7] = mxordn             # <<<<<<<<<<<<<<
 *             iwork[8] = mxords
 *             iopt = 1
 */
      (__pyx_v_iwork[7]) = __pyx_v_mxordn;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":149
 *             iwork[6] = mxhnil
 *             iwork[7] = mxordn
 *             iwork[8] = mxords             # <<<<<<<<<<<<<<
 *             iopt = 1
 * 
 */
      (__pyx_v_iwork[8]) = __pyx_v_mxords;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":150
 *             iwork[7] = mxordn
 *             iwork[8] = mxords
 *             iopt = 1             # <<<<<<<<<<<<<<
 * 
 *         istate = 1
 */
      __pyx_v_iopt = 1;
      goto __pyx_L12;
    }
    __pyx_L12:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":152
 *             iopt = 1
 * 
 *         istate = 1             # <<<<<<<<<<<<<<
 *         k = 1
 * 
 */
    __pyx_v_istate = 1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":153
 * 
 *         istate = 1
 *         k = 1             # <<<<<<<<<<<<<<
 * 
 *         # If full output make some useful output arrays
 */
    __pyx_v_k = 1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":156
 * 
 *         # If full output make some useful output arrays
 *         if full_output:             # <<<<<<<<<<<<<<
 *             out_sz = ntimes-1
 *             ap_hu = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 */
    if (__pyx_v_full_output) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":157
 *         # If full output make some useful output arrays
 *         if full_output:
 *             out_sz = ntimes-1             # <<<<<<<<<<<<<<
 *             ap_hu = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tcur = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 */
      __pyx_v_out_sz = (__pyx_v_ntimes - 1);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":158
 *         if full_output:
 *             out_sz = ntimes-1
 *             ap_hu = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             ap_tcur = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tolsf = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_DOUBLE, 0); 
      __pyx_v_ap_hu = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":159
 *             out_sz = ntimes-1
 *             ap_hu = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tcur = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             ap_tolsf = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tsw = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_DOUBLE, 0); 
      __pyx_v_ap_tcur = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":160
 *             ap_hu = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tcur = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tolsf = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             ap_tsw = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_nst = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_DOUBLE, 0); 
      __pyx_v_ap_tolsf = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":161
 *             ap_tcur = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tolsf = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tsw = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             ap_nst = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nfe = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_DOUBLE, 0); 
      __pyx_v_ap_tsw = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":162
 *             ap_tolsf = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_tsw = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_nst = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *             ap_nfe = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nje = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_INT, 0); 
      __pyx_v_ap_nst = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":163
 *             ap_tsw = np.PyArray_EMPTY(1,&out_sz,np.NPY_DOUBLE, False)
 *             ap_nst = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nfe = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *             ap_nje = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nqu = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_INT, 0); 
      __pyx_v_ap_nfe = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":164
 *             ap_nst = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nfe = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nje = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *             ap_nqu = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_mused = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_INT, 0); 
      __pyx_v_ap_nje = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":165
 *             ap_nfe = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nje = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nqu = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *             ap_mused = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             if ap_hu is None or ap_tcur is None or ap_tolsf is None or ap_tsw is None or ap_nst is None or ap_nfe is None or ap_nje is None or ap_nqu is None or ap_mused is None:
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_INT, 0); 
      __pyx_v_ap_nqu = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":166
 *             ap_nje = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_nqu = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_mused = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *             if ap_hu is None or ap_tcur is None or ap_tolsf is None or ap_tsw is None or ap_nst is None or ap_nfe is None or ap_nje is None or ap_nqu is None or ap_mused is None:
 *                 return NULL
 */
      __pyx_t_9 = PyArray_EMPTY(1, (&__pyx_v_out_sz), NPY_INT, 0); 
      __pyx_v_ap_mused = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":167
 *             ap_nqu = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             ap_mused = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             if ap_hu is None or ap_tcur is None or ap_tolsf is None or ap_tsw is None or ap_nst is None or ap_nfe is None or ap_nje is None or ap_nqu is None or ap_mused is None:             # <<<<<<<<<<<<<<
 *                 return NULL
 * 
 */
      __pyx_t_3 = (__pyx_v_ap_hu == nullptr);
      if (!__pyx_t_3) {
        __pyx_t_5 = (__pyx_v_ap_tcur == nullptr);
        if (!__pyx_t_5) {
          __pyx_t_4 = (__pyx_v_ap_tolsf == nullptr);
          if (!__pyx_t_4) {
            __pyx_t_11 = (__pyx_v_ap_tsw == nullptr);
            if (!__pyx_t_11) {
              __pyx_t_12 = (__pyx_v_ap_nst == nullptr);
              if (!__pyx_t_12) {
                __pyx_t_13 = (__pyx_v_ap_nfe == nullptr);
                if (!__pyx_t_13) {
                  __pyx_t_14 = (__pyx_v_ap_nje == nullptr);
                  if (!__pyx_t_14) {
                    __pyx_t_16 = (__pyx_v_ap_nqu == nullptr);
                    if (!__pyx_t_16) {
                      __pyx_t_15 = (__pyx_v_ap_mused == nullptr);
                      __pyx_t_17 = __pyx_t_15;
                    } else {
                      __pyx_t_17 = __pyx_t_16;
                    }
                    __pyx_t_16 = __pyx_t_17;
                  } else {
                    __pyx_t_16 = __pyx_t_14;
                  }
                  __pyx_t_14 = __pyx_t_16;
                } else {
                  __pyx_t_14 = __pyx_t_13;
                }
                __pyx_t_13 = __pyx_t_14;
              } else {
                __pyx_t_13 = __pyx_t_12;
              }
              __pyx_t_12 = __pyx_t_13;
            } else {
              __pyx_t_12 = __pyx_t_11;
            }
            __pyx_t_11 = __pyx_t_12;
          } else {
            __pyx_t_11 = __pyx_t_4;
          }
          __pyx_t_4 = __pyx_t_11;
        } else {
          __pyx_t_4 = __pyx_t_5;
        }
        __pyx_t_5 = __pyx_t_4;
      } else {
        __pyx_t_5 = __pyx_t_3;
      }
      if (__pyx_t_5) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":168
 *             ap_mused = np.PyArray_EMPTY(1,&out_sz,np.NPY_INT, False)
 *             if ap_hu is None or ap_tcur is None or ap_tolsf is None or ap_tsw is None or ap_nst is None or ap_nfe is None or ap_nje is None or ap_nqu is None or ap_mused is None:
 *                 return NULL             # <<<<<<<<<<<<<<
 * 
 *         if tcrit_ptr != NULL:
 */
        __pyx_t_9 = NULL;
        __pyx_r = __pyx_t_9;
        __pyx_t_9 = nullptr;
        goto __pyx_L0;
        goto __pyx_L14;
      }
      __pyx_L14:;
      goto __pyx_L13;
    }
    __pyx_L13:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":170
 *                 return NULL
 * 
 *         if tcrit_ptr != NULL:             # <<<<<<<<<<<<<<
 *             itask = 4
 *             rwork[0] = tcrit[0]  # There are critical points
 */
    __pyx_t_5 = (__pyx_v_tcrit_ptr != NULL);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":171
 * 
 *         if tcrit_ptr != NULL:
 *             itask = 4             # <<<<<<<<<<<<<<
 *             rwork[0] = tcrit[0]  # There are critical points
 * 
 */
      __pyx_v_itask = 4;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":172
 *         if tcrit_ptr != NULL:
 *             itask = 4
 *             rwork[0] = tcrit[0]  # There are critical points             # <<<<<<<<<<<<<<
 * 
 *         while (k < ntimes and istate > 0):  # loop over desired times
 */
      __pyx_t_9 = __site_getindex_172_28->Target(__site_getindex_172_28, __pyx_v_tcrit, ((System::Object^)0));
      __pyx_t_18 = __site_cvt_cvt_double_172_28->Target(__site_cvt_cvt_double_172_28, __pyx_t_9);
      __pyx_t_9 = nullptr;
      (__pyx_v_rwork[0]) = __pyx_t_18;
      goto __pyx_L15;
    }
    __pyx_L15:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":174
 *             rwork[0] = tcrit[0]  # There are critical points
 * 
 *         while (k < ntimes and istate > 0):  # loop over desired times             # <<<<<<<<<<<<<<
 *             tout_ptr = tout + k
 *             # Use tcrit if relevant
 */
    while (1) {
      __pyx_t_5 = (__pyx_v_k < __pyx_v_ntimes);
      if (__pyx_t_5) {
        __pyx_t_3 = (__pyx_v_istate > 0);
        __pyx_t_4 = __pyx_t_3;
      } else {
        __pyx_t_4 = __pyx_t_5;
      }
      if (!__pyx_t_4) break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":175
 * 
 *         while (k < ntimes and istate > 0):  # loop over desired times
 *             tout_ptr = tout + k             # <<<<<<<<<<<<<<
 *             # Use tcrit if relevant
 *             if itask == 4 and tout_ptr[0] > (tcrit + crit_ind)[0]:
 */
      __pyx_v_tout_ptr = (__pyx_v_tout + __pyx_v_k);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":177
 *             tout_ptr = tout + k
 *             # Use tcrit if relevant
 *             if itask == 4 and tout_ptr[0] > (tcrit + crit_ind)[0]:             # <<<<<<<<<<<<<<
 *                 crit_ind += 1
 *                 rwork[0] = (tcrit_ptr + crit_ind)[0]
 */
      __pyx_t_4 = (__pyx_v_itask == 4);
      if (__pyx_t_4) {
        __pyx_t_9 = (__pyx_v_tout_ptr[0]);
        __pyx_t_2 = __pyx_v_crit_ind;
        __pyx_t_8 = __site_op_add_177_51->Target(__site_op_add_177_51, __pyx_v_tcrit, __pyx_t_2);
        __pyx_t_2 = nullptr;
        __pyx_t_2 = __site_getindex_177_62->Target(__site_getindex_177_62, __pyx_t_8, ((System::Object^)0));
        __pyx_t_8 = nullptr;
        __pyx_t_8 = __site_op_gt_177_42->Target(__site_op_gt_177_42, __pyx_t_9, __pyx_t_2);
        __pyx_t_9 = nullptr;
        __pyx_t_2 = nullptr;
        __pyx_t_5 = __site_istrue_177_42->Target(__site_istrue_177_42, __pyx_t_8);
        __pyx_t_8 = nullptr;
        __pyx_t_3 = __pyx_t_5;
      } else {
        __pyx_t_3 = __pyx_t_4;
      }
      if (__pyx_t_3) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":178
 *             # Use tcrit if relevant
 *             if itask == 4 and tout_ptr[0] > (tcrit + crit_ind)[0]:
 *                 crit_ind += 1             # <<<<<<<<<<<<<<
 *                 rwork[0] = (tcrit_ptr + crit_ind)[0]
 *             if crit_ind >= numcrit:
 */
        __pyx_v_crit_ind += 1;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":179
 *             if itask == 4 and tout_ptr[0] > (tcrit + crit_ind)[0]:
 *                 crit_ind += 1
 *                 rwork[0] = (tcrit_ptr + crit_ind)[0]             # <<<<<<<<<<<<<<
 *             if crit_ind >= numcrit:
 *                 itask = 1  # No more critical values
 */
        (__pyx_v_rwork[0]) = ((__pyx_v_tcrit_ptr + __pyx_v_crit_ind)[0]);
        goto __pyx_L18;
      }
      __pyx_L18:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":180
 *                 crit_ind += 1
 *                 rwork[0] = (tcrit_ptr + crit_ind)[0]
 *             if crit_ind >= numcrit:             # <<<<<<<<<<<<<<
 *                 itask = 1  # No more critical values
 * 
 */
      __pyx_t_3 = (__pyx_v_crit_ind >= __pyx_v_numcrit);
      if (__pyx_t_3) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":181
 *                 rwork[0] = (tcrit_ptr + crit_ind)[0]
 *             if crit_ind >= numcrit:
 *                 itask = 1  # No more critical values             # <<<<<<<<<<<<<<
 * 
 *             lsoda(<void *>ode_function, &neq, y, &t, tout_ptr, &itol, rtol_ptr, atol_ptr, &itask, &istate, &iopt, rwork, &lrw, iwork, &liw, <void *>ode_jacobian_function, &jt);
 */
        __pyx_v_itask = 1;
        goto __pyx_L19;
      }
      __pyx_L19:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":183
 *                 itask = 1  # No more critical values
 * 
 *             lsoda(<void *>ode_function, &neq, y, &t, tout_ptr, &itol, rtol_ptr, atol_ptr, &itask, &istate, &iopt, rwork, &lrw, iwork, &liw, <void *>ode_jacobian_function, &jt);             # <<<<<<<<<<<<<<
 *             if full_output:
 *                 (<double *>np.PyArray_DATA(ap_hu))[k-1] = rwork[10]
 */
      LSODA(((void *)__pyx_function_pointer_ode_function), (&__pyx_v_neq), __pyx_v_y, (&__pyx_v_t), __pyx_v_tout_ptr, (&__pyx_v_itol), __pyx_v_rtol_ptr, __pyx_v_atol_ptr, (&__pyx_v_itask), (&__pyx_v_istate), (&__pyx_v_iopt), __pyx_v_rwork, (&__pyx_v_lrw), __pyx_v_iwork, (&__pyx_v_liw), ((void *)__pyx_function_pointer_ode_jacobian_function), (&__pyx_v_jt));

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":184
 * 
 *             lsoda(<void *>ode_function, &neq, y, &t, tout_ptr, &itol, rtol_ptr, atol_ptr, &itask, &istate, &iopt, rwork, &lrw, iwork, &liw, <void *>ode_jacobian_function, &jt);
 *             if full_output:             # <<<<<<<<<<<<<<
 *                 (<double *>np.PyArray_DATA(ap_hu))[k-1] = rwork[10]
 *                 (<double *>np.PyArray_DATA(ap_tcur))[k-1] = rwork[12]
 */
      if (__pyx_v_full_output) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":185
 *             lsoda(<void *>ode_function, &neq, y, &t, tout_ptr, &itol, rtol_ptr, atol_ptr, &itask, &istate, &iopt, rwork, &lrw, iwork, &liw, <void *>ode_jacobian_function, &jt);
 *             if full_output:
 *                 (<double *>np.PyArray_DATA(ap_hu))[k-1] = rwork[10]             # <<<<<<<<<<<<<<
 *                 (<double *>np.PyArray_DATA(ap_tcur))[k-1] = rwork[12]
 *                 (<double *>np.PyArray_DATA(ap_tolsf))[k-1] = rwork[13]
 */
        if (__pyx_v_ap_hu != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_hu) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_hu)))[(__pyx_v_k - 1)]) = (__pyx_v_rwork[10]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":186
 *             if full_output:
 *                 (<double *>np.PyArray_DATA(ap_hu))[k-1] = rwork[10]
 *                 (<double *>np.PyArray_DATA(ap_tcur))[k-1] = rwork[12]             # <<<<<<<<<<<<<<
 *                 (<double *>np.PyArray_DATA(ap_tolsf))[k-1] = rwork[13]
 *                 (<double *>np.PyArray_DATA(ap_tsw))[k-1] = rwork[14]
 */
        if (__pyx_v_ap_tcur != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tcur) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_tcur)))[(__pyx_v_k - 1)]) = (__pyx_v_rwork[12]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":187
 *                 (<double *>np.PyArray_DATA(ap_hu))[k-1] = rwork[10]
 *                 (<double *>np.PyArray_DATA(ap_tcur))[k-1] = rwork[12]
 *                 (<double *>np.PyArray_DATA(ap_tolsf))[k-1] = rwork[13]             # <<<<<<<<<<<<<<
 *                 (<double *>np.PyArray_DATA(ap_tsw))[k-1] = rwork[14]
 *                 (<int *>np.PyArray_DATA(ap_nst))[k-1] = iwork[10]
 */
        if (__pyx_v_ap_tolsf != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tolsf) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_tolsf)))[(__pyx_v_k - 1)]) = (__pyx_v_rwork[13]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":188
 *                 (<double *>np.PyArray_DATA(ap_tcur))[k-1] = rwork[12]
 *                 (<double *>np.PyArray_DATA(ap_tolsf))[k-1] = rwork[13]
 *                 (<double *>np.PyArray_DATA(ap_tsw))[k-1] = rwork[14]             # <<<<<<<<<<<<<<
 *                 (<int *>np.PyArray_DATA(ap_nst))[k-1] = iwork[10]
 *                 (<int *>np.PyArray_DATA(ap_nfe))[k-1] = iwork[11]
 */
        if (__pyx_v_ap_tsw != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tsw) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_tsw)))[(__pyx_v_k - 1)]) = (__pyx_v_rwork[14]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":189
 *                 (<double *>np.PyArray_DATA(ap_tolsf))[k-1] = rwork[13]
 *                 (<double *>np.PyArray_DATA(ap_tsw))[k-1] = rwork[14]
 *                 (<int *>np.PyArray_DATA(ap_nst))[k-1] = iwork[10]             # <<<<<<<<<<<<<<
 *                 (<int *>np.PyArray_DATA(ap_nfe))[k-1] = iwork[11]
 *                 (<int *>np.PyArray_DATA(ap_nje))[k-1] = iwork[12]
 */
        if (__pyx_v_ap_nst != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_nst) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_nst)))[(__pyx_v_k - 1)]) = (__pyx_v_iwork[10]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":190
 *                 (<double *>np.PyArray_DATA(ap_tsw))[k-1] = rwork[14]
 *                 (<int *>np.PyArray_DATA(ap_nst))[k-1] = iwork[10]
 *                 (<int *>np.PyArray_DATA(ap_nfe))[k-1] = iwork[11]             # <<<<<<<<<<<<<<
 *                 (<int *>np.PyArray_DATA(ap_nje))[k-1] = iwork[12]
 *                 (<int *>np.PyArray_DATA(ap_nqu))[k-1] = iwork[13]
 */
        if (__pyx_v_ap_nfe != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_nfe) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_nfe)))[(__pyx_v_k - 1)]) = (__pyx_v_iwork[11]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":191
 *                 (<int *>np.PyArray_DATA(ap_nst))[k-1] = iwork[10]
 *                 (<int *>np.PyArray_DATA(ap_nfe))[k-1] = iwork[11]
 *                 (<int *>np.PyArray_DATA(ap_nje))[k-1] = iwork[12]             # <<<<<<<<<<<<<<
 *                 (<int *>np.PyArray_DATA(ap_nqu))[k-1] = iwork[13]
 *                 if istate == -5 or istate == -4:
 */
        if (__pyx_v_ap_nje != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_nje) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_nje)))[(__pyx_v_k - 1)]) = (__pyx_v_iwork[12]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":192
 *                 (<int *>np.PyArray_DATA(ap_nfe))[k-1] = iwork[11]
 *                 (<int *>np.PyArray_DATA(ap_nje))[k-1] = iwork[12]
 *                 (<int *>np.PyArray_DATA(ap_nqu))[k-1] = iwork[13]             # <<<<<<<<<<<<<<
 *                 if istate == -5 or istate == -4:
 *                   imxer = iwork[15]
 */
        if (__pyx_v_ap_nqu != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_nqu) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_nqu)))[(__pyx_v_k - 1)]) = (__pyx_v_iwork[13]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":193
 *                 (<int *>np.PyArray_DATA(ap_nje))[k-1] = iwork[12]
 *                 (<int *>np.PyArray_DATA(ap_nqu))[k-1] = iwork[13]
 *                 if istate == -5 or istate == -4:             # <<<<<<<<<<<<<<
 *                   imxer = iwork[15]
 *                 else:
 */
        switch (__pyx_v_istate) {
          case -5:
          case -4:

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":194
 *                 (<int *>np.PyArray_DATA(ap_nqu))[k-1] = iwork[13]
 *                 if istate == -5 or istate == -4:
 *                   imxer = iwork[15]             # <<<<<<<<<<<<<<
 *                 else:
 *                   imxer = -1
 */
          __pyx_v_imxer = (__pyx_v_iwork[15]);
          break;
          default:

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":196
 *                   imxer = iwork[15]
 *                 else:
 *                   imxer = -1             # <<<<<<<<<<<<<<
 * 
 *                 lenrw = iwork[16]
 */
          __pyx_v_imxer = -1;
          break;
        }

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":198
 *                   imxer = -1
 * 
 *                 lenrw = iwork[16]             # <<<<<<<<<<<<<<
 *                 leniw = iwork[17]
 *                 (<int *>np.PyArray_DATA(ap_mused))[k-1] = iwork[18]
 */
        __pyx_v_lenrw = (__pyx_v_iwork[16]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":199
 * 
 *                 lenrw = iwork[16]
 *                 leniw = iwork[17]             # <<<<<<<<<<<<<<
 *                 (<int *>np.PyArray_DATA(ap_mused))[k-1] = iwork[18]
 * 
 */
        __pyx_v_leniw = (__pyx_v_iwork[17]);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":200
 *                 lenrw = iwork[16]
 *                 leniw = iwork[17]
 *                 (<int *>np.PyArray_DATA(ap_mused))[k-1] = iwork[18]             # <<<<<<<<<<<<<<
 * 
 *             memcpy(yout_ptr, y, neq*sizeof(double))   # copy integration result to output
 */
        if (__pyx_v_ap_mused != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_mused) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        (((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_mused)))[(__pyx_v_k - 1)]) = (__pyx_v_iwork[18]);
        goto __pyx_L20;
      }
      __pyx_L20:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":202
 *                 (<int *>np.PyArray_DATA(ap_mused))[k-1] = iwork[18]
 * 
 *             memcpy(yout_ptr, y, neq*sizeof(double))   # copy integration result to output             # <<<<<<<<<<<<<<
 *             yout_ptr += neq
 *             k += 1
 */
      memcpy(__pyx_v_yout_ptr, __pyx_v_y, (__pyx_v_neq * (sizeof(double))));

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":203
 * 
 *             memcpy(yout_ptr, y, neq*sizeof(double))   # copy integration result to output
 *             yout_ptr += neq             # <<<<<<<<<<<<<<
 *             k += 1
 *         free(wa);
 */
      __pyx_v_yout_ptr += __pyx_v_neq;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":204
 *             memcpy(yout_ptr, y, neq*sizeof(double))   # copy integration result to output
 *             yout_ptr += neq
 *             k += 1             # <<<<<<<<<<<<<<
 *         free(wa);
 *     finally:
 */
      __pyx_v_k += 1;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":205
 *             yout_ptr += neq
 *             k += 1
 *         free(wa);             # <<<<<<<<<<<<<<
 *     finally:
 *         RESTORE_JAC_FUNC(store_multipack_globals)
 */
    free(__pyx_v_wa);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":207
 *         free(wa);
 *     finally:
 *         RESTORE_JAC_FUNC(store_multipack_globals)             # <<<<<<<<<<<<<<
 * 
 *     if full_output:
 */
  finally {
    __pyx_t_8 = RESTORE_JAC_FUNC(__pyx_v_store_multipack_globals); 
    __pyx_t_8 = nullptr;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":209
 *         RESTORE_JAC_FUNC(store_multipack_globals)
 * 
 *     if full_output:             # <<<<<<<<<<<<<<
 *         props = { "hu" : np.PyArray_Return(ap_hu),
 *                   "tcur" : np.PyArray_Return(ap_tcur),
 */
  if (__pyx_v_full_output) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":210
 * 
 *     if full_output:
 *         props = { "hu" : np.PyArray_Return(ap_hu),             # <<<<<<<<<<<<<<
 *                   "tcur" : np.PyArray_Return(ap_tcur),
 *                   "tolsf" : np.PyArray_Return(ap_tolsf),
 */
    __pyx_t_19 = PythonOps::MakeEmptyDict();
    if (__pyx_v_ap_hu != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_hu) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_hu)); 
    __pyx_t_19[((System::Object^)"hu")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":211
 *     if full_output:
 *         props = { "hu" : np.PyArray_Return(ap_hu),
 *                   "tcur" : np.PyArray_Return(ap_tcur),             # <<<<<<<<<<<<<<
 *                   "tolsf" : np.PyArray_Return(ap_tolsf),
 *                   "tsw" : np.PyArray_Return(ap_tsw),
 */
    if (__pyx_v_ap_tcur != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tcur) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_tcur)); 
    __pyx_t_19[((System::Object^)"tcur")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":212
 *         props = { "hu" : np.PyArray_Return(ap_hu),
 *                   "tcur" : np.PyArray_Return(ap_tcur),
 *                   "tolsf" : np.PyArray_Return(ap_tolsf),             # <<<<<<<<<<<<<<
 *                   "tsw" : np.PyArray_Return(ap_tsw),
 *                   "nst" : np.PyArray_Return(ap_nst),
 */
    if (__pyx_v_ap_tolsf != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tolsf) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_tolsf)); 
    __pyx_t_19[((System::Object^)"tolsf")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":213
 *                   "tcur" : np.PyArray_Return(ap_tcur),
 *                   "tolsf" : np.PyArray_Return(ap_tolsf),
 *                   "tsw" : np.PyArray_Return(ap_tsw),             # <<<<<<<<<<<<<<
 *                   "nst" : np.PyArray_Return(ap_nst),
 *                   "nfe" : np.PyArray_Return(ap_nfe),
 */
    if (__pyx_v_ap_tsw != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tsw) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_tsw)); 
    __pyx_t_19[((System::Object^)"tsw")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":214
 *                   "tolsf" : np.PyArray_Return(ap_tolsf),
 *                   "tsw" : np.PyArray_Return(ap_tsw),
 *                   "nst" : np.PyArray_Return(ap_nst),             # <<<<<<<<<<<<<<
 *                   "nfe" : np.PyArray_Return(ap_nfe),
 *                   "nje" : np.PyArray_Return(ap_nje),
 */
    if (__pyx_v_ap_nst != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_nst) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_nst)); 
    __pyx_t_19[((System::Object^)"nst")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":215
 *                   "tsw" : np.PyArray_Return(ap_tsw),
 *                   "nst" : np.PyArray_Return(ap_nst),
 *                   "nfe" : np.PyArray_Return(ap_nfe),             # <<<<<<<<<<<<<<
 *                   "nje" : np.PyArray_Return(ap_nje),
 *                   "nqu" : np.PyArray_Return(ap_nqu),
 */
    if (__pyx_v_ap_nfe != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_nfe) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_nfe)); 
    __pyx_t_19[((System::Object^)"nfe")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":216
 *                   "nst" : np.PyArray_Return(ap_nst),
 *                   "nfe" : np.PyArray_Return(ap_nfe),
 *                   "nje" : np.PyArray_Return(ap_nje),             # <<<<<<<<<<<<<<
 *                   "nqu" : np.PyArray_Return(ap_nqu),
 *                   "imxer" : imxer,
 */
    if (__pyx_v_ap_nje != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_nje) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_nje)); 
    __pyx_t_19[((System::Object^)"nje")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":217
 *                   "nfe" : np.PyArray_Return(ap_nfe),
 *                   "nje" : np.PyArray_Return(ap_nje),
 *                   "nqu" : np.PyArray_Return(ap_nqu),             # <<<<<<<<<<<<<<
 *                   "imxer" : imxer,
 *                   "lenrw" : lenrw,
 */
    if (__pyx_v_ap_nqu != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_nqu) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_nqu)); 
    __pyx_t_19[((System::Object^)"nqu")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":218
 *                   "nje" : np.PyArray_Return(ap_nje),
 *                   "nqu" : np.PyArray_Return(ap_nqu),
 *                   "imxer" : imxer,             # <<<<<<<<<<<<<<
 *                   "lenrw" : lenrw,
 *                   "leniw" : leniw,
 */
    __pyx_t_8 = __pyx_v_imxer;
    __pyx_t_19[((System::Object^)"imxer")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":219
 *                   "nqu" : np.PyArray_Return(ap_nqu),
 *                   "imxer" : imxer,
 *                   "lenrw" : lenrw,             # <<<<<<<<<<<<<<
 *                   "leniw" : leniw,
 *                   "mused" : np.PyArray_Return(ap_mused) }
 */
    __pyx_t_8 = __pyx_v_lenrw;
    __pyx_t_19[((System::Object^)"lenrw")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":220
 *                   "imxer" : imxer,
 *                   "lenrw" : lenrw,
 *                   "leniw" : leniw,             # <<<<<<<<<<<<<<
 *                   "mused" : np.PyArray_Return(ap_mused) }
 *         return (np.PyArray_Return(ap_yout), props, istate)
 */
    __pyx_t_8 = __pyx_v_leniw;
    __pyx_t_19[((System::Object^)"leniw")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":221
 *                   "lenrw" : lenrw,
 *                   "leniw" : leniw,
 *                   "mused" : np.PyArray_Return(ap_mused) }             # <<<<<<<<<<<<<<
 *         return (np.PyArray_Return(ap_yout), props, istate)
 *     else:
 */
    if (__pyx_v_ap_mused != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_mused) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_mused)); 
    __pyx_t_19[((System::Object^)"mused")] = __pyx_t_8;
    __pyx_t_8 = nullptr;
    __pyx_v_props = __pyx_t_19;
    __pyx_t_19 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":222
 *                   "leniw" : leniw,
 *                   "mused" : np.PyArray_Return(ap_mused) }
 *         return (np.PyArray_Return(ap_yout), props, istate)             # <<<<<<<<<<<<<<
 *     else:
 *         return (np.PyArray_Return(ap_yout), istate)
 */
    if (__pyx_v_ap_yout != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_yout) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_yout)); 
    __pyx_t_2 = __pyx_v_istate;
    __pyx_t_9 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_8, ((System::Object^)__pyx_v_props), __pyx_t_2});
    __pyx_t_8 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_r = __pyx_t_9;
    __pyx_t_9 = nullptr;
    goto __pyx_L0;
    goto __pyx_L21;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":224
 *         return (np.PyArray_Return(ap_yout), props, istate)
 *     else:
 *         return (np.PyArray_Return(ap_yout), istate)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    if (__pyx_v_ap_yout != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_yout) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_9 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_ap_yout)); 
    __pyx_t_2 = __pyx_v_istate;
    __pyx_t_8 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_9, __pyx_t_2});
    __pyx_t_9 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_r = __pyx_t_8;
    __pyx_t_8 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L21:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":229
 * 
 * 
 * cdef void ode_function(int *n, double *t, double *y, double *ydot):             # <<<<<<<<<<<<<<
 *     """ This is the function called from the Fortran code it should
 *         -- use call_python_function to get a multiarrayobject result
 */

static void (*__pyx_function_pointer_ode_function)(int *, double *, double *, double *);
typedef void (*__pyx_fp_t_ode_function)(int *, double *, double *, double *);
static __pyx_delegate_t_5scipy_9integrate_8_odepack_ode_function^ __pyx_delegate_val_ode_function;
static  void ode_function(int *__pyx_v_n, double *__pyx_v_t, double *__pyx_v_y, double *__pyx_v_ydot) {
  NumpyDotNet::ndarray^ __pyx_v_result_array;
  System::Object^ __pyx_v_arg1;
  System::Object^ __pyx_v_arglist;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  __pyx_v_result_array = nullptr;
  __pyx_v_arg1 = nullptr;
  __pyx_v_arglist = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":241
 * 
 *     # Append t to argument list
 *     arg1 = (t[0], )             # <<<<<<<<<<<<<<
 *     arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1
 *     result_array = <np.ndarray>call_python_function(__multipack_python_function, n[0], y, arglist, 1, OdepackError)
 */
  __pyx_t_1 = (__pyx_v_t[0]);
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  __pyx_v_arg1 = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":242
 *     # Append t to argument list
 *     arg1 = (t[0], )
 *     arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1             # <<<<<<<<<<<<<<
 *     result_array = <np.ndarray>call_python_function(__multipack_python_function, n[0], y, arglist, 1, OdepackError)
 *     memcpy(ydot, np.PyArray_DATA(result_array), (n[0])*sizeof(double));
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "__multipack_extra_arguments");
  __pyx_t_3 = (__pyx_t_1 != nullptr);
  __pyx_t_1 = nullptr;
  if (__pyx_t_3) {
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "__multipack_extra_arguments");
    __pyx_t_4 = __site_op_add_242_19->Target(__site_op_add_242_19, __pyx_v_arg1, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_2 = __pyx_t_4;
    __pyx_t_4 = nullptr;
  } else {
    __pyx_t_2 = __pyx_v_arg1;
  }
  __pyx_v_arglist = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":243
 *     arg1 = (t[0], )
 *     arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1
 *     result_array = <np.ndarray>call_python_function(__multipack_python_function, n[0], y, arglist, 1, OdepackError)             # <<<<<<<<<<<<<<
 *     memcpy(ydot, np.PyArray_DATA(result_array), (n[0])*sizeof(double));
 * 
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "__multipack_python_function");
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
  __pyx_t_1 = call_python_function(__pyx_t_2, (__pyx_v_n[0]), __pyx_v_y, __pyx_v_arglist, 1, __pyx_t_4); 
  __pyx_t_2 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_result_array = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":244
 *     arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1
 *     result_array = <np.ndarray>call_python_function(__multipack_python_function, n[0], y, arglist, 1, OdepackError)
 *     memcpy(ydot, np.PyArray_DATA(result_array), (n[0])*sizeof(double));             # <<<<<<<<<<<<<<
 * 
 * 
 */
  memcpy(__pyx_v_ydot, PyArray_DATA(__pyx_v_result_array), ((__pyx_v_n[0]) * (sizeof(double))));

}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":247
 * 
 * 
 * cdef int ode_jacobian_function(int *n, double *t, double *y, int *ml, int *mu, double *pd, int *nrowpd):             # <<<<<<<<<<<<<<
 *     """
 *     This is the function called from the Fortran code it should
 */

static int (*__pyx_function_pointer_ode_jacobian_function)(int *, double *, double *, int *, int *, double *, int *);
typedef int (*__pyx_fp_t_ode_jacobian_function)(int *, double *, double *, int *, int *, double *, int *);
static __pyx_delegate_t_5scipy_9integrate_8_odepack_ode_jacobian_function^ __pyx_delegate_val_ode_jacobian_function;
static  int ode_jacobian_function(int *__pyx_v_n, double *__pyx_v_t, double *__pyx_v_y, int *__pyx_v_ml, int *__pyx_v_mu, double *__pyx_v_pd, int *__pyx_v_nrowpd) {
  NumpyDotNet::ndarray^ __pyx_v_result_array;
  System::Object^ __pyx_v_arg1;
  System::Object^ __pyx_v_arglist;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  __pyx_v_result_array = nullptr;
  __pyx_v_arg1 = nullptr;
  __pyx_v_arglist = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":262
 *     cdef np.ndarray result_array
 * 
 *     arg1 = (t[0], )             # <<<<<<<<<<<<<<
 *     arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1
 *     result_array = call_python_function(__multipack_python_jacobian, n[0], y, arglist, 2, OdepackError)
 */
  __pyx_t_1 = (__pyx_v_t[0]);
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  if (__pyx_t_2 != nullptr && dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arg1 = ((System::Object^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":263
 * 
 *     arg1 = (t[0], )
 *     arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1             # <<<<<<<<<<<<<<
 *     result_array = call_python_function(__multipack_python_jacobian, n[0], y, arglist, 2, OdepackError)
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "__multipack_extra_arguments");
  __pyx_t_3 = (__pyx_t_1 != nullptr);
  __pyx_t_1 = nullptr;
  if (__pyx_t_3) {
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "__multipack_extra_arguments");
    __pyx_t_4 = __site_op_add_263_19->Target(__site_op_add_263_19, ((System::Object^)__pyx_v_arg1), __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_2 = __pyx_t_4;
    __pyx_t_4 = nullptr;
  } else {
    __pyx_t_2 = __pyx_v_arg1;
  }
  __pyx_v_arglist = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":264
 *     arg1 = (t[0], )
 *     arglist = arg1 + __multipack_extra_arguments if __multipack_extra_arguments is not None else arg1
 *     result_array = call_python_function(__multipack_python_jacobian, n[0], y, arglist, 2, OdepackError)             # <<<<<<<<<<<<<<
 * 
 *     if __multipack_jac_transpose == 1:
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "__multipack_python_jacobian");
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
  __pyx_t_1 = call_python_function(__pyx_t_2, (__pyx_v_n[0]), __pyx_v_y, __pyx_v_arglist, 2, __pyx_t_4); 
  __pyx_t_2 = nullptr;
  __pyx_t_4 = nullptr;
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_result_array = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":266
 *     result_array = call_python_function(__multipack_python_jacobian, n[0], y, arglist, 2, OdepackError)
 * 
 *     if __multipack_jac_transpose == 1:             # <<<<<<<<<<<<<<
 *         MATRIXC2F(pd, <double *>np.PyArray_DATA(result_array), n[0], nrowpd[0])
 *     else:
 */
  __pyx_t_3 = (__pyx_v_5scipy_9integrate_8_odepack___multipack_jac_transpose == 1);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":267
 * 
 *     if __multipack_jac_transpose == 1:
 *         MATRIXC2F(pd, <double *>np.PyArray_DATA(result_array), n[0], nrowpd[0])             # <<<<<<<<<<<<<<
 *     else:
 *         memcpy(pd, np.PyArray_DATA(result_array), (n[0])*(nrowpd[0])*sizeof(double))
 */
    MATRIXC2F(__pyx_v_pd, ((double *)PyArray_DATA(__pyx_v_result_array)), (__pyx_v_n[0]), (__pyx_v_nrowpd[0]));
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":269
 *         MATRIXC2F(pd, <double *>np.PyArray_DATA(result_array), n[0], nrowpd[0])
 *     else:
 *         memcpy(pd, np.PyArray_DATA(result_array), (n[0])*(nrowpd[0])*sizeof(double))             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    memcpy(__pyx_v_pd, PyArray_DATA(__pyx_v_result_array), (((__pyx_v_n[0]) * (__pyx_v_nrowpd[0])) * (sizeof(double))));
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":271
 *         memcpy(pd, np.PyArray_DATA(result_array), (n[0])*(nrowpd[0])*sizeof(double))
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * cdef void MATRIXC2F(double *p1, double *p3, int n, int m):
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":273
 *     return 0
 * 
 * cdef void MATRIXC2F(double *p1, double *p3, int n, int m):             # <<<<<<<<<<<<<<
 *     cdef double *p2
 *     cdef int i,j
 */

static  void MATRIXC2F(double *__pyx_v_p1, double *__pyx_v_p3, int __pyx_v_n, int __pyx_v_m) {
  double *__pyx_v_p2;
  int __pyx_v_i;
  int __pyx_v_j;
  int __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":277
 *     cdef int i,j
 * 
 *     j=0             # <<<<<<<<<<<<<<
 *     while j < m:
 *         p2=p3
 */
  __pyx_v_j = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":278
 * 
 *     j=0
 *     while j < m:             # <<<<<<<<<<<<<<
 *         p2=p3
 *         i=0
 */
  while (1) {
    __pyx_t_1 = (__pyx_v_j < __pyx_v_m);
    if (!__pyx_t_1) break;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":279
 *     j=0
 *     while j < m:
 *         p2=p3             # <<<<<<<<<<<<<<
 *         i=0
 *         while i < n:
 */
    __pyx_v_p2 = __pyx_v_p3;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":280
 *     while j < m:
 *         p2=p3
 *         i=0             # <<<<<<<<<<<<<<
 *         while i < n:
 *             p1[0] = p2[0]
 */
    __pyx_v_i = 0;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":281
 *         p2=p3
 *         i=0
 *         while i < n:             # <<<<<<<<<<<<<<
 *             p1[0] = p2[0]
 *             p2 += m
 */
    while (1) {
      __pyx_t_1 = (__pyx_v_i < __pyx_v_n);
      if (!__pyx_t_1) break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":282
 *         i=0
 *         while i < n:
 *             p1[0] = p2[0]             # <<<<<<<<<<<<<<
 *             p2 += m
 *             p1 += 1
 */
      (__pyx_v_p1[0]) = (__pyx_v_p2[0]);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":283
 *         while i < n:
 *             p1[0] = p2[0]
 *             p2 += m             # <<<<<<<<<<<<<<
 *             p1 += 1
 *         p3 += 1
 */
      __pyx_v_p2 += __pyx_v_m;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":284
 *             p1[0] = p2[0]
 *             p2 += m
 *             p1 += 1             # <<<<<<<<<<<<<<
 *         p3 += 1
 *         j += 1
 */
      __pyx_v_p1 += 1;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":285
 *             p2 += m
 *             p1 += 1
 *         p3 += 1             # <<<<<<<<<<<<<<
 *         j += 1
 * 
 */
    __pyx_v_p3 += 1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":286
 *             p1 += 1
 *         p3 += 1
 *         j += 1             # <<<<<<<<<<<<<<
 * 
 * cdef object setup_extra_inputs(object o_rtol, object o_atol, object o_tcrit, int neq, int *numcrit):
 */
    __pyx_v_j += 1;
  }

}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":288
 *         j += 1
 * 
 * cdef object setup_extra_inputs(object o_rtol, object o_atol, object o_tcrit, int neq, int *numcrit):             # <<<<<<<<<<<<<<
 *     cdef object ap_rtol, ap_atol, ap_tcrit      # Outputs
 *     cdef int itol = 0
 */

static  System::Object^ setup_extra_inputs(System::Object^ __pyx_v_o_rtol, System::Object^ __pyx_v_o_atol, System::Object^ __pyx_v_o_tcrit, int __pyx_v_neq, int *__pyx_v_numcrit) {
  System::Object^ __pyx_v_ap_rtol;
  System::Object^ __pyx_v_ap_atol;
  System::Object^ __pyx_v_ap_tcrit;
  int __pyx_v_itol;
  double __pyx_v_tol;
  __pyx_t_5numpy_npy_intp __pyx_v_one;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_ap_rtol = nullptr;
  __pyx_v_ap_atol = nullptr;
  __pyx_v_ap_tcrit = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":290
 * cdef object setup_extra_inputs(object o_rtol, object o_atol, object o_tcrit, int neq, int *numcrit):
 *     cdef object ap_rtol, ap_atol, ap_tcrit      # Outputs
 *     cdef int itol = 0             # <<<<<<<<<<<<<<
 *     cdef double tol=1.49012e-8
 *     cdef np.npy_intp one = 1
 */
  __pyx_v_itol = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":291
 *     cdef object ap_rtol, ap_atol, ap_tcrit      # Outputs
 *     cdef int itol = 0
 *     cdef double tol=1.49012e-8             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp one = 1
 * 
 */
  __pyx_v_tol = 1.49012e-8;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":292
 *     cdef int itol = 0
 *     cdef double tol=1.49012e-8
 *     cdef np.npy_intp one = 1             # <<<<<<<<<<<<<<
 * 
 *     if o_rtol is None:
 */
  __pyx_v_one = 1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":294
 *     cdef np.npy_intp one = 1
 * 
 *     if o_rtol is None:             # <<<<<<<<<<<<<<
 *         ap_rtol = np.PyArray_EMPTY(1, &one, np.NPY_DOUBLE, False)
 *         (<double *>np.PyArray_DATA(ap_rtol))[0] = tol
 */
  __pyx_t_1 = (__pyx_v_o_rtol == nullptr);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":295
 * 
 *     if o_rtol is None:
 *         ap_rtol = np.PyArray_EMPTY(1, &one, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         (<double *>np.PyArray_DATA(ap_rtol))[0] = tol
 *     else:
 */
    __pyx_t_2 = PyArray_EMPTY(1, (&__pyx_v_one), NPY_DOUBLE, 0); 
    __pyx_v_ap_rtol = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":296
 *     if o_rtol is None:
 *         ap_rtol = np.PyArray_EMPTY(1, &one, np.NPY_DOUBLE, False)
 *         (<double *>np.PyArray_DATA(ap_rtol))[0] = tol             # <<<<<<<<<<<<<<
 *     else:
 *         ap_rtol = np.PyArray_ContiguousFromObject(o_rtol,np.NPY_DOUBLE,0,1)
 */
    if (__pyx_v_ap_rtol != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_rtol) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    (((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_rtol)))[0]) = __pyx_v_tol;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":298
 *         (<double *>np.PyArray_DATA(ap_rtol))[0] = tol
 *     else:
 *         ap_rtol = np.PyArray_ContiguousFromObject(o_rtol,np.NPY_DOUBLE,0,1)             # <<<<<<<<<<<<<<
 *         if np.PyArray_NDIM(ap_rtol) == 0:
 *             pass
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
    __pyx_t_3 = PyArray_ContiguousFromObject(__pyx_v_o_rtol, __pyx_t_2, __pyx_int_0, __pyx_int_1); 
    __pyx_t_2 = nullptr;
    __pyx_v_ap_rtol = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":299
 *     else:
 *         ap_rtol = np.PyArray_ContiguousFromObject(o_rtol,np.NPY_DOUBLE,0,1)
 *         if np.PyArray_NDIM(ap_rtol) == 0:             # <<<<<<<<<<<<<<
 *             pass
 *         elif np.PyArray_DIMS(ap_rtol)[0] == neq:
 */
    if (__pyx_v_ap_rtol != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_rtol) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_3 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_v_ap_rtol)); 
    __pyx_t_2 = __site_op_eq_299_36->Target(__site_op_eq_299_36, __pyx_t_3, __pyx_int_0);
    __pyx_t_3 = nullptr;
    __pyx_t_1 = __site_istrue_299_36->Target(__site_istrue_299_36, __pyx_t_2);
    __pyx_t_2 = nullptr;
    if (__pyx_t_1) {
      goto __pyx_L4;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":301
 *         if np.PyArray_NDIM(ap_rtol) == 0:
 *             pass
 *         elif np.PyArray_DIMS(ap_rtol)[0] == neq:             # <<<<<<<<<<<<<<
 *             itol |= 2
 *         else:
 */
    if (__pyx_v_ap_rtol != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_rtol) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_1 = ((PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_v_ap_rtol))[0]) == __pyx_v_neq);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":302
 *             pass
 *         elif np.PyArray_DIMS(ap_rtol)[0] == neq:
 *             itol |= 2             # <<<<<<<<<<<<<<
 *         else:
 *             raise OdepackError("Tolerances must be an array of the same length as the\n     number of equations or a scalar.")
 */
      __pyx_v_itol |= 2;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":304
 *             itol |= 2
 *         else:
 *             raise OdepackError("Tolerances must be an array of the same length as the\n     number of equations or a scalar.")             # <<<<<<<<<<<<<<
 * 
 *     if o_atol is None:
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
      __pyx_t_3 = __site_call1_304_30->Target(__site_call1_304_30, __pyx_context, __pyx_t_2, ((System::Object^)"Tolerances must be an array of the same length as the\n     number of equations or a scalar."));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
    }
    __pyx_L4:;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":306
 *             raise OdepackError("Tolerances must be an array of the same length as the\n     number of equations or a scalar.")
 * 
 *     if o_atol is None:             # <<<<<<<<<<<<<<
 *         ap_atol = np.PyArray_EMPTY(1,&one,np.NPY_DOUBLE, False)
 *         (<double *>np.PyArray_DATA(ap_atol))[0] = tol
 */
  __pyx_t_1 = (__pyx_v_o_atol == nullptr);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":307
 * 
 *     if o_atol is None:
 *         ap_atol = np.PyArray_EMPTY(1,&one,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         (<double *>np.PyArray_DATA(ap_atol))[0] = tol
 *     else:
 */
    __pyx_t_3 = PyArray_EMPTY(1, (&__pyx_v_one), NPY_DOUBLE, 0); 
    __pyx_v_ap_atol = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":308
 *     if o_atol is None:
 *         ap_atol = np.PyArray_EMPTY(1,&one,np.NPY_DOUBLE, False)
 *         (<double *>np.PyArray_DATA(ap_atol))[0] = tol             # <<<<<<<<<<<<<<
 *     else:
 *         ap_atol = np.PyArray_ContiguousFromObject(o_atol,np.NPY_DOUBLE,0,1)
 */
    if (__pyx_v_ap_atol != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_atol) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    (((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_atol)))[0]) = __pyx_v_tol;
    goto __pyx_L5;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":310
 *         (<double *>np.PyArray_DATA(ap_atol))[0] = tol
 *     else:
 *         ap_atol = np.PyArray_ContiguousFromObject(o_atol,np.NPY_DOUBLE,0,1)             # <<<<<<<<<<<<<<
 *         if np.PyArray_NDIM(ap_atol) == 0:   # atol is scalar
 *             pass
 */
    __pyx_t_3 = (System::Object^)(long long)(NPY_DOUBLE);
    __pyx_t_2 = PyArray_ContiguousFromObject(__pyx_v_o_atol, __pyx_t_3, __pyx_int_0, __pyx_int_1); 
    __pyx_t_3 = nullptr;
    __pyx_v_ap_atol = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":311
 *     else:
 *         ap_atol = np.PyArray_ContiguousFromObject(o_atol,np.NPY_DOUBLE,0,1)
 *         if np.PyArray_NDIM(ap_atol) == 0:   # atol is scalar             # <<<<<<<<<<<<<<
 *             pass
 *         elif np.PyArray_DIMS(ap_atol)[0] == neq:
 */
    if (__pyx_v_ap_atol != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_atol) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_v_ap_atol)); 
    __pyx_t_3 = __site_op_eq_311_36->Target(__site_op_eq_311_36, __pyx_t_2, __pyx_int_0);
    __pyx_t_2 = nullptr;
    __pyx_t_1 = __site_istrue_311_36->Target(__site_istrue_311_36, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (__pyx_t_1) {
      goto __pyx_L6;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":313
 *         if np.PyArray_NDIM(ap_atol) == 0:   # atol is scalar
 *             pass
 *         elif np.PyArray_DIMS(ap_atol)[0] == neq:             # <<<<<<<<<<<<<<
 *             itol |= 1   # Set atol array flag
 *         else:
 */
    if (__pyx_v_ap_atol != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_atol) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_1 = ((PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_v_ap_atol))[0]) == __pyx_v_neq);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":314
 *             pass
 *         elif np.PyArray_DIMS(ap_atol)[0] == neq:
 *             itol |= 1   # Set atol array flag             # <<<<<<<<<<<<<<
 *         else:
 *             raise OdepackError("Tolerances must be an array of the same length as the\n     number of equations or a scalar.")
 */
      __pyx_v_itol |= 1;
      goto __pyx_L6;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":316
 *             itol |= 1   # Set atol array flag
 *         else:
 *             raise OdepackError("Tolerances must be an array of the same length as the\n     number of equations or a scalar.")             # <<<<<<<<<<<<<<
 *     itol += 1             # increment to get correct value
 * 
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
      __pyx_t_2 = __site_call1_316_30->Target(__site_call1_316_30, __pyx_context, __pyx_t_3, ((System::Object^)"Tolerances must be an array of the same length as the\n     number of equations or a scalar."));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
    }
    __pyx_L6:;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":317
 *         else:
 *             raise OdepackError("Tolerances must be an array of the same length as the\n     number of equations or a scalar.")
 *     itol += 1             # increment to get correct value             # <<<<<<<<<<<<<<
 * 
 *     # Setup t-critical
 */
  __pyx_v_itol += 1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":320
 * 
 *     # Setup t-critical
 *     if o_tcrit is None:             # <<<<<<<<<<<<<<
 *         ap_tcrit = np.PyArray_ContiguousFromObject(o_tcrit,np.NPY_DOUBLE,0,1)
 *         numcrit[0] = np.PyArray_SIZE(ap_tcrit)
 */
  __pyx_t_1 = (__pyx_v_o_tcrit == nullptr);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":321
 *     # Setup t-critical
 *     if o_tcrit is None:
 *         ap_tcrit = np.PyArray_ContiguousFromObject(o_tcrit,np.NPY_DOUBLE,0,1)             # <<<<<<<<<<<<<<
 *         numcrit[0] = np.PyArray_SIZE(ap_tcrit)
 *     return itol, ap_rtol, ap_atol, ap_tcrit
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
    __pyx_t_3 = PyArray_ContiguousFromObject(__pyx_v_o_tcrit, __pyx_t_2, __pyx_int_0, __pyx_int_1); 
    __pyx_t_2 = nullptr;
    __pyx_v_ap_tcrit = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":322
 *     if o_tcrit is None:
 *         ap_tcrit = np.PyArray_ContiguousFromObject(o_tcrit,np.NPY_DOUBLE,0,1)
 *         numcrit[0] = np.PyArray_SIZE(ap_tcrit)             # <<<<<<<<<<<<<<
 *     return itol, ap_rtol, ap_atol, ap_tcrit
 * 
 */
    if (__pyx_v_ap_tcrit != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_tcrit) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    (__pyx_v_numcrit[0]) = PyArray_SIZE(((NumpyDotNet::ndarray^)__pyx_v_ap_tcrit));
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":323
 *         ap_tcrit = np.PyArray_ContiguousFromObject(o_tcrit,np.NPY_DOUBLE,0,1)
 *         numcrit[0] = np.PyArray_SIZE(ap_tcrit)
 *     return itol, ap_rtol, ap_atol, ap_tcrit             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_itol;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_v_ap_rtol, __pyx_v_ap_atol, __pyx_v_ap_tcrit});
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":326
 * 
 * 
 * cdef object call_python_function(func, np.npy_intp n, double *x, object args, int dim, object error_obj):             # <<<<<<<<<<<<<<
 *     """
 *     This is a generic function to call a python function that takes a 1-D
 */

static  System::Object^ call_python_function(System::Object^ __pyx_v_func, __pyx_t_5numpy_npy_intp __pyx_v_n, double *__pyx_v_x, System::Object^ __pyx_v_args, int __pyx_v_dim, System::Object^ __pyx_v_error_obj) {
  NumpyDotNet::ndarray^ __pyx_v_sequence;
  System::Object^ __pyx_v_result;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_sequence = nullptr;
  __pyx_v_result = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":345
 * 
 *     # Build sequence argument from inputs
 *     sequence = <np.ndarray>np.PyArray_SimpleNewFromData(1, &n, np.NPY_DOUBLE, <char *>x)             # <<<<<<<<<<<<<<
 *     if sequence is None:
 *         raise error_obj("Internal failure to make an array of doubles out of first\n                 argument to function call.")
 */
  __pyx_t_1 = PyArray_SimpleNewFromData(1, (&__pyx_v_n), NPY_DOUBLE, ((char *)__pyx_v_x)); 
  __pyx_v_sequence = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":346
 *     # Build sequence argument from inputs
 *     sequence = <np.ndarray>np.PyArray_SimpleNewFromData(1, &n, np.NPY_DOUBLE, <char *>x)
 *     if sequence is None:             # <<<<<<<<<<<<<<
 *         raise error_obj("Internal failure to make an array of doubles out of first\n                 argument to function call.")
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_sequence) == nullptr);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":347
 *     sequence = <np.ndarray>np.PyArray_SimpleNewFromData(1, &n, np.NPY_DOUBLE, <char *>x)
 *     if sequence is None:
 *         raise error_obj("Internal failure to make an array of doubles out of first\n                 argument to function call.")             # <<<<<<<<<<<<<<
 * 
 *     # Build argument list
 */
    __pyx_t_1 = __site_call1_347_23->Target(__site_call1_347_23, __pyx_context, __pyx_v_error_obj, ((System::Object^)"Internal failure to make an array of doubles out of first\n                 argument to function call."));
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":350
 * 
 *     # Build argument list
 *     if args is None: args = ()             # <<<<<<<<<<<<<<
 *     result = apply(func, (sequence, ) + args)
 *     if result is None:
 */
  __pyx_t_2 = (__pyx_v_args == nullptr);
  if (__pyx_t_2) {
    __pyx_v_args = ((System::Object^)PythonOps::EmptyTuple);
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":351
 *     # Build argument list
 *     if args is None: args = ()
 *     result = apply(func, (sequence, ) + args)             # <<<<<<<<<<<<<<
 *     if result is None:
 *         raise error_obj("Error occured while calling the Python function named %s" % func.func_name)
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "apply");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_sequence)});
  __pyx_t_4 = __site_op_add_351_38->Target(__site_op_add_351_38, __pyx_t_3, __pyx_v_args);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_call2_351_18->Target(__site_call2_351_18, __pyx_context, __pyx_t_1, __pyx_v_func, __pyx_t_4);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_result = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":352
 *     if args is None: args = ()
 *     result = apply(func, (sequence, ) + args)
 *     if result is None:             # <<<<<<<<<<<<<<
 *         raise error_obj("Error occured while calling the Python function named %s" % func.func_name)
 *     return np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, dim-1, dim)
 */
  __pyx_t_2 = (__pyx_v_result == nullptr);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":353
 *     result = apply(func, (sequence, ) + args)
 *     if result is None:
 *         raise error_obj("Error occured while calling the Python function named %s" % func.func_name)             # <<<<<<<<<<<<<<
 *     return np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, dim-1, dim)
 * 
 */
    __pyx_t_3 = __site_get_func_name_353_89->Target(__site_get_func_name_353_89, __pyx_v_func, __pyx_context);
    __pyx_t_4 = __site_op_mod_353_83->Target(__site_op_mod_353_83, ((System::Object^)"Error occured while calling the Python function named %s"), __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_t_3 = __site_call1_353_23->Target(__site_call1_353_23, __pyx_context, __pyx_v_error_obj, ((System::Object^)__pyx_t_4));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":354
 *     if result is None:
 *         raise error_obj("Error occured while calling the Python function named %s" % func.func_name)
 *     return np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, dim-1, dim)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_4 = (__pyx_v_dim - 1);
  __pyx_t_1 = __pyx_v_dim;
  __pyx_t_5 = PyArray_ContiguousFromObject(__pyx_v_result, __pyx_t_3, __pyx_t_4, __pyx_t_1); 
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":357
 * 
 * 
 * cdef int compute_lrw_liw(int *lrw, int *liw, int neq, int jt, int ml, int mu, int mxordn, int mxords):             # <<<<<<<<<<<<<<
 *     cdef int lrn, lrs, nyh, lmat
 * 
 */

static  int compute_lrw_liw(int *__pyx_v_lrw, int *__pyx_v_liw, int __pyx_v_neq, int __pyx_v_jt, int __pyx_v_ml, int __pyx_v_mu, int __pyx_v_mxordn, int __pyx_v_mxords) {
  int __pyx_v_lrn;
  int __pyx_v_lrs;
  int __pyx_v_nyh;
  int __pyx_v_lmat;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  int __pyx_t_4;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":360
 *     cdef int lrn, lrs, nyh, lmat
 * 
 *     if jt == 1 or jt == 2:             # <<<<<<<<<<<<<<
 *         lmat = neq*neq + 2
 *     elif jt == 4 or jt == 5:
 */
  switch (__pyx_v_jt) {
    case 1:
    case 2:

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":361
 * 
 *     if jt == 1 or jt == 2:
 *         lmat = neq*neq + 2             # <<<<<<<<<<<<<<
 *     elif jt == 4 or jt == 5:
 *         lmat = (2*ml + mu + 1)*neq + 2
 */
    __pyx_v_lmat = ((__pyx_v_neq * __pyx_v_neq) + 2);
    break;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":362
 *     if jt == 1 or jt == 2:
 *         lmat = neq*neq + 2
 *     elif jt == 4 or jt == 5:             # <<<<<<<<<<<<<<
 *         lmat = (2*ml + mu + 1)*neq + 2
 *     else:
 */
    case 4:
    case 5:

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":363
 *         lmat = neq*neq + 2
 *     elif jt == 4 or jt == 5:
 *         lmat = (2*ml + mu + 1)*neq + 2             # <<<<<<<<<<<<<<
 *     else:
 *         raise OdepackError("Incorrect value for jt")
 */
    __pyx_v_lmat = (((((2 * __pyx_v_ml) + __pyx_v_mu) + 1) * __pyx_v_neq) + 2);
    break;
    default:

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":365
 *         lmat = (2*ml + mu + 1)*neq + 2
 *     else:
 *         raise OdepackError("Incorrect value for jt")             # <<<<<<<<<<<<<<
 * 
 *     if mxordn < 0:
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
    __pyx_t_2 = __site_call1_365_26->Target(__site_call1_365_26, __pyx_context, __pyx_t_1, ((System::Object^)"Incorrect value for jt"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    break;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":367
 *         raise OdepackError("Incorrect value for jt")
 * 
 *     if mxordn < 0:             # <<<<<<<<<<<<<<
 *         raise OdepackError("Incorrect value for mxordn")
 *     if mxords < 0:
 */
  __pyx_t_3 = (__pyx_v_mxordn < 0);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":368
 * 
 *     if mxordn < 0:
 *         raise OdepackError("Incorrect value for mxordn")             # <<<<<<<<<<<<<<
 *     if mxords < 0:
 *         raise OdepackError("Incorrect value for mxords")
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
    __pyx_t_1 = __site_call1_368_26->Target(__site_call1_368_26, __pyx_context, __pyx_t_2, ((System::Object^)"Incorrect value for mxordn"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":369
 *     if mxordn < 0:
 *         raise OdepackError("Incorrect value for mxordn")
 *     if mxords < 0:             # <<<<<<<<<<<<<<
 *         raise OdepackError("Incorrect value for mxords")
 *     nyh = neq
 */
  __pyx_t_3 = (__pyx_v_mxords < 0);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":370
 *         raise OdepackError("Incorrect value for mxordn")
 *     if mxords < 0:
 *         raise OdepackError("Incorrect value for mxords")             # <<<<<<<<<<<<<<
 *     nyh = neq
 * 
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
    __pyx_t_2 = __site_call1_370_26->Target(__site_call1_370_26, __pyx_context, __pyx_t_1, ((System::Object^)"Incorrect value for mxords"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":371
 *     if mxords < 0:
 *         raise OdepackError("Incorrect value for mxords")
 *     nyh = neq             # <<<<<<<<<<<<<<
 * 
 *     lrn = 20 + nyh*(mxordn+1) + 3*neq
 */
  __pyx_v_nyh = __pyx_v_neq;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":373
 *     nyh = neq
 * 
 *     lrn = 20 + nyh*(mxordn+1) + 3*neq             # <<<<<<<<<<<<<<
 *     lrs = 20 + nyh*(mxords+1) + 3*neq + lmat
 * 
 */
  __pyx_v_lrn = ((20 + (__pyx_v_nyh * (__pyx_v_mxordn + 1))) + (3 * __pyx_v_neq));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":374
 * 
 *     lrn = 20 + nyh*(mxordn+1) + 3*neq
 *     lrs = 20 + nyh*(mxords+1) + 3*neq + lmat             # <<<<<<<<<<<<<<
 * 
 *     lrw[0] = lrn if lrn > lrs else lrs
 */
  __pyx_v_lrs = (((20 + (__pyx_v_nyh * (__pyx_v_mxords + 1))) + (3 * __pyx_v_neq)) + __pyx_v_lmat);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":376
 *     lrs = 20 + nyh*(mxords+1) + 3*neq + lmat
 * 
 *     lrw[0] = lrn if lrn > lrs else lrs             # <<<<<<<<<<<<<<
 *     liw[0] = <int>(20 + neq)
 *     return 0
 */
  if ((__pyx_v_lrn > __pyx_v_lrs)) {
    __pyx_t_4 = __pyx_v_lrn;
  } else {
    __pyx_t_4 = __pyx_v_lrs;
  }
  (__pyx_v_lrw[0]) = __pyx_t_4;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":377
 * 
 *     lrw[0] = lrn if lrn > lrs else lrs
 *     liw[0] = <int>(20 + neq)             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */
  (__pyx_v_liw[0]) = ((int)(20 + __pyx_v_neq));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":378
 *     lrw[0] = lrn if lrn > lrs else lrs
 *     liw[0] = <int>(20 + neq)
 *     return 0             # <<<<<<<<<<<<<<
 * 
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":247
 * ctypedef npy_cdouble     complex_t
 * 
 * cdef inline object PyUFunc_FromFuncAndData(NpyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(NpyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":250
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_DescrFromType(int typenum):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyUFunc_FromFuncAndDataAndSignature(__pyx_v_func, __pyx_v_data, __pyx_v_types, __pyx_v_ntypes, __pyx_v_nin, __pyx_v_nout, __pyx_v_identity, __pyx_v_name, __pyx_v_doc, __pyx_v_c, NULL)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":252
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))
 * 
 * cdef inline object PyArray_DescrFromType(int typenum):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_DescrFromType(int __pyx_v_typenum) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":253
 * 
 * cdef inline object PyArray_DescrFromType(int typenum):
 *     return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":256
 * 
 * 
 * cdef inline object PyArray_ZEROS(int ndim, npy_intp *shape, int typenum, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_ZEROS(int __pyx_v_ndim, __pyx_t_5numpy_npy_intp *__pyx_v_shape, int __pyx_v_typenum, int __pyx_v_fortran) {
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

  /* "../cython/include\numpy.pxd":257
 * 
 * cdef inline object PyArray_ZEROS(int ndim, npy_intp *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":259
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":260
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_260_18->Target(__site_get_append_260_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_260_25->Target(__site_call1_260_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":261
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":262
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_EMPTY(int ndim, npy_intp *shape, int typenum, int fortran):
 */
  __pyx_t_5 = __site_get_zeros_262_16->Target(__site_get_zeros_262_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_262_22->Target(__site_call3_262_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include\numpy.pxd":264
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_EMPTY(int ndim, npy_intp *shape, int typenum, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_EMPTY(int __pyx_v_ndim, __pyx_t_5numpy_npy_intp *__pyx_v_shape, int __pyx_v_typenum, int __pyx_v_fortran) {
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

  /* "../cython/include\numpy.pxd":265
 * 
 * cdef inline object PyArray_EMPTY(int ndim, npy_intp *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":267
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":268
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_268_18->Target(__site_get_append_268_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_268_25->Target(__site_call1_268_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":269
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":270
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 */
  __pyx_t_5 = __site_get_empty_270_16->Target(__site_get_empty_270_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_270_22->Target(__site_call3_270_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include\numpy.pxd":272
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_Empty(int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, NumpyDotNet::dtype^ __pyx_v_descr, int __pyx_v_fortran) {
  System::Object^ __pyx_v_shape_list;
  int __pyx_v_i;
  System::Object^ __pyx_v_numpy;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_shape_list = nullptr;
  __pyx_v_numpy = nullptr;

  /* "../cython/include\numpy.pxd":273
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(nd):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":275
 *     shape_list = []
 *     cdef int i
 *     for i in range(nd):             # <<<<<<<<<<<<<<
 *         shape_list.append(dims[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_nd;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":276
 *     cdef int i
 *     for i in range(nd):
 *         shape_list.append(dims[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_276_18->Target(__site_get_append_276_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_dims[__pyx_v_i]);
    __pyx_t_5 = __site_call1_276_25->Target(__site_call1_276_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":277
 *     for i in range(nd):
 *         shape_list.append(dims[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":278
 *         shape_list.append(dims[i])
 *     import numpy
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_5 = __site_get_empty_278_16->Target(__site_get_empty_278_16, __pyx_v_numpy, __pyx_context);
  if (__pyx_v_fortran) {
    __pyx_t_4 = "F";
  } else {
    __pyx_t_4 = "C";
  }
  __pyx_t_1 = __site_call3_278_22->Target(__site_call3_278_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), ((System::Object^)__pyx_v_descr), ((System::Object^)__pyx_t_4));
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":281
 * 
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":282
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

  /* "../cython/include\numpy.pxd":283
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

  /* "../cython/include\numpy.pxd":284
 *     assert subtype == NULL
 *     assert obj == NULL
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_SimpleNewFromData(int nd, npy_intp *dims, int type_num, void *data):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_New(__pyx_v_subtype, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, __pyx_v_strides, __pyx_v_data, __pyx_v_itemsize, __pyx_v_flags, __pyx_v_obj)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":286
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 * cdef inline object PyArray_SimpleNewFromData(int nd, npy_intp *dims, int type_num, void *data):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(NpyArray_New(NULL, nd, dims, type_num, NULL, data, 0, NPY_CARRAY, NULL))
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_SimpleNewFromData(int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, void *__pyx_v_data) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":287
 * 
 * cdef inline object PyArray_SimpleNewFromData(int nd, npy_intp *dims, int type_num, void *data):
 *     return Npy_INTERFACE_array(NpyArray_New(NULL, nd, dims, type_num, NULL, data, 0, NPY_CARRAY, NULL))             # <<<<<<<<<<<<<<
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_New(NULL, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, NULL, __pyx_v_data, 0, NPY_CARRAY, NULL)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":289
 *     return Npy_INTERFACE_array(NpyArray_New(NULL, nd, dims, type_num, NULL, data, 0, NPY_CARRAY, NULL))
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):             # <<<<<<<<<<<<<<
 *      # XXX "long long" is wrong type
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)
 */

static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^ __pyx_v_n, int __pyx_v_flags) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":291
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 *      # XXX "long long" is wrong type
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n) nogil:
 */
  __pyx_t_1 = __site_get_Array_291_54->Target(__site_get_Array_291_54, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_291_54->Target(__site_cvt_cvt_PY_LONG_LONG_291_54, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_CHKFLAGS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)), __pyx_v_flags);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":293
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)
 * 
 * cdef inline void* PyArray_DATA(ndarray n) nogil:             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":295
 * cdef inline void* PyArray_DATA(ndarray n) nogil:
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline npy_intp* PyArray_DIMS(ndarray n) nogil:
 */
  __pyx_t_1 = __site_get_Array_295_49->Target(__site_get_Array_295_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_295_49->Target(__site_cvt_cvt_PY_LONG_LONG_295_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":297
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline npy_intp* PyArray_DIMS(ndarray n) nogil:             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5numpy_npy_intp *PyArray_DIMS(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_npy_intp *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":299
 * cdef inline npy_intp* PyArray_DIMS(ndarray n) nogil:
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):
 */
  __pyx_t_1 = __site_get_Array_299_49->Target(__site_get_Array_299_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_299_49->Target(__site_cvt_cvt_PY_LONG_LONG_299_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":301
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):             # <<<<<<<<<<<<<<
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)
 * 
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_DIM(NumpyDotNet::ndarray^ __pyx_v_n, int __pyx_v_dim) {
  __pyx_t_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":302
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(ndarray obj):
 */
  __pyx_t_1 = __site_get_Array_302_47->Target(__site_get_Array_302_47, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_302_47->Target(__site_cvt_cvt_PY_LONG_LONG_302_47, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIM(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)), __pyx_v_dim);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":304
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)
 * 
 * cdef inline object PyArray_NDIM(ndarray obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(NumpyDotNet::ndarray^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":305
 * 
 * cdef inline object PyArray_NDIM(ndarray obj):
 *     return obj.ndim             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 */
  __pyx_t_1 = __site_get_ndim_305_14->Target(__site_get_ndim_305_14, ((System::Object^)__pyx_v_obj), __pyx_context);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":307
 *     return obj.ndim
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":309
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline npy_intp PyArray_NBYTES(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_309_49->Target(__site_get_Array_309_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_309_49->Target(__site_cvt_cvt_PY_LONG_LONG_309_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_SIZE(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":311
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline npy_intp PyArray_NBYTES(ndarray n):             # <<<<<<<<<<<<<<
 *     return NpyArray_NBYTES(<NpyArray *><long long>n.Array)
 * 
 */

static CYTHON_INLINE __pyx_t_5numpy_npy_intp PyArray_NBYTES(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_npy_intp __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":312
 * 
 * cdef inline npy_intp PyArray_NBYTES(ndarray n):
 *     return NpyArray_NBYTES(<NpyArray *><long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_312_51->Target(__site_get_Array_312_51, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_312_51->Target(__site_cvt_cvt_PY_LONG_LONG_312_51, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_NBYTES(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":314
 *     return NpyArray_NBYTES(<NpyArray *><long long>n.Array)
 * 
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return <NpyArray*> <long long>n.Array
 */

static CYTHON_INLINE NpyArray *PyArray_ARRAY(NumpyDotNet::ndarray^ __pyx_v_n) {
  NpyArray *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":316
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):
 *     # XXX "long long" is wrong type
 *     return <NpyArray*> <long long>n.Array             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Return(ndarray arr):
 */
  __pyx_t_1 = __site_get_Array_316_35->Target(__site_get_Array_316_35, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_316_35->Target(__site_cvt_cvt_PY_LONG_LONG_316_35, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = ((NpyArray *)((PY_LONG_LONG)__pyx_t_2));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":318
 *     return <NpyArray*> <long long>n.Array
 * 
 * cdef inline object PyArray_Return(ndarray arr):             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ndarray
 *     if arr is None:
 */

static CYTHON_INLINE System::Object^ PyArray_Return(NumpyDotNet::ndarray^ __pyx_v_arr) {
  System::Object^ __pyx_v_NumpyDotNet;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_NumpyDotNet = nullptr;

  /* "../cython/include\numpy.pxd":319
 * 
 * cdef inline object PyArray_Return(ndarray arr):
 *     import NumpyDotNet.ndarray             # <<<<<<<<<<<<<<
 *     if arr is None:
 *         return None
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ndarray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":320
 * cdef inline object PyArray_Return(ndarray arr):
 *     import NumpyDotNet.ndarray
 *     if arr is None:             # <<<<<<<<<<<<<<
 *         return None
 *     return ArrayReturn(arr)
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_arr) == nullptr);
  if (__pyx_t_2) {

    /* "../cython/include\numpy.pxd":321
 *     import NumpyDotNet.ndarray
 *     if arr is None:
 *         return None             # <<<<<<<<<<<<<<
 *     return ArrayReturn(arr)
 * 
 */
    __pyx_r = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include\numpy.pxd":322
 *     if arr is None:
 *         return None
 *     return ArrayReturn(arr)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object NpyArray_Return(NpyArray *arr):
 */
  __pyx_t_1 = ((System::Object^)NumpyDotNet::ndarray::ArrayReturn(__pyx_v_arr)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":324
 *     return ArrayReturn(arr)
 * 
 * cdef inline object NpyArray_Return(NpyArray *arr):             # <<<<<<<<<<<<<<
 *     ret = Npy_INTERFACE_array(arr)
 *     Npy_DECREF(arr)
 */

static CYTHON_INLINE System::Object^ NpyArray_Return(NpyArray *__pyx_v_arr) {
  System::Object^ __pyx_v_ret;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_ret = nullptr;

  /* "../cython/include\numpy.pxd":325
 * 
 * cdef inline object NpyArray_Return(NpyArray *arr):
 *     ret = Npy_INTERFACE_array(arr)             # <<<<<<<<<<<<<<
 *     Npy_DECREF(arr)
 *     return ret
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(__pyx_v_arr); 
  __pyx_v_ret = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":326
 * cdef inline object NpyArray_Return(NpyArray *arr):
 *     ret = Npy_INTERFACE_array(arr)
 *     Npy_DECREF(arr)             # <<<<<<<<<<<<<<
 *     return ret
 * 
 */
  Npy_DECREF(__pyx_v_arr);

  /* "../cython/include\numpy.pxd":327
 *     ret = Npy_INTERFACE_array(arr)
 *     Npy_DECREF(arr)
 *     return ret             # <<<<<<<<<<<<<<
 * 
 * cdef inline int PyDataType_TYPE_NUM(dtype t):
 */
  __pyx_r = __pyx_v_ret;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":329
 *     return ret
 * 
 * cdef inline int PyDataType_TYPE_NUM(dtype t):             # <<<<<<<<<<<<<<
 *     return NpyDataType_TYPE_NUM(<NpyArray_Descr *><long long>t.Dtype)
 * 
 */

static CYTHON_INLINE int PyDataType_TYPE_NUM(NumpyDotNet::dtype^ __pyx_v_t) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":330
 * 
 * cdef inline int PyDataType_TYPE_NUM(dtype t):
 *     return NpyDataType_TYPE_NUM(<NpyArray_Descr *><long long>t.Dtype)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_1 = __site_get_Dtype_330_62->Target(__site_get_Dtype_330_62, ((System::Object^)__pyx_v_t), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_330_62->Target(__site_cvt_cvt_PY_LONG_LONG_330_62, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyDataType_TYPE_NUM(((NpyArray_Descr *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":332
 *     return NpyDataType_TYPE_NUM(<NpyArray_Descr *><long long>t.Dtype)
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

  /* "../cython/include\numpy.pxd":333
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":334
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":335
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = __site_get_NpyArray_335_22->Target(__site_get_NpyArray_335_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_FromAny_335_31->Target(__site_get_FromAny_335_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_335_39->Target(__site_call6_335_39, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":338
 * 
 * 
 * cdef inline object PyArray_CopyFromObject(op, descr, min_depth, max_depth):             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(op, descr, min_depth, max_depth,
 *                            NPY_ENSURECOPY | NPY_DEFAULT | NPY_ENSUREARRAY, NULL)
 */

static CYTHON_INLINE System::Object^ PyArray_CopyFromObject(System::Object^ __pyx_v_op, System::Object^ __pyx_v_descr, System::Object^ __pyx_v_min_depth, System::Object^ __pyx_v_max_depth) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;

  /* "../cython/include\numpy.pxd":340
 * cdef inline object PyArray_CopyFromObject(op, descr, min_depth, max_depth):
 *     return PyArray_FromAny(op, descr, min_depth, max_depth,
 *                            NPY_ENSURECOPY | NPY_DEFAULT | NPY_ENSUREARRAY, NULL)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = (System::Object^)(long long)(((NPY_ENSURECOPY | NPY_DEFAULT) | NPY_ENSUREARRAY));
  __pyx_t_2 = NULL;
  __pyx_t_3 = PyArray_FromAny(__pyx_v_op, __pyx_v_descr, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_t_1, __pyx_t_2); 
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":343
 * 
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

  /* "../cython/include\numpy.pxd":344
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_ENSURECOPY);
  __pyx_t_2 = __site_op_and_344_13->Target(__site_op_and_344_13, __pyx_v_flags, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_344_13->Target(__site_istrue_344_13, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3) {

    /* "../cython/include\numpy.pxd":345
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DEFAULT);
    __pyx_t_1 = __site_op_ior_345_14->Target(__site_op_ior_345_14, __pyx_v_flags, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_flags = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include\numpy.pxd":346
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_ContiguousFromObject(op, type, minDepth, maxDepth):
 */
  __pyx_t_4 = __site_cvt_cvt_int_346_77->Target(__site_cvt_cvt_int_346_77, __pyx_v_type);
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

/* "../cython/include\numpy.pxd":348
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 * cdef inline object PyArray_ContiguousFromObject(op, type, minDepth, maxDepth):             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(op, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), minDepth, maxDepth,
 *                            NPY_DEFAULT | NPY_ENSUREARRAY, NULL)
 */

static CYTHON_INLINE System::Object^ PyArray_ContiguousFromObject(System::Object^ __pyx_v_op, System::Object^ __pyx_v_type, System::Object^ __pyx_v_minDepth, System::Object^ __pyx_v_maxDepth) {
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":349
 * 
 * cdef inline object PyArray_ContiguousFromObject(op, type, minDepth, maxDepth):
 *     return PyArray_FromAny(op, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), minDepth, maxDepth,             # <<<<<<<<<<<<<<
 *                            NPY_DEFAULT | NPY_ENSUREARRAY, NULL)
 * 
 */
  __pyx_t_1 = __site_cvt_cvt_int_349_78->Target(__site_cvt_cvt_int_349_78, __pyx_v_type);
  __pyx_t_2 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_1)); 

  /* "../cython/include\numpy.pxd":350
 * cdef inline object PyArray_ContiguousFromObject(op, type, minDepth, maxDepth):
 *     return PyArray_FromAny(op, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), minDepth, maxDepth,
 *                            NPY_DEFAULT | NPY_ENSUREARRAY, NULL)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_3 = (System::Object^)(long long)((NPY_DEFAULT | NPY_ENSUREARRAY));
  __pyx_t_4 = NULL;
  __pyx_t_5 = PyArray_FromAny(__pyx_v_op, __pyx_t_2, __pyx_v_minDepth, __pyx_v_maxDepth, __pyx_t_3, __pyx_t_4); 
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":352
 *                            NPY_DEFAULT | NPY_ENSUREARRAY, NULL)
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):             # <<<<<<<<<<<<<<
 *     import clr
 *     import NumpyDotNet.NpyArray
 */

static CYTHON_INLINE System::Object^ PyArray_CheckFromAny(System::Object^ __pyx_v_op, System::Object^ __pyx_v_newtype, System::Object^ __pyx_v_min_depth, System::Object^ __pyx_v_max_depth, System::Object^ __pyx_v_flags, System::Object^ __pyx_v_context) {
  System::Object^ __pyx_v_clr;
  System::Object^ __pyx_v_NumpyDotNet;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_v_clr = nullptr;
  __pyx_v_NumpyDotNet = nullptr;

  /* "../cython/include\numpy.pxd":353
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":354
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":355
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Check(obj):
 */
  __pyx_t_1 = __site_get_NpyArray_355_22->Target(__site_get_NpyArray_355_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_CheckFromAny_355_31->Target(__site_get_CheckFromAny_355_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_355_44->Target(__site_call6_355_44, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":357
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 * cdef inline object PyArray_Check(obj):             # <<<<<<<<<<<<<<
 *     import numpy as np
 *     return isinstance(obj, np.ndarray)
 */

static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_v_np;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_np = nullptr;

  /* "../cython/include\numpy.pxd":358
 * 
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np             # <<<<<<<<<<<<<<
 *     return isinstance(obj, np.ndarray)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_np = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":359
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np
 *     return isinstance(obj, np.ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_get_ndarray_359_29->Target(__site_get_ndarray_359_29, __pyx_v_np, __pyx_context);
  __pyx_t_3 = __site_call2_359_21->Target(__site_call2_359_21, __pyx_context, __pyx_t_1, __pyx_v_obj, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":361
 *     return isinstance(obj, np.ndarray)
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 * 
 */

static CYTHON_INLINE void import_array(void) {

}

/* "../cython/include\numpy.pxd":364
 *     pass
 * 
 * cdef inline PyNumber_Check(o):             # <<<<<<<<<<<<<<
 *     import clr
 *     import NumpyDotNet.ScalarGeneric
 */

static CYTHON_INLINE System::Object^ PyNumber_Check(System::Object^ __pyx_v_o) {
  System::Object^ __pyx_v_clr;
  System::Object^ __pyx_v_NumpyDotNet;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;
  __pyx_v_clr = nullptr;
  __pyx_v_NumpyDotNet = nullptr;

  /* "../cython/include\numpy.pxd":365
 * 
 * cdef inline PyNumber_Check(o):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":366
 * cdef inline PyNumber_Check(o):
 *     import clr
 *     import NumpyDotNet.ScalarGeneric             # <<<<<<<<<<<<<<
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ScalarGeneric", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":367
 *     import clr
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)             # <<<<<<<<<<<<<<
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "int");
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "long");
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "float");
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_t_2), ((System::Object^)__pyx_t_3), ((System::Object^)__pyx_t_4)});
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_call2_367_21->Target(__site_call2_367_21, __pyx_context, __pyx_t_1, __pyx_v_o, __pyx_t_5);
  __pyx_t_1 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_6 = __site_cvt_bool_367_45->Target(__site_cvt_bool_367_45, __pyx_t_4);
  if (!__pyx_t_6) {
    __pyx_t_4 = nullptr;
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_1 = __site_get_ScalarGeneric_367_73->Target(__site_get_ScalarGeneric_367_73, __pyx_v_NumpyDotNet, __pyx_context);
    __pyx_t_3 = __site_call2_367_58->Target(__site_call2_367_58, __pyx_context, __pyx_t_5, __pyx_v_o, __pyx_t_1);
    __pyx_t_5 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  } else {
    __pyx_t_1 = __pyx_t_4;
    __pyx_t_4 = nullptr;
  }
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}
// XXX skipping all typeobj definitions
/* Cython code section 'pystring_table' */
/* Cython code section 'cached_builtins' */
/* Cython code section 'init_globals' */

static int __Pyx_InitGlobals(void) {
  __pyx_int_0 = 0;
  __pyx_int_1 = 1;

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
  __site_call2_41_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_41_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_42_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_44_19 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_44_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_44_62 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_44_62 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_45_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_59_4 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0_3 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_62_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_62_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_62_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0_4 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0_5 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0_6 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0_7 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_62_0_8 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_120_8 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_133_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_getindex_172_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_double_172_28 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_op_add_177_51 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_getindex_177_62 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_gt_177_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::GreaterThan));
  __site_istrue_177_42 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_add_242_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_263_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_eq_299_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_299_36 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_304_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_eq_311_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_311_36 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_316_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_347_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_351_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call2_351_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_func_name_353_89 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "func_name", false));
  __site_op_mod_353_83 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_353_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_365_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_368_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_370_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_append_260_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_260_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_262_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_262_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_268_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_268_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_270_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_270_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_276_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_276_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_278_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_278_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_291_54 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_291_54 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_295_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_295_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_299_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_299_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_302_47 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_302_47 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_305_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_get_Array_309_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_309_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_312_51 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_312_51 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_316_35 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_316_35 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Dtype_330_62 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Dtype", false));
  __site_cvt_cvt_PY_LONG_LONG_330_62 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_335_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_FromAny_335_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "FromAny", false));
  __site_call6_335_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_op_and_344_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_istrue_344_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ior_345_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::OrAssign));
  __site_cvt_cvt_int_346_77 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_349_78 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_355_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_CheckFromAny_355_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "CheckFromAny", false));
  __site_call6_355_44 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_get_ndarray_359_29 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call2_359_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_367_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_cvt_bool_367_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ScalarGeneric_367_73 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ScalarGeneric", false));
  __site_call2_367_58 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  /*--- Type import code ---*/
  // XXX skipping type ptr assignment for NumpyDotNet::ndarray
  // XXX skipping type ptr assignment for NumpyDotNet::dtype
  /*--- Create function pointers ---*/
  __pyx_delegate_val_ode_function = gcnew __pyx_delegate_t_5scipy_9integrate_8_odepack_ode_function(ode_function);
  __pyx_function_pointer_ode_function = (__pyx_fp_t_ode_function)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_ode_function).ToPointer());
  __pyx_delegate_val_ode_jacobian_function = gcnew __pyx_delegate_t_5scipy_9integrate_8_odepack_ode_jacobian_function(ode_jacobian_function);
  __pyx_function_pointer_ode_jacobian_function = (__pyx_fp_t_ode_jacobian_function)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_ode_jacobian_function).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":5
 * 
 * cimport numpy as np
 * import numpy as np             # <<<<<<<<<<<<<<
 * np.import_array()
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":6
 * cimport numpy as np
 * import numpy as np
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "__odepack.h":
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":18
 *     void free(void *)
 * 
 * class OdepackError(Exception): pass             # <<<<<<<<<<<<<<
 * 
 * error = OdepackError
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "Exception");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  FunctionCode^ func_code_OdepackError = PythonOps::MakeFunctionCode(__pyx_context, "func_code_OdepackError", nullptr, gcnew array<System::String^>{"arg0"}, FunctionAttributes::None, 0, 0, "", gcnew System::Func<CodeContext^, CodeContext^>(mk_empty_context), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), 0);
  PythonTuple^ tbases_OdepackError = safe_cast<PythonTuple^>(__pyx_t_3);
  array<System::Object^>^ bases_OdepackError = gcnew array<System::Object^>(tbases_OdepackError->Count);
  tbases_OdepackError->CopyTo(bases_OdepackError, 0);
  __pyx_t_1 = PythonOps::MakeClass(func_code_OdepackError, nullptr, __pyx_context, "OdepackError", bases_OdepackError, "");
  __pyx_t_3 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "OdepackError", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":20
 * class OdepackError(Exception): pass
 * 
 * error = OdepackError             # <<<<<<<<<<<<<<
 * __version__ = 1.9
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "OdepackError");
  PythonOps::SetGlobal(__pyx_context, "error", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":21
 * 
 * error = OdepackError
 * __version__ = 1.9             # <<<<<<<<<<<<<<
 * 
 * cdef int __multipack_jac_transpose
 */
  __pyx_t_1 = 1.9;
  PythonOps::SetGlobal(__pyx_context, "__version__", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":25
 * cdef int __multipack_jac_transpose
 * 
 * __multipack_python_function = None             # <<<<<<<<<<<<<<
 * __multipack_python_jacobian = None
 * __multipack_extra_arguments= None
 */
  PythonOps::SetGlobal(__pyx_context, "__multipack_python_function", nullptr);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":26
 * 
 * __multipack_python_function = None
 * __multipack_python_jacobian = None             # <<<<<<<<<<<<<<
 * __multipack_extra_arguments= None
 * __multipack_jac_transpose = -1
 */
  PythonOps::SetGlobal(__pyx_context, "__multipack_python_jacobian", nullptr);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":27
 * __multipack_python_function = None
 * __multipack_python_jacobian = None
 * __multipack_extra_arguments= None             # <<<<<<<<<<<<<<
 * __multipack_jac_transpose = -1
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "__multipack_extra_arguments", nullptr);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":28
 * __multipack_python_jacobian = None
 * __multipack_extra_arguments= None
 * __multipack_jac_transpose = -1             # <<<<<<<<<<<<<<
 * 
 * cdef INIT_JAC_FUNC(fun, Dfun, arg, int col_deriv, errobj):
 */
  __pyx_v_5scipy_9integrate_8_odepack___multipack_jac_transpose = -1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\integrate\_odepack.pyx":1
 * """ Wrapper for the odepack module """             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":364
 *     pass
 * 
 * cdef inline PyNumber_Check(o):             # <<<<<<<<<<<<<<
 *     import clr
 *     import NumpyDotNet.ScalarGeneric
 */
}
/* Cython code section 'cleanup_globals' */
/* Cython code section 'cleanup_module' */
/* Cython code section 'main_method' */
/* Cython code section 'dotnet_globals' */


static Types::PythonType^ __pyx_ptype_5numpy_ndarray = nullptr;
static Types::PythonType^ __pyx_ptype_5numpy_dtype = nullptr;

static int __pyx_v_5scipy_9integrate_8_odepack___multipack_jac_transpose;
/* Cython code section 'utility_code_def' */

/* Runtime support code */

#if CYTHON_CCOMPLEX
  #ifdef __cplusplus
    static CYTHON_INLINE __pyx_t_float_complex __pyx_t_float_complex_from_parts(float x, float y) {
      return ::std::complex< float >(x, y);
    }
  #else
    static CYTHON_INLINE __pyx_t_float_complex __pyx_t_float_complex_from_parts(float x, float y) {
      return x + y*(__pyx_t_float_complex)_Complex_I;
    }
  #endif
#else
    static CYTHON_INLINE __pyx_t_float_complex __pyx_t_float_complex_from_parts(float x, float y) {
      __pyx_t_float_complex z;
      z.real = x;
      z.imag = y;
      return z;
    }
#endif

#if CYTHON_CCOMPLEX
#else
    static CYTHON_INLINE int __Pyx_c_eqf(__pyx_t_float_complex a, __pyx_t_float_complex b) {
       return (a.real == b.real) && (a.imag == b.imag);
    }
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_sumf(__pyx_t_float_complex a, __pyx_t_float_complex b) {
        __pyx_t_float_complex z;
        z.real = a.real + b.real;
        z.imag = a.imag + b.imag;
        return z;
    }
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_difff(__pyx_t_float_complex a, __pyx_t_float_complex b) {
        __pyx_t_float_complex z;
        z.real = a.real - b.real;
        z.imag = a.imag - b.imag;
        return z;
    }
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_prodf(__pyx_t_float_complex a, __pyx_t_float_complex b) {
        __pyx_t_float_complex z;
        z.real = a.real * b.real - a.imag * b.imag;
        z.imag = a.real * b.imag + a.imag * b.real;
        return z;
    }
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_quotf(__pyx_t_float_complex a, __pyx_t_float_complex b) {
        __pyx_t_float_complex z;
        float denom = b.real * b.real + b.imag * b.imag;
        z.real = (a.real * b.real + a.imag * b.imag) / denom;
        z.imag = (a.imag * b.real - a.real * b.imag) / denom;
        return z;
    }
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_negf(__pyx_t_float_complex a) {
        __pyx_t_float_complex z;
        z.real = -a.real;
        z.imag = -a.imag;
        return z;
    }
    static CYTHON_INLINE int __Pyx_c_is_zerof(__pyx_t_float_complex a) {
       return (a.real == 0) && (a.imag == 0);
    }
    static CYTHON_INLINE __pyx_t_float_complex __Pyx_c_conjf(__pyx_t_float_complex a) {
        __pyx_t_float_complex z;
        z.real =  a.real;
        z.imag = -a.imag;
        return z;
    }
/*
    static CYTHON_INLINE float __Pyx_c_absf(__pyx_t_float_complex z) {
#if HAVE_HYPOT
        return hypotf(z.real, z.imag);
#else
        return sqrtf(z.real*z.real + z.imag*z.imag);
#endif
    }
*/
#endif

#if CYTHON_CCOMPLEX
  #ifdef __cplusplus
    static CYTHON_INLINE __pyx_t_double_complex __pyx_t_double_complex_from_parts(double x, double y) {
      return ::std::complex< double >(x, y);
    }
  #else
    static CYTHON_INLINE __pyx_t_double_complex __pyx_t_double_complex_from_parts(double x, double y) {
      return x + y*(__pyx_t_double_complex)_Complex_I;
    }
  #endif
#else
    static CYTHON_INLINE __pyx_t_double_complex __pyx_t_double_complex_from_parts(double x, double y) {
      __pyx_t_double_complex z;
      z.real = x;
      z.imag = y;
      return z;
    }
#endif

#if CYTHON_CCOMPLEX
#else
    static CYTHON_INLINE int __Pyx_c_eq(__pyx_t_double_complex a, __pyx_t_double_complex b) {
       return (a.real == b.real) && (a.imag == b.imag);
    }
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_sum(__pyx_t_double_complex a, __pyx_t_double_complex b) {
        __pyx_t_double_complex z;
        z.real = a.real + b.real;
        z.imag = a.imag + b.imag;
        return z;
    }
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_diff(__pyx_t_double_complex a, __pyx_t_double_complex b) {
        __pyx_t_double_complex z;
        z.real = a.real - b.real;
        z.imag = a.imag - b.imag;
        return z;
    }
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_prod(__pyx_t_double_complex a, __pyx_t_double_complex b) {
        __pyx_t_double_complex z;
        z.real = a.real * b.real - a.imag * b.imag;
        z.imag = a.real * b.imag + a.imag * b.real;
        return z;
    }
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_quot(__pyx_t_double_complex a, __pyx_t_double_complex b) {
        __pyx_t_double_complex z;
        double denom = b.real * b.real + b.imag * b.imag;
        z.real = (a.real * b.real + a.imag * b.imag) / denom;
        z.imag = (a.imag * b.real - a.real * b.imag) / denom;
        return z;
    }
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_neg(__pyx_t_double_complex a) {
        __pyx_t_double_complex z;
        z.real = -a.real;
        z.imag = -a.imag;
        return z;
    }
    static CYTHON_INLINE int __Pyx_c_is_zero(__pyx_t_double_complex a) {
       return (a.real == 0) && (a.imag == 0);
    }
    static CYTHON_INLINE __pyx_t_double_complex __Pyx_c_conj(__pyx_t_double_complex a) {
        __pyx_t_double_complex z;
        z.real =  a.real;
        z.imag = -a.imag;
        return z;
    }
/*
    static CYTHON_INLINE double __Pyx_c_abs(__pyx_t_double_complex z) {
#if HAVE_HYPOT
        return hypot(z.real, z.imag);
#else
        return sqrt(z.real*z.real + z.imag*z.imag);
#endif
    }
*/
#endif
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__integrate___odepack", module__odepack::typeid)];
};
