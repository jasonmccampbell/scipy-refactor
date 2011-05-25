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
  dict["__module__"] = "scipy.signal.lfilter";
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
#define __PYX_HAVE_API__scipy__signal__lfilter
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
#include "sigtools.h"
#include "iterhelper.h"

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

typedef void (*__pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
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
/* Module declarations from scipy.signal.lfilter */
static __pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction get_filter_function(int); /*proto*/
static int zfill(NpyArray *, __pyx_t_5numpy_npy_intp, char *, __pyx_t_5numpy_npy_intp); /*proto*/
static int RawFilter(NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, int, __pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_6signal_7lfilter_FLOAT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static System::Object^ FLOAT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_6signal_7lfilter_CFLOAT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static System::Object^ CFLOAT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_6signal_7lfilter_DOUBLE_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static System::Object^ DOUBLE_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_6signal_7lfilter_CDOUBLE_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static System::Object^ CDOUBLE_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_6signal_7lfilter_EXTENDED_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static System::Object^ EXTENDED_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_6signal_7lfilter_CEXTENDED_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static System::Object^ CEXTENDED_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
static System::Object^ OBJECT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.signal.lfilter"

/* Implementation of scipy.signal.lfilter */
namespace clr_lfilter {
  public ref class module_lfilter sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_npy_NPY_FLOAT_30_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_30_15;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_30_15;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_npy_NPY_DOUBLE_32_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_32_17;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_32_17;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_npy_NPY_LONGDOUBLE_34_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_34_17;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_34_17;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_npy_NPY_CFLOAT_36_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_36_17;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_36_17;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_npy_NPY_CDOUBLE_38_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_38_17;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_38_17;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_npy_NPY_CLONGDOUBLE_40_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_40_17;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_40_17;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_49_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_Negate_69_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_69_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_69_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_69_70;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_gt_69_47;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_69_47;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_70_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_73_39;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_73_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_num_81_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_81_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_83_46;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_86_51;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_90_72;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_90_33;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_98_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyDataMem_FREE_100_6;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_100_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_106_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyDataMem_FREE_134_6;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_134_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_159_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_164_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_169_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_173_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_184_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_188_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_193_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_560_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_561_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_562_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_569_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_570_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_571_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_572_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_573_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_574_41;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_580_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_581_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_582_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_583_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_584_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_586_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_587_34;
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
static int^ __pyx_int_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":29
 *                                       np.npy_intp)
 * 
 * cdef BasicFilterFunction get_filter_function(int typenum):             # <<<<<<<<<<<<<<
 *     if typenum == np.npy_NPY_FLOAT:
 *         return <BasicFilterFunction>FLOAT_filt
 */

static  __pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction get_filter_function(int __pyx_v_typenum) {
  __pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":30
 * 
 * cdef BasicFilterFunction get_filter_function(int typenum):
 *     if typenum == np.npy_NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>FLOAT_filt
 *     elif typenum == np.npy_NPY_DOUBLE:
 */
  __pyx_t_1 = __pyx_v_typenum;
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_3 = __site_get_npy_NPY_FLOAT_30_20->Target(__site_get_npy_NPY_FLOAT_30_20, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_eq_30_15->Target(__site_op_eq_30_15, __pyx_t_1, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = __site_istrue_30_15->Target(__site_istrue_30_15, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_4) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":31
 * cdef BasicFilterFunction get_filter_function(int typenum):
 *     if typenum == np.npy_NPY_FLOAT:
 *         return <BasicFilterFunction>FLOAT_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.npy_NPY_DOUBLE:
 *         return <BasicFilterFunction>DOUBLE_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction)__pyx_function_pointer_FLOAT_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":32
 *     if typenum == np.npy_NPY_FLOAT:
 *         return <BasicFilterFunction>FLOAT_filt
 *     elif typenum == np.npy_NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>DOUBLE_filt
 *     elif typenum == np.npy_NPY_LONGDOUBLE:
 */
  __pyx_t_2 = __pyx_v_typenum;
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_npy_NPY_DOUBLE_32_22->Target(__site_get_npy_NPY_DOUBLE_32_22, __pyx_t_3, __pyx_context);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_eq_32_17->Target(__site_op_eq_32_17, __pyx_t_2, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_istrue_32_17->Target(__site_istrue_32_17, __pyx_t_3);
  __pyx_t_3 = nullptr;
  if (__pyx_t_4) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":33
 *         return <BasicFilterFunction>FLOAT_filt
 *     elif typenum == np.npy_NPY_DOUBLE:
 *         return <BasicFilterFunction>DOUBLE_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.npy_NPY_LONGDOUBLE:
 *         return <BasicFilterFunction>EXTENDED_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction)__pyx_function_pointer_DOUBLE_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":34
 *     elif typenum == np.npy_NPY_DOUBLE:
 *         return <BasicFilterFunction>DOUBLE_filt
 *     elif typenum == np.npy_NPY_LONGDOUBLE:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>EXTENDED_filt
 *     elif typenum == np.npy_NPY_CFLOAT:
 */
  __pyx_t_3 = __pyx_v_typenum;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_npy_NPY_LONGDOUBLE_34_22->Target(__site_get_npy_NPY_LONGDOUBLE_34_22, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_eq_34_17->Target(__site_op_eq_34_17, __pyx_t_3, __pyx_t_2);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_34_17->Target(__site_istrue_34_17, __pyx_t_1);
  __pyx_t_1 = nullptr;
  if (__pyx_t_4) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":35
 *         return <BasicFilterFunction>DOUBLE_filt
 *     elif typenum == np.npy_NPY_LONGDOUBLE:
 *         return <BasicFilterFunction>EXTENDED_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.npy_NPY_CFLOAT:
 *         return <BasicFilterFunction>CFLOAT_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction)__pyx_function_pointer_EXTENDED_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":36
 *     elif typenum == np.npy_NPY_LONGDOUBLE:
 *         return <BasicFilterFunction>EXTENDED_filt
 *     elif typenum == np.npy_NPY_CFLOAT:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>CFLOAT_filt
 *     elif typenum == np.npy_NPY_CDOUBLE:
 */
  __pyx_t_1 = __pyx_v_typenum;
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_3 = __site_get_npy_NPY_CFLOAT_36_22->Target(__site_get_npy_NPY_CFLOAT_36_22, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_eq_36_17->Target(__site_op_eq_36_17, __pyx_t_1, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = __site_istrue_36_17->Target(__site_istrue_36_17, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_4) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":37
 *         return <BasicFilterFunction>EXTENDED_filt
 *     elif typenum == np.npy_NPY_CFLOAT:
 *         return <BasicFilterFunction>CFLOAT_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.npy_NPY_CDOUBLE:
 *         return <BasicFilterFunction>CDOUBLE_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction)__pyx_function_pointer_CFLOAT_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":38
 *     elif typenum == np.npy_NPY_CFLOAT:
 *         return <BasicFilterFunction>CFLOAT_filt
 *     elif typenum == np.npy_NPY_CDOUBLE:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>CDOUBLE_filt
 *     elif typenum == np.npy_NPY_CLONGDOUBLE:
 */
  __pyx_t_2 = __pyx_v_typenum;
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_npy_NPY_CDOUBLE_38_22->Target(__site_get_npy_NPY_CDOUBLE_38_22, __pyx_t_3, __pyx_context);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_eq_38_17->Target(__site_op_eq_38_17, __pyx_t_2, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_istrue_38_17->Target(__site_istrue_38_17, __pyx_t_3);
  __pyx_t_3 = nullptr;
  if (__pyx_t_4) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":39
 *         return <BasicFilterFunction>CFLOAT_filt
 *     elif typenum == np.npy_NPY_CDOUBLE:
 *         return <BasicFilterFunction>CDOUBLE_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.npy_NPY_CLONGDOUBLE:
 *         return <BasicFilterFunction>CEXTENDED_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction)__pyx_function_pointer_CDOUBLE_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":40
 *     elif typenum == np.npy_NPY_CDOUBLE:
 *         return <BasicFilterFunction>CDOUBLE_filt
 *     elif typenum == np.npy_NPY_CLONGDOUBLE:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>CEXTENDED_filt
 *     #elif typenum == np.npy_NPY_OBJECT:
 */
  __pyx_t_3 = __pyx_v_typenum;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_npy_NPY_CLONGDOUBLE_40_22->Target(__site_get_npy_NPY_CLONGDOUBLE_40_22, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_eq_40_17->Target(__site_op_eq_40_17, __pyx_t_3, __pyx_t_2);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_40_17->Target(__site_istrue_40_17, __pyx_t_1);
  __pyx_t_1 = nullptr;
  if (__pyx_t_4) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":41
 *         return <BasicFilterFunction>CDOUBLE_filt
 *     elif typenum == np.npy_NPY_CLONGDOUBLE:
 *         return <BasicFilterFunction>CEXTENDED_filt             # <<<<<<<<<<<<<<
 *     #elif typenum == np.npy_NPY_OBJECT:
 *     #    return <BasicFilterFunction>OBJECT_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction)__pyx_function_pointer_CEXTENDED_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":45
 *     #    return <BasicFilterFunction>OBJECT_filt
 * 
 *     return NULL             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = NULL;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":49
 * 
 * # XXX: Error checking not done yet
 * def scipy_signal_sigtools_linear_filter(np.ndarray b, np.ndarray a,             # <<<<<<<<<<<<<<
 *                                         np.ndarray X, int axis=-1,
 *                                         np.ndarray Vi=None):
 */

static System::Object^ scipy_signal_sigtools_linear_filter(System::Object^ b, System::Object^ a, System::Object^ X, [InteropServices::Optional]System::Object^ axis, [InteropServices::Optional]System::Object^ Vi) {
  NumpyDotNet::ndarray^ __pyx_v_b = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_a = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_X = nullptr;
  int __pyx_v_axis;
  NumpyDotNet::ndarray^ __pyx_v_Vi = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_ara;
  NumpyDotNet::ndarray^ __pyx_v_arb;
  NumpyDotNet::ndarray^ __pyx_v_arX;
  NumpyDotNet::ndarray^ __pyx_v_arY;
  NumpyDotNet::ndarray^ __pyx_v_arVf;
  NumpyDotNet::ndarray^ __pyx_v_arVi;
  int __pyx_v_theaxis;
  int __pyx_v_st;
  char *__pyx_v_ara_ptr;
  char __pyx_v_input_flag;
  char *__pyx_v_azero;
  __pyx_t_5numpy_npy_intp __pyx_v_na;
  __pyx_t_5numpy_npy_intp __pyx_v_nb;
  __pyx_t_5numpy_npy_intp __pyx_v_nal;
  __pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction __pyx_v_basic_filter;
  NumpyDotNet::dtype^ __pyx_v_type;
  int __pyx_v_typenum;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  System::Object^ __pyx_t_8 = nullptr;
  int __pyx_t_9;
  int __pyx_t_10;
  int __pyx_t_11;
  __pyx_t_5numpy_npy_intp __pyx_t_12;
  __pyx_v_b = ((NumpyDotNet::ndarray^)b);
  __pyx_v_a = ((NumpyDotNet::ndarray^)a);
  __pyx_v_X = ((NumpyDotNet::ndarray^)X);
  if (dynamic_cast<System::Reflection::Missing^>(axis) == nullptr) {
    __pyx_v_axis = __site_cvt_cvt_int_49_0->Target(__site_cvt_cvt_int_49_0, axis);
  } else {
    __pyx_v_axis = ((int)-1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(Vi) == nullptr) {
    __pyx_v_Vi = ((NumpyDotNet::ndarray^)Vi);
  } else {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":51
 * def scipy_signal_sigtools_linear_filter(np.ndarray b, np.ndarray a,
 *                                         np.ndarray X, int axis=-1,
 *                                         np.ndarray Vi=None):             # <<<<<<<<<<<<<<
 *     cdef np.ndarray ara, arb, arX, arY, arVf, arVi
 *     cdef int theaxis, st
 */
    __pyx_v_Vi = ((NumpyDotNet::ndarray^)nullptr);
  }
  __pyx_v_ara = nullptr;
  __pyx_v_arb = nullptr;
  __pyx_v_arX = nullptr;
  __pyx_v_arY = nullptr;
  __pyx_v_arVf = nullptr;
  __pyx_v_arVi = nullptr;
  __pyx_v_type = nullptr;
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_b) == nullptr)) {
    throw PythonOps::TypeError("Argument 'b' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_a) == nullptr)) {
    throw PythonOps::TypeError("Argument 'a' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_X) == nullptr)) {
    throw PythonOps::TypeError("Argument 'X' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_Vi) == nullptr)) {
    throw PythonOps::TypeError("Argument 'Vi' has incorrect type");
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":54
 *     cdef np.ndarray ara, arb, arX, arY, arVf, arVi
 *     cdef int theaxis, st
 *     cdef char *ara_ptr, input_flag = 0, *azero             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp na, nb, nal
 *     cdef BasicFilterFunction basic_filter
 */
  __pyx_v_input_flag = 0;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":59
 *     cdef np.dtype type
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(b)))             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(a, type)
 *     type = np.NpyArray_FindArrayType_2args(X, type)
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(PyArray_TYPE(__pyx_v_b)))); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":60
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(b)))
 *     type = np.NpyArray_FindArrayType_2args(a, type)             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(X, type)
 *     if Vi is not None:
 */
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_a), __pyx_v_type)); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":61
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(b)))
 *     type = np.NpyArray_FindArrayType_2args(a, type)
 *     type = np.NpyArray_FindArrayType_2args(X, type)             # <<<<<<<<<<<<<<
 *     if Vi is not None:
 *         type = np.NpyArray_FindArrayType_2args(Vi, type)
 */
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_X), __pyx_v_type)); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":62
 *     type = np.NpyArray_FindArrayType_2args(a, type)
 *     type = np.NpyArray_FindArrayType_2args(X, type)
 *     if Vi is not None:             # <<<<<<<<<<<<<<
 *         type = np.NpyArray_FindArrayType_2args(Vi, type)
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_Vi) != nullptr);
  if (__pyx_t_2) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":63
 *     type = np.NpyArray_FindArrayType_2args(X, type)
 *     if Vi is not None:
 *         type = np.NpyArray_FindArrayType_2args(Vi, type)             # <<<<<<<<<<<<<<
 * 
 *     ara = np.PyArray_FromAny(a, type, 1, 1, np.NPY_CONTIGUOUS | np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 */
    __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_Vi), __pyx_v_type)); 
    __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
    __pyx_t_1 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":65
 *         type = np.NpyArray_FindArrayType_2args(Vi, type)
 * 
 *     ara = np.PyArray_FromAny(a, type, 1, 1, np.NPY_CONTIGUOUS | np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)             # <<<<<<<<<<<<<<
 *     arb = np.PyArray_FromAny(a, type, 1, 1, np.NPY_CONTIGUOUS | np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 *     arX = np.PyArray_FromAny(X, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(((NPY_CONTIGUOUS | NPY_BEHAVED) | NPY_ENSUREARRAY));
  __pyx_t_3 = PyArray_FromAny(((System::Object^)__pyx_v_a), ((System::Object^)__pyx_v_type), __pyx_int_1, __pyx_int_1, __pyx_t_1, nullptr); 
  __pyx_t_1 = nullptr;
  if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ara = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":66
 * 
 *     ara = np.PyArray_FromAny(a, type, 1, 1, np.NPY_CONTIGUOUS | np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 *     arb = np.PyArray_FromAny(a, type, 1, 1, np.NPY_CONTIGUOUS | np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)             # <<<<<<<<<<<<<<
 *     arX = np.PyArray_FromAny(X, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 * 
 */
  __pyx_t_3 = (System::Object^)(long long)(((NPY_CONTIGUOUS | NPY_BEHAVED) | NPY_ENSUREARRAY));
  __pyx_t_1 = PyArray_FromAny(((System::Object^)__pyx_v_a), ((System::Object^)__pyx_v_type), __pyx_int_1, __pyx_int_1, __pyx_t_3, nullptr); 
  __pyx_t_3 = nullptr;
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arb = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":67
 *     ara = np.PyArray_FromAny(a, type, 1, 1, np.NPY_CONTIGUOUS | np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 *     arb = np.PyArray_FromAny(a, type, 1, 1, np.NPY_CONTIGUOUS | np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 *     arX = np.PyArray_FromAny(X, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)             # <<<<<<<<<<<<<<
 * 
 *     if (axis < -np.PyArray_NDIM(arX)) or (axis > np.PyArray_NDIM(arX) - 1):
 */
  __pyx_t_1 = (System::Object^)(long long)((NPY_BEHAVED | NPY_ENSUREARRAY));
  __pyx_t_3 = PyArray_FromAny(((System::Object^)__pyx_v_X), ((System::Object^)__pyx_v_type), __pyx_int_0, __pyx_int_0, __pyx_t_1, nullptr); 
  __pyx_t_1 = nullptr;
  if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arX = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":69
 *     arX = np.PyArray_FromAny(X, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 * 
 *     if (axis < -np.PyArray_NDIM(arX)) or (axis > np.PyArray_NDIM(arX) - 1):             # <<<<<<<<<<<<<<
 *         raise ValueError("selected axis is out of range")
 * 
 */
  __pyx_t_3 = __pyx_v_axis;
  __pyx_t_1 = PyArray_NDIM(__pyx_v_arX); 
  __pyx_t_4 = __site_Negate_69_15->Target(__site_Negate_69_15, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_lt_69_13->Target(__site_op_lt_69_13, __pyx_t_3, __pyx_t_4);
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_2 = __site_istrue_69_13->Target(__site_istrue_69_13, __pyx_t_1);
  __pyx_t_1 = nullptr;
  if (!__pyx_t_2) {
    __pyx_t_1 = __pyx_v_axis;
    __pyx_t_4 = PyArray_NDIM(__pyx_v_arX); 
    __pyx_t_3 = __site_op_sub_69_70->Target(__site_op_sub_69_70, __pyx_t_4, __pyx_int_1);
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_op_gt_69_47->Target(__site_op_gt_69_47, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_5 = __site_istrue_69_47->Target(__site_istrue_69_47, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_6 = __pyx_t_5;
  } else {
    __pyx_t_6 = __pyx_t_2;
  }
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":70
 * 
 *     if (axis < -np.PyArray_NDIM(arX)) or (axis > np.PyArray_NDIM(arX) - 1):
 *         raise ValueError("selected axis is out of range")             # <<<<<<<<<<<<<<
 * 
 *     if axis < 0:
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_70_24->Target(__site_call1_70_24, __pyx_context, __pyx_t_4, ((System::Object^)"selected axis is out of range"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":72
 *         raise ValueError("selected axis is out of range")
 * 
 *     if axis < 0:             # <<<<<<<<<<<<<<
 *         theaxis = np.PyArray_NDIM(arX) + axis
 *     else:
 */
  __pyx_t_6 = (__pyx_v_axis < 0);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":73
 * 
 *     if axis < 0:
 *         theaxis = np.PyArray_NDIM(arX) + axis             # <<<<<<<<<<<<<<
 *     else:
 *         theaxis = axis
 */
    __pyx_t_3 = PyArray_NDIM(__pyx_v_arX); 
    __pyx_t_4 = __pyx_v_axis;
    __pyx_t_1 = __site_op_add_73_39->Target(__site_op_add_73_39, __pyx_t_3, __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_7 = __site_cvt_cvt_int_73_39->Target(__site_cvt_cvt_int_73_39, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_theaxis = __pyx_t_7;
    goto __pyx_L7;
  }
  /*else*/ {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":75
 *         theaxis = np.PyArray_NDIM(arX) + axis
 *     else:
 *         theaxis = axis             # <<<<<<<<<<<<<<
 * 
 *     if Vi is not None:
 */
    __pyx_v_theaxis = __pyx_v_axis;
  }
  __pyx_L7:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":77
 *         theaxis = axis
 * 
 *     if Vi is not None:             # <<<<<<<<<<<<<<
 *         arVi = np.PyArray_FromAny(Vi, type, np.PyArray_NDIM(arX), np.PyArray_NDIM(arX), np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 *         input_flag = 1
 */
  __pyx_t_6 = (((System::Object^)__pyx_v_Vi) != nullptr);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":78
 * 
 *     if Vi is not None:
 *         arVi = np.PyArray_FromAny(Vi, type, np.PyArray_NDIM(arX), np.PyArray_NDIM(arX), np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)             # <<<<<<<<<<<<<<
 *         input_flag = 1
 * 
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_arX); 
    __pyx_t_4 = PyArray_NDIM(__pyx_v_arX); 
    __pyx_t_3 = (System::Object^)(long long)((NPY_BEHAVED | NPY_ENSUREARRAY));
    __pyx_t_8 = PyArray_FromAny(((System::Object^)__pyx_v_Vi), ((System::Object^)__pyx_v_type), __pyx_t_1, __pyx_t_4, __pyx_t_3, nullptr); 
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    if (__pyx_t_8 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_arVi = ((NumpyDotNet::ndarray^)__pyx_t_8);
    __pyx_t_8 = nullptr;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":79
 *     if Vi is not None:
 *         arVi = np.PyArray_FromAny(Vi, type, np.PyArray_NDIM(arX), np.PyArray_NDIM(arX), np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 *         input_flag = 1             # <<<<<<<<<<<<<<
 * 
 *     cdef int typenum = type.num
 */
    __pyx_v_input_flag = 1;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":81
 *         input_flag = 1
 * 
 *     cdef int typenum = type.num             # <<<<<<<<<<<<<<
 * 
 *     arY = np.PyArray_SimpleNew(np.PyArray_NDIM(arX), np.PyArray_DIMS(arX), typenum)
 */
  __pyx_t_8 = __site_get_num_81_27->Target(__site_get_num_81_27, ((System::Object^)__pyx_v_type), __pyx_context);
  __pyx_t_9 = __site_cvt_cvt_int_81_27->Target(__site_cvt_cvt_int_81_27, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_v_typenum = __pyx_t_9;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":83
 *     cdef int typenum = type.num
 * 
 *     arY = np.PyArray_SimpleNew(np.PyArray_NDIM(arX), np.PyArray_DIMS(arX), typenum)             # <<<<<<<<<<<<<<
 * 
 *     if input_flag:
 */
  __pyx_t_8 = PyArray_NDIM(__pyx_v_arX); 
  __pyx_t_10 = __site_cvt_cvt_int_83_46->Target(__site_cvt_cvt_int_83_46, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_t_8 = PyArray_SimpleNew(__pyx_t_10, PyArray_DIMS(__pyx_v_arX), __pyx_v_typenum); 
  if (__pyx_t_8 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arY = ((NumpyDotNet::ndarray^)__pyx_t_8);
  __pyx_t_8 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":85
 *     arY = np.PyArray_SimpleNew(np.PyArray_NDIM(arX), np.PyArray_DIMS(arX), typenum)
 * 
 *     if input_flag:             # <<<<<<<<<<<<<<
 *         arVf = np.PyArray_SimpleNew(np.PyArray_NDIM(arVi), np.PyArray_DIMS(arVi), typenum)
 * 
 */
  if (__pyx_v_input_flag) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":86
 * 
 *     if input_flag:
 *         arVf = np.PyArray_SimpleNew(np.PyArray_NDIM(arVi), np.PyArray_DIMS(arVi), typenum)             # <<<<<<<<<<<<<<
 * 
 *     basic_filter = get_filter_function(<int>np.PyArray_TYPE(arX))
 */
    __pyx_t_8 = PyArray_NDIM(__pyx_v_arVi); 
    __pyx_t_11 = __site_cvt_cvt_int_86_51->Target(__site_cvt_cvt_int_86_51, __pyx_t_8);
    __pyx_t_8 = nullptr;
    __pyx_t_8 = PyArray_SimpleNew(__pyx_t_11, PyArray_DIMS(__pyx_v_arVi), __pyx_v_typenum); 
    if (__pyx_t_8 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_arVf = ((NumpyDotNet::ndarray^)__pyx_t_8);
    __pyx_t_8 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":88
 *         arVf = np.PyArray_SimpleNew(np.PyArray_NDIM(arVi), np.PyArray_DIMS(arVi), typenum)
 * 
 *     basic_filter = get_filter_function(<int>np.PyArray_TYPE(arX))             # <<<<<<<<<<<<<<
 *     if basic_filter == NULL:
 *         raise NotImplementedError("input type '%s' not supported\n", str(np.PyArray_DESCR(arX)))
 */
  __pyx_v_basic_filter = get_filter_function(((int)PyArray_TYPE(__pyx_v_arX)));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":89
 * 
 *     basic_filter = get_filter_function(<int>np.PyArray_TYPE(arX))
 *     if basic_filter == NULL:             # <<<<<<<<<<<<<<
 *         raise NotImplementedError("input type '%s' not supported\n", str(np.PyArray_DESCR(arX)))
 * 
 */
  __pyx_t_6 = (__pyx_v_basic_filter == NULL);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":90
 *     basic_filter = get_filter_function(<int>np.PyArray_TYPE(arX))
 *     if basic_filter == NULL:
 *         raise NotImplementedError("input type '%s' not supported\n", str(np.PyArray_DESCR(arX)))             # <<<<<<<<<<<<<<
 * 
 *     # Skip over leading zeros in vector representing denominator (a)
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "NotImplementedError");
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "str");
    __pyx_t_4 = PyArray_DESCR(__pyx_v_arX); 
    __pyx_t_1 = __site_call1_90_72->Target(__site_call1_90_72, __pyx_context, ((System::Object^)__pyx_t_3), __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_call2_90_33->Target(__site_call2_90_33, __pyx_context, __pyx_t_8, ((System::Object^)"input type '%s' not supported\n"), __pyx_t_1);
    __pyx_t_8 = nullptr;
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":94
 *     # Skip over leading zeros in vector representing denominator (a)
 *     # XXX: handle this correctly
 *     azero = <char *>np.PyArray_Zero(ara)             # <<<<<<<<<<<<<<
 *     ara_ptr = <char *>np.PyArray_DATA(ara)
 *     nal = np.PyArray_ITEMSIZE(ara);
 */
  __pyx_v_azero = ((char *)PyArray_Zero(((System::Object^)__pyx_v_ara)));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":95
 *     # XXX: handle this correctly
 *     azero = <char *>np.PyArray_Zero(ara)
 *     ara_ptr = <char *>np.PyArray_DATA(ara)             # <<<<<<<<<<<<<<
 *     nal = np.PyArray_ITEMSIZE(ara);
 *     if memcmp(<void *>ara_ptr, <void *>azero, nal) == 0:
 */
  __pyx_v_ara_ptr = ((char *)PyArray_DATA(__pyx_v_ara));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":96
 *     azero = <char *>np.PyArray_Zero(ara)
 *     ara_ptr = <char *>np.PyArray_DATA(ara)
 *     nal = np.PyArray_ITEMSIZE(ara);             # <<<<<<<<<<<<<<
 *     if memcmp(<void *>ara_ptr, <void *>azero, nal) == 0:
 *         raise ValueError("BUG: filter coefficient a[0] == 0 not supported yet")
 */
  __pyx_v_nal = PyArray_ITEMSIZE(__pyx_v_ara);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":97
 *     ara_ptr = <char *>np.PyArray_DATA(ara)
 *     nal = np.PyArray_ITEMSIZE(ara);
 *     if memcmp(<void *>ara_ptr, <void *>azero, nal) == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("BUG: filter coefficient a[0] == 0 not supported yet")
 * 
 */
  __pyx_t_6 = (memcmp(((void *)__pyx_v_ara_ptr), ((void *)__pyx_v_azero), __pyx_v_nal) == 0);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":98
 *     nal = np.PyArray_ITEMSIZE(ara);
 *     if memcmp(<void *>ara_ptr, <void *>azero, nal) == 0:
 *         raise ValueError("BUG: filter coefficient a[0] == 0 not supported yet")             # <<<<<<<<<<<<<<
 * 
 *     np.PyDataMem_FREE(azero)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_98_24->Target(__site_call1_98_24, __pyx_context, __pyx_t_4, ((System::Object^)"BUG: filter coefficient a[0] == 0 not supported yet"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":100
 *         raise ValueError("BUG: filter coefficient a[0] == 0 not supported yet")
 * 
 *     np.PyDataMem_FREE(azero)             # <<<<<<<<<<<<<<
 * 
 *     na = np.PyArray_SIZE(ara)
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_4 = __site_get_PyDataMem_FREE_100_6->Target(__site_get_PyDataMem_FREE_100_6, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = gcnew System::String(__pyx_v_azero);
  __pyx_t_8 = __site_call1_100_21->Target(__site_call1_100_21, __pyx_context, __pyx_t_4, ((System::Object^)__pyx_t_1));
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_8 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":102
 *     np.PyDataMem_FREE(azero)
 * 
 *     na = np.PyArray_SIZE(ara)             # <<<<<<<<<<<<<<
 *     nb = np.PyArray_SIZE(arb)
 *     if input_flag:
 */
  __pyx_v_na = PyArray_SIZE(__pyx_v_ara);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":103
 * 
 *     na = np.PyArray_SIZE(ara)
 *     nb = np.PyArray_SIZE(arb)             # <<<<<<<<<<<<<<
 *     if input_flag:
 *         if np.PyArray_DIMS(arVi)[theaxis] != (na if na > nb else nb) - 1:
 */
  __pyx_v_nb = PyArray_SIZE(__pyx_v_arb);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":104
 *     na = np.PyArray_SIZE(ara)
 *     nb = np.PyArray_SIZE(arb)
 *     if input_flag:             # <<<<<<<<<<<<<<
 *         if np.PyArray_DIMS(arVi)[theaxis] != (na if na > nb else nb) - 1:
 *             raise ValueError("The number of initial conditions must be max([len(a),len(b)]) - 1")
 */
  if (__pyx_v_input_flag) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":105
 *     nb = np.PyArray_SIZE(arb)
 *     if input_flag:
 *         if np.PyArray_DIMS(arVi)[theaxis] != (na if na > nb else nb) - 1:             # <<<<<<<<<<<<<<
 *             raise ValueError("The number of initial conditions must be max([len(a),len(b)]) - 1")
 * 
 */
    if ((__pyx_v_na > __pyx_v_nb)) {
      __pyx_t_12 = __pyx_v_na;
    } else {
      __pyx_t_12 = __pyx_v_nb;
    }
    __pyx_t_6 = ((PyArray_DIMS(__pyx_v_arVi)[__pyx_v_theaxis]) != (__pyx_t_12 - 1));
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":106
 *     if input_flag:
 *         if np.PyArray_DIMS(arVi)[theaxis] != (na if na > nb else nb) - 1:
 *             raise ValueError("The number of initial conditions must be max([len(a),len(b)]) - 1")             # <<<<<<<<<<<<<<
 * 
 *     st = RawFilter(arb, ara, arX, arVi, arVf, arY, theaxis, basic_filter)
 */
      __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_106_28->Target(__site_call1_106_28, __pyx_context, __pyx_t_8, ((System::Object^)"The number of initial conditions must be max([len(a),len(b)]) - 1"));
      __pyx_t_8 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L13;
    }
    __pyx_L13:;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":108
 *             raise ValueError("The number of initial conditions must be max([len(a),len(b)]) - 1")
 * 
 *     st = RawFilter(arb, ara, arX, arVi, arVf, arY, theaxis, basic_filter)             # <<<<<<<<<<<<<<
 *     if st:
 *         raise SystemError # RawFilter raised an exception
 */
  __pyx_v_st = RawFilter(__pyx_v_arb, __pyx_v_ara, __pyx_v_arX, __pyx_v_arVi, __pyx_v_arVf, __pyx_v_arY, __pyx_v_theaxis, __pyx_v_basic_filter);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":109
 * 
 *     st = RawFilter(arb, ara, arX, arVi, arVf, arY, theaxis, basic_filter)
 *     if st:             # <<<<<<<<<<<<<<
 *         raise SystemError # RawFilter raised an exception
 * 
 */
  if (__pyx_v_st) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":110
 *     st = RawFilter(arb, ara, arX, arVi, arVf, arY, theaxis, basic_filter)
 *     if st:
 *         raise SystemError # RawFilter raised an exception             # <<<<<<<<<<<<<<
 * 
 *     if not input_flag:
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "SystemError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L14;
  }
  __pyx_L14:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":112
 *         raise SystemError # RawFilter raised an exception
 * 
 *     if not input_flag:             # <<<<<<<<<<<<<<
 *         return np.PyArray_Return(arY)
 *     else:
 */
  __pyx_t_6 = (!__pyx_v_input_flag);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":113
 * 
 *     if not input_flag:
 *         return np.PyArray_Return(arY)             # <<<<<<<<<<<<<<
 *     else:
 *         return (arY, arVf)
 */
    __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_arY)); 
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;
    goto __pyx_L15;
  }
  /*else*/ {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":115
 *         return np.PyArray_Return(arY)
 *     else:
 *         return (arY, arVf)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_arY), ((System::Object^)__pyx_v_arVf)});
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L15:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":119
 * 
 * ## Copy the first nxzfilled items of x into xzfilled , and fill the rest with 0s
 * cdef int zfill(np.NpyArray *x, np.npy_intp nx, char *xzfilled, np.npy_intp nxzfilled):             # <<<<<<<<<<<<<<
 *     cdef char *xzero
 *     cdef np.npy_intp i, nxl
 */

static  int zfill(NpyArray *__pyx_v_x, __pyx_t_5numpy_npy_intp __pyx_v_nx, char *__pyx_v_xzfilled, __pyx_t_5numpy_npy_intp __pyx_v_nxzfilled) {
  char *__pyx_v_xzero;
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_nxl;
  __pyx_t_5numpy_PyArray_CopySwapFunc __pyx_v_copyswap;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":122
 *     cdef char *xzero
 *     cdef np.npy_intp i, nxl
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(x)             # <<<<<<<<<<<<<<
 * 
 *     nxl = np.NpyArray_ITEMSIZE(x)
 */
  __pyx_v_copyswap = ARRAY_COPYSWAP_FUNC(__pyx_v_x);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":124
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(x)
 * 
 *     nxl = np.NpyArray_ITEMSIZE(x)             # <<<<<<<<<<<<<<
 *     xzero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(x))
 * 
 */
  __pyx_v_nxl = NpyArray_ITEMSIZE(__pyx_v_x);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":125
 * 
 *     nxl = np.NpyArray_ITEMSIZE(x)
 *     xzero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(x))             # <<<<<<<<<<<<<<
 * 
 *     if nx > 0:
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_x)); 
  __pyx_v_xzero = ((char *)PyArray_Zero(__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":127
 *     xzero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(x))
 * 
 *     if nx > 0:             # <<<<<<<<<<<<<<
 *         for i in range(nx):
 *             copyswap(xzfilled + i * nxl, <char*>np.NpyArray_DATA(x) + i * nxl, 0, NULL)
 */
  __pyx_t_2 = (__pyx_v_nx > 0);
  if (__pyx_t_2) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":128
 * 
 *     if nx > 0:
 *         for i in range(nx):             # <<<<<<<<<<<<<<
 *             copyswap(xzfilled + i * nxl, <char*>np.NpyArray_DATA(x) + i * nxl, 0, NULL)
 * 
 */
    __pyx_t_3 = __pyx_v_nx;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_i = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":129
 *     if nx > 0:
 *         for i in range(nx):
 *             copyswap(xzfilled + i * nxl, <char*>np.NpyArray_DATA(x) + i * nxl, 0, NULL)             # <<<<<<<<<<<<<<
 * 
 *     for i in range(nx, nxzfilled):
 */
      __pyx_v_copyswap((__pyx_v_xzfilled + (__pyx_v_i * __pyx_v_nxl)), (((char *)NpyArray_DATA(__pyx_v_x)) + (__pyx_v_i * __pyx_v_nxl)), 0, NULL);
    }
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":131
 *             copyswap(xzfilled + i * nxl, <char*>np.NpyArray_DATA(x) + i * nxl, 0, NULL)
 * 
 *     for i in range(nx, nxzfilled):             # <<<<<<<<<<<<<<
 *         copyswap(xzfilled + i * nxl, xzero, 0, NULL)
 * 
 */
  __pyx_t_3 = __pyx_v_nxzfilled;
  for (__pyx_t_4 = __pyx_v_nx; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
    __pyx_v_i = __pyx_t_4;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":132
 * 
 *     for i in range(nx, nxzfilled):
 *         copyswap(xzfilled + i * nxl, xzero, 0, NULL)             # <<<<<<<<<<<<<<
 * 
 *     np.PyDataMem_FREE(xzero)
 */
    __pyx_v_copyswap((__pyx_v_xzfilled + (__pyx_v_i * __pyx_v_nxl)), __pyx_v_xzero, 0, NULL);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":134
 *         copyswap(xzfilled + i * nxl, xzero, 0, NULL)
 * 
 *     np.PyDataMem_FREE(xzero)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_5 = __site_get_PyDataMem_FREE_134_6->Target(__site_get_PyDataMem_FREE_134_6, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = gcnew System::String(__pyx_v_xzero);
  __pyx_t_6 = __site_call1_134_21->Target(__site_call1_134_21, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_t_1));
  __pyx_t_5 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_6 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":136
 *     np.PyDataMem_FREE(xzero)
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":146
 * # XXX: the code should be refactored (at least with/without initial
 * # condition), some code is wasteful here
 * cdef int RawFilter(np.ndarray b, np.ndarray a,             # <<<<<<<<<<<<<<
 *           np.ndarray x, np.ndarray zi,
 *           np.ndarray zf, np.ndarray y, int axis,
 */

static  int RawFilter(NumpyDotNet::ndarray^ __pyx_v_b, NumpyDotNet::ndarray^ __pyx_v_a, NumpyDotNet::ndarray^ __pyx_v_x, NumpyDotNet::ndarray^ __pyx_v_zi, NumpyDotNet::ndarray^ __pyx_v_zf, NumpyDotNet::ndarray^ __pyx_v_y, int __pyx_v_axis, __pyx_t_5scipy_6signal_7lfilter_BasicFilterFunction __pyx_v_filter_func) {
  NpyArrayIterObject *__pyx_v_itx;
  NpyArrayIterObject *__pyx_v_ity;
  NpyArrayIterObject *__pyx_v_itzi;
  NpyArrayIterObject *__pyx_v_itzf;
  __pyx_t_5numpy_npy_intp __pyx_v_nitx;
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_nxl;
  __pyx_t_5numpy_npy_intp __pyx_v_nzfl;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_intp __pyx_v_na;
  __pyx_t_5numpy_npy_intp __pyx_v_nb;
  __pyx_t_5numpy_npy_intp __pyx_v_nal;
  __pyx_t_5numpy_npy_intp __pyx_v_nbl;
  __pyx_t_5numpy_npy_intp __pyx_v_nfilt;
  char *__pyx_v_azfilled;
  char *__pyx_v_bzfilled;
  char *__pyx_v_zfzfilled;
  char *__pyx_v_yoyo;
  __pyx_t_5numpy_PyArray_CopySwapFunc __pyx_v_copyswap;
  int __pyx_r;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_4;
  __pyx_t_5numpy_npy_intp __pyx_t_5;
  long __pyx_t_6;
  __pyx_t_5numpy_npy_intp __pyx_t_7;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":150
 *           np.ndarray zf, np.ndarray y, int axis,
 *           BasicFilterFunction filter_func):
 *     cdef np.NpyArrayIterObject *itx, *ity, *itzi=NULL, *itzf=NULL             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp nitx, i, nxl, nzfl, j
 *     cdef np.npy_intp na, nb, nal, nbl
 */
  __pyx_v_itzi = NULL;
  __pyx_v_itzf = NULL;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":155
 *     cdef np.npy_intp nfilt
 *     cdef char *azfilled, *bzfilled, *zfzfilled, *yoyo
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(np.PyArray_ARRAY(x))             # <<<<<<<<<<<<<<
 * 
 *     itx = np.PyArray_IterAllButAxis(x, &axis)
 */
  __pyx_v_copyswap = ARRAY_COPYSWAP_FUNC(PyArray_ARRAY(__pyx_v_x));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":157
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(np.PyArray_ARRAY(x))
 * 
 *     itx = np.PyArray_IterAllButAxis(x, &axis)             # <<<<<<<<<<<<<<
 *     if itx == NULL:
 *         raise MemoryError("Could not create itx")
 */
  __pyx_v_itx = PyArray_IterAllButAxis(__pyx_v_x, (&__pyx_v_axis));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":158
 * 
 *     itx = np.PyArray_IterAllButAxis(x, &axis)
 *     if itx == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create itx")
 *     nitx = itx.size
 */
  __pyx_t_1 = (__pyx_v_itx == NULL);
  if (__pyx_t_1) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":159
 *     itx = np.PyArray_IterAllButAxis(x, &axis)
 *     if itx == NULL:
 *         raise MemoryError("Could not create itx")             # <<<<<<<<<<<<<<
 *     nitx = itx.size
 * 
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_3 = __site_call1_159_25->Target(__site_call1_159_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create itx"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":160
 *     if itx == NULL:
 *         raise MemoryError("Could not create itx")
 *     nitx = itx.size             # <<<<<<<<<<<<<<
 * 
 *     ity = np.PyArray_IterAllButAxis(y, &axis)
 */
  __pyx_v_nitx = __pyx_v_itx->size;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":162
 *     nitx = itx.size
 * 
 *     ity = np.PyArray_IterAllButAxis(y, &axis)             # <<<<<<<<<<<<<<
 *     if ity == NULL:
 *         raise MemoryError("Could not create ity")
 */
  __pyx_v_ity = PyArray_IterAllButAxis(__pyx_v_y, (&__pyx_v_axis));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":163
 * 
 *     ity = np.PyArray_IterAllButAxis(y, &axis)
 *     if ity == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create ity")
 * 
 */
  __pyx_t_1 = (__pyx_v_ity == NULL);
  if (__pyx_t_1) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":164
 *     ity = np.PyArray_IterAllButAxis(y, &axis)
 *     if ity == NULL:
 *         raise MemoryError("Could not create ity")             # <<<<<<<<<<<<<<
 * 
 *     if zi is not None:
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_2 = __site_call1_164_25->Target(__site_call1_164_25, __pyx_context, __pyx_t_3, ((System::Object^)"Could not create ity"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":166
 *         raise MemoryError("Could not create ity")
 * 
 *     if zi is not None:             # <<<<<<<<<<<<<<
 *         itzi = np.PyArray_IterAllButAxis(zi, &axis)
 *         if itzi == NULL:
 */
  __pyx_t_1 = (((System::Object^)__pyx_v_zi) != nullptr);
  if (__pyx_t_1) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":167
 * 
 *     if zi is not None:
 *         itzi = np.PyArray_IterAllButAxis(zi, &axis)             # <<<<<<<<<<<<<<
 *         if itzi == NULL:
 *             raise MemoryError("Could not create itzi")
 */
    __pyx_v_itzi = PyArray_IterAllButAxis(__pyx_v_zi, (&__pyx_v_axis));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":168
 *     if zi is not None:
 *         itzi = np.PyArray_IterAllButAxis(zi, &axis)
 *         if itzi == NULL:             # <<<<<<<<<<<<<<
 *             raise MemoryError("Could not create itzi")
 * 
 */
    __pyx_t_1 = (__pyx_v_itzi == NULL);
    if (__pyx_t_1) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":169
 *         itzi = np.PyArray_IterAllButAxis(zi, &axis)
 *         if itzi == NULL:
 *             raise MemoryError("Could not create itzi")             # <<<<<<<<<<<<<<
 * 
 *         itzf = np.PyArray_IterAllButAxis(zf, &axis)
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
      __pyx_t_3 = __site_call1_169_29->Target(__site_call1_169_29, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create itzi"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":171
 *             raise MemoryError("Could not create itzi")
 * 
 *         itzf = np.PyArray_IterAllButAxis(zf, &axis)             # <<<<<<<<<<<<<<
 *         if itzf == NULL:
 *             raise MemoryError("Could not create itzf")
 */
    __pyx_v_itzf = PyArray_IterAllButAxis(__pyx_v_zf, (&__pyx_v_axis));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":172
 * 
 *         itzf = np.PyArray_IterAllButAxis(zf, &axis)
 *         if itzf == NULL:             # <<<<<<<<<<<<<<
 *             raise MemoryError("Could not create itzf")
 * 
 */
    __pyx_t_1 = (__pyx_v_itzf == NULL);
    if (__pyx_t_1) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":173
 *         itzf = np.PyArray_IterAllButAxis(zf, &axis)
 *         if itzf == NULL:
 *             raise MemoryError("Could not create itzf")             # <<<<<<<<<<<<<<
 * 
 *     na = np.PyArray_SIZE(a)
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
      __pyx_t_2 = __site_call1_173_29->Target(__site_call1_173_29, __pyx_context, __pyx_t_3, ((System::Object^)"Could not create itzf"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L7;
    }
    __pyx_L7:;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":175
 *             raise MemoryError("Could not create itzf")
 * 
 *     na = np.PyArray_SIZE(a)             # <<<<<<<<<<<<<<
 *     nal = np.PyArray_ITEMSIZE(a)
 *     nb = np.PyArray_SIZE(b)
 */
  __pyx_v_na = PyArray_SIZE(__pyx_v_a);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":176
 * 
 *     na = np.PyArray_SIZE(a)
 *     nal = np.PyArray_ITEMSIZE(a)             # <<<<<<<<<<<<<<
 *     nb = np.PyArray_SIZE(b)
 *     nbl = np.PyArray_ITEMSIZE(b)
 */
  __pyx_v_nal = PyArray_ITEMSIZE(__pyx_v_a);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":177
 *     na = np.PyArray_SIZE(a)
 *     nal = np.PyArray_ITEMSIZE(a)
 *     nb = np.PyArray_SIZE(b)             # <<<<<<<<<<<<<<
 *     nbl = np.PyArray_ITEMSIZE(b)
 * 
 */
  __pyx_v_nb = PyArray_SIZE(__pyx_v_b);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":178
 *     nal = np.PyArray_ITEMSIZE(a)
 *     nb = np.PyArray_SIZE(b)
 *     nbl = np.PyArray_ITEMSIZE(b)             # <<<<<<<<<<<<<<
 * 
 *     nfilt = na if na > nb else nb
 */
  __pyx_v_nbl = PyArray_ITEMSIZE(__pyx_v_b);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":180
 *     nbl = np.PyArray_ITEMSIZE(b)
 * 
 *     nfilt = na if na > nb else nb             # <<<<<<<<<<<<<<
 * 
 *     azfilled = <char *>malloc(nal * nfilt)
 */
  if ((__pyx_v_na > __pyx_v_nb)) {
    __pyx_t_4 = __pyx_v_na;
  } else {
    __pyx_t_4 = __pyx_v_nb;
  }
  __pyx_v_nfilt = __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":182
 *     nfilt = na if na > nb else nb
 * 
 *     azfilled = <char *>malloc(nal * nfilt)             # <<<<<<<<<<<<<<
 *     if azfilled == NULL:
 *         raise MemoryError("Could not create azfilled")
 */
  __pyx_v_azfilled = ((char *)malloc((__pyx_v_nal * __pyx_v_nfilt)));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":183
 * 
 *     azfilled = <char *>malloc(nal * nfilt)
 *     if azfilled == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create azfilled")
 * 
 */
  __pyx_t_1 = (__pyx_v_azfilled == NULL);
  if (__pyx_t_1) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":184
 *     azfilled = <char *>malloc(nal * nfilt)
 *     if azfilled == NULL:
 *         raise MemoryError("Could not create azfilled")             # <<<<<<<<<<<<<<
 * 
 *     bzfilled = <char *>malloc(nbl * nfilt)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_3 = __site_call1_184_25->Target(__site_call1_184_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create azfilled"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":186
 *         raise MemoryError("Could not create azfilled")
 * 
 *     bzfilled = <char *>malloc(nbl * nfilt)             # <<<<<<<<<<<<<<
 *     if bzfilled == NULL:
 *         raise MemoryError("Could not create bzfilled")
 */
  __pyx_v_bzfilled = ((char *)malloc((__pyx_v_nbl * __pyx_v_nfilt)));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":187
 * 
 *     bzfilled = <char *>malloc(nbl * nfilt)
 *     if bzfilled == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create bzfilled")
 * 
 */
  __pyx_t_1 = (__pyx_v_bzfilled == NULL);
  if (__pyx_t_1) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":188
 *     bzfilled = <char *>malloc(nbl * nfilt)
 *     if bzfilled == NULL:
 *         raise MemoryError("Could not create bzfilled")             # <<<<<<<<<<<<<<
 * 
 *     nxl = np.PyArray_ITEMSIZE(x)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_2 = __site_call1_188_25->Target(__site_call1_188_25, __pyx_context, __pyx_t_3, ((System::Object^)"Could not create bzfilled"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":190
 *         raise MemoryError("Could not create bzfilled")
 * 
 *     nxl = np.PyArray_ITEMSIZE(x)             # <<<<<<<<<<<<<<
 *     zfzfilled = <char *>malloc(nxl * (nfilt - 1))
 *     if zfzfilled == NULL:
 */
  __pyx_v_nxl = PyArray_ITEMSIZE(__pyx_v_x);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":191
 * 
 *     nxl = np.PyArray_ITEMSIZE(x)
 *     zfzfilled = <char *>malloc(nxl * (nfilt - 1))             # <<<<<<<<<<<<<<
 *     if zfzfilled == NULL:
 *         raise MemoryError("Could not create zfzfilled")
 */
  __pyx_v_zfzfilled = ((char *)malloc((__pyx_v_nxl * (__pyx_v_nfilt - 1))));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":192
 *     nxl = np.PyArray_ITEMSIZE(x)
 *     zfzfilled = <char *>malloc(nxl * (nfilt - 1))
 *     if zfzfilled == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create zfzfilled")
 * 
 */
  __pyx_t_1 = (__pyx_v_zfzfilled == NULL);
  if (__pyx_t_1) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":193
 *     zfzfilled = <char *>malloc(nxl * (nfilt - 1))
 *     if zfzfilled == NULL:
 *         raise MemoryError("Could not create zfzfilled")             # <<<<<<<<<<<<<<
 * 
 *     # Initialize zero filled buffers to 0, so that we can use
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_3 = __site_call1_193_25->Target(__site_call1_193_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create zfzfilled"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":201
 *     # refcounts), but oh well...
 * 
 *     memset(<void *>azfilled, 0, nal * nfilt)             # <<<<<<<<<<<<<<
 *     memset(<void *>bzfilled, 0, nbl * nfilt)
 *     memset(<void *>zfzfilled, 0, nxl * (nfilt - 1))
 */
  memset(((void *)__pyx_v_azfilled), 0, (__pyx_v_nal * __pyx_v_nfilt));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":202
 * 
 *     memset(<void *>azfilled, 0, nal * nfilt)
 *     memset(<void *>bzfilled, 0, nbl * nfilt)             # <<<<<<<<<<<<<<
 *     memset(<void *>zfzfilled, 0, nxl * (nfilt - 1))
 * 
 */
  memset(((void *)__pyx_v_bzfilled), 0, (__pyx_v_nbl * __pyx_v_nfilt));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":203
 *     memset(<void *>azfilled, 0, nal * nfilt)
 *     memset(<void *>bzfilled, 0, nbl * nfilt)
 *     memset(<void *>zfzfilled, 0, nxl * (nfilt - 1))             # <<<<<<<<<<<<<<
 * 
 *     zfill(np.PyArray_ARRAY(a), na, azfilled, nfilt)
 */
  memset(((void *)__pyx_v_zfzfilled), 0, (__pyx_v_nxl * (__pyx_v_nfilt - 1)));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":205
 *     memset(<void *>zfzfilled, 0, nxl * (nfilt - 1))
 * 
 *     zfill(np.PyArray_ARRAY(a), na, azfilled, nfilt)             # <<<<<<<<<<<<<<
 *     zfill(np.PyArray_ARRAY(b), nb, bzfilled, nfilt)
 * 
 */
  zfill(PyArray_ARRAY(__pyx_v_a), __pyx_v_na, __pyx_v_azfilled, __pyx_v_nfilt);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":206
 * 
 *     zfill(np.PyArray_ARRAY(a), na, azfilled, nfilt)
 *     zfill(np.PyArray_ARRAY(b), nb, bzfilled, nfilt)             # <<<<<<<<<<<<<<
 * 
 *     # XXX: Check that zf and zi have same type ?
 */
  zfill(PyArray_ARRAY(__pyx_v_b), __pyx_v_nb, __pyx_v_bzfilled, __pyx_v_nfilt);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":209
 * 
 *     # XXX: Check that zf and zi have same type ?
 *     if zf is not None:             # <<<<<<<<<<<<<<
 *         nzfl = np.PyArray_ITEMSIZE(zf)
 *     else:
 */
  __pyx_t_1 = (((System::Object^)__pyx_v_zf) != nullptr);
  if (__pyx_t_1) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":210
 *     # XXX: Check that zf and zi have same type ?
 *     if zf is not None:
 *         nzfl = np.PyArray_ITEMSIZE(zf)             # <<<<<<<<<<<<<<
 *     else:
 *         nzfl = 0
 */
    __pyx_v_nzfl = PyArray_ITEMSIZE(__pyx_v_zf);
    goto __pyx_L11;
  }
  /*else*/ {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":212
 *         nzfl = np.PyArray_ITEMSIZE(zf)
 *     else:
 *         nzfl = 0             # <<<<<<<<<<<<<<
 * 
 *     # Iterate over the input array
 */
    __pyx_v_nzfl = 0;
  }
  __pyx_L11:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":215
 * 
 *     # Iterate over the input array
 *     for i in range(nitx):             # <<<<<<<<<<<<<<
 *         if zi is not None:
 *             yoyo = itzi.dataptr
 */
  __pyx_t_4 = __pyx_v_nitx;
  for (__pyx_t_5 = 0; __pyx_t_5 < __pyx_t_4; __pyx_t_5+=1) {
    __pyx_v_i = __pyx_t_5;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":216
 *     # Iterate over the input array
 *     for i in range(nitx):
 *         if zi is not None:             # <<<<<<<<<<<<<<
 *             yoyo = itzi.dataptr
 *             # Copy initial conditions zi in zfzfilled buffer
 */
    __pyx_t_1 = (((System::Object^)__pyx_v_zi) != nullptr);
    if (__pyx_t_1) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":217
 *     for i in range(nitx):
 *         if zi is not None:
 *             yoyo = itzi.dataptr             # <<<<<<<<<<<<<<
 *             # Copy initial conditions zi in zfzfilled buffer
 *             for j in range(nfilt - 1):
 */
      __pyx_v_yoyo = __pyx_v_itzi->dataptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":219
 *             yoyo = itzi.dataptr
 *             # Copy initial conditions zi in zfzfilled buffer
 *             for j in range(nfilt - 1):             # <<<<<<<<<<<<<<
 *                 copyswap(zfzfilled + j * nzfl, yoyo, 0, NULL)
 *                 yoyo += itzi.strides[axis]
 */
      __pyx_t_6 = (__pyx_v_nfilt - 1);
      for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
        __pyx_v_j = __pyx_t_7;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":220
 *             # Copy initial conditions zi in zfzfilled buffer
 *             for j in range(nfilt - 1):
 *                 copyswap(zfzfilled + j * nzfl, yoyo, 0, NULL)             # <<<<<<<<<<<<<<
 *                 yoyo += itzi.strides[axis]
 * 
 */
        __pyx_v_copyswap((__pyx_v_zfzfilled + (__pyx_v_j * __pyx_v_nzfl)), __pyx_v_yoyo, 0, NULL);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":221
 *             for j in range(nfilt - 1):
 *                 copyswap(zfzfilled + j * nzfl, yoyo, 0, NULL)
 *                 yoyo += itzi.strides[axis]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArray_ITER_NEXT(itzi)
 */
        __pyx_v_yoyo += (__pyx_v_itzi->strides[__pyx_v_axis]);
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":223
 *                 yoyo += itzi.strides[axis]
 * 
 *             np.PyArray_ITER_NEXT(itzi)             # <<<<<<<<<<<<<<
 *         else:
 *             zfill(np.PyArray_ARRAY(x), 0, zfzfilled, nfilt - 1)
 */
      PyArray_ITER_NEXT(__pyx_v_itzi);
      goto __pyx_L14;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":225
 *             np.PyArray_ITER_NEXT(itzi)
 *         else:
 *             zfill(np.PyArray_ARRAY(x), 0, zfzfilled, nfilt - 1)             # <<<<<<<<<<<<<<
 * 
 *         filter_func(bzfilled, azfilled,
 */
      zfill(PyArray_ARRAY(__pyx_v_x), 0, __pyx_v_zfzfilled, (__pyx_v_nfilt - 1));
    }
    __pyx_L14:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":230
 *                     itx.dataptr, ity.dataptr, zfzfilled,
 *                     nfilt, np.PyArray_DIMS(x)[axis], itx.strides[axis],
 *                     ity.strides[axis]);             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_NEXT(itx)
 *         np.PyArray_ITER_NEXT(ity)
 */
    __pyx_v_filter_func(__pyx_v_bzfilled, __pyx_v_azfilled, __pyx_v_itx->dataptr, __pyx_v_ity->dataptr, __pyx_v_zfzfilled, __pyx_v_nfilt, (PyArray_DIMS(__pyx_v_x)[__pyx_v_axis]), (__pyx_v_itx->strides[__pyx_v_axis]), (__pyx_v_ity->strides[__pyx_v_axis]));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":231
 *                     nfilt, np.PyArray_DIMS(x)[axis], itx.strides[axis],
 *                     ity.strides[axis]);
 *         np.PyArray_ITER_NEXT(itx)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_NEXT(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":232
 *                     ity.strides[axis]);
 *         np.PyArray_ITER_NEXT(itx)
 *         np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         # Copy tmp buffer fo final values back into zf output array
 */
    PyArray_ITER_NEXT(__pyx_v_ity);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":235
 * 
 *         # Copy tmp buffer fo final values back into zf output array
 *         if zi is not None:             # <<<<<<<<<<<<<<
 *             yoyo = itzf.dataptr
 *             for j in range(nfilt - 1):
 */
    __pyx_t_1 = (((System::Object^)__pyx_v_zi) != nullptr);
    if (__pyx_t_1) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":236
 *         # Copy tmp buffer fo final values back into zf output array
 *         if zi is not None:
 *             yoyo = itzf.dataptr             # <<<<<<<<<<<<<<
 *             for j in range(nfilt - 1):
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)
 */
      __pyx_v_yoyo = __pyx_v_itzf->dataptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":237
 *         if zi is not None:
 *             yoyo = itzf.dataptr
 *             for j in range(nfilt - 1):             # <<<<<<<<<<<<<<
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)
 *                 yoyo += itzf.strides[axis]
 */
      __pyx_t_6 = (__pyx_v_nfilt - 1);
      for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
        __pyx_v_j = __pyx_t_7;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":238
 *             yoyo = itzf.dataptr
 *             for j in range(nfilt - 1):
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)             # <<<<<<<<<<<<<<
 *                 yoyo += itzf.strides[axis]
 *             np.PyArray_ITER_NEXT(itzf);
 */
        __pyx_v_copyswap(__pyx_v_yoyo, (__pyx_v_zfzfilled + (__pyx_v_j * __pyx_v_nzfl)), 0, NULL);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":239
 *             for j in range(nfilt - 1):
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)
 *                 yoyo += itzf.strides[axis]             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(itzf);
 * 
 */
        __pyx_v_yoyo += (__pyx_v_itzf->strides[__pyx_v_axis]);
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":240
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)
 *                 yoyo += itzf.strides[axis]
 *             np.PyArray_ITER_NEXT(itzf);             # <<<<<<<<<<<<<<
 * 
 *     # Free up allocated memory
 */
      PyArray_ITER_NEXT(__pyx_v_itzf);
      goto __pyx_L17;
    }
    __pyx_L17:;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":243
 * 
 *     # Free up allocated memory
 *     free(zfzfilled)             # <<<<<<<<<<<<<<
 *     free(bzfilled)
 *     free(azfilled)
 */
  free(__pyx_v_zfzfilled);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":244
 *     # Free up allocated memory
 *     free(zfzfilled)
 *     free(bzfilled)             # <<<<<<<<<<<<<<
 *     free(azfilled)
 * 
 */
  free(__pyx_v_bzfilled);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":245
 *     free(zfzfilled)
 *     free(bzfilled)
 *     free(azfilled)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
  free(__pyx_v_azfilled);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":247
 *     free(azfilled)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * #################################################################
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":253
 * #   dimension of an N-D array.                                  #
 * #################################################################
 * cdef FLOAT_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static System::Object^ (*__pyx_function_pointer_FLOAT_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef System::Object^ (*__pyx_fp_t_FLOAT_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_7lfilter_FLOAT_filt^ __pyx_delegate_val_FLOAT_filt;
static  System::Object^ FLOAT_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
  char *__pyx_v_ptr_x;
  char *__pyx_v_ptr_y;
  float *__pyx_v_ptr_Z;
  float *__pyx_v_ptr_b;
  float *__pyx_v_ptr_a;
  float *__pyx_v_xn;
  float *__pyx_v_yn;
  float __pyx_v_a0;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_uintp __pyx_v_k;
  System::Object^ __pyx_r = nullptr;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  float __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  float __pyx_t_7;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":256
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef float *ptr_Z, *ptr_b
 *     cdef float *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":260
 *     cdef float *ptr_a
 *     cdef float *xn, *yn
 *     cdef float a0 = (<float *> a)[0]             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp n
 *     cdef np.npy_uintp k
 */
  __pyx_v_a0 = (((float *)__pyx_v_a)[0]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":264
 *     cdef np.npy_uintp k
 * 
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <float *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <float *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":265
 * 
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/             # <<<<<<<<<<<<<<
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x
 */
    __pyx_v_ptr_b = ((float *)__pyx_v_b);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":266
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <float *>a             # <<<<<<<<<<<<<<
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y
 */
    __pyx_v_ptr_a = ((float *)__pyx_v_a);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":267
 *         ptr_b = <float *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <float *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((float *)__pyx_v_ptr_x);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":268
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <float *>Z
 */
    __pyx_v_yn = ((float *)__pyx_v_ptr_y);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":269
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <float *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":270
 *         yn = <float *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <float *>Z             # <<<<<<<<<<<<<<
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 */
      __pyx_v_ptr_Z = ((float *)__pyx_v_Z);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":271
 *         if len_b > 1:
 *             ptr_Z = <float *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)             # <<<<<<<<<<<<<<
 *             ptr_b += 1
 *             ptr_a += 1
 */
      __pyx_t_4 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_ptr_Z[0]) + ((__pyx_t_4 / __pyx_v_a0) * (__pyx_v_xn[0])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":272
 *             ptr_Z = <float *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1             # <<<<<<<<<<<<<<
 *             ptr_a += 1
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":273
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 *             ptr_a += 1             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":275
 *             ptr_a += 1
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":276
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)             # <<<<<<<<<<<<<<
 *                 ptr_b += 1
 *                 ptr_a += 1
 */
        __pyx_t_4 = (__pyx_v_ptr_b[0]);
        if (unlikely(__pyx_v_a0 == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        __pyx_t_7 = (__pyx_v_ptr_a[0]);
        if (unlikely(__pyx_v_a0 == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) = (((__pyx_v_ptr_Z[1]) + ((__pyx_v_xn[0]) * (__pyx_t_4 / __pyx_v_a0))) - ((__pyx_v_yn[0]) * (__pyx_t_7 / __pyx_v_a0)));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":277
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1             # <<<<<<<<<<<<<<
 *                 ptr_a += 1
 *                 ptr_Z += 1
 */
        __pyx_v_ptr_b += 1;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":278
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 *                 ptr_a += 1             # <<<<<<<<<<<<<<
 *                 ptr_Z += 1
 *             # Calculate last delay
 */
        __pyx_v_ptr_a += 1;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":279
 *                 ptr_b += 1
 *                 ptr_a += 1
 *                 ptr_Z += 1             # <<<<<<<<<<<<<<
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 */
        __pyx_v_ptr_Z += 1;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":281
 *                 ptr_Z += 1
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)             # <<<<<<<<<<<<<<
 *         else:
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 */
      __pyx_t_7 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      __pyx_t_4 = (__pyx_v_ptr_a[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) = (((__pyx_v_xn[0]) * (__pyx_t_7 / __pyx_v_a0)) - ((__pyx_v_yn[0]) * (__pyx_t_4 / __pyx_v_a0)));
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":283
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *         else:
 *             yn[0] = xn[0] * (ptr_b[0] / a0)             # <<<<<<<<<<<<<<
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 */
      __pyx_t_4 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_xn[0]) * (__pyx_t_4 / __pyx_v_a0));
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":285
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 * 
 *         ptr_y += stride_Y      # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 * 
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":286
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":289
 * 
 * 
 * cdef CFLOAT_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static System::Object^ (*__pyx_function_pointer_CFLOAT_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef System::Object^ (*__pyx_fp_t_CFLOAT_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_7lfilter_CFLOAT_filt^ __pyx_delegate_val_CFLOAT_filt;
static  System::Object^ CFLOAT_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
  char *__pyx_v_ptr_x;
  char *__pyx_v_ptr_y;
  float *__pyx_v_ptr_Z;
  float *__pyx_v_ptr_b;
  float *__pyx_v_ptr_a;
  float *__pyx_v_xn;
  float *__pyx_v_yn;
  float __pyx_v_a0r;
  float __pyx_v_a0i;
  float __pyx_v_a0_mag;
  float __pyx_v_tmpr;
  float __pyx_v_tmpi;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_uintp __pyx_v_k;
  System::Object^ __pyx_r = nullptr;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  float __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":292
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef float *ptr_Z, *ptr_b
 *     cdef float *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":296
 *     cdef float *ptr_a
 *     cdef float *xn, *yn
 *     cdef float a0r = (<float *>a)[0]             # <<<<<<<<<<<<<<
 *     cdef float a0i = (<float *>a)[1]
 *     cdef float a0_mag, tmpr, tmpi
 */
  __pyx_v_a0r = (((float *)__pyx_v_a)[0]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":297
 *     cdef float *xn, *yn
 *     cdef float a0r = (<float *>a)[0]
 *     cdef float a0i = (<float *>a)[1]             # <<<<<<<<<<<<<<
 *     cdef float a0_mag, tmpr, tmpi
 *     cdef np.npy_intp n
 */
  __pyx_v_a0i = (((float *)__pyx_v_a)[1]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":302
 *     cdef np.npy_uintp k
 * 
 *     a0_mag = a0r * a0r + a0i * a0i             # <<<<<<<<<<<<<<
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers
 */
  __pyx_v_a0_mag = ((__pyx_v_a0r * __pyx_v_a0r) + (__pyx_v_a0i * __pyx_v_a0i));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":303
 * 
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <float *>b   # Reset a and b pointers
 *         ptr_a = <float *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":304
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers             # <<<<<<<<<<<<<<
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x
 */
    __pyx_v_ptr_b = ((float *)__pyx_v_b);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":305
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers
 *         ptr_a = <float *>a             # <<<<<<<<<<<<<<
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y
 */
    __pyx_v_ptr_a = ((float *)__pyx_v_a);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":306
 *         ptr_b = <float *>b   # Reset a and b pointers
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <float *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((float *)__pyx_v_ptr_x);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":307
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <float *>Z
 */
    __pyx_v_yn = ((float *)__pyx_v_ptr_y);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":308
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <float *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":309
 *         yn = <float *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <float *>Z             # <<<<<<<<<<<<<<
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_v_ptr_Z = ((float *)__pyx_v_Z);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":310
 *         if len_b > 1:
 *             ptr_Z = <float *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":311
 *             ptr_Z = <float *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":313
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_ptr_Z[0]) + (__pyx_t_4 / __pyx_v_a0_mag));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":314
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_b += 2
 *             ptr_a += 2
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[1]) = ((__pyx_v_ptr_Z[1]) + (__pyx_t_4 / __pyx_v_a0_mag));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":315
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2             # <<<<<<<<<<<<<<
 *             ptr_a += 2
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 2;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":316
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 *             ptr_a += 2             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 2;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":318
 *             ptr_a += 2
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":319
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":320
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":321
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 */
        __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) = ((__pyx_v_ptr_Z[2]) + (__pyx_t_4 / __pyx_v_a0_mag));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":322
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 */
        __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[1]) = ((__pyx_v_ptr_Z[3]) + (__pyx_t_4 / __pyx_v_a0_mag));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":323
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":324
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":325
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 */
        __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_yn[0])) - (__pyx_v_tmpi * (__pyx_v_yn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) -= (__pyx_t_4 / __pyx_v_a0_mag);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":326
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_b += 2
 *                 ptr_a += 2
 */
        __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_yn[0])) + (__pyx_v_tmpr * (__pyx_v_yn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[1]) -= (__pyx_t_4 / __pyx_v_a0_mag);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":327
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2             # <<<<<<<<<<<<<<
 *                 ptr_a += 2
 *                 ptr_Z += 2
 */
        __pyx_v_ptr_b += 2;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":328
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 *                 ptr_a += 2             # <<<<<<<<<<<<<<
 *                 ptr_Z += 2
 * 
 */
        __pyx_v_ptr_a += 2;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":329
 *                 ptr_b += 2
 *                 ptr_a += 2
 *                 ptr_Z += 2             # <<<<<<<<<<<<<<
 * 
 *             # Calculate last delay
 */
        __pyx_v_ptr_Z += 2;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":332
 * 
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":333
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":334
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":335
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[1]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":336
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":337
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":338
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_yn[0])) - (__pyx_v_tmpi * (__pyx_v_yn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) -= (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":339
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_yn[0])) + (__pyx_v_tmpr * (__pyx_v_yn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[1]) -= (__pyx_t_4 / __pyx_v_a0_mag);
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":341
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":342
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":343
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":344
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[1]) = (__pyx_t_4 / __pyx_v_a0_mag);
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":346
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 *         ptr_y += stride_Y     # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 * cdef DOUBLE_filt(char *b, char *a, char *x, char *y, char *Z,
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":347
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 * cdef DOUBLE_filt(char *b, char *a, char *x, char *y, char *Z,
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":348
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X
 * cdef DOUBLE_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static System::Object^ (*__pyx_function_pointer_DOUBLE_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef System::Object^ (*__pyx_fp_t_DOUBLE_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_7lfilter_DOUBLE_filt^ __pyx_delegate_val_DOUBLE_filt;
static  System::Object^ DOUBLE_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
  char *__pyx_v_ptr_x;
  char *__pyx_v_ptr_y;
  double *__pyx_v_ptr_Z;
  double *__pyx_v_ptr_b;
  double *__pyx_v_ptr_a;
  double *__pyx_v_xn;
  double *__pyx_v_yn;
  double __pyx_v_a0;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_uintp __pyx_v_k;
  System::Object^ __pyx_r = nullptr;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  double __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  double __pyx_t_7;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":351
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef double *ptr_Z, *ptr_b
 *     cdef double *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":355
 *     cdef double *ptr_a
 *     cdef double *xn, *yn
 *     cdef double a0 = (<double *> a)[0]             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp n
 *     cdef np.npy_uintp k
 */
  __pyx_v_a0 = (((double *)__pyx_v_a)[0]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":359
 *     cdef np.npy_uintp k
 * 
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <double *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <double *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":360
 * 
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/             # <<<<<<<<<<<<<<
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x
 */
    __pyx_v_ptr_b = ((double *)__pyx_v_b);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":361
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <double *>a             # <<<<<<<<<<<<<<
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y
 */
    __pyx_v_ptr_a = ((double *)__pyx_v_a);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":362
 *         ptr_b = <double *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <double *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((double *)__pyx_v_ptr_x);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":363
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <double *>Z
 */
    __pyx_v_yn = ((double *)__pyx_v_ptr_y);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":364
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <double *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":365
 *         yn = <double *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <double *>Z             # <<<<<<<<<<<<<<
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 */
      __pyx_v_ptr_Z = ((double *)__pyx_v_Z);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":366
 *         if len_b > 1:
 *             ptr_Z = <double *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)             # <<<<<<<<<<<<<<
 *             ptr_b += 1
 *             ptr_a += 1
 */
      __pyx_t_4 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_ptr_Z[0]) + ((__pyx_t_4 / __pyx_v_a0) * (__pyx_v_xn[0])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":367
 *             ptr_Z = <double *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1             # <<<<<<<<<<<<<<
 *             ptr_a += 1
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":368
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 *             ptr_a += 1             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":370
 *             ptr_a += 1
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":371
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)             # <<<<<<<<<<<<<<
 *                 ptr_b += 1
 *                 ptr_a += 1
 */
        __pyx_t_4 = (__pyx_v_ptr_b[0]);
        if (unlikely(__pyx_v_a0 == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        __pyx_t_7 = (__pyx_v_ptr_a[0]);
        if (unlikely(__pyx_v_a0 == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) = (((__pyx_v_ptr_Z[1]) + ((__pyx_v_xn[0]) * (__pyx_t_4 / __pyx_v_a0))) - ((__pyx_v_yn[0]) * (__pyx_t_7 / __pyx_v_a0)));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":372
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1             # <<<<<<<<<<<<<<
 *                 ptr_a += 1
 *                 ptr_Z += 1
 */
        __pyx_v_ptr_b += 1;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":373
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 *                 ptr_a += 1             # <<<<<<<<<<<<<<
 *                 ptr_Z += 1
 *             # Calculate last delay
 */
        __pyx_v_ptr_a += 1;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":374
 *                 ptr_b += 1
 *                 ptr_a += 1
 *                 ptr_Z += 1             # <<<<<<<<<<<<<<
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 */
        __pyx_v_ptr_Z += 1;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":376
 *                 ptr_Z += 1
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)             # <<<<<<<<<<<<<<
 *         else:
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 */
      __pyx_t_7 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      __pyx_t_4 = (__pyx_v_ptr_a[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) = (((__pyx_v_xn[0]) * (__pyx_t_7 / __pyx_v_a0)) - ((__pyx_v_yn[0]) * (__pyx_t_4 / __pyx_v_a0)));
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":378
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *         else:
 *             yn[0] = xn[0] * (ptr_b[0] / a0)             # <<<<<<<<<<<<<<
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 */
      __pyx_t_4 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_xn[0]) * (__pyx_t_4 / __pyx_v_a0));
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":380
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 * 
 *         ptr_y += stride_Y      # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 * 
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":381
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":384
 * 
 * 
 * cdef CDOUBLE_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static System::Object^ (*__pyx_function_pointer_CDOUBLE_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef System::Object^ (*__pyx_fp_t_CDOUBLE_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_7lfilter_CDOUBLE_filt^ __pyx_delegate_val_CDOUBLE_filt;
static  System::Object^ CDOUBLE_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
  char *__pyx_v_ptr_x;
  char *__pyx_v_ptr_y;
  double *__pyx_v_ptr_Z;
  double *__pyx_v_ptr_b;
  double *__pyx_v_ptr_a;
  double *__pyx_v_xn;
  double *__pyx_v_yn;
  double __pyx_v_a0r;
  double __pyx_v_a0i;
  double __pyx_v_a0_mag;
  double __pyx_v_tmpr;
  double __pyx_v_tmpi;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_uintp __pyx_v_k;
  System::Object^ __pyx_r = nullptr;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  double __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":387
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef double *ptr_Z, *ptr_b
 *     cdef double *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":391
 *     cdef double *ptr_a
 *     cdef double *xn, *yn
 *     cdef double a0r = (<double *>a)[0]             # <<<<<<<<<<<<<<
 *     cdef double a0i = (<double *>a)[1]
 *     cdef double a0_mag, tmpr, tmpi
 */
  __pyx_v_a0r = (((double *)__pyx_v_a)[0]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":392
 *     cdef double *xn, *yn
 *     cdef double a0r = (<double *>a)[0]
 *     cdef double a0i = (<double *>a)[1]             # <<<<<<<<<<<<<<
 *     cdef double a0_mag, tmpr, tmpi
 *     cdef np.npy_intp n
 */
  __pyx_v_a0i = (((double *)__pyx_v_a)[1]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":397
 *     cdef np.npy_uintp k
 * 
 *     a0_mag = a0r * a0r + a0i * a0i             # <<<<<<<<<<<<<<
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers
 */
  __pyx_v_a0_mag = ((__pyx_v_a0r * __pyx_v_a0r) + (__pyx_v_a0i * __pyx_v_a0i));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":398
 * 
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <double *>b   # Reset a and b pointers
 *         ptr_a = <double *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":399
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers             # <<<<<<<<<<<<<<
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x
 */
    __pyx_v_ptr_b = ((double *)__pyx_v_b);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":400
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers
 *         ptr_a = <double *>a             # <<<<<<<<<<<<<<
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y
 */
    __pyx_v_ptr_a = ((double *)__pyx_v_a);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":401
 *         ptr_b = <double *>b   # Reset a and b pointers
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <double *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((double *)__pyx_v_ptr_x);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":402
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <double *>Z
 */
    __pyx_v_yn = ((double *)__pyx_v_ptr_y);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":403
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <double *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":404
 *         yn = <double *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <double *>Z             # <<<<<<<<<<<<<<
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_v_ptr_Z = ((double *)__pyx_v_Z);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":405
 *         if len_b > 1:
 *             ptr_Z = <double *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":406
 *             ptr_Z = <double *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":408
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_ptr_Z[0]) + (__pyx_t_4 / __pyx_v_a0_mag));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":409
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_b += 2
 *             ptr_a += 2
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[1]) = ((__pyx_v_ptr_Z[1]) + (__pyx_t_4 / __pyx_v_a0_mag));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":410
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2             # <<<<<<<<<<<<<<
 *             ptr_a += 2
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 2;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":411
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 *             ptr_a += 2             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 2;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":413
 *             ptr_a += 2
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":414
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":415
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":416
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 */
        __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) = ((__pyx_v_ptr_Z[2]) + (__pyx_t_4 / __pyx_v_a0_mag));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":417
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 */
        __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[1]) = ((__pyx_v_ptr_Z[3]) + (__pyx_t_4 / __pyx_v_a0_mag));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":418
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":419
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":420
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 */
        __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_yn[0])) - (__pyx_v_tmpi * (__pyx_v_yn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) -= (__pyx_t_4 / __pyx_v_a0_mag);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":421
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_b += 2
 *                 ptr_a += 2
 */
        __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_yn[0])) + (__pyx_v_tmpr * (__pyx_v_yn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[1]) -= (__pyx_t_4 / __pyx_v_a0_mag);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":422
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2             # <<<<<<<<<<<<<<
 *                 ptr_a += 2
 *                 ptr_Z += 2
 */
        __pyx_v_ptr_b += 2;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":423
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 *                 ptr_a += 2             # <<<<<<<<<<<<<<
 *                 ptr_Z += 2
 * 
 */
        __pyx_v_ptr_a += 2;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":424
 *                 ptr_b += 2
 *                 ptr_a += 2
 *                 ptr_Z += 2             # <<<<<<<<<<<<<<
 * 
 *             # Calculate last delay
 */
        __pyx_v_ptr_Z += 2;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":427
 * 
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":428
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":429
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":430
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[1]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":431
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":432
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":433
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_yn[0])) - (__pyx_v_tmpi * (__pyx_v_yn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) -= (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":434
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_yn[0])) + (__pyx_v_tmpr * (__pyx_v_yn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[1]) -= (__pyx_t_4 / __pyx_v_a0_mag);
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":436
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":437
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":438
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":439
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[1]) = (__pyx_t_4 / __pyx_v_a0_mag);
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":441
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 *         ptr_y += stride_Y     # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 * cdef EXTENDED_filt(char *b, char *a, char *x, char *y, char *Z,
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":442
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 * cdef EXTENDED_filt(char *b, char *a, char *x, char *y, char *Z,
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":443
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X
 * cdef EXTENDED_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static System::Object^ (*__pyx_function_pointer_EXTENDED_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef System::Object^ (*__pyx_fp_t_EXTENDED_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_7lfilter_EXTENDED_filt^ __pyx_delegate_val_EXTENDED_filt;
static  System::Object^ EXTENDED_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
  char *__pyx_v_ptr_x;
  char *__pyx_v_ptr_y;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr_Z;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr_b;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr_a;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_xn;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_yn;
  __pyx_t_5numpy_npy_longdouble __pyx_v_a0;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_uintp __pyx_v_k;
  System::Object^ __pyx_r = nullptr;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  __pyx_t_5numpy_npy_longdouble __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  __pyx_t_5numpy_npy_longdouble __pyx_t_7;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":446
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef np.npy_longdouble *ptr_Z, *ptr_b
 *     cdef np.npy_longdouble *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":450
 *     cdef np.npy_longdouble *ptr_a
 *     cdef np.npy_longdouble *xn, *yn
 *     cdef np.npy_longdouble a0 = (<np.npy_longdouble *> a)[0]             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp n
 *     cdef np.npy_uintp k
 */
  __pyx_v_a0 = (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a)[0]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":454
 *     cdef np.npy_uintp k
 * 
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <np.npy_longdouble *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":455
 * 
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/             # <<<<<<<<<<<<<<
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x
 */
    __pyx_v_ptr_b = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_b);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":456
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <np.npy_longdouble *>a             # <<<<<<<<<<<<<<
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y
 */
    __pyx_v_ptr_a = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":457
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ptr_x);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":458
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z
 */
    __pyx_v_yn = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ptr_y);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":459
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <np.npy_longdouble *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":460
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z             # <<<<<<<<<<<<<<
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 */
      __pyx_v_ptr_Z = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_Z);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":461
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)             # <<<<<<<<<<<<<<
 *             ptr_b += 1
 *             ptr_a += 1
 */
      __pyx_t_4 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_ptr_Z[0]) + ((__pyx_t_4 / __pyx_v_a0) * (__pyx_v_xn[0])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":462
 *             ptr_Z = <np.npy_longdouble *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1             # <<<<<<<<<<<<<<
 *             ptr_a += 1
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":463
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 *             ptr_a += 1             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":465
 *             ptr_a += 1
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":466
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)             # <<<<<<<<<<<<<<
 *                 ptr_b += 1
 *                 ptr_a += 1
 */
        __pyx_t_4 = (__pyx_v_ptr_b[0]);
        if (unlikely(__pyx_v_a0 == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        __pyx_t_7 = (__pyx_v_ptr_a[0]);
        if (unlikely(__pyx_v_a0 == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) = (((__pyx_v_ptr_Z[1]) + ((__pyx_v_xn[0]) * (__pyx_t_4 / __pyx_v_a0))) - ((__pyx_v_yn[0]) * (__pyx_t_7 / __pyx_v_a0)));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":467
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1             # <<<<<<<<<<<<<<
 *                 ptr_a += 1
 *                 ptr_Z += 1
 */
        __pyx_v_ptr_b += 1;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":468
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 *                 ptr_a += 1             # <<<<<<<<<<<<<<
 *                 ptr_Z += 1
 *             # Calculate last delay
 */
        __pyx_v_ptr_a += 1;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":469
 *                 ptr_b += 1
 *                 ptr_a += 1
 *                 ptr_Z += 1             # <<<<<<<<<<<<<<
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 */
        __pyx_v_ptr_Z += 1;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":471
 *                 ptr_Z += 1
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)             # <<<<<<<<<<<<<<
 *         else:
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 */
      __pyx_t_7 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      __pyx_t_4 = (__pyx_v_ptr_a[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) = (((__pyx_v_xn[0]) * (__pyx_t_7 / __pyx_v_a0)) - ((__pyx_v_yn[0]) * (__pyx_t_4 / __pyx_v_a0)));
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":473
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *         else:
 *             yn[0] = xn[0] * (ptr_b[0] / a0)             # <<<<<<<<<<<<<<
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 */
      __pyx_t_4 = (__pyx_v_ptr_b[0]);
      if (unlikely(__pyx_v_a0 == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_xn[0]) * (__pyx_t_4 / __pyx_v_a0));
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":475
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 * 
 *         ptr_y += stride_Y      # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 * 
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":476
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":479
 * 
 * 
 * cdef CEXTENDED_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static System::Object^ (*__pyx_function_pointer_CEXTENDED_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef System::Object^ (*__pyx_fp_t_CEXTENDED_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_7lfilter_CEXTENDED_filt^ __pyx_delegate_val_CEXTENDED_filt;
static  System::Object^ CEXTENDED_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
  char *__pyx_v_ptr_x;
  char *__pyx_v_ptr_y;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr_Z;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr_b;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr_a;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_xn;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_yn;
  __pyx_t_5numpy_npy_longdouble __pyx_v_a0r;
  __pyx_t_5numpy_npy_longdouble __pyx_v_a0i;
  __pyx_t_5numpy_npy_longdouble __pyx_v_a0_mag;
  __pyx_t_5numpy_npy_longdouble __pyx_v_tmpr;
  __pyx_t_5numpy_npy_longdouble __pyx_v_tmpi;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_uintp __pyx_v_k;
  System::Object^ __pyx_r = nullptr;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  __pyx_t_5numpy_npy_longdouble __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":482
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef np.npy_longdouble *ptr_Z, *ptr_b
 *     cdef np.npy_longdouble *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":486
 *     cdef np.npy_longdouble *ptr_a
 *     cdef np.npy_longdouble *xn, *yn
 *     cdef np.npy_longdouble a0r = (<np.npy_longdouble *>a)[0]             # <<<<<<<<<<<<<<
 *     cdef np.npy_longdouble a0i = (<np.npy_longdouble *>a)[1]
 *     cdef np.npy_longdouble a0_mag, tmpr, tmpi
 */
  __pyx_v_a0r = (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a)[0]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":487
 *     cdef np.npy_longdouble *xn, *yn
 *     cdef np.npy_longdouble a0r = (<np.npy_longdouble *>a)[0]
 *     cdef np.npy_longdouble a0i = (<np.npy_longdouble *>a)[1]             # <<<<<<<<<<<<<<
 *     cdef np.npy_longdouble a0_mag, tmpr, tmpi
 *     cdef np.npy_intp n
 */
  __pyx_v_a0i = (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a)[1]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":492
 *     cdef np.npy_uintp k
 * 
 *     a0_mag = a0r * a0r + a0i * a0i             # <<<<<<<<<<<<<<
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers
 */
  __pyx_v_a0_mag = ((__pyx_v_a0r * __pyx_v_a0r) + (__pyx_v_a0i * __pyx_v_a0i));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":493
 * 
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers
 *         ptr_a = <np.npy_longdouble *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":494
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers             # <<<<<<<<<<<<<<
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x
 */
    __pyx_v_ptr_b = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_b);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":495
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers
 *         ptr_a = <np.npy_longdouble *>a             # <<<<<<<<<<<<<<
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y
 */
    __pyx_v_ptr_a = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":496
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ptr_x);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":497
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z
 */
    __pyx_v_yn = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ptr_y);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":498
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <np.npy_longdouble *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":499
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z             # <<<<<<<<<<<<<<
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_v_ptr_Z = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_Z);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":500
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":501
 *             ptr_Z = <np.npy_longdouble *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":503
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = ((__pyx_v_ptr_Z[0]) + (__pyx_t_4 / __pyx_v_a0_mag));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":504
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_b += 2
 *             ptr_a += 2
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[1]) = ((__pyx_v_ptr_Z[1]) + (__pyx_t_4 / __pyx_v_a0_mag));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":505
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2             # <<<<<<<<<<<<<<
 *             ptr_a += 2
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 2;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":506
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 *             ptr_a += 2             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 2;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":508
 *             ptr_a += 2
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":509
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":510
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":511
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 */
        __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) = ((__pyx_v_ptr_Z[2]) + (__pyx_t_4 / __pyx_v_a0_mag));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":512
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 */
        __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[1]) = ((__pyx_v_ptr_Z[3]) + (__pyx_t_4 / __pyx_v_a0_mag));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":513
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":514
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":515
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 */
        __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_yn[0])) - (__pyx_v_tmpi * (__pyx_v_yn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[0]) -= (__pyx_t_4 / __pyx_v_a0_mag);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":516
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *                 ptr_b += 2
 *                 ptr_a += 2
 */
        __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_yn[0])) + (__pyx_v_tmpr * (__pyx_v_yn[1])));
        if (unlikely(__pyx_v_a0_mag == 0)) {
          throw PythonOps::ZeroDivisionError("float division");
        }
        (__pyx_v_ptr_Z[1]) -= (__pyx_t_4 / __pyx_v_a0_mag);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":517
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2             # <<<<<<<<<<<<<<
 *                 ptr_a += 2
 *                 ptr_Z += 2
 */
        __pyx_v_ptr_b += 2;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":518
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 *                 ptr_a += 2             # <<<<<<<<<<<<<<
 *                 ptr_Z += 2
 * 
 */
        __pyx_v_ptr_a += 2;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":519
 *                 ptr_b += 2
 *                 ptr_a += 2
 *                 ptr_Z += 2             # <<<<<<<<<<<<<<
 * 
 *             # Calculate last delay
 */
        __pyx_v_ptr_Z += 2;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":522
 * 
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":523
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":524
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":525
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[1]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":526
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":527
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":528
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_yn[0])) - (__pyx_v_tmpi * (__pyx_v_yn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[0]) -= (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":529
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_yn[0])) + (__pyx_v_tmpr * (__pyx_v_yn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_ptr_Z[1]) -= (__pyx_t_4 / __pyx_v_a0_mag);
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":531
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":532
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":533
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 */
      __pyx_t_4 = ((__pyx_v_tmpr * (__pyx_v_xn[0])) - (__pyx_v_tmpi * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[0]) = (__pyx_t_4 / __pyx_v_a0_mag);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":534
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag             # <<<<<<<<<<<<<<
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 */
      __pyx_t_4 = ((__pyx_v_tmpi * (__pyx_v_xn[0])) + (__pyx_v_tmpr * (__pyx_v_xn[1])));
      if (unlikely(__pyx_v_a0_mag == 0)) {
        throw PythonOps::ZeroDivisionError("float division");
      }
      (__pyx_v_yn[1]) = (__pyx_t_4 / __pyx_v_a0_mag);
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":536
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 *         ptr_y += stride_Y     # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 * 
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":537
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 * 
 * cdef OBJECT_filt(char *b, char *a, char *x, char *y, char *Z,
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":539
 *         ptr_x += stride_X
 * 
 * cdef OBJECT_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                  np.npy_intp len_b, np.npy_uintp len_x,
 *                  np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static  System::Object^ OBJECT_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
  char *__pyx_v_ptr_x;
  char *__pyx_v_ptr_y;
  PYOBJPTRPTR __pyx_v_ptr_Z;
  PYOBJPTRPTR __pyx_v_ptr_b;
  PYOBJPTRPTR __pyx_v_ptr_a;
  PYOBJPTRPTR __pyx_v_xn;
  PYOBJPTRPTR __pyx_v_yn;
  PYOBJPTRPTR __pyx_v_a0;
  System::Object^ __pyx_v_tmp1;
  System::Object^ __pyx_v_tmp2;
  System::Object^ __pyx_v_tmp3;
  __pyx_t_5numpy_npy_intp __pyx_v_n;
  __pyx_t_5numpy_npy_uintp __pyx_v_k;
  System::Object^ __pyx_r = nullptr;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  long __pyx_t_7;
  __pyx_t_5numpy_npy_intp __pyx_t_8;
  __pyx_v_tmp1 = nullptr;
  __pyx_v_tmp2 = nullptr;
  __pyx_v_tmp3 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":542
 *                  np.npy_intp len_b, np.npy_uintp len_x,
 *                  np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef PYOBJPTRPTR ptr_Z, ptr_b
 *     cdef PYOBJPTRPTR ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":546
 *     cdef PYOBJPTRPTR ptr_a
 *     cdef PYOBJPTRPTR xn, yn
 *     cdef PYOBJPTRPTR a0 = <PYOBJPTRPTR> a             # <<<<<<<<<<<<<<
 *     cdef object tmp1, tmp2, tmp3
 *     cdef np.npy_intp n
 */
  __pyx_v_a0 = ((PYOBJPTRPTR)__pyx_v_a);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":552
 * 
 *     # My reference counting might not be right
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <PYOBJPTRPTR> b        # Reset a and b pointers
 *         ptr_a = <PYOBJPTRPTR> a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":553
 *     # My reference counting might not be right
 *     for k in range(len_x):
 *         ptr_b = <PYOBJPTRPTR> b        # Reset a and b pointers             # <<<<<<<<<<<<<<
 *         ptr_a = <PYOBJPTRPTR> a
 *         xn = <PYOBJPTRPTR> ptr_x
 */
    __pyx_v_ptr_b = ((PYOBJPTRPTR)__pyx_v_b);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":554
 *     for k in range(len_x):
 *         ptr_b = <PYOBJPTRPTR> b        # Reset a and b pointers
 *         ptr_a = <PYOBJPTRPTR> a             # <<<<<<<<<<<<<<
 *         xn = <PYOBJPTRPTR> ptr_x
 *         yn = <PYOBJPTRPTR> ptr_y
 */
    __pyx_v_ptr_a = ((PYOBJPTRPTR)__pyx_v_a);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":555
 *         ptr_b = <PYOBJPTRPTR> b        # Reset a and b pointers
 *         ptr_a = <PYOBJPTRPTR> a
 *         xn = <PYOBJPTRPTR> ptr_x             # <<<<<<<<<<<<<<
 *         yn = <PYOBJPTRPTR> ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((PYOBJPTRPTR)__pyx_v_ptr_x);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":556
 *         ptr_a = <PYOBJPTRPTR> a
 *         xn = <PYOBJPTRPTR> ptr_x
 *         yn = <PYOBJPTRPTR> ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = (<PYOBJPTRPTR> Z)
 */
    __pyx_v_yn = ((PYOBJPTRPTR)__pyx_v_ptr_y);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":557
 *         xn = <PYOBJPTRPTR> ptr_x
 *         yn = <PYOBJPTRPTR> ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = (<PYOBJPTRPTR> Z)
 *             # Calculate first delay (output)
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":558
 *         yn = <PYOBJPTRPTR> ptr_y
 *         if len_b > 1:
 *             ptr_Z = (<PYOBJPTRPTR> Z)             # <<<<<<<<<<<<<<
 *             # Calculate first delay (output)
 *             tmp1 = READOBJECT(ptr_b) * READOBJECT(xn)
 */
      __pyx_v_ptr_Z = ((PYOBJPTRPTR)__pyx_v_Z);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":560
 *             ptr_Z = (<PYOBJPTRPTR> Z)
 *             # Calculate first delay (output)
 *             tmp1 = READOBJECT(ptr_b) * READOBJECT(xn)             # <<<<<<<<<<<<<<
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)
 */
      __pyx_t_4 = READOBJECT(__pyx_v_ptr_b); 
      __pyx_t_5 = READOBJECT(__pyx_v_xn); 
      __pyx_t_6 = __site_op_mul_560_37->Target(__site_op_mul_560_37, __pyx_t_4, __pyx_t_5);
      __pyx_t_4 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_v_tmp1 = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":561
 *             # Calculate first delay (output)
 *             tmp1 = READOBJECT(ptr_b) * READOBJECT(xn)
 *             tmp2 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)
 *             ASSIGNOBJECT(yn, tmp3)
 */
      __pyx_t_6 = READOBJECT(__pyx_v_a0); 
      __pyx_t_5 = __site_op_div_561_24->Target(__site_op_div_561_24, __pyx_v_tmp1, __pyx_t_6);
      __pyx_t_6 = nullptr;
      __pyx_v_tmp2 = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":562
 *             tmp1 = READOBJECT(ptr_b) * READOBJECT(xn)
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)             # <<<<<<<<<<<<<<
 *             ASSIGNOBJECT(yn, tmp3)
 *             ptr_b += 1
 */
      __pyx_t_5 = READOBJECT(__pyx_v_ptr_Z); 
      __pyx_t_6 = __site_op_add_562_24->Target(__site_op_add_562_24, __pyx_v_tmp2, __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_v_tmp3 = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":563
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)
 *             ASSIGNOBJECT(yn, tmp3)             # <<<<<<<<<<<<<<
 *             ptr_b += 1
 *             ptr_a += 1
 */
      ASSIGNOBJECT(__pyx_v_yn, __pyx_v_tmp3);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":564
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)
 *             ASSIGNOBJECT(yn, tmp3)
 *             ptr_b += 1             # <<<<<<<<<<<<<<
 *             ptr_a += 1
 * 
 */
      __pyx_v_ptr_b += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":565
 *             ASSIGNOBJECT(yn, tmp3)
 *             ptr_b += 1
 *             ptr_a += 1             # <<<<<<<<<<<<<<
 * 
 *             # Fill in middle delays
 */
      __pyx_v_ptr_a += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":568
 * 
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *                 tmp2 = tmp1 / READOBJECT(a0)
 */
      __pyx_t_7 = (__pyx_v_len_b - 2);
      for (__pyx_t_8 = 0; __pyx_t_8 < __pyx_t_7; __pyx_t_8+=1) {
        __pyx_v_n = __pyx_t_8;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":569
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)             # <<<<<<<<<<<<<<
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)
 */
        __pyx_t_6 = READOBJECT(__pyx_v_xn); 
        __pyx_t_5 = READOBJECT(__pyx_v_ptr_b); 
        __pyx_t_4 = __site_op_mul_569_38->Target(__site_op_mul_569_38, __pyx_t_6, __pyx_t_5);
        __pyx_t_6 = nullptr;
        __pyx_t_5 = nullptr;
        __pyx_v_tmp1 = __pyx_t_4;
        __pyx_t_4 = nullptr;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":570
 *             for n in range(len_b - 2):
 *                 tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *                 tmp2 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 */
        __pyx_t_4 = READOBJECT(__pyx_v_a0); 
        __pyx_t_5 = __site_op_div_570_28->Target(__site_op_div_570_28, __pyx_v_tmp1, __pyx_t_4);
        __pyx_t_4 = nullptr;
        __pyx_v_tmp2 = __pyx_t_5;
        __pyx_t_5 = nullptr;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":571
 *                 tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)             # <<<<<<<<<<<<<<
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *                 tmp2 = tmp1 / READOBJECT(a0)
 */
        __pyx_t_5 = READOBJECT((__pyx_v_ptr_Z + 1)); 
        __pyx_t_4 = __site_op_div_571_28->Target(__site_op_div_571_28, __pyx_v_tmp2, __pyx_t_5);
        __pyx_t_5 = nullptr;
        __pyx_v_tmp3 = __pyx_t_4;
        __pyx_t_4 = nullptr;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":572
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)             # <<<<<<<<<<<<<<
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 */
        __pyx_t_4 = READOBJECT(__pyx_v_yn); 
        __pyx_t_5 = READOBJECT(__pyx_v_ptr_a); 
        __pyx_t_6 = __site_op_mul_572_38->Target(__site_op_mul_572_38, __pyx_t_4, __pyx_t_5);
        __pyx_t_4 = nullptr;
        __pyx_t_5 = nullptr;
        __pyx_v_tmp1 = __pyx_t_6;
        __pyx_t_6 = nullptr;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":573
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *                 tmp2 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *                 ptr_b += 1
 */
        __pyx_t_6 = READOBJECT(__pyx_v_a0); 
        __pyx_t_5 = __site_op_div_573_28->Target(__site_op_div_573_28, __pyx_v_tmp1, __pyx_t_6);
        __pyx_t_6 = nullptr;
        __pyx_v_tmp2 = __pyx_t_5;
        __pyx_t_5 = nullptr;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":574
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)             # <<<<<<<<<<<<<<
 *                 ptr_b += 1
 *                 ptr_a += 1
 */
        __pyx_t_5 = __site_op_sub_574_41->Target(__site_op_sub_574_41, __pyx_v_tmp3, __pyx_v_tmp2);
        ASSIGNOBJECT(__pyx_v_ptr_Z, __pyx_t_5);
        __pyx_t_5 = nullptr;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":575
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *                 ptr_b += 1             # <<<<<<<<<<<<<<
 *                 ptr_a += 1
 *                 ptr_Z += 1
 */
        __pyx_v_ptr_b += 1;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":576
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *                 ptr_b += 1
 *                 ptr_a += 1             # <<<<<<<<<<<<<<
 *                 ptr_Z += 1
 * 
 */
        __pyx_v_ptr_a += 1;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":577
 *                 ptr_b += 1
 *                 ptr_a += 1
 *                 ptr_Z += 1             # <<<<<<<<<<<<<<
 * 
 *             # Calculate last delay
 */
        __pyx_v_ptr_Z += 1;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":580
 * 
 *             # Calculate last delay
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)             # <<<<<<<<<<<<<<
 *             tmp3 = tmp1 / READOBJECT(a0)
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 */
      __pyx_t_5 = READOBJECT(__pyx_v_xn); 
      __pyx_t_6 = READOBJECT(__pyx_v_ptr_b); 
      __pyx_t_4 = __site_op_mul_580_34->Target(__site_op_mul_580_34, __pyx_t_5, __pyx_t_6);
      __pyx_t_5 = nullptr;
      __pyx_t_6 = nullptr;
      __pyx_v_tmp1 = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":581
 *             # Calculate last delay
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *             tmp3 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *             tmp2 = tmp1 / READOBJECT(a0)
 */
      __pyx_t_4 = READOBJECT(__pyx_v_a0); 
      __pyx_t_6 = __site_op_div_581_24->Target(__site_op_div_581_24, __pyx_v_tmp1, __pyx_t_4);
      __pyx_t_4 = nullptr;
      __pyx_v_tmp3 = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":582
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *             tmp3 = tmp1 / READOBJECT(a0)
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)             # <<<<<<<<<<<<<<
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 */
      __pyx_t_6 = READOBJECT(__pyx_v_yn); 
      __pyx_t_4 = READOBJECT(__pyx_v_ptr_a); 
      __pyx_t_5 = __site_op_mul_582_34->Target(__site_op_mul_582_34, __pyx_t_6, __pyx_t_4);
      __pyx_t_6 = nullptr;
      __pyx_t_4 = nullptr;
      __pyx_v_tmp1 = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":583
 *             tmp3 = tmp1 / READOBJECT(a0)
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *             tmp2 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *             ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *         else:
 */
      __pyx_t_5 = READOBJECT(__pyx_v_a0); 
      __pyx_t_4 = __site_op_div_583_24->Target(__site_op_div_583_24, __pyx_v_tmp1, __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_v_tmp2 = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":584
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)             # <<<<<<<<<<<<<<
 *         else:
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 */
      __pyx_t_4 = __site_op_sub_584_37->Target(__site_op_sub_584_37, __pyx_v_tmp3, __pyx_v_tmp2);
      ASSIGNOBJECT(__pyx_v_ptr_Z, __pyx_t_4);
      __pyx_t_4 = nullptr;
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":586
 *             ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *         else:
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)             # <<<<<<<<<<<<<<
 *             ASSIGNOBJECT(yn, tmp1 / READOBJECT(a0))
 * 
 */
      __pyx_t_4 = READOBJECT(__pyx_v_xn); 
      __pyx_t_5 = READOBJECT(__pyx_v_ptr_b); 
      __pyx_t_6 = __site_op_mul_586_34->Target(__site_op_mul_586_34, __pyx_t_4, __pyx_t_5);
      __pyx_t_4 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_v_tmp1 = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":587
 *         else:
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *             ASSIGNOBJECT(yn, tmp1 / READOBJECT(a0))             # <<<<<<<<<<<<<<
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 */
      __pyx_t_6 = READOBJECT(__pyx_v_a0); 
      __pyx_t_5 = __site_op_div_587_34->Target(__site_op_div_587_34, __pyx_v_tmp1, __pyx_t_6);
      __pyx_t_6 = nullptr;
      ASSIGNOBJECT(__pyx_v_yn, __pyx_t_5);
      __pyx_t_5 = nullptr;
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":589
 *             ASSIGNOBJECT(yn, tmp1 / READOBJECT(a0))
 * 
 *         ptr_y += stride_Y      # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":590
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  __pyx_r = nullptr;
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
 *     import NumpyDotNet.NpyArray
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
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.ArrayReturn(arr)
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "../cython/include/numpy.pxd":374
 *         return None
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.ArrayReturn(arr)
 * 
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "../cython/include/numpy.pxd":375
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

/* "../cython/include/numpy.pxd":377
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

/* "../cython/include/numpy.pxd":440
 *     return isinstance(obj, np.ndarray)
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 * 
 */

static CYTHON_INLINE void import_array(void) {

}

/* "../cython/include/numpy.pxd":443
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

  /* "../cython/include/numpy.pxd":444
 * 
 * cdef inline PyNumber_Check(o):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":445
 * cdef inline PyNumber_Check(o):
 *     import clr
 *     import NumpyDotNet.ScalarGeneric             # <<<<<<<<<<<<<<
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ScalarGeneric", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":446
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

/* "../cython/include/numpy.pxd":448
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

  /* "../cython/include/numpy.pxd":449
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

/* "../cython/include/numpy.pxd":451
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

  /* "../cython/include/numpy.pxd":452
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

/* "../cython/include/numpy.pxd":454
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_NEXT(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_NEXT(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include/numpy.pxd":455
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 *     NpyArray_ITER_NEXT(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_NEXT(__pyx_v_obj);

}

/* "../cython/include/numpy.pxd":457
 *     NpyArray_ITER_NEXT(obj)
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_RESET(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_RESET(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include/numpy.pxd":458
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 *     NpyArray_ITER_RESET(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_RESET(__pyx_v_obj);

}

/* "../cython/include/numpy.pxd":460
 *     NpyArray_ITER_RESET(obj)
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     return NpyArray_ITER_DATA(obj)
 * 
 */

static CYTHON_INLINE void *PyArray_ITER_DATA(NpyArrayIterObject *__pyx_v_obj) {
  void *__pyx_r;

  /* "../cython/include/numpy.pxd":461
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

/* "../cython/include/numpy.pxd":463
 *     return NpyArray_ITER_DATA(obj)
 * 
 * cdef inline NpyArrayNeighborhoodIterObject* PyArray_NeighborhoodIterNew(NpyArrayIterObject *obj,             # <<<<<<<<<<<<<<
 *                                                                         npy_intp *bounds,
 *                                                                         int mode,
 */

static CYTHON_INLINE NpyArrayNeighborhoodIterObject *PyArray_NeighborhoodIterNew(NpyArrayIterObject *__pyx_v_obj, __pyx_t_5numpy_npy_intp *__pyx_v_bounds, int __pyx_v_mode, void *__pyx_v_fill, npy_free_func __pyx_v_fillfree) {
  NpyArrayNeighborhoodIterObject *__pyx_r;

  /* "../cython/include/numpy.pxd":468
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

/* "../cython/include/numpy.pxd":470
 *     return NpyArray_NeighborhoodIterNew(obj, bounds, mode, fill, fillfree)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include/numpy.pxd":471
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

/* "../cython/include/numpy.pxd":473
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include/numpy.pxd":474
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

/* "../cython/include/numpy.pxd":476
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(iter.ao)
 */

static CYTHON_INLINE NumpyDotNet::ndarray^ NpyIter_ARRAY(NpyArrayIterObject *__pyx_v_iter) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":477
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
  __site_get_npy_NPY_FLOAT_30_20 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "npy_NPY_FLOAT", false));
  __site_op_eq_30_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_30_15 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_npy_NPY_DOUBLE_32_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "npy_NPY_DOUBLE", false));
  __site_op_eq_32_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_32_17 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_npy_NPY_LONGDOUBLE_34_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "npy_NPY_LONGDOUBLE", false));
  __site_op_eq_34_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_34_17 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_npy_NPY_CFLOAT_36_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "npy_NPY_CFLOAT", false));
  __site_op_eq_36_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_36_17 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_npy_NPY_CDOUBLE_38_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "npy_NPY_CDOUBLE", false));
  __site_op_eq_38_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_38_17 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_npy_NPY_CLONGDOUBLE_40_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "npy_NPY_CLONGDOUBLE", false));
  __site_op_eq_40_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_40_17 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_49_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_Negate_69_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::Negate));
  __site_op_lt_69_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_69_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_sub_69_70 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_gt_69_47 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::GreaterThan));
  __site_istrue_69_47 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_70_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_73_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_cvt_int_73_39 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_num_81_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "num", false));
  __site_cvt_cvt_int_81_27 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_83_46 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_86_51 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_90_72 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_90_33 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call1_98_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_PyDataMem_FREE_100_6 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyDataMem_FREE", false));
  __site_call1_100_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_106_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_PyDataMem_FREE_134_6 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyDataMem_FREE", false));
  __site_call1_134_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_159_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_164_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_169_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_173_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_184_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_188_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_193_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mul_560_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_561_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_add_562_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_mul_569_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_570_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_div_571_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_mul_572_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_573_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_sub_574_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_mul_580_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_581_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_mul_582_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_583_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_sub_584_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_mul_586_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_587_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
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
  __pyx_delegate_val_FLOAT_filt = gcnew __pyx_delegate_t_5scipy_6signal_7lfilter_FLOAT_filt(FLOAT_filt);
  __pyx_function_pointer_FLOAT_filt = (__pyx_fp_t_FLOAT_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_FLOAT_filt).ToPointer());
  __pyx_delegate_val_CFLOAT_filt = gcnew __pyx_delegate_t_5scipy_6signal_7lfilter_CFLOAT_filt(CFLOAT_filt);
  __pyx_function_pointer_CFLOAT_filt = (__pyx_fp_t_CFLOAT_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_CFLOAT_filt).ToPointer());
  __pyx_delegate_val_DOUBLE_filt = gcnew __pyx_delegate_t_5scipy_6signal_7lfilter_DOUBLE_filt(DOUBLE_filt);
  __pyx_function_pointer_DOUBLE_filt = (__pyx_fp_t_DOUBLE_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_DOUBLE_filt).ToPointer());
  __pyx_delegate_val_CDOUBLE_filt = gcnew __pyx_delegate_t_5scipy_6signal_7lfilter_CDOUBLE_filt(CDOUBLE_filt);
  __pyx_function_pointer_CDOUBLE_filt = (__pyx_fp_t_CDOUBLE_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_CDOUBLE_filt).ToPointer());
  __pyx_delegate_val_EXTENDED_filt = gcnew __pyx_delegate_t_5scipy_6signal_7lfilter_EXTENDED_filt(EXTENDED_filt);
  __pyx_function_pointer_EXTENDED_filt = (__pyx_fp_t_EXTENDED_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_EXTENDED_filt).ToPointer());
  __pyx_delegate_val_CEXTENDED_filt = gcnew __pyx_delegate_t_5scipy_6signal_7lfilter_CEXTENDED_filt(CEXTENDED_filt);
  __pyx_function_pointer_CEXTENDED_filt = (__pyx_fp_t_CEXTENDED_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_CEXTENDED_filt).ToPointer());
  /*--- Execution code ---*/
  PythonDictionary^ __pyx_t_1;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":7
 * 
 * cimport numpy as np
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "stdlib.h":
 */
  import_array();

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/lfilter.pyx":2
 * 
 * # if PY_VERSION_HEX >= 0x03000000             # <<<<<<<<<<<<<<
 * # define PyNumber_Divide PyNumber_TrueDivide
 * # endif
 */
  __pyx_t_1 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":476
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
[assembly: PythonModule("scipy__signal__lfilter", module_lfilter::typeid)];
};
