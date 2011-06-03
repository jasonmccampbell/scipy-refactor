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
  dict["__module__"] = "scipy.integrate._quadpack";
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
#define __PYX_HAVE_API__scipy__integrate___quadpack
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_descriptor.h"
#include "npy_arrayobject.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_iterators.h"
#include "npy_ironpython.h"
#include "__quadpack.h"
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

typedef signed char __pyx_t_5numpy_npy_byte;

typedef signed short __pyx_t_5numpy_npy_short;

typedef signed int __pyx_t_5numpy_npy_int;

typedef signed long __pyx_t_5numpy_npy_long;

typedef signed PY_LONG_LONG __pyx_t_5numpy_npy_longlong;

typedef unsigned char __pyx_t_5numpy_npy_ubyte;

typedef unsigned short __pyx_t_5numpy_npy_ushort;

typedef unsigned int __pyx_t_5numpy_npy_uint;

typedef unsigned long __pyx_t_5numpy_npy_ulong;

typedef unsigned PY_LONG_LONG __pyx_t_5numpy_npy_ulonglong;

typedef float __pyx_t_5numpy_npy_float;

typedef double __pyx_t_5numpy_npy_double;

typedef long double __pyx_t_5numpy_npy_longdouble;

typedef double __pyx_t_5numpy_double_t;

typedef int __pyx_t_5numpy_npy_intp;

typedef unsigned int __pyx_t_5numpy_npy_uintp;

typedef __pyx_t_5numpy_npy_byte __pyx_t_5numpy_npy_int8;

typedef __pyx_t_5numpy_npy_short __pyx_t_5numpy_npy_int16;

typedef __pyx_t_5numpy_npy_int __pyx_t_5numpy_npy_int32;

typedef __pyx_t_5numpy_npy_longlong __pyx_t_5numpy_npy_int64;

typedef __pyx_t_5numpy_npy_ubyte __pyx_t_5numpy_npy_uint8;

typedef __pyx_t_5numpy_npy_ushort __pyx_t_5numpy_npy_uint16;

typedef __pyx_t_5numpy_npy_uint __pyx_t_5numpy_npy_uint32;

typedef __pyx_t_5numpy_npy_ulonglong __pyx_t_5numpy_npy_uint64;

typedef __pyx_t_5numpy_npy_float __pyx_t_5numpy_npy_float32;

typedef __pyx_t_5numpy_npy_double __pyx_t_5numpy_npy_float64;

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

typedef void (*__pyx_t_5numpy_PyArray_CopySwapFunc)(void *, void *, int, NpyArray *);

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":128
 * 
 * 
 * cdef qagie(dummy, fcn, double bound, int inf, object extra_args=None, int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):             # <<<<<<<<<<<<<<
 *     """[result,abserr,infodict,ier] = _qagie(fun, bound, inf, | args, full_output, epsabs, epsrel, limit)"""
 *     cdef np.ndarray ap_alist, ap_iord
 */

public ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_qagie {
  int __pyx_n;
  System::Object^ extra_args;
  int full_output;
  double epsabs;
  double epsrel;
  int limit;
};

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":173
 * 
 * 
 * cdef quadpack_qagpe(dummy, fcn, double a, double b, o_points, extra_args=None, int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):             # <<<<<<<<<<<<<<
 *     """[result,abserr,infodict,ier] = _qagpe(fun, a, b, points, | args, full_output, epsabs, epsrel, limit)"""
 *     cdef np.ndarray ap_alist, ap_iord, ap_blist, ap_elist
 */

public ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_quadpack_qagpe {
  int __pyx_n;
  System::Object^ extra_args;
  int full_output;
  double epsabs;
  double epsrel;
  int limit;
};

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":238
 * 
 * 
 * cdef quadpack_qawoe(dummpy, fcn, double a, double b, double omega, int integr, extra_args=None,             # <<<<<<<<<<<<<<
 *                     int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50,
 *                     int maxp1=50, int icall=1, int momcom=50, o_chebmo=None):
 */

public ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_quadpack_qawoe {
  int __pyx_n;
  System::Object^ extra_args;
  int full_output;
  double epsabs;
  double epsrel;
  int limit;
  int maxp1;
  int icall;
  int momcom;
  System::Object^ o_chebmo;
};
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
static CYTHON_INLINE NumpyDotNet::dtype^ NpyArray_FindArrayType_2args(System::Object^, NumpyDotNet::dtype^); /*proto*/
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_DescrFromType(int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5numpy_npy_intp *, int, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_EMPTY(int, __pyx_t_5numpy_npy_intp *, int, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Empty(int, __pyx_t_5numpy_npy_intp *, NumpyDotNet::dtype^, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_SimpleNew(int, __pyx_t_5numpy_npy_intp *, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_SimpleNewFromData(int, __pyx_t_5numpy_npy_intp *, int, void *); /*proto*/
static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int); /*proto*/
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_DESCR(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE int PyArray_ITEMSIZE(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Return(System::Object^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_DIM(NumpyDotNet::ndarray^, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_NDIM(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_npy_intp *PyArray_STRIDES(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_npy_intp PyArray_NBYTES(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE NpyArray *PyArray_ARRAY(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE int PyArray_TYPE(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE void *PyArray_Zero(System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ NpyArray_Return(NpyArray *); /*proto*/
static CYTHON_INLINE int PyDataType_TYPE_NUM(NumpyDotNet::dtype^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_CopyFromObject(System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_ContiguousFromObject(System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_CheckFromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Cast(System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE void import_array(void); /*proto*/
static CYTHON_INLINE System::Object^ PyNumber_Check(System::Object^); /*proto*/
static CYTHON_INLINE NpyArrayIterObject *PyArray_IterNew(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE NpyArrayIterObject *PyArray_IterAllButAxis(NumpyDotNet::ndarray^, int *); /*proto*/
static CYTHON_INLINE void PyArray_ITER_NEXT(NpyArrayIterObject *); /*proto*/
static CYTHON_INLINE void PyArray_ITER_RESET(NpyArrayIterObject *); /*proto*/
static CYTHON_INLINE void *PyArray_ITER_DATA(NpyArrayIterObject *); /*proto*/
static CYTHON_INLINE NpyArrayNeighborhoodIterObject *PyArray_NeighborhoodIterNew(NpyArrayIterObject *, __pyx_t_5numpy_npy_intp *, int, void *, npy_free_func); /*proto*/
static CYTHON_INLINE int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject *); /*proto*/
static CYTHON_INLINE int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject *); /*proto*/
static CYTHON_INLINE NumpyDotNet::ndarray^ NpyIter_ARRAY(NpyArrayIterObject *); /*proto*/
/* Module declarations from scipy.integrate._quadpack */
static System::Object^ QUAD_INIT_FUNC(System::Object^, System::Object^); /*proto*/
static System::Object^ QUAD_RESTORE_FUNC(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate double __pyx_delegate_t_5scipy_9integrate_9_quadpack_quad_function(double *);
static double quad_function(double *); /*proto*/
static System::Object^ qagie(System::Object^, System::Object^, double, int, ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_qagie ^__pyx_optional_args); /*proto*/
static System::Object^ quadpack_qagpe(System::Object^, System::Object^, double, double, System::Object^, ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_quadpack_qagpe ^__pyx_optional_args); /*proto*/
static System::Object^ quadpack_qawoe(System::Object^, System::Object^, double, double, double, int, ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_quadpack_qawoe ^__pyx_optional_args); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.integrate._quadpack"

/* Implementation of scipy.integrate._quadpack */
namespace clr__quadpack {
  public ref class module__quadpack sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_36_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_36_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_37_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_38_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_38_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_39_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_61_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_61_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_62_22;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_64_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_66_28;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_71_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_71_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_71_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_71_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_71_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_71_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyPyArray_ContiguousFromObject_192_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call4_192_53;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_262_36;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_323_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_323_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_325_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_325_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_331_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_331_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_333_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_333_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_339_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_339_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_341_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_341_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_356_53;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_356_53;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_359_48;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_359_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_362_48;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_362_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_365_69;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_365_69;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_368_52;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_368_52;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_375_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ArrayReturn_375_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_375_42;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_378_47;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_378_47;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_381_14;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_384_48;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_384_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_387_51;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_387_51;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_390_51;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_390_51;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_393_34;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_393_34;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_396_48;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_396_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_401_40;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Zero_401_49;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_401_54;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_401_54;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Dtype_409_62;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_409_62;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_414_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_FromAny_414_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_414_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_423_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_423_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ior_424_14;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_425_77;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_428_78;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_434_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_CheckFromAny_434_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_434_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_438_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_438_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyCoreApi_443_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_CastToType_443_33;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_443_100;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_443_44;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_451_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_451_45;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ScalarGeneric_451_73;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_451_58;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_454_51;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_454_51;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_457_58;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_457_58;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_1;
static int^ __pyx_int_2;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":30
 * __version__ = 1.13
 * 
 * cdef QUAD_INIT_FUNC(fun, arg):             # <<<<<<<<<<<<<<
 *     global quadpack_python_function
 *     global quadpack_extra_arguments
 */

static  System::Object^ QUAD_INIT_FUNC(System::Object^ __pyx_v_fun, System::Object^ __pyx_v_arg) {
  System::Object^ __pyx_v_prev_values;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_prev_values = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":34
 *     global quadpack_extra_arguments
 * 
 *     prev_values = (quadpack_python_function, quadpack_extra_arguments)             # <<<<<<<<<<<<<<
 * 
 *     if not isinstance(arg, tuple):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "quadpack_python_function");
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "quadpack_extra_arguments");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_3 != nullptr && dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_prev_values = ((System::Object^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":36
 *     prev_values = (quadpack_python_function, quadpack_extra_arguments)
 * 
 *     if not isinstance(arg, tuple):             # <<<<<<<<<<<<<<
 *         raise quadpack_error("Exra arguments must be in a tuple")
 *     if not callable(fun):
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "tuple");
  __pyx_t_1 = __site_call2_36_21->Target(__site_call2_36_21, __pyx_context, __pyx_t_3, __pyx_v_arg, ((System::Object^)__pyx_t_2));
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_36_21->Target(__site_istrue_36_21, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":37
 * 
 *     if not isinstance(arg, tuple):
 *         raise quadpack_error("Exra arguments must be in a tuple")             # <<<<<<<<<<<<<<
 *     if not callable(fun):
 *         raise quadpack_error("First argument must be a callback function")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "quadpack_error");
    __pyx_t_2 = __site_call1_37_28->Target(__site_call1_37_28, __pyx_context, __pyx_t_1, ((System::Object^)"Exra arguments must be in a tuple"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":38
 *     if not isinstance(arg, tuple):
 *         raise quadpack_error("Exra arguments must be in a tuple")
 *     if not callable(fun):             # <<<<<<<<<<<<<<
 *         raise quadpack_error("First argument must be a callback function")
 * 
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "callable");
  __pyx_t_1 = __site_call1_38_19->Target(__site_call1_38_19, __pyx_context, __pyx_t_2, __pyx_v_fun);
  __pyx_t_2 = nullptr;
  __pyx_t_5 = __site_istrue_38_19->Target(__site_istrue_38_19, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = (!__pyx_t_5);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":39
 *         raise quadpack_error("Exra arguments must be in a tuple")
 *     if not callable(fun):
 *         raise quadpack_error("First argument must be a callback function")             # <<<<<<<<<<<<<<
 * 
 *     quadpack_python_function = fun
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "quadpack_error");
    __pyx_t_2 = __site_call1_39_28->Target(__site_call1_39_28, __pyx_context, __pyx_t_1, ((System::Object^)"First argument must be a callback function"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":41
 *         raise quadpack_error("First argument must be a callback function")
 * 
 *     quadpack_python_function = fun             # <<<<<<<<<<<<<<
 *     quadpack_extra_arguments = arg
 *     return prev_values
 */
  PythonOps::SetGlobal(__pyx_context, "quadpack_python_function", __pyx_v_fun);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":42
 * 
 *     quadpack_python_function = fun
 *     quadpack_extra_arguments = arg             # <<<<<<<<<<<<<<
 *     return prev_values
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "quadpack_extra_arguments", __pyx_v_arg);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":43
 *     quadpack_python_function = fun
 *     quadpack_extra_arguments = arg
 *     return prev_values             # <<<<<<<<<<<<<<
 * 
 * cdef QUAD_RESTORE_FUNC(prev_values):
 */
  __pyx_r = ((System::Object^)__pyx_v_prev_values);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":45
 *     return prev_values
 * 
 * cdef QUAD_RESTORE_FUNC(prev_values):             # <<<<<<<<<<<<<<
 *     global quadpack_python_function
 *     global quadpack_extra_arguments
 */

static  System::Object^ QUAD_RESTORE_FUNC(System::Object^ __pyx_v_prev_values) {
  System::Object^ __pyx_v_quadpack_pythonfunction;
  System::Object^ __pyx_r = nullptr;
  array<System::Object^>^ __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_quadpack_pythonfunction = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":49
 *     global quadpack_extra_arguments
 * 
 *     quadpack_pythonfunction, quadpack_extra_arguments = prev_values             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_prev_values, 2)));
  __pyx_t_2 = __pyx_t_1[0];
  __pyx_t_3 = __pyx_t_1[1];
  __pyx_t_1 = nullptr;
  __pyx_v_quadpack_pythonfunction = __pyx_t_2;
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "quadpack_extra_arguments", __pyx_t_3);
  __pyx_t_3 = nullptr;

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":52
 * 
 * 
 * cdef double quad_function(double *x):             # <<<<<<<<<<<<<<
 *     global quadpack_python_function
 *     global quadpack_extra_arguments
 */

static double (*__pyx_function_pointer_quad_function)(double *);
typedef double (*__pyx_fp_t_quad_function)(double *);
static __pyx_delegate_t_5scipy_9integrate_9_quadpack_quad_function^ __pyx_delegate_val_quad_function;
static  double quad_function(double *__pyx_v_x) {
  double __pyx_v_d_result;
  System::Object^ __pyx_v_arglist;
  System::Object^ __pyx_v_result;
  double __pyx_r;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  double __pyx_t_6;
  __pyx_v_arglist = nullptr;
  __pyx_v_result = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":60
 *     # Call function object --- stored as a global variable.  Extra
 *     #        arguments are in another global variable.
 *     try:             # <<<<<<<<<<<<<<
 *         arglist = (float(x[0]), ) + quadpack_extra_arguments
 *         result = apply(quadpack_python_function, arglist)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":61
 *     #        arguments are in another global variable.
 *     try:
 *         arglist = (float(x[0]), ) + quadpack_extra_arguments             # <<<<<<<<<<<<<<
 *         result = apply(quadpack_python_function, arglist)
 * 
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "float");
    __pyx_t_4 = (__pyx_v_x[0]);
    __pyx_t_5 = __site_call1_61_24->Target(__site_call1_61_24, __pyx_context, ((System::Object^)__pyx_t_3), __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_5});
    __pyx_t_5 = nullptr;
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "quadpack_extra_arguments");
    __pyx_t_3 = __site_op_add_61_34->Target(__site_op_add_61_34, __pyx_t_4, __pyx_t_5);
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_v_arglist = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":62
 *     try:
 *         arglist = (float(x[0]), ) + quadpack_extra_arguments
 *         result = apply(quadpack_python_function, arglist)             # <<<<<<<<<<<<<<
 * 
 *         d_result = result
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "apply");
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "quadpack_python_function");
    __pyx_t_4 = __site_call2_62_22->Target(__site_call2_62_22, __pyx_context, __pyx_t_3, __pyx_t_5, __pyx_v_arglist);
    __pyx_t_3 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_v_result = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":64
 *         result = apply(quadpack_python_function, arglist)
 * 
 *         d_result = result             # <<<<<<<<<<<<<<
 *     except Exception:
 *         raise quadpack_error("Supplied function does not return a valid float")
 */
    __pyx_t_6 = __site_cvt_cvt_double_64_25->Target(__site_cvt_cvt_double_64_25, __pyx_v_result);
    __pyx_v_d_result = __pyx_t_6;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":65
 * 
 *         d_result = result
 *     except Exception:             # <<<<<<<<<<<<<<
 *         raise quadpack_error("Supplied function does not return a valid float")
 * 
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "Exception");
    System::Object^ __pyx_lt_7;
    __pyx_lt_7 = PythonOps::CheckException(__pyx_context, __pyx_lt_2, __pyx_t_4);
    __pyx_t_4 = nullptr;
    if (__pyx_lt_7 != nullptr) {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._quadpack.quad_function");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":66
 *         d_result = result
 *     except Exception:
 *         raise quadpack_error("Supplied function does not return a valid float")             # <<<<<<<<<<<<<<
 * 
 *     return d_result
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "quadpack_error");
      __pyx_t_5 = __site_call1_66_28->Target(__site_call1_66_28, __pyx_context, __pyx_t_4, ((System::Object^)"Supplied function does not return a valid float"));
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
      __pyx_t_5 = nullptr;
    }
    else {
      // XXX we should set traceback here
      throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_1);
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":68
 *         raise quadpack_error("Supplied function does not return a valid float")
 * 
 *     return d_result             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_d_result;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":71
 * 
 * 
 * def quadpack_qagse(dummy, fcn, double a, double b, extra_args=None, int full_output=0,             # <<<<<<<<<<<<<<
 *                    double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):
 *     """[result,abserr,infodict,ier] = _qagse(fun, a, b, | args, full_output, epsabs, epsrel, limit)"""
 */

static System::Object^ quadpack_qagse(System::Object^ dummy, System::Object^ fcn, System::Object^ a, System::Object^ b, [InteropServices::Optional]System::Object^ extra_args, [InteropServices::Optional]System::Object^ full_output, [InteropServices::Optional]System::Object^ epsabs, [InteropServices::Optional]System::Object^ epsrel, [InteropServices::Optional]System::Object^ limit) {
  System::Object^ __pyx_v_dummy = nullptr;
  System::Object^ __pyx_v_fcn = nullptr;
  double __pyx_v_a;
  double __pyx_v_b;
  System::Object^ __pyx_v_extra_args = nullptr;
  int __pyx_v_full_output;
  double __pyx_v_epsabs;
  double __pyx_v_epsrel;
  int __pyx_v_limit;
  NumpyDotNet::ndarray^ __pyx_v_ap_alist;
  NumpyDotNet::ndarray^ __pyx_v_ap_iord;
  NumpyDotNet::ndarray^ __pyx_v_ap_blist;
  NumpyDotNet::ndarray^ __pyx_v_ap_elist;
  NumpyDotNet::ndarray^ __pyx_v_ap_rlist;
  __pyx_t_5numpy_npy_intp __pyx_v_limit_shape[1];
  int __pyx_v_neval;
  int __pyx_v_ier;
  int __pyx_v_last;
  int *__pyx_v_iord;
  double __pyx_v_result;
  double __pyx_v_abserr;
  double *__pyx_v_alist;
  double *__pyx_v_blist;
  double *__pyx_v_rlist;
  double *__pyx_v_elist;
  System::Object^ __pyx_v_savedValues;
  System::Object^ __pyx_v_dict;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_8;
  int __pyx_t_9;
  int __pyx_t_10;
  int __pyx_t_11;
  int __pyx_t_12;
  PythonDictionary^ __pyx_t_14;
  __pyx_v_dummy = dummy;
  __pyx_v_fcn = fcn;
  __pyx_v_a = __site_cvt_cvt_double_71_0->Target(__site_cvt_cvt_double_71_0, a);
  __pyx_v_b = __site_cvt_cvt_double_71_0_1->Target(__site_cvt_cvt_double_71_0_1, b);
  if (dynamic_cast<System::Reflection::Missing^>(extra_args) == nullptr) {
    __pyx_v_extra_args = extra_args;
  } else {
    __pyx_v_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(full_output) == nullptr) {
    __pyx_v_full_output = __site_cvt_cvt_int_71_0->Target(__site_cvt_cvt_int_71_0, full_output);
  } else {
    __pyx_v_full_output = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(epsabs) == nullptr) {
    __pyx_v_epsabs = __site_cvt_cvt_double_71_0_2->Target(__site_cvt_cvt_double_71_0_2, epsabs);
  } else {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":72
 * 
 * def quadpack_qagse(dummy, fcn, double a, double b, extra_args=None, int full_output=0,
 *                    double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):             # <<<<<<<<<<<<<<
 *     """[result,abserr,infodict,ier] = _qagse(fun, a, b, | args, full_output, epsabs, epsrel, limit)"""
 * 
 */
    __pyx_v_epsabs = ((double)1.49e-8);
  }
  if (dynamic_cast<System::Reflection::Missing^>(epsrel) == nullptr) {
    __pyx_v_epsrel = __site_cvt_cvt_double_71_0_3->Target(__site_cvt_cvt_double_71_0_3, epsrel);
  } else {
    __pyx_v_epsrel = ((double)1.49e-8);
  }
  if (dynamic_cast<System::Reflection::Missing^>(limit) == nullptr) {
    __pyx_v_limit = __site_cvt_cvt_int_71_0_1->Target(__site_cvt_cvt_int_71_0_1, limit);
  } else {
    __pyx_v_limit = ((int)50);
  }
  __pyx_v_ap_alist = nullptr;
  __pyx_v_ap_iord = nullptr;
  __pyx_v_ap_blist = nullptr;
  __pyx_v_ap_elist = nullptr;
  __pyx_v_ap_rlist = nullptr;
  __pyx_v_savedValues = nullptr;
  __pyx_v_dict = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":80
 * 
 *     cdef np.npy_intp limit_shape[1]
 *     cdef int neval=0, ier=6, last=0, *iord             # <<<<<<<<<<<<<<
 *     cdef double result=0.0, abserr=0.0
 *     cdef double *alist, *blist, *rlist, *elist
 */
  __pyx_v_neval = 0;
  __pyx_v_ier = 6;
  __pyx_v_last = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":81
 *     cdef np.npy_intp limit_shape[1]
 *     cdef int neval=0, ier=6, last=0, *iord
 *     cdef double result=0.0, abserr=0.0             # <<<<<<<<<<<<<<
 *     cdef double *alist, *blist, *rlist, *elist
 * 
 */
  __pyx_v_result = 0.0;
  __pyx_v_abserr = 0.0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":84
 *     cdef double *alist, *blist, *rlist, *elist
 * 
 *     limit_shape[0] = limit             # <<<<<<<<<<<<<<
 * 
 *     if limit < 1:
 */
  (__pyx_v_limit_shape[0]) = __pyx_v_limit;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":86
 *     limit_shape[0] = limit
 * 
 *     if limit < 1:             # <<<<<<<<<<<<<<
 *         return result, abserr, ier
 * 
 */
  __pyx_t_1 = (__pyx_v_limit < 1);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":87
 * 
 *     if limit < 1:
 *         return result, abserr, ier             # <<<<<<<<<<<<<<
 * 
 *     savedValues = QUAD_INIT_FUNC(fcn,extra_args)
 */
    __pyx_t_2 = __pyx_v_result;
    __pyx_t_3 = __pyx_v_abserr;
    __pyx_t_4 = __pyx_v_ier;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3, __pyx_t_4});
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":89
 *         return result, abserr, ier
 * 
 *     savedValues = QUAD_INIT_FUNC(fcn,extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         # Setup iwork and work arrays
 */
  __pyx_t_5 = QUAD_INIT_FUNC(__pyx_v_fcn, __pyx_v_extra_args); 
  __pyx_v_savedValues = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":90
 * 
 *     savedValues = QUAD_INIT_FUNC(fcn,extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         # Setup iwork and work arrays
 *         ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 */
  try {
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":92
 *     try:
 *         # Setup iwork and work arrays
 *         ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_iord = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":93
 *         # Setup iwork and work arrays
 *         ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 *         ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_alist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":94
 *         ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 *         ap_elist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_blist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":95
 *         ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 *         ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_elist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 * 
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_rlist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":96
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 *         ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 *         ap_elist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 * 
 *         if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_elist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":98
 *         ap_elist = np.PyArray_EMPTY(1, limit_shape, np.NPY_DOUBLE, False)
 * 
 *         if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
      __pyx_t_1 = (((System::Object^)__pyx_v_ap_iord) == nullptr);
      if (!__pyx_t_1) {
        __pyx_t_8 = (((System::Object^)__pyx_v_ap_alist) == nullptr);
        if (!__pyx_t_8) {
          __pyx_t_9 = (((System::Object^)__pyx_v_ap_blist) == nullptr);
          if (!__pyx_t_9) {
            __pyx_t_10 = (((System::Object^)__pyx_v_ap_rlist) == nullptr);
            if (!__pyx_t_10) {
              __pyx_t_11 = (((System::Object^)__pyx_v_ap_elist) == nullptr);
              __pyx_t_12 = __pyx_t_11;
            } else {
              __pyx_t_12 = __pyx_t_10;
            }
            __pyx_t_10 = __pyx_t_12;
          } else {
            __pyx_t_10 = __pyx_t_9;
          }
          __pyx_t_9 = __pyx_t_10;
        } else {
          __pyx_t_9 = __pyx_t_8;
        }
        __pyx_t_8 = __pyx_t_9;
      } else {
        __pyx_t_8 = __pyx_t_1;
      }
      if (__pyx_t_8) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":99
 * 
 *         if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:
 *             return None             # <<<<<<<<<<<<<<
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 */
        __pyx_r = nullptr;
        goto __pyx_L0;
        goto __pyx_L6;
      }
      __pyx_L6:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":101
 *             return None
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)             # <<<<<<<<<<<<<<
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 */
      __pyx_v_iord = ((int *)PyArray_DATA(__pyx_v_ap_iord));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":102
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 *         alist = <double *>np.PyArray_DATA(ap_alist)             # <<<<<<<<<<<<<<
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 */
      __pyx_v_alist = ((double *)PyArray_DATA(__pyx_v_ap_alist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":103
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)             # <<<<<<<<<<<<<<
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 */
      __pyx_v_blist = ((double *)PyArray_DATA(__pyx_v_ap_blist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":104
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)             # <<<<<<<<<<<<<<
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 * 
 */
      __pyx_v_rlist = ((double *)PyArray_DATA(__pyx_v_ap_rlist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":105
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 *         elist = <double *>np.PyArray_DATA(ap_elist)             # <<<<<<<<<<<<<<
 * 
 *         DQAGSE(<void *>quad_function, &a, &b, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
 */
      __pyx_v_elist = ((double *)PyArray_DATA(__pyx_v_ap_elist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":107
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 * 
 *         DQAGSE(<void *>quad_function, &a, &b, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)             # <<<<<<<<<<<<<<
 *     except Exception:
 *         ier = 80
 */
      DQAGSE(((void *)__pyx_function_pointer_quad_function), (&__pyx_v_a), (&__pyx_v_b), (&__pyx_v_epsabs), (&__pyx_v_epsrel), (&__pyx_v_limit), (&__pyx_v_result), (&__pyx_v_abserr), (&__pyx_v_neval), (&__pyx_v_ier), __pyx_v_alist, __pyx_v_blist, __pyx_v_rlist, __pyx_v_elist, __pyx_v_iord, (&__pyx_v_last));
    } catch (System::Exception^ __pyx_lt_6) {
      System::Object^ __pyx_lt_7 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_6);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":108
 * 
 *         DQAGSE(<void *>quad_function, &a, &b, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
 *     except Exception:             # <<<<<<<<<<<<<<
 *         ier = 80
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "Exception");
      System::Object^ __pyx_lt_13;
      __pyx_lt_13 = PythonOps::CheckException(__pyx_context, __pyx_lt_7, __pyx_t_5);
      __pyx_t_5 = nullptr;
      if (__pyx_lt_13 != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._quadpack.quadpack_qagse");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_6);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":109
 *         DQAGSE(<void *>quad_function, &a, &b, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
 *     except Exception:
 *         ier = 80             # <<<<<<<<<<<<<<
 * 
 *     finally:
 */
        __pyx_v_ier = 80;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_6);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":112
 * 
 *     finally:
 *         QUAD_RESTORE_FUNC(savedValues)             # <<<<<<<<<<<<<<
 * 
 *     if full_output:
 */
  finally {
    __pyx_t_5 = QUAD_RESTORE_FUNC(__pyx_v_savedValues); 
    __pyx_t_5 = nullptr;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":114
 *         QUAD_RESTORE_FUNC(savedValues)
 * 
 *     if full_output:             # <<<<<<<<<<<<<<
 *         dict = { "neval" : neval,
 *                  "last" : last,
 */
  if (__pyx_v_full_output) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":115
 * 
 *     if full_output:
 *         dict = { "neval" : neval,             # <<<<<<<<<<<<<<
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),
 */
    __pyx_t_14 = PythonOps::MakeEmptyDict();
    __pyx_t_5 = __pyx_v_neval;
    __pyx_t_14[((System::Object^)"neval")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":116
 *     if full_output:
 *         dict = { "neval" : neval,
 *                  "last" : last,             # <<<<<<<<<<<<<<
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),
 */
    __pyx_t_5 = __pyx_v_last;
    __pyx_t_14[((System::Object^)"last")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":117
 *         dict = { "neval" : neval,
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),             # <<<<<<<<<<<<<<
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_iord)); 
    __pyx_t_14[((System::Object^)"iord")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":118
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),             # <<<<<<<<<<<<<<
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_alist)); 
    __pyx_t_14[((System::Object^)"alist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":119
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),             # <<<<<<<<<<<<<<
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist) }
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_blist)); 
    __pyx_t_14[((System::Object^)"blist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":120
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),             # <<<<<<<<<<<<<<
 *                  "elist" : np.PyArray_Return(ap_elist) }
 *         return (result, abserr, dict,ier)
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_rlist)); 
    __pyx_t_14[((System::Object^)"rlist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":121
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist) }             # <<<<<<<<<<<<<<
 *         return (result, abserr, dict,ier)
 *     else:
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_elist)); 
    __pyx_t_14[((System::Object^)"elist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;
    __pyx_v_dict = __pyx_t_14;
    __pyx_t_14 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":122
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist) }
 *         return (result, abserr, dict,ier)             # <<<<<<<<<<<<<<
 *     else:
 *         return (result, abserr, ier)
 */
    __pyx_t_5 = __pyx_v_result;
    __pyx_t_4 = __pyx_v_abserr;
    __pyx_t_3 = __pyx_v_ier;
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4, ((System::Object^)__pyx_v_dict), __pyx_t_3});
    __pyx_t_5 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
    goto __pyx_L7;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":124
 *         return (result, abserr, dict,ier)
 *     else:
 *         return (result, abserr, ier)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_t_2 = __pyx_v_result;
    __pyx_t_3 = __pyx_v_abserr;
    __pyx_t_4 = __pyx_v_ier;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3, __pyx_t_4});
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L7:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":128
 * 
 * 
 * cdef qagie(dummy, fcn, double bound, int inf, object extra_args=None, int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):             # <<<<<<<<<<<<<<
 *     """[result,abserr,infodict,ier] = _qagie(fun, bound, inf, | args, full_output, epsabs, epsrel, limit)"""
 *     cdef np.ndarray ap_alist, ap_iord
 */

static  System::Object^ qagie(System::Object^ __pyx_v_dummy, System::Object^ __pyx_v_fcn, double __pyx_v_bound, int __pyx_v_inf, ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_qagie ^__pyx_optional_args) {
  System::Object^ __pyx_v_extra_args = ((System::Object^)nullptr);
  int __pyx_v_full_output = ((int)0);
  double __pyx_v_epsabs = ((double)1.49e-8);
  double __pyx_v_epsrel = ((double)1.49e-8);
  int __pyx_v_limit = ((int)50);
  NumpyDotNet::ndarray^ __pyx_v_ap_alist;
  NumpyDotNet::ndarray^ __pyx_v_ap_iord;
  NumpyDotNet::ndarray^ __pyx_v_ap_blist;
  NumpyDotNet::ndarray^ __pyx_v_ap_elist;
  NumpyDotNet::ndarray^ __pyx_v_ap_rlist;
  __pyx_t_5numpy_npy_intp __pyx_v_limit_shape[1];
  int __pyx_v_neval;
  int __pyx_v_ier;
  int __pyx_v_last;
  int *__pyx_v_iord;
  double __pyx_v_result;
  double __pyx_v_abserr;
  double *__pyx_v_alist;
  double *__pyx_v_blist;
  double *__pyx_v_rlist;
  double *__pyx_v_elist;
  System::Object^ __pyx_v_savedSettings;
  System::Object^ __pyx_v_ap_e_list;
  System::Object^ __pyx_v_dict;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_8;
  int __pyx_t_9;
  int __pyx_t_10;
  int __pyx_t_11;
  int __pyx_t_12;
  PythonDictionary^ __pyx_t_14;
  if (__pyx_optional_args) {
    if (__pyx_optional_args->__pyx_n > 0) {
      __pyx_v_extra_args = __pyx_optional_args->extra_args;
      if (__pyx_optional_args->__pyx_n > 1) {
        __pyx_v_full_output = __pyx_optional_args->full_output;
        if (__pyx_optional_args->__pyx_n > 2) {
          __pyx_v_epsabs = __pyx_optional_args->epsabs;
          if (__pyx_optional_args->__pyx_n > 3) {
            __pyx_v_epsrel = __pyx_optional_args->epsrel;
            if (__pyx_optional_args->__pyx_n > 4) {
              __pyx_v_limit = __pyx_optional_args->limit;
            }
          }
        }
      }
    }
  }
  __pyx_v_ap_alist = nullptr;
  __pyx_v_ap_iord = nullptr;
  __pyx_v_ap_blist = nullptr;
  __pyx_v_ap_elist = nullptr;
  __pyx_v_ap_rlist = nullptr;
  __pyx_v_savedSettings = nullptr;
  __pyx_v_ap_e_list = nullptr;
  __pyx_v_dict = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":134
 * 
 *     cdef np.npy_intp limit_shape[1]
 *     cdef int      neval=0, ier=6, last=0, *iord             # <<<<<<<<<<<<<<
 *     cdef double   result=0.0, abserr=0.0
 *     cdef double   *alist, *blist, *rlist, *elist
 */
  __pyx_v_neval = 0;
  __pyx_v_ier = 6;
  __pyx_v_last = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":135
 *     cdef np.npy_intp limit_shape[1]
 *     cdef int      neval=0, ier=6, last=0, *iord
 *     cdef double   result=0.0, abserr=0.0             # <<<<<<<<<<<<<<
 *     cdef double   *alist, *blist, *rlist, *elist
 * 
 */
  __pyx_v_result = 0.0;
  __pyx_v_abserr = 0.0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":139
 * 
 *     # Need to check that limit is bigger than 1
 *     if limit < 1:             # <<<<<<<<<<<<<<
 *         return (result, abserr, ier)
 * 
 */
  __pyx_t_1 = (__pyx_v_limit < 1);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":140
 *     # Need to check that limit is bigger than 1
 *     if limit < 1:
 *         return (result, abserr, ier)             # <<<<<<<<<<<<<<
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
 */
    __pyx_t_2 = __pyx_v_result;
    __pyx_t_3 = __pyx_v_abserr;
    __pyx_t_4 = __pyx_v_ier;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3, __pyx_t_4});
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":142
 *         return (result, abserr, ier)
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         # Setup iwork and work arrays
 */
  __pyx_t_5 = QUAD_INIT_FUNC(__pyx_v_fcn, __pyx_v_extra_args); 
  __pyx_v_savedSettings = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":143
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         # Setup iwork and work arrays
 *         ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 */
  try {
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":145
 *     try:
 *         # Setup iwork and work arrays
 *         ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_iord = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":146
 *         # Setup iwork and work arrays
 *         ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_alist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":147
 *         ap_iord = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_e_list = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_blist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":148
 *         ap_alist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ap_e_list = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 * 
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_rlist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":149
 *         ap_blist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_rlist = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 *         ap_e_list = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)             # <<<<<<<<<<<<<<
 * 
 *         if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      __pyx_v_ap_e_list = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":151
 *         ap_e_list = np.PyArray_EMPTY(1, limit_shape, np.NPY_INT, False)
 * 
 *         if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
      __pyx_t_1 = (((System::Object^)__pyx_v_ap_iord) == nullptr);
      if (!__pyx_t_1) {
        __pyx_t_8 = (((System::Object^)__pyx_v_ap_alist) == nullptr);
        if (!__pyx_t_8) {
          __pyx_t_9 = (((System::Object^)__pyx_v_ap_blist) == nullptr);
          if (!__pyx_t_9) {
            __pyx_t_10 = (((System::Object^)__pyx_v_ap_rlist) == nullptr);
            if (!__pyx_t_10) {
              __pyx_t_11 = (((System::Object^)__pyx_v_ap_elist) == nullptr);
              __pyx_t_12 = __pyx_t_11;
            } else {
              __pyx_t_12 = __pyx_t_10;
            }
            __pyx_t_10 = __pyx_t_12;
          } else {
            __pyx_t_10 = __pyx_t_9;
          }
          __pyx_t_9 = __pyx_t_10;
        } else {
          __pyx_t_9 = __pyx_t_8;
        }
        __pyx_t_8 = __pyx_t_9;
      } else {
        __pyx_t_8 = __pyx_t_1;
      }
      if (__pyx_t_8) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":152
 * 
 *         if ap_iord is None or ap_alist is None or ap_blist is None or ap_rlist is None or ap_elist is None:
 *             return None             # <<<<<<<<<<<<<<
 * 
 *         DQAGIE(<void *>quad_function, &bound, &inf, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
 */
        __pyx_r = nullptr;
        goto __pyx_L0;
        goto __pyx_L4;
      }
      __pyx_L4:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":154
 *             return None
 * 
 *         DQAGIE(<void *>quad_function, &bound, &inf, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)             # <<<<<<<<<<<<<<
 *     except Exception:
 *         ier = 80
 */
      DQAGIE(((void *)__pyx_function_pointer_quad_function), (&__pyx_v_bound), (&__pyx_v_inf), (&__pyx_v_epsabs), (&__pyx_v_epsrel), (&__pyx_v_limit), (&__pyx_v_result), (&__pyx_v_abserr), (&__pyx_v_neval), (&__pyx_v_ier), __pyx_v_alist, __pyx_v_blist, __pyx_v_rlist, __pyx_v_elist, __pyx_v_iord, (&__pyx_v_last));
    } catch (System::Exception^ __pyx_lt_6) {
      System::Object^ __pyx_lt_7 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_6);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":155
 * 
 *         DQAGIE(<void *>quad_function, &bound, &inf, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
 *     except Exception:             # <<<<<<<<<<<<<<
 *         ier = 80
 *     finally:
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "Exception");
      System::Object^ __pyx_lt_13;
      __pyx_lt_13 = PythonOps::CheckException(__pyx_context, __pyx_lt_7, __pyx_t_5);
      __pyx_t_5 = nullptr;
      if (__pyx_lt_13 != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._quadpack.qagie");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_6);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":156
 *         DQAGIE(<void *>quad_function, &bound, &inf, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, iord, &last)
 *     except Exception:
 *         ier = 80             # <<<<<<<<<<<<<<
 *     finally:
 *         QUAD_RESTORE_FUNC(savedSettings)
 */
        __pyx_v_ier = 80;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_6);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":158
 *         ier = 80
 *     finally:
 *         QUAD_RESTORE_FUNC(savedSettings)             # <<<<<<<<<<<<<<
 * 
 *     if full_output:
 */
  finally {
    __pyx_t_5 = QUAD_RESTORE_FUNC(__pyx_v_savedSettings); 
    __pyx_t_5 = nullptr;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":160
 *         QUAD_RESTORE_FUNC(savedSettings)
 * 
 *     if full_output:             # <<<<<<<<<<<<<<
 *         dict = { "neval" : neval,
 *                  "last" : last,
 */
  if (__pyx_v_full_output) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":161
 * 
 *     if full_output:
 *         dict = { "neval" : neval,             # <<<<<<<<<<<<<<
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),
 */
    __pyx_t_14 = PythonOps::MakeEmptyDict();
    __pyx_t_5 = __pyx_v_neval;
    __pyx_t_14[((System::Object^)"neval")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":162
 *     if full_output:
 *         dict = { "neval" : neval,
 *                  "last" : last,             # <<<<<<<<<<<<<<
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),
 */
    __pyx_t_5 = __pyx_v_last;
    __pyx_t_14[((System::Object^)"last")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":163
 *         dict = { "neval" : neval,
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),             # <<<<<<<<<<<<<<
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_iord)); 
    __pyx_t_14[((System::Object^)"iord")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":164
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),             # <<<<<<<<<<<<<<
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_alist)); 
    __pyx_t_14[((System::Object^)"alist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":165
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),             # <<<<<<<<<<<<<<
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist) }
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_blist)); 
    __pyx_t_14[((System::Object^)"blist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":166
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),             # <<<<<<<<<<<<<<
 *                  "elist" : np.PyArray_Return(ap_elist) }
 *         return (result, abserr, dict, ier)
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_rlist)); 
    __pyx_t_14[((System::Object^)"rlist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":167
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist) }             # <<<<<<<<<<<<<<
 *         return (result, abserr, dict, ier)
 *     else:
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_elist)); 
    __pyx_t_14[((System::Object^)"elist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;
    __pyx_v_dict = __pyx_t_14;
    __pyx_t_14 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":168
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist) }
 *         return (result, abserr, dict, ier)             # <<<<<<<<<<<<<<
 *     else:
 *         return (result, abserr, ier)
 */
    __pyx_t_5 = __pyx_v_result;
    __pyx_t_4 = __pyx_v_abserr;
    __pyx_t_3 = __pyx_v_ier;
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4, ((System::Object^)__pyx_v_dict), __pyx_t_3});
    __pyx_t_5 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
    goto __pyx_L5;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":170
 *         return (result, abserr, dict, ier)
 *     else:
 *         return (result, abserr, ier)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_t_2 = __pyx_v_result;
    __pyx_t_3 = __pyx_v_abserr;
    __pyx_t_4 = __pyx_v_ier;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3, __pyx_t_4});
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L5:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":173
 * 
 * 
 * cdef quadpack_qagpe(dummy, fcn, double a, double b, o_points, extra_args=None, int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50):             # <<<<<<<<<<<<<<
 *     """[result,abserr,infodict,ier] = _qagpe(fun, a, b, points, | args, full_output, epsabs, epsrel, limit)"""
 *     cdef np.ndarray ap_alist, ap_iord, ap_blist, ap_elist
 */

static  System::Object^ quadpack_qagpe(System::Object^ __pyx_v_dummy, System::Object^ __pyx_v_fcn, double __pyx_v_a, double __pyx_v_b, System::Object^ __pyx_v_o_points, ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_quadpack_qagpe ^__pyx_optional_args) {
  System::Object^ __pyx_v_extra_args = ((System::Object^)nullptr);
  int __pyx_v_full_output = ((int)0);
  double __pyx_v_epsabs = ((double)1.49e-8);
  double __pyx_v_epsrel = ((double)1.49e-8);
  int __pyx_v_limit = ((int)50);
  NumpyDotNet::ndarray^ __pyx_v_ap_alist;
  NumpyDotNet::ndarray^ __pyx_v_ap_iord;
  NumpyDotNet::ndarray^ __pyx_v_ap_blist;
  NumpyDotNet::ndarray^ __pyx_v_ap_elist;
  NumpyDotNet::ndarray^ __pyx_v_ap_points;
  NumpyDotNet::ndarray^ __pyx_v_ap_pts;
  NumpyDotNet::ndarray^ __pyx_v_ap_level;
  NumpyDotNet::ndarray^ __pyx_v_ap_ndin;
  int __pyx_v_npts2;
  __pyx_t_5numpy_npy_intp __pyx_v_limit_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_npts2_shape[1];
  int __pyx_v_neval;
  int __pyx_v_ier;
  int __pyx_v_last;
  int *__pyx_v_iord;
  int *__pyx_v_level;
  int *__pyx_v_ndin;
  double __pyx_v_result;
  double __pyx_v_abserr;
  double *__pyx_v_alist;
  double *__pyx_v_blist;
  double *__pyx_v_rlist;
  double *__pyx_v_elist;
  double *__pyx_v_pts;
  double *__pyx_v_points;
  System::Object^ __pyx_v_savedSettings;
  System::Object^ __pyx_v_ap_rlist;
  System::Object^ __pyx_v_e;
  System::Object^ __pyx_v_dict;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  PythonDictionary^ __pyx_t_8;
  if (__pyx_optional_args) {
    if (__pyx_optional_args->__pyx_n > 0) {
      __pyx_v_extra_args = __pyx_optional_args->extra_args;
      if (__pyx_optional_args->__pyx_n > 1) {
        __pyx_v_full_output = __pyx_optional_args->full_output;
        if (__pyx_optional_args->__pyx_n > 2) {
          __pyx_v_epsabs = __pyx_optional_args->epsabs;
          if (__pyx_optional_args->__pyx_n > 3) {
            __pyx_v_epsrel = __pyx_optional_args->epsrel;
            if (__pyx_optional_args->__pyx_n > 4) {
              __pyx_v_limit = __pyx_optional_args->limit;
            }
          }
        }
      }
    }
  }
  __pyx_v_ap_alist = nullptr;
  __pyx_v_ap_iord = nullptr;
  __pyx_v_ap_blist = nullptr;
  __pyx_v_ap_elist = nullptr;
  __pyx_v_ap_points = nullptr;
  __pyx_v_ap_pts = nullptr;
  __pyx_v_ap_level = nullptr;
  __pyx_v_ap_ndin = nullptr;
  __pyx_v_savedSettings = nullptr;
  __pyx_v_ap_rlist = nullptr;
  __pyx_v_e = nullptr;
  __pyx_v_dict = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":180
 *     cdef int npts2
 *     cdef np.npy_intp limit_shape[1], npts2_shape[1]
 *     cdef int neval=0, ier=6, last=0, *iord             # <<<<<<<<<<<<<<
 *     cdef int *level, *ndin
 *     cdef double result=0.0, abserr=0.0
 */
  __pyx_v_neval = 0;
  __pyx_v_ier = 6;
  __pyx_v_last = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":182
 *     cdef int neval=0, ier=6, last=0, *iord
 *     cdef int *level, *ndin
 *     cdef double result=0.0, abserr=0.0             # <<<<<<<<<<<<<<
 *     cdef double *alist, *blist, *rlist, *elist
 *     cdef double *pts, *points
 */
  __pyx_v_result = 0.0;
  __pyx_v_abserr = 0.0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":187
 * 
 *     # Need to check that limit is bigger than 1
 *     if limit < 1:             # <<<<<<<<<<<<<<
 *         return (result, abserr, ier)
 * 
 */
  __pyx_t_1 = (__pyx_v_limit < 1);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":188
 *     # Need to check that limit is bigger than 1
 *     if limit < 1:
 *         return (result, abserr, ier)             # <<<<<<<<<<<<<<
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
 */
    __pyx_t_2 = __pyx_v_result;
    __pyx_t_3 = __pyx_v_abserr;
    __pyx_t_4 = __pyx_v_ier;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3, __pyx_t_4});
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":190
 *         return (result, abserr, ier)
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         ap_points = np.PyPyArray_ContiguousFromObject(o_points, np.NPY_DOUBLE, 1, 1)
 */
  __pyx_t_5 = QUAD_INIT_FUNC(__pyx_v_fcn, __pyx_v_extra_args); 
  __pyx_v_savedSettings = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":191
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         ap_points = np.PyPyArray_ContiguousFromObject(o_points, np.NPY_DOUBLE, 1, 1)
 *         npts2 = np.PyArray_DIMS(ap_points)[0]
 */
  try {
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":192
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
 *     try:
 *         ap_points = np.PyPyArray_ContiguousFromObject(o_points, np.NPY_DOUBLE, 1, 1)             # <<<<<<<<<<<<<<
 *         npts2 = np.PyArray_DIMS(ap_points)[0]
 *         points = <double *>np.PyArray_DATA(ap_points);
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "np");
      __pyx_t_4 = __site_get_PyPyArray_ContiguousFromObject_192_22->Target(__site_get_PyPyArray_ContiguousFromObject_192_22, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = (System::Object^)(long long)(NPY_DOUBLE);
      __pyx_t_3 = __site_call4_192_53->Target(__site_call4_192_53, __pyx_context, __pyx_t_4, __pyx_v_o_points, __pyx_t_5, __pyx_int_1, __pyx_int_1);
      __pyx_t_4 = nullptr;
      __pyx_t_5 = nullptr;
      if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_points = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":193
 *     try:
 *         ap_points = np.PyPyArray_ContiguousFromObject(o_points, np.NPY_DOUBLE, 1, 1)
 *         npts2 = np.PyArray_DIMS(ap_points)[0]             # <<<<<<<<<<<<<<
 *         points = <double *>np.PyArray_DATA(ap_points);
 * 
 */
      __pyx_v_npts2 = (PyArray_DIMS(__pyx_v_ap_points)[0]);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":194
 *         ap_points = np.PyPyArray_ContiguousFromObject(o_points, np.NPY_DOUBLE, 1, 1)
 *         npts2 = np.PyArray_DIMS(ap_points)[0]
 *         points = <double *>np.PyArray_DATA(ap_points);             # <<<<<<<<<<<<<<
 * 
 *         # Setup iwork and work arrays
 */
      __pyx_v_points = ((double *)PyArray_DATA(__pyx_v_ap_points));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":197
 * 
 *         # Setup iwork and work arrays
 *         ap_iord = np.PyArray_EMPTY(1,limit_shape, np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ap_alist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_blist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_3 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_iord = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":198
 *         # Setup iwork and work arrays
 *         ap_iord = np.PyArray_EMPTY(1,limit_shape, np.NPY_INT, False)
 *         ap_alist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_blist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_rlist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_3 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_alist = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":199
 *         ap_iord = np.PyArray_EMPTY(1,limit_shape, np.NPY_INT, False)
 *         ap_alist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_blist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_rlist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_elist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_3 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_blist = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":200
 *         ap_alist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_blist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_rlist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_elist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_pts = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_3 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      __pyx_v_ap_rlist = __pyx_t_3;
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":201
 *         ap_blist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_rlist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_elist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_pts = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
 *         ap_level = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_3 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_elist = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":202
 *         ap_rlist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_elist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_pts = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_level = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_ndin = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
 */
      __pyx_t_3 = PyArray_EMPTY(1, __pyx_v_npts2_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_pts = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":203
 *         ap_elist = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_pts = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
 *         ap_level = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_ndin = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
 * 
 */
      __pyx_t_3 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_level = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":204
 *         ap_pts = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
 *         ap_level = np.PyArray_EMPTY(1,limit_shape, np.NPY_DOUBLE, False)
 *         ap_ndin = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 */
      __pyx_t_3 = PyArray_EMPTY(1, __pyx_v_npts2_shape, NPY_DOUBLE, 0); 
      if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_ndin = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":206
 *         ap_ndin = np.PyArray_EMPTY(1,npts2_shape, np.NPY_DOUBLE, False)
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)             # <<<<<<<<<<<<<<
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 */
      __pyx_v_iord = ((int *)PyArray_DATA(__pyx_v_ap_iord));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":207
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 *         alist = <double *>np.PyArray_DATA(ap_alist)             # <<<<<<<<<<<<<<
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 */
      __pyx_v_alist = ((double *)PyArray_DATA(__pyx_v_ap_alist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":208
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)             # <<<<<<<<<<<<<<
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 */
      __pyx_v_blist = ((double *)PyArray_DATA(__pyx_v_ap_blist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":209
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)             # <<<<<<<<<<<<<<
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 *         pts = <double *>np.PyArray_DATA(ap_pts)
 */
      if (__pyx_v_ap_rlist != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ap_rlist) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_rlist = ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ap_rlist)));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":210
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 *         elist = <double *>np.PyArray_DATA(ap_elist)             # <<<<<<<<<<<<<<
 *         pts = <double *>np.PyArray_DATA(ap_pts)
 *         level = <int *>np.PyArray_DATA(ap_level)
 */
      __pyx_v_elist = ((double *)PyArray_DATA(__pyx_v_ap_elist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":211
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 *         pts = <double *>np.PyArray_DATA(ap_pts)             # <<<<<<<<<<<<<<
 *         level = <int *>np.PyArray_DATA(ap_level)
 *         ndin = <int *>np.PyArray_DATA(ap_level)
 */
      __pyx_v_pts = ((double *)PyArray_DATA(__pyx_v_ap_pts));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":212
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 *         pts = <double *>np.PyArray_DATA(ap_pts)
 *         level = <int *>np.PyArray_DATA(ap_level)             # <<<<<<<<<<<<<<
 *         ndin = <int *>np.PyArray_DATA(ap_level)
 * 
 */
      __pyx_v_level = ((int *)PyArray_DATA(__pyx_v_ap_level));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":213
 *         pts = <double *>np.PyArray_DATA(ap_pts)
 *         level = <int *>np.PyArray_DATA(ap_level)
 *         ndin = <int *>np.PyArray_DATA(ap_level)             # <<<<<<<<<<<<<<
 * 
 *         DQAGPE(<void *>quad_function, &a, &b, &npts2, points, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, pts, iord, level, ndin, &last)
 */
      __pyx_v_ndin = ((int *)PyArray_DATA(__pyx_v_ap_level));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":215
 *         ndin = <int *>np.PyArray_DATA(ap_level)
 * 
 *         DQAGPE(<void *>quad_function, &a, &b, &npts2, points, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, pts, iord, level, ndin, &last)             # <<<<<<<<<<<<<<
 *     except Exception, e:
 *         ier = 80
 */
      DQAGPE(((void *)__pyx_function_pointer_quad_function), (&__pyx_v_a), (&__pyx_v_b), (&__pyx_v_npts2), __pyx_v_points, (&__pyx_v_epsabs), (&__pyx_v_epsrel), (&__pyx_v_limit), (&__pyx_v_result), (&__pyx_v_abserr), (&__pyx_v_neval), (&__pyx_v_ier), __pyx_v_alist, __pyx_v_blist, __pyx_v_rlist, __pyx_v_elist, __pyx_v_pts, __pyx_v_iord, __pyx_v_level, __pyx_v_ndin, (&__pyx_v_last));
    } catch (System::Exception^ __pyx_lt_6) {
      System::Object^ __pyx_lt_7 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_6);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":216
 * 
 *         DQAGPE(<void *>quad_function, &a, &b, &npts2, points, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, pts, iord, level, ndin, &last)
 *     except Exception, e:             # <<<<<<<<<<<<<<
 *         ier = 80
 *     finally:
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "Exception");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_7, __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._quadpack.quadpack_qagpe");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_6);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":217
 *         DQAGPE(<void *>quad_function, &a, &b, &npts2, points, &epsabs, &epsrel, &limit, &result, &abserr, &neval, &ier, alist, blist, rlist, elist, pts, iord, level, ndin, &last)
 *     except Exception, e:
 *         ier = 80             # <<<<<<<<<<<<<<
 *     finally:
 *         QUAD_RESTORE_FUNC(savedSettings)
 */
        __pyx_v_ier = 80;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_6);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":219
 *         ier = 80
 *     finally:
 *         QUAD_RESTORE_FUNC(savedSettings)             # <<<<<<<<<<<<<<
 * 
 *     if full_output:
 */
  finally {
    __pyx_t_3 = QUAD_RESTORE_FUNC(__pyx_v_savedSettings); 
    __pyx_t_3 = nullptr;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":221
 *         QUAD_RESTORE_FUNC(savedSettings)
 * 
 *     if full_output:             # <<<<<<<<<<<<<<
 *         dict = { "neval" : neval,
 *                  "last" : last,
 */
  if (__pyx_v_full_output) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":222
 * 
 *     if full_output:
 *         dict = { "neval" : neval,             # <<<<<<<<<<<<<<
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),
 */
    __pyx_t_8 = PythonOps::MakeEmptyDict();
    __pyx_t_3 = __pyx_v_neval;
    __pyx_t_8[((System::Object^)"neval")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":223
 *     if full_output:
 *         dict = { "neval" : neval,
 *                  "last" : last,             # <<<<<<<<<<<<<<
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),
 */
    __pyx_t_3 = __pyx_v_last;
    __pyx_t_8[((System::Object^)"last")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":224
 *         dict = { "neval" : neval,
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),             # <<<<<<<<<<<<<<
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),
 */
    __pyx_t_3 = PyArray_Return(((System::Object^)__pyx_v_ap_iord)); 
    __pyx_t_8[((System::Object^)"iord")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":225
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),             # <<<<<<<<<<<<<<
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 */
    __pyx_t_3 = PyArray_Return(((System::Object^)__pyx_v_ap_alist)); 
    __pyx_t_8[((System::Object^)"alist")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":226
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),             # <<<<<<<<<<<<<<
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist),
 */
    __pyx_t_3 = PyArray_Return(((System::Object^)__pyx_v_ap_blist)); 
    __pyx_t_8[((System::Object^)"blist")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":227
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),             # <<<<<<<<<<<<<<
 *                  "elist" : np.PyArray_Return(ap_elist),
 *                  "pts" : np.PyArray_Return(ap_pts),
 */
    __pyx_t_3 = PyArray_Return(__pyx_v_ap_rlist); 
    __pyx_t_8[((System::Object^)"rlist")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":228
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist),             # <<<<<<<<<<<<<<
 *                  "pts" : np.PyArray_Return(ap_pts),
 *                  "level" : np.PyArray_Return(ap_level),
 */
    __pyx_t_3 = PyArray_Return(((System::Object^)__pyx_v_ap_elist)); 
    __pyx_t_8[((System::Object^)"elist")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":229
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist),
 *                  "pts" : np.PyArray_Return(ap_pts),             # <<<<<<<<<<<<<<
 *                  "level" : np.PyArray_Return(ap_level),
 *                  "ndin" : np.PyArray_Return(ap_ndin) }
 */
    __pyx_t_3 = PyArray_Return(((System::Object^)__pyx_v_ap_pts)); 
    __pyx_t_8[((System::Object^)"pts")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":230
 *                  "elist" : np.PyArray_Return(ap_elist),
 *                  "pts" : np.PyArray_Return(ap_pts),
 *                  "level" : np.PyArray_Return(ap_level),             # <<<<<<<<<<<<<<
 *                  "ndin" : np.PyArray_Return(ap_ndin) }
 * 
 */
    __pyx_t_3 = PyArray_Return(((System::Object^)__pyx_v_ap_level)); 
    __pyx_t_8[((System::Object^)"level")] = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":231
 *                  "pts" : np.PyArray_Return(ap_pts),
 *                  "level" : np.PyArray_Return(ap_level),
 *                  "ndin" : np.PyArray_Return(ap_ndin) }             # <<<<<<<<<<<<<<
 * 
 *         return (result, abserr, dict, ier)
 */
    __pyx_t_3 = PyArray_Return(((System::Object^)__pyx_v_ap_ndin)); 
    __pyx_t_8[((System::Object^)"ndin")] = __pyx_t_3;
    __pyx_t_3 = nullptr;
    __pyx_v_dict = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":233
 *                  "ndin" : np.PyArray_Return(ap_ndin) }
 * 
 *         return (result, abserr, dict, ier)             # <<<<<<<<<<<<<<
 *     else:
 *         return (result, abserr, ier)
 */
    __pyx_t_3 = __pyx_v_result;
    __pyx_t_5 = __pyx_v_abserr;
    __pyx_t_4 = __pyx_v_ier;
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_5, ((System::Object^)__pyx_v_dict), __pyx_t_4});
    __pyx_t_3 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
    goto __pyx_L4;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":235
 *         return (result, abserr, dict, ier)
 *     else:
 *         return (result, abserr, ier)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_t_2 = __pyx_v_result;
    __pyx_t_4 = __pyx_v_abserr;
    __pyx_t_5 = __pyx_v_ier;
    __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_4, __pyx_t_5});
    __pyx_t_2 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_r = __pyx_t_3;
    __pyx_t_3 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L4:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":238
 * 
 * 
 * cdef quadpack_qawoe(dummpy, fcn, double a, double b, double omega, int integr, extra_args=None,             # <<<<<<<<<<<<<<
 *                     int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50,
 *                     int maxp1=50, int icall=1, int momcom=50, o_chebmo=None):
 */

static  System::Object^ quadpack_qawoe(System::Object^ __pyx_v_dummpy, System::Object^ __pyx_v_fcn, double __pyx_v_a, double __pyx_v_b, double __pyx_v_omega, int __pyx_v_integr, ref struct __pyx_opt_args_5scipy_9integrate_9_quadpack_quadpack_qawoe ^__pyx_optional_args) {
  System::Object^ __pyx_v_extra_args = ((System::Object^)nullptr);
  int __pyx_v_full_output = ((int)0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":239
 * 
 * cdef quadpack_qawoe(dummpy, fcn, double a, double b, double omega, int integr, extra_args=None,
 *                     int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50,             # <<<<<<<<<<<<<<
 *                     int maxp1=50, int icall=1, int momcom=50, o_chebmo=None):
 *     """[result,abserr,infodict,ier] = _qawoe(fun, a, b, omega, integr, | args, full_output, epsabs, epsrel, limit, maxp1, icall, momcom, chebmo)"""
 */
  double __pyx_v_epsabs = ((double)1.49e-8);
  double __pyx_v_epsrel = ((double)1.49e-8);
  int __pyx_v_limit = ((int)50);
  int __pyx_v_maxp1 = ((int)50);
  int __pyx_v_icall = ((int)1);
  int __pyx_v_momcom = ((int)50);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":240
 * cdef quadpack_qawoe(dummpy, fcn, double a, double b, double omega, int integr, extra_args=None,
 *                     int full_output=0, double epsabs=1.49e-8, double epsrel=1.49e-8, int limit=50,
 *                     int maxp1=50, int icall=1, int momcom=50, o_chebmo=None):             # <<<<<<<<<<<<<<
 *     """[result,abserr,infodict,ier] = _qawoe(fun, a, b, omega, integr, | args, full_output, epsabs, epsrel, limit, maxp1, icall, momcom, chebmo)"""
 *     cdef np.ndarray ap_alist, ap_irod, ap_blist, ap_elist, ap_rlist, ap_nnlog, ap_chebmo
 */
  System::Object^ __pyx_v_o_chebmo = ((System::Object^)nullptr);
  NumpyDotNet::ndarray^ __pyx_v_ap_alist;
  NumpyDotNet::ndarray^ __pyx_v_ap_blist;
  NumpyDotNet::ndarray^ __pyx_v_ap_elist;
  NumpyDotNet::ndarray^ __pyx_v_ap_rlist;
  NumpyDotNet::ndarray^ __pyx_v_ap_nnlog;
  NumpyDotNet::ndarray^ __pyx_v_ap_chebmo;
  __pyx_t_5numpy_npy_intp __pyx_v_limit_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_sz[2];
  int __pyx_v_neval;
  int __pyx_v_ier;
  int __pyx_v_last;
  int *__pyx_v_iord;
  int *__pyx_v_nnlog;
  double __pyx_v_result;
  double __pyx_v_abserr;
  double *__pyx_v_chebmo;
  double *__pyx_v_alist;
  double *__pyx_v_blist;
  double *__pyx_v_rlist;
  double *__pyx_v_elist;
  System::Object^ __pyx_v_savedSettings;
  NumpyDotNet::ndarray^ __pyx_v_ap_iord;
  System::Object^ __pyx_v_e;
  System::Object^ __pyx_v_dict;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_8;
  int __pyx_t_9;
  PythonDictionary^ __pyx_t_10;
  if (__pyx_optional_args) {
    if (__pyx_optional_args->__pyx_n > 0) {
      __pyx_v_extra_args = __pyx_optional_args->extra_args;
      if (__pyx_optional_args->__pyx_n > 1) {
        __pyx_v_full_output = __pyx_optional_args->full_output;
        if (__pyx_optional_args->__pyx_n > 2) {
          __pyx_v_epsabs = __pyx_optional_args->epsabs;
          if (__pyx_optional_args->__pyx_n > 3) {
            __pyx_v_epsrel = __pyx_optional_args->epsrel;
            if (__pyx_optional_args->__pyx_n > 4) {
              __pyx_v_limit = __pyx_optional_args->limit;
              if (__pyx_optional_args->__pyx_n > 5) {
                __pyx_v_maxp1 = __pyx_optional_args->maxp1;
                if (__pyx_optional_args->__pyx_n > 6) {
                  __pyx_v_icall = __pyx_optional_args->icall;
                  if (__pyx_optional_args->__pyx_n > 7) {
                    __pyx_v_momcom = __pyx_optional_args->momcom;
                    if (__pyx_optional_args->__pyx_n > 8) {
                      __pyx_v_o_chebmo = __pyx_optional_args->o_chebmo;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __pyx_v_ap_alist = nullptr;
  __pyx_v_ap_blist = nullptr;
  __pyx_v_ap_elist = nullptr;
  __pyx_v_ap_rlist = nullptr;
  __pyx_v_ap_nnlog = nullptr;
  __pyx_v_ap_chebmo = nullptr;
  __pyx_v_savedSettings = nullptr;
  __pyx_v_ap_iord = nullptr;
  __pyx_v_e = nullptr;
  __pyx_v_dict = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":245
 * 
 *     cdef np.npy_intp limit_shape[1], sz[2]
 *     cdef int      neval=0, ier=6, last=0, *iord             # <<<<<<<<<<<<<<
 *     cdef int      *nnlog
 *     cdef double   result=0.0, abserr=0.0
 */
  __pyx_v_neval = 0;
  __pyx_v_ier = 6;
  __pyx_v_last = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":247
 *     cdef int      neval=0, ier=6, last=0, *iord
 *     cdef int      *nnlog
 *     cdef double   result=0.0, abserr=0.0             # <<<<<<<<<<<<<<
 *     cdef double   *chebmo
 *     cdef double   *alist, *blist, *rlist, *elist
 */
  __pyx_v_result = 0.0;
  __pyx_v_abserr = 0.0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":251
 *     cdef double   *alist, *blist, *rlist, *elist
 * 
 *     limit_shape[0] = limit             # <<<<<<<<<<<<<<
 * 
 *     # Need to check that limit is bigger than 1
 */
  (__pyx_v_limit_shape[0]) = __pyx_v_limit;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":254
 * 
 *     # Need to check that limit is bigger than 1
 *     if limit < 1:             # <<<<<<<<<<<<<<
 *         return (result, abserr, ier)
 * 
 */
  __pyx_t_1 = (__pyx_v_limit < 1);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":255
 *     # Need to check that limit is bigger than 1
 *     if limit < 1:
 *         return (result, abserr, ier)             # <<<<<<<<<<<<<<
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
 */
    __pyx_t_2 = __pyx_v_result;
    __pyx_t_3 = __pyx_v_abserr;
    __pyx_t_4 = __pyx_v_ier;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3, __pyx_t_4});
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":257
 *         return (result, abserr, ier)
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         if o_chebmo is not None:
 */
  __pyx_t_5 = QUAD_INIT_FUNC(__pyx_v_fcn, __pyx_v_extra_args); 
  __pyx_v_savedSettings = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":258
 * 
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         if o_chebmo is not None:
 *             ap_chebmo = np.PyArray_ContiguousFromObject(o_chebmo, np.NPY_DOUBLE, 2, 2)
 */
  try {
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":259
 *     savedSettings = QUAD_INIT_FUNC(fcn,extra_args)
 *     try:
 *         if o_chebmo is not None:             # <<<<<<<<<<<<<<
 *             ap_chebmo = np.PyArray_ContiguousFromObject(o_chebmo, np.NPY_DOUBLE, 2, 2)
 *             if np.PyArray_DIMS(ap_chebmo)[1] != maxp1 or np.PyArray_DIMS(ap_chebmo)[0] != 25:
 */
      __pyx_t_1 = (__pyx_v_o_chebmo != nullptr);
      if (__pyx_t_1) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":260
 *     try:
 *         if o_chebmo is not None:
 *             ap_chebmo = np.PyArray_ContiguousFromObject(o_chebmo, np.NPY_DOUBLE, 2, 2)             # <<<<<<<<<<<<<<
 *             if np.PyArray_DIMS(ap_chebmo)[1] != maxp1 or np.PyArray_DIMS(ap_chebmo)[0] != 25:
 *                 raise quadpack_error("Chebyshev moment array has the wrong size.")
 */
        __pyx_t_5 = (System::Object^)(long long)(NPY_DOUBLE);
        __pyx_t_4 = PyArray_ContiguousFromObject(__pyx_v_o_chebmo, __pyx_t_5, __pyx_int_2, __pyx_int_2); 
        __pyx_t_5 = nullptr;
        if (__pyx_t_4 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_ap_chebmo = ((NumpyDotNet::ndarray^)__pyx_t_4);
        __pyx_t_4 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":261
 *         if o_chebmo is not None:
 *             ap_chebmo = np.PyArray_ContiguousFromObject(o_chebmo, np.NPY_DOUBLE, 2, 2)
 *             if np.PyArray_DIMS(ap_chebmo)[1] != maxp1 or np.PyArray_DIMS(ap_chebmo)[0] != 25:             # <<<<<<<<<<<<<<
 *                 raise quadpack_error("Chebyshev moment array has the wrong size.")
 *         else:
 */
        __pyx_t_1 = ((PyArray_DIMS(__pyx_v_ap_chebmo)[1]) != __pyx_v_maxp1);
        if (!__pyx_t_1) {
          __pyx_t_8 = ((PyArray_DIMS(__pyx_v_ap_chebmo)[0]) != 25);
          __pyx_t_9 = __pyx_t_8;
        } else {
          __pyx_t_9 = __pyx_t_1;
        }
        if (__pyx_t_9) {

          /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":262
 *             ap_chebmo = np.PyArray_ContiguousFromObject(o_chebmo, np.NPY_DOUBLE, 2, 2)
 *             if np.PyArray_DIMS(ap_chebmo)[1] != maxp1 or np.PyArray_DIMS(ap_chebmo)[0] != 25:
 *                 raise quadpack_error("Chebyshev moment array has the wrong size.")             # <<<<<<<<<<<<<<
 *         else:
 *             sz[0] = 25
 */
          __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "quadpack_error");
          __pyx_t_5 = __site_call1_262_36->Target(__site_call1_262_36, __pyx_context, __pyx_t_4, ((System::Object^)"Chebyshev moment array has the wrong size."));
          __pyx_t_4 = nullptr;
          throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
          __pyx_t_5 = nullptr;
          goto __pyx_L5;
        }
        __pyx_L5:;
        goto __pyx_L4;
      }
      /*else*/ {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":264
 *                 raise quadpack_error("Chebyshev moment array has the wrong size.")
 *         else:
 *             sz[0] = 25             # <<<<<<<<<<<<<<
 *             sz[1] = maxp1
 *             ap_chebmo = np.PyArray_EMPTY(2, sz, np.NPY_DOUBLE, False)
 */
        (__pyx_v_sz[0]) = 25;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":265
 *         else:
 *             sz[0] = 25
 *             sz[1] = maxp1             # <<<<<<<<<<<<<<
 *             ap_chebmo = np.PyArray_EMPTY(2, sz, np.NPY_DOUBLE, False)
 *         chebmo = <double *>np.PyArray_DATA(ap_chebmo)
 */
        (__pyx_v_sz[1]) = __pyx_v_maxp1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":266
 *             sz[0] = 25
 *             sz[1] = maxp1
 *             ap_chebmo = np.PyArray_EMPTY(2, sz, np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         chebmo = <double *>np.PyArray_DATA(ap_chebmo)
 * 
 */
        __pyx_t_5 = PyArray_EMPTY(2, __pyx_v_sz, NPY_DOUBLE, 0); 
        if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_ap_chebmo = ((NumpyDotNet::ndarray^)__pyx_t_5);
        __pyx_t_5 = nullptr;
      }
      __pyx_L4:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":267
 *             sz[1] = maxp1
 *             ap_chebmo = np.PyArray_EMPTY(2, sz, np.NPY_DOUBLE, False)
 *         chebmo = <double *>np.PyArray_DATA(ap_chebmo)             # <<<<<<<<<<<<<<
 * 
 *         # Setup iwork and work arrays
 */
      __pyx_v_chebmo = ((double *)PyArray_DATA(__pyx_v_ap_chebmo));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":270
 * 
 *         # Setup iwork and work arrays
 *         ap_iord = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ap_nnlog = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)
 *         ap_alist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      __pyx_v_ap_iord = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":271
 *         # Setup iwork and work arrays
 *         ap_iord = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)
 *         ap_nnlog = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ap_alist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 *         ap_blist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_INT, 0); 
      __pyx_v_ap_nnlog = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":272
 *         ap_iord = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)
 *         ap_nnlog = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)
 *         ap_alist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_blist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 *         ap_rlist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      __pyx_v_ap_alist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":273
 *         ap_nnlog = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_INT, False)
 *         ap_alist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 *         ap_blist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_rlist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 *         ap_elist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      __pyx_v_ap_blist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":274
 *         ap_alist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 *         ap_blist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 *         ap_rlist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         ap_elist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 * 
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      __pyx_v_ap_rlist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":275
 *         ap_blist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 *         ap_rlist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 *         ap_elist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 */
      __pyx_t_5 = PyArray_EMPTY(1, __pyx_v_limit_shape, NPY_DOUBLE, 0); 
      __pyx_v_ap_elist = ((NumpyDotNet::ndarray^)__pyx_t_5);
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":277
 *         ap_elist = <np.ndarray>np.PyArray_EMPTY(1,limit_shape,np.NPY_DOUBLE, False)
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)             # <<<<<<<<<<<<<<
 *         nnlog = <int *>np.PyArray_DATA(ap_nnlog)
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 */
      __pyx_v_iord = ((int *)PyArray_DATA(__pyx_v_ap_iord));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":278
 * 
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 *         nnlog = <int *>np.PyArray_DATA(ap_nnlog)             # <<<<<<<<<<<<<<
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 */
      __pyx_v_nnlog = ((int *)PyArray_DATA(__pyx_v_ap_nnlog));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":279
 *         iord = <int *>np.PyArray_DATA(ap_iord)
 *         nnlog = <int *>np.PyArray_DATA(ap_nnlog)
 *         alist = <double *>np.PyArray_DATA(ap_alist)             # <<<<<<<<<<<<<<
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 */
      __pyx_v_alist = ((double *)PyArray_DATA(__pyx_v_ap_alist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":280
 *         nnlog = <int *>np.PyArray_DATA(ap_nnlog)
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)             # <<<<<<<<<<<<<<
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 */
      __pyx_v_blist = ((double *)PyArray_DATA(__pyx_v_ap_blist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":281
 *         alist = <double *>np.PyArray_DATA(ap_alist)
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)             # <<<<<<<<<<<<<<
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 * 
 */
      __pyx_v_rlist = ((double *)PyArray_DATA(__pyx_v_ap_rlist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":282
 *         blist = <double *>np.PyArray_DATA(ap_blist)
 *         rlist = <double *>np.PyArray_DATA(ap_rlist)
 *         elist = <double *>np.PyArray_DATA(ap_elist)             # <<<<<<<<<<<<<<
 * 
 *         DQAWOE(<void *>quad_function, &a, &b, &omega, &integr, &epsabs, &epsrel, &limit, &icall, &maxp1, &result, &abserr, &neval, &ier, &last, alist, blist, rlist, elist, iord, nnlog, &momcom, chebmo)
 */
      __pyx_v_elist = ((double *)PyArray_DATA(__pyx_v_ap_elist));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":284
 *         elist = <double *>np.PyArray_DATA(ap_elist)
 * 
 *         DQAWOE(<void *>quad_function, &a, &b, &omega, &integr, &epsabs, &epsrel, &limit, &icall, &maxp1, &result, &abserr, &neval, &ier, &last, alist, blist, rlist, elist, iord, nnlog, &momcom, chebmo)             # <<<<<<<<<<<<<<
 *     except Exception, e:
 *         ier = 80
 */
      DQAWOE(((void *)__pyx_function_pointer_quad_function), (&__pyx_v_a), (&__pyx_v_b), (&__pyx_v_omega), (&__pyx_v_integr), (&__pyx_v_epsabs), (&__pyx_v_epsrel), (&__pyx_v_limit), (&__pyx_v_icall), (&__pyx_v_maxp1), (&__pyx_v_result), (&__pyx_v_abserr), (&__pyx_v_neval), (&__pyx_v_ier), (&__pyx_v_last), __pyx_v_alist, __pyx_v_blist, __pyx_v_rlist, __pyx_v_elist, __pyx_v_iord, __pyx_v_nnlog, (&__pyx_v_momcom), __pyx_v_chebmo);
    } catch (System::Exception^ __pyx_lt_6) {
      System::Object^ __pyx_lt_7 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_6);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":285
 * 
 *         DQAWOE(<void *>quad_function, &a, &b, &omega, &integr, &epsabs, &epsrel, &limit, &icall, &maxp1, &result, &abserr, &neval, &ier, &last, alist, blist, rlist, elist, iord, nnlog, &momcom, chebmo)
 *     except Exception, e:             # <<<<<<<<<<<<<<
 *         ier = 80
 *     finally:
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "Exception");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_7, __pyx_t_5);
      __pyx_t_5 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._quadpack.quadpack_qawoe");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_6);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":286
 *         DQAWOE(<void *>quad_function, &a, &b, &omega, &integr, &epsabs, &epsrel, &limit, &icall, &maxp1, &result, &abserr, &neval, &ier, &last, alist, blist, rlist, elist, iord, nnlog, &momcom, chebmo)
 *     except Exception, e:
 *         ier = 80             # <<<<<<<<<<<<<<
 *     finally:
 *         QUAD_RESTORE_FUNC(savedSettings)
 */
        __pyx_v_ier = 80;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_6);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":288
 *         ier = 80
 *     finally:
 *         QUAD_RESTORE_FUNC(savedSettings)             # <<<<<<<<<<<<<<
 * 
 *     if full_output:
 */
  finally {
    __pyx_t_5 = QUAD_RESTORE_FUNC(__pyx_v_savedSettings); 
    __pyx_t_5 = nullptr;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":290
 *         QUAD_RESTORE_FUNC(savedSettings)
 * 
 *     if full_output:             # <<<<<<<<<<<<<<
 *         dict = { "neval" : neval,
 *                  "last" : last,
 */
  if (__pyx_v_full_output) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":291
 * 
 *     if full_output:
 *         dict = { "neval" : neval,             # <<<<<<<<<<<<<<
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),
 */
    __pyx_t_10 = PythonOps::MakeEmptyDict();
    __pyx_t_5 = __pyx_v_neval;
    __pyx_t_10[((System::Object^)"neval")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":292
 *     if full_output:
 *         dict = { "neval" : neval,
 *                  "last" : last,             # <<<<<<<<<<<<<<
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),
 */
    __pyx_t_5 = __pyx_v_last;
    __pyx_t_10[((System::Object^)"last")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":293
 *         dict = { "neval" : neval,
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),             # <<<<<<<<<<<<<<
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_iord)); 
    __pyx_t_10[((System::Object^)"iord")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":294
 *                  "last" : last,
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),             # <<<<<<<<<<<<<<
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_alist)); 
    __pyx_t_10[((System::Object^)"alist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":295
 *                  "iord" : np.PyArray_Return(ap_iord),
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),             # <<<<<<<<<<<<<<
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist),
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_blist)); 
    __pyx_t_10[((System::Object^)"blist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":296
 *                  "alist" : np.PyArray_Return(ap_alist),
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),             # <<<<<<<<<<<<<<
 *                  "elist" : np.PyArray_Return(ap_elist),
 *                  "nnlog" : np.PyArray_Return(ap_nnlog),
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_rlist)); 
    __pyx_t_10[((System::Object^)"rlist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":297
 *                  "blist" : np.PyArray_Return(ap_blist),
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist),             # <<<<<<<<<<<<<<
 *                  "nnlog" : np.PyArray_Return(ap_nnlog),
 *                  "momcom" : momcom,
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_elist)); 
    __pyx_t_10[((System::Object^)"elist")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":298
 *                  "rlist" : np.PyArray_Return(ap_rlist),
 *                  "elist" : np.PyArray_Return(ap_elist),
 *                  "nnlog" : np.PyArray_Return(ap_nnlog),             # <<<<<<<<<<<<<<
 *                  "momcom" : momcom,
 *                  "chebmo" : np.PyArray_Return(ap_chebmo) }
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_nnlog)); 
    __pyx_t_10[((System::Object^)"nnlog")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":299
 *                  "elist" : np.PyArray_Return(ap_elist),
 *                  "nnlog" : np.PyArray_Return(ap_nnlog),
 *                  "momcom" : momcom,             # <<<<<<<<<<<<<<
 *                  "chebmo" : np.PyArray_Return(ap_chebmo) }
 *         return (result, abserr, dict, ier)
 */
    __pyx_t_5 = __pyx_v_momcom;
    __pyx_t_10[((System::Object^)"momcom")] = __pyx_t_5;
    __pyx_t_5 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":300
 *                  "nnlog" : np.PyArray_Return(ap_nnlog),
 *                  "momcom" : momcom,
 *                  "chebmo" : np.PyArray_Return(ap_chebmo) }             # <<<<<<<<<<<<<<
 *         return (result, abserr, dict, ier)
 *     else:
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_chebmo)); 
    __pyx_t_10[((System::Object^)"chebmo")] = __pyx_t_5;
    __pyx_t_5 = nullptr;
    __pyx_v_dict = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":301
 *                  "momcom" : momcom,
 *                  "chebmo" : np.PyArray_Return(ap_chebmo) }
 *         return (result, abserr, dict, ier)             # <<<<<<<<<<<<<<
 *     else:
 *         return (result, abserr, ier)
 */
    __pyx_t_5 = __pyx_v_result;
    __pyx_t_4 = __pyx_v_abserr;
    __pyx_t_3 = __pyx_v_ier;
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4, ((System::Object^)__pyx_v_dict), __pyx_t_3});
    __pyx_t_5 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
    goto __pyx_L6;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":303
 *         return (result, abserr, dict, ier)
 *     else:
 *         return (result, abserr, ier)             # <<<<<<<<<<<<<<
 */
    __pyx_t_2 = __pyx_v_result;
    __pyx_t_3 = __pyx_v_abserr;
    __pyx_t_4 = __pyx_v_ier;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3, __pyx_t_4});
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L6:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":290
 *     dtype NpyArray_FindArrayType_3args "NumpyDotNet::NpyArray::FindArrayType" (object src, dtype minitype, int max)
 * 
 * cdef inline dtype NpyArray_FindArrayType_2args(object src, dtype minitype):             # <<<<<<<<<<<<<<
 *     return NpyArray_FindArrayType_3args(src, minitype, NPY_MAXDIMS)
 * 
 */

static CYTHON_INLINE NumpyDotNet::dtype^ NpyArray_FindArrayType_2args(System::Object^ __pyx_v_src, NumpyDotNet::dtype^ __pyx_v_minitype) {
  NumpyDotNet::dtype^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":291
 * 
 * cdef inline dtype NpyArray_FindArrayType_2args(object src, dtype minitype):
 *     return NpyArray_FindArrayType_3args(src, minitype, NPY_MAXDIMS)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = ((System::Object^)NumpyDotNet::NpyArray::FindArrayType(__pyx_v_src, __pyx_v_minitype, NPY_MAXDIMS)); 
  __pyx_r = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":310
 * ctypedef void (*PyArray_CopySwapFunc)(void *, void *, int, NpyArray *)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":313
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

/* "../cython/include/numpy.pxd":315
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))
 * 
 * cdef inline object PyArray_DescrFromType(int typenum):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_DescrFromType(int __pyx_v_typenum) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":316
 * 
 * cdef inline object PyArray_DescrFromType(int typenum):
 *     return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum))); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":319
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

  /* "../cython/include/numpy.pxd":320
 * 
 * cdef inline object PyArray_ZEROS(int ndim, npy_intp *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":322
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include/numpy.pxd":323
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_323_18->Target(__site_get_append_323_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_323_25->Target(__site_call1_323_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include/numpy.pxd":324
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include/numpy.pxd":325
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_EMPTY(int ndim, npy_intp *shape, int typenum, int fortran):
 */
  __pyx_t_5 = __site_get_zeros_325_16->Target(__site_get_zeros_325_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum))); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_325_22->Target(__site_call3_325_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include/numpy.pxd":327
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

  /* "../cython/include/numpy.pxd":328
 * 
 * cdef inline object PyArray_EMPTY(int ndim, npy_intp *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":330
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include/numpy.pxd":331
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_331_18->Target(__site_get_append_331_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_331_25->Target(__site_call1_331_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include/numpy.pxd":332
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include/numpy.pxd":333
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 */
  __pyx_t_5 = __site_get_empty_333_16->Target(__site_get_empty_333_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum))); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_333_22->Target(__site_call3_333_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include/numpy.pxd":335
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

  /* "../cython/include/numpy.pxd":336
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(nd):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":338
 *     shape_list = []
 *     cdef int i
 *     for i in range(nd):             # <<<<<<<<<<<<<<
 *         shape_list.append(dims[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_nd;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include/numpy.pxd":339
 *     cdef int i
 *     for i in range(nd):
 *         shape_list.append(dims[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_339_18->Target(__site_get_append_339_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_dims[__pyx_v_i]);
    __pyx_t_5 = __site_call1_339_25->Target(__site_call1_339_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include/numpy.pxd":340
 *     for i in range(nd):
 *         shape_list.append(dims[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include/numpy.pxd":341
 *         shape_list.append(dims[i])
 *     import numpy
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_5 = __site_get_empty_341_16->Target(__site_get_empty_341_16, __pyx_v_numpy, __pyx_context);
  if (__pyx_v_fortran) {
    __pyx_t_4 = "F";
  } else {
    __pyx_t_4 = "C";
  }
  __pyx_t_1 = __site_call3_341_22->Target(__site_call3_341_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), ((System::Object^)__pyx_v_descr), ((System::Object^)__pyx_t_4));
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":344
 * 
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":345
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

  /* "../cython/include/numpy.pxd":346
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

  /* "../cython/include/numpy.pxd":347
 *     assert subtype == NULL
 *     assert obj == NULL
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_SimpleNew(int nd, npy_intp *dims, int type_num):
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_New(__pyx_v_subtype, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, __pyx_v_strides, __pyx_v_data, __pyx_v_itemsize, __pyx_v_flags, __pyx_v_obj))); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":349
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 * cdef inline object PyArray_SimpleNew(int nd, npy_intp *dims, int type_num):             # <<<<<<<<<<<<<<
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, NULL, 0, NPY_CARRAY, NULL)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_SimpleNew(int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":350
 * 
 * cdef inline object PyArray_SimpleNew(int nd, npy_intp *dims, int type_num):
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, NULL, 0, NPY_CARRAY, NULL)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_SimpleNewFromData(int nd, npy_intp *dims, int type_num, void *data):
 */
  __pyx_t_1 = PyArray_New(NULL, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, NULL, NULL, 0, NPY_CARRAY, NULL); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":352
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, NULL, 0, NPY_CARRAY, NULL)
 * 
 * cdef inline object PyArray_SimpleNewFromData(int nd, npy_intp *dims, int type_num, void *data):             # <<<<<<<<<<<<<<
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, data, 0, NPY_CARRAY, NULL)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_SimpleNewFromData(int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, void *__pyx_v_data) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":353
 * 
 * cdef inline object PyArray_SimpleNewFromData(int nd, npy_intp *dims, int type_num, void *data):
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, data, 0, NPY_CARRAY, NULL)             # <<<<<<<<<<<<<<
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 */
  __pyx_t_1 = PyArray_New(NULL, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, NULL, __pyx_v_data, 0, NPY_CARRAY, NULL); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":355
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, data, 0, NPY_CARRAY, NULL)
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):             # <<<<<<<<<<<<<<
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <npy_intp>n.Array, flags)
 * 
 */

static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^ __pyx_v_n, int __pyx_v_flags) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":356
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <npy_intp>n.Array, flags)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n) nogil:
 */
  __pyx_t_1 = __site_get_Array_356_53->Target(__site_get_Array_356_53, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_356_53->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_356_53, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_CHKFLAGS(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)), __pyx_v_flags);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":358
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <npy_intp>n.Array, flags)
 * 
 * cdef inline void* PyArray_DATA(ndarray n) nogil:             # <<<<<<<<<<<<<<
 *     return NpyArray_DATA(<NpyArray*> <npy_intp>n.Array)
 * 
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":359
 * 
 * cdef inline void* PyArray_DATA(ndarray n) nogil:
 *     return NpyArray_DATA(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n) nogil:
 */
  __pyx_t_1 = __site_get_Array_359_48->Target(__site_get_Array_359_48, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_359_48->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_359_48, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":361
 *     return NpyArray_DATA(<NpyArray*> <npy_intp>n.Array)
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n) nogil:             # <<<<<<<<<<<<<<
 *     return NpyArray_DIMS(<NpyArray*> <npy_intp>n.Array)
 * 
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":362
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n) nogil:
 *     return NpyArray_DIMS(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_DESCR(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_362_48->Target(__site_get_Array_362_48, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_362_48->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_362_48, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":364
 *     return NpyArray_DIMS(<NpyArray*> <npy_intp>n.Array)
 * 
 * cdef inline object PyArray_DESCR(ndarray n):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_descr(NpyArray_DESCR(<NpyArray*> <npy_intp>n.Array))
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_DESCR(NumpyDotNet::ndarray^ __pyx_v_n) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":365
 * 
 * cdef inline object PyArray_DESCR(ndarray n):
 *     return Npy_INTERFACE_descr(NpyArray_DESCR(<NpyArray*> <npy_intp>n.Array))             # <<<<<<<<<<<<<<
 * 
 * cdef inline int PyArray_ITEMSIZE(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_365_69->Target(__site_get_Array_365_69, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_365_69->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_365_69, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DESCR(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2))))); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":367
 *     return Npy_INTERFACE_descr(NpyArray_DESCR(<NpyArray*> <npy_intp>n.Array))
 * 
 * cdef inline int PyArray_ITEMSIZE(ndarray n):             # <<<<<<<<<<<<<<
 *     return NpyArray_ITEMSIZE(<NpyArray*> <npy_intp>n.Array)
 * 
 */

static CYTHON_INLINE int PyArray_ITEMSIZE(NumpyDotNet::ndarray^ __pyx_v_n) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":368
 * 
 * cdef inline int PyArray_ITEMSIZE(ndarray n):
 *     return NpyArray_ITEMSIZE(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Return(arr):
 */
  __pyx_t_1 = __site_get_Array_368_52->Target(__site_get_Array_368_52, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_368_52->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_368_52, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_ITEMSIZE(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":370
 *     return NpyArray_ITEMSIZE(<NpyArray*> <npy_intp>n.Array)
 * 
 * cdef inline object PyArray_Return(arr):             # <<<<<<<<<<<<<<
 *     if arr is None:
 *         return None
 */

static CYTHON_INLINE System::Object^ PyArray_Return(System::Object^ __pyx_v_arr) {
  System::Object^ __pyx_v_clr;
  System::Object^ __pyx_v_NumpyDotNet;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_clr = nullptr;
  __pyx_v_NumpyDotNet = nullptr;

  /* "../cython/include/numpy.pxd":371
 * 
 * cdef inline object PyArray_Return(arr):
 *     if arr is None:             # <<<<<<<<<<<<<<
 *         return None
 *     import clr
 */
  __pyx_t_1 = (__pyx_v_arr == nullptr);
  if (__pyx_t_1) {

    /* "../cython/include/numpy.pxd":372
 * cdef inline object PyArray_Return(arr):
 *     if arr is None:
 *         return None             # <<<<<<<<<<<<<<
 *     import clr
 *     import NumpyDotNet.ndarray
 */
    __pyx_r = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include/numpy.pxd":373
 *     if arr is None:
 *         return None
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ndarray
 *     return NumpyDotNet.ndarray.ArrayReturn(arr)
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "../cython/include/numpy.pxd":374
 *         return None
 *     import clr
 *     import NumpyDotNet.ndarray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.ndarray.ArrayReturn(arr)
 * 
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ndarray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "../cython/include/numpy.pxd":375
 *     import clr
 *     import NumpyDotNet.ndarray
 *     return NumpyDotNet.ndarray.ArrayReturn(arr)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):
 */
  __pyx_t_2 = __site_get_ndarray_375_22->Target(__site_get_ndarray_375_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_3 = __site_get_ArrayReturn_375_30->Target(__site_get_ArrayReturn_375_30, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call1_375_42->Target(__site_call1_375_42, __pyx_context, __pyx_t_3, __pyx_v_arr);
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":377
 *     return NumpyDotNet.ndarray.ArrayReturn(arr)
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):             # <<<<<<<<<<<<<<
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)
 * 
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_DIM(NumpyDotNet::ndarray^ __pyx_v_n, int __pyx_v_dim) {
  __pyx_t_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include/numpy.pxd":378
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(ndarray obj):
 */
  __pyx_t_1 = __site_get_Array_378_47->Target(__site_get_Array_378_47, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_378_47->Target(__site_cvt_cvt_PY_LONG_LONG_378_47, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIM(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)), __pyx_v_dim);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":380
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)
 * 
 * cdef inline object PyArray_NDIM(ndarray obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(NumpyDotNet::ndarray^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":381
 * 
 * cdef inline object PyArray_NDIM(ndarray obj):
 *     return obj.ndim             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 */
  __pyx_t_1 = __site_get_ndim_381_14->Target(__site_get_ndim_381_14, ((System::Object^)__pyx_v_obj), __pyx_context);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":383
 *     return obj.ndim
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):             # <<<<<<<<<<<<<<
 *     return NpyArray_SIZE(<NpyArray*> <npy_intp>n.Array)
 * 
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":384
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 *     return NpyArray_SIZE(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline npy_intp* PyArray_STRIDES(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_384_48->Target(__site_get_Array_384_48, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_384_48->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_384_48, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_SIZE(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":386
 *     return NpyArray_SIZE(<NpyArray*> <npy_intp>n.Array)
 * 
 * cdef inline npy_intp* PyArray_STRIDES(ndarray n):             # <<<<<<<<<<<<<<
 *     return NpyArray_STRIDES(<NpyArray*> <npy_intp>n.Array)
 * 
 */

static CYTHON_INLINE __pyx_t_5numpy_npy_intp *PyArray_STRIDES(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_npy_intp *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":387
 * 
 * cdef inline npy_intp* PyArray_STRIDES(ndarray n):
 *     return NpyArray_STRIDES(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline npy_intp PyArray_NBYTES(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_387_51->Target(__site_get_Array_387_51, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_387_51->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_387_51, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_STRIDES(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":389
 *     return NpyArray_STRIDES(<NpyArray*> <npy_intp>n.Array)
 * 
 * cdef inline npy_intp PyArray_NBYTES(ndarray n):             # <<<<<<<<<<<<<<
 *     return NpyArray_NBYTES(<NpyArray *><long long>n.Array)
 * 
 */

static CYTHON_INLINE __pyx_t_5numpy_npy_intp PyArray_NBYTES(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_npy_intp __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include/numpy.pxd":390
 * 
 * cdef inline npy_intp PyArray_NBYTES(ndarray n):
 *     return NpyArray_NBYTES(<NpyArray *><long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_390_51->Target(__site_get_Array_390_51, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_390_51->Target(__site_cvt_cvt_PY_LONG_LONG_390_51, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_NBYTES(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":392
 *     return NpyArray_NBYTES(<NpyArray *><long long>n.Array)
 * 
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):             # <<<<<<<<<<<<<<
 *     return <NpyArray*> <npy_intp>n.Array
 * 
 */

static CYTHON_INLINE NpyArray *PyArray_ARRAY(NumpyDotNet::ndarray^ __pyx_v_n) {
  NpyArray *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":393
 * 
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):
 *     return <NpyArray*> <npy_intp>n.Array             # <<<<<<<<<<<<<<
 * 
 * cdef inline int PyArray_TYPE(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_393_34->Target(__site_get_Array_393_34, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_393_34->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_393_34, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = ((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":395
 *     return <NpyArray*> <npy_intp>n.Array
 * 
 * cdef inline int PyArray_TYPE(ndarray n):             # <<<<<<<<<<<<<<
 *     return NpyArray_TYPE(<NpyArray*> <npy_intp>n.Array)
 * 
 */

static CYTHON_INLINE int PyArray_TYPE(NumpyDotNet::ndarray^ __pyx_v_n) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":396
 * 
 * cdef inline int PyArray_TYPE(ndarray n):
 *     return NpyArray_TYPE(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void *PyArray_Zero(arr):
 */
  __pyx_t_1 = __site_get_Array_396_48->Target(__site_get_Array_396_48, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_396_48->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_396_48, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_TYPE(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":398
 *     return NpyArray_TYPE(<NpyArray*> <npy_intp>n.Array)
 * 
 * cdef inline void *PyArray_Zero(arr):             # <<<<<<<<<<<<<<
 *     import clr
 *     import NumpyDotNet.NpyArray
 */

static CYTHON_INLINE void *PyArray_Zero(System::Object^ __pyx_v_arr) {
  System::Object^ __pyx_v_clr;
  System::Object^ __pyx_v_NumpyDotNet;
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_v_clr = nullptr;
  __pyx_v_NumpyDotNet = nullptr;

  /* "../cython/include/numpy.pxd":399
 * 
 * cdef inline void *PyArray_Zero(arr):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return <void *><npy_intp>NumpyDotNet.NpyArray.Zero(arr)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":400
 * cdef inline void *PyArray_Zero(arr):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return <void *><npy_intp>NumpyDotNet.NpyArray.Zero(arr)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":401
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return <void *><npy_intp>NumpyDotNet.NpyArray.Zero(arr)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object NpyArray_Return(NpyArray *arr):
 */
  __pyx_t_1 = __site_get_NpyArray_401_40->Target(__site_get_NpyArray_401_40, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_Zero_401_49->Target(__site_get_Zero_401_49, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_401_54->Target(__site_call1_401_54, __pyx_context, __pyx_t_2, __pyx_v_arr);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_401_54->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_401_54, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = ((void *)((__pyx_t_5numpy_npy_intp)__pyx_t_3));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":403
 *     return <void *><npy_intp>NumpyDotNet.NpyArray.Zero(arr)
 * 
 * cdef inline object NpyArray_Return(NpyArray *arr):             # <<<<<<<<<<<<<<
 *     ret = Npy_INTERFACE_array(arr)
 *     Npy_DECREF(arr)
 */

static CYTHON_INLINE System::Object^ NpyArray_Return(NpyArray *__pyx_v_arr) {
  NumpyDotNet::ndarray^ __pyx_v_ret;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_ret = nullptr;

  /* "../cython/include/numpy.pxd":404
 * 
 * cdef inline object NpyArray_Return(NpyArray *arr):
 *     ret = Npy_INTERFACE_array(arr)             # <<<<<<<<<<<<<<
 *     Npy_DECREF(arr)
 *     return ret
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_arr)); 
  __pyx_v_ret = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":405
 * cdef inline object NpyArray_Return(NpyArray *arr):
 *     ret = Npy_INTERFACE_array(arr)
 *     Npy_DECREF(arr)             # <<<<<<<<<<<<<<
 *     return ret
 * 
 */
  Npy_DECREF(__pyx_v_arr);

  /* "../cython/include/numpy.pxd":406
 *     ret = Npy_INTERFACE_array(arr)
 *     Npy_DECREF(arr)
 *     return ret             # <<<<<<<<<<<<<<
 * 
 * cdef inline int PyDataType_TYPE_NUM(dtype t):
 */
  __pyx_r = ((System::Object^)__pyx_v_ret);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":408
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

  /* "../cython/include/numpy.pxd":409
 * 
 * cdef inline int PyDataType_TYPE_NUM(dtype t):
 *     return NpyDataType_TYPE_NUM(<NpyArray_Descr *><long long>t.Dtype)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_1 = __site_get_Dtype_409_62->Target(__site_get_Dtype_409_62, ((System::Object^)__pyx_v_t), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_409_62->Target(__site_cvt_cvt_PY_LONG_LONG_409_62, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyDataType_TYPE_NUM(((NpyArray_Descr *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":411
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

  /* "../cython/include/numpy.pxd":412
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":413
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":414
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = __site_get_NpyArray_414_22->Target(__site_get_NpyArray_414_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_FromAny_414_31->Target(__site_get_FromAny_414_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_414_39->Target(__site_call6_414_39, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":417
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

  /* "../cython/include/numpy.pxd":419
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

/* "../cython/include/numpy.pxd":422
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

  /* "../cython/include/numpy.pxd":423
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_ENSURECOPY);
  __pyx_t_2 = __site_op_and_423_13->Target(__site_op_and_423_13, __pyx_v_flags, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_423_13->Target(__site_istrue_423_13, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3) {

    /* "../cython/include/numpy.pxd":424
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DEFAULT);
    __pyx_t_1 = __site_op_ior_424_14->Target(__site_op_ior_424_14, __pyx_v_flags, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_flags = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include/numpy.pxd":425
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_ContiguousFromObject(op, type, minDepth, maxDepth):
 */
  __pyx_t_4 = __site_cvt_cvt_int_425_77->Target(__site_cvt_cvt_int_425_77, __pyx_v_type);
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_4))); 
  __pyx_t_2 = PyArray_FromAny(__pyx_v_m, __pyx_t_1, __pyx_v_min, __pyx_v_max, __pyx_v_flags, nullptr); 
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":427
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

  /* "../cython/include/numpy.pxd":428
 * 
 * cdef inline object PyArray_ContiguousFromObject(op, type, minDepth, maxDepth):
 *     return PyArray_FromAny(op, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), minDepth, maxDepth,             # <<<<<<<<<<<<<<
 *                            NPY_DEFAULT | NPY_ENSUREARRAY, NULL)
 * 
 */
  __pyx_t_1 = __site_cvt_cvt_int_428_78->Target(__site_cvt_cvt_int_428_78, __pyx_v_type);
  __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_1))); 

  /* "../cython/include/numpy.pxd":429
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

/* "../cython/include/numpy.pxd":431
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

  /* "../cython/include/numpy.pxd":432
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":433
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":434
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Check(obj):
 */
  __pyx_t_1 = __site_get_NpyArray_434_22->Target(__site_get_NpyArray_434_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_CheckFromAny_434_31->Target(__site_get_CheckFromAny_434_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_434_44->Target(__site_call6_434_44, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":436
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

  /* "../cython/include/numpy.pxd":437
 * 
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np             # <<<<<<<<<<<<<<
 *     return isinstance(obj, np.ndarray)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_np = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":438
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np
 *     return isinstance(obj, np.ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Cast(arr, typenum):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_get_ndarray_438_29->Target(__site_get_ndarray_438_29, __pyx_v_np, __pyx_context);
  __pyx_t_3 = __site_call2_438_21->Target(__site_call2_438_21, __pyx_context, __pyx_t_1, __pyx_v_obj, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":440
 *     return isinstance(obj, np.ndarray)
 * 
 * cdef inline object PyArray_Cast(arr, typenum):             # <<<<<<<<<<<<<<
 *     import clr
 *     import NumpyDotNet.NpyCoreApi
 */

static CYTHON_INLINE System::Object^ PyArray_Cast(System::Object^ __pyx_v_arr, System::Object^ __pyx_v_typenum) {
  System::Object^ __pyx_v_clr;
  System::Object^ __pyx_v_NumpyDotNet;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_clr = nullptr;
  __pyx_v_NumpyDotNet = nullptr;

  /* "../cython/include/numpy.pxd":441
 * 
 * cdef inline object PyArray_Cast(arr, typenum):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyCoreApi
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":442
 * cdef inline object PyArray_Cast(arr, typenum):
 *     import clr
 *     import NumpyDotNet.NpyCoreApi             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyCoreApi", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":443
 *     import clr
 *     import NumpyDotNet.NpyCoreApi
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_NpyCoreApi_443_22->Target(__site_get_NpyCoreApi_443_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_CastToType_443_33->Target(__site_get_CastToType_443_33, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_cvt_cvt_int_443_100->Target(__site_cvt_cvt_int_443_100, __pyx_v_typenum);
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_3))); 
  __pyx_t_4 = 0;
  __pyx_t_5 = __site_call3_443_44->Target(__site_call3_443_44, __pyx_context, __pyx_t_2, __pyx_v_arr, __pyx_t_1, __pyx_t_4);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":445
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 * 
 */

static CYTHON_INLINE void import_array(void) {

}

/* "../cython/include/numpy.pxd":448
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

  /* "../cython/include/numpy.pxd":449
 * 
 * cdef inline PyNumber_Check(o):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":450
 * cdef inline PyNumber_Check(o):
 *     import clr
 *     import NumpyDotNet.ScalarGeneric             # <<<<<<<<<<<<<<
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ScalarGeneric", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":451
 *     import clr
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterNew(ndarray n):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "int");
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "long");
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "float");
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_t_2), ((System::Object^)__pyx_t_3), ((System::Object^)__pyx_t_4)});
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_call2_451_21->Target(__site_call2_451_21, __pyx_context, __pyx_t_1, __pyx_v_o, __pyx_t_5);
  __pyx_t_1 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_6 = __site_cvt_bool_451_45->Target(__site_cvt_bool_451_45, __pyx_t_4);
  if (!__pyx_t_6) {
    __pyx_t_4 = nullptr;
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_1 = __site_get_ScalarGeneric_451_73->Target(__site_get_ScalarGeneric_451_73, __pyx_v_NumpyDotNet, __pyx_context);
    __pyx_t_3 = __site_call2_451_58->Target(__site_call2_451_58, __pyx_context, __pyx_t_5, __pyx_v_o, __pyx_t_1);
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

/* "../cython/include/numpy.pxd":453
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterNew(ndarray n):             # <<<<<<<<<<<<<<
 *     return NpyArray_IterNew(<NpyArray*> <npy_intp>n.Array)
 * 
 */

static CYTHON_INLINE NpyArrayIterObject *PyArray_IterNew(NumpyDotNet::ndarray^ __pyx_v_n) {
  NpyArrayIterObject *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":454
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterNew(ndarray n):
 *     return NpyArray_IterNew(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterAllButAxis(ndarray n, int *inaxis):
 */
  __pyx_t_1 = __site_get_Array_454_51->Target(__site_get_Array_454_51, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_454_51->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_454_51, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_IterNew(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":456
 *     return NpyArray_IterNew(<NpyArray*> <npy_intp>n.Array)
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterAllButAxis(ndarray n, int *inaxis):             # <<<<<<<<<<<<<<
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)
 * 
 */

static CYTHON_INLINE NpyArrayIterObject *PyArray_IterAllButAxis(NumpyDotNet::ndarray^ __pyx_v_n, int *__pyx_v_inaxis) {
  NpyArrayIterObject *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;

  /* "../cython/include/numpy.pxd":457
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterAllButAxis(ndarray n, int *inaxis):
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 */
  __pyx_t_1 = __site_get_Array_457_58->Target(__site_get_Array_457_58, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_457_58->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_457_58, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_IterAllButAxis(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)), __pyx_v_inaxis);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":459
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_NEXT(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_NEXT(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include/numpy.pxd":460
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 *     NpyArray_ITER_NEXT(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_NEXT(__pyx_v_obj);

}

/* "../cython/include/numpy.pxd":462
 *     NpyArray_ITER_NEXT(obj)
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_RESET(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_RESET(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include/numpy.pxd":463
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 *     NpyArray_ITER_RESET(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_RESET(__pyx_v_obj);

}

/* "../cython/include/numpy.pxd":465
 *     NpyArray_ITER_RESET(obj)
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     return NpyArray_ITER_DATA(obj)
 * 
 */

static CYTHON_INLINE void *PyArray_ITER_DATA(NpyArrayIterObject *__pyx_v_obj) {
  void *__pyx_r;

  /* "../cython/include/numpy.pxd":466
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):
 *     return NpyArray_ITER_DATA(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArrayNeighborhoodIterObject* PyArray_NeighborhoodIterNew(NpyArrayIterObject *obj,
 */
  __pyx_r = NpyArray_ITER_DATA(__pyx_v_obj);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":468
 *     return NpyArray_ITER_DATA(obj)
 * 
 * cdef inline NpyArrayNeighborhoodIterObject* PyArray_NeighborhoodIterNew(NpyArrayIterObject *obj,             # <<<<<<<<<<<<<<
 *                                                                         npy_intp *bounds,
 *                                                                         int mode,
 */

static CYTHON_INLINE NpyArrayNeighborhoodIterObject *PyArray_NeighborhoodIterNew(NpyArrayIterObject *__pyx_v_obj, __pyx_t_5numpy_npy_intp *__pyx_v_bounds, int __pyx_v_mode, void *__pyx_v_fill, npy_free_func __pyx_v_fillfree) {
  NpyArrayNeighborhoodIterObject *__pyx_r;

  /* "../cython/include/numpy.pxd":473
 *                                                                         void *fill,
 *                                                                         npy_free_func fillfree):
 *     return NpyArray_NeighborhoodIterNew(obj, bounds, mode, fill, fillfree)             # <<<<<<<<<<<<<<
 * 
 * cdef inline int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject* iter):
 */
  __pyx_r = NpyArray_NeighborhoodIterNew(__pyx_v_obj, __pyx_v_bounds, __pyx_v_mode, __pyx_v_fill, __pyx_v_fillfree);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":475
 *     return NpyArray_NeighborhoodIterNew(obj, bounds, mode, fill, fillfree)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include/numpy.pxd":476
 * 
 * cdef inline int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject* iter):
 *     return NpyArrayNeighborhoodIter_Reset(iter)             # <<<<<<<<<<<<<<
 * 
 * cdef inline int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject* iter):
 */
  __pyx_r = NpyArrayNeighborhoodIter_Reset(__pyx_v_iter);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":478
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include/numpy.pxd":479
 * 
 * cdef inline int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject* iter):
 *     return NpyArrayNeighborhoodIter_Next(iter)             # <<<<<<<<<<<<<<
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):
 */
  __pyx_r = NpyArrayNeighborhoodIter_Next(__pyx_v_iter);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":481
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(iter.ao)
 */

static CYTHON_INLINE NumpyDotNet::ndarray^ NpyIter_ARRAY(NpyArrayIterObject *__pyx_v_iter) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":482
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):
 *     return Npy_INTERFACE_array(iter.ao)             # <<<<<<<<<<<<<<
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_iter->ao)); 
  __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_1);
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
  __site_call2_36_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_36_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_37_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_38_19 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_38_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_39_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_61_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_61_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call2_62_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_cvt_cvt_double_64_25 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_66_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_71_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_71_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_71_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_71_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_71_0_3 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_71_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_PyPyArray_ContiguousFromObject_192_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyPyArray_ContiguousFromObject", false));
  __site_call4_192_53 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(4)));
  __site_call1_262_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_append_323_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_323_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_325_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_325_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_331_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_331_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_333_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_333_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_339_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_339_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_341_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_341_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_356_53 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_356_53 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_359_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_359_48 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_362_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_362_48 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_365_69 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_365_69 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_368_52 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_368_52 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndarray_375_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_get_ArrayReturn_375_30 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ArrayReturn", false));
  __site_call1_375_42 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_Array_378_47 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_378_47 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_381_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_get_Array_384_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_384_48 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_387_51 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_387_51 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_390_51 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_390_51 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_393_34 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_393_34 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_396_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_396_48 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_401_40 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_Zero_401_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Zero", false));
  __site_call1_401_54 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_401_54 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Dtype_409_62 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Dtype", false));
  __site_cvt_cvt_PY_LONG_LONG_409_62 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_414_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_FromAny_414_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "FromAny", false));
  __site_call6_414_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_op_and_423_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_istrue_423_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ior_424_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::OrAssign));
  __site_cvt_cvt_int_425_77 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_428_78 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_434_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_CheckFromAny_434_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "CheckFromAny", false));
  __site_call6_434_44 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_get_ndarray_438_29 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call2_438_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_NpyCoreApi_443_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyCoreApi", false));
  __site_get_CastToType_443_33 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "CastToType", false));
  __site_cvt_cvt_int_443_100 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_443_44 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_call2_451_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_cvt_bool_451_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ScalarGeneric_451_73 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ScalarGeneric", false));
  __site_call2_451_58 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_Array_454_51 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_454_51 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_457_58 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_457_58 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
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
  __pyx_delegate_val_quad_function = gcnew __pyx_delegate_t_5scipy_9integrate_9_quadpack_quad_function(quad_function);
  __pyx_function_pointer_quad_function = (__pyx_fp_t_quad_function)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_quad_function).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":5
 * 
 * cimport numpy as np
 * import numpy as np             # <<<<<<<<<<<<<<
 * np.import_array()
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":6
 * cimport numpy as np
 * import numpy as np
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "__quadpack.h":
 */
  import_array();

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":22
 *     void free(void *)
 * 
 * class QuadpackError(Exception): pass             # <<<<<<<<<<<<<<
 * 
 * quadpack_error = error = QuadpackError
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "Exception");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  FunctionCode^ func_code_QuadpackError = PythonOps::MakeFunctionCode(__pyx_context, "func_code_QuadpackError", nullptr, gcnew array<System::String^>{"arg0"}, FunctionAttributes::None, 0, 0, "", gcnew System::Func<CodeContext^, CodeContext^>(mk_empty_context), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), 0);
  PythonTuple^ tbases_QuadpackError = safe_cast<PythonTuple^>(__pyx_t_3);
  array<System::Object^>^ bases_QuadpackError = gcnew array<System::Object^>(tbases_QuadpackError->Count);
  tbases_QuadpackError->CopyTo(bases_QuadpackError, 0);
  __pyx_t_1 = PythonOps::MakeClass(func_code_QuadpackError, nullptr, __pyx_context, "QuadpackError", bases_QuadpackError, "");
  __pyx_t_3 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "QuadpackError", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":24
 * class QuadpackError(Exception): pass
 * 
 * quadpack_error = error = QuadpackError             # <<<<<<<<<<<<<<
 * quadpack_python_funtion = None
 * quadpack_extra_arguments = ()
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "QuadpackError");
  PythonOps::SetGlobal(__pyx_context, "quadpack_error", __pyx_t_1);
  PythonOps::SetGlobal(__pyx_context, "error", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":25
 * 
 * quadpack_error = error = QuadpackError
 * quadpack_python_funtion = None             # <<<<<<<<<<<<<<
 * quadpack_extra_arguments = ()
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "quadpack_python_funtion", nullptr);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":26
 * quadpack_error = error = QuadpackError
 * quadpack_python_funtion = None
 * quadpack_extra_arguments = ()             # <<<<<<<<<<<<<<
 * 
 * __version__ = 1.13
 */
  PythonOps::SetGlobal(__pyx_context, "quadpack_extra_arguments", ((System::Object^)PythonOps::EmptyTuple));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":28
 * quadpack_extra_arguments = ()
 * 
 * __version__ = 1.13             # <<<<<<<<<<<<<<
 * 
 * cdef QUAD_INIT_FUNC(fun, arg):
 */
  __pyx_t_1 = 1.13;
  PythonOps::SetGlobal(__pyx_context, "__version__", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_quadpack.pyx":1
 * """ Wrapper for the odepack module """             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "../cython/include/numpy.pxd":481
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(iter.ao)
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
[assembly: PythonModule("scipy__integrate___quadpack", module__quadpack::typeid)];
};
