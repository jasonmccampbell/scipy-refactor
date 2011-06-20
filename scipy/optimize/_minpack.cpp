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
  dict["__module__"] = "scipy.optimize._minpack";
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
#define __PYX_HAVE_API__scipy__optimize___minpack
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_descriptor.h"
#include "npy_arrayobject.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_iterators.h"
#include "npy_ironpython.h"
#include "stdlib.h"
#include "string.h"
#include "__minpack.h"

#if !defined(CYTHON_CCOMPLEX)
#define CYTHON_CCOMPLEX 1
#endif


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
/* Cython code section 'utility_code_proto' */

static CYTHON_INLINE long __Pyx_div_long(long, long); /* proto */

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
/* Module declarations from scipy.optimize._minpack */
static System::Object^ INIT_FUNC(System::Object^, System::Object^); /*proto*/
static System::Object^ RESTORE_FUNC(System::Object^); /*proto*/
static System::Object^ INIT_JAC_FUNC(System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static System::Object^ RESTORE_JAC_FUNC(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_8optimize_8_minpack_raw_multipack_calling_function(int *, double *, double *, int *);
static int raw_multipack_calling_function(int *, double *, double *, int *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_8optimize_8_minpack_jac_multipack_calling_function(int *, double *, double *, double *, int *, int *);
static int jac_multipack_calling_function(int *, double *, double *, double *, int *, int *); /*proto*/
static int raw_multipack_lm_function(int *, int *, double *, double *, int *); /*proto*/
static int jac_multipack_lm_function(int *, int *, double *, double *, double *, int *, int *); /*proto*/
static int smjac_multipack_lm_function(int *, int *, double *, double *, double *, int *); /*proto*/
static System::Object^ call_python_function(System::Object^, __pyx_t_5numpy_npy_intp, double *, System::Object^, int, System::Object^); /*proto*/
static void MATRIXC2F(double *, double *, int, int); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.optimize._minpack"

/* Implementation of scipy.optimize._minpack */
namespace clr__minpack {
  public ref class module__minpack sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_42_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_42_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_43_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_44_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_44_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_45_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_69_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_69_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_70_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_71_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_71_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_71_62;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_71_62;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_72_26;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_79_43;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_91_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_91_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_91_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_91_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_91_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_91_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_91_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_121_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_121_36;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyArray_DOUBLE_131_64;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_170_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_170_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_170_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_170_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_170_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_198_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_198_36;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyArray_DOUBLE_208_64;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_293_35;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_293_35;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_339_32;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_339_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_369_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_398_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_402_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_402_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_func_name_404_89;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_404_83;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_404_23;
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
static int^ __pyx_int_0;
static int^ __pyx_int_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":36
 * error = MinpackError
 * 
 * cdef INIT_FUNC(fun, arg):             # <<<<<<<<<<<<<<
 *     global multipack_python_function
 *     global multipack_extra_arguments
 */

static  System::Object^ INIT_FUNC(System::Object^ __pyx_v_fun, System::Object^ __pyx_v_arg) {
  System::Object^ __pyx_v_save;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  __pyx_v_save = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":40
 *     global multipack_extra_arguments
 * 
 *     if arg is None:             # <<<<<<<<<<<<<<
 *         arg = ()
 *     if not isinstance(arg, tuple):
 */
  __pyx_t_1 = (__pyx_v_arg == nullptr);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":41
 * 
 *     if arg is None:
 *         arg = ()             # <<<<<<<<<<<<<<
 *     if not isinstance(arg, tuple):
 *         raise MinpackError("Extra arguments must be in a tuple.")
 */
    __pyx_v_arg = ((System::Object^)PythonOps::EmptyTuple);
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":42
 *     if arg is None:
 *         arg = ()
 *     if not isinstance(arg, tuple):             # <<<<<<<<<<<<<<
 *         raise MinpackError("Extra arguments must be in a tuple.")
 *     if not callable(fun):
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "tuple");
  __pyx_t_4 = __site_call2_42_21->Target(__site_call2_42_21, __pyx_context, __pyx_t_2, __pyx_v_arg, ((System::Object^)__pyx_t_3));
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_1 = __site_istrue_42_21->Target(__site_istrue_42_21, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":43
 *         arg = ()
 *     if not isinstance(arg, tuple):
 *         raise MinpackError("Extra arguments must be in a tuple.")             # <<<<<<<<<<<<<<
 *     if not callable(fun):
 *         raise MinpackError("First argument must be a callable function.")
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "MinpackError");
    __pyx_t_3 = __site_call1_43_26->Target(__site_call1_43_26, __pyx_context, __pyx_t_4, ((System::Object^)"Extra arguments must be in a tuple."));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":44
 *     if not isinstance(arg, tuple):
 *         raise MinpackError("Extra arguments must be in a tuple.")
 *     if not callable(fun):             # <<<<<<<<<<<<<<
 *         raise MinpackError("First argument must be a callable function.")
 * 
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "callable");
  __pyx_t_4 = __site_call1_44_19->Target(__site_call1_44_19, __pyx_context, __pyx_t_3, __pyx_v_fun);
  __pyx_t_3 = nullptr;
  __pyx_t_5 = __site_istrue_44_19->Target(__site_istrue_44_19, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":45
 *         raise MinpackError("Extra arguments must be in a tuple.")
 *     if not callable(fun):
 *         raise MinpackError("First argument must be a callable function.")             # <<<<<<<<<<<<<<
 * 
 *     save = (multipack_python_function, multipack_extra_arguments)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "MinpackError");
    __pyx_t_3 = __site_call1_45_26->Target(__site_call1_45_26, __pyx_context, __pyx_t_4, ((System::Object^)"First argument must be a callable function."));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":47
 *         raise MinpackError("First argument must be a callable function.")
 * 
 *     save = (multipack_python_function, multipack_extra_arguments)             # <<<<<<<<<<<<<<
 *     multipack_python_function = fun
 *     multipack_extra_arguments = arg
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_v_5scipy_8optimize_8_minpack_multipack_python_function, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments});
  if (__pyx_t_3 != nullptr && dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_save = ((System::Object^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":48
 * 
 *     save = (multipack_python_function, multipack_extra_arguments)
 *     multipack_python_function = fun             # <<<<<<<<<<<<<<
 *     multipack_extra_arguments = arg
 *     return save
 */
  __pyx_v_5scipy_8optimize_8_minpack_multipack_python_function = __pyx_v_fun;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":49
 *     save = (multipack_python_function, multipack_extra_arguments)
 *     multipack_python_function = fun
 *     multipack_extra_arguments = arg             # <<<<<<<<<<<<<<
 *     return save
 * 
 */
  __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments = __pyx_v_arg;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":50
 *     multipack_python_function = fun
 *     multipack_extra_arguments = arg
 *     return save             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_save);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":53
 * 
 * 
 * cdef RESTORE_FUNC(savedArgs):             # <<<<<<<<<<<<<<
 *     global multipack_python_function
 *     global multipack_extra_arguments
 */

static  System::Object^ RESTORE_FUNC(System::Object^ __pyx_v_savedArgs) {
  System::Object^ __pyx_r = nullptr;
  array<System::Object^>^ __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":57
 *     global multipack_extra_arguments
 * 
 *     multipack_python_function, multipack_extra_arguments = savedArgs             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_savedArgs, 2)));
  __pyx_t_2 = __pyx_t_1[0];
  __pyx_t_3 = __pyx_t_1[1];
  __pyx_t_1 = nullptr;
  __pyx_v_5scipy_8optimize_8_minpack_multipack_python_function = __pyx_t_2;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments = __pyx_t_3;
  __pyx_t_3 = nullptr;

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":61
 * 
 * 
 * cdef INIT_JAC_FUNC(fun,Dfun,arg,col_deriv):             # <<<<<<<<<<<<<<
 *     global multipack_python_function
 *     global multipack_extra_arguments
 */

static  System::Object^ INIT_JAC_FUNC(System::Object^ __pyx_v_fun, System::Object^ __pyx_v_Dfun, System::Object^ __pyx_v_arg, System::Object^ __pyx_v_col_deriv) {
  System::Object^ __pyx_v_save;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  __pyx_v_save = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":67
 *     global multipack_jac_transpose
 * 
 *     if arg is None:             # <<<<<<<<<<<<<<
 *         arg = ()
 *     if not isinstance(arg, tuple):
 */
  __pyx_t_1 = (__pyx_v_arg == nullptr);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":68
 * 
 *     if arg is None:
 *         arg = ()             # <<<<<<<<<<<<<<
 *     if not isinstance(arg, tuple):
 *         raise MinpackError("Extra arguments must be in a tuple.")
 */
    __pyx_v_arg = ((System::Object^)PythonOps::EmptyTuple);
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":69
 *     if arg is None:
 *         arg = ()
 *     if not isinstance(arg, tuple):             # <<<<<<<<<<<<<<
 *         raise MinpackError("Extra arguments must be in a tuple.")
 *     if not callable(fun) or (Dfun is not None and not callable(Dfun)):
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "tuple");
  __pyx_t_4 = __site_call2_69_21->Target(__site_call2_69_21, __pyx_context, __pyx_t_2, __pyx_v_arg, ((System::Object^)__pyx_t_3));
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_1 = __site_istrue_69_21->Target(__site_istrue_69_21, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":70
 *         arg = ()
 *     if not isinstance(arg, tuple):
 *         raise MinpackError("Extra arguments must be in a tuple.")             # <<<<<<<<<<<<<<
 *     if not callable(fun) or (Dfun is not None and not callable(Dfun)):
 *         raise MinpackError("The function and it's Jacobian must be callable functions.")
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "MinpackError");
    __pyx_t_3 = __site_call1_70_26->Target(__site_call1_70_26, __pyx_context, __pyx_t_4, ((System::Object^)"Extra arguments must be in a tuple."));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":71
 *     if not isinstance(arg, tuple):
 *         raise MinpackError("Extra arguments must be in a tuple.")
 *     if not callable(fun) or (Dfun is not None and not callable(Dfun)):             # <<<<<<<<<<<<<<
 *         raise MinpackError("The function and it's Jacobian must be callable functions.")
 * 
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "callable");
  __pyx_t_4 = __site_call1_71_19->Target(__site_call1_71_19, __pyx_context, __pyx_t_3, __pyx_v_fun);
  __pyx_t_3 = nullptr;
  __pyx_t_5 = __site_istrue_71_19->Target(__site_istrue_71_19, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_1 = (!__pyx_t_5);
  if (!__pyx_t_1) {
    __pyx_t_5 = (__pyx_v_Dfun != nullptr);
    if (__pyx_t_5) {
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "callable");
      __pyx_t_3 = __site_call1_71_62->Target(__site_call1_71_62, __pyx_context, __pyx_t_4, __pyx_v_Dfun);
      __pyx_t_4 = nullptr;
      __pyx_t_6 = __site_istrue_71_62->Target(__site_istrue_71_62, __pyx_t_3);
      __pyx_t_3 = nullptr;
      __pyx_t_7 = (!__pyx_t_6);
      __pyx_t_6 = __pyx_t_7;
    } else {
      __pyx_t_6 = __pyx_t_5;
    }
    __pyx_t_5 = __pyx_t_6;
  } else {
    __pyx_t_5 = __pyx_t_1;
  }
  if (__pyx_t_5) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":72
 *         raise MinpackError("Extra arguments must be in a tuple.")
 *     if not callable(fun) or (Dfun is not None and not callable(Dfun)):
 *         raise MinpackError("The function and it's Jacobian must be callable functions.")             # <<<<<<<<<<<<<<
 * 
 *     save = (multipack_python_function, multipack_extra_arguments, multipack_python_jacobian, multipack_jac_transpose)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "MinpackError");
    __pyx_t_4 = __site_call1_72_26->Target(__site_call1_72_26, __pyx_context, __pyx_t_3, ((System::Object^)"The function and it's Jacobian must be callable functions."));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":74
 *         raise MinpackError("The function and it's Jacobian must be callable functions.")
 * 
 *     save = (multipack_python_function, multipack_extra_arguments, multipack_python_jacobian, multipack_jac_transpose)             # <<<<<<<<<<<<<<
 * 
 *     multipack_python_function = fun
 */
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_v_5scipy_8optimize_8_minpack_multipack_python_function, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments, __pyx_v_5scipy_8optimize_8_minpack_multipack_python_jacobian, __pyx_v_5scipy_8optimize_8_minpack_multipack_jac_transpose});
  if (__pyx_t_4 != nullptr && dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_4) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_save = ((System::Object^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":76
 *     save = (multipack_python_function, multipack_extra_arguments, multipack_python_jacobian, multipack_jac_transpose)
 * 
 *     multipack_python_function = fun             # <<<<<<<<<<<<<<
 *     multipack_extra_arguments = arg
 *     multipack_python_jacobian = Dfun
 */
  __pyx_v_5scipy_8optimize_8_minpack_multipack_python_function = __pyx_v_fun;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":77
 * 
 *     multipack_python_function = fun
 *     multipack_extra_arguments = arg             # <<<<<<<<<<<<<<
 *     multipack_python_jacobian = Dfun
 *     multipack_jac_transpose = not col_deriv
 */
  __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments = __pyx_v_arg;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":78
 *     multipack_python_function = fun
 *     multipack_extra_arguments = arg
 *     multipack_python_jacobian = Dfun             # <<<<<<<<<<<<<<
 *     multipack_jac_transpose = not col_deriv
 *     return save
 */
  __pyx_v_5scipy_8optimize_8_minpack_multipack_python_jacobian = __pyx_v_Dfun;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":79
 *     multipack_extra_arguments = arg
 *     multipack_python_jacobian = Dfun
 *     multipack_jac_transpose = not col_deriv             # <<<<<<<<<<<<<<
 *     return save
 * 
 */
  __pyx_t_5 = __site_istrue_79_43->Target(__site_istrue_79_43, __pyx_v_col_deriv);
  __pyx_t_4 = (!__pyx_t_5);
  __pyx_v_5scipy_8optimize_8_minpack_multipack_jac_transpose = __pyx_t_4;
  __pyx_t_4 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":80
 *     multipack_python_jacobian = Dfun
 *     multipack_jac_transpose = not col_deriv
 *     return save             # <<<<<<<<<<<<<<
 * 
 * cdef RESTORE_JAC_FUNC(savedArgs):
 */
  __pyx_r = ((System::Object^)__pyx_v_save);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":82
 *     return save
 * 
 * cdef RESTORE_JAC_FUNC(savedArgs):             # <<<<<<<<<<<<<<
 *     global multipack_python_function
 *     global multipack_extra_arguments
 */

static  System::Object^ RESTORE_JAC_FUNC(System::Object^ __pyx_v_savedArgs) {
  System::Object^ __pyx_r = nullptr;
  array<System::Object^>^ __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":88
 *     global multipack_jac_transpose
 * 
 *     multipack_python_function, multipack_extra_arguments, multipack_python_jacobian, multipack_jac_transpose = savedArgs             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_savedArgs, 4)));
  __pyx_t_2 = __pyx_t_1[0];
  __pyx_t_3 = __pyx_t_1[1];
  __pyx_t_4 = __pyx_t_1[2];
  __pyx_t_5 = __pyx_t_1[3];
  __pyx_t_1 = nullptr;
  __pyx_v_5scipy_8optimize_8_minpack_multipack_python_function = __pyx_t_2;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments = __pyx_t_3;
  __pyx_t_3 = nullptr;
  __pyx_v_5scipy_8optimize_8_minpack_multipack_python_jacobian = __pyx_t_4;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_8optimize_8_minpack_multipack_jac_transpose = __pyx_t_5;
  __pyx_t_5 = nullptr;

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":91
 * 
 * 
 * def hybdr(fun, x0, extra_args=None, int full_output=0, double xtol=1.49012e-8, int maxfev=-10, int ml=-10,             # <<<<<<<<<<<<<<
 *           int mu=-10, double epsfcn=0.0, double factor=1.0e2, o_diag=None):
 *     """[x,infodict,info] = _hybrd(fun, x0, args, full_output, xtol, maxfev, ml, mu, epsfcn, factor, diag)"""
 */

static System::Object^ hybdr(System::Object^ fun, System::Object^ x0, [InteropServices::Optional]System::Object^ extra_args, [InteropServices::Optional]System::Object^ full_output, [InteropServices::Optional]System::Object^ xtol, [InteropServices::Optional]System::Object^ maxfev, [InteropServices::Optional]System::Object^ ml, [InteropServices::Optional]System::Object^ mu, [InteropServices::Optional]System::Object^ epsfcn, [InteropServices::Optional]System::Object^ factor, [InteropServices::Optional]System::Object^ o_diag) {
  System::Object^ __pyx_v_fun = nullptr;
  System::Object^ __pyx_v_x0 = nullptr;
  System::Object^ __pyx_v_extra_args = nullptr;
  int __pyx_v_full_output;
  double __pyx_v_xtol;
  int __pyx_v_maxfev;
  int __pyx_v_ml;
  int __pyx_v_mu;
  double __pyx_v_epsfcn;
  double __pyx_v_factor;
  System::Object^ __pyx_v_o_diag = nullptr;
  int __pyx_v_mode;
  int __pyx_v_nprint;
  int __pyx_v_info;
  int __pyx_v_nfev;
  int __pyx_v_ldfjac;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_intp __pyx_v_lr;
  double *__pyx_v_x;
  double *__pyx_v_fvec;
  double *__pyx_v_diag;
  double *__pyx_v_fjac;
  double *__pyx_v_r;
  double *__pyx_v_qtf;
  NumpyDotNet::ndarray^ __pyx_v_ap_x;
  NumpyDotNet::ndarray^ __pyx_v_ap_fvec;
  NumpyDotNet::ndarray^ __pyx_v_ap_fjac;
  NumpyDotNet::ndarray^ __pyx_v_ap_r;
  NumpyDotNet::ndarray^ __pyx_v_ap_qtf;
  NumpyDotNet::ndarray^ __pyx_v_ap_diag;
  __pyx_t_5numpy_npy_intp __pyx_v_dims[2];
  int __pyx_v_allocated;
  double *__pyx_v_wa;
  System::Object^ __pyx_v_savedArgs;
  System::Object^ __pyx_v_dict;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  PythonDictionary^ __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_fun = fun;
  __pyx_v_x0 = x0;
  if (dynamic_cast<System::Reflection::Missing^>(extra_args) == nullptr) {
    __pyx_v_extra_args = extra_args;
  } else {
    __pyx_v_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(full_output) == nullptr) {
    __pyx_v_full_output = __site_cvt_cvt_int_91_0->Target(__site_cvt_cvt_int_91_0, full_output);
  } else {
    __pyx_v_full_output = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(xtol) == nullptr) {
    __pyx_v_xtol = __site_cvt_cvt_double_91_0->Target(__site_cvt_cvt_double_91_0, xtol);
  } else {
    __pyx_v_xtol = ((double)1.49012e-8);
  }
  if (dynamic_cast<System::Reflection::Missing^>(maxfev) == nullptr) {
    __pyx_v_maxfev = __site_cvt_cvt_int_91_0_1->Target(__site_cvt_cvt_int_91_0_1, maxfev);
  } else {
    __pyx_v_maxfev = ((int)-10);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ml) == nullptr) {
    __pyx_v_ml = __site_cvt_cvt_int_91_0_2->Target(__site_cvt_cvt_int_91_0_2, ml);
  } else {
    __pyx_v_ml = ((int)-10);
  }
  if (dynamic_cast<System::Reflection::Missing^>(mu) == nullptr) {
    __pyx_v_mu = __site_cvt_cvt_int_91_0_3->Target(__site_cvt_cvt_int_91_0_3, mu);
  } else {
    __pyx_v_mu = ((int)-10);
  }
  if (dynamic_cast<System::Reflection::Missing^>(epsfcn) == nullptr) {
    __pyx_v_epsfcn = __site_cvt_cvt_double_91_0_1->Target(__site_cvt_cvt_double_91_0_1, epsfcn);
  } else {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":92
 * 
 * def hybdr(fun, x0, extra_args=None, int full_output=0, double xtol=1.49012e-8, int maxfev=-10, int ml=-10,
 *           int mu=-10, double epsfcn=0.0, double factor=1.0e2, o_diag=None):             # <<<<<<<<<<<<<<
 *     """[x,infodict,info] = _hybrd(fun, x0, args, full_output, xtol, maxfev, ml, mu, epsfcn, factor, diag)"""
 * 
 */
    __pyx_v_epsfcn = ((double)0.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(factor) == nullptr) {
    __pyx_v_factor = __site_cvt_cvt_double_91_0_2->Target(__site_cvt_cvt_double_91_0_2, factor);
  } else {
    __pyx_v_factor = ((double)1.0e2);
  }
  if (dynamic_cast<System::Reflection::Missing^>(o_diag) == nullptr) {
    __pyx_v_o_diag = o_diag;
  } else {
    __pyx_v_o_diag = ((System::Object^)nullptr);
  }
  __pyx_v_ap_x = nullptr;
  __pyx_v_ap_fvec = nullptr;
  __pyx_v_ap_fjac = nullptr;
  __pyx_v_ap_r = nullptr;
  __pyx_v_ap_qtf = nullptr;
  __pyx_v_ap_diag = nullptr;
  __pyx_v_savedArgs = nullptr;
  __pyx_v_dict = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":95
 *     """[x,infodict,info] = _hybrd(fun, x0, args, full_output, xtol, maxfev, ml, mu, epsfcn, factor, diag)"""
 * 
 *     cdef int      mode = 2, nprint = 0, info, nfev, ldfjac             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp n, lr
 *     cdef double   *x, *fvec, *diag, *fjac, *r, *qtf
 */
  __pyx_v_mode = 2;
  __pyx_v_nprint = 0;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":102
 * 
 *     cdef np.npy_intp dims[2]
 *     cdef int      allocated = 0             # <<<<<<<<<<<<<<
 *     cdef double   *wa = NULL
 * 
 */
  __pyx_v_allocated = 0;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":103
 *     cdef np.npy_intp dims[2]
 *     cdef int      allocated = 0
 *     cdef double   *wa = NULL             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_v_wa = NULL;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":106
 * 
 * 
 *     savedArgs = INIT_FUNC(fun,extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         # Initial input vector
 */
  __pyx_t_1 = INIT_FUNC(__pyx_v_fun, __pyx_v_extra_args); 
  __pyx_v_savedArgs = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":107
 * 
 *     savedArgs = INIT_FUNC(fun,extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         # Initial input vector
 *         ap_x = np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
 */
  try {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":109
 *     try:
 *         # Initial input vector
 *         ap_x = np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)             # <<<<<<<<<<<<<<
 *         x = <double *>np.PyArray_DATA(ap_x)
 *         n = np.PyArray_DIMS(ap_x)[0]
 */
    __pyx_t_1 = (System::Object^)(long long)(NPY_DOUBLE);
    __pyx_t_2 = PyArray_ContiguousFromObject(__pyx_v_x0, __pyx_t_1, __pyx_int_1, __pyx_int_1); 
    __pyx_t_1 = nullptr;
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ap_x = ((NumpyDotNet::ndarray^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":110
 *         # Initial input vector
 *         ap_x = np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
 *         x = <double *>np.PyArray_DATA(ap_x)             # <<<<<<<<<<<<<<
 *         n = np.PyArray_DIMS(ap_x)[0]
 * 
 */
    __pyx_v_x = ((double *)PyArray_DATA(__pyx_v_ap_x));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":111
 *         ap_x = np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
 *         x = <double *>np.PyArray_DATA(ap_x)
 *         n = np.PyArray_DIMS(ap_x)[0]             # <<<<<<<<<<<<<<
 * 
 *         lr = n * (n + 1) / 2
 */
    __pyx_v_n = (PyArray_DIMS(__pyx_v_ap_x)[0]);

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":113
 *         n = np.PyArray_DIMS(ap_x)[0]
 * 
 *         lr = n * (n + 1) / 2             # <<<<<<<<<<<<<<
 *         if (ml < 0): ml = n-1
 *         if (mu < 0): mu = n-1
 */
    __pyx_v_lr = __Pyx_div_long((__pyx_v_n * (__pyx_v_n + 1)), 2);

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":114
 * 
 *         lr = n * (n + 1) / 2
 *         if (ml < 0): ml = n-1             # <<<<<<<<<<<<<<
 *         if (mu < 0): mu = n-1
 *         if (maxfev < 0): maxfev = 200*(n+1)
 */
    __pyx_t_3 = (__pyx_v_ml < 0);
    if (__pyx_t_3) {
      __pyx_v_ml = (__pyx_v_n - 1);
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":115
 *         lr = n * (n + 1) / 2
 *         if (ml < 0): ml = n-1
 *         if (mu < 0): mu = n-1             # <<<<<<<<<<<<<<
 *         if (maxfev < 0): maxfev = 200*(n+1)
 * 
 */
    __pyx_t_3 = (__pyx_v_mu < 0);
    if (__pyx_t_3) {
      __pyx_v_mu = (__pyx_v_n - 1);
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":116
 *         if (ml < 0): ml = n-1
 *         if (mu < 0): mu = n-1
 *         if (maxfev < 0): maxfev = 200*(n+1)             # <<<<<<<<<<<<<<
 * 
 *         # Setup array to hold the function evaluations
 */
    __pyx_t_3 = (__pyx_v_maxfev < 0);
    if (__pyx_t_3) {
      __pyx_v_maxfev = (200 * (__pyx_v_n + 1));
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":119
 * 
 *         # Setup array to hold the function evaluations
 *         ap_fvec = call_python_function(fun, n, x, extra_args, 1, minpack_error)             # <<<<<<<<<<<<<<
 *         fvec = <double *>np.PyArray_DATA(ap_fvec)
 *         if np.PyArray_NDIM(ap_fvec) == 0:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
    __pyx_t_1 = call_python_function(__pyx_v_fun, __pyx_v_n, __pyx_v_x, __pyx_v_extra_args, 1, __pyx_t_2); 
    __pyx_t_2 = nullptr;
    if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ap_fvec = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":120
 *         # Setup array to hold the function evaluations
 *         ap_fvec = call_python_function(fun, n, x, extra_args, 1, minpack_error)
 *         fvec = <double *>np.PyArray_DATA(ap_fvec)             # <<<<<<<<<<<<<<
 *         if np.PyArray_NDIM(ap_fvec) == 0:
 *             n = 1
 */
    __pyx_v_fvec = ((double *)PyArray_DATA(__pyx_v_ap_fvec));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":121
 *         ap_fvec = call_python_function(fun, n, x, extra_args, 1, minpack_error)
 *         fvec = <double *>np.PyArray_DATA(ap_fvec)
 *         if np.PyArray_NDIM(ap_fvec) == 0:             # <<<<<<<<<<<<<<
 *             n = 1
 *         elif np.PyArray_DIMS(ap_fvec)[0] < n:
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap_fvec); 
    __pyx_t_2 = __site_op_eq_121_36->Target(__site_op_eq_121_36, __pyx_t_1, __pyx_int_0);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_istrue_121_36->Target(__site_istrue_121_36, __pyx_t_2);
    __pyx_t_2 = nullptr;
    if (__pyx_t_3) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":122
 *         fvec = <double *>np.PyArray_DATA(ap_fvec)
 *         if np.PyArray_NDIM(ap_fvec) == 0:
 *             n = 1             # <<<<<<<<<<<<<<
 *         elif np.PyArray_DIMS(ap_fvec)[0] < n:
 *             n = np.PyArray_DIMS(ap_fvec)[0]
 */
      __pyx_v_n = 1;
      goto __pyx_L8;
    }

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":123
 *         if np.PyArray_NDIM(ap_fvec) == 0:
 *             n = 1
 *         elif np.PyArray_DIMS(ap_fvec)[0] < n:             # <<<<<<<<<<<<<<
 *             n = np.PyArray_DIMS(ap_fvec)[0]
 * 
 */
    __pyx_t_3 = ((PyArray_DIMS(__pyx_v_ap_fvec)[0]) < __pyx_v_n);
    if (__pyx_t_3) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":124
 *             n = 1
 *         elif np.PyArray_DIMS(ap_fvec)[0] < n:
 *             n = np.PyArray_DIMS(ap_fvec)[0]             # <<<<<<<<<<<<<<
 * 
 *         if o_diag is None:          # Set the diag vector from input
 */
      __pyx_v_n = (PyArray_DIMS(__pyx_v_ap_fvec)[0]);
      goto __pyx_L8;
    }
    __pyx_L8:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":126
 *             n = np.PyArray_DIMS(ap_fvec)[0]
 * 
 *         if o_diag is None:          # Set the diag vector from input             # <<<<<<<<<<<<<<
 *             ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 */
    __pyx_t_3 = (__pyx_v_o_diag == nullptr);
    if (__pyx_t_3) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":127
 * 
 *         if o_diag is None:          # Set the diag vector from input
 *             ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 *             mode = 1
 */
      __pyx_t_2 = PyArray_SimpleNew(1, (&__pyx_v_n), NPY_DOUBLE); 
      if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_diag = ((NumpyDotNet::ndarray^)__pyx_t_2);
      __pyx_t_2 = nullptr;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":128
 *         if o_diag is None:          # Set the diag vector from input
 *             ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *             diag = <double *>np.PyArray_DATA(ap_diag)             # <<<<<<<<<<<<<<
 *             mode = 1
 *         else:
 */
      __pyx_v_diag = ((double *)PyArray_DATA(__pyx_v_ap_diag));

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":129
 *             ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 *             mode = 1             # <<<<<<<<<<<<<<
 *         else:
 *             ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
 */
      __pyx_v_mode = 1;
      goto __pyx_L9;
    }
    /*else*/ {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":131
 *             mode = 1
 *         else:
 *             ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)             # <<<<<<<<<<<<<<
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 *             mode = 2
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
      __pyx_t_1 = __site_get_PyArray_DOUBLE_131_64->Target(__site_get_PyArray_DOUBLE_131_64, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      __pyx_t_2 = PyArray_ContiguousFromObject(__pyx_v_o_diag, __pyx_t_1, __pyx_int_1, __pyx_int_1); 
      __pyx_t_1 = nullptr;
      if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_diag = ((NumpyDotNet::ndarray^)__pyx_t_2);
      __pyx_t_2 = nullptr;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":132
 *         else:
 *             ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
 *             diag = <double *>np.PyArray_DATA(ap_diag)             # <<<<<<<<<<<<<<
 *             mode = 2
 * 
 */
      __pyx_v_diag = ((double *)PyArray_DATA(__pyx_v_ap_diag));

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":133
 *             ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 *             mode = 2             # <<<<<<<<<<<<<<
 * 
 *         dims[0] = n
 */
      __pyx_v_mode = 2;
    }
    __pyx_L9:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":135
 *             mode = 2
 * 
 *         dims[0] = n             # <<<<<<<<<<<<<<
 *         dims[1] = n
 *         ap_r = np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
 */
    (__pyx_v_dims[0]) = __pyx_v_n;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":136
 * 
 *         dims[0] = n
 *         dims[1] = n             # <<<<<<<<<<<<<<
 *         ap_r = np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
 *         ap_qtf = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 */
    (__pyx_v_dims[1]) = __pyx_v_n;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":137
 *         dims[0] = n
 *         dims[1] = n
 *         ap_r = np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *         ap_qtf = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *         ap_fjac = np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)
 */
    __pyx_t_2 = PyArray_SimpleNew(1, (&__pyx_v_lr), NPY_DOUBLE); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ap_r = ((NumpyDotNet::ndarray^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":138
 *         dims[1] = n
 *         ap_r = np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
 *         ap_qtf = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *         ap_fjac = np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)
 * 
 */
    __pyx_t_2 = PyArray_SimpleNew(1, (&__pyx_v_n), NPY_DOUBLE); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ap_qtf = ((NumpyDotNet::ndarray^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":139
 *         ap_r = np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
 *         ap_qtf = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *         ap_fjac = np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 * 
 *         r = <double *>np.PyArray_DATA(ap_r)
 */
    __pyx_t_2 = PyArray_SimpleNew(2, __pyx_v_dims, NPY_DOUBLE); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ap_fjac = ((NumpyDotNet::ndarray^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":141
 *         ap_fjac = np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)
 * 
 *         r = <double *>np.PyArray_DATA(ap_r)             # <<<<<<<<<<<<<<
 *         qtf = <double *>np.PyArray_DATA(ap_qtf)
 *         fjac = <double *>np.PyArray_DATA(ap_fjac)
 */
    __pyx_v_r = ((double *)PyArray_DATA(__pyx_v_ap_r));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":142
 * 
 *         r = <double *>np.PyArray_DATA(ap_r)
 *         qtf = <double *>np.PyArray_DATA(ap_qtf)             # <<<<<<<<<<<<<<
 *         fjac = <double *>np.PyArray_DATA(ap_fjac)
 *         ldfjac = dims[1]
 */
    __pyx_v_qtf = ((double *)PyArray_DATA(__pyx_v_ap_qtf));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":143
 *         r = <double *>np.PyArray_DATA(ap_r)
 *         qtf = <double *>np.PyArray_DATA(ap_qtf)
 *         fjac = <double *>np.PyArray_DATA(ap_fjac)             # <<<<<<<<<<<<<<
 *         ldfjac = dims[1]
 * 
 */
    __pyx_v_fjac = ((double *)PyArray_DATA(__pyx_v_ap_fjac));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":144
 *         qtf = <double *>np.PyArray_DATA(ap_qtf)
 *         fjac = <double *>np.PyArray_DATA(ap_fjac)
 *         ldfjac = dims[1]             # <<<<<<<<<<<<<<
 * 
 *         wa = <double *>malloc(4*n * sizeof(double))
 */
    __pyx_v_ldfjac = (__pyx_v_dims[1]);

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":146
 *         ldfjac = dims[1]
 * 
 *         wa = <double *>malloc(4*n * sizeof(double))             # <<<<<<<<<<<<<<
 * 
 *         allocated = 1
 */
    __pyx_v_wa = ((double *)malloc(((4 * __pyx_v_n) * (sizeof(double)))));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":148
 *         wa = <double *>malloc(4*n * sizeof(double))
 * 
 *         allocated = 1             # <<<<<<<<<<<<<<
 * 
 *         # Call the underlying FORTRAN routines.
 */
    __pyx_v_allocated = 1;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":151
 * 
 *         # Call the underlying FORTRAN routines.
 *         HYBRD(<void *>raw_multipack_calling_function, &n, x, fvec, &xtol, &maxfev, &ml, &mu, &epsfcn, diag, &mode, &factor, &nprint, &info, &nfev, fjac, &ldfjac, r, &lr, qtf, wa, wa+n, wa+2*n, wa+3*n)             # <<<<<<<<<<<<<<
 *     finally:
 *         RESTORE_FUNC(savedArgs)
 */
    HYBRD(((void *)__pyx_function_pointer_raw_multipack_calling_function), (&__pyx_v_n), __pyx_v_x, __pyx_v_fvec, (&__pyx_v_xtol), (&__pyx_v_maxfev), (&__pyx_v_ml), (&__pyx_v_mu), (&__pyx_v_epsfcn), __pyx_v_diag, (&__pyx_v_mode), (&__pyx_v_factor), (&__pyx_v_nprint), (&__pyx_v_info), (&__pyx_v_nfev), __pyx_v_fjac, (&__pyx_v_ldfjac), __pyx_v_r, (&__pyx_v_lr), __pyx_v_qtf, __pyx_v_wa, (__pyx_v_wa + __pyx_v_n), (__pyx_v_wa + (2 * __pyx_v_n)), (__pyx_v_wa + (3 * __pyx_v_n)));
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":153
 *         HYBRD(<void *>raw_multipack_calling_function, &n, x, fvec, &xtol, &maxfev, &ml, &mu, &epsfcn, diag, &mode, &factor, &nprint, &info, &nfev, fjac, &ldfjac, r, &lr, qtf, wa, wa+n, wa+2*n, wa+3*n)
 *     finally:
 *         RESTORE_FUNC(savedArgs)             # <<<<<<<<<<<<<<
 *         if allocated:
 *             free(wa)
 */
  finally {
    __pyx_t_2 = RESTORE_FUNC(__pyx_v_savedArgs); 
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":154
 *     finally:
 *         RESTORE_FUNC(savedArgs)
 *         if allocated:             # <<<<<<<<<<<<<<
 *             free(wa)
 * 
 */
    if (__pyx_v_allocated) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":155
 *         RESTORE_FUNC(savedArgs)
 *         if allocated:
 *             free(wa)             # <<<<<<<<<<<<<<
 * 
 *     if full_output:
 */
      free(__pyx_v_wa);
      goto __pyx_L10;
    }
    __pyx_L10:;
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":157
 *             free(wa)
 * 
 *     if full_output:             # <<<<<<<<<<<<<<
 *         dict = {
 *             "fvec" : np.PyArray_Return(ap_fvec),
 */
  if (__pyx_v_full_output) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":158
 * 
 *     if full_output:
 *         dict = {             # <<<<<<<<<<<<<<
 *             "fvec" : np.PyArray_Return(ap_fvec),
 *             "nfev" : nfev,
 */
    __pyx_t_4 = PythonOps::MakeEmptyDict();

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":159
 *     if full_output:
 *         dict = {
 *             "fvec" : np.PyArray_Return(ap_fvec),             # <<<<<<<<<<<<<<
 *             "nfev" : nfev,
 *             "fjac" : np.PyArray_Return(ap_fjac),
 */
    __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_ap_fvec)); 
    __pyx_t_4[((System::Object^)"fvec")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":160
 *         dict = {
 *             "fvec" : np.PyArray_Return(ap_fvec),
 *             "nfev" : nfev,             # <<<<<<<<<<<<<<
 *             "fjac" : np.PyArray_Return(ap_fjac),
 *             "r" : np.PyArray_Return(ap_r),
 */
    __pyx_t_2 = __pyx_v_nfev;
    __pyx_t_4[((System::Object^)"nfev")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":161
 *             "fvec" : np.PyArray_Return(ap_fvec),
 *             "nfev" : nfev,
 *             "fjac" : np.PyArray_Return(ap_fjac),             # <<<<<<<<<<<<<<
 *             "r" : np.PyArray_Return(ap_r),
 *             "qtf" : np.PyArray_Return(ap_qtf)
 */
    __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_ap_fjac)); 
    __pyx_t_4[((System::Object^)"fjac")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":162
 *             "nfev" : nfev,
 *             "fjac" : np.PyArray_Return(ap_fjac),
 *             "r" : np.PyArray_Return(ap_r),             # <<<<<<<<<<<<<<
 *             "qtf" : np.PyArray_Return(ap_qtf)
 *         }
 */
    __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_ap_r)); 
    __pyx_t_4[((System::Object^)"r")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":163
 *             "fjac" : np.PyArray_Return(ap_fjac),
 *             "r" : np.PyArray_Return(ap_r),
 *             "qtf" : np.PyArray_Return(ap_qtf)             # <<<<<<<<<<<<<<
 *         }
 *         return (np.PyArray_Return(ap_x), dict, info)
 */
    __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_ap_qtf)); 
    __pyx_t_4[((System::Object^)"qtf")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_v_dict = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":165
 *             "qtf" : np.PyArray_Return(ap_qtf)
 *         }
 *         return (np.PyArray_Return(ap_x), dict, info)             # <<<<<<<<<<<<<<
 *     else:
 *         return (np.PyArray_Return(ap_x), info)
 */
    __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_ap_x)); 
    __pyx_t_1 = __pyx_v_info;
    __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, ((System::Object^)__pyx_v_dict), __pyx_t_1});
    __pyx_t_2 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;
    goto __pyx_L11;
  }
  /*else*/ {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":167
 *         return (np.PyArray_Return(ap_x), dict, info)
 *     else:
 *         return (np.PyArray_Return(ap_x), info)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_t_5 = PyArray_Return(((System::Object^)__pyx_v_ap_x)); 
    __pyx_t_1 = __pyx_v_info;
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_1});
    __pyx_t_5 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L11:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":170
 * 
 * 
 * def hybrj(fun, Dfun, x0, extra_args=None, int full_output=0, int col_deriv=1, double xtol=1.49012e-8,             # <<<<<<<<<<<<<<
 *           int maxfev = -10, double factor=1.0e2, o_diag=None):
 *     """[x,infodict,info] = _hybrj(fun, Dfun, x0, args, full_output, col_deriv, xtol, maxfev, factor, diag)"""
 */

static System::Object^ hybrj(System::Object^ fun, System::Object^ Dfun, System::Object^ x0, [InteropServices::Optional]System::Object^ extra_args, [InteropServices::Optional]System::Object^ full_output, [InteropServices::Optional]System::Object^ col_deriv, [InteropServices::Optional]System::Object^ xtol, [InteropServices::Optional]System::Object^ maxfev, [InteropServices::Optional]System::Object^ factor, [InteropServices::Optional]System::Object^ o_diag) {
  System::Object^ __pyx_v_fun = nullptr;
  System::Object^ __pyx_v_Dfun = nullptr;
  System::Object^ __pyx_v_x0 = nullptr;
  System::Object^ __pyx_v_extra_args = nullptr;
  int __pyx_v_full_output;
  int __pyx_v_col_deriv;
  double __pyx_v_xtol;
  int __pyx_v_maxfev;
  double __pyx_v_factor;
  System::Object^ __pyx_v_o_diag = nullptr;
  int __pyx_v_mode;
  int __pyx_v_nprint;
  int __pyx_v_info;
  int __pyx_v_nfev;
  int __pyx_v_njev;
  int __pyx_v_ldfjac;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_intp __pyx_v_lr;
  double *__pyx_v_x;
  double *__pyx_v_fvec;
  double *__pyx_v_diag;
  double *__pyx_v_fjac;
  double *__pyx_v_r;
  double *__pyx_v_qtf;
  NumpyDotNet::ndarray^ __pyx_v_ap_x;
  NumpyDotNet::ndarray^ __pyx_v_ap_fvec;
  NumpyDotNet::ndarray^ __pyx_v_ap_fjac;
  NumpyDotNet::ndarray^ __pyx_v_ap_r;
  NumpyDotNet::ndarray^ __pyx_v_ap_qtf;
  NumpyDotNet::ndarray^ __pyx_v_ap_diag;
  __pyx_t_5numpy_npy_intp __pyx_v_dims[2];
  int __pyx_v_allocated;
  double *__pyx_v_wa;
  System::Object^ __pyx_v_savedArgs;
  System::Object^ __pyx_v_dict;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  PythonDictionary^ __pyx_t_7;
  System::Object^ __pyx_t_8 = nullptr;
  __pyx_v_fun = fun;
  __pyx_v_Dfun = Dfun;
  __pyx_v_x0 = x0;
  if (dynamic_cast<System::Reflection::Missing^>(extra_args) == nullptr) {
    __pyx_v_extra_args = extra_args;
  } else {
    __pyx_v_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(full_output) == nullptr) {
    __pyx_v_full_output = __site_cvt_cvt_int_170_0->Target(__site_cvt_cvt_int_170_0, full_output);
  } else {
    __pyx_v_full_output = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(col_deriv) == nullptr) {
    __pyx_v_col_deriv = __site_cvt_cvt_int_170_0_1->Target(__site_cvt_cvt_int_170_0_1, col_deriv);
  } else {
    __pyx_v_col_deriv = ((int)1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(xtol) == nullptr) {
    __pyx_v_xtol = __site_cvt_cvt_double_170_0->Target(__site_cvt_cvt_double_170_0, xtol);
  } else {
    __pyx_v_xtol = ((double)1.49012e-8);
  }
  if (dynamic_cast<System::Reflection::Missing^>(maxfev) == nullptr) {
    __pyx_v_maxfev = __site_cvt_cvt_int_170_0_2->Target(__site_cvt_cvt_int_170_0_2, maxfev);
  } else {
    __pyx_v_maxfev = ((int)-10);
  }
  if (dynamic_cast<System::Reflection::Missing^>(factor) == nullptr) {
    __pyx_v_factor = __site_cvt_cvt_double_170_0_1->Target(__site_cvt_cvt_double_170_0_1, factor);
  } else {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":171
 * 
 * def hybrj(fun, Dfun, x0, extra_args=None, int full_output=0, int col_deriv=1, double xtol=1.49012e-8,
 *           int maxfev = -10, double factor=1.0e2, o_diag=None):             # <<<<<<<<<<<<<<
 *     """[x,infodict,info] = _hybrj(fun, Dfun, x0, args, full_output, col_deriv, xtol, maxfev, factor, diag)"""
 * 
 */
    __pyx_v_factor = ((double)1.0e2);
  }
  if (dynamic_cast<System::Reflection::Missing^>(o_diag) == nullptr) {
    __pyx_v_o_diag = o_diag;
  } else {
    __pyx_v_o_diag = ((System::Object^)nullptr);
  }
  __pyx_v_ap_x = nullptr;
  __pyx_v_ap_fvec = nullptr;
  __pyx_v_ap_fjac = nullptr;
  __pyx_v_ap_r = nullptr;
  __pyx_v_ap_qtf = nullptr;
  __pyx_v_ap_diag = nullptr;
  __pyx_v_savedArgs = nullptr;
  __pyx_v_dict = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":174
 *     """[x,infodict,info] = _hybrj(fun, Dfun, x0, args, full_output, col_deriv, xtol, maxfev, factor, diag)"""
 * 
 *     cdef int      mode = 2, nprint = 0, info, nfev, njev, ldfjac             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp n, lr
 *     cdef double   *x, *fvec, *diag, *fjac, *r, *qtf
 */
  __pyx_v_mode = 2;
  __pyx_v_nprint = 0;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":180
 *     cdef np.ndarray ap_x, ap_fvec, ap_fjac, ap_r, ap_qtf, ap_diag
 *     cdef np.npy_intp dims[2]
 *     cdef int      allocated = 0             # <<<<<<<<<<<<<<
 *     cdef double   *wa = NULL
 * 
 */
  __pyx_v_allocated = 0;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":181
 *     cdef np.npy_intp dims[2]
 *     cdef int      allocated = 0
 *     cdef double   *wa = NULL             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_v_wa = NULL;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":184
 * 
 * 
 *     savedArgs = INIT_JAC_FUNC(fun,Dfun,extra_args,col_deriv)             # <<<<<<<<<<<<<<
 *     try:
 *         # Initial input vector
 */
  __pyx_t_1 = __pyx_v_col_deriv;
  __pyx_t_2 = INIT_JAC_FUNC(__pyx_v_fun, __pyx_v_Dfun, __pyx_v_extra_args, __pyx_t_1); 
  __pyx_t_1 = nullptr;
  __pyx_v_savedArgs = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":185
 * 
 *     savedArgs = INIT_JAC_FUNC(fun,Dfun,extra_args,col_deriv)
 *     try:             # <<<<<<<<<<<<<<
 *         # Initial input vector
 *         ap_x = <np.ndarray>np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
 */
  try {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":187
 *     try:
 *         # Initial input vector
 *         ap_x = <np.ndarray>np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)             # <<<<<<<<<<<<<<
 *         x = <double *>np.PyArray_DATA(ap_x)
 *         n = np.PyArray_DIMS(ap_x)[0]
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
    __pyx_t_1 = PyArray_ContiguousFromObject(__pyx_v_x0, __pyx_t_2, __pyx_int_1, __pyx_int_1); 
    __pyx_t_2 = nullptr;
    __pyx_v_ap_x = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":188
 *         # Initial input vector
 *         ap_x = <np.ndarray>np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
 *         x = <double *>np.PyArray_DATA(ap_x)             # <<<<<<<<<<<<<<
 *         n = np.PyArray_DIMS(ap_x)[0]
 *         lr = n * (n + 1) / 2;
 */
    __pyx_v_x = ((double *)PyArray_DATA(__pyx_v_ap_x));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":189
 *         ap_x = <np.ndarray>np.PyArray_ContiguousFromObject(x0, np.NPY_DOUBLE, 1, 1)
 *         x = <double *>np.PyArray_DATA(ap_x)
 *         n = np.PyArray_DIMS(ap_x)[0]             # <<<<<<<<<<<<<<
 *         lr = n * (n + 1) / 2;
 * 
 */
    __pyx_v_n = (PyArray_DIMS(__pyx_v_ap_x)[0]);

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":190
 *         x = <double *>np.PyArray_DATA(ap_x)
 *         n = np.PyArray_DIMS(ap_x)[0]
 *         lr = n * (n + 1) / 2;             # <<<<<<<<<<<<<<
 * 
 *         if (maxfev < 0):
 */
    __pyx_v_lr = __Pyx_div_long((__pyx_v_n * (__pyx_v_n + 1)), 2);

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":192
 *         lr = n * (n + 1) / 2;
 * 
 *         if (maxfev < 0):             # <<<<<<<<<<<<<<
 *             maxfev = 100*(n+1)
 * 
 */
    __pyx_t_3 = (__pyx_v_maxfev < 0);
    if (__pyx_t_3) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":193
 * 
 *         if (maxfev < 0):
 *             maxfev = 100*(n+1)             # <<<<<<<<<<<<<<
 * 
 *         # Setup array to hold the function evaluations
 */
      __pyx_v_maxfev = (100 * (__pyx_v_n + 1));
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":196
 * 
 *         # Setup array to hold the function evaluations
 *         ap_fvec = <np.ndarray>call_python_function(fun, n, x, extra_args, 1, minpack_error)             # <<<<<<<<<<<<<<
 *         fvec = <double *>np.PyArray_DATA(ap_fvec)
 *         if np.PyArray_NDIM(ap_fvec) == 0:
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
    __pyx_t_2 = call_python_function(__pyx_v_fun, __pyx_v_n, __pyx_v_x, __pyx_v_extra_args, 1, __pyx_t_1); 
    __pyx_t_1 = nullptr;
    __pyx_v_ap_fvec = ((NumpyDotNet::ndarray^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":197
 *         # Setup array to hold the function evaluations
 *         ap_fvec = <np.ndarray>call_python_function(fun, n, x, extra_args, 1, minpack_error)
 *         fvec = <double *>np.PyArray_DATA(ap_fvec)             # <<<<<<<<<<<<<<
 *         if np.PyArray_NDIM(ap_fvec) == 0:
 *             n = 1
 */
    __pyx_v_fvec = ((double *)PyArray_DATA(__pyx_v_ap_fvec));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":198
 *         ap_fvec = <np.ndarray>call_python_function(fun, n, x, extra_args, 1, minpack_error)
 *         fvec = <double *>np.PyArray_DATA(ap_fvec)
 *         if np.PyArray_NDIM(ap_fvec) == 0:             # <<<<<<<<<<<<<<
 *             n = 1
 *         elif np.PyArray_DIMS(ap_fvec)[0] < n:
 */
    __pyx_t_2 = PyArray_NDIM(__pyx_v_ap_fvec); 
    __pyx_t_1 = __site_op_eq_198_36->Target(__site_op_eq_198_36, __pyx_t_2, __pyx_int_0);
    __pyx_t_2 = nullptr;
    __pyx_t_3 = __site_istrue_198_36->Target(__site_istrue_198_36, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_3) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":199
 *         fvec = <double *>np.PyArray_DATA(ap_fvec)
 *         if np.PyArray_NDIM(ap_fvec) == 0:
 *             n = 1             # <<<<<<<<<<<<<<
 *         elif np.PyArray_DIMS(ap_fvec)[0] < n:
 *             n = np.PyArray_DIMS(ap_fvec)[0]
 */
      __pyx_v_n = 1;
      goto __pyx_L6;
    }

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":200
 *         if np.PyArray_NDIM(ap_fvec) == 0:
 *             n = 1
 *         elif np.PyArray_DIMS(ap_fvec)[0] < n:             # <<<<<<<<<<<<<<
 *             n = np.PyArray_DIMS(ap_fvec)[0]
 * 
 */
    __pyx_t_3 = ((PyArray_DIMS(__pyx_v_ap_fvec)[0]) < __pyx_v_n);
    if (__pyx_t_3) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":201
 *             n = 1
 *         elif np.PyArray_DIMS(ap_fvec)[0] < n:
 *             n = np.PyArray_DIMS(ap_fvec)[0]             # <<<<<<<<<<<<<<
 * 
 *         if o_diag is None:          # Set the diag vector from input
 */
      __pyx_v_n = (PyArray_DIMS(__pyx_v_ap_fvec)[0]);
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":203
 *             n = np.PyArray_DIMS(ap_fvec)[0]
 * 
 *         if o_diag is None:          # Set the diag vector from input             # <<<<<<<<<<<<<<
 *             ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 */
    __pyx_t_3 = (__pyx_v_o_diag == nullptr);
    if (__pyx_t_3) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":204
 * 
 *         if o_diag is None:          # Set the diag vector from input
 *             ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 *             mode = 1
 */
      __pyx_t_1 = PyArray_SimpleNew(1, (&__pyx_v_n), NPY_DOUBLE); 
      if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_diag = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":205
 *         if o_diag is None:          # Set the diag vector from input
 *             ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *             diag = <double *>np.PyArray_DATA(ap_diag)             # <<<<<<<<<<<<<<
 *             mode = 1
 *         else:
 */
      __pyx_v_diag = ((double *)PyArray_DATA(__pyx_v_ap_diag));

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":206
 *             ap_diag = np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 *             mode = 1             # <<<<<<<<<<<<<<
 *         else:
 *             ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
 */
      __pyx_v_mode = 1;
      goto __pyx_L7;
    }
    /*else*/ {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":208
 *             mode = 1
 *         else:
 *             ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)             # <<<<<<<<<<<<<<
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 *             mode = 2
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
      __pyx_t_2 = __site_get_PyArray_DOUBLE_208_64->Target(__site_get_PyArray_DOUBLE_208_64, __pyx_t_1, __pyx_context);
      __pyx_t_1 = nullptr;
      __pyx_t_1 = PyArray_ContiguousFromObject(__pyx_v_o_diag, __pyx_t_2, __pyx_int_1, __pyx_int_1); 
      __pyx_t_2 = nullptr;
      if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ap_diag = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":209
 *         else:
 *             ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
 *             diag = <double *>np.PyArray_DATA(ap_diag)             # <<<<<<<<<<<<<<
 *             mode = 2
 * 
 */
      __pyx_v_diag = ((double *)PyArray_DATA(__pyx_v_ap_diag));

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":210
 *             ap_diag = np.PyArray_ContiguousFromObject(o_diag, np.PyArray_DOUBLE, 1, 1)
 *             diag = <double *>np.PyArray_DATA(ap_diag)
 *             mode = 2             # <<<<<<<<<<<<<<
 * 
 *         dims[0] = n
 */
      __pyx_v_mode = 2;
    }
    __pyx_L7:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":212
 *             mode = 2
 * 
 *         dims[0] = n             # <<<<<<<<<<<<<<
 *         dims[1] = n
 *         ap_r = <np.ndarray>np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
 */
    (__pyx_v_dims[0]) = __pyx_v_n;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":213
 * 
 *         dims[0] = n
 *         dims[1] = n             # <<<<<<<<<<<<<<
 *         ap_r = <np.ndarray>np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
 *         ap_qtf = <np.ndarray>np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 */
    (__pyx_v_dims[1]) = __pyx_v_n;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":214
 *         dims[0] = n
 *         dims[1] = n
 *         ap_r = <np.ndarray>np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *         ap_qtf = <np.ndarray>np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *         ap_fjac = <np.ndarray>np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)
 */
    __pyx_t_1 = PyArray_SimpleNew(1, (&__pyx_v_lr), NPY_DOUBLE); 
    __pyx_v_ap_r = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":215
 *         dims[1] = n
 *         ap_r = <np.ndarray>np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
 *         ap_qtf = <np.ndarray>np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *         ap_fjac = <np.ndarray>np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)
 * 
 */
    __pyx_t_1 = PyArray_SimpleNew(1, (&__pyx_v_n), NPY_DOUBLE); 
    __pyx_v_ap_qtf = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":216
 *         ap_r = <np.ndarray>np.PyArray_SimpleNew(1, &lr, np.NPY_DOUBLE)
 *         ap_qtf = <np.ndarray>np.PyArray_SimpleNew(1, &n, np.NPY_DOUBLE)
 *         ap_fjac = <np.ndarray>np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 * 
 *         if ap_r is None or ap_qtf is None or ap_fjac is None:
 */
    __pyx_t_1 = PyArray_SimpleNew(2, __pyx_v_dims, NPY_DOUBLE); 
    __pyx_v_ap_fjac = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":218
 *         ap_fjac = <np.ndarray>np.PyArray_SimpleNew(2, dims, np.NPY_DOUBLE)
 * 
 *         if ap_r is None or ap_qtf is None or ap_fjac is None:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_3 = (((System::Object^)__pyx_v_ap_r) == nullptr);
    if (!__pyx_t_3) {
      __pyx_t_4 = (((System::Object^)__pyx_v_ap_qtf) == nullptr);
      if (!__pyx_t_4) {
        __pyx_t_5 = (((System::Object^)__pyx_v_ap_fjac) == nullptr);
        __pyx_t_6 = __pyx_t_5;
      } else {
        __pyx_t_6 = __pyx_t_4;
      }
      __pyx_t_4 = __pyx_t_6;
    } else {
      __pyx_t_4 = __pyx_t_3;
    }
    if (__pyx_t_4) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":219
 * 
 *         if ap_r is None or ap_qtf is None or ap_fjac is None:
 *             return None             # <<<<<<<<<<<<<<
 * 
 *         r = <double *>np.PyArray_DATA(ap_r)
 */
      __pyx_r = nullptr;
      goto __pyx_L0;
      goto __pyx_L8;
    }
    __pyx_L8:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":221
 *             return None
 * 
 *         r = <double *>np.PyArray_DATA(ap_r)             # <<<<<<<<<<<<<<
 *         qtf = <double *>np.PyArray_DATA(ap_qtf)
 *         fjac = <double *>np.PyArray_DATA(ap_fjac)
 */
    __pyx_v_r = ((double *)PyArray_DATA(__pyx_v_ap_r));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":222
 * 
 *         r = <double *>np.PyArray_DATA(ap_r)
 *         qtf = <double *>np.PyArray_DATA(ap_qtf)             # <<<<<<<<<<<<<<
 *         fjac = <double *>np.PyArray_DATA(ap_fjac)
 * 
 */
    __pyx_v_qtf = ((double *)PyArray_DATA(__pyx_v_ap_qtf));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":223
 *         r = <double *>np.PyArray_DATA(ap_r)
 *         qtf = <double *>np.PyArray_DATA(ap_qtf)
 *         fjac = <double *>np.PyArray_DATA(ap_fjac)             # <<<<<<<<<<<<<<
 * 
 *         ldfjac = dims[1]
 */
    __pyx_v_fjac = ((double *)PyArray_DATA(__pyx_v_ap_fjac));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":225
 *         fjac = <double *>np.PyArray_DATA(ap_fjac)
 * 
 *         ldfjac = dims[1]             # <<<<<<<<<<<<<<
 * 
 *         wa = <double *>malloc(4*n + sizeof(double))
 */
    __pyx_v_ldfjac = (__pyx_v_dims[1]);

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":227
 *         ldfjac = dims[1]
 * 
 *         wa = <double *>malloc(4*n + sizeof(double))             # <<<<<<<<<<<<<<
 *         allocated = 1
 * 
 */
    __pyx_v_wa = ((double *)malloc(((4 * __pyx_v_n) + (sizeof(double)))));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":228
 * 
 *         wa = <double *>malloc(4*n + sizeof(double))
 *         allocated = 1             # <<<<<<<<<<<<<<
 * 
 *         # Call the underlying FORTRAN routines.
 */
    __pyx_v_allocated = 1;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":231
 * 
 *         # Call the underlying FORTRAN routines.
 *         HYBRJ(<void *>jac_multipack_calling_function, &n, x, fvec, fjac, &ldfjac, &xtol, &maxfev, diag, &mode, &factor, &nprint, &info, &nfev, &njev, r, &lr, qtf, wa, wa+n, wa+2*n, wa+3*n)             # <<<<<<<<<<<<<<
 *         if (info < 0):
 *             return NULL            # Python Terminated
 */
    HYBRJ(((void *)__pyx_function_pointer_jac_multipack_calling_function), (&__pyx_v_n), __pyx_v_x, __pyx_v_fvec, __pyx_v_fjac, (&__pyx_v_ldfjac), (&__pyx_v_xtol), (&__pyx_v_maxfev), __pyx_v_diag, (&__pyx_v_mode), (&__pyx_v_factor), (&__pyx_v_nprint), (&__pyx_v_info), (&__pyx_v_nfev), (&__pyx_v_njev), __pyx_v_r, (&__pyx_v_lr), __pyx_v_qtf, __pyx_v_wa, (__pyx_v_wa + __pyx_v_n), (__pyx_v_wa + (2 * __pyx_v_n)), (__pyx_v_wa + (3 * __pyx_v_n)));

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":232
 *         # Call the underlying FORTRAN routines.
 *         HYBRJ(<void *>jac_multipack_calling_function, &n, x, fvec, fjac, &ldfjac, &xtol, &maxfev, diag, &mode, &factor, &nprint, &info, &nfev, &njev, r, &lr, qtf, wa, wa+n, wa+2*n, wa+3*n)
 *         if (info < 0):             # <<<<<<<<<<<<<<
 *             return NULL            # Python Terminated
 *     finally:
 */
    __pyx_t_4 = (__pyx_v_info < 0);
    if (__pyx_t_4) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":233
 *         HYBRJ(<void *>jac_multipack_calling_function, &n, x, fvec, fjac, &ldfjac, &xtol, &maxfev, diag, &mode, &factor, &nprint, &info, &nfev, &njev, r, &lr, qtf, wa, wa+n, wa+2*n, wa+3*n)
 *         if (info < 0):
 *             return NULL            # Python Terminated             # <<<<<<<<<<<<<<
 *     finally:
 *         RESTORE_JAC_FUNC(savedArgs)
 */
      __pyx_t_1 = NULL;
      __pyx_r = __pyx_t_1;
      __pyx_t_1 = nullptr;
      goto __pyx_L0;
      goto __pyx_L9;
    }
    __pyx_L9:;
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":235
 *             return NULL            # Python Terminated
 *     finally:
 *         RESTORE_JAC_FUNC(savedArgs)             # <<<<<<<<<<<<<<
 *         if allocated:
 *             free(wa)
 */
  finally {
    __pyx_t_1 = RESTORE_JAC_FUNC(__pyx_v_savedArgs); 
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":236
 *     finally:
 *         RESTORE_JAC_FUNC(savedArgs)
 *         if allocated:             # <<<<<<<<<<<<<<
 *             free(wa)
 * 
 */
    if (__pyx_v_allocated) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":237
 *         RESTORE_JAC_FUNC(savedArgs)
 *         if allocated:
 *             free(wa)             # <<<<<<<<<<<<<<
 * 
 *     if full_output:
 */
      free(__pyx_v_wa);
      goto __pyx_L10;
    }
    __pyx_L10:;
  }

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":239
 *             free(wa)
 * 
 *     if full_output:             # <<<<<<<<<<<<<<
 *         dict = {
 *             "fvec" : np.PyArray_Return(ap_fvec),
 */
  if (__pyx_v_full_output) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":240
 * 
 *     if full_output:
 *         dict = {             # <<<<<<<<<<<<<<
 *             "fvec" : np.PyArray_Return(ap_fvec),
 *             "nfev" : nfev,
 */
    __pyx_t_7 = PythonOps::MakeEmptyDict();

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":241
 *     if full_output:
 *         dict = {
 *             "fvec" : np.PyArray_Return(ap_fvec),             # <<<<<<<<<<<<<<
 *             "nfev" : nfev,
 *             "njev" : njev,
 */
    __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_ap_fvec)); 
    __pyx_t_7[((System::Object^)"fvec")] = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":242
 *         dict = {
 *             "fvec" : np.PyArray_Return(ap_fvec),
 *             "nfev" : nfev,             # <<<<<<<<<<<<<<
 *             "njev" : njev,
 *             "fjac" : np.PyArray_Return(ap_fjac),
 */
    __pyx_t_1 = __pyx_v_nfev;
    __pyx_t_7[((System::Object^)"nfev")] = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":243
 *             "fvec" : np.PyArray_Return(ap_fvec),
 *             "nfev" : nfev,
 *             "njev" : njev,             # <<<<<<<<<<<<<<
 *             "fjac" : np.PyArray_Return(ap_fjac),
 *             "r" : np.PyArray_Return(ap_r),
 */
    __pyx_t_1 = __pyx_v_njev;
    __pyx_t_7[((System::Object^)"njev")] = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":244
 *             "nfev" : nfev,
 *             "njev" : njev,
 *             "fjac" : np.PyArray_Return(ap_fjac),             # <<<<<<<<<<<<<<
 *             "r" : np.PyArray_Return(ap_r),
 *             "qtf" : np.PyArray_Return(ap_qtf)
 */
    __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_ap_fjac)); 
    __pyx_t_7[((System::Object^)"fjac")] = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":245
 *             "njev" : njev,
 *             "fjac" : np.PyArray_Return(ap_fjac),
 *             "r" : np.PyArray_Return(ap_r),             # <<<<<<<<<<<<<<
 *             "qtf" : np.PyArray_Return(ap_qtf)
 *         }
 */
    __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_ap_r)); 
    __pyx_t_7[((System::Object^)"r")] = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":246
 *             "fjac" : np.PyArray_Return(ap_fjac),
 *             "r" : np.PyArray_Return(ap_r),
 *             "qtf" : np.PyArray_Return(ap_qtf)             # <<<<<<<<<<<<<<
 *         }
 *         return (np.PyArray_Return(ap_x), dict, info)
 */
    __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_ap_qtf)); 
    __pyx_t_7[((System::Object^)"qtf")] = __pyx_t_1;
    __pyx_t_1 = nullptr;
    __pyx_v_dict = __pyx_t_7;
    __pyx_t_7 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":248
 *             "qtf" : np.PyArray_Return(ap_qtf)
 *         }
 *         return (np.PyArray_Return(ap_x), dict, info)             # <<<<<<<<<<<<<<
 *     else:
 *         return (np.PyArray_Return(ap_x), info)
 */
    __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_ap_x)); 
    __pyx_t_2 = __pyx_v_info;
    __pyx_t_8 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, ((System::Object^)__pyx_v_dict), __pyx_t_2});
    __pyx_t_1 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_r = __pyx_t_8;
    __pyx_t_8 = nullptr;
    goto __pyx_L0;
    goto __pyx_L11;
  }
  /*else*/ {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":250
 *         return (np.PyArray_Return(ap_x), dict, info)
 *     else:
 *         return (np.PyArray_Return(ap_x), info)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_t_8 = PyArray_Return(((System::Object^)__pyx_v_ap_x)); 
    __pyx_t_2 = __pyx_v_info;
    __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_8, __pyx_t_2});
    __pyx_t_8 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L11:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":254
 * 
 * 
 * cdef int raw_multipack_calling_function(int *n, double *x, double *fvec, int *iflag):             # <<<<<<<<<<<<<<
 *     """ This is the function called from the Fortran code it should
 *         -- use call_python_function to get a multiarrayobject result
 */

static int (*__pyx_function_pointer_raw_multipack_calling_function)(int *, double *, double *, int *);
typedef int (*__pyx_fp_t_raw_multipack_calling_function)(int *, double *, double *, int *);
static __pyx_delegate_t_5scipy_8optimize_8_minpack_raw_multipack_calling_function^ __pyx_delegate_val_raw_multipack_calling_function;
static  int raw_multipack_calling_function(int *__pyx_v_n, double *__pyx_v_x, double *__pyx_v_fvec, int *__pyx_v_iflag) {
  NumpyDotNet::ndarray^ __pyx_v_result_array;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  __pyx_v_result_array = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":263
 *     global multipack_extra_arguments
 * 
 *     result_array = <np.ndarray>call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)             # <<<<<<<<<<<<<<
 *     if result_array is None:
 *         iflag[0] = -1
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
  __pyx_t_2 = call_python_function(__pyx_v_5scipy_8optimize_8_minpack_multipack_python_function, (__pyx_v_n[0]), __pyx_v_x, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments, 1, __pyx_t_1); 
  __pyx_t_1 = nullptr;
  __pyx_v_result_array = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":264
 * 
 *     result_array = <np.ndarray>call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *     if result_array is None:             # <<<<<<<<<<<<<<
 *         iflag[0] = -1
 *         return -1
 */
  __pyx_t_3 = (((System::Object^)__pyx_v_result_array) == nullptr);
  if (__pyx_t_3) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":265
 *     result_array = <np.ndarray>call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *     if result_array is None:
 *         iflag[0] = -1             # <<<<<<<<<<<<<<
 *         return -1
 * 
 */
    (__pyx_v_iflag[0]) = -1;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":266
 *     if result_array is None:
 *         iflag[0] = -1
 *         return -1             # <<<<<<<<<<<<<<
 * 
 *     memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
 */
    __pyx_r = -1;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":268
 *         return -1
 * 
 *     memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */
  memcpy(__pyx_v_fvec, PyArray_DATA(__pyx_v_result_array), ((__pyx_v_n[0]) * (sizeof(double))));

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":269
 * 
 *     memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":272
 * 
 * 
 * cdef int jac_multipack_calling_function(int *n, double *x, double *fvec, double *fjac, int *ldfjac, int *iflag):             # <<<<<<<<<<<<<<
 *     """ This is the function called from the Fortran code it should
 *         -- use call_python_function to get a multiarrayobject result
 */

static int (*__pyx_function_pointer_jac_multipack_calling_function)(int *, double *, double *, double *, int *, int *);
typedef int (*__pyx_fp_t_jac_multipack_calling_function)(int *, double *, double *, double *, int *, int *);
static __pyx_delegate_t_5scipy_8optimize_8_minpack_jac_multipack_calling_function^ __pyx_delegate_val_jac_multipack_calling_function;
static  int jac_multipack_calling_function(int *__pyx_v_n, double *__pyx_v_x, double *__pyx_v_fvec, double *__pyx_v_fjac, int *__pyx_v_ldfjac, int *__pyx_v_iflag) {
  System::Object^ __pyx_v_result_array;
  int __pyx_r;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_result_array = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":282
 *     """
 * 
 *     if iflag[0] == 1:             # <<<<<<<<<<<<<<
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if result_array is None:
 */
  __pyx_t_1 = ((__pyx_v_iflag[0]) == 1);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":283
 * 
 *     if iflag[0] == 1:
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)             # <<<<<<<<<<<<<<
 *         if result_array is None:
 *             iflag[0] = -1
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
    __pyx_t_3 = call_python_function(__pyx_v_5scipy_8optimize_8_minpack_multipack_python_function, (__pyx_v_n[0]), __pyx_v_x, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments, 1, __pyx_t_2); 
    __pyx_t_2 = nullptr;
    __pyx_v_result_array = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":284
 *     if iflag[0] == 1:
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if result_array is None:             # <<<<<<<<<<<<<<
 *             iflag[0] = -1
 *             return -1
 */
    __pyx_t_1 = (__pyx_v_result_array == nullptr);
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":285
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if result_array is None:
 *             iflag[0] = -1             # <<<<<<<<<<<<<<
 *             return -1
 *         memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
 */
      (__pyx_v_iflag[0]) = -1;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":286
 *         if result_array is None:
 *             iflag[0] = -1
 *             return -1             # <<<<<<<<<<<<<<
 *         memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
 *     else:
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":287
 *             iflag[0] = -1
 *             return -1
 *         memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))             # <<<<<<<<<<<<<<
 *     else:
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(__pyx_v_fvec, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), ((__pyx_v_n[0]) * (sizeof(double))));
    goto __pyx_L3;
  }
  /*else*/ {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":289
 *         memcpy(fvec, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
 *     else:
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)             # <<<<<<<<<<<<<<
 *         if result_array is None:
 *             iflag[0] = -1
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
    __pyx_t_2 = call_python_function(__pyx_v_5scipy_8optimize_8_minpack_multipack_python_jacobian, (__pyx_v_n[0]), __pyx_v_x, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments, 2, __pyx_t_3); 
    __pyx_t_3 = nullptr;
    __pyx_v_result_array = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":290
 *     else:
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)
 *         if result_array is None:             # <<<<<<<<<<<<<<
 *             iflag[0] = -1
 *             return -1
 */
    __pyx_t_1 = (__pyx_v_result_array == nullptr);
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":291
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)
 *         if result_array is None:
 *             iflag[0] = -1             # <<<<<<<<<<<<<<
 *             return -1
 *         if multipack_jac_transpose == 1:
 */
      (__pyx_v_iflag[0]) = -1;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":292
 *         if result_array is None:
 *             iflag[0] = -1
 *             return -1             # <<<<<<<<<<<<<<
 *         if multipack_jac_transpose == 1:
 *             MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":293
 *             iflag[0] = -1
 *             return -1
 *         if multipack_jac_transpose == 1:             # <<<<<<<<<<<<<<
 *             MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])
 *         else:
 */
    __pyx_t_2 = __site_op_eq_293_35->Target(__site_op_eq_293_35, __pyx_v_5scipy_8optimize_8_minpack_multipack_jac_transpose, __pyx_int_1);
    __pyx_t_1 = __site_istrue_293_35->Target(__site_istrue_293_35, __pyx_t_2);
    __pyx_t_2 = nullptr;
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":294
 *             return -1
 *         if multipack_jac_transpose == 1:
 *             MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])             # <<<<<<<<<<<<<<
 *         else:
 *             memcpy(fjac, np.PyArray_DATA(result_array), (n[0])*(ldfjac[0])*sizeof(double));
 */
      if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      MATRIXC2F(__pyx_v_fjac, ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array))), (__pyx_v_n[0]), (__pyx_v_ldfjac[0]));
      goto __pyx_L6;
    }
    /*else*/ {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":296
 *             MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])
 *         else:
 *             memcpy(fjac, np.PyArray_DATA(result_array), (n[0])*(ldfjac[0])*sizeof(double));             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */
      if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      memcpy(__pyx_v_fjac, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), (((__pyx_v_n[0]) * (__pyx_v_ldfjac[0])) * (sizeof(double))));
    }
    __pyx_L6:;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":297
 *         else:
 *             memcpy(fjac, np.PyArray_DATA(result_array), (n[0])*(ldfjac[0])*sizeof(double));
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":300
 * 
 * 
 * cdef int raw_multipack_lm_function(int *m, int *n, double *x, double *fvec, int *iflag):             # <<<<<<<<<<<<<<
 *     """ This is the function called from the Fortran code it should
 *         -- use call_python_function to get a multiarrayobject result
 */

static  int raw_multipack_lm_function(int *__pyx_v_m, int *__pyx_v_n, double *__pyx_v_x, double *__pyx_v_fvec, int *__pyx_v_iflag) {
  System::Object^ __pyx_v_result_array;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  __pyx_v_result_array = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":307
 *     """
 * 
 *     result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)             # <<<<<<<<<<<<<<
 *     if result_array is None:
 *         iflag[0] = -1
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
  __pyx_t_2 = call_python_function(__pyx_v_5scipy_8optimize_8_minpack_multipack_python_function, (__pyx_v_n[0]), __pyx_v_x, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments, 1, __pyx_t_1); 
  __pyx_t_1 = nullptr;
  __pyx_v_result_array = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":308
 * 
 *     result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *     if result_array is None:             # <<<<<<<<<<<<<<
 *         iflag[0] = -1
 *         return -1
 */
  __pyx_t_3 = (__pyx_v_result_array == nullptr);
  if (__pyx_t_3) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":309
 *     result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *     if result_array is None:
 *         iflag[0] = -1             # <<<<<<<<<<<<<<
 *         return -1
 * 
 */
    (__pyx_v_iflag[0]) = -1;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":310
 *     if result_array is None:
 *         iflag[0] = -1
 *         return -1             # <<<<<<<<<<<<<<
 * 
 *     memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))
 */
    __pyx_r = -1;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":312
 *         return -1
 * 
 *     memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */
  if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  memcpy(__pyx_v_fvec, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), ((__pyx_v_m[0]) * (sizeof(double))));

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":313
 * 
 *     memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":316
 * 
 * 
 * cdef int jac_multipack_lm_function(int *m, int *n, double *x, double *fvec, double *fjac, int *ldfjac, int *iflag):             # <<<<<<<<<<<<<<
 *     """ This is the function called from the Fortran code it should
 *         -- use call_python_function to get a multiarrayobject result
 */

static  int jac_multipack_lm_function(int *__pyx_v_m, int *__pyx_v_n, double *__pyx_v_x, double *__pyx_v_fvec, double *__pyx_v_fjac, int *__pyx_v_ldfjac, int *__pyx_v_iflag) {
  System::Object^ __pyx_v_result_array;
  int __pyx_r;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_result_array = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":326
 *     """
 * 
 *     if iflag[0] == 1:             # <<<<<<<<<<<<<<
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if (result_array is None):
 */
  __pyx_t_1 = ((__pyx_v_iflag[0]) == 1);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":327
 * 
 *     if iflag[0] == 1:
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)             # <<<<<<<<<<<<<<
 *         if (result_array is None):
 *             iflag[0] = -1
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
    __pyx_t_3 = call_python_function(__pyx_v_5scipy_8optimize_8_minpack_multipack_python_function, (__pyx_v_n[0]), __pyx_v_x, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments, 1, __pyx_t_2); 
    __pyx_t_2 = nullptr;
    __pyx_v_result_array = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":328
 *     if iflag[0] == 1:
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if (result_array is None):             # <<<<<<<<<<<<<<
 *             iflag[0] = -1
 *             return -1
 */
    __pyx_t_1 = (__pyx_v_result_array == nullptr);
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":329
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if (result_array is None):
 *             iflag[0] = -1             # <<<<<<<<<<<<<<
 *             return -1
 * 
 */
      (__pyx_v_iflag[0]) = -1;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":330
 *         if (result_array is None):
 *             iflag[0] = -1
 *             return -1             # <<<<<<<<<<<<<<
 * 
 *         memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":332
 *             return -1
 * 
 *         memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))             # <<<<<<<<<<<<<<
 *     else:
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(__pyx_v_fvec, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), ((__pyx_v_m[0]) * (sizeof(double))));
    goto __pyx_L3;
  }
  /*else*/ {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":334
 *         memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))
 *     else:
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)             # <<<<<<<<<<<<<<
 *         if result_array is None:
 *             iflag[0] = -1
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
    __pyx_t_2 = call_python_function(__pyx_v_5scipy_8optimize_8_minpack_multipack_python_jacobian, (__pyx_v_n[0]), __pyx_v_x, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments, 2, __pyx_t_3); 
    __pyx_t_3 = nullptr;
    __pyx_v_result_array = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":335
 *     else:
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)
 *         if result_array is None:             # <<<<<<<<<<<<<<
 *             iflag[0] = -1
 *             return -1
 */
    __pyx_t_1 = (__pyx_v_result_array == nullptr);
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":336
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, multipack_extra_arguments, 2, minpack_error)
 *         if result_array is None:
 *             iflag[0] = -1             # <<<<<<<<<<<<<<
 *             return -1
 * 
 */
      (__pyx_v_iflag[0]) = -1;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":337
 *         if result_array is None:
 *             iflag[0] = -1
 *             return -1             # <<<<<<<<<<<<<<
 * 
 *     if (multipack_jac_transpose == 1):
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L5;
    }
    __pyx_L5:;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":339
 *             return -1
 * 
 *     if (multipack_jac_transpose == 1):             # <<<<<<<<<<<<<<
 *         MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])
 *     else:
 */
  __pyx_t_2 = __site_op_eq_339_32->Target(__site_op_eq_339_32, __pyx_v_5scipy_8optimize_8_minpack_multipack_jac_transpose, __pyx_int_1);
  __pyx_t_1 = __site_istrue_339_32->Target(__site_istrue_339_32, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":340
 * 
 *     if (multipack_jac_transpose == 1):
 *         MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])             # <<<<<<<<<<<<<<
 *     else:
 *         memcpy(fjac, np.PyArray_DATA(result_array), (n[0])*(ldfjac[0])*sizeof(double))
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    MATRIXC2F(__pyx_v_fjac, ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array))), (__pyx_v_n[0]), (__pyx_v_ldfjac[0]));
    goto __pyx_L6;
  }
  /*else*/ {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":342
 *         MATRIXC2F(fjac, <double *>np.PyArray_DATA(result_array), n[0], ldfjac[0])
 *     else:
 *         memcpy(fjac, np.PyArray_DATA(result_array), (n[0])*(ldfjac[0])*sizeof(double))             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(__pyx_v_fjac, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), (((__pyx_v_n[0]) * (__pyx_v_ldfjac[0])) * (sizeof(double))));
  }
  __pyx_L6:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":344
 *         memcpy(fjac, np.PyArray_DATA(result_array), (n[0])*(ldfjac[0])*sizeof(double))
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":347
 * 
 * 
 * cdef int smjac_multipack_lm_function(int *m, int *n, double *x, double *fvec, double *fjrow, int *iflag):             # <<<<<<<<<<<<<<
 *     """ This is the function called from the Fortran code it should
 *         -- use call_python_function to get a multiarrayobject result
 */

static  int smjac_multipack_lm_function(int *__pyx_v_m, int *__pyx_v_n, double *__pyx_v_x, double *__pyx_v_fvec, double *__pyx_v_fjrow, int *__pyx_v_iflag) {
  int __pyx_v_row;
  System::Object^ __pyx_v_result_array;
  System::Object^ __pyx_v_newargs;
  int __pyx_r;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_result_array = nullptr;
  __pyx_v_newargs = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":358
 *     cdef int row
 * 
 *     if iflag[0] == 1:             # <<<<<<<<<<<<<<
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if (result_array is None):
 */
  __pyx_t_1 = ((__pyx_v_iflag[0]) == 1);
  if (__pyx_t_1) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":359
 * 
 *     if iflag[0] == 1:
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)             # <<<<<<<<<<<<<<
 *         if (result_array is None):
 *             iflag[0] = -1
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
    __pyx_t_3 = call_python_function(__pyx_v_5scipy_8optimize_8_minpack_multipack_python_function, (__pyx_v_n[0]), __pyx_v_x, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments, 1, __pyx_t_2); 
    __pyx_t_2 = nullptr;
    __pyx_v_result_array = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":360
 *     if iflag[0] == 1:
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if (result_array is None):             # <<<<<<<<<<<<<<
 *             iflag[0] = -1
 *             return -1
 */
    __pyx_t_1 = (__pyx_v_result_array == nullptr);
    if (__pyx_t_1) {

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":361
 *         result_array = call_python_function(multipack_python_function, n[0], x, multipack_extra_arguments, 1, minpack_error)
 *         if (result_array is None):
 *             iflag[0] = -1             # <<<<<<<<<<<<<<
 *             return -1
 * 
 */
      (__pyx_v_iflag[0]) = -1;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":362
 *         if (result_array is None):
 *             iflag[0] = -1
 *             return -1             # <<<<<<<<<<<<<<
 * 
 *         memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":364
 *             return -1
 * 
 *         memcpy(fvec, np.PyArray_DATA(result_array), (m[0])*sizeof(double))             # <<<<<<<<<<<<<<
 *     else:
 *         # append row number to argument list and call row-based jacobian
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(__pyx_v_fvec, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), ((__pyx_v_m[0]) * (sizeof(double))));
    goto __pyx_L3;
  }
  /*else*/ {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":367
 *     else:
 *         # append row number to argument list and call row-based jacobian
 *         row = iflag[0] - 2;             # <<<<<<<<<<<<<<
 * 
 *         newargs = (row, ) + multipack_extra_arguments
 */
    __pyx_v_row = ((__pyx_v_iflag[0]) - 2);

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":369
 *         row = iflag[0] - 2;
 * 
 *         newargs = (row, ) + multipack_extra_arguments             # <<<<<<<<<<<<<<
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, newargs, 2, minpack_error)
 *         memcpy(fjrow, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
 */
    __pyx_t_3 = __pyx_v_row;
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3});
    __pyx_t_3 = nullptr;
    __pyx_t_3 = __site_op_add_369_26->Target(__site_op_add_369_26, __pyx_t_2, __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments);
    __pyx_t_2 = nullptr;
    __pyx_v_newargs = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":370
 * 
 *         newargs = (row, ) + multipack_extra_arguments
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, newargs, 2, minpack_error)             # <<<<<<<<<<<<<<
 *         memcpy(fjrow, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
 * 
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "minpack_error");
    __pyx_t_2 = call_python_function(__pyx_v_5scipy_8optimize_8_minpack_multipack_python_jacobian, (__pyx_v_n[0]), __pyx_v_x, __pyx_v_newargs, 2, __pyx_t_3); 
    __pyx_t_3 = nullptr;
    __pyx_v_result_array = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":371
 *         newargs = (row, ) + multipack_extra_arguments
 *         result_array = call_python_function(multipack_python_jacobian, n[0], x, newargs, 2, minpack_error)
 *         memcpy(fjrow, np.PyArray_DATA(result_array), (n[0])*sizeof(double))             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(__pyx_v_fjrow, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), ((__pyx_v_n[0]) * (sizeof(double))));
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":373
 *         memcpy(fjrow, np.PyArray_DATA(result_array), (n[0])*sizeof(double))
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":377
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

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":396
 * 
 *     # Build sequence argument from inputs
 *     sequence = <np.ndarray>np.PyArray_SimpleNewFromData(1, &n, np.NPY_DOUBLE, <char *>x)             # <<<<<<<<<<<<<<
 *     if sequence is None:
 *         raise error_obj("Internal failure to make an array of doubles out of first\n                 argument to function call.")
 */
  __pyx_t_1 = PyArray_SimpleNewFromData(1, (&__pyx_v_n), NPY_DOUBLE, ((char *)__pyx_v_x)); 
  __pyx_v_sequence = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":397
 *     # Build sequence argument from inputs
 *     sequence = <np.ndarray>np.PyArray_SimpleNewFromData(1, &n, np.NPY_DOUBLE, <char *>x)
 *     if sequence is None:             # <<<<<<<<<<<<<<
 *         raise error_obj("Internal failure to make an array of doubles out of first\n                 argument to function call.")
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_sequence) == nullptr);
  if (__pyx_t_2) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":398
 *     sequence = <np.ndarray>np.PyArray_SimpleNewFromData(1, &n, np.NPY_DOUBLE, <char *>x)
 *     if sequence is None:
 *         raise error_obj("Internal failure to make an array of doubles out of first\n                 argument to function call.")             # <<<<<<<<<<<<<<
 * 
 *     # Build argument list
 */
    __pyx_t_1 = __site_call1_398_23->Target(__site_call1_398_23, __pyx_context, __pyx_v_error_obj, ((System::Object^)"Internal failure to make an array of doubles out of first\n                 argument to function call."));
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":401
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

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":402
 *     # Build argument list
 *     if args is None: args = ()
 *     result = apply(func, (sequence, ) + args)             # <<<<<<<<<<<<<<
 *     if result is None:
 *         raise error_obj("Error occured while calling the Python function named %s" % func.func_name)
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "apply");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_sequence)});
  __pyx_t_4 = __site_op_add_402_38->Target(__site_op_add_402_38, __pyx_t_3, __pyx_v_args);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_call2_402_18->Target(__site_call2_402_18, __pyx_context, __pyx_t_1, __pyx_v_func, __pyx_t_4);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_result = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":403
 *     if args is None: args = ()
 *     result = apply(func, (sequence, ) + args)
 *     if result is None:             # <<<<<<<<<<<<<<
 *         raise error_obj("Error occured while calling the Python function named %s" % func.func_name)
 *     return np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, dim-1, dim)
 */
  __pyx_t_2 = (__pyx_v_result == nullptr);
  if (__pyx_t_2) {

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":404
 *     result = apply(func, (sequence, ) + args)
 *     if result is None:
 *         raise error_obj("Error occured while calling the Python function named %s" % func.func_name)             # <<<<<<<<<<<<<<
 *     return np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, dim-1, dim)
 * 
 */
    __pyx_t_3 = __site_get_func_name_404_89->Target(__site_get_func_name_404_89, __pyx_v_func, __pyx_context);
    __pyx_t_4 = __site_op_mod_404_83->Target(__site_op_mod_404_83, ((System::Object^)"Error occured while calling the Python function named %s"), __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_t_3 = __site_call1_404_23->Target(__site_call1_404_23, __pyx_context, __pyx_v_error_obj, ((System::Object^)__pyx_t_4));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":405
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

/* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":408
 * 
 * 
 * cdef void MATRIXC2F(double *jac, double *data, int m, int n):             # <<<<<<<<<<<<<<
 *     cdef int i, j
 *     cdef double *p1 = jac
 */

static  void MATRIXC2F(double *__pyx_v_jac, double *__pyx_v_data, int __pyx_v_m, int __pyx_v_n) {
  int __pyx_v_i;
  int __pyx_v_j;
  double *__pyx_v_p1;
  double *__pyx_v_p2;
  double *__pyx_v_p3;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":410
 * cdef void MATRIXC2F(double *jac, double *data, int m, int n):
 *     cdef int i, j
 *     cdef double *p1 = jac             # <<<<<<<<<<<<<<
 *     cdef double *p2
 *     cdef double *p3 = data
 */
  __pyx_v_p1 = __pyx_v_jac;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":412
 *     cdef double *p1 = jac
 *     cdef double *p2
 *     cdef double *p3 = data             # <<<<<<<<<<<<<<
 * 
 *     for j in range(m):
 */
  __pyx_v_p3 = __pyx_v_data;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":414
 *     cdef double *p3 = data
 * 
 *     for j in range(m):             # <<<<<<<<<<<<<<
 *         p2 = p3
 *         i = 0
 */
  __pyx_t_1 = __pyx_v_m;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_j = __pyx_t_2;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":415
 * 
 *     for j in range(m):
 *         p2 = p3             # <<<<<<<<<<<<<<
 *         i = 0
 *         while i < n:
 */
    __pyx_v_p2 = __pyx_v_p3;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":416
 *     for j in range(m):
 *         p2 = p3
 *         i = 0             # <<<<<<<<<<<<<<
 *         while i < n:
 *             p1[0] = p2[0]
 */
    __pyx_v_i = 0;

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":417
 *         p2 = p3
 *         i = 0
 *         while i < n:             # <<<<<<<<<<<<<<
 *             p1[0] = p2[0]
 *             p2 += m
 */
    while (1) {
      __pyx_t_3 = (__pyx_v_i < __pyx_v_n);
      if (!__pyx_t_3) break;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":418
 *         i = 0
 *         while i < n:
 *             p1[0] = p2[0]             # <<<<<<<<<<<<<<
 *             p2 += m
 *             i += 1
 */
      (__pyx_v_p1[0]) = (__pyx_v_p2[0]);

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":419
 *         while i < n:
 *             p1[0] = p2[0]
 *             p2 += m             # <<<<<<<<<<<<<<
 *             i += 1
 *             p1 += 1
 */
      __pyx_v_p2 += __pyx_v_m;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":420
 *             p1[0] = p2[0]
 *             p2 += m
 *             i += 1             # <<<<<<<<<<<<<<
 *             p1 += 1
 *         p3 += 1
 */
      __pyx_v_i += 1;

      /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":421
 *             p2 += m
 *             i += 1
 *             p1 += 1             # <<<<<<<<<<<<<<
 *         p3 += 1
 */
      __pyx_v_p1 += 1;
    }

    /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":422
 *             i += 1
 *             p1 += 1
 *         p3 += 1             # <<<<<<<<<<<<<<
 */
    __pyx_v_p3 += 1;
  }

}

/* "../cython/include\numpy.pxd":290
 *     dtype NpyArray_FindArrayType_3args "NumpyDotNet::NpyArray::FindArrayType" (object src, dtype minitype, int max)
 * 
 * cdef inline dtype NpyArray_FindArrayType_2args(object src, dtype minitype):             # <<<<<<<<<<<<<<
 *     return NpyArray_FindArrayType_3args(src, minitype, NPY_MAXDIMS)
 * 
 */

static CYTHON_INLINE NumpyDotNet::dtype^ NpyArray_FindArrayType_2args(System::Object^ __pyx_v_src, NumpyDotNet::dtype^ __pyx_v_minitype) {
  NumpyDotNet::dtype^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":291
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

/* "../cython/include\numpy.pxd":310
 * ctypedef void (*PyArray_CopySwapFunc)(void *, void *, int, NpyArray *)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":313
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

/* "../cython/include\numpy.pxd":315
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))
 * 
 * cdef inline object PyArray_DescrFromType(int typenum):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_DescrFromType(int __pyx_v_typenum) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":316
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

/* "../cython/include\numpy.pxd":319
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

  /* "../cython/include\numpy.pxd":320
 * 
 * cdef inline object PyArray_ZEROS(int ndim, npy_intp *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":322
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":323
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

  /* "../cython/include\numpy.pxd":324
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":325
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

/* "../cython/include\numpy.pxd":327
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

  /* "../cython/include\numpy.pxd":328
 * 
 * cdef inline object PyArray_EMPTY(int ndim, npy_intp *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":330
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":331
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

  /* "../cython/include\numpy.pxd":332
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":333
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

/* "../cython/include\numpy.pxd":335
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

  /* "../cython/include\numpy.pxd":336
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(nd):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":338
 *     shape_list = []
 *     cdef int i
 *     for i in range(nd):             # <<<<<<<<<<<<<<
 *         shape_list.append(dims[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_nd;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":339
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

  /* "../cython/include\numpy.pxd":340
 *     for i in range(nd):
 *         shape_list.append(dims[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":341
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

/* "../cython/include\numpy.pxd":344
 * 
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":345
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

  /* "../cython/include\numpy.pxd":346
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

  /* "../cython/include\numpy.pxd":347
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

/* "../cython/include\numpy.pxd":349
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 * cdef inline object PyArray_SimpleNew(int nd, npy_intp *dims, int type_num):             # <<<<<<<<<<<<<<
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, NULL, 0, NPY_CARRAY, NULL)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_SimpleNew(int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":350
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

/* "../cython/include\numpy.pxd":352
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, NULL, 0, NPY_CARRAY, NULL)
 * 
 * cdef inline object PyArray_SimpleNewFromData(int nd, npy_intp *dims, int type_num, void *data):             # <<<<<<<<<<<<<<
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, data, 0, NPY_CARRAY, NULL)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_SimpleNewFromData(int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, void *__pyx_v_data) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":353
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

/* "../cython/include\numpy.pxd":355
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

  /* "../cython/include\numpy.pxd":356
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

/* "../cython/include\numpy.pxd":358
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

  /* "../cython/include\numpy.pxd":359
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

/* "../cython/include\numpy.pxd":361
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

  /* "../cython/include\numpy.pxd":362
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

/* "../cython/include\numpy.pxd":364
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

  /* "../cython/include\numpy.pxd":365
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

/* "../cython/include\numpy.pxd":367
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

  /* "../cython/include\numpy.pxd":368
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

/* "../cython/include\numpy.pxd":370
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

  /* "../cython/include\numpy.pxd":371
 * 
 * cdef inline object PyArray_Return(arr):
 *     if arr is None:             # <<<<<<<<<<<<<<
 *         return None
 *     import clr
 */
  __pyx_t_1 = (__pyx_v_arr == nullptr);
  if (__pyx_t_1) {

    /* "../cython/include\numpy.pxd":372
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

  /* "../cython/include\numpy.pxd":373
 *     if arr is None:
 *         return None
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ndarray
 *     return NumpyDotNet.ndarray.ArrayReturn(arr)
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":374
 *         return None
 *     import clr
 *     import NumpyDotNet.ndarray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.ndarray.ArrayReturn(arr)
 * 
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ndarray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":375
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

/* "../cython/include\numpy.pxd":377
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

  /* "../cython/include\numpy.pxd":378
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

/* "../cython/include\numpy.pxd":380
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)
 * 
 * cdef inline object PyArray_NDIM(ndarray obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(NumpyDotNet::ndarray^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":381
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

/* "../cython/include\numpy.pxd":383
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

  /* "../cython/include\numpy.pxd":384
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

/* "../cython/include\numpy.pxd":386
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

  /* "../cython/include\numpy.pxd":387
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

/* "../cython/include\numpy.pxd":389
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

  /* "../cython/include\numpy.pxd":390
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

/* "../cython/include\numpy.pxd":392
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

  /* "../cython/include\numpy.pxd":393
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

/* "../cython/include\numpy.pxd":395
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

  /* "../cython/include\numpy.pxd":396
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

/* "../cython/include\numpy.pxd":398
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

  /* "../cython/include\numpy.pxd":399
 * 
 * cdef inline void *PyArray_Zero(arr):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return <void *><npy_intp>NumpyDotNet.NpyArray.Zero(arr)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":400
 * cdef inline void *PyArray_Zero(arr):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return <void *><npy_intp>NumpyDotNet.NpyArray.Zero(arr)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":401
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

/* "../cython/include\numpy.pxd":403
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

  /* "../cython/include\numpy.pxd":404
 * 
 * cdef inline object NpyArray_Return(NpyArray *arr):
 *     ret = Npy_INTERFACE_array(arr)             # <<<<<<<<<<<<<<
 *     Npy_DECREF(arr)
 *     return ret
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_arr)); 
  __pyx_v_ret = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":405
 * cdef inline object NpyArray_Return(NpyArray *arr):
 *     ret = Npy_INTERFACE_array(arr)
 *     Npy_DECREF(arr)             # <<<<<<<<<<<<<<
 *     return ret
 * 
 */
  Npy_DECREF(__pyx_v_arr);

  /* "../cython/include\numpy.pxd":406
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

/* "../cython/include\numpy.pxd":408
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

  /* "../cython/include\numpy.pxd":409
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

/* "../cython/include\numpy.pxd":411
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

  /* "../cython/include\numpy.pxd":412
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":413
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":414
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

/* "../cython/include\numpy.pxd":417
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

  /* "../cython/include\numpy.pxd":419
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

/* "../cython/include\numpy.pxd":422
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

  /* "../cython/include\numpy.pxd":423
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

    /* "../cython/include\numpy.pxd":424
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

  /* "../cython/include\numpy.pxd":425
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

/* "../cython/include\numpy.pxd":427
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

  /* "../cython/include\numpy.pxd":428
 * 
 * cdef inline object PyArray_ContiguousFromObject(op, type, minDepth, maxDepth):
 *     return PyArray_FromAny(op, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), minDepth, maxDepth,             # <<<<<<<<<<<<<<
 *                            NPY_DEFAULT | NPY_ENSUREARRAY, NULL)
 * 
 */
  __pyx_t_1 = __site_cvt_cvt_int_428_78->Target(__site_cvt_cvt_int_428_78, __pyx_v_type);
  __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_1))); 

  /* "../cython/include\numpy.pxd":429
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

/* "../cython/include\numpy.pxd":431
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

  /* "../cython/include\numpy.pxd":432
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":433
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":434
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

/* "../cython/include\numpy.pxd":436
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

  /* "../cython/include\numpy.pxd":437
 * 
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np             # <<<<<<<<<<<<<<
 *     return isinstance(obj, np.ndarray)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_np = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":438
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

/* "../cython/include\numpy.pxd":440
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

  /* "../cython/include\numpy.pxd":441
 * 
 * cdef inline object PyArray_Cast(arr, typenum):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyCoreApi
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":442
 * cdef inline object PyArray_Cast(arr, typenum):
 *     import clr
 *     import NumpyDotNet.NpyCoreApi             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyCoreApi", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":443
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

/* "../cython/include\numpy.pxd":445
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 * 
 */

static CYTHON_INLINE void import_array(void) {

}

/* "../cython/include\numpy.pxd":448
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

  /* "../cython/include\numpy.pxd":449
 * 
 * cdef inline PyNumber_Check(o):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":450
 * cdef inline PyNumber_Check(o):
 *     import clr
 *     import NumpyDotNet.ScalarGeneric             # <<<<<<<<<<<<<<
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ScalarGeneric", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":451
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

/* "../cython/include\numpy.pxd":453
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

  /* "../cython/include\numpy.pxd":454
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

/* "../cython/include\numpy.pxd":456
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

  /* "../cython/include\numpy.pxd":457
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

/* "../cython/include\numpy.pxd":459
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_NEXT(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_NEXT(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include\numpy.pxd":460
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 *     NpyArray_ITER_NEXT(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_NEXT(__pyx_v_obj);

}

/* "../cython/include\numpy.pxd":462
 *     NpyArray_ITER_NEXT(obj)
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_RESET(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_RESET(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include\numpy.pxd":463
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 *     NpyArray_ITER_RESET(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_RESET(__pyx_v_obj);

}

/* "../cython/include\numpy.pxd":465
 *     NpyArray_ITER_RESET(obj)
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     return NpyArray_ITER_DATA(obj)
 * 
 */

static CYTHON_INLINE void *PyArray_ITER_DATA(NpyArrayIterObject *__pyx_v_obj) {
  void *__pyx_r;

  /* "../cython/include\numpy.pxd":466
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

/* "../cython/include\numpy.pxd":468
 *     return NpyArray_ITER_DATA(obj)
 * 
 * cdef inline NpyArrayNeighborhoodIterObject* PyArray_NeighborhoodIterNew(NpyArrayIterObject *obj,             # <<<<<<<<<<<<<<
 *                                                                         npy_intp *bounds,
 *                                                                         int mode,
 */

static CYTHON_INLINE NpyArrayNeighborhoodIterObject *PyArray_NeighborhoodIterNew(NpyArrayIterObject *__pyx_v_obj, __pyx_t_5numpy_npy_intp *__pyx_v_bounds, int __pyx_v_mode, void *__pyx_v_fill, npy_free_func __pyx_v_fillfree) {
  NpyArrayNeighborhoodIterObject *__pyx_r;

  /* "../cython/include\numpy.pxd":473
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

/* "../cython/include\numpy.pxd":475
 *     return NpyArray_NeighborhoodIterNew(obj, bounds, mode, fill, fillfree)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include\numpy.pxd":476
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

/* "../cython/include\numpy.pxd":478
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include\numpy.pxd":479
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

/* "../cython/include\numpy.pxd":481
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(iter.ao)
 */

static CYTHON_INLINE NumpyDotNet::ndarray^ NpyIter_ARRAY(NpyArrayIterObject *__pyx_v_iter) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":482
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
  __site_call2_42_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_42_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_43_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_44_19 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_44_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_45_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_69_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_69_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_70_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_71_19 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_71_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_71_62 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_71_62 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_72_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_79_43 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_91_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_91_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_91_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_91_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_91_0_3 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_91_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_91_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_121_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_121_36 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_PyArray_DOUBLE_131_64 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyArray_DOUBLE", false));
  __site_cvt_cvt_int_170_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_170_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_170_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_170_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_170_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_198_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_198_36 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_PyArray_DOUBLE_208_64 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyArray_DOUBLE", false));
  __site_op_eq_293_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_293_35 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_339_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_339_32 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_add_369_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_398_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_402_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call2_402_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_func_name_404_89 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "func_name", false));
  __site_op_mod_404_83 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_404_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  __pyx_delegate_val_raw_multipack_calling_function = gcnew __pyx_delegate_t_5scipy_8optimize_8_minpack_raw_multipack_calling_function(raw_multipack_calling_function);
  __pyx_function_pointer_raw_multipack_calling_function = (__pyx_fp_t_raw_multipack_calling_function)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_raw_multipack_calling_function).ToPointer());
  __pyx_delegate_val_jac_multipack_calling_function = gcnew __pyx_delegate_t_5scipy_8optimize_8_minpack_jac_multipack_calling_function(jac_multipack_calling_function);
  __pyx_function_pointer_jac_multipack_calling_function = (__pyx_fp_t_jac_multipack_calling_function)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_jac_multipack_calling_function).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":5
 * cimport numpy as np
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * import sys
 * 
 */
  import_array();

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":6
 * 
 * np.import_array()
 * import sys             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "stdlib.h" nogil:
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "sys", -1));
  PythonOps::SetGlobal(__pyx_context, "sys", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":30
 * cdef multipack_jac_transpose
 * 
 * class MinpackError(Exception):             # <<<<<<<<<<<<<<
 *     pass
 * 
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "Exception");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  FunctionCode^ func_code_MinpackError = PythonOps::MakeFunctionCode(__pyx_context, "func_code_MinpackError", nullptr, gcnew array<System::String^>{"arg0"}, FunctionAttributes::None, 0, 0, "", gcnew System::Func<CodeContext^, CodeContext^>(mk_empty_context), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), 0);
  PythonTuple^ tbases_MinpackError = safe_cast<PythonTuple^>(__pyx_t_3);
  array<System::Object^>^ bases_MinpackError = gcnew array<System::Object^>(tbases_MinpackError->Count);
  tbases_MinpackError->CopyTo(bases_MinpackError, 0);
  __pyx_t_1 = PythonOps::MakeClass(func_code_MinpackError, nullptr, __pyx_context, "MinpackError", bases_MinpackError, "");
  __pyx_t_3 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "MinpackError", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":33
 *     pass
 * 
 * minpack_error = MinpackError             # <<<<<<<<<<<<<<
 * error = MinpackError
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "MinpackError");
  PythonOps::SetGlobal(__pyx_context, "minpack_error", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":34
 * 
 * minpack_error = MinpackError
 * error = MinpackError             # <<<<<<<<<<<<<<
 * 
 * cdef INIT_FUNC(fun, arg):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "MinpackError");
  PythonOps::SetGlobal(__pyx_context, "error", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "Z:\dev\scipy-refactor\scipy\optimize\_minpack.pyx":1
 * #cython: ccomplex=True             # <<<<<<<<<<<<<<
 * 
 * cimport numpy as np
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":481
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

static System::Object^ __pyx_v_5scipy_8optimize_8_minpack_multipack_python_function = nullptr;
static System::Object^ __pyx_v_5scipy_8optimize_8_minpack_multipack_extra_arguments = nullptr;
static System::Object^ __pyx_v_5scipy_8optimize_8_minpack_multipack_python_jacobian = nullptr;
static System::Object^ __pyx_v_5scipy_8optimize_8_minpack_multipack_jac_transpose = nullptr;
/* Cython code section 'utility_code_def' */

/* Runtime support code */

static CYTHON_INLINE long __Pyx_div_long(long a, long b) {
    long q = a / b;
    long r = a - q*b;
    q -= ((r != 0) & ((r ^ b) < 0));
    return q;
}

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
[assembly: PythonModule("scipy__optimize___minpack", module__minpack::typeid)];
};
