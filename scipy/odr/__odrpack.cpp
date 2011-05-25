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
  dict["__module__"] = "scipy.odr.__odrpack";
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
#define __PYX_HAVE_API__scipy__odr____odrpack
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_descriptor.h"
#include "npy_arrayobject.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_iterators.h"
#include "npy_ironpython.h"
#include "string.h"
#include "odrpack.h"

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

static CYTHON_INLINE long __Pyx_mod_long(long, long); /* proto */

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
/* Module declarations from scipy.odr.__odrpack */
static NpyArray *NpyArray_SimpleNew(int, npy_intp *, NumpyDotNet::dtype^); /*proto*/
static System::Object^ __evalArrayGenFunc(System::Object^, System::Object^, int *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_3odr_9__odrpack_fcn_callback(int *, int *, int *, int *, int *, int *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, int *);
static void fcn_callback(int *, int *, int *, int *, int *, int *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, int *); /*proto*/
static System::Object^ gen_output(int, int, int, int, int, int, NpyArray *, NpyArray *, NpyArray *, int, int, int); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.odr.__odrpack"

/* Implementation of scipy.odr.__odrpack */
namespace clr___odrpack {
  public ref class module___odrpack sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_itemsize_47_91;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_47_91;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_61_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_64_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_func_name_70_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_73_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_iadd_73_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_74_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_80_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_103_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_105_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_106_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_110_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_113_52;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_118_52;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_122_45;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_122_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_123_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_126_45;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_126_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_127_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_132_52;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_136_45;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_136_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_137_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_140_45;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_140_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_141_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_144_45;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_144_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_145_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_333_37;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_333_52;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_333_52;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_334_48;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_334_23;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_337_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_337_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_337_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_337_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_337_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_337_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_337_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_337_0_4;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_362_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_362_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_362_41;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_363_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_363_34;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_363_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_363_61;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_364_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_364_34;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_364_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_366_21;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_366_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_368_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_369_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_369_34;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_369_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_370_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_372_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_372_53;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_372_53;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_372_76;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_372_76;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_373_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_374_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_374_53;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_374_53;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_374_76;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_374_76;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_375_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_377_41;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_377_41;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_378_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_379_41;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_379_41;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_380_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_385_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_386_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_387_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_388_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_389_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_390_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_391_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_392_15;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_393_15;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_395_48;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_396_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_397_49;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_398_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_404_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_407_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_409_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_409_19;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_409_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_410_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_410_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_410_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_410_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_411_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_412_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_412_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_412_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_412_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_412_42;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_412_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_416_16;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_416_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_423_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_424_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_424_19;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_424_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_427_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_427_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_427_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_427_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_427_37;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_427_8;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_430_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_431_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_431_20;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_431_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_437_10;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_438_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_440_23;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_440_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_445_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_448_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_449_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_449_32;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_449_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_452_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_454_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_454_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_454_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_457_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_457_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_457_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_457_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_457_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_457_42;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_457_42;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_462_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_462_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_462_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_462_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_462_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_462_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_467_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_467_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_467_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_467_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_467_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_467_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_472_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_472_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_472_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_472_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_472_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_472_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_477_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_477_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_477_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_477_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_477_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_477_39;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_482_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_488_10;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_489_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_491_23;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_491_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_496_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_500_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_501_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_501_32;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_501_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_504_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_506_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_506_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_506_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_509_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_509_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_509_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_509_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_509_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_509_42;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_509_42;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_514_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_514_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_514_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_514_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_514_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_514_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_519_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_519_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_519_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_519_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_519_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_519_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_524_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_524_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_524_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_524_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_524_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_524_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_529_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_529_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_529_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_529_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_529_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_529_39;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_533_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_538_13;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_541_33;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_541_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_541_43;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_541_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_542_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_548_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_553_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_555_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_555_22;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_555_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_555_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_555_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_555_46;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_555_46;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_557_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_557_24;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_557_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_557_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_557_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_557_48;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_557_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_559_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_559_24;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_559_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_559_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_559_45;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_559_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_562_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_567_35;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_567_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_571_35;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_571_35;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_576_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_579_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_579_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_579_41;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_579_41;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_580_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_586_12;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_591_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_593_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_593_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_593_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_593_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_593_40;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_593_44;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_593_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_595_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_595_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_595_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_595_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_595_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_595_46;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_595_46;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_597_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_597_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_597_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_597_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_597_43;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_597_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_600_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_605_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_608_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_608_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_608_41;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_608_41;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_609_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_615_12;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_620_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_622_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_622_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_622_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_622_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_622_40;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_622_44;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_622_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_624_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_624_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_624_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_624_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_624_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_624_46;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_624_46;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_626_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_626_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_626_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_626_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_626_43;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_626_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_629_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_650_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_655_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_660_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_662_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_662_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_662_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_662_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_663_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_672_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_674_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_674_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_674_26;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_674_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_675_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_685_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_688_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_689_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_690_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_691_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_692_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_694_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_711_14;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_711_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_712_26;
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
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_446_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_446_45;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ScalarGeneric_446_73;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_446_58;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_449_51;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_449_51;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_452_58;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_452_58;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_0;
static int^ __pyx_int_1;
static int^ __pyx_int_2;
static int^ __pyx_int_3;
static int^ __pyx_int_neg_1;
static double __pyx_k_1;
static double __pyx_k_2;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":46
 * 
 * 
 * cdef NpyArray *NpyArray_SimpleNew(int nd, npy_intp *dims, np.dtype descr):             # <<<<<<<<<<<<<<
 *     return np.NpyArray_New(NULL, nd, dims, np.PyDataType_TYPE_NUM(descr), NULL, NULL, descr.itemsize, 0, NULL)
 * 
 */

static  NpyArray *NpyArray_SimpleNew(int __pyx_v_nd, npy_intp *__pyx_v_dims, NumpyDotNet::dtype^ __pyx_v_descr) {
  NpyArray *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":47
 * 
 * cdef NpyArray *NpyArray_SimpleNew(int nd, npy_intp *dims, np.dtype descr):
 *     return np.NpyArray_New(NULL, nd, dims, np.PyDataType_TYPE_NUM(descr), NULL, NULL, descr.itemsize, 0, NULL)             # <<<<<<<<<<<<<<
 * 
 * class odr_stop(Exception):
 */
  __pyx_t_1 = __site_get_itemsize_47_91->Target(__site_get_itemsize_47_91, ((System::Object^)__pyx_v_descr), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_int_47_91->Target(__site_cvt_cvt_int_47_91, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_New(NULL, __pyx_v_nd, ((__pyx_t_5numpy_npy_intp *)__pyx_v_dims), PyDataType_TYPE_NUM(__pyx_v_descr), NULL, NULL, __pyx_t_2, 0, NULL);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":59
 * 
 * 
 * cdef object __evalArrayGenFunc(func, arglist, int *istop):             # <<<<<<<<<<<<<<
 *     if func is None:
 *         raise odr_error("Function has not been initialized")
 */

static  System::Object^ __evalArrayGenFunc(System::Object^ __pyx_v_func, System::Object^ __pyx_v_arglist, int *__pyx_v_istop) {
  System::Object^ __pyx_v_result;
  System::Object^ __pyx_v_e;
  System::Object^ __pyx_v_name;
  System::Object^ __pyx_v_msg;
  System::Object^ __pyx_v_result_array;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_result = nullptr;
  __pyx_v_e = nullptr;
  __pyx_v_name = nullptr;
  __pyx_v_msg = nullptr;
  __pyx_v_result_array = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":60
 * 
 * cdef object __evalArrayGenFunc(func, arglist, int *istop):
 *     if func is None:             # <<<<<<<<<<<<<<
 *         raise odr_error("Function has not been initialized")
 * 
 */
  __pyx_t_1 = (__pyx_v_func == nullptr);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":61
 * cdef object __evalArrayGenFunc(func, arglist, int *istop):
 *     if func is None:
 *         raise odr_error("Function has not been initialized")             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "odr_error");
    __pyx_t_3 = __site_call1_61_23->Target(__site_call1_61_23, __pyx_context, __pyx_t_2, ((System::Object^)"Function has not been initialized"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":63
 *         raise odr_error("Function has not been initialized")
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         result = apply(func, arglist)
 *     except odr_stop, e:
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":64
 * 
 *     try:
 *         result = apply(func, arglist)             # <<<<<<<<<<<<<<
 *     except odr_stop, e:
 *         istop[0] = 1
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "apply");
    __pyx_t_2 = __site_call2_64_22->Target(__site_call2_64_22, __pyx_context, __pyx_t_3, __pyx_v_func, __pyx_v_arglist);
    __pyx_t_3 = nullptr;
    __pyx_v_result = __pyx_t_2;
    __pyx_t_2 = nullptr;
  } catch (System::Exception^ __pyx_lt_4) {
    System::Object^ __pyx_lt_5 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_4);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":65
 *     try:
 *         result = apply(func, arglist)
 *     except odr_stop, e:             # <<<<<<<<<<<<<<
 *         istop[0] = 1
 *         return
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "odr_stop");
    __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_5, __pyx_t_2);
    __pyx_t_2 = nullptr;
    if (__pyx_v_e != nullptr) {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.odr.__odrpack.__evalArrayGenFunc");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_4);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":66
 *         result = apply(func, arglist)
 *     except odr_stop, e:
 *         istop[0] = 1             # <<<<<<<<<<<<<<
 *         return
 *     except Exception, e:
 */
      (__pyx_v_istop[0]) = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":67
 *     except odr_stop, e:
 *         istop[0] = 1
 *         return             # <<<<<<<<<<<<<<
 *     except Exception, e:
 *         istop[0] = -1
 */
      __pyx_r = nullptr;
      goto __pyx_L0;
    }
    else {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":68
 *         istop[0] = 1
 *         return
 *     except Exception, e:             # <<<<<<<<<<<<<<
 *         istop[0] = -1
 *         name = func.func_name
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_5, __pyx_t_2);
      __pyx_t_2 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.odr.__odrpack.__evalArrayGenFunc");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_4);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":69
 *         return
 *     except Exception, e:
 *         istop[0] = -1             # <<<<<<<<<<<<<<
 *         name = func.func_name
 *         msg = "Error occured while calling Python function"
 */
        (__pyx_v_istop[0]) = -1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":70
 *     except Exception, e:
 *         istop[0] = -1
 *         name = func.func_name             # <<<<<<<<<<<<<<
 *         msg = "Error occured while calling Python function"
 *         if name is not None:
 */
        __pyx_t_2 = __site_get_func_name_70_19->Target(__site_get_func_name_70_19, __pyx_v_func, __pyx_context);
        __pyx_v_name = __pyx_t_2;
        __pyx_t_2 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":71
 *         istop[0] = -1
 *         name = func.func_name
 *         msg = "Error occured while calling Python function"             # <<<<<<<<<<<<<<
 *         if name is not None:
 *             msg += " '%s'" % name
 */
        __pyx_v_msg = ((System::Object^)"Error occured while calling Python function");

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":72
 *         name = func.func_name
 *         msg = "Error occured while calling Python function"
 *         if name is not None:             # <<<<<<<<<<<<<<
 *             msg += " '%s'" % name
 *         raise odr_error(msg)
 */
        __pyx_t_1 = (__pyx_v_name != nullptr);
        if (__pyx_t_1) {

          /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":73
 *         msg = "Error occured while calling Python function"
 *         if name is not None:
 *             msg += " '%s'" % name             # <<<<<<<<<<<<<<
 *         raise odr_error(msg)
 * 
 */
          __pyx_t_2 = __site_op_mod_73_27->Target(__site_op_mod_73_27, ((System::Object^)" '%s'"), __pyx_v_name);
          __pyx_t_3 = __site_op_iadd_73_16->Target(__site_op_iadd_73_16, __pyx_v_msg, ((System::Object^)__pyx_t_2));
          __pyx_t_2 = nullptr;
          __pyx_v_msg = __pyx_t_3;
          __pyx_t_3 = nullptr;
          goto __pyx_L4;
        }
        __pyx_L4:;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":74
 *         if name is not None:
 *             msg += " '%s'" % name
 *         raise odr_error(msg)             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "odr_error");
        __pyx_t_2 = __site_call1_74_23->Target(__site_call1_74_23, __pyx_context, __pyx_t_3, __pyx_v_msg);
        __pyx_t_3 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
        __pyx_t_2 = nullptr;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_4);
      }
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":76
 *         raise odr_error(msg)
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         result_array = np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, 0, 2)
 *     except Exception, e:
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":77
 * 
 *     try:
 *         result_array = np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, 0, 2)             # <<<<<<<<<<<<<<
 *     except Exception, e:
 *         istop[0] = -1
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
    __pyx_t_3 = PyArray_ContiguousFromObject(__pyx_v_result, __pyx_t_2, __pyx_int_0, __pyx_int_2); 
    __pyx_t_2 = nullptr;
    __pyx_v_result_array = __pyx_t_3;
    __pyx_t_3 = nullptr;
  } catch (System::Exception^ __pyx_lt_6) {
    System::Object^ __pyx_lt_7 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_6);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":78
 *     try:
 *         result_array = np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, 0, 2)
 *     except Exception, e:             # <<<<<<<<<<<<<<
 *         istop[0] = -1
 *         raise odr_error("Result from function call is not a proper array of floats.")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_7, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (__pyx_v_e != nullptr) {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.odr.__odrpack.__evalArrayGenFunc");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_6);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":79
 *         result_array = np.PyArray_ContiguousFromObject(result, np.NPY_DOUBLE, 0, 2)
 *     except Exception, e:
 *         istop[0] = -1             # <<<<<<<<<<<<<<
 *         raise odr_error("Result from function call is not a proper array of floats.")
 *     return result_array
 */
      (__pyx_v_istop[0]) = -1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":80
 *     except Exception, e:
 *         istop[0] = -1
 *         raise odr_error("Result from function call is not a proper array of floats.")             # <<<<<<<<<<<<<<
 *     return result_array
 * 
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "odr_error");
      __pyx_t_2 = __site_call1_80_23->Target(__site_call1_80_23, __pyx_context, __pyx_t_3, ((System::Object^)"Result from function call is not a proper array of floats."));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
    }
    else {
      // XXX we should set traceback here
      throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_6);
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":81
 *         istop[0] = -1
 *         raise odr_error("Result from function call is not a proper array of floats.")
 *     return result_array             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_result_array;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":84
 * 
 * 
 * cdef void fcn_callback(int *n, int *m, int *npx, int *nq, int *ldn, int *ldm,             # <<<<<<<<<<<<<<
 *     int *ldnp, double *beta, double *xplusd, int *ifixb,
 *     int *ifixx, int *ldfix, int *ideval, double *f,
 */

static void (*__pyx_function_pointer_fcn_callback)(int *, int *, int *, int *, int *, int *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, int *);
typedef void (*__pyx_fp_t_fcn_callback)(int *, int *, int *, int *, int *, int *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, int *);
static __pyx_delegate_t_5scipy_3odr_9__odrpack_fcn_callback^ __pyx_delegate_val_fcn_callback;
static  void fcn_callback(int *__pyx_v_n, int *__pyx_v_m, int *__pyx_v_npx, int *__pyx_v_nq, int *__pyx_v_ldn, int *__pyx_v_ldm, int *__pyx_v_ldnp, double *__pyx_v_beta, double *__pyx_v_xplusd, int *__pyx_v_ifixb, int *__pyx_v_ifixx, int *__pyx_v_ldfix, int *__pyx_v_ideval, double *__pyx_v_f, double *__pyx_v_fjacb, double *__pyx_v_fjacd, int *__pyx_v_istop) {
  System::Object^ __pyx_v_result_array;
  System::Object^ __pyx_v_pyXplusD;
  npy_intp __pyx_v_dim1[1];
  npy_intp __pyx_v_dim2[2];
  System::Object^ __pyx_v_arg01;
  System::Object^ __pyx_v_extra_args;
  System::Object^ __pyx_v_arglist;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_result_array = nullptr;
  __pyx_v_pyXplusD = nullptr;
  __pyx_v_arg01 = nullptr;
  __pyx_v_extra_args = nullptr;
  __pyx_v_arglist = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":93
 *     cdef npy_intp dim1[1], dim2[2]
 * 
 *     if m[0] != 1:             # <<<<<<<<<<<<<<
 *         dim2[0] = m[0]
 *         dim2[1] = n[0]
 */
  __pyx_t_1 = ((__pyx_v_m[0]) != 1);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":94
 * 
 *     if m[0] != 1:
 *         dim2[0] = m[0]             # <<<<<<<<<<<<<<
 *         dim2[1] = n[0]
 *         pyXplusD = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 */
    (__pyx_v_dim2[0]) = (__pyx_v_m[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":95
 *     if m[0] != 1:
 *         dim2[0] = m[0]
 *         dim2[1] = n[0]             # <<<<<<<<<<<<<<
 *         pyXplusD = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *         memcpy(np.PyArray_DATA(pyXplusD), xplusd, m[0] * n[0] * sizeof(double))
 */
    (__pyx_v_dim2[1]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":96
 *         dim2[0] = m[0]
 *         dim2[1] = n[0]
 *         pyXplusD = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         memcpy(np.PyArray_DATA(pyXplusD), xplusd, m[0] * n[0] * sizeof(double))
 *     else:
 */
    __pyx_t_2 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_DOUBLE, 0); 
    __pyx_v_pyXplusD = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":97
 *         dim2[1] = n[0]
 *         pyXplusD = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *         memcpy(np.PyArray_DATA(pyXplusD), xplusd, m[0] * n[0] * sizeof(double))             # <<<<<<<<<<<<<<
 *     else:
 *         dim1[0] = n[0]
 */
    if (__pyx_v_pyXplusD != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_pyXplusD) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_pyXplusD)), __pyx_v_xplusd, (((__pyx_v_m[0]) * (__pyx_v_n[0])) * (sizeof(double))));
    goto __pyx_L3;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":99
 *         memcpy(np.PyArray_DATA(pyXplusD), xplusd, m[0] * n[0] * sizeof(double))
 *     else:
 *         dim1[0] = n[0]             # <<<<<<<<<<<<<<
 *         pyXplusD = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         memcpy(np.PyArray_DATA(pyXplusD), xplusd, n[0] * sizeof(double))
 */
    (__pyx_v_dim1[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":100
 *     else:
 *         dim1[0] = n[0]
 *         pyXplusD = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         memcpy(np.PyArray_DATA(pyXplusD), xplusd, n[0] * sizeof(double))
 * 
 */
    __pyx_t_2 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
    __pyx_v_pyXplusD = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":101
 *         dim1[0] = n[0]
 *         pyXplusD = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         memcpy(np.PyArray_DATA(pyXplusD), xplusd, n[0] * sizeof(double))             # <<<<<<<<<<<<<<
 * 
 *     arg01 = (odr_global["pyBeta"], pyXplusD)
 */
    if (__pyx_v_pyXplusD != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_pyXplusD) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_pyXplusD)), __pyx_v_xplusd, ((__pyx_v_n[0]) * (sizeof(double))));
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":103
 *         memcpy(np.PyArray_DATA(pyXplusD), xplusd, n[0] * sizeof(double))
 * 
 *     arg01 = (odr_global["pyBeta"], pyXplusD)             # <<<<<<<<<<<<<<
 * 
 *     extra_args = odr_global["extra_args"]
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "odr_global");
  __pyx_t_3 = __site_getindex_103_23->Target(__site_getindex_103_23, __pyx_t_2, ((System::Object^)"pyBeta"));
  __pyx_t_2 = nullptr;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_v_pyXplusD});
  __pyx_t_3 = nullptr;
  if (__pyx_t_2 != nullptr && dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arg01 = ((System::Object^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":105
 *     arg01 = (odr_global["pyBeta"], pyXplusD)
 * 
 *     extra_args = odr_global["extra_args"]             # <<<<<<<<<<<<<<
 *     arglist = arg01 + (extra_args, ) if extra_args is not None else arg01
 * 
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "odr_global");
  __pyx_t_3 = __site_getindex_105_27->Target(__site_getindex_105_27, __pyx_t_2, ((System::Object^)"extra_args"));
  __pyx_t_2 = nullptr;
  __pyx_v_extra_args = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":106
 * 
 *     extra_args = odr_global["extra_args"]
 *     arglist = arg01 + (extra_args, ) if extra_args is not None else arg01             # <<<<<<<<<<<<<<
 * 
 *     istop[0] = 0
 */
  __pyx_t_1 = (__pyx_v_extra_args != nullptr);
  if (__pyx_t_1) {
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_v_extra_args});
    __pyx_t_4 = __site_op_add_106_20->Target(__site_op_add_106_20, ((System::Object^)__pyx_v_arg01), __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_3 = __pyx_t_4;
    __pyx_t_4 = nullptr;
  } else {
    __pyx_t_3 = __pyx_v_arg01;
  }
  if (__pyx_t_3 != nullptr && dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arglist = ((System::Object^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":108
 *     arglist = arg01 + (extra_args, ) if extra_args is not None else arg01
 * 
 *     istop[0] = 0             # <<<<<<<<<<<<<<
 * 
 *     memcpy(np.PyArray_DATA(odr_global["pyBeta"]), beta, npx[0] * sizeof(double))
 */
  (__pyx_v_istop[0]) = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":110
 *     istop[0] = 0
 * 
 *     memcpy(np.PyArray_DATA(odr_global["pyBeta"]), beta, npx[0] * sizeof(double))             # <<<<<<<<<<<<<<
 *     if (ideval[0] % 10) >= 1:
 *         # Compute f with odr_global.fcn
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "odr_global");
  __pyx_t_4 = __site_getindex_110_37->Target(__site_getindex_110_37, __pyx_t_3, ((System::Object^)"pyBeta"));
  __pyx_t_3 = nullptr;
  if (__pyx_t_4 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_t_4)), __pyx_v_beta, ((__pyx_v_npx[0]) * (sizeof(double))));
  __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":111
 * 
 *     memcpy(np.PyArray_DATA(odr_global["pyBeta"]), beta, npx[0] * sizeof(double))
 *     if (ideval[0] % 10) >= 1:             # <<<<<<<<<<<<<<
 *         # Compute f with odr_global.fcn
 *         result_array = __evalArrayGenFunc(odr_global["fcn"], arglist, istop)
 */
  __pyx_t_1 = (__Pyx_mod_long((__pyx_v_ideval[0]), 10) >= 1);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":113
 *     if (ideval[0] % 10) >= 1:
 *         # Compute f with odr_global.fcn
 *         result_array = __evalArrayGenFunc(odr_global["fcn"], arglist, istop)             # <<<<<<<<<<<<<<
 *         memcpy(f, np.PyArray_DATA(result_array), n[0] * nq[0] * sizeof(double))
 * 
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "odr_global");
    __pyx_t_3 = __site_getindex_113_52->Target(__site_getindex_113_52, __pyx_t_4, ((System::Object^)"fcn"));
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __evalArrayGenFunc(__pyx_t_3, ((System::Object^)__pyx_v_arglist), __pyx_v_istop); 
    __pyx_t_3 = nullptr;
    __pyx_v_result_array = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":114
 *         # Compute f with odr_global.fcn
 *         result_array = __evalArrayGenFunc(odr_global["fcn"], arglist, istop)
 *         memcpy(f, np.PyArray_DATA(result_array), n[0] * nq[0] * sizeof(double))             # <<<<<<<<<<<<<<
 * 
 *     if ((ideval[0] / 10) % 10) >= 1:
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(__pyx_v_f, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), (((__pyx_v_n[0]) * (__pyx_v_nq[0])) * (sizeof(double))));
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":116
 *         memcpy(f, np.PyArray_DATA(result_array), n[0] * nq[0] * sizeof(double))
 * 
 *     if ((ideval[0] / 10) % 10) >= 1:             # <<<<<<<<<<<<<<
 *         # Compute fjacb with odr_globals.fjacb
 *         result_array = __evalArrayGenFunc(odr_global["fjacb"], arglist, istop)
 */
  __pyx_t_1 = (__Pyx_mod_long(__Pyx_div_long((__pyx_v_ideval[0]), 10), 10) >= 1);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":118
 *     if ((ideval[0] / 10) % 10) >= 1:
 *         # Compute fjacb with odr_globals.fjacb
 *         result_array = __evalArrayGenFunc(odr_global["fjacb"], arglist, istop)             # <<<<<<<<<<<<<<
 * 
 *         if nq[0] != 1 and npx[0] != 1:
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "odr_global");
    __pyx_t_3 = __site_getindex_118_52->Target(__site_getindex_118_52, __pyx_t_4, ((System::Object^)"fjacb"));
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __evalArrayGenFunc(__pyx_t_3, ((System::Object^)__pyx_v_arglist), __pyx_v_istop); 
    __pyx_t_3 = nullptr;
    __pyx_v_result_array = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":120
 *         result_array = __evalArrayGenFunc(odr_global["fjacb"], arglist, istop)
 * 
 *         if nq[0] != 1 and npx[0] != 1:             # <<<<<<<<<<<<<<
 *             # result_array should be rank-3
 *             if np.PyArray_NDIM(result_array) != 3:
 */
    __pyx_t_1 = ((__pyx_v_nq[0]) != 1);
    if (__pyx_t_1) {
      __pyx_t_5 = ((__pyx_v_npx[0]) != 1);
      __pyx_t_6 = __pyx_t_5;
    } else {
      __pyx_t_6 = __pyx_t_1;
    }
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":122
 *         if nq[0] != 1 and npx[0] != 1:
 *             # result_array should be rank-3
 *             if np.PyArray_NDIM(result_array) != 3:             # <<<<<<<<<<<<<<
 *                 raise odr_error("Beta Jacobian is not rank-3")
 *         elif nq[0] == 1:
 */
      if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_4 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_v_result_array)); 
      __pyx_t_3 = __site_op_ne_122_45->Target(__site_op_ne_122_45, __pyx_t_4, __pyx_int_3);
      __pyx_t_4 = nullptr;
      __pyx_t_6 = __site_istrue_122_45->Target(__site_istrue_122_45, __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_t_6) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":123
 *             # result_array should be rank-3
 *             if np.PyArray_NDIM(result_array) != 3:
 *                 raise odr_error("Beta Jacobian is not rank-3")             # <<<<<<<<<<<<<<
 *         elif nq[0] == 1:
 *             # result_array should be rank-2
 */
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "odr_error");
        __pyx_t_4 = __site_call1_123_31->Target(__site_call1_123_31, __pyx_context, __pyx_t_3, ((System::Object^)"Beta Jacobian is not rank-3"));
        __pyx_t_3 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
        __pyx_t_4 = nullptr;
        goto __pyx_L7;
      }
      __pyx_L7:;
      goto __pyx_L6;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":124
 *             if np.PyArray_NDIM(result_array) != 3:
 *                 raise odr_error("Beta Jacobian is not rank-3")
 *         elif nq[0] == 1:             # <<<<<<<<<<<<<<
 *             # result_array should be rank-2
 *             if np.PyArray_NDIM(result_array) != 2:
 */
    __pyx_t_6 = ((__pyx_v_nq[0]) == 1);
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":126
 *         elif nq[0] == 1:
 *             # result_array should be rank-2
 *             if np.PyArray_NDIM(result_array) != 2:             # <<<<<<<<<<<<<<
 *                 raise odr_error("Beta Jacobian is not rank-2")
 *         memcpy(fjacb, np.PyArray_DATA(result_array), n[0] * nq[0] * npx[0] * sizeof(double));
 */
      if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_4 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_v_result_array)); 
      __pyx_t_3 = __site_op_ne_126_45->Target(__site_op_ne_126_45, __pyx_t_4, __pyx_int_2);
      __pyx_t_4 = nullptr;
      __pyx_t_6 = __site_istrue_126_45->Target(__site_istrue_126_45, __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_t_6) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":127
 *             # result_array should be rank-2
 *             if np.PyArray_NDIM(result_array) != 2:
 *                 raise odr_error("Beta Jacobian is not rank-2")             # <<<<<<<<<<<<<<
 *         memcpy(fjacb, np.PyArray_DATA(result_array), n[0] * nq[0] * npx[0] * sizeof(double));
 * 
 */
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "odr_error");
        __pyx_t_4 = __site_call1_127_31->Target(__site_call1_127_31, __pyx_context, __pyx_t_3, ((System::Object^)"Beta Jacobian is not rank-2"));
        __pyx_t_3 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
        __pyx_t_4 = nullptr;
        goto __pyx_L8;
      }
      __pyx_L8:;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":128
 *             if np.PyArray_NDIM(result_array) != 2:
 *                 raise odr_error("Beta Jacobian is not rank-2")
 *         memcpy(fjacb, np.PyArray_DATA(result_array), n[0] * nq[0] * npx[0] * sizeof(double));             # <<<<<<<<<<<<<<
 * 
 *     if ((ideval[0] / 100) % 10) >= 1:
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(__pyx_v_fjacb, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), ((((__pyx_v_n[0]) * (__pyx_v_nq[0])) * (__pyx_v_npx[0])) * (sizeof(double))));
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":130
 *         memcpy(fjacb, np.PyArray_DATA(result_array), n[0] * nq[0] * npx[0] * sizeof(double));
 * 
 *     if ((ideval[0] / 100) % 10) >= 1:             # <<<<<<<<<<<<<<
 *         # compute fjacd with odr_global.fjacd
 *         result_array = __evalArrayGenFunc(odr_global["fjacd"], arglist, istop)
 */
  __pyx_t_6 = (__Pyx_mod_long(__Pyx_div_long((__pyx_v_ideval[0]), 100), 10) >= 1);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":132
 *     if ((ideval[0] / 100) % 10) >= 1:
 *         # compute fjacd with odr_global.fjacd
 *         result_array = __evalArrayGenFunc(odr_global["fjacd"], arglist, istop)             # <<<<<<<<<<<<<<
 * 
 *         if nq[0] != 1 and m[0] != 1:
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "odr_global");
    __pyx_t_3 = __site_getindex_132_52->Target(__site_getindex_132_52, __pyx_t_4, ((System::Object^)"fjacd"));
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __evalArrayGenFunc(__pyx_t_3, ((System::Object^)__pyx_v_arglist), __pyx_v_istop); 
    __pyx_t_3 = nullptr;
    __pyx_v_result_array = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":134
 *         result_array = __evalArrayGenFunc(odr_global["fjacd"], arglist, istop)
 * 
 *         if nq[0] != 1 and m[0] != 1:             # <<<<<<<<<<<<<<
 *             # result_array should be rank-3
 *             if np.PyArray_NDIM(result_array) != 3:
 */
    __pyx_t_6 = ((__pyx_v_nq[0]) != 1);
    if (__pyx_t_6) {
      __pyx_t_1 = ((__pyx_v_m[0]) != 1);
      __pyx_t_5 = __pyx_t_1;
    } else {
      __pyx_t_5 = __pyx_t_6;
    }
    if (__pyx_t_5) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":136
 *         if nq[0] != 1 and m[0] != 1:
 *             # result_array should be rank-3
 *             if np.PyArray_NDIM(result_array) != 3:             # <<<<<<<<<<<<<<
 *                 raise odr_error("xplusd Jacobian is not rank-3")
 *         elif nq[0] == 1 and m[0] != 1:
 */
      if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_4 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_v_result_array)); 
      __pyx_t_3 = __site_op_ne_136_45->Target(__site_op_ne_136_45, __pyx_t_4, __pyx_int_3);
      __pyx_t_4 = nullptr;
      __pyx_t_5 = __site_istrue_136_45->Target(__site_istrue_136_45, __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_t_5) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":137
 *             # result_array should be rank-3
 *             if np.PyArray_NDIM(result_array) != 3:
 *                 raise odr_error("xplusd Jacobian is not rank-3")             # <<<<<<<<<<<<<<
 *         elif nq[0] == 1 and m[0] != 1:
 *             # result_array should be rank-2
 */
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "odr_error");
        __pyx_t_4 = __site_call1_137_31->Target(__site_call1_137_31, __pyx_context, __pyx_t_3, ((System::Object^)"xplusd Jacobian is not rank-3"));
        __pyx_t_3 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
        __pyx_t_4 = nullptr;
        goto __pyx_L11;
      }
      __pyx_L11:;
      goto __pyx_L10;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":138
 *             if np.PyArray_NDIM(result_array) != 3:
 *                 raise odr_error("xplusd Jacobian is not rank-3")
 *         elif nq[0] == 1 and m[0] != 1:             # <<<<<<<<<<<<<<
 *             # result_array should be rank-2
 *             if np.PyArray_NDIM(result_array) != 2:
 */
    __pyx_t_5 = ((__pyx_v_nq[0]) == 1);
    if (__pyx_t_5) {
      __pyx_t_6 = ((__pyx_v_m[0]) != 1);
      __pyx_t_1 = __pyx_t_6;
    } else {
      __pyx_t_1 = __pyx_t_5;
    }
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":140
 *         elif nq[0] == 1 and m[0] != 1:
 *             # result_array should be rank-2
 *             if np.PyArray_NDIM(result_array) != 2:             # <<<<<<<<<<<<<<
 *                 raise odr_error("xplusd Jacobian is not rank-2")
 *         elif nq[0] == 1 and m[0] == 1:
 */
      if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_4 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_v_result_array)); 
      __pyx_t_3 = __site_op_ne_140_45->Target(__site_op_ne_140_45, __pyx_t_4, __pyx_int_2);
      __pyx_t_4 = nullptr;
      __pyx_t_1 = __site_istrue_140_45->Target(__site_istrue_140_45, __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_t_1) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":141
 *             # result_array should be rank-2
 *             if np.PyArray_NDIM(result_array) != 2:
 *                 raise odr_error("xplusd Jacobian is not rank-2")             # <<<<<<<<<<<<<<
 *         elif nq[0] == 1 and m[0] == 1:
 *             # result_array should be rank-1
 */
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "odr_error");
        __pyx_t_4 = __site_call1_141_31->Target(__site_call1_141_31, __pyx_context, __pyx_t_3, ((System::Object^)"xplusd Jacobian is not rank-2"));
        __pyx_t_3 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
        __pyx_t_4 = nullptr;
        goto __pyx_L12;
      }
      __pyx_L12:;
      goto __pyx_L10;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":142
 *             if np.PyArray_NDIM(result_array) != 2:
 *                 raise odr_error("xplusd Jacobian is not rank-2")
 *         elif nq[0] == 1 and m[0] == 1:             # <<<<<<<<<<<<<<
 *             # result_array should be rank-1
 *             if np.PyArray_NDIM(result_array) != 1:
 */
    __pyx_t_1 = ((__pyx_v_nq[0]) == 1);
    if (__pyx_t_1) {
      __pyx_t_5 = ((__pyx_v_m[0]) == 1);
      __pyx_t_6 = __pyx_t_5;
    } else {
      __pyx_t_6 = __pyx_t_1;
    }
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":144
 *         elif nq[0] == 1 and m[0] == 1:
 *             # result_array should be rank-1
 *             if np.PyArray_NDIM(result_array) != 1:             # <<<<<<<<<<<<<<
 *                 raise odr_error("xplusd Jacobian is not rank-1")
 * 
 */
      if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_4 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_v_result_array)); 
      __pyx_t_3 = __site_op_ne_144_45->Target(__site_op_ne_144_45, __pyx_t_4, __pyx_int_1);
      __pyx_t_4 = nullptr;
      __pyx_t_6 = __site_istrue_144_45->Target(__site_istrue_144_45, __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_t_6) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":145
 *             # result_array should be rank-1
 *             if np.PyArray_NDIM(result_array) != 1:
 *                 raise odr_error("xplusd Jacobian is not rank-1")             # <<<<<<<<<<<<<<
 * 
 *         memcpy(fjacd, np.PyArray_DATA(result_array), n[0] * nq[0] * m[0] * sizeof(double))
 */
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "odr_error");
        __pyx_t_4 = __site_call1_145_31->Target(__site_call1_145_31, __pyx_context, __pyx_t_3, ((System::Object^)"xplusd Jacobian is not rank-1"));
        __pyx_t_3 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
        __pyx_t_4 = nullptr;
        goto __pyx_L13;
      }
      __pyx_L13:;
      goto __pyx_L10;
    }
    __pyx_L10:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":147
 *                 raise odr_error("xplusd Jacobian is not rank-1")
 * 
 *         memcpy(fjacd, np.PyArray_DATA(result_array), n[0] * nq[0] * m[0] * sizeof(double))             # <<<<<<<<<<<<<<
 * 
 * 
 */
    if (__pyx_v_result_array != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_result_array) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    memcpy(__pyx_v_fjacd, PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_result_array)), ((((__pyx_v_n[0]) * (__pyx_v_nq[0])) * (__pyx_v_m[0])) * (sizeof(double))));
    goto __pyx_L9;
  }
  __pyx_L9:;

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":151
 * 
 * 
 * cdef object gen_output(int n, int m, int npx, int nq, int ldwe, int ld2we,             # <<<<<<<<<<<<<<
 *                        NpyArray *beta, NpyArray *work, NpyArray *iwork,
 *                        int isodr, int info, int full_output):
 */

static  System::Object^ gen_output(int __pyx_v_n, int __pyx_v_m, int __pyx_v_npx, int __pyx_v_nq, int __pyx_v_ldwe, int __pyx_v_ld2we, NpyArray *__pyx_v_beta, NpyArray *__pyx_v_work, NpyArray *__pyx_v_iwork, int __pyx_v_isodr, int __pyx_v_info, int __pyx_v_full_output) {
  System::Object^ __pyx_v_sd_beta;
  System::Object^ __pyx_v_cov_beta;
  int __pyx_v_delta;
  int __pyx_v_eps;
  int __pyx_v_xplus;
  int __pyx_v_fn;
  int __pyx_v_sd;
  int __pyx_v_vcv;
  int __pyx_v_rvar;
  int __pyx_v_wss;
  int __pyx_v_wssde;
  int __pyx_v_wssep;
  int __pyx_v_rcond;
  int __pyx_v_eta;
  int __pyx_v_olmav;
  int __pyx_v_tau;
  int __pyx_v_alpha;
  int __pyx_v_actrs;
  int __pyx_v_pnorm;
  int __pyx_v_rnors;
  int __pyx_v_prers;
  int __pyx_v_partl;
  int __pyx_v_sstol;
  int __pyx_v_taufc;
  int __pyx_v_apsma;
  int __pyx_v_betao;
  int __pyx_v_betac;
  int __pyx_v_betas;
  int __pyx_v_betan;
  int __pyx_v_s;
  int __pyx_v_ss;
  int __pyx_v_ssf;
  int __pyx_v_qraux;
  int __pyx_v_u;
  int __pyx_v_fs;
  int __pyx_v_fjacb;
  int __pyx_v_we1;
  int __pyx_v_diff;
  int __pyx_v_delts;
  int __pyx_v_deltn;
  int __pyx_v_t;
  int __pyx_v_tt;
  int __pyx_v_omega;
  int __pyx_v_fjacd;
  int __pyx_v_wrk1;
  int __pyx_v_wrk2;
  int __pyx_v_wrk3;
  int __pyx_v_wrk4;
  int __pyx_v_wrk5;
  int __pyx_v_wrk6;
  int __pyx_v_wrk7;
  int __pyx_v_lwkmn;
  System::Object^ __pyx_v_deltaA;
  System::Object^ __pyx_v_epsA;
  System::Object^ __pyx_v_xplusA;
  System::Object^ __pyx_v_fnA;
  double __pyx_v_res_var;
  double __pyx_v_sum_square;
  double __pyx_v_sum_square_delta;
  double __pyx_v_sum_square_eps;
  double __pyx_v_inv_condnum;
  double __pyx_v_rel_error;
  System::Object^ __pyx_v_work_ind;
  npy_intp __pyx_v_dim1[1];
  npy_intp __pyx_v_dim2[2];
  System::Object^ __pyx_v_retobj;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  PythonDictionary^ __pyx_t_7;
  System::Object^ __pyx_t_8 = nullptr;
  __pyx_v_sd_beta = nullptr;
  __pyx_v_cov_beta = nullptr;
  __pyx_v_deltaA = nullptr;
  __pyx_v_epsA = nullptr;
  __pyx_v_xplusA = nullptr;
  __pyx_v_fnA = nullptr;
  __pyx_v_work_ind = nullptr;
  __pyx_v_retobj = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":168
 *     cdef npy_intp dim1[1], dim2[2]
 * 
 *     if info == 50005:             # <<<<<<<<<<<<<<
 *         return NULL
 * 
 */
  __pyx_t_1 = (__pyx_v_info == 50005);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":169
 * 
 *     if info == 50005:
 *         return NULL             # <<<<<<<<<<<<<<
 * 
 *     lwkmn = np.NpyArray_DIM(work, 0);
 */
    __pyx_t_2 = NULL;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":171
 *         return NULL
 * 
 *     lwkmn = np.NpyArray_DIM(work, 0);             # <<<<<<<<<<<<<<
 * 
 *     dwinf(&n, &m, &npx, &nq, &ldwe, &ld2we, &isodr,
 */
  __pyx_v_lwkmn = NpyArray_DIM(__pyx_v_work, 0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":179
 *         &betas, &betan, &s, &ss, &ssf, &qraux, &u, &fs, &fjacb, &we1,
 *         &diff, &delts, &deltn, &t, &tt, &omega, &fjacd, &wrk1, &wrk2,
 *         &wrk3, &wrk4, &wrk5, &wrk6, &wrk7, &lwkmn);             # <<<<<<<<<<<<<<
 * 
 *     # convert FORTRAN indices to C indices
 */
  F_FUNC(dwinf,DWINF)((&__pyx_v_n), (&__pyx_v_m), (&__pyx_v_npx), (&__pyx_v_nq), (&__pyx_v_ldwe), (&__pyx_v_ld2we), (&__pyx_v_isodr), (&__pyx_v_delta), (&__pyx_v_eps), (&__pyx_v_xplus), (&__pyx_v_fn), (&__pyx_v_sd), (&__pyx_v_vcv), (&__pyx_v_rvar), (&__pyx_v_wss), (&__pyx_v_wssde), (&__pyx_v_wssep), (&__pyx_v_rcond), (&__pyx_v_eta), (&__pyx_v_olmav), (&__pyx_v_tau), (&__pyx_v_alpha), (&__pyx_v_actrs), (&__pyx_v_pnorm), (&__pyx_v_rnors), (&__pyx_v_prers), (&__pyx_v_partl), (&__pyx_v_sstol), (&__pyx_v_taufc), (&__pyx_v_apsma), (&__pyx_v_betao), (&__pyx_v_betac), (&__pyx_v_betas), (&__pyx_v_betan), (&__pyx_v_s), (&__pyx_v_ss), (&__pyx_v_ssf), (&__pyx_v_qraux), (&__pyx_v_u), (&__pyx_v_fs), (&__pyx_v_fjacb), (&__pyx_v_we1), (&__pyx_v_diff), (&__pyx_v_delts), (&__pyx_v_deltn), (&__pyx_v_t), (&__pyx_v_tt), (&__pyx_v_omega), (&__pyx_v_fjacd), (&__pyx_v_wrk1), (&__pyx_v_wrk2), (&__pyx_v_wrk3), (&__pyx_v_wrk4), (&__pyx_v_wrk5), (&__pyx_v_wrk6), (&__pyx_v_wrk7), (&__pyx_v_lwkmn));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":182
 * 
 *     # convert FORTRAN indices to C indices
 *     delta-=1             # <<<<<<<<<<<<<<
 *     eps-=1
 *     xplus-=1
 */
  __pyx_v_delta -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":183
 *     # convert FORTRAN indices to C indices
 *     delta-=1
 *     eps-=1             # <<<<<<<<<<<<<<
 *     xplus-=1
 *     fn-=1
 */
  __pyx_v_eps -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":184
 *     delta-=1
 *     eps-=1
 *     xplus-=1             # <<<<<<<<<<<<<<
 *     fn-=1
 *     sd-=1
 */
  __pyx_v_xplus -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":185
 *     eps-=1
 *     xplus-=1
 *     fn-=1             # <<<<<<<<<<<<<<
 *     sd-=1
 *     vcv-=1
 */
  __pyx_v_fn -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":186
 *     xplus-=1
 *     fn-=1
 *     sd-=1             # <<<<<<<<<<<<<<
 *     vcv-=1
 *     rvar-=1
 */
  __pyx_v_sd -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":187
 *     fn-=1
 *     sd-=1
 *     vcv-=1             # <<<<<<<<<<<<<<
 *     rvar-=1
 *     wss-=1
 */
  __pyx_v_vcv -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":188
 *     sd-=1
 *     vcv-=1
 *     rvar-=1             # <<<<<<<<<<<<<<
 *     wss-=1
 *     wssde-=1
 */
  __pyx_v_rvar -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":189
 *     vcv-=1
 *     rvar-=1
 *     wss-=1             # <<<<<<<<<<<<<<
 *     wssde-=1
 *     wssep-=1
 */
  __pyx_v_wss -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":190
 *     rvar-=1
 *     wss-=1
 *     wssde-=1             # <<<<<<<<<<<<<<
 *     wssep-=1
 *     rcond-=1
 */
  __pyx_v_wssde -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":191
 *     wss-=1
 *     wssde-=1
 *     wssep-=1             # <<<<<<<<<<<<<<
 *     rcond-=1
 *     eta-=1
 */
  __pyx_v_wssep -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":192
 *     wssde-=1
 *     wssep-=1
 *     rcond-=1             # <<<<<<<<<<<<<<
 *     eta-=1
 *     olmav-=1
 */
  __pyx_v_rcond -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":193
 *     wssep-=1
 *     rcond-=1
 *     eta-=1             # <<<<<<<<<<<<<<
 *     olmav-=1
 *     tau-=1
 */
  __pyx_v_eta -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":194
 *     rcond-=1
 *     eta-=1
 *     olmav-=1             # <<<<<<<<<<<<<<
 *     tau-=1
 *     alpha-=1
 */
  __pyx_v_olmav -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":195
 *     eta-=1
 *     olmav-=1
 *     tau-=1             # <<<<<<<<<<<<<<
 *     alpha-=1
 *     actrs-=1
 */
  __pyx_v_tau -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":196
 *     olmav-=1
 *     tau-=1
 *     alpha-=1             # <<<<<<<<<<<<<<
 *     actrs-=1
 *     pnorm-=1
 */
  __pyx_v_alpha -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":197
 *     tau-=1
 *     alpha-=1
 *     actrs-=1             # <<<<<<<<<<<<<<
 *     pnorm-=1
 *     rnors-=1
 */
  __pyx_v_actrs -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":198
 *     alpha-=1
 *     actrs-=1
 *     pnorm-=1             # <<<<<<<<<<<<<<
 *     rnors-=1
 *     prers-=1
 */
  __pyx_v_pnorm -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":199
 *     actrs-=1
 *     pnorm-=1
 *     rnors-=1             # <<<<<<<<<<<<<<
 *     prers-=1
 *     partl-=1
 */
  __pyx_v_rnors -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":200
 *     pnorm-=1
 *     rnors-=1
 *     prers-=1             # <<<<<<<<<<<<<<
 *     partl-=1
 *     sstol-=1
 */
  __pyx_v_prers -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":201
 *     rnors-=1
 *     prers-=1
 *     partl-=1             # <<<<<<<<<<<<<<
 *     sstol-=1
 *     taufc-=1
 */
  __pyx_v_partl -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":202
 *     prers-=1
 *     partl-=1
 *     sstol-=1             # <<<<<<<<<<<<<<
 *     taufc-=1
 *     apsma-=1
 */
  __pyx_v_sstol -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":203
 *     partl-=1
 *     sstol-=1
 *     taufc-=1             # <<<<<<<<<<<<<<
 *     apsma-=1
 *     betao-=1
 */
  __pyx_v_taufc -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":204
 *     sstol-=1
 *     taufc-=1
 *     apsma-=1             # <<<<<<<<<<<<<<
 *     betao-=1
 *     betac-=1
 */
  __pyx_v_apsma -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":205
 *     taufc-=1
 *     apsma-=1
 *     betao-=1             # <<<<<<<<<<<<<<
 *     betac-=1
 *     betas-=1
 */
  __pyx_v_betao -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":206
 *     apsma-=1
 *     betao-=1
 *     betac-=1             # <<<<<<<<<<<<<<
 *     betas-=1
 *     betan-=1
 */
  __pyx_v_betac -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":207
 *     betao-=1
 *     betac-=1
 *     betas-=1             # <<<<<<<<<<<<<<
 *     betan-=1
 *     s-=1
 */
  __pyx_v_betas -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":208
 *     betac-=1
 *     betas-=1
 *     betan-=1             # <<<<<<<<<<<<<<
 *     s-=1
 *     ss-=1
 */
  __pyx_v_betan -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":209
 *     betas-=1
 *     betan-=1
 *     s-=1             # <<<<<<<<<<<<<<
 *     ss-=1
 *     ssf-=1
 */
  __pyx_v_s -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":210
 *     betan-=1
 *     s-=1
 *     ss-=1             # <<<<<<<<<<<<<<
 *     ssf-=1
 *     qraux-=1
 */
  __pyx_v_ss -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":211
 *     s-=1
 *     ss-=1
 *     ssf-=1             # <<<<<<<<<<<<<<
 *     qraux-=1
 *     u-=1
 */
  __pyx_v_ssf -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":212
 *     ss-=1
 *     ssf-=1
 *     qraux-=1             # <<<<<<<<<<<<<<
 *     u-=1
 *     fs-=1
 */
  __pyx_v_qraux -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":213
 *     ssf-=1
 *     qraux-=1
 *     u-=1             # <<<<<<<<<<<<<<
 *     fs-=1
 *     fjacb-=1
 */
  __pyx_v_u -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":214
 *     qraux-=1
 *     u-=1
 *     fs-=1             # <<<<<<<<<<<<<<
 *     fjacb-=1
 *     we1-=1
 */
  __pyx_v_fs -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":215
 *     u-=1
 *     fs-=1
 *     fjacb-=1             # <<<<<<<<<<<<<<
 *     we1-=1
 *     diff-=1
 */
  __pyx_v_fjacb -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":216
 *     fs-=1
 *     fjacb-=1
 *     we1-=1             # <<<<<<<<<<<<<<
 *     diff-=1
 *     delts-=1
 */
  __pyx_v_we1 -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":217
 *     fjacb-=1
 *     we1-=1
 *     diff-=1             # <<<<<<<<<<<<<<
 *     delts-=1
 *     deltn-=1
 */
  __pyx_v_diff -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":218
 *     we1-=1
 *     diff-=1
 *     delts-=1             # <<<<<<<<<<<<<<
 *     deltn-=1
 *     t-=1
 */
  __pyx_v_delts -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":219
 *     diff-=1
 *     delts-=1
 *     deltn-=1             # <<<<<<<<<<<<<<
 *     t-=1
 *     tt-=1
 */
  __pyx_v_deltn -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":220
 *     delts-=1
 *     deltn-=1
 *     t-=1             # <<<<<<<<<<<<<<
 *     tt-=1
 *     omega-=1
 */
  __pyx_v_t -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":221
 *     deltn-=1
 *     t-=1
 *     tt-=1             # <<<<<<<<<<<<<<
 *     omega-=1
 *     fjacd-=1
 */
  __pyx_v_tt -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":222
 *     t-=1
 *     tt-=1
 *     omega-=1             # <<<<<<<<<<<<<<
 *     fjacd-=1
 *     wrk1-=1
 */
  __pyx_v_omega -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":223
 *     tt-=1
 *     omega-=1
 *     fjacd-=1             # <<<<<<<<<<<<<<
 *     wrk1-=1
 *     wrk2-=1
 */
  __pyx_v_fjacd -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":224
 *     omega-=1
 *     fjacd-=1
 *     wrk1-=1             # <<<<<<<<<<<<<<
 *     wrk2-=1
 *     wrk3-=1
 */
  __pyx_v_wrk1 -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":225
 *     fjacd-=1
 *     wrk1-=1
 *     wrk2-=1             # <<<<<<<<<<<<<<
 *     wrk3-=1
 *     wrk4-=1
 */
  __pyx_v_wrk2 -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":226
 *     wrk1-=1
 *     wrk2-=1
 *     wrk3-=1             # <<<<<<<<<<<<<<
 *     wrk4-=1
 *     wrk5-=1
 */
  __pyx_v_wrk3 -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":227
 *     wrk2-=1
 *     wrk3-=1
 *     wrk4-=1             # <<<<<<<<<<<<<<
 *     wrk5-=1
 *     wrk6-=1
 */
  __pyx_v_wrk4 -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":228
 *     wrk3-=1
 *     wrk4-=1
 *     wrk5-=1             # <<<<<<<<<<<<<<
 *     wrk6-=1
 *     wrk7-=1
 */
  __pyx_v_wrk5 -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":229
 *     wrk4-=1
 *     wrk5-=1
 *     wrk6-=1             # <<<<<<<<<<<<<<
 *     wrk7-=1
 * 
 */
  __pyx_v_wrk6 -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":230
 *     wrk5-=1
 *     wrk6-=1
 *     wrk7-=1             # <<<<<<<<<<<<<<
 * 
 *     dim1[0] = np.NpyArray_DIM(beta, 0);
 */
  __pyx_v_wrk7 -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":232
 *     wrk7-=1
 * 
 *     dim1[0] = np.NpyArray_DIM(beta, 0);             # <<<<<<<<<<<<<<
 *     sd_beta = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *     dim2[0] = dim2[1] = np.NpyArray_DIM(beta, 0);
 */
  (__pyx_v_dim1[0]) = NpyArray_DIM(__pyx_v_beta, 0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":233
 * 
 *     dim1[0] = np.NpyArray_DIM(beta, 0);
 *     sd_beta = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *     dim2[0] = dim2[1] = np.NpyArray_DIM(beta, 0);
 *     cov_beta = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 */
  __pyx_t_2 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
  __pyx_v_sd_beta = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":234
 *     dim1[0] = np.NpyArray_DIM(beta, 0);
 *     sd_beta = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *     dim2[0] = dim2[1] = np.NpyArray_DIM(beta, 0);             # <<<<<<<<<<<<<<
 *     cov_beta = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 * 
 */
  __pyx_t_3 = NpyArray_DIM(__pyx_v_beta, 0);
  (__pyx_v_dim2[0]) = __pyx_t_3;
  (__pyx_v_dim2[1]) = __pyx_t_3;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":235
 *     sd_beta = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *     dim2[0] = dim2[1] = np.NpyArray_DIM(beta, 0);
 *     cov_beta = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 * 
 *     memcpy(np.PyArray_DATA(sd_beta), <void *>(<double *>np.NpyArray_DATA(work) + sd),
 */
  __pyx_t_2 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_DOUBLE, 0); 
  __pyx_v_cov_beta = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":237
 *     cov_beta = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 * 
 *     memcpy(np.PyArray_DATA(sd_beta), <void *>(<double *>np.NpyArray_DATA(work) + sd),             # <<<<<<<<<<<<<<
 *         npx * sizeof(double));
 *     memcpy(np.PyArray_DATA(cov_beta), <void *>(<double *>np.NpyArray_DATA(work) + vcv),
 */
  if (__pyx_v_sd_beta != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_sd_beta) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":238
 * 
 *     memcpy(np.PyArray_DATA(sd_beta), <void *>(<double *>np.NpyArray_DATA(work) + sd),
 *         npx * sizeof(double));             # <<<<<<<<<<<<<<
 *     memcpy(np.PyArray_DATA(cov_beta), <void *>(<double *>np.NpyArray_DATA(work) + vcv),
 *         npx * npx * sizeof(double));
 */
  memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_sd_beta)), ((void *)(((double *)NpyArray_DATA(__pyx_v_work)) + __pyx_v_sd)), (__pyx_v_npx * (sizeof(double))));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":239
 *     memcpy(np.PyArray_DATA(sd_beta), <void *>(<double *>np.NpyArray_DATA(work) + sd),
 *         npx * sizeof(double));
 *     memcpy(np.PyArray_DATA(cov_beta), <void *>(<double *>np.NpyArray_DATA(work) + vcv),             # <<<<<<<<<<<<<<
 *         npx * npx * sizeof(double));
 * 
 */
  if (__pyx_v_cov_beta != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_cov_beta) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":240
 *         npx * sizeof(double));
 *     memcpy(np.PyArray_DATA(cov_beta), <void *>(<double *>np.NpyArray_DATA(work) + vcv),
 *         npx * npx * sizeof(double));             # <<<<<<<<<<<<<<
 * 
 *     retobj = None
 */
  memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_cov_beta)), ((void *)(((double *)NpyArray_DATA(__pyx_v_work)) + __pyx_v_vcv)), ((__pyx_v_npx * __pyx_v_npx) * (sizeof(double))));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":242
 *         npx * npx * sizeof(double));
 * 
 *     retobj = None             # <<<<<<<<<<<<<<
 *     if not full_output:
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),
 */
  __pyx_v_retobj = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":243
 * 
 *     retobj = None
 *     if not full_output:             # <<<<<<<<<<<<<<
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),
 *                   np.PyArray_Return(sd_beta),
 */
  __pyx_t_1 = (!__pyx_v_full_output);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":244
 *     retobj = None
 *     if not full_output:
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),             # <<<<<<<<<<<<<<
 *                   np.PyArray_Return(sd_beta),
 *                   np.PyArray_Return(cov_beta))
 */
    __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_beta)); 
    __pyx_t_4 = PyArray_Return(__pyx_t_2); 
    __pyx_t_2 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":245
 *     if not full_output:
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),
 *                   np.PyArray_Return(sd_beta),             # <<<<<<<<<<<<<<
 *                   np.PyArray_Return(cov_beta))
 * 
 */
    __pyx_t_2 = PyArray_Return(__pyx_v_sd_beta); 

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":246
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),
 *                   np.PyArray_Return(sd_beta),
 *                   np.PyArray_Return(cov_beta))             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_t_5 = PyArray_Return(__pyx_v_cov_beta); 
    __pyx_t_6 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_2, __pyx_t_5});
    __pyx_t_4 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_v_retobj = __pyx_t_6;
    __pyx_t_6 = nullptr;
    goto __pyx_L4;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":249
 * 
 *     else:
 *         work_ind = {             # <<<<<<<<<<<<<<
 *             "delta" : delta,             "eps" : eps,
 *             "xplus" : xplus,             "fn" : fn,
 */
    __pyx_t_7 = PythonOps::MakeEmptyDict();

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":250
 *     else:
 *         work_ind = {
 *             "delta" : delta,             "eps" : eps,             # <<<<<<<<<<<<<<
 *             "xplus" : xplus,             "fn" : fn,
 *             "sd" : sd,                   "vcv" : vcv,
 */
    __pyx_t_6 = __pyx_v_delta;
    __pyx_t_7[((System::Object^)"delta")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_eps;
    __pyx_t_7[((System::Object^)"eps")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":251
 *         work_ind = {
 *             "delta" : delta,             "eps" : eps,
 *             "xplus" : xplus,             "fn" : fn,             # <<<<<<<<<<<<<<
 *             "sd" : sd,                   "vcv" : vcv,
 *             "rvar" : rvar,               "wss" : wss,
 */
    __pyx_t_6 = __pyx_v_xplus;
    __pyx_t_7[((System::Object^)"xplus")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_fn;
    __pyx_t_7[((System::Object^)"fn")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":252
 *             "delta" : delta,             "eps" : eps,
 *             "xplus" : xplus,             "fn" : fn,
 *             "sd" : sd,                   "vcv" : vcv,             # <<<<<<<<<<<<<<
 *             "rvar" : rvar,               "wss" : wss,
 *             "wssde" : wssde,             "wssep" : wssep,
 */
    __pyx_t_6 = __pyx_v_sd;
    __pyx_t_7[((System::Object^)"sd")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_vcv;
    __pyx_t_7[((System::Object^)"vcv")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":253
 *             "xplus" : xplus,             "fn" : fn,
 *             "sd" : sd,                   "vcv" : vcv,
 *             "rvar" : rvar,               "wss" : wss,             # <<<<<<<<<<<<<<
 *             "wssde" : wssde,             "wssep" : wssep,
 *             "rcond" : rcond,             "eta" : eta,
 */
    __pyx_t_6 = __pyx_v_rvar;
    __pyx_t_7[((System::Object^)"rvar")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_wss;
    __pyx_t_7[((System::Object^)"wss")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":254
 *             "sd" : sd,                   "vcv" : vcv,
 *             "rvar" : rvar,               "wss" : wss,
 *             "wssde" : wssde,             "wssep" : wssep,             # <<<<<<<<<<<<<<
 *             "rcond" : rcond,             "eta" : eta,
 *             "olmav" : olmav,             "tau" : tau,
 */
    __pyx_t_6 = __pyx_v_wssde;
    __pyx_t_7[((System::Object^)"wssde")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_wssep;
    __pyx_t_7[((System::Object^)"wssep")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":255
 *             "rvar" : rvar,               "wss" : wss,
 *             "wssde" : wssde,             "wssep" : wssep,
 *             "rcond" : rcond,             "eta" : eta,             # <<<<<<<<<<<<<<
 *             "olmav" : olmav,             "tau" : tau,
 *             "alpha" : alpha,             "actrs" : actrs,
 */
    __pyx_t_6 = __pyx_v_rcond;
    __pyx_t_7[((System::Object^)"rcond")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_eta;
    __pyx_t_7[((System::Object^)"eta")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":256
 *             "wssde" : wssde,             "wssep" : wssep,
 *             "rcond" : rcond,             "eta" : eta,
 *             "olmav" : olmav,             "tau" : tau,             # <<<<<<<<<<<<<<
 *             "alpha" : alpha,             "actrs" : actrs,
 *             "pnorm" : pnorm,             "rnors" : rnors,
 */
    __pyx_t_6 = __pyx_v_olmav;
    __pyx_t_7[((System::Object^)"olmav")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_tau;
    __pyx_t_7[((System::Object^)"tau")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":257
 *             "rcond" : rcond,             "eta" : eta,
 *             "olmav" : olmav,             "tau" : tau,
 *             "alpha" : alpha,             "actrs" : actrs,             # <<<<<<<<<<<<<<
 *             "pnorm" : pnorm,             "rnors" : rnors,
 *             "prers" : prers,             "partl" : partl,
 */
    __pyx_t_6 = __pyx_v_alpha;
    __pyx_t_7[((System::Object^)"alpha")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_actrs;
    __pyx_t_7[((System::Object^)"actrs")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":258
 *             "olmav" : olmav,             "tau" : tau,
 *             "alpha" : alpha,             "actrs" : actrs,
 *             "pnorm" : pnorm,             "rnors" : rnors,             # <<<<<<<<<<<<<<
 *             "prers" : prers,             "partl" : partl,
 *             "sstol" : sstol,             "taufc" : taufc,
 */
    __pyx_t_6 = __pyx_v_pnorm;
    __pyx_t_7[((System::Object^)"pnorm")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_rnors;
    __pyx_t_7[((System::Object^)"rnors")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":259
 *             "alpha" : alpha,             "actrs" : actrs,
 *             "pnorm" : pnorm,             "rnors" : rnors,
 *             "prers" : prers,             "partl" : partl,             # <<<<<<<<<<<<<<
 *             "sstol" : sstol,             "taufc" : taufc,
 *             "apsma" : apsma,             "betao" : betao,
 */
    __pyx_t_6 = __pyx_v_prers;
    __pyx_t_7[((System::Object^)"prers")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_partl;
    __pyx_t_7[((System::Object^)"partl")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":260
 *             "pnorm" : pnorm,             "rnors" : rnors,
 *             "prers" : prers,             "partl" : partl,
 *             "sstol" : sstol,             "taufc" : taufc,             # <<<<<<<<<<<<<<
 *             "apsma" : apsma,             "betao" : betao,
 *             "betac" : betac,             "betas" : betas,
 */
    __pyx_t_6 = __pyx_v_sstol;
    __pyx_t_7[((System::Object^)"sstol")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_taufc;
    __pyx_t_7[((System::Object^)"taufc")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":261
 *             "prers" : prers,             "partl" : partl,
 *             "sstol" : sstol,             "taufc" : taufc,
 *             "apsma" : apsma,             "betao" : betao,             # <<<<<<<<<<<<<<
 *             "betac" : betac,             "betas" : betas,
 *             "betan" : betan,             "s" : s,
 */
    __pyx_t_6 = __pyx_v_apsma;
    __pyx_t_7[((System::Object^)"apsma")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_betao;
    __pyx_t_7[((System::Object^)"betao")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":262
 *             "sstol" : sstol,             "taufc" : taufc,
 *             "apsma" : apsma,             "betao" : betao,
 *             "betac" : betac,             "betas" : betas,             # <<<<<<<<<<<<<<
 *             "betan" : betan,             "s" : s,
 *             "ss" : ss,                   "ssf" : ssf,
 */
    __pyx_t_6 = __pyx_v_betac;
    __pyx_t_7[((System::Object^)"betac")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_betas;
    __pyx_t_7[((System::Object^)"betas")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":263
 *             "apsma" : apsma,             "betao" : betao,
 *             "betac" : betac,             "betas" : betas,
 *             "betan" : betan,             "s" : s,             # <<<<<<<<<<<<<<
 *             "ss" : ss,                   "ssf" : ssf,
 *             "qraux" : qraux,             "u" : u,
 */
    __pyx_t_6 = __pyx_v_betan;
    __pyx_t_7[((System::Object^)"betan")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_s;
    __pyx_t_7[((System::Object^)"s")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":264
 *             "betac" : betac,             "betas" : betas,
 *             "betan" : betan,             "s" : s,
 *             "ss" : ss,                   "ssf" : ssf,             # <<<<<<<<<<<<<<
 *             "qraux" : qraux,             "u" : u,
 *             "fs" : fs,                   "fjacb" : fjacb,
 */
    __pyx_t_6 = __pyx_v_ss;
    __pyx_t_7[((System::Object^)"ss")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_ssf;
    __pyx_t_7[((System::Object^)"ssf")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":265
 *             "betan" : betan,             "s" : s,
 *             "ss" : ss,                   "ssf" : ssf,
 *             "qraux" : qraux,             "u" : u,             # <<<<<<<<<<<<<<
 *             "fs" : fs,                   "fjacb" : fjacb,
 *             "we1" : we1,                 "diff" : diff,
 */
    __pyx_t_6 = __pyx_v_qraux;
    __pyx_t_7[((System::Object^)"qraux")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_u;
    __pyx_t_7[((System::Object^)"u")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":266
 *             "ss" : ss,                   "ssf" : ssf,
 *             "qraux" : qraux,             "u" : u,
 *             "fs" : fs,                   "fjacb" : fjacb,             # <<<<<<<<<<<<<<
 *             "we1" : we1,                 "diff" : diff,
 *             "delts" : delts,             "deltn" : deltn,
 */
    __pyx_t_6 = __pyx_v_fs;
    __pyx_t_7[((System::Object^)"fs")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_fjacb;
    __pyx_t_7[((System::Object^)"fjacb")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":267
 *             "qraux" : qraux,             "u" : u,
 *             "fs" : fs,                   "fjacb" : fjacb,
 *             "we1" : we1,                 "diff" : diff,             # <<<<<<<<<<<<<<
 *             "delts" : delts,             "deltn" : deltn,
 *             "t" : t,                     "tt" : tt,
 */
    __pyx_t_6 = __pyx_v_we1;
    __pyx_t_7[((System::Object^)"we1")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_diff;
    __pyx_t_7[((System::Object^)"diff")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":268
 *             "fs" : fs,                   "fjacb" : fjacb,
 *             "we1" : we1,                 "diff" : diff,
 *             "delts" : delts,             "deltn" : deltn,             # <<<<<<<<<<<<<<
 *             "t" : t,                     "tt" : tt,
 *             "omega" : omega,             "fjacd" : fjacd,
 */
    __pyx_t_6 = __pyx_v_delts;
    __pyx_t_7[((System::Object^)"delts")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_deltn;
    __pyx_t_7[((System::Object^)"deltn")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":269
 *             "we1" : we1,                 "diff" : diff,
 *             "delts" : delts,             "deltn" : deltn,
 *             "t" : t,                     "tt" : tt,             # <<<<<<<<<<<<<<
 *             "omega" : omega,             "fjacd" : fjacd,
 *             "wrk1" : wrk1,               "wrk2" : wrk2,
 */
    __pyx_t_6 = __pyx_v_t;
    __pyx_t_7[((System::Object^)"t")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_tt;
    __pyx_t_7[((System::Object^)"tt")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":270
 *             "delts" : delts,             "deltn" : deltn,
 *             "t" : t,                     "tt" : tt,
 *             "omega" : omega,             "fjacd" : fjacd,             # <<<<<<<<<<<<<<
 *             "wrk1" : wrk1,               "wrk2" : wrk2,
 *             "wrk3" : wrk3,               "wrk4" : wrk4,
 */
    __pyx_t_6 = __pyx_v_omega;
    __pyx_t_7[((System::Object^)"omega")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_fjacd;
    __pyx_t_7[((System::Object^)"fjacd")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":271
 *             "t" : t,                     "tt" : tt,
 *             "omega" : omega,             "fjacd" : fjacd,
 *             "wrk1" : wrk1,               "wrk2" : wrk2,             # <<<<<<<<<<<<<<
 *             "wrk3" : wrk3,               "wrk4" : wrk4,
 *             "wrk5" : wrk5,               "wrk6" : wrk6,
 */
    __pyx_t_6 = __pyx_v_wrk1;
    __pyx_t_7[((System::Object^)"wrk1")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_wrk2;
    __pyx_t_7[((System::Object^)"wrk2")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":272
 *             "omega" : omega,             "fjacd" : fjacd,
 *             "wrk1" : wrk1,               "wrk2" : wrk2,
 *             "wrk3" : wrk3,               "wrk4" : wrk4,             # <<<<<<<<<<<<<<
 *             "wrk5" : wrk5,               "wrk6" : wrk6,
 *             "wrk7" : wrk7 }
 */
    __pyx_t_6 = __pyx_v_wrk3;
    __pyx_t_7[((System::Object^)"wrk3")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_wrk4;
    __pyx_t_7[((System::Object^)"wrk4")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":273
 *             "wrk1" : wrk1,               "wrk2" : wrk2,
 *             "wrk3" : wrk3,               "wrk4" : wrk4,
 *             "wrk5" : wrk5,               "wrk6" : wrk6,             # <<<<<<<<<<<<<<
 *             "wrk7" : wrk7 }
 * 
 */
    __pyx_t_6 = __pyx_v_wrk5;
    __pyx_t_7[((System::Object^)"wrk5")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_t_6 = __pyx_v_wrk6;
    __pyx_t_7[((System::Object^)"wrk6")] = __pyx_t_6;
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":274
 *             "wrk3" : wrk3,               "wrk4" : wrk4,
 *             "wrk5" : wrk5,               "wrk6" : wrk6,
 *             "wrk7" : wrk7 }             # <<<<<<<<<<<<<<
 * 
 *         if m == 1:
 */
    __pyx_t_6 = __pyx_v_wrk7;
    __pyx_t_7[((System::Object^)"wrk7")] = __pyx_t_6;
    __pyx_t_6 = nullptr;
    __pyx_v_work_ind = ((System::Object^)__pyx_t_7);
    __pyx_t_7 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":276
 *             "wrk7" : wrk7 }
 * 
 *         if m == 1:             # <<<<<<<<<<<<<<
 *             dim1[0] = n;
 *             deltaA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 */
    __pyx_t_1 = (__pyx_v_m == 1);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":277
 * 
 *         if m == 1:
 *             dim1[0] = n;             # <<<<<<<<<<<<<<
 *             deltaA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *             xplusA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 */
      (__pyx_v_dim1[0]) = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":278
 *         if m == 1:
 *             dim1[0] = n;
 *             deltaA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             xplusA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         else:
 */
      __pyx_t_6 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
      __pyx_v_deltaA = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":279
 *             dim1[0] = n;
 *             deltaA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *             xplusA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         else:
 *             dim2[0] = m;
 */
      __pyx_t_6 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
      __pyx_v_xplusA = __pyx_t_6;
      __pyx_t_6 = nullptr;
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":281
 *             xplusA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         else:
 *             dim2[0] = m;             # <<<<<<<<<<<<<<
 *             dim2[1] = n;
 *             deltaA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 */
      (__pyx_v_dim2[0]) = __pyx_v_m;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":282
 *         else:
 *             dim2[0] = m;
 *             dim2[1] = n;             # <<<<<<<<<<<<<<
 *             deltaA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *             xplusA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 */
      (__pyx_v_dim2[1]) = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":283
 *             dim2[0] = m;
 *             dim2[1] = n;
 *             deltaA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             xplusA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 * 
 */
      __pyx_t_6 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_DOUBLE, 0); 
      __pyx_v_deltaA = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":284
 *             dim2[1] = n;
 *             deltaA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *             xplusA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 * 
 *         if nq == 1:
 */
      __pyx_t_6 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_DOUBLE, 0); 
      __pyx_v_xplusA = __pyx_t_6;
      __pyx_t_6 = nullptr;
    }
    __pyx_L5:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":286
 *             xplusA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 * 
 *         if nq == 1:             # <<<<<<<<<<<<<<
 *             dim1[0] = n;
 *             epsA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 */
    __pyx_t_1 = (__pyx_v_nq == 1);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":287
 * 
 *         if nq == 1:
 *             dim1[0] = n;             # <<<<<<<<<<<<<<
 *             epsA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *             fnA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 */
      (__pyx_v_dim1[0]) = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":288
 *         if nq == 1:
 *             dim1[0] = n;
 *             epsA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             fnA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         else:
 */
      __pyx_t_6 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
      __pyx_v_epsA = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":289
 *             dim1[0] = n;
 *             epsA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *             fnA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         else:
 *             dim2[0] = nq;
 */
      __pyx_t_6 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
      __pyx_v_fnA = __pyx_t_6;
      __pyx_t_6 = nullptr;
      goto __pyx_L6;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":291
 *             fnA = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         else:
 *             dim2[0] = nq;             # <<<<<<<<<<<<<<
 *             dim2[1] = n;
 *             epsA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 */
      (__pyx_v_dim2[0]) = __pyx_v_nq;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":292
 *         else:
 *             dim2[0] = nq;
 *             dim2[1] = n;             # <<<<<<<<<<<<<<
 *             epsA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *             fnA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 */
      (__pyx_v_dim2[1]) = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":293
 *             dim2[0] = nq;
 *             dim2[1] = n;
 *             epsA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             fnA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 * 
 */
      __pyx_t_6 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_DOUBLE, 0); 
      __pyx_v_epsA = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":294
 *             dim2[1] = n;
 *             epsA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *             fnA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 * 
 *         memcpy(np.PyArray_DATA(deltaA), <void *>(<double *>np.NpyArray_DATA(work) + delta),
 */
      __pyx_t_6 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_DOUBLE, 0); 
      __pyx_v_fnA = __pyx_t_6;
      __pyx_t_6 = nullptr;
    }
    __pyx_L6:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":296
 *             fnA = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 * 
 *         memcpy(np.PyArray_DATA(deltaA), <void *>(<double *>np.NpyArray_DATA(work) + delta),             # <<<<<<<<<<<<<<
 *             m * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(epsA), <void *>(<double *>np.NpyArray_DATA(work) + eps),
 */
    if (__pyx_v_deltaA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_deltaA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":297
 * 
 *         memcpy(np.PyArray_DATA(deltaA), <void *>(<double *>np.NpyArray_DATA(work) + delta),
 *             m * n * sizeof(double));             # <<<<<<<<<<<<<<
 *         memcpy(np.PyArray_DATA(epsA), <void *>(<double *>np.NpyArray_DATA(work) + eps),
 *             nq * n * sizeof(double));
 */
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_deltaA)), ((void *)(((double *)NpyArray_DATA(__pyx_v_work)) + __pyx_v_delta)), ((__pyx_v_m * __pyx_v_n) * (sizeof(double))));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":298
 *         memcpy(np.PyArray_DATA(deltaA), <void *>(<double *>np.NpyArray_DATA(work) + delta),
 *             m * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(epsA), <void *>(<double *>np.NpyArray_DATA(work) + eps),             # <<<<<<<<<<<<<<
 *             nq * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(xplusA), <void *>(<double *>np.NpyArray_DATA(work) + xplus),
 */
    if (__pyx_v_epsA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_epsA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":299
 *             m * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(epsA), <void *>(<double *>np.NpyArray_DATA(work) + eps),
 *             nq * n * sizeof(double));             # <<<<<<<<<<<<<<
 *         memcpy(np.PyArray_DATA(xplusA), <void *>(<double *>np.NpyArray_DATA(work) + xplus),
 *             m * n * sizeof(double));
 */
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_epsA)), ((void *)(((double *)NpyArray_DATA(__pyx_v_work)) + __pyx_v_eps)), ((__pyx_v_nq * __pyx_v_n) * (sizeof(double))));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":300
 *         memcpy(np.PyArray_DATA(epsA), <void *>(<double *>np.NpyArray_DATA(work) + eps),
 *             nq * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(xplusA), <void *>(<double *>np.NpyArray_DATA(work) + xplus),             # <<<<<<<<<<<<<<
 *             m * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(fnA), <void *>(<double *>np.NpyArray_DATA(work) + fn),
 */
    if (__pyx_v_xplusA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_xplusA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":301
 *             nq * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(xplusA), <void *>(<double *>np.NpyArray_DATA(work) + xplus),
 *             m * n * sizeof(double));             # <<<<<<<<<<<<<<
 *         memcpy(np.PyArray_DATA(fnA), <void *>(<double *>np.NpyArray_DATA(work) + fn),
 *             nq * n * sizeof(double));
 */
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_xplusA)), ((void *)(((double *)NpyArray_DATA(__pyx_v_work)) + __pyx_v_xplus)), ((__pyx_v_m * __pyx_v_n) * (sizeof(double))));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":302
 *         memcpy(np.PyArray_DATA(xplusA), <void *>(<double *>np.NpyArray_DATA(work) + xplus),
 *             m * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(fnA), <void *>(<double *>np.NpyArray_DATA(work) + fn),             # <<<<<<<<<<<<<<
 *             nq * n * sizeof(double));
 * 
 */
    if (__pyx_v_fnA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_fnA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":303
 *             m * n * sizeof(double));
 *         memcpy(np.PyArray_DATA(fnA), <void *>(<double *>np.NpyArray_DATA(work) + fn),
 *             nq * n * sizeof(double));             # <<<<<<<<<<<<<<
 * 
 *         res_var = (<double *>np.NpyArray_DATA(work))[rvar];
 */
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_fnA)), ((void *)(((double *)NpyArray_DATA(__pyx_v_work)) + __pyx_v_fn)), ((__pyx_v_nq * __pyx_v_n) * (sizeof(double))));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":305
 *             nq * n * sizeof(double));
 * 
 *         res_var = (<double *>np.NpyArray_DATA(work))[rvar];             # <<<<<<<<<<<<<<
 *         sum_square = (<double *>np.NpyArray_DATA(work))[wss]
 *         sum_square_delta = (<double *>np.NpyArray_DATA(work))[wssde];
 */
    __pyx_v_res_var = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_rvar]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":306
 * 
 *         res_var = (<double *>np.NpyArray_DATA(work))[rvar];
 *         sum_square = (<double *>np.NpyArray_DATA(work))[wss]             # <<<<<<<<<<<<<<
 *         sum_square_delta = (<double *>np.NpyArray_DATA(work))[wssde];
 *         sum_square_eps = (<double *>np.NpyArray_DATA(work))[wssep];
 */
    __pyx_v_sum_square = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_wss]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":307
 *         res_var = (<double *>np.NpyArray_DATA(work))[rvar];
 *         sum_square = (<double *>np.NpyArray_DATA(work))[wss]
 *         sum_square_delta = (<double *>np.NpyArray_DATA(work))[wssde];             # <<<<<<<<<<<<<<
 *         sum_square_eps = (<double *>np.NpyArray_DATA(work))[wssep];
 *         inv_condnum = (<double *>np.NpyArray_DATA(work))[rcond];
 */
    __pyx_v_sum_square_delta = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_wssde]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":308
 *         sum_square = (<double *>np.NpyArray_DATA(work))[wss]
 *         sum_square_delta = (<double *>np.NpyArray_DATA(work))[wssde];
 *         sum_square_eps = (<double *>np.NpyArray_DATA(work))[wssep];             # <<<<<<<<<<<<<<
 *         inv_condnum = (<double *>np.NpyArray_DATA(work))[rcond];
 *         rel_error = (<double *>np.NpyArray_DATA(work))[eta];
 */
    __pyx_v_sum_square_eps = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_wssep]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":309
 *         sum_square_delta = (<double *>np.NpyArray_DATA(work))[wssde];
 *         sum_square_eps = (<double *>np.NpyArray_DATA(work))[wssep];
 *         inv_condnum = (<double *>np.NpyArray_DATA(work))[rcond];             # <<<<<<<<<<<<<<
 *         rel_error = (<double *>np.NpyArray_DATA(work))[eta];
 * 
 */
    __pyx_v_inv_condnum = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_rcond]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":310
 *         sum_square_eps = (<double *>np.NpyArray_DATA(work))[wssep];
 *         inv_condnum = (<double *>np.NpyArray_DATA(work))[rcond];
 *         rel_error = (<double *>np.NpyArray_DATA(work))[eta];             # <<<<<<<<<<<<<<
 * 
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),
 */
    __pyx_v_rel_error = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_eta]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":312
 *         rel_error = (<double *>np.NpyArray_DATA(work))[eta];
 * 
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),             # <<<<<<<<<<<<<<
 *                   np.PyArray_Return(sd_beta),
 *                   np.PyArray_Return(cov_beta),
 */
    __pyx_t_6 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_beta)); 
    __pyx_t_5 = PyArray_Return(__pyx_t_6); 
    __pyx_t_6 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":313
 * 
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),
 *                   np.PyArray_Return(sd_beta),             # <<<<<<<<<<<<<<
 *                   np.PyArray_Return(cov_beta),
 *                   { "delta" : np.PyArray_Return(deltaA),
 */
    __pyx_t_6 = PyArray_Return(__pyx_v_sd_beta); 

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":314
 *         retobj = (np.PyArray_Return(np.Npy_INTERFACE_array(beta)),
 *                   np.PyArray_Return(sd_beta),
 *                   np.PyArray_Return(cov_beta),             # <<<<<<<<<<<<<<
 *                   { "delta" : np.PyArray_Return(deltaA),
 *                     "eps" : np.PyArray_Return(epsA),
 */
    __pyx_t_2 = PyArray_Return(__pyx_v_cov_beta); 

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":315
 *                   np.PyArray_Return(sd_beta),
 *                   np.PyArray_Return(cov_beta),
 *                   { "delta" : np.PyArray_Return(deltaA),             # <<<<<<<<<<<<<<
 *                     "eps" : np.PyArray_Return(epsA),
 *                     "xplus" : np.PyArray_Return(xplusA),
 */
    __pyx_t_7 = PythonOps::MakeEmptyDict();
    __pyx_t_4 = PyArray_Return(__pyx_v_deltaA); 
    __pyx_t_7[((System::Object^)"delta")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":316
 *                   np.PyArray_Return(cov_beta),
 *                   { "delta" : np.PyArray_Return(deltaA),
 *                     "eps" : np.PyArray_Return(epsA),             # <<<<<<<<<<<<<<
 *                     "xplus" : np.PyArray_Return(xplusA),
 *                     "y" : np.PyArray_Return(fnA),
 */
    __pyx_t_4 = PyArray_Return(__pyx_v_epsA); 
    __pyx_t_7[((System::Object^)"eps")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":317
 *                   { "delta" : np.PyArray_Return(deltaA),
 *                     "eps" : np.PyArray_Return(epsA),
 *                     "xplus" : np.PyArray_Return(xplusA),             # <<<<<<<<<<<<<<
 *                     "y" : np.PyArray_Return(fnA),
 *                     "res_var" : res_var,
 */
    __pyx_t_4 = PyArray_Return(__pyx_v_xplusA); 
    __pyx_t_7[((System::Object^)"xplus")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":318
 *                     "eps" : np.PyArray_Return(epsA),
 *                     "xplus" : np.PyArray_Return(xplusA),
 *                     "y" : np.PyArray_Return(fnA),             # <<<<<<<<<<<<<<
 *                     "res_var" : res_var,
 *                     "sum_square" : sum_square,
 */
    __pyx_t_4 = PyArray_Return(__pyx_v_fnA); 
    __pyx_t_7[((System::Object^)"y")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":319
 *                     "xplus" : np.PyArray_Return(xplusA),
 *                     "y" : np.PyArray_Return(fnA),
 *                     "res_var" : res_var,             # <<<<<<<<<<<<<<
 *                     "sum_square" : sum_square,
 *                     "sum_square_delta" : sum_square_delta,
 */
    __pyx_t_4 = __pyx_v_res_var;
    __pyx_t_7[((System::Object^)"res_var")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":320
 *                     "y" : np.PyArray_Return(fnA),
 *                     "res_var" : res_var,
 *                     "sum_square" : sum_square,             # <<<<<<<<<<<<<<
 *                     "sum_square_delta" : sum_square_delta,
 *                     "sum_square_eps" : sum_square_eps,
 */
    __pyx_t_4 = __pyx_v_sum_square;
    __pyx_t_7[((System::Object^)"sum_square")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":321
 *                     "res_var" : res_var,
 *                     "sum_square" : sum_square,
 *                     "sum_square_delta" : sum_square_delta,             # <<<<<<<<<<<<<<
 *                     "sum_square_eps" : sum_square_eps,
 *                     "inv_condnum" : inv_condnum,
 */
    __pyx_t_4 = __pyx_v_sum_square_delta;
    __pyx_t_7[((System::Object^)"sum_square_delta")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":322
 *                     "sum_square" : sum_square,
 *                     "sum_square_delta" : sum_square_delta,
 *                     "sum_square_eps" : sum_square_eps,             # <<<<<<<<<<<<<<
 *                     "inv_condnum" : inv_condnum,
 *                     "rel_error" : rel_error,
 */
    __pyx_t_4 = __pyx_v_sum_square_eps;
    __pyx_t_7[((System::Object^)"sum_square_eps")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":323
 *                     "sum_square_delta" : sum_square_delta,
 *                     "sum_square_eps" : sum_square_eps,
 *                     "inv_condnum" : inv_condnum,             # <<<<<<<<<<<<<<
 *                     "rel_error" : rel_error,
 *                     "work" : np.PyArray_Return(np.Npy_INTERFACE_array(work)),
 */
    __pyx_t_4 = __pyx_v_inv_condnum;
    __pyx_t_7[((System::Object^)"inv_condnum")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":324
 *                     "sum_square_eps" : sum_square_eps,
 *                     "inv_condnum" : inv_condnum,
 *                     "rel_error" : rel_error,             # <<<<<<<<<<<<<<
 *                     "work" : np.PyArray_Return(np.Npy_INTERFACE_array(work)),
 *                     "work_ind" : work_ind,
 */
    __pyx_t_4 = __pyx_v_rel_error;
    __pyx_t_7[((System::Object^)"rel_error")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":325
 *                     "inv_condnum" : inv_condnum,
 *                     "rel_error" : rel_error,
 *                     "work" : np.PyArray_Return(np.Npy_INTERFACE_array(work)),             # <<<<<<<<<<<<<<
 *                     "work_ind" : work_ind,
 *                     "iwork" : np.PyArray_Return(np.Npy_INTERFACE_array(iwork)),
 */
    __pyx_t_4 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_work)); 
    __pyx_t_8 = PyArray_Return(__pyx_t_4); 
    __pyx_t_4 = nullptr;
    __pyx_t_7[((System::Object^)"work")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":326
 *                     "rel_error" : rel_error,
 *                     "work" : np.PyArray_Return(np.Npy_INTERFACE_array(work)),
 *                     "work_ind" : work_ind,             # <<<<<<<<<<<<<<
 *                     "iwork" : np.PyArray_Return(np.Npy_INTERFACE_array(iwork)),
 *                     "info" : info })
 */
    __pyx_t_7[((System::Object^)"work_ind")] = __pyx_v_work_ind;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":327
 *                     "work" : np.PyArray_Return(np.Npy_INTERFACE_array(work)),
 *                     "work_ind" : work_ind,
 *                     "iwork" : np.PyArray_Return(np.Npy_INTERFACE_array(iwork)),             # <<<<<<<<<<<<<<
 *                     "info" : info })
 * 
 */
    __pyx_t_8 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_iwork)); 
    __pyx_t_4 = PyArray_Return(__pyx_t_8); 
    __pyx_t_8 = nullptr;
    __pyx_t_7[((System::Object^)"iwork")] = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":328
 *                     "work_ind" : work_ind,
 *                     "iwork" : np.PyArray_Return(np.Npy_INTERFACE_array(iwork)),
 *                     "info" : info })             # <<<<<<<<<<<<<<
 * 
 *     return retobj;
 */
    __pyx_t_4 = __pyx_v_info;
    __pyx_t_7[((System::Object^)"info")] = __pyx_t_4;
    __pyx_t_4 = nullptr;
    __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_6, __pyx_t_2, ((System::Object^)__pyx_t_7)});
    __pyx_t_5 = nullptr;
    __pyx_t_6 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_t_7 = nullptr;
    __pyx_v_retobj = __pyx_t_4;
    __pyx_t_4 = nullptr;
  }
  __pyx_L4:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":330
 *                     "info" : info })
 * 
 *     return retobj;             # <<<<<<<<<<<<<<
 * 
 * def __mustBeSeq(name, v):
 */
  __pyx_r = __pyx_v_retobj;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":332
 *     return retobj;
 * 
 * def __mustBeSeq(name, v):             # <<<<<<<<<<<<<<
 *     if v is not None and not operator.isSequenceType(v):
 *         raise TypeError("%s must be a sequence" % name)
 */

static System::Object^ __mustBeSeq(System::Object^ name, System::Object^ v) {
  System::Object^ __pyx_v_name = nullptr;
  System::Object^ __pyx_v_v = nullptr;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_name = name;
  __pyx_v_v = v;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":333
 * 
 * def __mustBeSeq(name, v):
 *     if v is not None and not operator.isSequenceType(v):             # <<<<<<<<<<<<<<
 *         raise TypeError("%s must be a sequence" % name)
 * 
 */
  __pyx_t_1 = (__pyx_v_v != nullptr);
  if (__pyx_t_1) {
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "operator");
    __pyx_t_3 = __site_get_isSequenceType_333_37->Target(__site_get_isSequenceType_333_37, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_333_52->Target(__site_call1_333_52, __pyx_context, __pyx_t_3, __pyx_v_v);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = __site_istrue_333_52->Target(__site_istrue_333_52, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_5 = (!__pyx_t_4);
    __pyx_t_4 = __pyx_t_5;
  } else {
    __pyx_t_4 = __pyx_t_1;
  }
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":334
 * def __mustBeSeq(name, v):
 *     if v is not None and not operator.isSequenceType(v):
 *         raise TypeError("%s must be a sequence" % name)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_3 = __site_op_mod_334_48->Target(__site_op_mod_334_48, ((System::Object^)"%s must be a sequence"), __pyx_v_name);
    __pyx_t_6 = __site_call1_334_23->Target(__site_call1_334_23, __pyx_context, __pyx_t_2, ((System::Object^)__pyx_t_3));
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_6, nullptr, nullptr);
    __pyx_t_6 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":337
 * 
 * 
 * def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,             # <<<<<<<<<<<<<<
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,
 */

static System::Object^ odr(System::Object^ fcn, System::Object^ initbeta, System::Object^ y, System::Object^ x, [InteropServices::Optional]System::Object^ we, [InteropServices::Optional]System::Object^ wd, [InteropServices::Optional]System::Object^ fjacb, [InteropServices::Optional]System::Object^ fjacd, [InteropServices::Optional]System::Object^ extra_args, [InteropServices::Optional]System::Object^ ifixb, [InteropServices::Optional]System::Object^ ifixx, [InteropServices::Optional]System::Object^ job, [InteropServices::Optional]System::Object^ iprint, [InteropServices::Optional]System::Object^ errfile, [InteropServices::Optional]System::Object^ rptfile, [InteropServices::Optional]System::Object^ ndigit, [InteropServices::Optional]System::Object^ taufac, [InteropServices::Optional]System::Object^ sstol, [InteropServices::Optional]System::Object^ partol, [InteropServices::Optional]System::Object^ maxit, [InteropServices::Optional]System::Object^ stpb, [InteropServices::Optional]System::Object^ stpd, [InteropServices::Optional]System::Object^ sclb, [InteropServices::Optional]System::Object^ scld, [InteropServices::Optional]System::Object^ work, [InteropServices::Optional]System::Object^ iwork, [InteropServices::Optional]System::Object^ full_output) {
  System::Object^ __pyx_v_fcn = nullptr;
  System::Object^ __pyx_v_initbeta = nullptr;
  System::Object^ __pyx_v_y = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_we = nullptr;
  System::Object^ __pyx_v_wd = nullptr;
  System::Object^ __pyx_v_fjacb = nullptr;
  System::Object^ __pyx_v_fjacd = nullptr;
  System::Object^ __pyx_v_extra_args = nullptr;
  System::Object^ __pyx_v_ifixb = nullptr;
  System::Object^ __pyx_v_ifixx = nullptr;
  int __pyx_v_job;
  int __pyx_v_iprint;
  System::Object^ __pyx_v_errfile = nullptr;
  System::Object^ __pyx_v_rptfile = nullptr;
  int __pyx_v_ndigit;
  double __pyx_v_taufac;
  double __pyx_v_sstol;
  double __pyx_v_partol;
  int __pyx_v_maxit;
  System::Object^ __pyx_v_stpb = nullptr;
  System::Object^ __pyx_v_stpd = nullptr;
  System::Object^ __pyx_v_sclb = nullptr;
  System::Object^ __pyx_v_scld = nullptr;
  System::Object^ __pyx_v_work = nullptr;
  System::Object^ __pyx_v_iwork = nullptr;
  int __pyx_v_full_output;
  int __pyx_v_n;
  int __pyx_v_m;
  int __pyx_v_npx;
  int __pyx_v_nq;
  int __pyx_v_ldy;
  int __pyx_v_ldx;
  int __pyx_v_ldwe;
  int __pyx_v_ld2we;
  int __pyx_v_ldwd;
  int __pyx_v_ld2wd;
  int __pyx_v_ldifx;
  int __pyx_v_lunerr;
  int __pyx_v_lunrpt;
  int __pyx_v_ldstpd;
  int __pyx_v_ldscld;
  int __pyx_v_lwork;
  int __pyx_v_liwork;
  int __pyx_v_info;
  int __pyx_v_isodr;
  int __pyx_v_implicit;
  npy_intp __pyx_v_dim1[1];
  npy_intp __pyx_v_dim2[2];
  npy_intp __pyx_v_dim3[3];
  double __pyx_v_val;
  System::Object^ __pyx_v_e;
  System::Object^ __pyx_v_beta;
  System::Object^ __pyx_v_result;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  int __pyx_t_4;
  double __pyx_t_7;
  int __pyx_t_8;
  System::Object^ __pyx_t_9 = nullptr;
  System::Object^ __pyx_t_10 = nullptr;
  System::Object^ __pyx_t_11 = nullptr;
  int __pyx_t_12;
  int __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  int __pyx_t_16;
  int __pyx_t_17;
  int __pyx_t_18;
  double __pyx_t_21;
  double __pyx_t_22;
  char *__pyx_t_25;
  System::IntPtr __pyx_t_26;
  int __pyx_t_27;
  char *__pyx_t_28;
  int __pyx_t_29;
  __pyx_v_fcn = fcn;
  __pyx_v_initbeta = initbeta;
  __pyx_v_y = y;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(we) == nullptr) {
    __pyx_v_we = we;
  } else {
    __pyx_v_we = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(wd) == nullptr) {
    __pyx_v_wd = wd;
  } else {
    __pyx_v_wd = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(fjacb) == nullptr) {
    __pyx_v_fjacb = fjacb;
  } else {
    __pyx_v_fjacb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(fjacd) == nullptr) {
    __pyx_v_fjacd = fjacd;
  } else {
    __pyx_v_fjacd = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(extra_args) == nullptr) {
    __pyx_v_extra_args = extra_args;
  } else {
    __pyx_v_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ifixb) == nullptr) {
    __pyx_v_ifixb = ifixb;
  } else {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":338
 * 
 * def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,             # <<<<<<<<<<<<<<
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,
 *     int maxit=-1, stpb=None,
 */
    __pyx_v_ifixb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ifixx) == nullptr) {
    __pyx_v_ifixx = ifixx;
  } else {
    __pyx_v_ifixx = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(job) == nullptr) {
    __pyx_v_job = __site_cvt_cvt_int_337_0->Target(__site_cvt_cvt_int_337_0, job);
  } else {
    __pyx_v_job = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(iprint) == nullptr) {
    __pyx_v_iprint = __site_cvt_cvt_int_337_0_1->Target(__site_cvt_cvt_int_337_0_1, iprint);
  } else {
    __pyx_v_iprint = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(errfile) == nullptr) {
    __pyx_v_errfile = errfile;
  } else {
    __pyx_v_errfile = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(rptfile) == nullptr) {
    __pyx_v_rptfile = rptfile;
  } else {
    __pyx_v_rptfile = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ndigit) == nullptr) {
    __pyx_v_ndigit = __site_cvt_cvt_int_337_0_2->Target(__site_cvt_cvt_int_337_0_2, ndigit);
  } else {
    __pyx_v_ndigit = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(taufac) == nullptr) {
    __pyx_v_taufac = __site_cvt_cvt_double_337_0->Target(__site_cvt_cvt_double_337_0, taufac);
  } else {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":339
 * def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,             # <<<<<<<<<<<<<<
 *     int maxit=-1, stpb=None,
 *     stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):
 */
    __pyx_v_taufac = ((double)0.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(sstol) == nullptr) {
    __pyx_v_sstol = __site_cvt_cvt_double_337_0_1->Target(__site_cvt_cvt_double_337_0_1, sstol);
  } else {
    __pyx_v_sstol = __pyx_k_1;
  }
  if (dynamic_cast<System::Reflection::Missing^>(partol) == nullptr) {
    __pyx_v_partol = __site_cvt_cvt_double_337_0_2->Target(__site_cvt_cvt_double_337_0_2, partol);
  } else {
    __pyx_v_partol = __pyx_k_2;
  }
  if (dynamic_cast<System::Reflection::Missing^>(maxit) == nullptr) {
    __pyx_v_maxit = __site_cvt_cvt_int_337_0_3->Target(__site_cvt_cvt_int_337_0_3, maxit);
  } else {
    __pyx_v_maxit = ((int)-1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(stpb) == nullptr) {
    __pyx_v_stpb = stpb;
  } else {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":340
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,
 *     int maxit=-1, stpb=None,             # <<<<<<<<<<<<<<
 *     stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):
 *     """
 */
    __pyx_v_stpb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(stpd) == nullptr) {
    __pyx_v_stpd = stpd;
  } else {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":341
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,
 *     int maxit=-1, stpb=None,
 *     stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):             # <<<<<<<<<<<<<<
 *     """
 *     odr(fcn, beta0, y, x,
 */
    __pyx_v_stpd = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(sclb) == nullptr) {
    __pyx_v_sclb = sclb;
  } else {
    __pyx_v_sclb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(scld) == nullptr) {
    __pyx_v_scld = scld;
  } else {
    __pyx_v_scld = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(work) == nullptr) {
    __pyx_v_work = work;
  } else {
    __pyx_v_work = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(iwork) == nullptr) {
    __pyx_v_iwork = iwork;
  } else {
    __pyx_v_iwork = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(full_output) == nullptr) {
    __pyx_v_full_output = __site_cvt_cvt_int_337_0_4->Target(__site_cvt_cvt_int_337_0_4, full_output);
  } else {
    __pyx_v_full_output = ((int)0);
  }
  __pyx_v_e = nullptr;
  __pyx_v_beta = nullptr;
  __pyx_v_result = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":353
 *     """
 *     cdef int n, m, npx, nq, ldy, ldx, ldwe, ld2we, ldwd, ld2wd, ldifx
 *     cdef int lunerr = -1             # <<<<<<<<<<<<<<
 *     cdef int lunrpt = -1
 *     cdef int ldstpd, ldscld, lwork, liwork, info=0
 */
  __pyx_v_lunerr = -1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":354
 *     cdef int n, m, npx, nq, ldy, ldx, ldwe, ld2we, ldwd, ld2wd, ldifx
 *     cdef int lunerr = -1
 *     cdef int lunrpt = -1             # <<<<<<<<<<<<<<
 *     cdef int ldstpd, ldscld, lwork, liwork, info=0
 *     cdef int isodr = 1
 */
  __pyx_v_lunrpt = -1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":355
 *     cdef int lunerr = -1
 *     cdef int lunrpt = -1
 *     cdef int ldstpd, ldscld, lwork, liwork, info=0             # <<<<<<<<<<<<<<
 *     cdef int isodr = 1
 *     cdef int implicit
 */
  __pyx_v_info = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":356
 *     cdef int lunrpt = -1
 *     cdef int ldstpd, ldscld, lwork, liwork, info=0
 *     cdef int isodr = 1             # <<<<<<<<<<<<<<
 *     cdef int implicit
 *     cdef npy_intp dim1[1], dim2[2], dim3[3]
 */
  __pyx_v_isodr = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":362
 * 
 * 
 *     if not callable(fcn): raise TypeError("fcn must be callable")             # <<<<<<<<<<<<<<
 *     if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")
 *     if not operator.isSequenceType(y):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "callable");
  __pyx_t_2 = __site_call1_362_19->Target(__site_call1_362_19, __pyx_context, __pyx_t_1, __pyx_v_fcn);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_362_19->Target(__site_istrue_362_19, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = (!__pyx_t_3);
  if (__pyx_t_4) {
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_1 = __site_call1_362_41->Target(__site_call1_362_41, __pyx_context, __pyx_t_2, ((System::Object^)"fcn must be callable"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":363
 * 
 *     if not callable(fcn): raise TypeError("fcn must be callable")
 *     if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")             # <<<<<<<<<<<<<<
 *     if not operator.isSequenceType(y):
 *         try:
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_2 = __site_get_isSequenceType_363_19->Target(__site_get_isSequenceType_363_19, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_363_34->Target(__site_call1_363_34, __pyx_context, __pyx_t_2, __pyx_v_initbeta);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_363_34->Target(__site_istrue_363_34, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = (!__pyx_t_4);
  if (__pyx_t_3) {
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_363_61->Target(__site_call1_363_61, __pyx_context, __pyx_t_1, ((System::Object^)"initbeta must be a sequence"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":364
 *     if not callable(fcn): raise TypeError("fcn must be callable")
 *     if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")
 *     if not operator.isSequenceType(y):             # <<<<<<<<<<<<<<
 *         try:
 *             val = int(y)
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_1 = __site_get_isSequenceType_364_19->Target(__site_get_isSequenceType_364_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call1_364_34->Target(__site_call1_364_34, __pyx_context, __pyx_t_1, __pyx_v_y);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_364_34->Target(__site_istrue_364_34, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = (!__pyx_t_3);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":365
 *     if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")
 *     if not operator.isSequenceType(y):
 *         try:             # <<<<<<<<<<<<<<
 *             val = int(y)
 *         except ValueError, e:
 */
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":366
 *     if not operator.isSequenceType(y):
 *         try:
 *             val = int(y)             # <<<<<<<<<<<<<<
 *         except ValueError, e:
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "int");
      __pyx_t_1 = __site_call1_366_21->Target(__site_call1_366_21, __pyx_context, ((System::Object^)__pyx_t_2), __pyx_v_y);
      __pyx_t_2 = nullptr;
      __pyx_t_7 = __site_cvt_cvt_double_366_21->Target(__site_cvt_cvt_double_366_21, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_v_val = __pyx_t_7;
    } catch (System::Exception^ __pyx_lt_5) {
      System::Object^ __pyx_lt_6 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_5);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":367
 *         try:
 *             val = int(y)
 *         except ValueError, e:             # <<<<<<<<<<<<<<
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")
 *     if not operator.isSequenceType(x):
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_6, __pyx_t_1);
      __pyx_t_1 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.odr.__odrpack.odr");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_5);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":368
 *             val = int(y)
 *         except ValueError, e:
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")             # <<<<<<<<<<<<<<
 *     if not operator.isSequenceType(x):
 *         raise TypeError("x must be a sequence")
 */
        __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "TypeError");
        __pyx_t_2 = __site_call1_368_27->Target(__site_call1_368_27, __pyx_context, __pyx_t_1, ((System::Object^)"y must be a sequence or integer(if model is implicit)"));
        __pyx_t_1 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
        __pyx_t_2 = nullptr;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_5);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":369
 *         except ValueError, e:
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")
 *     if not operator.isSequenceType(x):             # <<<<<<<<<<<<<<
 *         raise TypeError("x must be a sequence")
 * 
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_1 = __site_get_isSequenceType_369_19->Target(__site_get_isSequenceType_369_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call1_369_34->Target(__site_call1_369_34, __pyx_context, __pyx_t_1, __pyx_v_x);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_istrue_369_34->Target(__site_istrue_369_34, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = (!__pyx_t_4);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":370
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")
 *     if not operator.isSequenceType(x):
 *         raise TypeError("x must be a sequence")             # <<<<<<<<<<<<<<
 * 
 *     if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_1 = __site_call1_370_23->Target(__site_call1_370_23, __pyx_context, __pyx_t_2, ((System::Object^)"x must be a sequence"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":372
 *         raise TypeError("x must be a sequence")
 * 
 *     if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):             # <<<<<<<<<<<<<<
 *         raise TypeError("we must be a sequence or a number")
 *     if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):
 */
  __pyx_t_3 = (__pyx_v_we != nullptr);
  if (__pyx_t_3) {
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "operator");
    __pyx_t_2 = __site_get_isSequenceType_372_38->Target(__site_get_isSequenceType_372_38, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_call1_372_53->Target(__site_call1_372_53, __pyx_context, __pyx_t_2, __pyx_v_we);
    __pyx_t_2 = nullptr;
    __pyx_t_4 = __site_istrue_372_53->Target(__site_istrue_372_53, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_8 = (!__pyx_t_4);
    if (__pyx_t_8) {
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "int");
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "long");
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "float");
      __pyx_t_11 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_t_2), ((System::Object^)__pyx_t_9), ((System::Object^)__pyx_t_10)});
      __pyx_t_2 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __site_call2_372_76->Target(__site_call2_372_76, __pyx_context, __pyx_t_1, __pyx_v_we, __pyx_t_11);
      __pyx_t_1 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_4 = __site_istrue_372_76->Target(__site_istrue_372_76, __pyx_t_10);
      __pyx_t_10 = nullptr;
      __pyx_t_12 = (!__pyx_t_4);
      __pyx_t_4 = __pyx_t_12;
    } else {
      __pyx_t_4 = __pyx_t_8;
    }
    __pyx_t_8 = __pyx_t_4;
  } else {
    __pyx_t_8 = __pyx_t_3;
  }
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":373
 * 
 *     if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):
 *         raise TypeError("we must be a sequence or a number")             # <<<<<<<<<<<<<<
 *     if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):
 *         raise TypeError("wd must be a sequence or a number")
 */
    __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_11 = __site_call1_373_23->Target(__site_call1_373_23, __pyx_context, __pyx_t_10, ((System::Object^)"we must be a sequence or a number"));
    __pyx_t_10 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_11, nullptr, nullptr);
    __pyx_t_11 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":374
 *     if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):
 *         raise TypeError("we must be a sequence or a number")
 *     if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):             # <<<<<<<<<<<<<<
 *         raise TypeError("wd must be a sequence or a number")
 * 
 */
  __pyx_t_8 = (__pyx_v_wd != nullptr);
  if (__pyx_t_8) {
    __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "operator");
    __pyx_t_10 = __site_get_isSequenceType_374_38->Target(__site_get_isSequenceType_374_38, __pyx_t_11, __pyx_context);
    __pyx_t_11 = nullptr;
    __pyx_t_11 = __site_call1_374_53->Target(__site_call1_374_53, __pyx_context, __pyx_t_10, __pyx_v_wd);
    __pyx_t_10 = nullptr;
    __pyx_t_3 = __site_istrue_374_53->Target(__site_istrue_374_53, __pyx_t_11);
    __pyx_t_11 = nullptr;
    __pyx_t_4 = (!__pyx_t_3);
    if (__pyx_t_4) {
      __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "isinstance");
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "int");
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "long");
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "float");
      __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_t_10), ((System::Object^)__pyx_t_1), ((System::Object^)__pyx_t_9)});
      __pyx_t_10 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_call2_374_76->Target(__site_call2_374_76, __pyx_context, __pyx_t_11, __pyx_v_wd, __pyx_t_2);
      __pyx_t_11 = nullptr;
      __pyx_t_2 = nullptr;
      __pyx_t_3 = __site_istrue_374_76->Target(__site_istrue_374_76, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_12 = (!__pyx_t_3);
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_8;
  }
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":375
 *         raise TypeError("we must be a sequence or a number")
 *     if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):
 *         raise TypeError("wd must be a sequence or a number")             # <<<<<<<<<<<<<<
 * 
 *     if fjacb is not None and not callable(fjacb):
 */
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_375_23->Target(__site_call1_375_23, __pyx_context, __pyx_t_9, ((System::Object^)"wd must be a sequence or a number"));
    __pyx_t_9 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":377
 *         raise TypeError("wd must be a sequence or a number")
 * 
 *     if fjacb is not None and not callable(fjacb):             # <<<<<<<<<<<<<<
 *         raise TypeError("fjacb must be callable")
 *     if fjacd is not None and not callable(fjacd):
 */
  __pyx_t_4 = (__pyx_v_fjacb != nullptr);
  if (__pyx_t_4) {
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "callable");
    __pyx_t_9 = __site_call1_377_41->Target(__site_call1_377_41, __pyx_context, __pyx_t_2, __pyx_v_fjacb);
    __pyx_t_2 = nullptr;
    __pyx_t_8 = __site_istrue_377_41->Target(__site_istrue_377_41, __pyx_t_9);
    __pyx_t_9 = nullptr;
    __pyx_t_3 = (!__pyx_t_8);
    __pyx_t_8 = __pyx_t_3;
  } else {
    __pyx_t_8 = __pyx_t_4;
  }
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":378
 * 
 *     if fjacb is not None and not callable(fjacb):
 *         raise TypeError("fjacb must be callable")             # <<<<<<<<<<<<<<
 *     if fjacd is not None and not callable(fjacd):
 *         raise TypeError("fjacd must be callable")
 */
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_378_23->Target(__site_call1_378_23, __pyx_context, __pyx_t_9, ((System::Object^)"fjacb must be callable"));
    __pyx_t_9 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":379
 *     if fjacb is not None and not callable(fjacb):
 *         raise TypeError("fjacb must be callable")
 *     if fjacd is not None and not callable(fjacd):             # <<<<<<<<<<<<<<
 *         raise TypeError("fjacd must be callable")
 * 
 */
  __pyx_t_8 = (__pyx_v_fjacd != nullptr);
  if (__pyx_t_8) {
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "callable");
    __pyx_t_9 = __site_call1_379_41->Target(__site_call1_379_41, __pyx_context, __pyx_t_2, __pyx_v_fjacd);
    __pyx_t_2 = nullptr;
    __pyx_t_4 = __site_istrue_379_41->Target(__site_istrue_379_41, __pyx_t_9);
    __pyx_t_9 = nullptr;
    __pyx_t_3 = (!__pyx_t_4);
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_8;
  }
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":380
 *         raise TypeError("fjacb must be callable")
 *     if fjacd is not None and not callable(fjacd):
 *         raise TypeError("fjacd must be callable")             # <<<<<<<<<<<<<<
 * 
 *     # vars() doesn't work in Cython for IronPython because it doesn't create a context for this
 */
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_380_23->Target(__site_call1_380_23, __pyx_context, __pyx_t_9, ((System::Object^)"fjacd must be callable"));
    __pyx_t_9 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":385
 *     # function, we just get the context of the calling function which doesn't have these variables
 *     # defined in the dict.
 *     __mustBeSeq("extra_args", extra_args)             # <<<<<<<<<<<<<<
 *     __mustBeSeq("ifixx", ifixx)
 *     __mustBeSeq("ifixb", ifixb)
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_9 = __site_call2_385_15->Target(__site_call2_385_15, __pyx_context, __pyx_t_2, ((System::Object^)"extra_args"), __pyx_v_extra_args);
  __pyx_t_2 = nullptr;
  __pyx_t_9 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":386
 *     # defined in the dict.
 *     __mustBeSeq("extra_args", extra_args)
 *     __mustBeSeq("ifixx", ifixx)             # <<<<<<<<<<<<<<
 *     __mustBeSeq("ifixb", ifixb)
 *     __mustBeSeq("stpb", stpb)
 */
  __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_2 = __site_call2_386_15->Target(__site_call2_386_15, __pyx_context, __pyx_t_9, ((System::Object^)"ifixx"), __pyx_v_ifixx);
  __pyx_t_9 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":387
 *     __mustBeSeq("extra_args", extra_args)
 *     __mustBeSeq("ifixx", ifixx)
 *     __mustBeSeq("ifixb", ifixb)             # <<<<<<<<<<<<<<
 *     __mustBeSeq("stpb", stpb)
 *     __mustBeSeq("stpd", stpd)
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_9 = __site_call2_387_15->Target(__site_call2_387_15, __pyx_context, __pyx_t_2, ((System::Object^)"ifixb"), __pyx_v_ifixb);
  __pyx_t_2 = nullptr;
  __pyx_t_9 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":388
 *     __mustBeSeq("ifixx", ifixx)
 *     __mustBeSeq("ifixb", ifixb)
 *     __mustBeSeq("stpb", stpb)             # <<<<<<<<<<<<<<
 *     __mustBeSeq("stpd", stpd)
 *     __mustBeSeq("sclb", sclb)
 */
  __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_2 = __site_call2_388_15->Target(__site_call2_388_15, __pyx_context, __pyx_t_9, ((System::Object^)"stpb"), __pyx_v_stpb);
  __pyx_t_9 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":389
 *     __mustBeSeq("ifixb", ifixb)
 *     __mustBeSeq("stpb", stpb)
 *     __mustBeSeq("stpd", stpd)             # <<<<<<<<<<<<<<
 *     __mustBeSeq("sclb", sclb)
 *     __mustBeSeq("scld", scld)
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_9 = __site_call2_389_15->Target(__site_call2_389_15, __pyx_context, __pyx_t_2, ((System::Object^)"stpd"), __pyx_v_stpd);
  __pyx_t_2 = nullptr;
  __pyx_t_9 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":390
 *     __mustBeSeq("stpb", stpb)
 *     __mustBeSeq("stpd", stpd)
 *     __mustBeSeq("sclb", sclb)             # <<<<<<<<<<<<<<
 *     __mustBeSeq("scld", scld)
 *     __mustBeSeq("work", work)
 */
  __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_2 = __site_call2_390_15->Target(__site_call2_390_15, __pyx_context, __pyx_t_9, ((System::Object^)"sclb"), __pyx_v_sclb);
  __pyx_t_9 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":391
 *     __mustBeSeq("stpd", stpd)
 *     __mustBeSeq("sclb", sclb)
 *     __mustBeSeq("scld", scld)             # <<<<<<<<<<<<<<
 *     __mustBeSeq("work", work)
 *     __mustBeSeq("iwork", iwork)
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_9 = __site_call2_391_15->Target(__site_call2_391_15, __pyx_context, __pyx_t_2, ((System::Object^)"scld"), __pyx_v_scld);
  __pyx_t_2 = nullptr;
  __pyx_t_9 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":392
 *     __mustBeSeq("sclb", sclb)
 *     __mustBeSeq("scld", scld)
 *     __mustBeSeq("work", work)             # <<<<<<<<<<<<<<
 *     __mustBeSeq("iwork", iwork)
 * 
 */
  __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_2 = __site_call2_392_15->Target(__site_call2_392_15, __pyx_context, __pyx_t_9, ((System::Object^)"work"), __pyx_v_work);
  __pyx_t_9 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":393
 *     __mustBeSeq("scld", scld)
 *     __mustBeSeq("work", work)
 *     __mustBeSeq("iwork", iwork)             # <<<<<<<<<<<<<<
 * 
 *     if work is not None and not np.PyArray_Check(work):
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "__mustBeSeq");
  __pyx_t_9 = __site_call2_393_15->Target(__site_call2_393_15, __pyx_context, __pyx_t_2, ((System::Object^)"iwork"), __pyx_v_iwork);
  __pyx_t_2 = nullptr;
  __pyx_t_9 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":395
 *     __mustBeSeq("iwork", iwork)
 * 
 *     if work is not None and not np.PyArray_Check(work):             # <<<<<<<<<<<<<<
 *         raise TypeError("work must be an array")
 *     if iwork is not None and not np.PyArray_Check(work):
 */
  __pyx_t_4 = (__pyx_v_work != nullptr);
  if (__pyx_t_4) {
    __pyx_t_9 = PyArray_Check(__pyx_v_work); 
    __pyx_t_8 = __site_istrue_395_48->Target(__site_istrue_395_48, __pyx_t_9);
    __pyx_t_9 = nullptr;
    __pyx_t_3 = (!__pyx_t_8);
    __pyx_t_8 = __pyx_t_3;
  } else {
    __pyx_t_8 = __pyx_t_4;
  }
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":396
 * 
 *     if work is not None and not np.PyArray_Check(work):
 *         raise TypeError("work must be an array")             # <<<<<<<<<<<<<<
 *     if iwork is not None and not np.PyArray_Check(work):
 *         raise TypeError("iwork must be an array")
 */
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_396_23->Target(__site_call1_396_23, __pyx_context, __pyx_t_9, ((System::Object^)"work must be an array"));
    __pyx_t_9 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L13;
  }
  __pyx_L13:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":397
 *     if work is not None and not np.PyArray_Check(work):
 *         raise TypeError("work must be an array")
 *     if iwork is not None and not np.PyArray_Check(work):             # <<<<<<<<<<<<<<
 *         raise TypeError("iwork must be an array")
 * 
 */
  __pyx_t_8 = (__pyx_v_iwork != nullptr);
  if (__pyx_t_8) {
    __pyx_t_2 = PyArray_Check(__pyx_v_work); 
    __pyx_t_4 = __site_istrue_397_49->Target(__site_istrue_397_49, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_3 = (!__pyx_t_4);
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_8;
  }
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":398
 *         raise TypeError("work must be an array")
 *     if iwork is not None and not np.PyArray_Check(work):
 *         raise TypeError("iwork must be an array")             # <<<<<<<<<<<<<<
 * 
 *     implicit = (job % 10 == 1)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_9 = __site_call1_398_23->Target(__site_call1_398_23, __pyx_context, __pyx_t_2, ((System::Object^)"iwork must be an array"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
    __pyx_t_9 = nullptr;
    goto __pyx_L14;
  }
  __pyx_L14:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":400
 *         raise TypeError("iwork must be an array")
 * 
 *     implicit = (job % 10 == 1)             # <<<<<<<<<<<<<<
 *     if not implicit:
 *         y = np.PyArray_CopyFromObject(y, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 */
  __pyx_v_implicit = (__Pyx_mod_long(__pyx_v_job, 10) == 1);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":401
 * 
 *     implicit = (job % 10 == 1)
 *     if not implicit:             # <<<<<<<<<<<<<<
 *         y = np.PyArray_CopyFromObject(y, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if y is None:
 */
  __pyx_t_4 = (!__pyx_v_implicit);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":402
 *     implicit = (job % 10 == 1)
 *     if not implicit:
 *         y = np.PyArray_CopyFromObject(y, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)             # <<<<<<<<<<<<<<
 *         if y is None:
 *             raise ValueError("y could not be made into a suitable array")
 */
    __pyx_t_9 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_2 = PyArray_CopyFromObject(__pyx_v_y, __pyx_t_9, __pyx_int_1, __pyx_int_2); 
    __pyx_t_9 = nullptr;
    __pyx_v_y = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":403
 *     if not implicit:
 *         y = np.PyArray_CopyFromObject(y, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if y is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("y could not be made into a suitable array")
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 */
    __pyx_t_4 = (__pyx_v_y == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":404
 *         y = np.PyArray_CopyFromObject(y, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if y is None:
 *             raise ValueError("y could not be made into a suitable array")             # <<<<<<<<<<<<<<
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if x is None:
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_404_28->Target(__site_call1_404_28, __pyx_context, __pyx_t_2, ((System::Object^)"y could not be made into a suitable array"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L16;
    }
    __pyx_L16:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":405
 *         if y is None:
 *             raise ValueError("y could not be made into a suitable array")
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)             # <<<<<<<<<<<<<<
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")
 */
    __pyx_t_9 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_2 = PyArray_CopyFromObject(__pyx_v_x, __pyx_t_9, __pyx_int_1, __pyx_int_2); 
    __pyx_t_9 = nullptr;
    __pyx_v_x = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":406
 *             raise ValueError("y could not be made into a suitable array")
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if x is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("x could not be made into a suitable array")
 * 
 */
    __pyx_t_4 = (__pyx_v_x == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":407
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         n = y.shape[-1]
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_407_28->Target(__site_call1_407_28, __pyx_context, __pyx_t_2, ((System::Object^)"x could not be made into a suitable array"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L17;
    }
    __pyx_L17:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":409
 *             raise ValueError("x could not be made into a suitable array")
 * 
 *         n = y.shape[-1]             # <<<<<<<<<<<<<<
 *         if n != x.shape[-1]:
 *             raise ValueError("x and y don't have matching numbers of observations")
 */
    __pyx_t_9 = __site_get_shape_409_13->Target(__site_get_shape_409_13, __pyx_v_y, __pyx_context);
    __pyx_t_2 = __site_getindex_409_19->Target(__site_getindex_409_19, __pyx_t_9, ((System::Object^)-1));
    __pyx_t_9 = nullptr;
    __pyx_t_13 = __site_cvt_cvt_int_409_19->Target(__site_cvt_cvt_int_409_19, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_n = __pyx_t_13;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":410
 * 
 *         n = y.shape[-1]
 *         if n != x.shape[-1]:             # <<<<<<<<<<<<<<
 *             raise ValueError("x and y don't have matching numbers of observations")
 *         nq = 1 if y.ndim == 1 else y.shape[0]
 */
    __pyx_t_2 = __pyx_v_n;
    __pyx_t_9 = __site_get_shape_410_17->Target(__site_get_shape_410_17, __pyx_v_x, __pyx_context);
    __pyx_t_11 = __site_getindex_410_23->Target(__site_getindex_410_23, __pyx_t_9, ((System::Object^)-1));
    __pyx_t_9 = nullptr;
    __pyx_t_9 = __site_op_ne_410_13->Target(__site_op_ne_410_13, __pyx_t_2, __pyx_t_11);
    __pyx_t_2 = nullptr;
    __pyx_t_11 = nullptr;
    __pyx_t_4 = __site_istrue_410_13->Target(__site_istrue_410_13, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":411
 *         n = y.shape[-1]
 *         if n != x.shape[-1]:
 *             raise ValueError("x and y don't have matching numbers of observations")             # <<<<<<<<<<<<<<
 *         nq = 1 if y.ndim == 1 else y.shape[0]
 *         ldx = ldy = n
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_11 = __site_call1_411_28->Target(__site_call1_411_28, __pyx_context, __pyx_t_9, ((System::Object^)"x and y don't have matching numbers of observations"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_11, nullptr, nullptr);
      __pyx_t_11 = nullptr;
      goto __pyx_L18;
    }
    __pyx_L18:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":412
 *         if n != x.shape[-1]:
 *             raise ValueError("x and y don't have matching numbers of observations")
 *         nq = 1 if y.ndim == 1 else y.shape[0]             # <<<<<<<<<<<<<<
 *         ldx = ldy = n
 *     else:
 */
    __pyx_t_9 = __site_get_ndim_412_19->Target(__site_get_ndim_412_19, __pyx_v_y, __pyx_context);
    __pyx_t_2 = __site_op_eq_412_25->Target(__site_op_eq_412_25, __pyx_t_9, __pyx_int_1);
    __pyx_t_9 = nullptr;
    __pyx_t_4 = __site_istrue_412_25->Target(__site_istrue_412_25, __pyx_t_2);
    __pyx_t_2 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_11 = __pyx_int_1;
    } else {
      __pyx_t_2 = __site_get_shape_412_36->Target(__site_get_shape_412_36, __pyx_v_y, __pyx_context);
      __pyx_t_9 = __site_getindex_412_42->Target(__site_getindex_412_42, __pyx_t_2, ((System::Object^)0));
      __pyx_t_2 = nullptr;
      __pyx_t_11 = __pyx_t_9;
      __pyx_t_9 = nullptr;
    }
    __pyx_t_14 = __site_cvt_cvt_int_412_13->Target(__site_cvt_cvt_int_412_13, __pyx_t_11);
    __pyx_t_11 = nullptr;
    __pyx_v_nq = __pyx_t_14;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":413
 *             raise ValueError("x and y don't have matching numbers of observations")
 *         nq = 1 if y.ndim == 1 else y.shape[0]
 *         ldx = ldy = n             # <<<<<<<<<<<<<<
 *     else:
 *         ldy = 1
 */
    __pyx_v_ldx = __pyx_v_n;
    __pyx_v_ldy = __pyx_v_n;
    goto __pyx_L15;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":415
 *         ldx = ldy = n
 *     else:
 *         ldy = 1             # <<<<<<<<<<<<<<
 *         nq = int(y)
 *         dim1[0] = 1
 */
    __pyx_v_ldy = 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":416
 *     else:
 *         ldy = 1
 *         nq = int(y)             # <<<<<<<<<<<<<<
 *         dim1[0] = 1
 * 
 */
    __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "int");
    __pyx_t_9 = __site_call1_416_16->Target(__site_call1_416_16, __pyx_context, ((System::Object^)__pyx_t_11), __pyx_v_y);
    __pyx_t_11 = nullptr;
    __pyx_t_15 = __site_cvt_cvt_int_416_16->Target(__site_cvt_cvt_int_416_16, __pyx_t_9);
    __pyx_t_9 = nullptr;
    __pyx_v_nq = __pyx_t_15;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":417
 *         ldy = 1
 *         nq = int(y)
 *         dim1[0] = 1             # <<<<<<<<<<<<<<
 * 
 *         # Initialize y to a dummy array; never referenced
 */
    (__pyx_v_dim1[0]) = 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":420
 * 
 *         # Initialize y to a dummy array; never referenced
 *         y = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if x is None:
 */
    __pyx_t_9 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
    __pyx_v_y = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":421
 *         # Initialize y to a dummy array; never referenced
 *         y = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)             # <<<<<<<<<<<<<<
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")
 */
    __pyx_t_9 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_11 = PyArray_CopyFromObject(__pyx_v_x, __pyx_t_9, __pyx_int_1, __pyx_int_2); 
    __pyx_t_9 = nullptr;
    __pyx_v_x = __pyx_t_11;
    __pyx_t_11 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":422
 *         y = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if x is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("x could not be made into a suitable array")
 *         n = x.shape[-1]
 */
    __pyx_t_4 = (__pyx_v_x == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":423
 *         x = np.PyArray_CopyFromObject(x, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")             # <<<<<<<<<<<<<<
 *         n = x.shape[-1]
 *         ldx = n
 */
      __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_423_28->Target(__site_call1_423_28, __pyx_context, __pyx_t_11, ((System::Object^)"x could not be made into a suitable array"));
      __pyx_t_11 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L19;
    }
    __pyx_L19:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":424
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")
 *         n = x.shape[-1]             # <<<<<<<<<<<<<<
 *         ldx = n
 * 
 */
    __pyx_t_9 = __site_get_shape_424_13->Target(__site_get_shape_424_13, __pyx_v_x, __pyx_context);
    __pyx_t_11 = __site_getindex_424_19->Target(__site_getindex_424_19, __pyx_t_9, ((System::Object^)-1));
    __pyx_t_9 = nullptr;
    __pyx_t_16 = __site_cvt_cvt_int_424_19->Target(__site_cvt_cvt_int_424_19, __pyx_t_11);
    __pyx_t_11 = nullptr;
    __pyx_v_n = __pyx_t_16;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":425
 *             raise ValueError("x could not be made into a suitable array")
 *         n = x.shape[-1]
 *         ldx = n             # <<<<<<<<<<<<<<
 * 
 *     m = 1 if x.ndim == 1 else x.shape[0]
 */
    __pyx_v_ldx = __pyx_v_n;
  }
  __pyx_L15:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":427
 *         ldx = n
 * 
 *     m = 1 if x.ndim == 1 else x.shape[0]             # <<<<<<<<<<<<<<
 *     beta = np.PyArray_CopyFromObject(initbeta, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *     if beta is None:
 */
  __pyx_t_9 = __site_get_ndim_427_14->Target(__site_get_ndim_427_14, __pyx_v_x, __pyx_context);
  __pyx_t_2 = __site_op_eq_427_20->Target(__site_op_eq_427_20, __pyx_t_9, __pyx_int_1);
  __pyx_t_9 = nullptr;
  __pyx_t_4 = __site_istrue_427_20->Target(__site_istrue_427_20, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_4) {
    __pyx_t_11 = __pyx_int_1;
  } else {
    __pyx_t_2 = __site_get_shape_427_31->Target(__site_get_shape_427_31, __pyx_v_x, __pyx_context);
    __pyx_t_9 = __site_getindex_427_37->Target(__site_getindex_427_37, __pyx_t_2, ((System::Object^)0));
    __pyx_t_2 = nullptr;
    __pyx_t_11 = __pyx_t_9;
    __pyx_t_9 = nullptr;
  }
  __pyx_t_17 = __site_cvt_cvt_int_427_8->Target(__site_cvt_cvt_int_427_8, __pyx_t_11);
  __pyx_t_11 = nullptr;
  __pyx_v_m = __pyx_t_17;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":428
 * 
 *     m = 1 if x.ndim == 1 else x.shape[0]
 *     beta = np.PyArray_CopyFromObject(initbeta, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)             # <<<<<<<<<<<<<<
 *     if beta is None:
 *         raise ValueError("initbeta could not be made into a suitable array")
 */
  __pyx_t_11 = PyArray_DescrFromType(NPY_DOUBLE); 
  __pyx_t_9 = PyArray_CopyFromObject(__pyx_v_initbeta, __pyx_t_11, __pyx_int_1, __pyx_int_1); 
  __pyx_t_11 = nullptr;
  __pyx_v_beta = __pyx_t_9;
  __pyx_t_9 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":429
 *     m = 1 if x.ndim == 1 else x.shape[0]
 *     beta = np.PyArray_CopyFromObject(initbeta, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *     if beta is None:             # <<<<<<<<<<<<<<
 *         raise ValueError("initbeta could not be made into a suitable array")
 *     npx = beta.shape[0]
 */
  __pyx_t_4 = (__pyx_v_beta == nullptr);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":430
 *     beta = np.PyArray_CopyFromObject(initbeta, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *     if beta is None:
 *         raise ValueError("initbeta could not be made into a suitable array")             # <<<<<<<<<<<<<<
 *     npx = beta.shape[0]
 * 
 */
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_11 = __site_call1_430_24->Target(__site_call1_430_24, __pyx_context, __pyx_t_9, ((System::Object^)"initbeta could not be made into a suitable array"));
    __pyx_t_9 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_11, nullptr, nullptr);
    __pyx_t_11 = nullptr;
    goto __pyx_L20;
  }
  __pyx_L20:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":431
 *     if beta is None:
 *         raise ValueError("initbeta could not be made into a suitable array")
 *     npx = beta.shape[0]             # <<<<<<<<<<<<<<
 * 
 *     if we is None:
 */
  __pyx_t_11 = __site_get_shape_431_14->Target(__site_get_shape_431_14, __pyx_v_beta, __pyx_context);
  __pyx_t_9 = __site_getindex_431_20->Target(__site_getindex_431_20, __pyx_t_11, ((System::Object^)0));
  __pyx_t_11 = nullptr;
  __pyx_t_18 = __site_cvt_cvt_int_431_20->Target(__site_cvt_cvt_int_431_20, __pyx_t_9);
  __pyx_t_9 = nullptr;
  __pyx_v_npx = __pyx_t_18;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":433
 *     npx = beta.shape[0]
 * 
 *     if we is None:             # <<<<<<<<<<<<<<
 *         ldwe = ld2we = 1
 *         dim1[0] = n
 */
  __pyx_t_4 = (__pyx_v_we == nullptr);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":434
 * 
 *     if we is None:
 *         ldwe = ld2we = 1             # <<<<<<<<<<<<<<
 *         dim1[0] = n
 *         we = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 */
    __pyx_v_ldwe = 1;
    __pyx_v_ld2we = 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":435
 *     if we is None:
 *         ldwe = ld2we = 1
 *         dim1[0] = n             # <<<<<<<<<<<<<<
 *         we = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         we[0] = -1.0
 */
    (__pyx_v_dim1[0]) = __pyx_v_n;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":436
 *         ldwe = ld2we = 1
 *         dim1[0] = n
 *         we = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         we[0] = -1.0
 *     elif np.PyNumber_Check(we):
 */
    __pyx_t_9 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
    __pyx_v_we = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":437
 *         dim1[0] = n
 *         we = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         we[0] = -1.0             # <<<<<<<<<<<<<<
 *     elif np.PyNumber_Check(we):
 *         try:
 */
    __pyx_t_9 = (-1.0);
    __site_setindex_437_10->Target(__site_setindex_437_10, __pyx_v_we, ((System::Object^)0), __pyx_t_9);
    __pyx_t_9 = nullptr;
    goto __pyx_L21;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":438
 *         we = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         we[0] = -1.0
 *     elif np.PyNumber_Check(we):             # <<<<<<<<<<<<<<
 *         try:
 *             val = float(we)
 */
  __pyx_t_9 = PyNumber_Check(__pyx_v_we); 
  __pyx_t_4 = __site_istrue_438_26->Target(__site_istrue_438_26, __pyx_t_9);
  __pyx_t_9 = nullptr;
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":439
 *         we[0] = -1.0
 *     elif np.PyNumber_Check(we):
 *         try:             # <<<<<<<<<<<<<<
 *             val = float(we)
 *             dim3[0] = nq
 */
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":440
 *     elif np.PyNumber_Check(we):
 *         try:
 *             val = float(we)             # <<<<<<<<<<<<<<
 *             dim3[0] = nq
 *             dim3[1] = 1
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "float");
      __pyx_t_11 = __site_call1_440_23->Target(__site_call1_440_23, __pyx_context, ((System::Object^)__pyx_t_9), __pyx_v_we);
      __pyx_t_9 = nullptr;
      __pyx_t_21 = __site_cvt_cvt_double_440_23->Target(__site_cvt_cvt_double_440_23, __pyx_t_11);
      __pyx_t_11 = nullptr;
      __pyx_v_val = __pyx_t_21;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":441
 *         try:
 *             val = float(we)
 *             dim3[0] = nq             # <<<<<<<<<<<<<<
 *             dim3[1] = 1
 *             dim3[2] = 1
 */
      (__pyx_v_dim3[0]) = __pyx_v_nq;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":442
 *             val = float(we)
 *             dim3[0] = nq
 *             dim3[1] = 1             # <<<<<<<<<<<<<<
 *             dim3[2] = 1
 *             we = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
 */
      (__pyx_v_dim3[1]) = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":443
 *             dim3[0] = nq
 *             dim3[1] = 1
 *             dim3[2] = 1             # <<<<<<<<<<<<<<
 *             we = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
 *             we[0,0,0] = val if implicit else -val
 */
      (__pyx_v_dim3[2]) = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":444
 *             dim3[1] = 1
 *             dim3[2] = 1
 *             we = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             we[0,0,0] = val if implicit else -val
 *             ldwe = ld2we = 1
 */
      __pyx_t_11 = PyArray_EMPTY(3, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim3[0]))), NPY_DOUBLE, 0); 
      __pyx_v_we = __pyx_t_11;
      __pyx_t_11 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":445
 *             dim3[2] = 1
 *             we = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
 *             we[0,0,0] = val if implicit else -val             # <<<<<<<<<<<<<<
 *             ldwe = ld2we = 1
 *         except ValueError, e:
 */
      if (__pyx_v_implicit) {
        __pyx_t_22 = __pyx_v_val;
      } else {
        __pyx_t_22 = (-__pyx_v_val);
      }
      __pyx_t_11 = __pyx_t_22;
      __pyx_t_9 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0, __pyx_int_0});
      __site_setindex_445_14->Target(__site_setindex_445_14, __pyx_v_we, __pyx_t_9, __pyx_t_11);
      __pyx_t_9 = nullptr;
      __pyx_t_11 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":446
 *             we = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
 *             we[0,0,0] = val if implicit else -val
 *             ldwe = ld2we = 1             # <<<<<<<<<<<<<<
 *         except ValueError, e:
 *             raise ValueError("could not convert we to a suitable array")
 */
      __pyx_v_ldwe = 1;
      __pyx_v_ld2we = 1;
    } catch (System::Exception^ __pyx_lt_19) {
      System::Object^ __pyx_lt_20 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_19);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":447
 *             we[0,0,0] = val if implicit else -val
 *             ldwe = ld2we = 1
 *         except ValueError, e:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert we to a suitable array")
 *     elif operator.isSequenceType(we):
 */
      __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_20, __pyx_t_11);
      __pyx_t_11 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.odr.__odrpack.odr");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_19);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":448
 *             ldwe = ld2we = 1
 *         except ValueError, e:
 *             raise ValueError("could not convert we to a suitable array")             # <<<<<<<<<<<<<<
 *     elif operator.isSequenceType(we):
 *         we = np.PyArray_CopyFromObject(we, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
 */
        __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_9 = __site_call1_448_28->Target(__site_call1_448_28, __pyx_context, __pyx_t_11, ((System::Object^)"could not convert we to a suitable array"));
        __pyx_t_11 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
        __pyx_t_9 = nullptr;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_19);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
    goto __pyx_L21;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":449
 *         except ValueError, e:
 *             raise ValueError("could not convert we to a suitable array")
 *     elif operator.isSequenceType(we):             # <<<<<<<<<<<<<<
 *         we = np.PyArray_CopyFromObject(we, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
 *         if we is None:
 */
  __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_11 = __site_get_isSequenceType_449_17->Target(__site_get_isSequenceType_449_17, __pyx_t_9, __pyx_context);
  __pyx_t_9 = nullptr;
  __pyx_t_9 = __site_call1_449_32->Target(__site_call1_449_32, __pyx_context, __pyx_t_11, __pyx_v_we);
  __pyx_t_11 = nullptr;
  __pyx_t_4 = __site_istrue_449_32->Target(__site_istrue_449_32, __pyx_t_9);
  __pyx_t_9 = nullptr;
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":450
 *             raise ValueError("could not convert we to a suitable array")
 *     elif operator.isSequenceType(we):
 *         we = np.PyArray_CopyFromObject(we, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)             # <<<<<<<<<<<<<<
 *         if we is None:
 *             raise ValueError("could not convert we to a suitable array")
 */
    __pyx_t_9 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_11 = PyArray_CopyFromObject(__pyx_v_we, __pyx_t_9, __pyx_int_1, __pyx_int_3); 
    __pyx_t_9 = nullptr;
    __pyx_v_we = __pyx_t_11;
    __pyx_t_11 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":451
 *     elif operator.isSequenceType(we):
 *         we = np.PyArray_CopyFromObject(we, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
 *         if we is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert we to a suitable array")
 * 
 */
    __pyx_t_4 = (__pyx_v_we == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":452
 *         we = np.PyArray_CopyFromObject(we, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
 *         if we is None:
 *             raise ValueError("could not convert we to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if we.ndim == 1 and nq == 1:
 */
      __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_452_28->Target(__site_call1_452_28, __pyx_context, __pyx_t_11, ((System::Object^)"could not convert we to a suitable array"));
      __pyx_t_11 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L22;
    }
    __pyx_L22:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":454
 *             raise ValueError("could not convert we to a suitable array")
 * 
 *         if we.ndim == 1 and nq == 1:             # <<<<<<<<<<<<<<
 *             ldwe = n
 *             ld2we = 1
 */
    __pyx_t_9 = __site_get_ndim_454_13->Target(__site_get_ndim_454_13, __pyx_v_we, __pyx_context);
    __pyx_t_11 = __site_op_eq_454_19->Target(__site_op_eq_454_19, __pyx_t_9, __pyx_int_1);
    __pyx_t_9 = nullptr;
    __pyx_t_4 = __site_istrue_454_19->Target(__site_istrue_454_19, __pyx_t_11);
    __pyx_t_11 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_8 = (__pyx_v_nq == 1);
      __pyx_t_3 = __pyx_t_8;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":455
 * 
 *         if we.ndim == 1 and nq == 1:
 *             ldwe = n             # <<<<<<<<<<<<<<
 *             ld2we = 1
 *         elif we.ndim == 1 and we.shape[0] == nq:
 */
      __pyx_v_ldwe = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":456
 *         if we.ndim == 1 and nq == 1:
 *             ldwe = n
 *             ld2we = 1             # <<<<<<<<<<<<<<
 *         elif we.ndim == 1 and we.shape[0] == nq:
 *             # we is a rank-1 array with diagonal weightings to be broadcast
 */
      __pyx_v_ld2we = 1;
      goto __pyx_L23;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":457
 *             ldwe = n
 *             ld2we = 1
 *         elif we.ndim == 1 and we.shape[0] == nq:             # <<<<<<<<<<<<<<
 *             # we is a rank-1 array with diagonal weightings to be broadcast
 *             # to all observations
 */
    __pyx_t_11 = __site_get_ndim_457_15->Target(__site_get_ndim_457_15, __pyx_v_we, __pyx_context);
    __pyx_t_9 = __site_op_eq_457_21->Target(__site_op_eq_457_21, __pyx_t_11, __pyx_int_1);
    __pyx_t_11 = nullptr;
    __pyx_t_3 = __site_istrue_457_21->Target(__site_istrue_457_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_9 = __site_get_shape_457_32->Target(__site_get_shape_457_32, __pyx_v_we, __pyx_context);
      __pyx_t_11 = __site_getindex_457_38->Target(__site_getindex_457_38, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_nq;
      __pyx_t_2 = __site_op_eq_457_42->Target(__site_op_eq_457_42, __pyx_t_11, __pyx_t_9);
      __pyx_t_11 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_4 = __site_istrue_457_42->Target(__site_istrue_457_42, __pyx_t_2);
      __pyx_t_2 = nullptr;
      __pyx_t_8 = __pyx_t_4;
    } else {
      __pyx_t_8 = __pyx_t_3;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":460
 *             # we is a rank-1 array with diagonal weightings to be broadcast
 *             # to all observations
 *             ldwe = 1             # <<<<<<<<<<<<<<
 *             ld2we = 1
 *         elif we.ndim == 3 and we.shape == (nq, nq, 1):
 */
      __pyx_v_ldwe = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":461
 *             # to all observations
 *             ldwe = 1
 *             ld2we = 1             # <<<<<<<<<<<<<<
 *         elif we.ndim == 3 and we.shape == (nq, nq, 1):
 *             # we is a rank-3 array with the covariant weightings to be broadcast
 */
      __pyx_v_ld2we = 1;
      goto __pyx_L23;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":462
 *             ldwe = 1
 *             ld2we = 1
 *         elif we.ndim == 3 and we.shape == (nq, nq, 1):             # <<<<<<<<<<<<<<
 *             # we is a rank-3 array with the covariant weightings to be broadcast
 *             # to all observations
 */
    __pyx_t_2 = __site_get_ndim_462_15->Target(__site_get_ndim_462_15, __pyx_v_we, __pyx_context);
    __pyx_t_9 = __site_op_eq_462_21->Target(__site_op_eq_462_21, __pyx_t_2, __pyx_int_3);
    __pyx_t_2 = nullptr;
    __pyx_t_8 = __site_istrue_462_21->Target(__site_istrue_462_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_9 = __site_get_shape_462_32->Target(__site_get_shape_462_32, __pyx_v_we, __pyx_context);
      __pyx_t_2 = __pyx_v_nq;
      __pyx_t_11 = __pyx_v_nq;
      __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_11, __pyx_int_1});
      __pyx_t_2 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_11 = __site_op_eq_462_39->Target(__site_op_eq_462_39, __pyx_t_9, __pyx_t_1);
      __pyx_t_9 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_3 = __site_istrue_462_39->Target(__site_istrue_462_39, __pyx_t_11);
      __pyx_t_11 = nullptr;
      __pyx_t_4 = __pyx_t_3;
    } else {
      __pyx_t_4 = __pyx_t_8;
    }
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":465
 *             # we is a rank-3 array with the covariant weightings to be broadcast
 *             # to all observations
 *             ldwe = 1             # <<<<<<<<<<<<<<
 *             ld2we = nq
 *         elif we.ndim == 2 and we.shape == (nq, nq):
 */
      __pyx_v_ldwe = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":466
 *             # to all observations
 *             ldwe = 1
 *             ld2we = nq             # <<<<<<<<<<<<<<
 *         elif we.ndim == 2 and we.shape == (nq, nq):
 *             # we is a rank-2 array with the full covariant weightings to be
 */
      __pyx_v_ld2we = __pyx_v_nq;
      goto __pyx_L23;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":467
 *             ldwe = 1
 *             ld2we = nq
 *         elif we.ndim == 2 and we.shape == (nq, nq):             # <<<<<<<<<<<<<<
 *             # we is a rank-2 array with the full covariant weightings to be
 *             # broadcast to all observations.
 */
    __pyx_t_11 = __site_get_ndim_467_15->Target(__site_get_ndim_467_15, __pyx_v_we, __pyx_context);
    __pyx_t_1 = __site_op_eq_467_21->Target(__site_op_eq_467_21, __pyx_t_11, __pyx_int_2);
    __pyx_t_11 = nullptr;
    __pyx_t_4 = __site_istrue_467_21->Target(__site_istrue_467_21, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_1 = __site_get_shape_467_32->Target(__site_get_shape_467_32, __pyx_v_we, __pyx_context);
      __pyx_t_11 = __pyx_v_nq;
      __pyx_t_9 = __pyx_v_nq;
      __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_11, __pyx_t_9});
      __pyx_t_11 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_467_39->Target(__site_op_eq_467_39, __pyx_t_1, __pyx_t_2);
      __pyx_t_1 = nullptr;
      __pyx_t_2 = nullptr;
      __pyx_t_8 = __site_istrue_467_39->Target(__site_istrue_467_39, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_3 = __pyx_t_8;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":470
 *             # we is a rank-2 array with the full covariant weightings to be
 *             # broadcast to all observations.
 *             ldwe = 1             # <<<<<<<<<<<<<<
 *             ld2we = nq
 *         elif we.ndim == 2 and we.shape == (nq, n):
 */
      __pyx_v_ldwe = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":471
 *             # broadcast to all observations.
 *             ldwe = 1
 *             ld2we = nq             # <<<<<<<<<<<<<<
 *         elif we.ndim == 2 and we.shape == (nq, n):
 *             # we is a rank-2 array with the diagonal elements of the covariant
 */
      __pyx_v_ld2we = __pyx_v_nq;
      goto __pyx_L23;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":472
 *             ldwe = 1
 *             ld2we = nq
 *         elif we.ndim == 2 and we.shape == (nq, n):             # <<<<<<<<<<<<<<
 *             # we is a rank-2 array with the diagonal elements of the covariant
 *             # weightings for each observations
 */
    __pyx_t_9 = __site_get_ndim_472_15->Target(__site_get_ndim_472_15, __pyx_v_we, __pyx_context);
    __pyx_t_2 = __site_op_eq_472_21->Target(__site_op_eq_472_21, __pyx_t_9, __pyx_int_2);
    __pyx_t_9 = nullptr;
    __pyx_t_3 = __site_istrue_472_21->Target(__site_istrue_472_21, __pyx_t_2);
    __pyx_t_2 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_2 = __site_get_shape_472_32->Target(__site_get_shape_472_32, __pyx_v_we, __pyx_context);
      __pyx_t_9 = __pyx_v_nq;
      __pyx_t_1 = __pyx_v_n;
      __pyx_t_11 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_9, __pyx_t_1});
      __pyx_t_9 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __site_op_eq_472_39->Target(__site_op_eq_472_39, __pyx_t_2, __pyx_t_11);
      __pyx_t_2 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_4 = __site_istrue_472_39->Target(__site_istrue_472_39, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_8 = __pyx_t_4;
    } else {
      __pyx_t_8 = __pyx_t_3;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":475
 *             # we is a rank-2 array with the diagonal elements of the covariant
 *             # weightings for each observations
 *             ldwe = n             # <<<<<<<<<<<<<<
 *             ld2we = 1
 *         elif we.ndim == 3 and we.shape == (nq, nq, n):
 */
      __pyx_v_ldwe = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":476
 *             # weightings for each observations
 *             ldwe = n
 *             ld2we = 1             # <<<<<<<<<<<<<<
 *         elif we.ndim == 3 and we.shape == (nq, nq, n):
 *             # we is the full specification of the covariant weights for each observation
 */
      __pyx_v_ld2we = 1;
      goto __pyx_L23;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":477
 *             ldwe = n
 *             ld2we = 1
 *         elif we.ndim == 3 and we.shape == (nq, nq, n):             # <<<<<<<<<<<<<<
 *             # we is the full specification of the covariant weights for each observation
 *             ldwe = n
 */
    __pyx_t_1 = __site_get_ndim_477_15->Target(__site_get_ndim_477_15, __pyx_v_we, __pyx_context);
    __pyx_t_11 = __site_op_eq_477_21->Target(__site_op_eq_477_21, __pyx_t_1, __pyx_int_3);
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_477_21->Target(__site_istrue_477_21, __pyx_t_11);
    __pyx_t_11 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_11 = __site_get_shape_477_32->Target(__site_get_shape_477_32, __pyx_v_we, __pyx_context);
      __pyx_t_1 = __pyx_v_nq;
      __pyx_t_2 = __pyx_v_nq;
      __pyx_t_9 = __pyx_v_n;
      __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_9});
      __pyx_t_1 = nullptr;
      __pyx_t_2 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_477_39->Target(__site_op_eq_477_39, __pyx_t_11, __pyx_t_10);
      __pyx_t_11 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_3 = __site_istrue_477_39->Target(__site_istrue_477_39, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_4 = __pyx_t_3;
    } else {
      __pyx_t_4 = __pyx_t_8;
    }
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":479
 *         elif we.ndim == 3 and we.shape == (nq, nq, n):
 *             # we is the full specification of the covariant weights for each observation
 *             ldwe = n             # <<<<<<<<<<<<<<
 *             ld2we = nq
 *         else:
 */
      __pyx_v_ldwe = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":480
 *             # we is the full specification of the covariant weights for each observation
 *             ldwe = n
 *             ld2we = nq             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert we to a suitable array")
 */
      __pyx_v_ld2we = __pyx_v_nq;
      goto __pyx_L23;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":482
 *             ld2we = nq
 *         else:
 *             raise ValueError("could not convert we to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if wd is None:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_482_28->Target(__site_call1_482_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert we to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
    }
    __pyx_L23:;
    goto __pyx_L21;
  }
  __pyx_L21:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":484
 *             raise ValueError("could not convert we to a suitable array")
 * 
 *     if wd is None:             # <<<<<<<<<<<<<<
 *         ldwd = ld2wd = 1
 *         dim1[0]= m
 */
  __pyx_t_4 = (__pyx_v_wd == nullptr);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":485
 * 
 *     if wd is None:
 *         ldwd = ld2wd = 1             # <<<<<<<<<<<<<<
 *         dim1[0]= m
 *         wd = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 */
    __pyx_v_ldwd = 1;
    __pyx_v_ld2wd = 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":486
 *     if wd is None:
 *         ldwd = ld2wd = 1
 *         dim1[0]= m             # <<<<<<<<<<<<<<
 *         wd = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         wd[0] = -1.0
 */
    (__pyx_v_dim1[0]) = __pyx_v_m;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":487
 *         ldwd = ld2wd = 1
 *         dim1[0]= m
 *         wd = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         wd[0] = -1.0
 *     elif np.PyNumber_Check(wd):
 */
    __pyx_t_10 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
    __pyx_v_wd = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":488
 *         dim1[0]= m
 *         wd = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         wd[0] = -1.0             # <<<<<<<<<<<<<<
 *     elif np.PyNumber_Check(wd):
 *         try:
 */
    __pyx_t_10 = (-1.0);
    __site_setindex_488_10->Target(__site_setindex_488_10, __pyx_v_wd, ((System::Object^)0), __pyx_t_10);
    __pyx_t_10 = nullptr;
    goto __pyx_L24;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":489
 *         wd = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         wd[0] = -1.0
 *     elif np.PyNumber_Check(wd):             # <<<<<<<<<<<<<<
 *         try:
 *             val = float(wd)
 */
  __pyx_t_10 = PyNumber_Check(__pyx_v_wd); 
  __pyx_t_4 = __site_istrue_489_26->Target(__site_istrue_489_26, __pyx_t_10);
  __pyx_t_10 = nullptr;
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":490
 *         wd[0] = -1.0
 *     elif np.PyNumber_Check(wd):
 *         try:             # <<<<<<<<<<<<<<
 *             val = float(wd)
 *             dim3[0] = 1
 */
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":491
 *     elif np.PyNumber_Check(wd):
 *         try:
 *             val = float(wd)             # <<<<<<<<<<<<<<
 *             dim3[0] = 1
 *             dim3[1] = 1
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "float");
      __pyx_t_9 = __site_call1_491_23->Target(__site_call1_491_23, __pyx_context, ((System::Object^)__pyx_t_10), __pyx_v_wd);
      __pyx_t_10 = nullptr;
      __pyx_t_22 = __site_cvt_cvt_double_491_23->Target(__site_cvt_cvt_double_491_23, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_v_val = __pyx_t_22;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":492
 *         try:
 *             val = float(wd)
 *             dim3[0] = 1             # <<<<<<<<<<<<<<
 *             dim3[1] = 1
 *             dim3[2] = m
 */
      (__pyx_v_dim3[0]) = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":493
 *             val = float(wd)
 *             dim3[0] = 1
 *             dim3[1] = 1             # <<<<<<<<<<<<<<
 *             dim3[2] = m
 *             wd = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
 */
      (__pyx_v_dim3[1]) = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":494
 *             dim3[0] = 1
 *             dim3[1] = 1
 *             dim3[2] = m             # <<<<<<<<<<<<<<
 *             wd = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
 *             wd[0,0,0] = -val
 */
      (__pyx_v_dim3[2]) = __pyx_v_m;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":495
 *             dim3[1] = 1
 *             dim3[2] = m
 *             wd = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *             wd[0,0,0] = -val
 *             ldwd = 1
 */
      __pyx_t_9 = PyArray_EMPTY(3, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim3[0]))), NPY_DOUBLE, 0); 
      __pyx_v_wd = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":496
 *             dim3[2] = m
 *             wd = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
 *             wd[0,0,0] = -val             # <<<<<<<<<<<<<<
 *             ldwd = 1
 *             ld2wd = 1
 */
      __pyx_t_9 = (-__pyx_v_val);
      __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0, __pyx_int_0});
      __site_setindex_496_14->Target(__site_setindex_496_14, __pyx_v_wd, __pyx_t_10, __pyx_t_9);
      __pyx_t_10 = nullptr;
      __pyx_t_9 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":497
 *             wd = np.PyArray_EMPTY(3, &dim3[0], np.NPY_DOUBLE, False)
 *             wd[0,0,0] = -val
 *             ldwd = 1             # <<<<<<<<<<<<<<
 *             ld2wd = 1
 *         except ValueError, e:
 */
      __pyx_v_ldwd = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":498
 *             wd[0,0,0] = -val
 *             ldwd = 1
 *             ld2wd = 1             # <<<<<<<<<<<<<<
 *         except ValueError, e:
 *             raise ValueError("could not convert wd to a suitable array")
 */
      __pyx_v_ld2wd = 1;
    } catch (System::Exception^ __pyx_lt_23) {
      System::Object^ __pyx_lt_24 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_23);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":499
 *             ldwd = 1
 *             ld2wd = 1
 *         except ValueError, e:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert wd to a suitable array")
 *     elif operator.isSequenceType(wd):
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_24, __pyx_t_9);
      __pyx_t_9 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.odr.__odrpack.odr");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_23);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":500
 *             ld2wd = 1
 *         except ValueError, e:
 *             raise ValueError("could not convert wd to a suitable array")             # <<<<<<<<<<<<<<
 *     elif operator.isSequenceType(wd):
 *         wd = np.PyArray_CopyFromObject(wd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
 */
        __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_10 = __site_call1_500_28->Target(__site_call1_500_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert wd to a suitable array"));
        __pyx_t_9 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
        __pyx_t_10 = nullptr;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_23);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
    goto __pyx_L24;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":501
 *         except ValueError, e:
 *             raise ValueError("could not convert wd to a suitable array")
 *     elif operator.isSequenceType(wd):             # <<<<<<<<<<<<<<
 *         wd = np.PyArray_CopyFromObject(wd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
 *         if wd is None:
 */
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_9 = __site_get_isSequenceType_501_17->Target(__site_get_isSequenceType_501_17, __pyx_t_10, __pyx_context);
  __pyx_t_10 = nullptr;
  __pyx_t_10 = __site_call1_501_32->Target(__site_call1_501_32, __pyx_context, __pyx_t_9, __pyx_v_wd);
  __pyx_t_9 = nullptr;
  __pyx_t_4 = __site_istrue_501_32->Target(__site_istrue_501_32, __pyx_t_10);
  __pyx_t_10 = nullptr;
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":502
 *             raise ValueError("could not convert wd to a suitable array")
 *     elif operator.isSequenceType(wd):
 *         wd = np.PyArray_CopyFromObject(wd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)             # <<<<<<<<<<<<<<
 *         if wd is None:
 *             raise ValueError("could not convert wd to a suitable array")
 */
    __pyx_t_10 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_9 = PyArray_CopyFromObject(__pyx_v_wd, __pyx_t_10, __pyx_int_1, __pyx_int_3); 
    __pyx_t_10 = nullptr;
    __pyx_v_wd = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":503
 *     elif operator.isSequenceType(wd):
 *         wd = np.PyArray_CopyFromObject(wd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
 *         if wd is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert wd to a suitable array")
 * 
 */
    __pyx_t_4 = (__pyx_v_wd == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":504
 *         wd = np.PyArray_CopyFromObject(wd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 3)
 *         if wd is None:
 *             raise ValueError("could not convert wd to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if wd.ndim == 1 and m == 1:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_504_28->Target(__site_call1_504_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert wd to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L25;
    }
    __pyx_L25:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":506
 *             raise ValueError("could not convert wd to a suitable array")
 * 
 *         if wd.ndim == 1 and m == 1:             # <<<<<<<<<<<<<<
 *             ldwd = n
 *             ld2wd = 1
 */
    __pyx_t_10 = __site_get_ndim_506_13->Target(__site_get_ndim_506_13, __pyx_v_wd, __pyx_context);
    __pyx_t_9 = __site_op_eq_506_19->Target(__site_op_eq_506_19, __pyx_t_10, __pyx_int_1);
    __pyx_t_10 = nullptr;
    __pyx_t_4 = __site_istrue_506_19->Target(__site_istrue_506_19, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_8 = (__pyx_v_m == 1);
      __pyx_t_3 = __pyx_t_8;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":507
 * 
 *         if wd.ndim == 1 and m == 1:
 *             ldwd = n             # <<<<<<<<<<<<<<
 *             ld2wd = 1
 *         elif wd.ndim == 1 and wd.shape[0] == m:
 */
      __pyx_v_ldwd = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":508
 *         if wd.ndim == 1 and m == 1:
 *             ldwd = n
 *             ld2wd = 1             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 1 and wd.shape[0] == m:
 *             # wd is a rank-1 array with diagonal weightings to be broadcast
 */
      __pyx_v_ld2wd = 1;
      goto __pyx_L26;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":509
 *             ldwd = n
 *             ld2wd = 1
 *         elif wd.ndim == 1 and wd.shape[0] == m:             # <<<<<<<<<<<<<<
 *             # wd is a rank-1 array with diagonal weightings to be broadcast
 *             # to all observations
 */
    __pyx_t_9 = __site_get_ndim_509_15->Target(__site_get_ndim_509_15, __pyx_v_wd, __pyx_context);
    __pyx_t_10 = __site_op_eq_509_21->Target(__site_op_eq_509_21, __pyx_t_9, __pyx_int_1);
    __pyx_t_9 = nullptr;
    __pyx_t_3 = __site_istrue_509_21->Target(__site_istrue_509_21, __pyx_t_10);
    __pyx_t_10 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_10 = __site_get_shape_509_32->Target(__site_get_shape_509_32, __pyx_v_wd, __pyx_context);
      __pyx_t_9 = __site_getindex_509_38->Target(__site_getindex_509_38, __pyx_t_10, ((System::Object^)0));
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __pyx_v_m;
      __pyx_t_11 = __site_op_eq_509_42->Target(__site_op_eq_509_42, __pyx_t_9, __pyx_t_10);
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_4 = __site_istrue_509_42->Target(__site_istrue_509_42, __pyx_t_11);
      __pyx_t_11 = nullptr;
      __pyx_t_8 = __pyx_t_4;
    } else {
      __pyx_t_8 = __pyx_t_3;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":512
 *             # wd is a rank-1 array with diagonal weightings to be broadcast
 *             # to all observations
 *             ldwd = 1             # <<<<<<<<<<<<<<
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, 1):
 */
      __pyx_v_ldwd = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":513
 *             # to all observations
 *             ldwd = 1
 *             ld2wd = 1             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 3 and wd.shape == (m, m, 1):
 *             # wd is a rank-3 array with the covariant weightings to be
 */
      __pyx_v_ld2wd = 1;
      goto __pyx_L26;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":514
 *             ldwd = 1
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, 1):             # <<<<<<<<<<<<<<
 *             # wd is a rank-3 array with the covariant weightings to be
 *             # broadcast to all observations
 */
    __pyx_t_11 = __site_get_ndim_514_15->Target(__site_get_ndim_514_15, __pyx_v_wd, __pyx_context);
    __pyx_t_10 = __site_op_eq_514_21->Target(__site_op_eq_514_21, __pyx_t_11, __pyx_int_3);
    __pyx_t_11 = nullptr;
    __pyx_t_8 = __site_istrue_514_21->Target(__site_istrue_514_21, __pyx_t_10);
    __pyx_t_10 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_10 = __site_get_shape_514_32->Target(__site_get_shape_514_32, __pyx_v_wd, __pyx_context);
      __pyx_t_11 = __pyx_v_m;
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_11, __pyx_t_9, __pyx_int_1});
      __pyx_t_11 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_514_39->Target(__site_op_eq_514_39, __pyx_t_10, __pyx_t_2);
      __pyx_t_10 = nullptr;
      __pyx_t_2 = nullptr;
      __pyx_t_3 = __site_istrue_514_39->Target(__site_istrue_514_39, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_4 = __pyx_t_3;
    } else {
      __pyx_t_4 = __pyx_t_8;
    }
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":517
 *             # wd is a rank-3 array with the covariant weightings to be
 *             # broadcast to all observations
 *             ldwd = 1             # <<<<<<<<<<<<<<
 *             ld2wd = m
 *         elif wd.ndim == 2 and wd.shape == (m, m):
 */
      __pyx_v_ldwd = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":518
 *             # broadcast to all observations
 *             ldwd = 1
 *             ld2wd = m             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 2 and wd.shape == (m, m):
 *             # wd is a rank-2 array wth the full covariant weightings to be
 */
      __pyx_v_ld2wd = __pyx_v_m;
      goto __pyx_L26;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":519
 *             ldwd = 1
 *             ld2wd = m
 *         elif wd.ndim == 2 and wd.shape == (m, m):             # <<<<<<<<<<<<<<
 *             # wd is a rank-2 array wth the full covariant weightings to be
 *             # broadcast to all observations
 */
    __pyx_t_9 = __site_get_ndim_519_15->Target(__site_get_ndim_519_15, __pyx_v_wd, __pyx_context);
    __pyx_t_2 = __site_op_eq_519_21->Target(__site_op_eq_519_21, __pyx_t_9, __pyx_int_2);
    __pyx_t_9 = nullptr;
    __pyx_t_4 = __site_istrue_519_21->Target(__site_istrue_519_21, __pyx_t_2);
    __pyx_t_2 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_2 = __site_get_shape_519_32->Target(__site_get_shape_519_32, __pyx_v_wd, __pyx_context);
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_10 = __pyx_v_m;
      __pyx_t_11 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_9, __pyx_t_10});
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __site_op_eq_519_39->Target(__site_op_eq_519_39, __pyx_t_2, __pyx_t_11);
      __pyx_t_2 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_8 = __site_istrue_519_39->Target(__site_istrue_519_39, __pyx_t_10);
      __pyx_t_10 = nullptr;
      __pyx_t_3 = __pyx_t_8;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":522
 *             # wd is a rank-2 array wth the full covariant weightings to be
 *             # broadcast to all observations
 *             ldwd = 1             # <<<<<<<<<<<<<<
 *             ld2wd = m
 *         elif wd.ndim == 2 and wd.shape == (m, n):
 */
      __pyx_v_ldwd = 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":523
 *             # broadcast to all observations
 *             ldwd = 1
 *             ld2wd = m             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 2 and wd.shape == (m, n):
 *             # wd is a rank-2 array with the diagonal element of the covariant
 */
      __pyx_v_ld2wd = __pyx_v_m;
      goto __pyx_L26;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":524
 *             ldwd = 1
 *             ld2wd = m
 *         elif wd.ndim == 2 and wd.shape == (m, n):             # <<<<<<<<<<<<<<
 *             # wd is a rank-2 array with the diagonal element of the covariant
 *             # weightings for each observation.
 */
    __pyx_t_10 = __site_get_ndim_524_15->Target(__site_get_ndim_524_15, __pyx_v_wd, __pyx_context);
    __pyx_t_11 = __site_op_eq_524_21->Target(__site_op_eq_524_21, __pyx_t_10, __pyx_int_2);
    __pyx_t_10 = nullptr;
    __pyx_t_3 = __site_istrue_524_21->Target(__site_istrue_524_21, __pyx_t_11);
    __pyx_t_11 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_11 = __site_get_shape_524_32->Target(__site_get_shape_524_32, __pyx_v_wd, __pyx_context);
      __pyx_t_10 = __pyx_v_m;
      __pyx_t_2 = __pyx_v_n;
      __pyx_t_9 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_10, __pyx_t_2});
      __pyx_t_10 = nullptr;
      __pyx_t_2 = nullptr;
      __pyx_t_2 = __site_op_eq_524_39->Target(__site_op_eq_524_39, __pyx_t_11, __pyx_t_9);
      __pyx_t_11 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_4 = __site_istrue_524_39->Target(__site_istrue_524_39, __pyx_t_2);
      __pyx_t_2 = nullptr;
      __pyx_t_8 = __pyx_t_4;
    } else {
      __pyx_t_8 = __pyx_t_3;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":527
 *             # wd is a rank-2 array with the diagonal element of the covariant
 *             # weightings for each observation.
 *             ldwd = n             # <<<<<<<<<<<<<<
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):
 */
      __pyx_v_ldwd = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":528
 *             # weightings for each observation.
 *             ldwd = n
 *             ld2wd = 1             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):
 *             ldwd = n
 */
      __pyx_v_ld2wd = 1;
      goto __pyx_L26;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":529
 *             ldwd = n
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):             # <<<<<<<<<<<<<<
 *             ldwd = n
 *             ld2wd = m
 */
    __pyx_t_2 = __site_get_ndim_529_15->Target(__site_get_ndim_529_15, __pyx_v_wd, __pyx_context);
    __pyx_t_9 = __site_op_eq_529_21->Target(__site_op_eq_529_21, __pyx_t_2, __pyx_int_3);
    __pyx_t_2 = nullptr;
    __pyx_t_8 = __site_istrue_529_21->Target(__site_istrue_529_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_9 = __site_get_shape_529_32->Target(__site_get_shape_529_32, __pyx_v_wd, __pyx_context);
      __pyx_t_2 = __pyx_v_m;
      __pyx_t_11 = __pyx_v_m;
      __pyx_t_10 = __pyx_v_n;
      __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_11, __pyx_t_10});
      __pyx_t_2 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __site_op_eq_529_39->Target(__site_op_eq_529_39, __pyx_t_9, __pyx_t_1);
      __pyx_t_9 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_3 = __site_istrue_529_39->Target(__site_istrue_529_39, __pyx_t_10);
      __pyx_t_10 = nullptr;
      __pyx_t_4 = __pyx_t_3;
    } else {
      __pyx_t_4 = __pyx_t_8;
    }
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":530
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):
 *             ldwd = n             # <<<<<<<<<<<<<<
 *             ld2wd = m
 *         else:
 */
      __pyx_v_ldwd = __pyx_v_n;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":531
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):
 *             ldwd = n
 *             ld2wd = m             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert wd to a suitable array")
 */
      __pyx_v_ld2wd = __pyx_v_m;
      goto __pyx_L26;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":533
 *             ld2wd = m
 *         else:
 *             raise ValueError("could not convert wd to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if ifixb is None:
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_533_28->Target(__site_call1_533_28, __pyx_context, __pyx_t_10, ((System::Object^)"could not convert wd to a suitable array"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
    }
    __pyx_L26:;
    goto __pyx_L24;
  }
  __pyx_L24:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":535
 *             raise ValueError("could not convert wd to a suitable array")
 * 
 *     if ifixb is None:             # <<<<<<<<<<<<<<
 *         dim1[0] = npx
 *         ifixb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_INT, False)
 */
  __pyx_t_4 = (__pyx_v_ifixb == nullptr);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":536
 * 
 *     if ifixb is None:
 *         dim1[0] = npx             # <<<<<<<<<<<<<<
 *         ifixb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_INT, False)
 *         ifixb[0] = -1
 */
    (__pyx_v_dim1[0]) = __pyx_v_npx;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":537
 *     if ifixb is None:
 *         dim1[0] = npx
 *         ifixb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ifixb[0] = -1
 *     else:
 */
    __pyx_t_1 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_INT, 0); 
    __pyx_v_ifixb = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":538
 *         dim1[0] = npx
 *         ifixb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_INT, False)
 *         ifixb[0] = -1             # <<<<<<<<<<<<<<
 *     else:
 *         ifixb = np.PyArray_CopyFromObject(ifixb, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)
 */
    __site_setindex_538_13->Target(__site_setindex_538_13, __pyx_v_ifixb, ((System::Object^)0), __pyx_int_neg_1);
    goto __pyx_L27;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":540
 *         ifixb[0] = -1
 *     else:
 *         ifixb = np.PyArray_CopyFromObject(ifixb, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)             # <<<<<<<<<<<<<<
 *         if ifixb is None or ifixb.shape[0] != npx:
 *             raise ValueError("could not convert ifixb to a suitable array")
 */
    __pyx_t_1 = PyArray_DescrFromType(NPY_INT); 
    __pyx_t_10 = PyArray_CopyFromObject(__pyx_v_ifixb, __pyx_t_1, __pyx_int_1, __pyx_int_1); 
    __pyx_t_1 = nullptr;
    __pyx_v_ifixb = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":541
 *     else:
 *         ifixb = np.PyArray_CopyFromObject(ifixb, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)
 *         if ifixb is None or ifixb.shape[0] != npx:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert ifixb to a suitable array")
 * 
 */
    __pyx_t_4 = (__pyx_v_ifixb == nullptr);
    if (!__pyx_t_4) {
      __pyx_t_10 = __site_get_shape_541_33->Target(__site_get_shape_541_33, __pyx_v_ifixb, __pyx_context);
      __pyx_t_1 = __site_getindex_541_39->Target(__site_getindex_541_39, __pyx_t_10, ((System::Object^)0));
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __pyx_v_npx;
      __pyx_t_9 = __site_op_ne_541_43->Target(__site_op_ne_541_43, __pyx_t_1, __pyx_t_10);
      __pyx_t_1 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_8 = __site_istrue_541_43->Target(__site_istrue_541_43, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_3 = __pyx_t_8;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":542
 *         ifixb = np.PyArray_CopyFromObject(ifixb, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)
 *         if ifixb is None or ifixb.shape[0] != npx:
 *             raise ValueError("could not convert ifixb to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if ifixx is None:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_542_28->Target(__site_call1_542_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert ifixb to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L28;
    }
    __pyx_L28:;
  }
  __pyx_L27:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":544
 *             raise ValueError("could not convert ifixb to a suitable array")
 * 
 *     if ifixx is None:             # <<<<<<<<<<<<<<
 *         dim2[0] = m
 *         dim2[1] = 1
 */
  __pyx_t_3 = (__pyx_v_ifixx == nullptr);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":545
 * 
 *     if ifixx is None:
 *         dim2[0] = m             # <<<<<<<<<<<<<<
 *         dim2[1] = 1
 *         ifixx = np.PyArray_EMPTY(2, &dim2[0], np.NPY_INT, False)
 */
    (__pyx_v_dim2[0]) = __pyx_v_m;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":546
 *     if ifixx is None:
 *         dim2[0] = m
 *         dim2[1] = 1             # <<<<<<<<<<<<<<
 *         ifixx = np.PyArray_EMPTY(2, &dim2[0], np.NPY_INT, False)
 *         ifixx[0,0] = -1
 */
    (__pyx_v_dim2[1]) = 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":547
 *         dim2[0] = m
 *         dim2[1] = 1
 *         ifixx = np.PyArray_EMPTY(2, &dim2[0], np.NPY_INT, False)             # <<<<<<<<<<<<<<
 *         ifixx[0,0] = -1
 *         ldifx = 1
 */
    __pyx_t_10 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_INT, 0); 
    __pyx_v_ifixx = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":548
 *         dim2[1] = 1
 *         ifixx = np.PyArray_EMPTY(2, &dim2[0], np.NPY_INT, False)
 *         ifixx[0,0] = -1             # <<<<<<<<<<<<<<
 *         ldifx = 1
 *     else:
 */
    __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0});
    __site_setindex_548_13->Target(__site_setindex_548_13, __pyx_v_ifixx, __pyx_t_10, __pyx_int_neg_1);
    __pyx_t_10 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":549
 *         ifixx = np.PyArray_EMPTY(2, &dim2[0], np.NPY_INT, False)
 *         ifixx[0,0] = -1
 *         ldifx = 1             # <<<<<<<<<<<<<<
 *     else:
 *         ifixx = np.PyArray_CopyFromObject(ifixx, np.PyArray_DescrFromType(np.NPY_INT), 1, 2)
 */
    __pyx_v_ldifx = 1;
    goto __pyx_L29;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":551
 *         ldifx = 1
 *     else:
 *         ifixx = np.PyArray_CopyFromObject(ifixx, np.PyArray_DescrFromType(np.NPY_INT), 1, 2)             # <<<<<<<<<<<<<<
 *         if ifixx is None:
 *             raise ValueError("could not convert ifixx to a suitable array")
 */
    __pyx_t_10 = PyArray_DescrFromType(NPY_INT); 
    __pyx_t_9 = PyArray_CopyFromObject(__pyx_v_ifixx, __pyx_t_10, __pyx_int_1, __pyx_int_2); 
    __pyx_t_10 = nullptr;
    __pyx_v_ifixx = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":552
 *     else:
 *         ifixx = np.PyArray_CopyFromObject(ifixx, np.PyArray_DescrFromType(np.NPY_INT), 1, 2)
 *         if ifixx is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert ifixx to a suitable array")
 * 
 */
    __pyx_t_3 = (__pyx_v_ifixx == nullptr);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":553
 *         ifixx = np.PyArray_CopyFromObject(ifixx, np.PyArray_DescrFromType(np.NPY_INT), 1, 2)
 *         if ifixx is None:
 *             raise ValueError("could not convert ifixx to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if ifixx.ndim == 1 and ifixx.shape[0] == m:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_553_28->Target(__site_call1_553_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert ifixx to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L30;
    }
    __pyx_L30:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":555
 *             raise ValueError("could not convert ifixx to a suitable array")
 * 
 *         if ifixx.ndim == 1 and ifixx.shape[0] == m:             # <<<<<<<<<<<<<<
 *             ldifx = 1
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
 */
    __pyx_t_10 = __site_get_ndim_555_16->Target(__site_get_ndim_555_16, __pyx_v_ifixx, __pyx_context);
    __pyx_t_9 = __site_op_eq_555_22->Target(__site_op_eq_555_22, __pyx_t_10, __pyx_int_1);
    __pyx_t_10 = nullptr;
    __pyx_t_3 = __site_istrue_555_22->Target(__site_istrue_555_22, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_9 = __site_get_shape_555_36->Target(__site_get_shape_555_36, __pyx_v_ifixx, __pyx_context);
      __pyx_t_10 = __site_getindex_555_42->Target(__site_getindex_555_42, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_1 = __site_op_eq_555_46->Target(__site_op_eq_555_46, __pyx_t_10, __pyx_t_9);
      __pyx_t_10 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_4 = __site_istrue_555_46->Target(__site_istrue_555_46, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_8 = __pyx_t_4;
    } else {
      __pyx_t_8 = __pyx_t_3;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":556
 * 
 *         if ifixx.ndim == 1 and ifixx.shape[0] == m:
 *             ldifx = 1             # <<<<<<<<<<<<<<
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
 *             ldifx = n
 */
      __pyx_v_ldifx = 1;
      goto __pyx_L31;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":557
 *         if ifixx.ndim == 1 and ifixx.shape[0] == m:
 *             ldifx = 1
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:             # <<<<<<<<<<<<<<
 *             ldifx = n
 *         elif ifixx.ndim == 2 and ifixx.shape == (m, n):
 */
    __pyx_t_1 = __site_get_ndim_557_18->Target(__site_get_ndim_557_18, __pyx_v_ifixx, __pyx_context);
    __pyx_t_9 = __site_op_eq_557_24->Target(__site_op_eq_557_24, __pyx_t_1, __pyx_int_1);
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_557_24->Target(__site_istrue_557_24, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_9 = __site_get_shape_557_38->Target(__site_get_shape_557_38, __pyx_v_ifixx, __pyx_context);
      __pyx_t_1 = __site_getindex_557_44->Target(__site_getindex_557_44, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_n;
      __pyx_t_10 = __site_op_eq_557_48->Target(__site_op_eq_557_48, __pyx_t_1, __pyx_t_9);
      __pyx_t_1 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_3 = __site_istrue_557_48->Target(__site_istrue_557_48, __pyx_t_10);
      __pyx_t_10 = nullptr;
      if (__pyx_t_3) {
        __pyx_t_4 = (__pyx_v_m == 1);
        __pyx_t_12 = __pyx_t_4;
      } else {
        __pyx_t_12 = __pyx_t_3;
      }
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":558
 *             ldifx = 1
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
 *             ldifx = n             # <<<<<<<<<<<<<<
 *         elif ifixx.ndim == 2 and ifixx.shape == (m, n):
 *             ldifx = n
 */
      __pyx_v_ldifx = __pyx_v_n;
      goto __pyx_L31;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":559
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
 *             ldifx = n
 *         elif ifixx.ndim == 2 and ifixx.shape == (m, n):             # <<<<<<<<<<<<<<
 *             ldifx = n
 *         else:
 */
    __pyx_t_10 = __site_get_ndim_559_18->Target(__site_get_ndim_559_18, __pyx_v_ifixx, __pyx_context);
    __pyx_t_9 = __site_op_eq_559_24->Target(__site_op_eq_559_24, __pyx_t_10, __pyx_int_2);
    __pyx_t_10 = nullptr;
    __pyx_t_3 = __site_istrue_559_24->Target(__site_istrue_559_24, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_9 = __site_get_shape_559_38->Target(__site_get_shape_559_38, __pyx_v_ifixx, __pyx_context);
      __pyx_t_10 = __pyx_v_m;
      __pyx_t_1 = __pyx_v_n;
      __pyx_t_11 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_10, __pyx_t_1});
      __pyx_t_10 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __site_op_eq_559_45->Target(__site_op_eq_559_45, __pyx_t_9, __pyx_t_11);
      __pyx_t_9 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_8 = __site_istrue_559_45->Target(__site_istrue_559_45, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_12 = __pyx_t_8;
    } else {
      __pyx_t_12 = __pyx_t_3;
    }
    if (__pyx_t_12) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":560
 *             ldifx = n
 *         elif ifixx.ndim == 2 and ifixx.shape == (m, n):
 *             ldifx = n             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert ifixx to a suitable array")
 */
      __pyx_v_ldifx = __pyx_v_n;
      goto __pyx_L31;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":562
 *             ldifx = n
 *         else:
 *             raise ValueError("could not convert ifixx to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if errfile is not None:
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_11 = __site_call1_562_28->Target(__site_call1_562_28, __pyx_context, __pyx_t_1, ((System::Object^)"could not convert ifixx to a suitable array"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_11, nullptr, nullptr);
      __pyx_t_11 = nullptr;
    }
    __pyx_L31:;
  }
  __pyx_L29:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":564
 *             raise ValueError("could not convert ifixx to a suitable array")
 * 
 *     if errfile is not None:             # <<<<<<<<<<<<<<
 *         # Call Fortran's OPEN to open the file with a logical unit of 18.
 *         lunerr = 18;
 */
  __pyx_t_12 = (__pyx_v_errfile != nullptr);
  if (__pyx_t_12) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":566
 *     if errfile is not None:
 *         # Call Fortran's OPEN to open the file with a logical unit of 18.
 *         lunerr = 18;             # <<<<<<<<<<<<<<
 *         dluno(&lunerr, errfile, len(errfile))
 * 
 */
    __pyx_v_lunerr = 18;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":567
 *         # Call Fortran's OPEN to open the file with a logical unit of 18.
 *         lunerr = 18;
 *         dluno(&lunerr, errfile, len(errfile))             # <<<<<<<<<<<<<<
 * 
 *     if rptfile is not None:
 */
    __pyx_t_26 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_errfile));
    __pyx_t_25 = static_cast<char *>(__pyx_t_26.ToPointer());
    __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "len");
    __pyx_t_1 = __site_call1_567_35->Target(__site_call1_567_35, __pyx_context, __pyx_t_11, __pyx_v_errfile);
    __pyx_t_11 = nullptr;
    __pyx_t_27 = __site_cvt_cvt_int_567_35->Target(__site_cvt_cvt_int_567_35, __pyx_t_1);
    __pyx_t_1 = nullptr;
    F_FUNC(dluno, DLUNO)((&__pyx_v_lunerr), __pyx_t_25, __pyx_t_27);
    InteropServices::Marshal::FreeHGlobal(__pyx_t_26);
    goto __pyx_L32;
  }
  __pyx_L32:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":569
 *         dluno(&lunerr, errfile, len(errfile))
 * 
 *     if rptfile is not None:             # <<<<<<<<<<<<<<
 *         lunrpt = 19
 *         dluno(&lunrpt, rptfile, len(rptfile))
 */
  __pyx_t_12 = (__pyx_v_rptfile != nullptr);
  if (__pyx_t_12) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":570
 * 
 *     if rptfile is not None:
 *         lunrpt = 19             # <<<<<<<<<<<<<<
 *         dluno(&lunrpt, rptfile, len(rptfile))
 * 
 */
    __pyx_v_lunrpt = 19;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":571
 *     if rptfile is not None:
 *         lunrpt = 19
 *         dluno(&lunrpt, rptfile, len(rptfile))             # <<<<<<<<<<<<<<
 * 
 *     if stpb is None:
 */
    __pyx_t_26 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_rptfile));
    __pyx_t_28 = static_cast<char *>(__pyx_t_26.ToPointer());
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
    __pyx_t_11 = __site_call1_571_35->Target(__site_call1_571_35, __pyx_context, __pyx_t_1, __pyx_v_rptfile);
    __pyx_t_1 = nullptr;
    __pyx_t_29 = __site_cvt_cvt_int_571_35->Target(__site_cvt_cvt_int_571_35, __pyx_t_11);
    __pyx_t_11 = nullptr;
    F_FUNC(dluno, DLUNO)((&__pyx_v_lunrpt), __pyx_t_28, __pyx_t_29);
    InteropServices::Marshal::FreeHGlobal(__pyx_t_26);
    goto __pyx_L33;
  }
  __pyx_L33:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":573
 *         dluno(&lunrpt, rptfile, len(rptfile))
 * 
 *     if stpb is None:             # <<<<<<<<<<<<<<
 *         dim1[0] = npx
 *         stpb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 */
  __pyx_t_12 = (__pyx_v_stpb == nullptr);
  if (__pyx_t_12) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":574
 * 
 *     if stpb is None:
 *         dim1[0] = npx             # <<<<<<<<<<<<<<
 *         stpb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         stpb[0] = 0.0
 */
    (__pyx_v_dim1[0]) = __pyx_v_npx;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":575
 *     if stpb is None:
 *         dim1[0] = npx
 *         stpb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         stpb[0] = 0.0
 *     else:
 */
    __pyx_t_11 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
    __pyx_v_stpb = __pyx_t_11;
    __pyx_t_11 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":576
 *         dim1[0] = npx
 *         stpb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         stpb[0] = 0.0             # <<<<<<<<<<<<<<
 *     else:
 *         stpb = np.PyArray_CopyFromObject(stpb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 */
    __pyx_t_11 = 0.0;
    __site_setindex_576_12->Target(__site_setindex_576_12, __pyx_v_stpb, ((System::Object^)0), __pyx_t_11);
    __pyx_t_11 = nullptr;
    goto __pyx_L34;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":578
 *         stpb[0] = 0.0
 *     else:
 *         stpb = np.PyArray_CopyFromObject(stpb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)             # <<<<<<<<<<<<<<
 *         if stpb is None or stpb.shape[0] != npx:
 *             raise ValueError("could not convert stpb to a suitable array")
 */
    __pyx_t_11 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_1 = PyArray_CopyFromObject(__pyx_v_stpb, __pyx_t_11, __pyx_int_1, __pyx_int_1); 
    __pyx_t_11 = nullptr;
    __pyx_v_stpb = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":579
 *     else:
 *         stpb = np.PyArray_CopyFromObject(stpb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *         if stpb is None or stpb.shape[0] != npx:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert stpb to a suitable array")
 * 
 */
    __pyx_t_12 = (__pyx_v_stpb == nullptr);
    if (!__pyx_t_12) {
      __pyx_t_1 = __site_get_shape_579_31->Target(__site_get_shape_579_31, __pyx_v_stpb, __pyx_context);
      __pyx_t_11 = __site_getindex_579_37->Target(__site_getindex_579_37, __pyx_t_1, ((System::Object^)0));
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __pyx_v_npx;
      __pyx_t_9 = __site_op_ne_579_41->Target(__site_op_ne_579_41, __pyx_t_11, __pyx_t_1);
      __pyx_t_11 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_3 = __site_istrue_579_41->Target(__site_istrue_579_41, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_8 = __pyx_t_3;
    } else {
      __pyx_t_8 = __pyx_t_12;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":580
 *         stpb = np.PyArray_CopyFromObject(stpb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *         if stpb is None or stpb.shape[0] != npx:
 *             raise ValueError("could not convert stpb to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if stpd is None:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_580_28->Target(__site_call1_580_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert stpb to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L35;
    }
    __pyx_L35:;
  }
  __pyx_L34:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":582
 *             raise ValueError("could not convert stpb to a suitable array")
 * 
 *     if stpd is None:             # <<<<<<<<<<<<<<
 *         dim2[0] = 1
 *         dim2[1] = m
 */
  __pyx_t_8 = (__pyx_v_stpd == nullptr);
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":583
 * 
 *     if stpd is None:
 *         dim2[0] = 1             # <<<<<<<<<<<<<<
 *         dim2[1] = m
 *         stpd = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 */
    (__pyx_v_dim2[0]) = 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":584
 *     if stpd is None:
 *         dim2[0] = 1
 *         dim2[1] = m             # <<<<<<<<<<<<<<
 *         stpd = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *         stpd[0,0] = 0.0
 */
    (__pyx_v_dim2[1]) = __pyx_v_m;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":585
 *         dim2[0] = 1
 *         dim2[1] = m
 *         stpd = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         stpd[0,0] = 0.0
 *         ldstpd = 1
 */
    __pyx_t_1 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_DOUBLE, 0); 
    __pyx_v_stpd = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":586
 *         dim2[1] = m
 *         stpd = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *         stpd[0,0] = 0.0             # <<<<<<<<<<<<<<
 *         ldstpd = 1
 *     else:
 */
    __pyx_t_1 = 0.0;
    __pyx_t_9 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0});
    __site_setindex_586_12->Target(__site_setindex_586_12, __pyx_v_stpd, __pyx_t_9, __pyx_t_1);
    __pyx_t_9 = nullptr;
    __pyx_t_1 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":587
 *         stpd = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *         stpd[0,0] = 0.0
 *         ldstpd = 1             # <<<<<<<<<<<<<<
 *     else:
 *         stpd = np.PyArray_CopyFromObject(stpd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 */
    __pyx_v_ldstpd = 1;
    goto __pyx_L36;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":589
 *         ldstpd = 1
 *     else:
 *         stpd = np.PyArray_CopyFromObject(stpd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)             # <<<<<<<<<<<<<<
 *         if stpd is None:
 *             raise ValueError("could not convert stpd to a suitable array")
 */
    __pyx_t_1 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_9 = PyArray_CopyFromObject(__pyx_v_stpd, __pyx_t_1, __pyx_int_1, __pyx_int_2); 
    __pyx_t_1 = nullptr;
    __pyx_v_stpd = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":590
 *     else:
 *         stpd = np.PyArray_CopyFromObject(stpd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if stpd is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert stpd to a suitable array")
 * 
 */
    __pyx_t_8 = (__pyx_v_stpd == nullptr);
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":591
 *         stpd = np.PyArray_CopyFromObject(stpd, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if stpd is None:
 *             raise ValueError("could not convert stpd to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if stpd.ndim == 1 and stpd.shape[0] == m:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_591_28->Target(__site_call1_591_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert stpd to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L37;
    }
    __pyx_L37:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":593
 *             raise ValueError("could not convert stpd to a suitable array")
 * 
 *         if stpd.ndim == 1 and stpd.shape[0] == m:             # <<<<<<<<<<<<<<
 *             ldstpd = 1
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
 */
    __pyx_t_1 = __site_get_ndim_593_15->Target(__site_get_ndim_593_15, __pyx_v_stpd, __pyx_context);
    __pyx_t_9 = __site_op_eq_593_21->Target(__site_op_eq_593_21, __pyx_t_1, __pyx_int_1);
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_593_21->Target(__site_istrue_593_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_9 = __site_get_shape_593_34->Target(__site_get_shape_593_34, __pyx_v_stpd, __pyx_context);
      __pyx_t_1 = __site_getindex_593_40->Target(__site_getindex_593_40, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_11 = __site_op_eq_593_44->Target(__site_op_eq_593_44, __pyx_t_1, __pyx_t_9);
      __pyx_t_1 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_12 = __site_istrue_593_44->Target(__site_istrue_593_44, __pyx_t_11);
      __pyx_t_11 = nullptr;
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":594
 * 
 *         if stpd.ndim == 1 and stpd.shape[0] == m:
 *             ldstpd = 1             # <<<<<<<<<<<<<<
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
 *             ldstpd = n
 */
      __pyx_v_ldstpd = 1;
      goto __pyx_L38;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":595
 *         if stpd.ndim == 1 and stpd.shape[0] == m:
 *             ldstpd = 1
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:             # <<<<<<<<<<<<<<
 *             ldstpd = n
 *         elif stpd.ndim == 2 and stpd.shape == (n, m):
 */
    __pyx_t_11 = __site_get_ndim_595_17->Target(__site_get_ndim_595_17, __pyx_v_stpd, __pyx_context);
    __pyx_t_9 = __site_op_eq_595_23->Target(__site_op_eq_595_23, __pyx_t_11, __pyx_int_1);
    __pyx_t_11 = nullptr;
    __pyx_t_3 = __site_istrue_595_23->Target(__site_istrue_595_23, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_9 = __site_get_shape_595_36->Target(__site_get_shape_595_36, __pyx_v_stpd, __pyx_context);
      __pyx_t_11 = __site_getindex_595_42->Target(__site_getindex_595_42, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_n;
      __pyx_t_1 = __site_op_eq_595_46->Target(__site_op_eq_595_46, __pyx_t_11, __pyx_t_9);
      __pyx_t_11 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_8 = __site_istrue_595_46->Target(__site_istrue_595_46, __pyx_t_1);
      __pyx_t_1 = nullptr;
      if (__pyx_t_8) {
        __pyx_t_12 = (__pyx_v_m == 1);
        __pyx_t_4 = __pyx_t_12;
      } else {
        __pyx_t_4 = __pyx_t_8;
      }
      __pyx_t_8 = __pyx_t_4;
    } else {
      __pyx_t_8 = __pyx_t_3;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":596
 *             ldstpd = 1
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
 *             ldstpd = n             # <<<<<<<<<<<<<<
 *         elif stpd.ndim == 2 and stpd.shape == (n, m):
 *             ldstpd = n
 */
      __pyx_v_ldstpd = __pyx_v_n;
      goto __pyx_L38;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":597
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
 *             ldstpd = n
 *         elif stpd.ndim == 2 and stpd.shape == (n, m):             # <<<<<<<<<<<<<<
 *             ldstpd = n
 *         else:
 */
    __pyx_t_1 = __site_get_ndim_597_17->Target(__site_get_ndim_597_17, __pyx_v_stpd, __pyx_context);
    __pyx_t_9 = __site_op_eq_597_23->Target(__site_op_eq_597_23, __pyx_t_1, __pyx_int_2);
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_597_23->Target(__site_istrue_597_23, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_9 = __site_get_shape_597_36->Target(__site_get_shape_597_36, __pyx_v_stpd, __pyx_context);
      __pyx_t_1 = __pyx_v_n;
      __pyx_t_11 = __pyx_v_m;
      __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_11});
      __pyx_t_1 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_11 = __site_op_eq_597_43->Target(__site_op_eq_597_43, __pyx_t_9, __pyx_t_10);
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_3 = __site_istrue_597_43->Target(__site_istrue_597_43, __pyx_t_11);
      __pyx_t_11 = nullptr;
      __pyx_t_4 = __pyx_t_3;
    } else {
      __pyx_t_4 = __pyx_t_8;
    }
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":598
 *             ldstpd = n
 *         elif stpd.ndim == 2 and stpd.shape == (n, m):
 *             ldstpd = n             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert stpd to a suitable array")
 */
      __pyx_v_ldstpd = __pyx_v_n;
      goto __pyx_L38;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":600
 *             ldstpd = n
 *         else:
 *             raise ValueError("could not convert stpd to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if sclb is None:
 */
      __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_600_28->Target(__site_call1_600_28, __pyx_context, __pyx_t_11, ((System::Object^)"could not convert stpd to a suitable array"));
      __pyx_t_11 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
    }
    __pyx_L38:;
  }
  __pyx_L36:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":602
 *             raise ValueError("could not convert stpd to a suitable array")
 * 
 *     if sclb is None:             # <<<<<<<<<<<<<<
 *         dim1[0] = npx
 *         sclb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 */
  __pyx_t_4 = (__pyx_v_sclb == nullptr);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":603
 * 
 *     if sclb is None:
 *         dim1[0] = npx             # <<<<<<<<<<<<<<
 *         sclb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         sclb[0] = 0.0
 */
    (__pyx_v_dim1[0]) = __pyx_v_npx;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":604
 *     if sclb is None:
 *         dim1[0] = npx
 *         sclb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         sclb[0] = 0.0
 *     else:
 */
    __pyx_t_10 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
    __pyx_v_sclb = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":605
 *         dim1[0] = npx
 *         sclb = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 *         sclb[0] = 0.0             # <<<<<<<<<<<<<<
 *     else:
 *         sclb = np.PyArray_CopyFromObject(sclb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 */
    __pyx_t_10 = 0.0;
    __site_setindex_605_12->Target(__site_setindex_605_12, __pyx_v_sclb, ((System::Object^)0), __pyx_t_10);
    __pyx_t_10 = nullptr;
    goto __pyx_L39;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":607
 *         sclb[0] = 0.0
 *     else:
 *         sclb = np.PyArray_CopyFromObject(sclb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)             # <<<<<<<<<<<<<<
 *         if sclb is None or sclb.shape[0] != npx:
 *             raise ValueError("could not convert sclb to a suitable array")
 */
    __pyx_t_10 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_11 = PyArray_CopyFromObject(__pyx_v_sclb, __pyx_t_10, __pyx_int_1, __pyx_int_1); 
    __pyx_t_10 = nullptr;
    __pyx_v_sclb = __pyx_t_11;
    __pyx_t_11 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":608
 *     else:
 *         sclb = np.PyArray_CopyFromObject(sclb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *         if sclb is None or sclb.shape[0] != npx:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert sclb to a suitable array")
 * 
 */
    __pyx_t_4 = (__pyx_v_sclb == nullptr);
    if (!__pyx_t_4) {
      __pyx_t_11 = __site_get_shape_608_31->Target(__site_get_shape_608_31, __pyx_v_sclb, __pyx_context);
      __pyx_t_10 = __site_getindex_608_37->Target(__site_getindex_608_37, __pyx_t_11, ((System::Object^)0));
      __pyx_t_11 = nullptr;
      __pyx_t_11 = __pyx_v_npx;
      __pyx_t_9 = __site_op_ne_608_41->Target(__site_op_ne_608_41, __pyx_t_10, __pyx_t_11);
      __pyx_t_10 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_8 = __site_istrue_608_41->Target(__site_istrue_608_41, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_3 = __pyx_t_8;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":609
 *         sclb = np.PyArray_CopyFromObject(sclb, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *         if sclb is None or sclb.shape[0] != npx:
 *             raise ValueError("could not convert sclb to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if scld is None:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_11 = __site_call1_609_28->Target(__site_call1_609_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert sclb to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_11, nullptr, nullptr);
      __pyx_t_11 = nullptr;
      goto __pyx_L40;
    }
    __pyx_L40:;
  }
  __pyx_L39:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":611
 *             raise ValueError("could not convert sclb to a suitable array")
 * 
 *     if scld is None:             # <<<<<<<<<<<<<<
 *         dim2[0] = 1
 *         dim2[1] = n
 */
  __pyx_t_3 = (__pyx_v_scld == nullptr);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":612
 * 
 *     if scld is None:
 *         dim2[0] = 1             # <<<<<<<<<<<<<<
 *         dim2[1] = n
 *         scld = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 */
    (__pyx_v_dim2[0]) = 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":613
 *     if scld is None:
 *         dim2[0] = 1
 *         dim2[1] = n             # <<<<<<<<<<<<<<
 *         scld = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *         scld[0,0] = 0.0
 */
    (__pyx_v_dim2[1]) = __pyx_v_n;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":614
 *         dim2[0] = 1
 *         dim2[1] = n
 *         scld = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 *         scld[0,0] = 0.0
 *         ldscld = 1
 */
    __pyx_t_11 = PyArray_EMPTY(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), NPY_DOUBLE, 0); 
    __pyx_v_scld = __pyx_t_11;
    __pyx_t_11 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":615
 *         dim2[1] = n
 *         scld = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *         scld[0,0] = 0.0             # <<<<<<<<<<<<<<
 *         ldscld = 1
 *     else:
 */
    __pyx_t_11 = 0.0;
    __pyx_t_9 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0});
    __site_setindex_615_12->Target(__site_setindex_615_12, __pyx_v_scld, __pyx_t_9, __pyx_t_11);
    __pyx_t_9 = nullptr;
    __pyx_t_11 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":616
 *         scld = np.PyArray_EMPTY(2, &dim2[0], np.NPY_DOUBLE, False)
 *         scld[0,0] = 0.0
 *         ldscld = 1             # <<<<<<<<<<<<<<
 *     else:
 *         scld = np.PyArray_CopyFromObject(scld, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 */
    __pyx_v_ldscld = 1;
    goto __pyx_L41;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":618
 *         ldscld = 1
 *     else:
 *         scld = np.PyArray_CopyFromObject(scld, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)             # <<<<<<<<<<<<<<
 *         if scld is None:
 *             raise ValueError("could not convert scld to a suitable array")
 */
    __pyx_t_11 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_9 = PyArray_CopyFromObject(__pyx_v_scld, __pyx_t_11, __pyx_int_1, __pyx_int_2); 
    __pyx_t_11 = nullptr;
    __pyx_v_scld = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":619
 *     else:
 *         scld = np.PyArray_CopyFromObject(scld, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if scld is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert scld to a suitable array")
 * 
 */
    __pyx_t_3 = (__pyx_v_scld == nullptr);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":620
 *         scld = np.PyArray_CopyFromObject(scld, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 2)
 *         if scld is None:
 *             raise ValueError("could not convert scld to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if scld.ndim == 1 and scld.shape[0] == m:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_11 = __site_call1_620_28->Target(__site_call1_620_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert scld to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_11, nullptr, nullptr);
      __pyx_t_11 = nullptr;
      goto __pyx_L42;
    }
    __pyx_L42:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":622
 *             raise ValueError("could not convert scld to a suitable array")
 * 
 *         if scld.ndim == 1 and scld.shape[0] == m:             # <<<<<<<<<<<<<<
 *             ldscld = 1
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
 */
    __pyx_t_11 = __site_get_ndim_622_15->Target(__site_get_ndim_622_15, __pyx_v_scld, __pyx_context);
    __pyx_t_9 = __site_op_eq_622_21->Target(__site_op_eq_622_21, __pyx_t_11, __pyx_int_1);
    __pyx_t_11 = nullptr;
    __pyx_t_3 = __site_istrue_622_21->Target(__site_istrue_622_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_9 = __site_get_shape_622_34->Target(__site_get_shape_622_34, __pyx_v_scld, __pyx_context);
      __pyx_t_11 = __site_getindex_622_40->Target(__site_getindex_622_40, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_10 = __site_op_eq_622_44->Target(__site_op_eq_622_44, __pyx_t_11, __pyx_t_9);
      __pyx_t_11 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_4 = __site_istrue_622_44->Target(__site_istrue_622_44, __pyx_t_10);
      __pyx_t_10 = nullptr;
      __pyx_t_8 = __pyx_t_4;
    } else {
      __pyx_t_8 = __pyx_t_3;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":623
 * 
 *         if scld.ndim == 1 and scld.shape[0] == m:
 *             ldscld = 1             # <<<<<<<<<<<<<<
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
 *             ldscld = n
 */
      __pyx_v_ldscld = 1;
      goto __pyx_L43;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":624
 *         if scld.ndim == 1 and scld.shape[0] == m:
 *             ldscld = 1
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:             # <<<<<<<<<<<<<<
 *             ldscld = n
 *         elif scld.ndim == 2 and scld.shape == (n, m):
 */
    __pyx_t_10 = __site_get_ndim_624_17->Target(__site_get_ndim_624_17, __pyx_v_scld, __pyx_context);
    __pyx_t_9 = __site_op_eq_624_23->Target(__site_op_eq_624_23, __pyx_t_10, __pyx_int_1);
    __pyx_t_10 = nullptr;
    __pyx_t_8 = __site_istrue_624_23->Target(__site_istrue_624_23, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_9 = __site_get_shape_624_36->Target(__site_get_shape_624_36, __pyx_v_scld, __pyx_context);
      __pyx_t_10 = __site_getindex_624_42->Target(__site_getindex_624_42, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_n;
      __pyx_t_11 = __site_op_eq_624_46->Target(__site_op_eq_624_46, __pyx_t_10, __pyx_t_9);
      __pyx_t_10 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_3 = __site_istrue_624_46->Target(__site_istrue_624_46, __pyx_t_11);
      __pyx_t_11 = nullptr;
      if (__pyx_t_3) {
        __pyx_t_4 = (__pyx_v_m == 1);
        __pyx_t_12 = __pyx_t_4;
      } else {
        __pyx_t_12 = __pyx_t_3;
      }
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":625
 *             ldscld = 1
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
 *             ldscld = n             # <<<<<<<<<<<<<<
 *         elif scld.ndim == 2 and scld.shape == (n, m):
 *             ldscld = n
 */
      __pyx_v_ldscld = __pyx_v_n;
      goto __pyx_L43;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":626
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
 *             ldscld = n
 *         elif scld.ndim == 2 and scld.shape == (n, m):             # <<<<<<<<<<<<<<
 *             ldscld = n
 *         else:
 */
    __pyx_t_11 = __site_get_ndim_626_17->Target(__site_get_ndim_626_17, __pyx_v_scld, __pyx_context);
    __pyx_t_9 = __site_op_eq_626_23->Target(__site_op_eq_626_23, __pyx_t_11, __pyx_int_2);
    __pyx_t_11 = nullptr;
    __pyx_t_3 = __site_istrue_626_23->Target(__site_istrue_626_23, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_9 = __site_get_shape_626_36->Target(__site_get_shape_626_36, __pyx_v_scld, __pyx_context);
      __pyx_t_11 = __pyx_v_n;
      __pyx_t_10 = __pyx_v_m;
      __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_11, __pyx_t_10});
      __pyx_t_11 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __site_op_eq_626_43->Target(__site_op_eq_626_43, __pyx_t_9, __pyx_t_1);
      __pyx_t_9 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_8 = __site_istrue_626_43->Target(__site_istrue_626_43, __pyx_t_10);
      __pyx_t_10 = nullptr;
      __pyx_t_12 = __pyx_t_8;
    } else {
      __pyx_t_12 = __pyx_t_3;
    }
    if (__pyx_t_12) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":627
 *             ldscld = n
 *         elif scld.ndim == 2 and scld.shape == (n, m):
 *             ldscld = n             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert scld to a suitable array")
 */
      __pyx_v_ldscld = __pyx_v_n;
      goto __pyx_L43;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":629
 *             ldscld = n
 *         else:
 *             raise ValueError("could not convert scld to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if job % 10 < 2:
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_629_28->Target(__site_call1_629_28, __pyx_context, __pyx_t_10, ((System::Object^)"could not convert scld to a suitable array"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
    }
    __pyx_L43:;
  }
  __pyx_L41:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":631
 *             raise ValueError("could not convert scld to a suitable array")
 * 
 *     if job % 10 < 2:             # <<<<<<<<<<<<<<
 *         # ODR not OLS
 *         lwork = \
 */
  __pyx_t_12 = (__Pyx_mod_long(__pyx_v_job, 10) < 2);
  if (__pyx_t_12) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":636
 *             18 + 11 * npx + npx * npx + m + m * m + 4 * n * nq + 6 * n * m + \
 *             2 * n * nq * npx + 2 * n * nq * m + nq * nq + 5 * nq + nq * (npx + m) + \
 *             ldwe * ld2we * nq             # <<<<<<<<<<<<<<
 *         isodr = 1
 *     else:
 */
    __pyx_v_lwork = ((((((((((((18 + (11 * __pyx_v_npx)) + (__pyx_v_npx * __pyx_v_npx)) + __pyx_v_m) + (__pyx_v_m * __pyx_v_m)) + ((4 * __pyx_v_n) * __pyx_v_nq)) + ((6 * __pyx_v_n) * __pyx_v_m)) + (((2 * __pyx_v_n) * __pyx_v_nq) * __pyx_v_npx)) + (((2 * __pyx_v_n) * __pyx_v_nq) * __pyx_v_m)) + (__pyx_v_nq * __pyx_v_nq)) + (5 * __pyx_v_nq)) + (__pyx_v_nq * (__pyx_v_npx + __pyx_v_m))) + ((__pyx_v_ldwe * __pyx_v_ld2we) * __pyx_v_nq));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":637
 *             2 * n * nq * npx + 2 * n * nq * m + nq * nq + 5 * nq + nq * (npx + m) + \
 *             ldwe * ld2we * nq
 *         isodr = 1             # <<<<<<<<<<<<<<
 *     else:
 *         # OLS, not ODR
 */
    __pyx_v_isodr = 1;
    goto __pyx_L44;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":642
 *         lwork = \
 *             18 + 11 * npx + npx * npx + m + m * m + 4 * n * nq + 2 * n * m + \
 *             2 * n * nq * npx + 5 * nq + nq * (npx + m) + ldwe * ld2we * nq             # <<<<<<<<<<<<<<
 *         isodr = 0
 * 
 */
    __pyx_v_lwork = ((((((((((18 + (11 * __pyx_v_npx)) + (__pyx_v_npx * __pyx_v_npx)) + __pyx_v_m) + (__pyx_v_m * __pyx_v_m)) + ((4 * __pyx_v_n) * __pyx_v_nq)) + ((2 * __pyx_v_n) * __pyx_v_m)) + (((2 * __pyx_v_n) * __pyx_v_nq) * __pyx_v_npx)) + (5 * __pyx_v_nq)) + (__pyx_v_nq * (__pyx_v_npx + __pyx_v_m))) + ((__pyx_v_ldwe * __pyx_v_ld2we) * __pyx_v_nq));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":643
 *             18 + 11 * npx + npx * npx + m + m * m + 4 * n * nq + 2 * n * m + \
 *             2 * n * nq * npx + 5 * nq + nq * (npx + m) + ldwe * ld2we * nq
 *         isodr = 0             # <<<<<<<<<<<<<<
 * 
 *     liwork = 20 + npx + nq * (npx + m)
 */
    __pyx_v_isodr = 0;
  }
  __pyx_L44:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":645
 *         isodr = 0
 * 
 *     liwork = 20 + npx + nq * (npx + m)             # <<<<<<<<<<<<<<
 * 
 *     if (job / 10000) % 10 >= 1:
 */
  __pyx_v_liwork = ((20 + __pyx_v_npx) + (__pyx_v_nq * (__pyx_v_npx + __pyx_v_m)));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":647
 *     liwork = 20 + npx + nq * (npx + m)
 * 
 *     if (job / 10000) % 10 >= 1:             # <<<<<<<<<<<<<<
 *         # Fit is a restart, make sure work and iwork are input
 *         if work is None or iwork is None:
 */
  __pyx_t_12 = (__Pyx_mod_long(__Pyx_div_long(__pyx_v_job, 10000), 10) >= 1);
  if (__pyx_t_12) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":649
 *     if (job / 10000) % 10 >= 1:
 *         # Fit is a restart, make sure work and iwork are input
 *         if work is None or iwork is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("need to input work and iwork arrays to restart")
 * 
 */
    __pyx_t_12 = (__pyx_v_work == nullptr);
    if (!__pyx_t_12) {
      __pyx_t_3 = (__pyx_v_iwork == nullptr);
      __pyx_t_8 = __pyx_t_3;
    } else {
      __pyx_t_8 = __pyx_t_12;
    }
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":650
 *         # Fit is a restart, make sure work and iwork are input
 *         if work is None or iwork is None:
 *             raise ValueError("need to input work and iwork arrays to restart")             # <<<<<<<<<<<<<<
 * 
 *     if (job / 1000) % 10 >= 1:
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_650_28->Target(__site_call1_650_28, __pyx_context, __pyx_t_1, ((System::Object^)"need to input work and iwork arrays to restart"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L46;
    }
    __pyx_L46:;
    goto __pyx_L45;
  }
  __pyx_L45:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":652
 *             raise ValueError("need to input work and iwork arrays to restart")
 * 
 *     if (job / 1000) % 10 >= 1:             # <<<<<<<<<<<<<<
 *         # delta should be supplied, make sure the user does
 *         if work is None:
 */
  __pyx_t_8 = (__Pyx_mod_long(__Pyx_div_long(__pyx_v_job, 1000), 10) >= 1);
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":654
 *     if (job / 1000) % 10 >= 1:
 *         # delta should be supplied, make sure the user does
 *         if work is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("need to input work array for delta initialization")
 * 
 */
    __pyx_t_8 = (__pyx_v_work == nullptr);
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":655
 *         # delta should be supplied, make sure the user does
 *         if work is None:
 *             raise ValueError("need to input work array for delta initialization")             # <<<<<<<<<<<<<<
 * 
 *     if work is not None:
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_655_28->Target(__site_call1_655_28, __pyx_context, __pyx_t_10, ((System::Object^)"need to input work array for delta initialization"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L48;
    }
    __pyx_L48:;
    goto __pyx_L47;
  }
  __pyx_L47:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":657
 *             raise ValueError("need to input work array for delta initialization")
 * 
 *     if work is not None:             # <<<<<<<<<<<<<<
 *         work = np.PyArray_CopyFromObject(work, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *         if work is None:
 */
  __pyx_t_8 = (__pyx_v_work != nullptr);
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":658
 * 
 *     if work is not None:
 *         work = np.PyArray_CopyFromObject(work, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)             # <<<<<<<<<<<<<<
 *         if work is None:
 *             raise ValueError("could not convert work to a suitable array")
 */
    __pyx_t_1 = PyArray_DescrFromType(NPY_DOUBLE); 
    __pyx_t_10 = PyArray_CopyFromObject(__pyx_v_work, __pyx_t_1, __pyx_int_1, __pyx_int_1); 
    __pyx_t_1 = nullptr;
    __pyx_v_work = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":659
 *     if work is not None:
 *         work = np.PyArray_CopyFromObject(work, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *         if work is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert work to a suitable array")
 * 
 */
    __pyx_t_8 = (__pyx_v_work == nullptr);
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":660
 *         work = np.PyArray_CopyFromObject(work, np.PyArray_DescrFromType(np.NPY_DOUBLE), 1, 1)
 *         if work is None:
 *             raise ValueError("could not convert work to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if work.shape[0] < lwork:
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_660_28->Target(__site_call1_660_28, __pyx_context, __pyx_t_10, ((System::Object^)"could not convert work to a suitable array"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L50;
    }
    __pyx_L50:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":662
 *             raise ValueError("could not convert work to a suitable array")
 * 
 *         if work.shape[0] < lwork:             # <<<<<<<<<<<<<<
 *             raise ValueError("work is too small")
 * 
 */
    __pyx_t_1 = __site_get_shape_662_15->Target(__site_get_shape_662_15, __pyx_v_work, __pyx_context);
    __pyx_t_10 = __site_getindex_662_21->Target(__site_getindex_662_21, __pyx_t_1, ((System::Object^)0));
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __pyx_v_lwork;
    __pyx_t_9 = __site_op_lt_662_25->Target(__site_op_lt_662_25, __pyx_t_10, __pyx_t_1);
    __pyx_t_10 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_662_25->Target(__site_istrue_662_25, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":663
 * 
 *         if work.shape[0] < lwork:
 *             raise ValueError("work is too small")             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_663_28->Target(__site_call1_663_28, __pyx_context, __pyx_t_9, ((System::Object^)"work is too small"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L51;
    }
    __pyx_L51:;
    goto __pyx_L49;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":666
 * 
 *     else:
 *         dim1[0] = lwork             # <<<<<<<<<<<<<<
 *         work = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 * 
 */
    (__pyx_v_dim1[0]) = __pyx_v_lwork;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":667
 *     else:
 *         dim1[0] = lwork
 *         work = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)             # <<<<<<<<<<<<<<
 * 
 *     if iwork is not None:
 */
    __pyx_t_1 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_DOUBLE, 0); 
    __pyx_v_work = __pyx_t_1;
    __pyx_t_1 = nullptr;
  }
  __pyx_L49:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":669
 *         work = np.PyArray_EMPTY(1, &dim1[0], np.NPY_DOUBLE, False)
 * 
 *     if iwork is not None:             # <<<<<<<<<<<<<<
 *         iwork = np.PyArray_CopyFromObject(iwork, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)
 *         if iwork is None:
 */
  __pyx_t_8 = (__pyx_v_iwork != nullptr);
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":670
 * 
 *     if iwork is not None:
 *         iwork = np.PyArray_CopyFromObject(iwork, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)             # <<<<<<<<<<<<<<
 *         if iwork is None:
 *             raise ValueError("could not convert iwork to a suitable array")
 */
    __pyx_t_1 = PyArray_DescrFromType(NPY_INT); 
    __pyx_t_9 = PyArray_CopyFromObject(__pyx_v_iwork, __pyx_t_1, __pyx_int_1, __pyx_int_1); 
    __pyx_t_1 = nullptr;
    __pyx_v_iwork = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":671
 *     if iwork is not None:
 *         iwork = np.PyArray_CopyFromObject(iwork, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)
 *         if iwork is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert iwork to a suitable array")
 * 
 */
    __pyx_t_8 = (__pyx_v_iwork == nullptr);
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":672
 *         iwork = np.PyArray_CopyFromObject(iwork, np.PyArray_DescrFromType(np.NPY_INT), 1, 1)
 *         if iwork is None:
 *             raise ValueError("could not convert iwork to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if iwork.shape[0] < liwork:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_672_28->Target(__site_call1_672_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert iwork to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L53;
    }
    __pyx_L53:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":674
 *             raise ValueError("could not convert iwork to a suitable array")
 * 
 *         if iwork.shape[0] < liwork:             # <<<<<<<<<<<<<<
 *             raise ValueError("iwork is too small")
 *     else:
 */
    __pyx_t_1 = __site_get_shape_674_16->Target(__site_get_shape_674_16, __pyx_v_iwork, __pyx_context);
    __pyx_t_9 = __site_getindex_674_22->Target(__site_getindex_674_22, __pyx_t_1, ((System::Object^)0));
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __pyx_v_liwork;
    __pyx_t_10 = __site_op_lt_674_26->Target(__site_op_lt_674_26, __pyx_t_9, __pyx_t_1);
    __pyx_t_9 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_674_26->Target(__site_istrue_674_26, __pyx_t_10);
    __pyx_t_10 = nullptr;
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":675
 * 
 *         if iwork.shape[0] < liwork:
 *             raise ValueError("iwork is too small")             # <<<<<<<<<<<<<<
 *     else:
 *         dim1[0] = liwork
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_675_28->Target(__site_call1_675_28, __pyx_context, __pyx_t_10, ((System::Object^)"iwork is too small"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L54;
    }
    __pyx_L54:;
    goto __pyx_L52;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":677
 *             raise ValueError("iwork is too small")
 *     else:
 *         dim1[0] = liwork             # <<<<<<<<<<<<<<
 *         iwork = np.PyArray_EMPTY(1, &dim1[0], np.NPY_INT, False)
 * 
 */
    (__pyx_v_dim1[0]) = __pyx_v_liwork;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":678
 *     else:
 *         dim1[0] = liwork
 *         iwork = np.PyArray_EMPTY(1, &dim1[0], np.NPY_INT, False)             # <<<<<<<<<<<<<<
 * 
 *     # check if what job requests can be done with what the user has input
 */
    __pyx_t_1 = PyArray_EMPTY(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), NPY_INT, 0); 
    __pyx_v_iwork = __pyx_t_1;
    __pyx_t_1 = nullptr;
  }
  __pyx_L52:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":682
 *     # check if what job requests can be done with what the user has input
 *     # into the function.
 *     if (job / 10) % 10 >= 2:             # <<<<<<<<<<<<<<
 *         # derivatives are supported to be supplied.
 *         if fjacb is None or fjacd is None:
 */
  __pyx_t_8 = (__Pyx_mod_long(__Pyx_div_long(__pyx_v_job, 10), 10) >= 2);
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":684
 *     if (job / 10) % 10 >= 2:
 *         # derivatives are supported to be supplied.
 *         if fjacb is None or fjacd is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("need fjacb and fjacd to calculate derivatives")
 * 
 */
    __pyx_t_8 = (__pyx_v_fjacb == nullptr);
    if (!__pyx_t_8) {
      __pyx_t_12 = (__pyx_v_fjacd == nullptr);
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":685
 *         # derivatives are supported to be supplied.
 *         if fjacb is None or fjacd is None:
 *             raise ValueError("need fjacb and fjacd to calculate derivatives")             # <<<<<<<<<<<<<<
 * 
 *     # Setup the global data for the callback.
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_685_28->Target(__site_call1_685_28, __pyx_context, __pyx_t_1, ((System::Object^)"need fjacb and fjacd to calculate derivatives"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L56;
    }
    __pyx_L56:;
    goto __pyx_L55;
  }
  __pyx_L55:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":688
 * 
 *     # Setup the global data for the callback.
 *     odr_global["fcn"] = fcn             # <<<<<<<<<<<<<<
 *     odr_global["fjacb"] = fjacb
 *     odr_global["fjacd"] = fjacd
 */
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "odr_global");
  __site_setindex_688_14->Target(__site_setindex_688_14, __pyx_t_10, ((System::Object^)"fcn"), __pyx_v_fcn);
  __pyx_t_10 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":689
 *     # Setup the global data for the callback.
 *     odr_global["fcn"] = fcn
 *     odr_global["fjacb"] = fjacb             # <<<<<<<<<<<<<<
 *     odr_global["fjacd"] = fjacd
 *     odr_global["pyBeta"] = beta
 */
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "odr_global");
  __site_setindex_689_14->Target(__site_setindex_689_14, __pyx_t_10, ((System::Object^)"fjacb"), __pyx_v_fjacb);
  __pyx_t_10 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":690
 *     odr_global["fcn"] = fcn
 *     odr_global["fjacb"] = fjacb
 *     odr_global["fjacd"] = fjacd             # <<<<<<<<<<<<<<
 *     odr_global["pyBeta"] = beta
 *     odr_global["extra_args"] = extra_args
 */
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "odr_global");
  __site_setindex_690_14->Target(__site_setindex_690_14, __pyx_t_10, ((System::Object^)"fjacd"), __pyx_v_fjacd);
  __pyx_t_10 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":691
 *     odr_global["fjacb"] = fjacb
 *     odr_global["fjacd"] = fjacd
 *     odr_global["pyBeta"] = beta             # <<<<<<<<<<<<<<
 *     odr_global["extra_args"] = extra_args
 * 
 */
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "odr_global");
  __site_setindex_691_14->Target(__site_setindex_691_14, __pyx_t_10, ((System::Object^)"pyBeta"), __pyx_v_beta);
  __pyx_t_10 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":692
 *     odr_global["fjacd"] = fjacd
 *     odr_global["pyBeta"] = beta
 *     odr_global["extra_args"] = extra_args             # <<<<<<<<<<<<<<
 * 
 *     print "going in: beta = %s" % beta
 */
  __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "odr_global");
  __site_setindex_692_14->Target(__site_setindex_692_14, __pyx_t_10, ((System::Object^)"extra_args"), __pyx_v_extra_args);
  __pyx_t_10 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":694
 *     odr_global["extra_args"] = extra_args
 * 
 *     print "going in: beta = %s" % beta             # <<<<<<<<<<<<<<
 *     dodrc(fcn_callback, &n, &m, &npx, &nq, <double *>np.PyArray_DATA(beta),
 *         <double *>np.PyArray_DATA(y), &ldy, <double *>np.PyArray_DATA(x), &ldx,
 */
  __pyx_t_10 = __site_op_mod_694_32->Target(__site_op_mod_694_32, ((System::Object^)"going in: beta = %s"), __pyx_v_beta);
  PythonOps::Print(__pyx_context, ((System::Object^)__pyx_t_10));
  __pyx_t_10 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":695
 * 
 *     print "going in: beta = %s" % beta
 *     dodrc(fcn_callback, &n, &m, &npx, &nq, <double *>np.PyArray_DATA(beta),             # <<<<<<<<<<<<<<
 *         <double *>np.PyArray_DATA(y), &ldy, <double *>np.PyArray_DATA(x), &ldx,
 *         <double *>np.PyArray_DATA(we), &ldwe, &ld2we,
 */
  if (__pyx_v_beta != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_beta) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":696
 *     print "going in: beta = %s" % beta
 *     dodrc(fcn_callback, &n, &m, &npx, &nq, <double *>np.PyArray_DATA(beta),
 *         <double *>np.PyArray_DATA(y), &ldy, <double *>np.PyArray_DATA(x), &ldx,             # <<<<<<<<<<<<<<
 *         <double *>np.PyArray_DATA(we), &ldwe, &ld2we,
 *         <double *>np.PyArray_DATA(wd), &ldwd, &ld2wd,
 */
  if (__pyx_v_y != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_y) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_x != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_x) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":697
 *     dodrc(fcn_callback, &n, &m, &npx, &nq, <double *>np.PyArray_DATA(beta),
 *         <double *>np.PyArray_DATA(y), &ldy, <double *>np.PyArray_DATA(x), &ldx,
 *         <double *>np.PyArray_DATA(we), &ldwe, &ld2we,             # <<<<<<<<<<<<<<
 *         <double *>np.PyArray_DATA(wd), &ldwd, &ld2wd,
 *         <int *>np.PyArray_DATA(ifixb), <int *>np.PyArray_DATA(ifixx), &ldifx,
 */
  if (__pyx_v_we != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_we) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":698
 *         <double *>np.PyArray_DATA(y), &ldy, <double *>np.PyArray_DATA(x), &ldx,
 *         <double *>np.PyArray_DATA(we), &ldwe, &ld2we,
 *         <double *>np.PyArray_DATA(wd), &ldwd, &ld2wd,             # <<<<<<<<<<<<<<
 *         <int *>np.PyArray_DATA(ifixb), <int *>np.PyArray_DATA(ifixx), &ldifx,
 *         &job, &ndigit, &taufac, &sstol, &partol, &maxit,
 */
  if (__pyx_v_wd != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_wd) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":699
 *         <double *>np.PyArray_DATA(we), &ldwe, &ld2we,
 *         <double *>np.PyArray_DATA(wd), &ldwd, &ld2wd,
 *         <int *>np.PyArray_DATA(ifixb), <int *>np.PyArray_DATA(ifixx), &ldifx,             # <<<<<<<<<<<<<<
 *         &job, &ndigit, &taufac, &sstol, &partol, &maxit,
 *         &iprint, &lunerr, &lunrpt,
 */
  if (__pyx_v_ifixb != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ifixb) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_ifixx != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ifixx) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":702
 *         &job, &ndigit, &taufac, &sstol, &partol, &maxit,
 *         &iprint, &lunerr, &lunrpt,
 *         <double *>np.PyArray_DATA(stpb), <double *>np.PyArray_DATA(stpd), &ldstpd,             # <<<<<<<<<<<<<<
 *         <double *>np.PyArray_DATA(sclb), <double *>np.PyArray_DATA(scld), &ldscld,
 *         <double *>np.PyArray_DATA(work), &lwork, <int *>np.PyArray_DATA(iwork), &liwork,
 */
  if (__pyx_v_stpb != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_stpb) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_stpd != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_stpd) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":703
 *         &iprint, &lunerr, &lunrpt,
 *         <double *>np.PyArray_DATA(stpb), <double *>np.PyArray_DATA(stpd), &ldstpd,
 *         <double *>np.PyArray_DATA(sclb), <double *>np.PyArray_DATA(scld), &ldscld,             # <<<<<<<<<<<<<<
 *         <double *>np.PyArray_DATA(work), &lwork, <int *>np.PyArray_DATA(iwork), &liwork,
 *         &info);
 */
  if (__pyx_v_sclb != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_sclb) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_scld != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_scld) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":704
 *         <double *>np.PyArray_DATA(stpb), <double *>np.PyArray_DATA(stpd), &ldstpd,
 *         <double *>np.PyArray_DATA(sclb), <double *>np.PyArray_DATA(scld), &ldscld,
 *         <double *>np.PyArray_DATA(work), &lwork, <int *>np.PyArray_DATA(iwork), &liwork,             # <<<<<<<<<<<<<<
 *         &info);
 * 
 */
  if (__pyx_v_work != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_work) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_iwork != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_iwork) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":705
 *         <double *>np.PyArray_DATA(sclb), <double *>np.PyArray_DATA(scld), &ldscld,
 *         <double *>np.PyArray_DATA(work), &lwork, <int *>np.PyArray_DATA(iwork), &liwork,
 *         &info);             # <<<<<<<<<<<<<<
 * 
 *     result = gen_output(n, m, npx, nq, ldwe, ld2we,
 */
  F_FUNC(dodrc,DODRC)(__pyx_function_pointer_fcn_callback, (&__pyx_v_n), (&__pyx_v_m), (&__pyx_v_npx), (&__pyx_v_nq), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_beta))), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_y))), (&__pyx_v_ldy), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_x))), (&__pyx_v_ldx), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_we))), (&__pyx_v_ldwe), (&__pyx_v_ld2we), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_wd))), (&__pyx_v_ldwd), (&__pyx_v_ld2wd), ((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ifixb))), ((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ifixx))), (&__pyx_v_ldifx), (&__pyx_v_job), (&__pyx_v_ndigit), (&__pyx_v_taufac), (&__pyx_v_sstol), (&__pyx_v_partol), (&__pyx_v_maxit), (&__pyx_v_iprint), (&__pyx_v_lunerr), (&__pyx_v_lunrpt), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_stpb))), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_stpd))), (&__pyx_v_ldstpd), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_sclb))), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_scld))), (&__pyx_v_ldscld), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_work))), (&__pyx_v_lwork), ((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_iwork))), (&__pyx_v_liwork), (&__pyx_v_info));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":708
 * 
 *     result = gen_output(n, m, npx, nq, ldwe, ld2we,
 *         np.PyArray_ARRAY(beta), np.PyArray_ARRAY(work),             # <<<<<<<<<<<<<<
 *         np.PyArray_ARRAY(iwork), isodr, info, full_output);
 * 
 */
  if (__pyx_v_beta != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_beta) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_work != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_work) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":709
 *     result = gen_output(n, m, npx, nq, ldwe, ld2we,
 *         np.PyArray_ARRAY(beta), np.PyArray_ARRAY(work),
 *         np.PyArray_ARRAY(iwork), isodr, info, full_output);             # <<<<<<<<<<<<<<
 * 
 *     if result == None:
 */
  if (__pyx_v_iwork != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_iwork) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_10 = gen_output(__pyx_v_n, __pyx_v_m, __pyx_v_npx, __pyx_v_nq, __pyx_v_ldwe, __pyx_v_ld2we, PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_beta)), PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_work)), PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_iwork)), __pyx_v_isodr, __pyx_v_info, __pyx_v_full_output); 
  __pyx_v_result = __pyx_t_10;
  __pyx_t_10 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":711
 *         np.PyArray_ARRAY(iwork), isodr, info, full_output);
 * 
 *     if result == None:             # <<<<<<<<<<<<<<
 *         raise RuntimeError("could not generate output")
 *     if lunerr != -1:
 */
  __pyx_t_10 = __site_op_eq_711_14->Target(__site_op_eq_711_14, __pyx_v_result, nullptr);
  __pyx_t_3 = __site_istrue_711_14->Target(__site_istrue_711_14, __pyx_t_10);
  __pyx_t_10 = nullptr;
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":712
 * 
 *     if result == None:
 *         raise RuntimeError("could not generate output")             # <<<<<<<<<<<<<<
 *     if lunerr != -1:
 *         dlunc(&lunerr)
 */
    __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
    __pyx_t_1 = __site_call1_712_26->Target(__site_call1_712_26, __pyx_context, __pyx_t_10, ((System::Object^)"could not generate output"));
    __pyx_t_10 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L57;
  }
  __pyx_L57:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":713
 *     if result == None:
 *         raise RuntimeError("could not generate output")
 *     if lunerr != -1:             # <<<<<<<<<<<<<<
 *         dlunc(&lunerr)
 *     if lunrpt != -1:
 */
  __pyx_t_3 = (__pyx_v_lunerr != -1);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":714
 *         raise RuntimeError("could not generate output")
 *     if lunerr != -1:
 *         dlunc(&lunerr)             # <<<<<<<<<<<<<<
 *     if lunrpt != -1:
 *         dlunc(&lunrpt)
 */
    F_FUNC(dlunc, DLUNC)((&__pyx_v_lunerr));
    goto __pyx_L58;
  }
  __pyx_L58:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":715
 *     if lunerr != -1:
 *         dlunc(&lunerr)
 *     if lunrpt != -1:             # <<<<<<<<<<<<<<
 *         dlunc(&lunrpt)
 * 
 */
  __pyx_t_3 = (__pyx_v_lunrpt != -1);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":716
 *         dlunc(&lunerr)
 *     if lunrpt != -1:
 *         dlunc(&lunrpt)             # <<<<<<<<<<<<<<
 * 
 *     return result
 */
    F_FUNC(dlunc, DLUNC)((&__pyx_v_lunrpt));
    goto __pyx_L59;
  }
  __pyx_L59:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":718
 *         dlunc(&lunrpt)
 * 
 *     return result             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_result;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":290
 *     dtype NpyArray_FindArrayType_3args "NumpyDotNet::NpyArray::FindArrayType" (object src, dtype minitype, int max)
 * 
 * cdef inline dtype NpyArray_FindArrayType_2args(object src, dtype minitype):             # <<<<<<<<<<<<<<
 *     return NpyArray_FindArrayType_3args(src, minitype, NPY_MAXDIMS)
 * 
 */

static CYTHON_INLINE NumpyDotNet::dtype^ NpyArray_FindArrayType_2args(System::Object^ __pyx_v_src, NumpyDotNet::dtype^ __pyx_v_minitype) {
  NumpyDotNet::dtype^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":291
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":310
 * ctypedef void (*PyArray_CopySwapFunc)(void *, void *, int, NpyArray *)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":313
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":315
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))
 * 
 * cdef inline object PyArray_DescrFromType(int typenum):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_DescrFromType(int __pyx_v_typenum) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":316
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":319
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":320
 * 
 * cdef inline object PyArray_ZEROS(int ndim, npy_intp *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":322
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":323
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":324
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":325
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":327
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":328
 * 
 * cdef inline object PyArray_EMPTY(int ndim, npy_intp *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":330
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":331
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":332
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":333
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":335
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":336
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(nd):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":338
 *     shape_list = []
 *     cdef int i
 *     for i in range(nd):             # <<<<<<<<<<<<<<
 *         shape_list.append(dims[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_nd;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":339
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":340
 *     for i in range(nd):
 *         shape_list.append(dims[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":341
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":344
 * 
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":345
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":346
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":347
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":349
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 * cdef inline object PyArray_SimpleNew(int nd, npy_intp *dims, int type_num):             # <<<<<<<<<<<<<<
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, NULL, 0, NPY_CARRAY, NULL)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_SimpleNew(int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":350
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":352
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, NULL, 0, NPY_CARRAY, NULL)
 * 
 * cdef inline object PyArray_SimpleNewFromData(int nd, npy_intp *dims, int type_num, void *data):             # <<<<<<<<<<<<<<
 *     return PyArray_New(NULL, nd, dims, type_num, NULL, data, 0, NPY_CARRAY, NULL)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_SimpleNewFromData(int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, void *__pyx_v_data) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":353
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":355
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":356
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":358
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":359
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":361
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":362
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":364
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":365
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":367
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":368
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":370
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":371
 * 
 * cdef inline object PyArray_Return(arr):
 *     if arr is None:             # <<<<<<<<<<<<<<
 *         return None
 *     import clr
 */
  __pyx_t_1 = (__pyx_v_arr == nullptr);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":372
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":373
 *     if arr is None:
 *         return None
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ndarray
 *     return NumpyDotNet.ndarray.ArrayReturn(arr)
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":374
 *         return None
 *     import clr
 *     import NumpyDotNet.ndarray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.ndarray.ArrayReturn(arr)
 * 
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ndarray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":375
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":377
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":378
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":380
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)
 * 
 * cdef inline object PyArray_NDIM(ndarray obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(NumpyDotNet::ndarray^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":381
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":383
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":384
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":386
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":387
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":389
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":390
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":392
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":393
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":395
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":396
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":398
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":399
 * 
 * cdef inline void *PyArray_Zero(arr):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return <void *><npy_intp>NumpyDotNet.NpyArray.Zero(arr)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":400
 * cdef inline void *PyArray_Zero(arr):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return <void *><npy_intp>NumpyDotNet.NpyArray.Zero(arr)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":401
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":403
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":404
 * 
 * cdef inline object NpyArray_Return(NpyArray *arr):
 *     ret = Npy_INTERFACE_array(arr)             # <<<<<<<<<<<<<<
 *     Npy_DECREF(arr)
 *     return ret
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_arr)); 
  __pyx_v_ret = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":405
 * cdef inline object NpyArray_Return(NpyArray *arr):
 *     ret = Npy_INTERFACE_array(arr)
 *     Npy_DECREF(arr)             # <<<<<<<<<<<<<<
 *     return ret
 * 
 */
  Npy_DECREF(__pyx_v_arr);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":406
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":408
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":409
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":411
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":412
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":413
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":414
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":417
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":419
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":422
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":423
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":424
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":425
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":427
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":428
 * 
 * cdef inline object PyArray_ContiguousFromObject(op, type, minDepth, maxDepth):
 *     return PyArray_FromAny(op, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), minDepth, maxDepth,             # <<<<<<<<<<<<<<
 *                            NPY_DEFAULT | NPY_ENSUREARRAY, NULL)
 * 
 */
  __pyx_t_1 = __site_cvt_cvt_int_428_78->Target(__site_cvt_cvt_int_428_78, __pyx_v_type);
  __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_1))); 

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":429
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":431
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":432
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":433
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":434
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":436
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":437
 * 
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np             # <<<<<<<<<<<<<<
 *     return isinstance(obj, np.ndarray)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_np = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":438
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np
 *     return isinstance(obj, np.ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":440
 *     return isinstance(obj, np.ndarray)
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 * 
 */

static CYTHON_INLINE void import_array(void) {

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":443
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":444
 * 
 * cdef inline PyNumber_Check(o):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":445
 * cdef inline PyNumber_Check(o):
 *     import clr
 *     import NumpyDotNet.ScalarGeneric             # <<<<<<<<<<<<<<
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ScalarGeneric", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":446
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
  __pyx_t_4 = __site_call2_446_21->Target(__site_call2_446_21, __pyx_context, __pyx_t_1, __pyx_v_o, __pyx_t_5);
  __pyx_t_1 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_6 = __site_cvt_bool_446_45->Target(__site_cvt_bool_446_45, __pyx_t_4);
  if (!__pyx_t_6) {
    __pyx_t_4 = nullptr;
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_1 = __site_get_ScalarGeneric_446_73->Target(__site_get_ScalarGeneric_446_73, __pyx_v_NumpyDotNet, __pyx_context);
    __pyx_t_3 = __site_call2_446_58->Target(__site_call2_446_58, __pyx_context, __pyx_t_5, __pyx_v_o, __pyx_t_1);
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":448
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":449
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterNew(ndarray n):
 *     return NpyArray_IterNew(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterAllButAxis(ndarray n, int *inaxis):
 */
  __pyx_t_1 = __site_get_Array_449_51->Target(__site_get_Array_449_51, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_449_51->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_449_51, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_IterNew(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":451
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":452
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterAllButAxis(ndarray n, int *inaxis):
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 */
  __pyx_t_1 = __site_get_Array_452_58->Target(__site_get_Array_452_58, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_452_58->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_452_58, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_IterAllButAxis(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)), __pyx_v_inaxis);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":454
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_NEXT(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_NEXT(NpyArrayIterObject *__pyx_v_obj) {

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":455
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 *     NpyArray_ITER_NEXT(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_NEXT(__pyx_v_obj);

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":457
 *     NpyArray_ITER_NEXT(obj)
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_RESET(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_RESET(NpyArrayIterObject *__pyx_v_obj) {

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":458
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 *     NpyArray_ITER_RESET(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_RESET(__pyx_v_obj);

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":460
 *     NpyArray_ITER_RESET(obj)
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     return NpyArray_ITER_DATA(obj)
 * 
 */

static CYTHON_INLINE void *PyArray_ITER_DATA(NpyArrayIterObject *__pyx_v_obj) {
  void *__pyx_r;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":461
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":463
 *     return NpyArray_ITER_DATA(obj)
 * 
 * cdef inline NpyArrayNeighborhoodIterObject* PyArray_NeighborhoodIterNew(NpyArrayIterObject *obj,             # <<<<<<<<<<<<<<
 *                                                                         npy_intp *bounds,
 *                                                                         int mode,
 */

static CYTHON_INLINE NpyArrayNeighborhoodIterObject *PyArray_NeighborhoodIterNew(NpyArrayIterObject *__pyx_v_obj, __pyx_t_5numpy_npy_intp *__pyx_v_bounds, int __pyx_v_mode, void *__pyx_v_fill, npy_free_func __pyx_v_fillfree) {
  NpyArrayNeighborhoodIterObject *__pyx_r;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":468
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":470
 *     return NpyArray_NeighborhoodIterNew(obj, bounds, mode, fill, fillfree)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":471
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":473
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":474
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":476
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(iter.ao)
 */

static CYTHON_INLINE NumpyDotNet::ndarray^ NpyIter_ARRAY(NpyArrayIterObject *__pyx_v_iter) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":477
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
  __pyx_int_2 = 2;
  __pyx_int_3 = 3;
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
  __site_get_itemsize_47_91 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "itemsize", false));
  __site_cvt_cvt_int_47_91 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_61_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_64_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_func_name_70_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "func_name", false));
  __site_op_mod_73_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_op_iadd_73_16 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::AddAssign));
  __site_call1_74_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_80_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_getindex_103_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_105_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_add_106_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_getindex_110_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_113_52 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_118_52 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_122_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_122_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_123_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_ne_126_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_126_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_127_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_getindex_132_52 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_136_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_136_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_137_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_ne_140_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_140_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_141_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_ne_144_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_144_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_145_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_333_37 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_333_52 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_333_52 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_334_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_334_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_337_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_337_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_337_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_337_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_337_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_337_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_337_0_3 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_337_0_4 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_362_19 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_362_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_362_41 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_363_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_363_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_363_34 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_363_61 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_364_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_364_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_364_34 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_366_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_366_21 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_368_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_369_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_369_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_369_34 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_370_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_372_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_372_53 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_372_53 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call2_372_76 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_372_76 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_373_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_374_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_374_53 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_374_53 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call2_374_76 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_374_76 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_375_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_377_41 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_377_41 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_378_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_379_41 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_379_41 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_380_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_385_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_386_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_387_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_388_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_389_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_390_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_391_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_392_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_393_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_395_48 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_396_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_397_49 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_398_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_404_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_407_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_409_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_409_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_409_19 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_410_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_410_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_410_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_410_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_411_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_412_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_412_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_412_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_412_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_412_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_412_13 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_416_16 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_416_16 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_423_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_424_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_424_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_424_19 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_427_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_427_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_427_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_427_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_427_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_427_8 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_430_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_431_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_431_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_431_20 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_setindex_437_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_istrue_438_26 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_440_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_440_23 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_setindex_445_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_448_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_449_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_449_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_449_32 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_452_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_454_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_454_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_454_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_457_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_457_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_457_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_457_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_457_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_457_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_457_42 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_462_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_462_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_462_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_462_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_462_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_462_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_467_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_467_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_467_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_467_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_467_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_467_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_472_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_472_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_472_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_472_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_472_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_472_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_477_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_477_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_477_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_477_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_477_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_477_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_482_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_488_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_istrue_489_26 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_491_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_491_23 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_setindex_496_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_500_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_501_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_501_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_501_32 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_504_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_506_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_506_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_506_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_509_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_509_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_509_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_509_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_509_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_509_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_509_42 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_514_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_514_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_514_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_514_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_514_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_514_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_519_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_519_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_519_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_519_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_519_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_519_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_524_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_524_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_524_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_524_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_524_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_524_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_529_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_529_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_529_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_529_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_529_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_529_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_533_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_538_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_shape_541_33 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_541_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_541_43 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_541_43 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_542_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_548_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_553_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_555_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_555_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_555_22 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_555_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_555_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_555_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_555_46 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_557_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_557_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_557_24 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_557_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_557_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_557_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_557_48 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_559_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_559_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_559_24 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_559_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_559_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_559_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_562_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_567_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_567_35 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_571_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_571_35 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_setindex_576_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_shape_579_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_579_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_579_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_579_41 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_580_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_586_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_591_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_593_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_593_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_593_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_593_34 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_593_40 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_593_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_593_44 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_595_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_595_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_595_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_595_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_595_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_595_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_595_46 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_597_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_597_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_597_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_597_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_597_43 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_597_43 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_600_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_605_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_shape_608_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_608_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_608_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_608_41 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_609_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_615_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_620_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_622_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_622_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_622_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_622_34 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_622_40 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_622_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_622_44 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_624_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_624_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_624_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_624_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_624_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_624_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_624_46 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_626_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_626_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_626_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_626_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_626_43 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_626_43 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_629_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_650_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_655_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_660_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_662_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_662_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_lt_662_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_662_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_663_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_672_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_674_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_674_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_lt_674_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_674_26 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_675_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_685_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_688_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_setindex_689_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_setindex_690_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_setindex_691_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_setindex_692_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_op_mod_694_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_op_eq_711_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_711_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_712_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  __site_call2_446_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_cvt_bool_446_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ScalarGeneric_446_73 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ScalarGeneric", false));
  __site_call2_446_58 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_Array_449_51 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_449_51 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_452_58 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_452_58 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
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
  __pyx_delegate_val_fcn_callback = gcnew __pyx_delegate_t_5scipy_3odr_9__odrpack_fcn_callback(fcn_callback);
  __pyx_function_pointer_fcn_callback = (__pyx_fp_t_fcn_callback)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_fcn_callback).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":2
 * 
 * import operator             # <<<<<<<<<<<<<<
 * cimport numpy as np
 * import numpy as np
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "operator", -1));
  PythonOps::SetGlobal(__pyx_context, "operator", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":4
 * import operator
 * cimport numpy as np
 * import numpy as np             # <<<<<<<<<<<<<<
 * np.import_array()
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":5
 * cimport numpy as np
 * import numpy as np
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "string.h":
 */
  import_array();

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":49
 *     return np.NpyArray_New(NULL, nd, dims, np.PyDataType_TYPE_NUM(descr), NULL, NULL, descr.itemsize, 0, NULL)
 * 
 * class odr_stop(Exception):             # <<<<<<<<<<<<<<
 *     pass
 * 
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "Exception");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  FunctionCode^ func_code_odr_stop = PythonOps::MakeFunctionCode(__pyx_context, "func_code_odr_stop", nullptr, gcnew array<System::String^>{"arg0"}, FunctionAttributes::None, 0, 0, "", gcnew System::Func<CodeContext^, CodeContext^>(mk_empty_context), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), 0);
  PythonTuple^ tbases_odr_stop = safe_cast<PythonTuple^>(__pyx_t_3);
  array<System::Object^>^ bases_odr_stop = gcnew array<System::Object^>(tbases_odr_stop->Count);
  tbases_odr_stop->CopyTo(bases_odr_stop, 0);
  __pyx_t_1 = PythonOps::MakeClass(func_code_odr_stop, nullptr, __pyx_context, "odr_stop", bases_odr_stop, "");
  __pyx_t_3 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "odr_stop", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":52
 *     pass
 * 
 * class odr_error(Exception):             # <<<<<<<<<<<<<<
 *     pass
 * 
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "Exception");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  FunctionCode^ func_code_odr_error = PythonOps::MakeFunctionCode(__pyx_context, "func_code_odr_error", nullptr, gcnew array<System::String^>{"arg0"}, FunctionAttributes::None, 0, 0, "", gcnew System::Func<CodeContext^, CodeContext^>(mk_empty_context), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), 0);
  PythonTuple^ tbases_odr_error = safe_cast<PythonTuple^>(__pyx_t_3);
  array<System::Object^>^ bases_odr_error = gcnew array<System::Object^>(tbases_odr_error->Count);
  tbases_odr_error->CopyTo(bases_odr_error, 0);
  __pyx_t_1 = PythonOps::MakeClass(func_code_odr_error, nullptr, __pyx_context, "odr_error", bases_odr_error, "");
  __pyx_t_3 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "odr_error", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":56
 * 
 * # Danger, global.  Used to pass data from odr to fcn_callback through intervening Fortran.
 * odr_global = { "fcn" : None, "fjacb" : None, "fjacd" : None, "pyBeta" : None, "extra_args" : None }             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_2[((System::Object^)"fcn")] = nullptr;
  __pyx_t_2[((System::Object^)"fjacb")] = nullptr;
  __pyx_t_2[((System::Object^)"fjacd")] = nullptr;
  __pyx_t_2[((System::Object^)"pyBeta")] = nullptr;
  __pyx_t_2[((System::Object^)"extra_args")] = nullptr;
  PythonOps::SetGlobal(__pyx_context, "odr_global", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":339
 * def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,             # <<<<<<<<<<<<<<
 *     int maxit=-1, stpb=None,
 *     stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):
 */
  __pyx_k_1 = (-1.0);
  __pyx_k_2 = (-1.0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/odr/__odrpack.pyx":2
 * 
 * import operator             # <<<<<<<<<<<<<<
 * cimport numpy as np
 * import numpy as np
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/cython/include/numpy.pxd":476
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

static CYTHON_INLINE long __Pyx_mod_long(long a, long b) {
    long r = a % b;
    r += ((r != 0) & ((r ^ b) < 0)) * b;
    return r;
}

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
[assembly: PythonModule("scipy__odr____odrpack", module___odrpack::typeid)];
};
