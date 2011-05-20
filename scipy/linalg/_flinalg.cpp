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
  dict["__module__"] = "scipy.linalg._flinalg";
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
#define __PYX_HAVE_API__scipy__linalg___flinalg
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_descriptor.h"
#include "npy_arrayobject.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_iterators.h"
#include "npy_ironpython.h"
#include "fwrap_ktp_header.h"
#include "_flinalg_fc.h"
#include "string.h"

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

typedef System::Object^ __pyx_t_5scipy_6linalg_9fwrap_ktp_fw_bytes;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":504
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

public ref struct __pyx_opt_args_5scipy_6linalg_8_flinalg_fw_asfortranarray {
  int __pyx_n;
  int alignment;
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
/* Module declarations from scipy.linalg.fwrap_ktp */
/* Module declarations from scipy.linalg._flinalg_fc */
/* Module declarations from scipy.linalg._flinalg */
static NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^, int, int, __pyx_t_5numpy_intp_t *, int, int, ref struct __pyx_opt_args_5scipy_6linalg_8_flinalg_fw_asfortranarray ^__pyx_optional_args); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.linalg._flinalg"

/* Implementation of scipy.linalg._flinalg */
namespace clr__flinalg {
  public ref class module__flinalg sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_23_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_48_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_50_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_52_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_55_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_80_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_82_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_84_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_87_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_112_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_114_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_116_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_119_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_144_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_146_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_148_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_152_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_177_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_179_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_181_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_184_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_209_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_211_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_213_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_216_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_241_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_243_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_245_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_248_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_273_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_275_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_277_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_281_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_281_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_312_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_314_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_319_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_321_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_325_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_327_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_331_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_333_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_336_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_336_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_367_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_369_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_374_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_376_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_380_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_382_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_386_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_388_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_391_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_391_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_422_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_424_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_429_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_431_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_435_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_437_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_441_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_443_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_446_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_446_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_477_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_479_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_484_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_486_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_490_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_492_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_496_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_498_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_516_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_521_59;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_528_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_530_60;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_530_24;
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
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_375_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ArrayReturn_375_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_375_43;
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
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":23
 * cdef extern from "string.h":
 *     void *memcpy(void *dest, void *src, size_t n)
 * def sdet_c(object a, bint overwrite_a=False):             # <<<<<<<<<<<<<<
 *     """sdet_c(a[, overwrite_a]) -> (det, info)
 * 
 */

static System::Object^ sdet_c(System::Object^ a, [InteropServices::Optional]System::Object^ overwrite_a) {
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_overwrite_a;
  fwr_real_t __pyx_v_det;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_23_0->Target(__site_cvt_cvt_int_23_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":41
 *     cdef np.ndarray a_, piv_
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 */
  __pyx_v_det = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":42
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     n = a_shape[0]
 *     piv_shape[0] = n
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_FLOAT, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":43
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]             # <<<<<<<<<<<<<<
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  __pyx_v_n = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":44
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 *     piv_shape[0] = n             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":45
 *     n = a_shape[0]
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":46
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":47
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 */
  __pyx_t_2 = (!((__pyx_v_a_shape[0]) == (__pyx_v_a_shape[1])));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":48
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')             # <<<<<<<<<<<<<<
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_48_24->Target(__site_call1_48_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: a.shape[0] == a.shape[1]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":49
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_2 = (__pyx_v_n != (__pyx_v_a_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":50
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_50_24->Target(__site_call1_50_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == a.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":51
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.sdet_c(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_4 = (!__pyx_t_2);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":52
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.sdet_c(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_52_24->Target(__site_call1_52_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":53
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.sdet_c(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)             # <<<<<<<<<<<<<<
 *     return (det, info,)
 * def ddet_c(object a, bint overwrite_a=False):
 */
  F_FUNC(sdet_c,SDET_C)((&__pyx_v_det), ((fwr_real_t *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_n), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":54
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.sdet_c(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)             # <<<<<<<<<<<<<<
 * def ddet_c(object a, bint overwrite_a=False):
 *     """ddet_c(a[, overwrite_a]) -> (det, info)
 */
  __pyx_t_3 = __pyx_v_det;
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":55
 *     fc.sdet_c(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 * def ddet_c(object a, bint overwrite_a=False):             # <<<<<<<<<<<<<<
 *     """ddet_c(a[, overwrite_a]) -> (det, info)
 * 
 */

static System::Object^ ddet_c(System::Object^ a, [InteropServices::Optional]System::Object^ overwrite_a) {
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_overwrite_a;
  fwr_dbl_t __pyx_v_det;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_55_0->Target(__site_cvt_cvt_int_55_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":73
 *     cdef np.ndarray a_, piv_
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 */
  __pyx_v_det = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":74
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     n = a_shape[0]
 *     piv_shape[0] = n
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_DOUBLE, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":75
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]             # <<<<<<<<<<<<<<
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  __pyx_v_n = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":76
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 *     piv_shape[0] = n             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":77
 *     n = a_shape[0]
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":78
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":79
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 */
  __pyx_t_2 = (!((__pyx_v_a_shape[0]) == (__pyx_v_a_shape[1])));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":80
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')             # <<<<<<<<<<<<<<
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_80_24->Target(__site_call1_80_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: a.shape[0] == a.shape[1]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":81
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_2 = (__pyx_v_n != (__pyx_v_a_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":82
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_82_24->Target(__site_call1_82_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == a.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":83
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.ddet_c(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_4 = (!__pyx_t_2);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":84
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.ddet_c(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_84_24->Target(__site_call1_84_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":85
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.ddet_c(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)             # <<<<<<<<<<<<<<
 *     return (det, info,)
 * def cdet_c(object a, bint overwrite_a=False):
 */
  F_FUNC(ddet_c,DDET_C)((&__pyx_v_det), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_n), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":86
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.ddet_c(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)             # <<<<<<<<<<<<<<
 * def cdet_c(object a, bint overwrite_a=False):
 *     """cdet_c(a[, overwrite_a]) -> (det, info)
 */
  __pyx_t_3 = __pyx_v_det;
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":87
 *     fc.ddet_c(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 * def cdet_c(object a, bint overwrite_a=False):             # <<<<<<<<<<<<<<
 *     """cdet_c(a[, overwrite_a]) -> (det, info)
 * 
 */

static System::Object^ cdet_c(System::Object^ a, [InteropServices::Optional]System::Object^ overwrite_a) {
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_overwrite_a;
  __pyx_t_float_complex __pyx_v_det;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_87_0->Target(__site_cvt_cvt_int_87_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":105
 *     cdef np.ndarray a_, piv_
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 */
  __pyx_v_det = __pyx_t_float_complex_from_parts(0, 0);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":106
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     n = a_shape[0]
 *     piv_shape[0] = n
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_CFLOAT, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":107
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]             # <<<<<<<<<<<<<<
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  __pyx_v_n = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":108
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 *     piv_shape[0] = n             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":109
 *     n = a_shape[0]
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":110
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":111
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 */
  __pyx_t_2 = (!((__pyx_v_a_shape[0]) == (__pyx_v_a_shape[1])));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":112
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')             # <<<<<<<<<<<<<<
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_112_24->Target(__site_call1_112_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: a.shape[0] == a.shape[1]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":113
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_2 = (__pyx_v_n != (__pyx_v_a_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":114
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_114_24->Target(__site_call1_114_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == a.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":115
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.cdet_c(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_4 = (!__pyx_t_2);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":116
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.cdet_c(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_116_24->Target(__site_call1_116_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":117
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.cdet_c(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)             # <<<<<<<<<<<<<<
 *     return (det, info,)
 * def zdet_c(object a, bint overwrite_a=False):
 */
  F_FUNC(cdet_c,CDET_C)((&__pyx_v_det), ((__pyx_t_float_complex *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_n), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":118
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.cdet_c(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)             # <<<<<<<<<<<<<<
 * def zdet_c(object a, bint overwrite_a=False):
 *     """zdet_c(a[, overwrite_a]) -> (det, info)
 */
  __pyx_t_3 = gcnew System::Numerics::Complex(__pyx_v_det.real(), __pyx_v_det.imag());
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":119
 *     fc.cdet_c(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 * def zdet_c(object a, bint overwrite_a=False):             # <<<<<<<<<<<<<<
 *     """zdet_c(a[, overwrite_a]) -> (det, info)
 * 
 */

static System::Object^ zdet_c(System::Object^ a, [InteropServices::Optional]System::Object^ overwrite_a) {
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_overwrite_a;
  __pyx_t_double_complex __pyx_v_det;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_119_0->Target(__site_cvt_cvt_int_119_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":137
 *     cdef np.ndarray a_, piv_
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 */
  __pyx_v_det = __pyx_t_double_complex_from_parts(0, 0);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":138
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     n = a_shape[0]
 *     piv_shape[0] = n
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_CDOUBLE, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":139
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]             # <<<<<<<<<<<<<<
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  __pyx_v_n = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":140
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 *     piv_shape[0] = n             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":141
 *     n = a_shape[0]
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":142
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":143
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 */
  __pyx_t_2 = (!((__pyx_v_a_shape[0]) == (__pyx_v_a_shape[1])));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":144
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')             # <<<<<<<<<<<<<<
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_144_24->Target(__site_call1_144_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: a.shape[0] == a.shape[1]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":145
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_2 = (__pyx_v_n != (__pyx_v_a_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":146
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_146_24->Target(__site_call1_146_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == a.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":147
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.zdet_c(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_4 = (!__pyx_t_2);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":148
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.zdet_c(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_148_24->Target(__site_call1_148_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":149
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.zdet_c(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)             # <<<<<<<<<<<<<<
 *     return (det, info,)
 * 
 */
  F_FUNC(zdet_c,ZDET_C)((&__pyx_v_det), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_n), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":150
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.zdet_c(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)             # <<<<<<<<<<<<<<
 * 
 * def sdet_r(object a, bint overwrite_a=False):
 */
  __pyx_t_3 = gcnew System::Numerics::Complex(__pyx_v_det.real(), __pyx_v_det.imag());
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":152
 *     return (det, info,)
 * 
 * def sdet_r(object a, bint overwrite_a=False):             # <<<<<<<<<<<<<<
 *     """sdet_r(a[, overwrite_a]) -> (det, info)
 * 
 */

static System::Object^ sdet_r(System::Object^ a, [InteropServices::Optional]System::Object^ overwrite_a) {
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_overwrite_a;
  fwr_real_t __pyx_v_det;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_152_0->Target(__site_cvt_cvt_int_152_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":170
 *     cdef np.ndarray a_, piv_
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 */
  __pyx_v_det = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":171
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     n = a_shape[0]
 *     piv_shape[0] = n
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_FLOAT, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":172
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]             # <<<<<<<<<<<<<<
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  __pyx_v_n = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":173
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 *     piv_shape[0] = n             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":174
 *     n = a_shape[0]
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":175
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":176
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 */
  __pyx_t_2 = (!((__pyx_v_a_shape[0]) == (__pyx_v_a_shape[1])));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":177
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')             # <<<<<<<<<<<<<<
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_177_24->Target(__site_call1_177_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: a.shape[0] == a.shape[1]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":178
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_2 = (__pyx_v_n != (__pyx_v_a_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":179
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_179_24->Target(__site_call1_179_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == a.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":180
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.sdet_r(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_4 = (!__pyx_t_2);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":181
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.sdet_r(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_181_24->Target(__site_call1_181_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":182
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.sdet_r(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)             # <<<<<<<<<<<<<<
 *     return (det, info,)
 * def ddet_r(object a, bint overwrite_a=False):
 */
  F_FUNC(sdet_r,SDET_R)((&__pyx_v_det), ((fwr_real_t *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_n), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":183
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.sdet_r(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)             # <<<<<<<<<<<<<<
 * def ddet_r(object a, bint overwrite_a=False):
 *     """ddet_r(a[, overwrite_a]) -> (det, info)
 */
  __pyx_t_3 = __pyx_v_det;
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":184
 *     fc.sdet_r(&det, <fwr_real_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 * def ddet_r(object a, bint overwrite_a=False):             # <<<<<<<<<<<<<<
 *     """ddet_r(a[, overwrite_a]) -> (det, info)
 * 
 */

static System::Object^ ddet_r(System::Object^ a, [InteropServices::Optional]System::Object^ overwrite_a) {
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_overwrite_a;
  fwr_dbl_t __pyx_v_det;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_184_0->Target(__site_cvt_cvt_int_184_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":202
 *     cdef np.ndarray a_, piv_
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 */
  __pyx_v_det = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":203
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     n = a_shape[0]
 *     piv_shape[0] = n
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_DOUBLE, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":204
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]             # <<<<<<<<<<<<<<
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  __pyx_v_n = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":205
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 *     piv_shape[0] = n             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":206
 *     n = a_shape[0]
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":207
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":208
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 */
  __pyx_t_2 = (!((__pyx_v_a_shape[0]) == (__pyx_v_a_shape[1])));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":209
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')             # <<<<<<<<<<<<<<
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_209_24->Target(__site_call1_209_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: a.shape[0] == a.shape[1]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":210
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_2 = (__pyx_v_n != (__pyx_v_a_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":211
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_211_24->Target(__site_call1_211_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == a.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":212
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.ddet_r(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_4 = (!__pyx_t_2);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":213
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.ddet_r(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_213_24->Target(__site_call1_213_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":214
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.ddet_r(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)             # <<<<<<<<<<<<<<
 *     return (det, info,)
 * def cdet_r(object a, bint overwrite_a=False):
 */
  F_FUNC(ddet_r,DDET_R)((&__pyx_v_det), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_n), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":215
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.ddet_r(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)             # <<<<<<<<<<<<<<
 * def cdet_r(object a, bint overwrite_a=False):
 *     """cdet_r(a[, overwrite_a]) -> (det, info)
 */
  __pyx_t_3 = __pyx_v_det;
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":216
 *     fc.ddet_r(&det, <fwr_dbl_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 * def cdet_r(object a, bint overwrite_a=False):             # <<<<<<<<<<<<<<
 *     """cdet_r(a[, overwrite_a]) -> (det, info)
 * 
 */

static System::Object^ cdet_r(System::Object^ a, [InteropServices::Optional]System::Object^ overwrite_a) {
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_overwrite_a;
  __pyx_t_float_complex __pyx_v_det;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_216_0->Target(__site_cvt_cvt_int_216_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":234
 *     cdef np.ndarray a_, piv_
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 */
  __pyx_v_det = __pyx_t_float_complex_from_parts(0, 0);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":235
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     n = a_shape[0]
 *     piv_shape[0] = n
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_CFLOAT, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":236
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]             # <<<<<<<<<<<<<<
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  __pyx_v_n = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":237
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 *     piv_shape[0] = n             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":238
 *     n = a_shape[0]
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":239
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":240
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 */
  __pyx_t_2 = (!((__pyx_v_a_shape[0]) == (__pyx_v_a_shape[1])));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":241
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')             # <<<<<<<<<<<<<<
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_241_24->Target(__site_call1_241_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: a.shape[0] == a.shape[1]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":242
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_2 = (__pyx_v_n != (__pyx_v_a_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":243
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_243_24->Target(__site_call1_243_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == a.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":244
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.cdet_r(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_4 = (!__pyx_t_2);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":245
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.cdet_r(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_245_24->Target(__site_call1_245_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":246
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.cdet_r(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)             # <<<<<<<<<<<<<<
 *     return (det, info,)
 * def zdet_r(object a, bint overwrite_a=False):
 */
  F_FUNC(cdet_r,CDET_R)((&__pyx_v_det), ((__pyx_t_float_complex *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_n), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":247
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.cdet_r(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)             # <<<<<<<<<<<<<<
 * def zdet_r(object a, bint overwrite_a=False):
 *     """zdet_r(a[, overwrite_a]) -> (det, info)
 */
  __pyx_t_3 = gcnew System::Numerics::Complex(__pyx_v_det.real(), __pyx_v_det.imag());
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":248
 *     fc.cdet_r(&det, <fwc_complex_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 * def zdet_r(object a, bint overwrite_a=False):             # <<<<<<<<<<<<<<
 *     """zdet_r(a[, overwrite_a]) -> (det, info)
 * 
 */

static System::Object^ zdet_r(System::Object^ a, [InteropServices::Optional]System::Object^ overwrite_a) {
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_overwrite_a;
  __pyx_t_double_complex __pyx_v_det;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_248_0->Target(__site_cvt_cvt_int_248_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":266
 *     cdef np.ndarray a_, piv_
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 */
  __pyx_v_det = __pyx_t_double_complex_from_parts(0, 0);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":267
 *     cdef np.npy_intp a_shape[2], piv_shape[1]
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     n = a_shape[0]
 *     piv_shape[0] = n
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_CDOUBLE, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":268
 *     det = 0
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]             # <<<<<<<<<<<<<<
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  __pyx_v_n = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":269
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
 *     n = a_shape[0]
 *     piv_shape[0] = n             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":270
 *     n = a_shape[0]
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":271
 *     piv_shape[0] = n
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":272
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 */
  __pyx_t_2 = (!((__pyx_v_a_shape[0]) == (__pyx_v_a_shape[1])));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":273
 *     info = 0
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')             # <<<<<<<<<<<<<<
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_273_24->Target(__site_call1_273_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: a.shape[0] == a.shape[1]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":274
 *     if not (a_shape[0] == a_shape[1]):
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_2 = (__pyx_v_n != (__pyx_v_a_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":275
 *         raise ValueError('Condition on arguments not satisfied: a.shape[0] == a.shape[1]')
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_275_24->Target(__site_call1_275_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == a.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":276
 *     if n != a_shape[0]:
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.zdet_r(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_4 = (!__pyx_t_2);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":277
 *         raise ValueError("(n == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.zdet_r(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_277_24->Target(__site_call1_277_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":278
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.zdet_r(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)             # <<<<<<<<<<<<<<
 *     return (det, info,)
 * 
 */
  F_FUNC(zdet_r,ZDET_R)((&__pyx_v_det), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_n), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":279
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     fc.zdet_r(&det, <fwc_complex_x16_t*>np.PyArray_DATA(a_), &n, <fwi_integer_t*>np.PyArray_DATA(piv_), &info)
 *     return (det, info,)             # <<<<<<<<<<<<<<
 * 
 * def slu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
 */
  __pyx_t_3 = gcnew System::Numerics::Complex(__pyx_v_det.real(), __pyx_v_det.imag());
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":281
 *     return (det, info,)
 * 
 * def slu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):             # <<<<<<<<<<<<<<
 *     """slu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)
 * 
 */

static System::Object^ slu_c(System::Object^ a, [InteropServices::Optional]System::Object^ permute_l, [InteropServices::Optional]System::Object^ overwrite_a, [InteropServices::Optional]System::Object^ p, [InteropServices::Optional]System::Object^ l, [InteropServices::Optional]System::Object^ u) {
  System::Object^ __pyx_v_a = nullptr;
  fwi_integer_t __pyx_v_permute_l;
  int __pyx_v_overwrite_a;
  System::Object^ __pyx_v_p = nullptr;
  System::Object^ __pyx_v_l = nullptr;
  System::Object^ __pyx_v_u = nullptr;
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_k;
  fwi_integer_t __pyx_v_m1;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_p_;
  NumpyDotNet::ndarray^ __pyx_v_l_;
  NumpyDotNet::ndarray^ __pyx_v_u_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_p_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_l_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_u_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  fwi_integer_t __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  long __pyx_t_6;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(permute_l) == nullptr) {
    __pyx_v_permute_l = __site_cvt_cvt_fwi_integer_t_281_0->Target(__site_cvt_cvt_fwi_integer_t_281_0, permute_l);
  } else {
    __pyx_v_permute_l = ((fwi_integer_t)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_281_0->Target(__site_cvt_cvt_int_281_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(p) == nullptr) {
    __pyx_v_p = p;
  } else {
    __pyx_v_p = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(l) == nullptr) {
    __pyx_v_l = l;
  } else {
    __pyx_v_l = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(u) == nullptr) {
    __pyx_v_u = u;
  } else {
    __pyx_v_u = ((System::Object^)nullptr);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_p_ = nullptr;
  __pyx_v_l_ = nullptr;
  __pyx_v_u_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":304
 *     cdef np.ndarray a_, p_, l_, u_, piv_
 *     cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     m = a_shape[0]
 *     n = a_shape[1]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_FLOAT, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":305
 *     cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
 *     m = a_shape[0]             # <<<<<<<<<<<<<<
 *     n = a_shape[1]
 *     k = m if (m < n) else n
 */
  __pyx_v_m = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":306
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 2, a_shape, not overwrite_a, False)
 *     m = a_shape[0]
 *     n = a_shape[1]             # <<<<<<<<<<<<<<
 *     k = m if (m < n) else n
 *     piv_shape[0] = k
 */
  __pyx_v_n = (__pyx_v_a_shape[1]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":307
 *     m = a_shape[0]
 *     n = a_shape[1]
 *     k = m if (m < n) else n             # <<<<<<<<<<<<<<
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  if ((__pyx_v_m < __pyx_v_n)) {
    __pyx_t_2 = __pyx_v_m;
  } else {
    __pyx_t_2 = __pyx_v_n;
  }
  __pyx_v_k = __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":308
 *     n = a_shape[1]
 *     k = m if (m < n) else n
 *     piv_shape[0] = k             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":309
 *     k = m if (m < n) else n
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if m != a_shape[0]:
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":310
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":311
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if m != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_3 = (__pyx_v_m != (__pyx_v_a_shape[0]));
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":312
 *     info = 0
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_312_24->Target(__site_call1_312_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m == a.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":313
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m
 */
  __pyx_t_3 = (0 <= __pyx_v_n);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":314
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_314_24->Target(__site_call1_314_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":315
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m             # <<<<<<<<<<<<<<
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
 */
  if (__pyx_v_permute_l) {
    __pyx_t_6 = 1;
  } else {
    __pyx_t_6 = __pyx_v_m;
  }
  __pyx_v_m1 = __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":316
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1             # <<<<<<<<<<<<<<
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:
 */
  (__pyx_v_p_shape[0]) = __pyx_v_m1;
  (__pyx_v_p_shape[1]) = __pyx_v_m1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":317
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_p, NPY_FLOAT, 2, __pyx_v_p_shape, 0, 1, nullptr)); 
  __pyx_v_p_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":318
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_m1 != (__pyx_v_p_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":319
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_319_24->Target(__site_call1_319_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m1 == p.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":320
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k
 */
  __pyx_t_5 = (__pyx_v_m1 != (__pyx_v_p_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":321
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwr_real_t_enum, 2, l_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_321_24->Target(__site_call1_321_24, __pyx_context, __pyx_t_4, ((System::Object^)"(m1 == p.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":322
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k             # <<<<<<<<<<<<<<
 *     l_ = fw_asfortranarray(l, fwr_real_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:
 */
  (__pyx_v_l_shape[0]) = __pyx_v_m;
  (__pyx_v_l_shape[1]) = __pyx_v_k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":323
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwr_real_t_enum, 2, l_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_l, NPY_FLOAT, 2, __pyx_v_l_shape, 0, 1, nullptr)); 
  __pyx_v_l_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":324
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwr_real_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_m != (__pyx_v_l_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":325
 *     l_ = fw_asfortranarray(l, fwr_real_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_325_24->Target(__site_call1_325_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m == l.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":326
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n
 */
  __pyx_t_5 = (__pyx_v_k != (__pyx_v_l_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":327
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwr_real_t_enum, 2, u_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_327_24->Target(__site_call1_327_24, __pyx_context, __pyx_t_4, ((System::Object^)"(k == l.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":328
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n             # <<<<<<<<<<<<<<
 *     u_ = fw_asfortranarray(u, fwr_real_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:
 */
  (__pyx_v_u_shape[0]) = __pyx_v_k;
  (__pyx_v_u_shape[1]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":329
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwr_real_t_enum, 2, u_shape, False, True)             # <<<<<<<<<<<<<<
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_u, NPY_FLOAT, 2, __pyx_v_u_shape, 0, 1, nullptr)); 
  __pyx_v_u_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":330
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwr_real_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_k != (__pyx_v_u_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":331
 *     u_ = fw_asfortranarray(u, fwr_real_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_331_24->Target(__site_call1_331_24, __pyx_context, __pyx_t_1, ((System::Object^)"(k == u.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":332
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.slu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwr_real_t*>np.PyArray_DATA(l_), <fwr_real_t*>np.PyArray_DATA(u_), <fwr_real_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 */
  __pyx_t_5 = (__pyx_v_n != (__pyx_v_u_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":333
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.slu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwr_real_t*>np.PyArray_DATA(l_), <fwr_real_t*>np.PyArray_DATA(u_), <fwr_real_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_333_24->Target(__site_call1_333_24, __pyx_context, __pyx_t_4, ((System::Object^)"(n == u.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":334
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.slu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwr_real_t*>np.PyArray_DATA(l_), <fwr_real_t*>np.PyArray_DATA(u_), <fwr_real_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)             # <<<<<<<<<<<<<<
 *     return (p_, l_, u_, info,)
 * def dlu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
 */
  F_FUNC(slu_c,SLU_C)(((fwr_real_t *)PyArray_DATA(__pyx_v_p_)), ((fwr_real_t *)PyArray_DATA(__pyx_v_l_)), ((fwr_real_t *)PyArray_DATA(__pyx_v_u_)), ((fwr_real_t *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_k), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info), (&__pyx_v_permute_l), (&__pyx_v_m1));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":335
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.slu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwr_real_t*>np.PyArray_DATA(l_), <fwr_real_t*>np.PyArray_DATA(u_), <fwr_real_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)             # <<<<<<<<<<<<<<
 * def dlu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
 *     """dlu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)
 */
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_p_), ((System::Object^)__pyx_v_l_), ((System::Object^)__pyx_v_u_), __pyx_t_1});
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":336
 *     fc.slu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwr_real_t*>np.PyArray_DATA(l_), <fwr_real_t*>np.PyArray_DATA(u_), <fwr_real_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)
 * def dlu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):             # <<<<<<<<<<<<<<
 *     """dlu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)
 * 
 */

static System::Object^ dlu_c(System::Object^ a, [InteropServices::Optional]System::Object^ permute_l, [InteropServices::Optional]System::Object^ overwrite_a, [InteropServices::Optional]System::Object^ p, [InteropServices::Optional]System::Object^ l, [InteropServices::Optional]System::Object^ u) {
  System::Object^ __pyx_v_a = nullptr;
  fwi_integer_t __pyx_v_permute_l;
  int __pyx_v_overwrite_a;
  System::Object^ __pyx_v_p = nullptr;
  System::Object^ __pyx_v_l = nullptr;
  System::Object^ __pyx_v_u = nullptr;
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_k;
  fwi_integer_t __pyx_v_m1;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_p_;
  NumpyDotNet::ndarray^ __pyx_v_l_;
  NumpyDotNet::ndarray^ __pyx_v_u_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_p_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_l_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_u_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  fwi_integer_t __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  long __pyx_t_6;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(permute_l) == nullptr) {
    __pyx_v_permute_l = __site_cvt_cvt_fwi_integer_t_336_0->Target(__site_cvt_cvt_fwi_integer_t_336_0, permute_l);
  } else {
    __pyx_v_permute_l = ((fwi_integer_t)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_336_0->Target(__site_cvt_cvt_int_336_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(p) == nullptr) {
    __pyx_v_p = p;
  } else {
    __pyx_v_p = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(l) == nullptr) {
    __pyx_v_l = l;
  } else {
    __pyx_v_l = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(u) == nullptr) {
    __pyx_v_u = u;
  } else {
    __pyx_v_u = ((System::Object^)nullptr);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_p_ = nullptr;
  __pyx_v_l_ = nullptr;
  __pyx_v_u_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":359
 *     cdef np.ndarray a_, p_, l_, u_, piv_
 *     cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     m = a_shape[0]
 *     n = a_shape[1]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_DOUBLE, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":360
 *     cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
 *     m = a_shape[0]             # <<<<<<<<<<<<<<
 *     n = a_shape[1]
 *     k = m if (m < n) else n
 */
  __pyx_v_m = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":361
 *     a_ = fw_asfortranarray(a, fwr_dbl_t_enum, 2, a_shape, not overwrite_a, False)
 *     m = a_shape[0]
 *     n = a_shape[1]             # <<<<<<<<<<<<<<
 *     k = m if (m < n) else n
 *     piv_shape[0] = k
 */
  __pyx_v_n = (__pyx_v_a_shape[1]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":362
 *     m = a_shape[0]
 *     n = a_shape[1]
 *     k = m if (m < n) else n             # <<<<<<<<<<<<<<
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  if ((__pyx_v_m < __pyx_v_n)) {
    __pyx_t_2 = __pyx_v_m;
  } else {
    __pyx_t_2 = __pyx_v_n;
  }
  __pyx_v_k = __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":363
 *     n = a_shape[1]
 *     k = m if (m < n) else n
 *     piv_shape[0] = k             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":364
 *     k = m if (m < n) else n
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if m != a_shape[0]:
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":365
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":366
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if m != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_3 = (__pyx_v_m != (__pyx_v_a_shape[0]));
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":367
 *     info = 0
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_367_24->Target(__site_call1_367_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m == a.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":368
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m
 */
  __pyx_t_3 = (0 <= __pyx_v_n);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":369
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_369_24->Target(__site_call1_369_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":370
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m             # <<<<<<<<<<<<<<
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
 */
  if (__pyx_v_permute_l) {
    __pyx_t_6 = 1;
  } else {
    __pyx_t_6 = __pyx_v_m;
  }
  __pyx_v_m1 = __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":371
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1             # <<<<<<<<<<<<<<
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:
 */
  (__pyx_v_p_shape[0]) = __pyx_v_m1;
  (__pyx_v_p_shape[1]) = __pyx_v_m1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":372
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_p, NPY_DOUBLE, 2, __pyx_v_p_shape, 0, 1, nullptr)); 
  __pyx_v_p_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":373
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_m1 != (__pyx_v_p_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":374
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_374_24->Target(__site_call1_374_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m1 == p.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":375
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k
 */
  __pyx_t_5 = (__pyx_v_m1 != (__pyx_v_p_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":376
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwr_dbl_t_enum, 2, l_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_376_24->Target(__site_call1_376_24, __pyx_context, __pyx_t_4, ((System::Object^)"(m1 == p.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":377
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k             # <<<<<<<<<<<<<<
 *     l_ = fw_asfortranarray(l, fwr_dbl_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:
 */
  (__pyx_v_l_shape[0]) = __pyx_v_m;
  (__pyx_v_l_shape[1]) = __pyx_v_k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":378
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwr_dbl_t_enum, 2, l_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_l, NPY_DOUBLE, 2, __pyx_v_l_shape, 0, 1, nullptr)); 
  __pyx_v_l_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":379
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwr_dbl_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_m != (__pyx_v_l_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":380
 *     l_ = fw_asfortranarray(l, fwr_dbl_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_380_24->Target(__site_call1_380_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m == l.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":381
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n
 */
  __pyx_t_5 = (__pyx_v_k != (__pyx_v_l_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":382
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwr_dbl_t_enum, 2, u_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_382_24->Target(__site_call1_382_24, __pyx_context, __pyx_t_4, ((System::Object^)"(k == l.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":383
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n             # <<<<<<<<<<<<<<
 *     u_ = fw_asfortranarray(u, fwr_dbl_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:
 */
  (__pyx_v_u_shape[0]) = __pyx_v_k;
  (__pyx_v_u_shape[1]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":384
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwr_dbl_t_enum, 2, u_shape, False, True)             # <<<<<<<<<<<<<<
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_u, NPY_DOUBLE, 2, __pyx_v_u_shape, 0, 1, nullptr)); 
  __pyx_v_u_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":385
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwr_dbl_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_k != (__pyx_v_u_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":386
 *     u_ = fw_asfortranarray(u, fwr_dbl_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_386_24->Target(__site_call1_386_24, __pyx_context, __pyx_t_1, ((System::Object^)"(k == u.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":387
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.dlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwr_dbl_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 */
  __pyx_t_5 = (__pyx_v_n != (__pyx_v_u_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":388
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.dlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwr_dbl_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_388_24->Target(__site_call1_388_24, __pyx_context, __pyx_t_4, ((System::Object^)"(n == u.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":389
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.dlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwr_dbl_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)             # <<<<<<<<<<<<<<
 *     return (p_, l_, u_, info,)
 * def clu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
 */
  F_FUNC(dlu_c,DLU_C)(((fwr_dbl_t *)PyArray_DATA(__pyx_v_p_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_l_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_u_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_k), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info), (&__pyx_v_permute_l), (&__pyx_v_m1));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":390
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.dlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwr_dbl_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)             # <<<<<<<<<<<<<<
 * def clu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
 *     """clu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)
 */
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_p_), ((System::Object^)__pyx_v_l_), ((System::Object^)__pyx_v_u_), __pyx_t_1});
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":391
 *     fc.dlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwr_dbl_t*>np.PyArray_DATA(l_), <fwr_dbl_t*>np.PyArray_DATA(u_), <fwr_dbl_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)
 * def clu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):             # <<<<<<<<<<<<<<
 *     """clu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)
 * 
 */

static System::Object^ clu_c(System::Object^ a, [InteropServices::Optional]System::Object^ permute_l, [InteropServices::Optional]System::Object^ overwrite_a, [InteropServices::Optional]System::Object^ p, [InteropServices::Optional]System::Object^ l, [InteropServices::Optional]System::Object^ u) {
  System::Object^ __pyx_v_a = nullptr;
  fwi_integer_t __pyx_v_permute_l;
  int __pyx_v_overwrite_a;
  System::Object^ __pyx_v_p = nullptr;
  System::Object^ __pyx_v_l = nullptr;
  System::Object^ __pyx_v_u = nullptr;
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_k;
  fwi_integer_t __pyx_v_m1;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_p_;
  NumpyDotNet::ndarray^ __pyx_v_l_;
  NumpyDotNet::ndarray^ __pyx_v_u_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_p_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_l_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_u_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  fwi_integer_t __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  long __pyx_t_6;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(permute_l) == nullptr) {
    __pyx_v_permute_l = __site_cvt_cvt_fwi_integer_t_391_0->Target(__site_cvt_cvt_fwi_integer_t_391_0, permute_l);
  } else {
    __pyx_v_permute_l = ((fwi_integer_t)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_391_0->Target(__site_cvt_cvt_int_391_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(p) == nullptr) {
    __pyx_v_p = p;
  } else {
    __pyx_v_p = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(l) == nullptr) {
    __pyx_v_l = l;
  } else {
    __pyx_v_l = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(u) == nullptr) {
    __pyx_v_u = u;
  } else {
    __pyx_v_u = ((System::Object^)nullptr);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_p_ = nullptr;
  __pyx_v_l_ = nullptr;
  __pyx_v_u_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":414
 *     cdef np.ndarray a_, p_, l_, u_, piv_
 *     cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     m = a_shape[0]
 *     n = a_shape[1]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_CFLOAT, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":415
 *     cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
 *     m = a_shape[0]             # <<<<<<<<<<<<<<
 *     n = a_shape[1]
 *     k = m if (m < n) else n
 */
  __pyx_v_m = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":416
 *     a_ = fw_asfortranarray(a, fwc_complex_t_enum, 2, a_shape, not overwrite_a, False)
 *     m = a_shape[0]
 *     n = a_shape[1]             # <<<<<<<<<<<<<<
 *     k = m if (m < n) else n
 *     piv_shape[0] = k
 */
  __pyx_v_n = (__pyx_v_a_shape[1]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":417
 *     m = a_shape[0]
 *     n = a_shape[1]
 *     k = m if (m < n) else n             # <<<<<<<<<<<<<<
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  if ((__pyx_v_m < __pyx_v_n)) {
    __pyx_t_2 = __pyx_v_m;
  } else {
    __pyx_t_2 = __pyx_v_n;
  }
  __pyx_v_k = __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":418
 *     n = a_shape[1]
 *     k = m if (m < n) else n
 *     piv_shape[0] = k             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":419
 *     k = m if (m < n) else n
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if m != a_shape[0]:
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":420
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":421
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if m != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_3 = (__pyx_v_m != (__pyx_v_a_shape[0]));
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":422
 *     info = 0
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_422_24->Target(__site_call1_422_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m == a.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":423
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m
 */
  __pyx_t_3 = (0 <= __pyx_v_n);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":424
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_424_24->Target(__site_call1_424_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":425
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m             # <<<<<<<<<<<<<<
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
 */
  if (__pyx_v_permute_l) {
    __pyx_t_6 = 1;
  } else {
    __pyx_t_6 = __pyx_v_m;
  }
  __pyx_v_m1 = __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":426
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1             # <<<<<<<<<<<<<<
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:
 */
  (__pyx_v_p_shape[0]) = __pyx_v_m1;
  (__pyx_v_p_shape[1]) = __pyx_v_m1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":427
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_p, NPY_FLOAT, 2, __pyx_v_p_shape, 0, 1, nullptr)); 
  __pyx_v_p_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":428
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_m1 != (__pyx_v_p_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":429
 *     p_ = fw_asfortranarray(p, fwr_real_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_429_24->Target(__site_call1_429_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m1 == p.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":430
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k
 */
  __pyx_t_5 = (__pyx_v_m1 != (__pyx_v_p_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":431
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwc_complex_t_enum, 2, l_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_431_24->Target(__site_call1_431_24, __pyx_context, __pyx_t_4, ((System::Object^)"(m1 == p.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":432
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k             # <<<<<<<<<<<<<<
 *     l_ = fw_asfortranarray(l, fwc_complex_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:
 */
  (__pyx_v_l_shape[0]) = __pyx_v_m;
  (__pyx_v_l_shape[1]) = __pyx_v_k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":433
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwc_complex_t_enum, 2, l_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_l, NPY_CFLOAT, 2, __pyx_v_l_shape, 0, 1, nullptr)); 
  __pyx_v_l_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":434
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwc_complex_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_m != (__pyx_v_l_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":435
 *     l_ = fw_asfortranarray(l, fwc_complex_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_435_24->Target(__site_call1_435_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m == l.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":436
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n
 */
  __pyx_t_5 = (__pyx_v_k != (__pyx_v_l_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":437
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwc_complex_t_enum, 2, u_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_437_24->Target(__site_call1_437_24, __pyx_context, __pyx_t_4, ((System::Object^)"(k == l.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":438
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n             # <<<<<<<<<<<<<<
 *     u_ = fw_asfortranarray(u, fwc_complex_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:
 */
  (__pyx_v_u_shape[0]) = __pyx_v_k;
  (__pyx_v_u_shape[1]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":439
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwc_complex_t_enum, 2, u_shape, False, True)             # <<<<<<<<<<<<<<
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_u, NPY_CFLOAT, 2, __pyx_v_u_shape, 0, 1, nullptr)); 
  __pyx_v_u_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":440
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwc_complex_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_k != (__pyx_v_u_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":441
 *     u_ = fw_asfortranarray(u, fwc_complex_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_441_24->Target(__site_call1_441_24, __pyx_context, __pyx_t_1, ((System::Object^)"(k == u.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":442
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.clu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwc_complex_t*>np.PyArray_DATA(l_), <fwc_complex_t*>np.PyArray_DATA(u_), <fwc_complex_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 */
  __pyx_t_5 = (__pyx_v_n != (__pyx_v_u_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":443
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.clu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwc_complex_t*>np.PyArray_DATA(l_), <fwc_complex_t*>np.PyArray_DATA(u_), <fwc_complex_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_443_24->Target(__site_call1_443_24, __pyx_context, __pyx_t_4, ((System::Object^)"(n == u.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":444
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.clu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwc_complex_t*>np.PyArray_DATA(l_), <fwc_complex_t*>np.PyArray_DATA(u_), <fwc_complex_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)             # <<<<<<<<<<<<<<
 *     return (p_, l_, u_, info,)
 * def zlu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
 */
  F_FUNC(clu_c,CLU_C)(((fwr_real_t *)PyArray_DATA(__pyx_v_p_)), ((__pyx_t_float_complex *)PyArray_DATA(__pyx_v_l_)), ((__pyx_t_float_complex *)PyArray_DATA(__pyx_v_u_)), ((__pyx_t_float_complex *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_k), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info), (&__pyx_v_permute_l), (&__pyx_v_m1));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":445
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.clu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwc_complex_t*>np.PyArray_DATA(l_), <fwc_complex_t*>np.PyArray_DATA(u_), <fwc_complex_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)             # <<<<<<<<<<<<<<
 * def zlu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):
 *     """zlu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)
 */
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_p_), ((System::Object^)__pyx_v_l_), ((System::Object^)__pyx_v_u_), __pyx_t_1});
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":446
 *     fc.clu_c(<fwr_real_t*>np.PyArray_DATA(p_), <fwc_complex_t*>np.PyArray_DATA(l_), <fwc_complex_t*>np.PyArray_DATA(u_), <fwc_complex_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)
 * def zlu_c(object a, fwi_integer_t permute_l=0, bint overwrite_a=False, object p=None, object l=None, object u=None):             # <<<<<<<<<<<<<<
 *     """zlu_c(a[, permute_l, overwrite_a, p, l, u]) -> (p, l, u, info)
 * 
 */

static System::Object^ zlu_c(System::Object^ a, [InteropServices::Optional]System::Object^ permute_l, [InteropServices::Optional]System::Object^ overwrite_a, [InteropServices::Optional]System::Object^ p, [InteropServices::Optional]System::Object^ l, [InteropServices::Optional]System::Object^ u) {
  System::Object^ __pyx_v_a = nullptr;
  fwi_integer_t __pyx_v_permute_l;
  int __pyx_v_overwrite_a;
  System::Object^ __pyx_v_p = nullptr;
  System::Object^ __pyx_v_l = nullptr;
  System::Object^ __pyx_v_u = nullptr;
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_k;
  fwi_integer_t __pyx_v_m1;
  fwi_integer_t __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  NumpyDotNet::ndarray^ __pyx_v_p_;
  NumpyDotNet::ndarray^ __pyx_v_l_;
  NumpyDotNet::ndarray^ __pyx_v_u_;
  NumpyDotNet::ndarray^ __pyx_v_piv_;
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_p_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_l_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_u_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_piv_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  fwi_integer_t __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  long __pyx_t_6;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(permute_l) == nullptr) {
    __pyx_v_permute_l = __site_cvt_cvt_fwi_integer_t_446_0->Target(__site_cvt_cvt_fwi_integer_t_446_0, permute_l);
  } else {
    __pyx_v_permute_l = ((fwi_integer_t)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_a) == nullptr) {
    __pyx_v_overwrite_a = __site_cvt_cvt_int_446_0->Target(__site_cvt_cvt_int_446_0, overwrite_a);
  } else {
    __pyx_v_overwrite_a = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(p) == nullptr) {
    __pyx_v_p = p;
  } else {
    __pyx_v_p = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(l) == nullptr) {
    __pyx_v_l = l;
  } else {
    __pyx_v_l = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(u) == nullptr) {
    __pyx_v_u = u;
  } else {
    __pyx_v_u = ((System::Object^)nullptr);
  }
  __pyx_v_a_ = nullptr;
  __pyx_v_p_ = nullptr;
  __pyx_v_l_ = nullptr;
  __pyx_v_u_ = nullptr;
  __pyx_v_piv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":469
 *     cdef np.ndarray a_, p_, l_, u_, piv_
 *     cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)             # <<<<<<<<<<<<<<
 *     m = a_shape[0]
 *     n = a_shape[1]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_CDOUBLE, 2, __pyx_v_a_shape, (!__pyx_v_overwrite_a), 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":470
 *     cdef np.npy_intp a_shape[2], p_shape[2], l_shape[2], u_shape[2], piv_shape[1]
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
 *     m = a_shape[0]             # <<<<<<<<<<<<<<
 *     n = a_shape[1]
 *     k = m if (m < n) else n
 */
  __pyx_v_m = (__pyx_v_a_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":471
 *     a_ = fw_asfortranarray(a, fwc_complex_x16_t_enum, 2, a_shape, not overwrite_a, False)
 *     m = a_shape[0]
 *     n = a_shape[1]             # <<<<<<<<<<<<<<
 *     k = m if (m < n) else n
 *     piv_shape[0] = k
 */
  __pyx_v_n = (__pyx_v_a_shape[1]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":472
 *     m = a_shape[0]
 *     n = a_shape[1]
 *     k = m if (m < n) else n             # <<<<<<<<<<<<<<
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 */
  if ((__pyx_v_m < __pyx_v_n)) {
    __pyx_t_2 = __pyx_v_m;
  } else {
    __pyx_t_2 = __pyx_v_n;
  }
  __pyx_v_k = __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":473
 *     n = a_shape[1]
 *     k = m if (m < n) else n
 *     piv_shape[0] = k             # <<<<<<<<<<<<<<
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 */
  (__pyx_v_piv_shape[0]) = __pyx_v_k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":474
 *     k = m if (m < n) else n
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)             # <<<<<<<<<<<<<<
 *     info = 0
 *     if m != a_shape[0]:
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_INT, 1, __pyx_v_piv_shape, 0, 1, nullptr)); 
  __pyx_v_piv_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":475
 *     piv_shape[0] = k
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0             # <<<<<<<<<<<<<<
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 */
  __pyx_v_info = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":476
 *     piv_ = fw_asfortranarray(None, fwi_integer_t_enum, 1, piv_shape, False, True)
 *     info = 0
 *     if m != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 */
  __pyx_t_3 = (__pyx_v_m != (__pyx_v_a_shape[0]));
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":477
 *     info = 0
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_477_24->Target(__site_call1_477_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m == a.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":478
 *     if m != a_shape[0]:
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m
 */
  __pyx_t_3 = (0 <= __pyx_v_n);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_n <= (__pyx_v_a_shape[1]));
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":479
 *         raise ValueError("(m == a.shape[0]) not satisifed")
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_479_24->Target(__site_call1_479_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n <= a.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":480
 *     if not (0 <= n <= a_shape[1]):
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m             # <<<<<<<<<<<<<<
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
 */
  if (__pyx_v_permute_l) {
    __pyx_t_6 = 1;
  } else {
    __pyx_t_6 = __pyx_v_m;
  }
  __pyx_v_m1 = __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":481
 *         raise ValueError("(0 <= n <= a.shape[1]) not satisifed")
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1             # <<<<<<<<<<<<<<
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:
 */
  (__pyx_v_p_shape[0]) = __pyx_v_m1;
  (__pyx_v_p_shape[1]) = __pyx_v_m1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":482
 *     m1 = 1 if permute_l else m
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_p, NPY_DOUBLE, 2, __pyx_v_p_shape, 0, 1, nullptr)); 
  __pyx_v_p_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":483
 *     p_shape[0] = m1; p_shape[1] = m1
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_m1 != (__pyx_v_p_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":484
 *     p_ = fw_asfortranarray(p, fwr_dbl_t_enum, 2, p_shape, False, True)
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_484_24->Target(__site_call1_484_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m1 == p.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":485
 *     if m1 != p_shape[0]:
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k
 */
  __pyx_t_5 = (__pyx_v_m1 != (__pyx_v_p_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":486
 *         raise ValueError("(m1 == p.shape[0]) not satisifed")
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwc_complex_x16_t_enum, 2, l_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_486_24->Target(__site_call1_486_24, __pyx_context, __pyx_t_4, ((System::Object^)"(m1 == p.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":487
 *     if m1 != p_shape[1]:
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k             # <<<<<<<<<<<<<<
 *     l_ = fw_asfortranarray(l, fwc_complex_x16_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:
 */
  (__pyx_v_l_shape[0]) = __pyx_v_m;
  (__pyx_v_l_shape[1]) = __pyx_v_k;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":488
 *         raise ValueError("(m1 == p.shape[1]) not satisifed")
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwc_complex_x16_t_enum, 2, l_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_l, NPY_CDOUBLE, 2, __pyx_v_l_shape, 0, 1, nullptr)); 
  __pyx_v_l_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":489
 *     l_shape[0] = m; l_shape[1] = k
 *     l_ = fw_asfortranarray(l, fwc_complex_x16_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_m != (__pyx_v_l_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":490
 *     l_ = fw_asfortranarray(l, fwc_complex_x16_t_enum, 2, l_shape, False, True)
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_490_24->Target(__site_call1_490_24, __pyx_context, __pyx_t_1, ((System::Object^)"(m == l.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":491
 *     if m != l_shape[0]:
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n
 */
  __pyx_t_5 = (__pyx_v_k != (__pyx_v_l_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":492
 *         raise ValueError("(m == l.shape[0]) not satisifed")
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwc_complex_x16_t_enum, 2, u_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_492_24->Target(__site_call1_492_24, __pyx_context, __pyx_t_4, ((System::Object^)"(k == l.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":493
 *     if k != l_shape[1]:
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n             # <<<<<<<<<<<<<<
 *     u_ = fw_asfortranarray(u, fwc_complex_x16_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:
 */
  (__pyx_v_u_shape[0]) = __pyx_v_k;
  (__pyx_v_u_shape[1]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":494
 *         raise ValueError("(k == l.shape[1]) not satisifed")
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwc_complex_x16_t_enum, 2, u_shape, False, True)             # <<<<<<<<<<<<<<
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_u, NPY_CDOUBLE, 2, __pyx_v_u_shape, 0, 1, nullptr)); 
  __pyx_v_u_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":495
 *     u_shape[0] = k; u_shape[1] = n
 *     u_ = fw_asfortranarray(u, fwc_complex_x16_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:
 */
  __pyx_t_5 = (__pyx_v_k != (__pyx_v_u_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":496
 *     u_ = fw_asfortranarray(u, fwc_complex_x16_t_enum, 2, u_shape, False, True)
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_496_24->Target(__site_call1_496_24, __pyx_context, __pyx_t_1, ((System::Object^)"(k == u.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":497
 *     if k != u_shape[0]:
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.zlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwc_complex_x16_t*>np.PyArray_DATA(l_), <fwc_complex_x16_t*>np.PyArray_DATA(u_), <fwc_complex_x16_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 */
  __pyx_t_5 = (__pyx_v_n != (__pyx_v_u_shape[1]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":498
 *         raise ValueError("(k == u.shape[0]) not satisifed")
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.zlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwc_complex_x16_t*>np.PyArray_DATA(l_), <fwc_complex_x16_t*>np.PyArray_DATA(u_), <fwc_complex_x16_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_498_24->Target(__site_call1_498_24, __pyx_context, __pyx_t_4, ((System::Object^)"(n == u.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":499
 *     if n != u_shape[1]:
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.zlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwc_complex_x16_t*>np.PyArray_DATA(l_), <fwc_complex_x16_t*>np.PyArray_DATA(u_), <fwc_complex_x16_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)             # <<<<<<<<<<<<<<
 *     return (p_, l_, u_, info,)
 * 
 */
  F_FUNC(zlu_c,ZLU_C)(((fwr_dbl_t *)PyArray_DATA(__pyx_v_p_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_l_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_u_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_k), ((fwi_integer_t *)PyArray_DATA(__pyx_v_piv_)), (&__pyx_v_info), (&__pyx_v_permute_l), (&__pyx_v_m1));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":500
 *         raise ValueError("(n == u.shape[1]) not satisifed")
 *     fc.zlu_c(<fwr_dbl_t*>np.PyArray_DATA(p_), <fwc_complex_x16_t*>np.PyArray_DATA(l_), <fwc_complex_x16_t*>np.PyArray_DATA(u_), <fwc_complex_x16_t*>np.PyArray_DATA(a_), &m, &n, &k, <fwi_integer_t*>np.PyArray_DATA(piv_), &info, &permute_l, &m1)
 *     return (p_, l_, u_, info,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = __pyx_v_info;
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_p_), ((System::Object^)__pyx_v_l_), ((System::Object^)__pyx_v_u_), __pyx_t_1});
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":504
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

static  NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^ __pyx_v_value, int __pyx_v_typenum, int __pyx_v_ndim, __pyx_t_5numpy_intp_t *__pyx_v_coerced_shape, int __pyx_v_copy, int __pyx_v_create, ref struct __pyx_opt_args_5scipy_6linalg_8_flinalg_fw_asfortranarray ^__pyx_optional_args) {
  int __pyx_v_alignment = ((int)1);
  int __pyx_v_flags;
  NumpyDotNet::ndarray^ __pyx_v_result;
  __pyx_t_5numpy_npy_intp *__pyx_v_in_shape;
  int __pyx_v_in_ndim;
  int __pyx_v_i;
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  System::Object^ __pyx_t_8 = nullptr;
  int __pyx_t_9;
  int __pyx_t_10;
  int __pyx_t_11;
  if (__pyx_optional_args) {
    if (__pyx_optional_args->__pyx_n > 0) {
      __pyx_v_alignment = __pyx_optional_args->alignment;
    }
  }
  __pyx_v_result = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":507
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST             # <<<<<<<<<<<<<<
 *     cdef np.ndarray result
 *     cdef np.npy_intp * in_shape
 */
  __pyx_v_flags = (NPY_F_CONTIGUOUS | NPY_FORCECAST);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":512
 *     cdef int in_ndim
 *     cdef int i
 *     if value is None:             # <<<<<<<<<<<<<<
 *         if create:
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 */
  __pyx_t_1 = (__pyx_v_value == nullptr);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":513
 *     cdef int i
 *     if value is None:
 *         if create:             # <<<<<<<<<<<<<<
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 */
    if (__pyx_v_create) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":514
 *     if value is None:
 *         if create:
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)             # <<<<<<<<<<<<<<
 *         else:
 *             raise TypeError('Expected array but None provided')
 */
      __pyx_t_2 = PyArray_ZEROS(__pyx_v_ndim, __pyx_v_coerced_shape, __pyx_v_typenum, 1); 
      if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_result = ((NumpyDotNet::ndarray^)__pyx_t_2);
      __pyx_t_2 = nullptr;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":516
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 *             raise TypeError('Expected array but None provided')             # <<<<<<<<<<<<<<
 *     else:
 *         if ndim <= 1:
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
      __pyx_t_3 = __site_call1_516_27->Target(__site_call1_516_27, __pyx_context, __pyx_t_2, ((System::Object^)"Expected array but None provided"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
    }
    __pyx_L4:;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":518
 *             raise TypeError('Expected array but None provided')
 *     else:
 *         if ndim <= 1:             # <<<<<<<<<<<<<<
 *             # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *             flags |= np.NPY_C_CONTIGUOUS
 */
    __pyx_t_1 = (__pyx_v_ndim <= 1);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":520
 *         if ndim <= 1:
 *             # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *             flags |= np.NPY_C_CONTIGUOUS             # <<<<<<<<<<<<<<
 *         if (not copy and alignment > 1 and np.PyArray_Check(value) and
 *             (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):
 */
      __pyx_v_flags |= NPY_C_CONTIGUOUS;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":521
 *             # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *             flags |= np.NPY_C_CONTIGUOUS
 *         if (not copy and alignment > 1 and np.PyArray_Check(value) and             # <<<<<<<<<<<<<<
 *             (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):
 *             # mis-aligned array
 */
    __pyx_t_1 = (!__pyx_v_copy);
    if (__pyx_t_1) {
      __pyx_t_4 = (__pyx_v_alignment > 1);
      if (__pyx_t_4) {
        __pyx_t_3 = PyArray_Check(__pyx_v_value); 
        __pyx_t_5 = __site_istrue_521_59->Target(__site_istrue_521_59, __pyx_t_3);
        __pyx_t_3 = nullptr;
        if (__pyx_t_5) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":522
 *             flags |= np.NPY_C_CONTIGUOUS
 *         if (not copy and alignment > 1 and np.PyArray_Check(value) and
 *             (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):             # <<<<<<<<<<<<<<
 *             # mis-aligned array
 *             copy = True
 */
          if (__pyx_v_value != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_value) == nullptr) {
            throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
          }
          __pyx_t_6 = ((((Py_ssize_t)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_value))) & (__pyx_v_alignment - 1)) != 0);
          __pyx_t_7 = __pyx_t_6;
        } else {
          __pyx_t_7 = __pyx_t_5;
        }
        __pyx_t_5 = __pyx_t_7;
      } else {
        __pyx_t_5 = __pyx_t_4;
      }
      __pyx_t_4 = __pyx_t_5;
    } else {
      __pyx_t_4 = __pyx_t_1;
    }
    if (__pyx_t_4) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":524
 *             (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):
 *             # mis-aligned array
 *             copy = True             # <<<<<<<<<<<<<<
 *         if copy:
 *             flags |= np.NPY_ENSURECOPY
 */
      __pyx_v_copy = 1;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":525
 *             # mis-aligned array
 *             copy = True
 *         if copy:             # <<<<<<<<<<<<<<
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 */
    if (__pyx_v_copy) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":526
 *             copy = True
 *         if copy:
 *             flags |= np.NPY_ENSURECOPY             # <<<<<<<<<<<<<<
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)
 */
      __pyx_v_flags |= NPY_ENSURECOPY;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":527
 *         if copy:
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)             # <<<<<<<<<<<<<<
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:
 */
    __pyx_t_3 = __pyx_v_typenum;
    __pyx_t_2 = __pyx_v_flags;
    __pyx_t_8 = PyArray_FROMANY(__pyx_v_value, __pyx_t_3, __pyx_int_0, __pyx_int_0, __pyx_t_2); 
    __pyx_t_3 = nullptr;
    __pyx_t_2 = nullptr;
    if (__pyx_t_8 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_result = ((NumpyDotNet::ndarray^)__pyx_t_8);
    __pyx_t_8 = nullptr;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":528
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)             # <<<<<<<<<<<<<<
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 */
  __pyx_t_8 = PyArray_NDIM(__pyx_v_result); 
  __pyx_t_9 = __site_cvt_cvt_int_528_29->Target(__site_cvt_cvt_int_528_29, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_v_in_ndim = __pyx_t_9;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":529
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:             # <<<<<<<<<<<<<<
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 */
  __pyx_t_4 = (__pyx_v_in_ndim > __pyx_v_ndim);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":530
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)             # <<<<<<<<<<<<<<
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __pyx_v_ndim;
    __pyx_t_3 = __site_op_mod_530_60->Target(__site_op_mod_530_60, ((System::Object^)"Dimension of array must be <= %d"), __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_530_24->Target(__site_call1_530_24, __pyx_context, __pyx_t_8, ((System::Object^)__pyx_t_3));
    __pyx_t_8 = nullptr;
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":531
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 */
  __pyx_v_in_shape = PyArray_DIMS(__pyx_v_result);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":532
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):             # <<<<<<<<<<<<<<
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):
 */
  __pyx_t_10 = __pyx_v_in_ndim;
  for (__pyx_t_11 = 0; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":533
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = (__pyx_v_in_shape[__pyx_v_i]);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":534
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):             # <<<<<<<<<<<<<<
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1
 */
  __pyx_t_10 = __pyx_v_ndim;
  for (__pyx_t_11 = __pyx_v_in_ndim; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":536
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1             # <<<<<<<<<<<<<<
 *     return result
 * 
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = 1;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":537
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1
 *     return result             # <<<<<<<<<<<<<<
 * 
 * # Fwrap configuration:
 */
  __pyx_r = __pyx_v_result;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
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
 *     import NumpyDotNet.NpyArray
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
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.ArrayReturn(arr)
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":374
 *         return None
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.ArrayReturn(arr)
 * 
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":375
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.ArrayReturn(arr)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):
 */
  __pyx_t_2 = __site_get_NpyArray_375_22->Target(__site_get_NpyArray_375_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_3 = __site_get_ArrayReturn_375_31->Target(__site_get_ArrayReturn_375_31, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call1_375_43->Target(__site_call1_375_43, __pyx_context, __pyx_t_3, __pyx_v_arr);
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":377
 *     return NumpyDotNet.NpyArray.ArrayReturn(arr)
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

/* "../cython/include\numpy.pxd":440
 *     return isinstance(obj, np.ndarray)
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 * 
 */

static CYTHON_INLINE void import_array(void) {

}

/* "../cython/include\numpy.pxd":443
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

  /* "../cython/include\numpy.pxd":444
 * 
 * cdef inline PyNumber_Check(o):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":445
 * cdef inline PyNumber_Check(o):
 *     import clr
 *     import NumpyDotNet.ScalarGeneric             # <<<<<<<<<<<<<<
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ScalarGeneric", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":446
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

/* "../cython/include\numpy.pxd":448
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

  /* "../cython/include\numpy.pxd":449
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

/* "../cython/include\numpy.pxd":451
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

  /* "../cython/include\numpy.pxd":452
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

/* "../cython/include\numpy.pxd":454
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_NEXT(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_NEXT(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include\numpy.pxd":455
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 *     NpyArray_ITER_NEXT(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_NEXT(__pyx_v_obj);

}

/* "../cython/include\numpy.pxd":457
 *     NpyArray_ITER_NEXT(obj)
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_RESET(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_RESET(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include\numpy.pxd":458
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 *     NpyArray_ITER_RESET(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_RESET(__pyx_v_obj);

}

/* "../cython/include\numpy.pxd":460
 *     NpyArray_ITER_RESET(obj)
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     return NpyArray_ITER_DATA(obj)
 * 
 */

static CYTHON_INLINE void *PyArray_ITER_DATA(NpyArrayIterObject *__pyx_v_obj) {
  void *__pyx_r;

  /* "../cython/include\numpy.pxd":461
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

/* "../cython/include\numpy.pxd":463
 *     return NpyArray_ITER_DATA(obj)
 * 
 * cdef inline NpyArrayNeighborhoodIterObject* PyArray_NeighborhoodIterNew(NpyArrayIterObject *obj,             # <<<<<<<<<<<<<<
 *                                                                         npy_intp *bounds,
 *                                                                         int mode,
 */

static CYTHON_INLINE NpyArrayNeighborhoodIterObject *PyArray_NeighborhoodIterNew(NpyArrayIterObject *__pyx_v_obj, __pyx_t_5numpy_npy_intp *__pyx_v_bounds, int __pyx_v_mode, void *__pyx_v_fill, npy_free_func __pyx_v_fillfree) {
  NpyArrayNeighborhoodIterObject *__pyx_r;

  /* "../cython/include\numpy.pxd":468
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

/* "../cython/include\numpy.pxd":470
 *     return NpyArray_NeighborhoodIterNew(obj, bounds, mode, fill, fillfree)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include\numpy.pxd":471
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

/* "../cython/include\numpy.pxd":473
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include\numpy.pxd":474
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

/* "../cython/include\numpy.pxd":476
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(iter.ao)
 */

static CYTHON_INLINE NumpyDotNet::ndarray^ NpyIter_ARRAY(NpyArrayIterObject *__pyx_v_iter) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":477
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
  __site_cvt_cvt_int_23_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_48_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_50_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_52_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_55_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_80_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_82_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_84_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_87_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_112_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_114_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_116_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_119_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_144_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_146_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_148_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_152_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_177_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_179_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_181_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_184_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_209_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_211_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_213_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_216_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_241_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_243_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_245_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_248_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_273_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_275_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_277_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_fwi_integer_t_281_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_281_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_312_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_314_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_319_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_321_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_325_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_327_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_331_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_333_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_fwi_integer_t_336_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_336_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_367_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_369_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_374_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_376_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_380_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_382_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_386_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_388_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_fwi_integer_t_391_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_391_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_422_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_424_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_429_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_431_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_435_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_437_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_441_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_443_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_fwi_integer_t_446_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_446_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_477_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_479_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_484_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_486_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_490_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_492_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_496_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_498_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_516_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_521_59 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_528_29 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_530_60 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_530_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  __site_get_NpyArray_375_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_ArrayReturn_375_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ArrayReturn", false));
  __site_call1_375_43 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  /*--- Execution code ---*/
  PythonDictionary^ __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":20
 * cimport _flinalg_fc as fc
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * cdef extern from "string.h":
 *     void *memcpy(void *dest, void *src, size_t n)
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\_flinalg.pyx":1
 * #cython: ccomplex=True             # <<<<<<<<<<<<<<
 * 
 * """The _flinalg module was generated with Fwrap v0.2.0dev_00843a8.
 */
  __pyx_t_1 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":476
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
[assembly: PythonModule("scipy__linalg___flinalg", module__flinalg::typeid)];
};
