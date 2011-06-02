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
  dict["__module__"] = "scipy.signal.sigtoolsmod";
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
#define __PYX_HAVE_API__scipy__signal__sigtoolsmod
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
#include "iterhelper.h"
#include "sigtools.h"

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

typedef int (*__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)(void *, void *);

typedef void (*__pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":651
 * 
 * 
 * cdef enum:             # <<<<<<<<<<<<<<
 *     CORR_MODE_VALID = 0
 *     CORR_MODE_SAME  = 1
 */

public enum  {
  __pyx_e_5scipy_6signal_11sigtoolsmod_CORR_MODE_VALID = 0,
  __pyx_e_5scipy_6signal_11sigtoolsmod_CORR_MODE_SAME = 1,
  __pyx_e_5scipy_6signal_11sigtoolsmod_CORR_MODE_FULL = 2
};
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
/* Module declarations from scipy.signal.sigtoolsmod */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate char *__pyx_delegate_t_5scipy_6signal_11sigtoolsmod_check_malloc(int);
static char *check_malloc(int); /*proto*/
static __pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction get_filter_function(int); /*proto*/
static int zfill(NpyArray *, __pyx_t_5numpy_npy_intp, char *, __pyx_t_5numpy_npy_intp); /*proto*/
static int RawFilter(NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, int, __pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_FLOAT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static int FLOAT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CFLOAT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static int CFLOAT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_DOUBLE_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static int DOUBLE_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CDOUBLE_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static int CDOUBLE_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_EXTENDED_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static int EXTENDED_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CEXTENDED_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static int CEXTENDED_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
static System::Object^ OBJECT_filt(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp); /*proto*/
static int _imp_correlate_nd_ubyte(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_byte(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_ushort(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_short(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_uint(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_int(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_ulong(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_long(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_ulonglong(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_longlong(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_float(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_double(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_longdouble(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_cfloat(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_cdouble(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_clongdouble(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_object(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static System::Object^ _correlate_nd_imp(NpyArrayIterObject *, NpyArrayIterObject *, NpyArrayIterObject *, int, int); /*proto*/
static System::Object^ fill_buffer(char *, NumpyDotNet::ndarray^, NumpyDotNet::ndarray^, char *, int, int, __pyx_t_5numpy_npy_intp *, __pyx_t_5numpy_npy_intp *, __pyx_t_5numpy_npy_uintp *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_DOUBLE_compare(double *, double *);
static int DOUBLE_compare(double *, double *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_FLOAT_compare(float *, float *);
static int FLOAT_compare(float *, float *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONGDOUBLE_compare(__pyx_t_5numpy_npy_longdouble *, __pyx_t_5numpy_npy_longdouble *);
static int LONGDOUBLE_compare(__pyx_t_5numpy_npy_longdouble *, __pyx_t_5numpy_npy_longdouble *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_BYTE_compare(__pyx_t_5numpy_npy_byte *, __pyx_t_5numpy_npy_byte *);
static int BYTE_compare(__pyx_t_5numpy_npy_byte *, __pyx_t_5numpy_npy_byte *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_SHORT_compare(short *, short *);
static int SHORT_compare(short *, short *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_INT_compare(int *, int *);
static int INT_compare(int *, int *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONG_compare(long *, long *);
static int LONG_compare(long *, long *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONGLONG_compare(__pyx_t_5numpy_npy_longlong *, __pyx_t_5numpy_npy_longlong *);
static int LONGLONG_compare(__pyx_t_5numpy_npy_longlong *, __pyx_t_5numpy_npy_longlong *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_UBYTE_compare(__pyx_t_5numpy_npy_ubyte *, __pyx_t_5numpy_npy_ubyte *);
static int UBYTE_compare(__pyx_t_5numpy_npy_ubyte *, __pyx_t_5numpy_npy_ubyte *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_USHORT_compare(__pyx_t_5numpy_npy_ushort *, __pyx_t_5numpy_npy_ushort *);
static int USHORT_compare(__pyx_t_5numpy_npy_ushort *, __pyx_t_5numpy_npy_ushort *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_UINT_compare(__pyx_t_5numpy_npy_uint *, __pyx_t_5numpy_npy_uint *);
static int UINT_compare(__pyx_t_5numpy_npy_uint *, __pyx_t_5numpy_npy_uint *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_ULONG_compare(__pyx_t_5numpy_npy_ulong *, __pyx_t_5numpy_npy_ulong *);
static int ULONG_compare(__pyx_t_5numpy_npy_ulong *, __pyx_t_5numpy_npy_ulong *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_ULONGLONG_compare(__pyx_t_5numpy_npy_ulonglong *, __pyx_t_5numpy_npy_ulonglong *);
static int ULONGLONG_compare(__pyx_t_5numpy_npy_ulonglong *, __pyx_t_5numpy_npy_ulonglong *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_OBJECT_compare(System::Object^, System::Object^);
static int OBJECT_compare(System::Object^, System::Object^); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.signal.sigtoolsmod"

/* Implementation of scipy.signal.sigtoolsmod */
namespace clr_sigtoolsmod {
  public ref class module_sigtoolsmod sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1557_82;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_76_56;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_101_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >^ __site_Negate_121_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_121_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_121_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_121_70;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_gt_121_47;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_121_47;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_122_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_125_39;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_125_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_num_133_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_133_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_135_46;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_138_51;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_142_72;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_142_33;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_150_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_158_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_211_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_216_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_221_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_225_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_236_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_240_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_245_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_618_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_619_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_620_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_627_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_628_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_629_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_630_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_631_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_632_41;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_638_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_639_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_640_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_641_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_642_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_644_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_div_645_34;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_656_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_669_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_669_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_670_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_672_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_672_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_673_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_num_679_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_679_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_681_26;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_1097_48;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_1096_42;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1125_38;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1131_38;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1142_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1151_25;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1155_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1200_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1211_36;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ElementSize_1217_43;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1217_43;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ElementSize_1234_54;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_1234_54;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1234_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_1284_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_1284_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1284_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1302_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_1327_32;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1327_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1328_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ElementSize_1341_68;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_1341_68;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ElementSize_1342_49;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1342_49;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1345_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_num_1347_22;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1347_22;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1349_50;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1353_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ElementSize_1355_35;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1355_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ElementSize_1361_34;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1361_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_1363_45;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1363_45;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1365_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_1375_61;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_1375_61;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_1376_61;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_1376_61;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1379_79;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1406_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_1410_34;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_cvt_Py_ssize_t_1410_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_1419_37;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1419_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_1430_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1430_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_1431_30;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1431_30;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1438_53;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1464_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1464_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1464_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_num_1477_18;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1477_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_1483_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1483_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_1483_40;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1483_40;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_1483_64;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1483_64;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1484_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_1486_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1486_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_1505_65;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_1505_65;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_1506_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1506_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_1508_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1508_23;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1509_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1512_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_1513_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1513_25;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1514_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_1516_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1516_25;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_1517_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1520_28;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1522_51;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lshift_1526_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_1526_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_1526_71;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_1526_57;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1526_57;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >^ __site_contains_1542_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1543_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1547_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1549_28;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1557_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1557_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_1557_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1557_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_1557_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >^ __site_contains_1573_12;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1574_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1577_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1585_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1594_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1596_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_1610_108;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1610_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_1629_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1629_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1630_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1652_24;
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
static int^ __pyx_int_2;
static int^ __pyx_int_3;
static int^ __pyx_int_4;
static int^ __pyx_int_5;
static int^ __pyx_int_8;
static int^ __pyx_int_neg_4;
static int^ __pyx_int_neg_5;
static int^ __pyx_int_16;
static int __pyx_k_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":73
 * # A memory allocator which raises a python exception.
 * # Used by median filter
 * cdef char *check_malloc(int size):             # <<<<<<<<<<<<<<
 *     cdef char *the_block = <char *>malloc(size)
 *     if the_block == NULL:
 */

static char *(*__pyx_function_pointer_check_malloc)(int);
typedef char *(*__pyx_fp_t_check_malloc)(int);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_check_malloc^ __pyx_delegate_val_check_malloc;
static  char *check_malloc(int __pyx_v_size) {
  char *__pyx_v_the_block;
  char *__pyx_r;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":74
 * # Used by median filter
 * cdef char *check_malloc(int size):
 *     cdef char *the_block = <char *>malloc(size)             # <<<<<<<<<<<<<<
 *     if the_block == NULL:
 *         print "\nERROR: unable to allocate %d bytes!\n" % size
 */
  __pyx_v_the_block = ((char *)malloc(__pyx_v_size));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":75
 * cdef char *check_malloc(int size):
 *     cdef char *the_block = <char *>malloc(size)
 *     if the_block == NULL:             # <<<<<<<<<<<<<<
 *         print "\nERROR: unable to allocate %d bytes!\n" % size
 *         raise MemoryError
 */
  __pyx_t_1 = (__pyx_v_the_block == NULL);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":76
 *     cdef char *the_block = <char *>malloc(size)
 *     if the_block == NULL:
 *         print "\nERROR: unable to allocate %d bytes!\n" % size             # <<<<<<<<<<<<<<
 *         raise MemoryError
 * 
 */
    __pyx_t_2 = __pyx_v_size;
    __pyx_t_3 = __site_op_mod_76_56->Target(__site_op_mod_76_56, ((System::Object^)"\nERROR: unable to allocate %d bytes!\n"), __pyx_t_2);
    __pyx_t_2 = nullptr;
    PythonOps::Print(__pyx_context, ((System::Object^)__pyx_t_3));
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":77
 *     if the_block == NULL:
 *         print "\nERROR: unable to allocate %d bytes!\n" % size
 *         raise MemoryError             # <<<<<<<<<<<<<<
 * 
 *     return the_block
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":79
 *         raise MemoryError
 * 
 *     return the_block             # <<<<<<<<<<<<<<
 * 
 * cdef BasicFilterFunction get_filter_function(int typenum):
 */
  __pyx_r = __pyx_v_the_block;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":81
 *     return the_block
 * 
 * cdef BasicFilterFunction get_filter_function(int typenum):             # <<<<<<<<<<<<<<
 *     if typenum == np.NPY_FLOAT:
 *         return <BasicFilterFunction>FLOAT_filt
 */

static  __pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction get_filter_function(int __pyx_v_typenum) {
  __pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction __pyx_r;
  int __pyx_t_1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":82
 * 
 * cdef BasicFilterFunction get_filter_function(int typenum):
 *     if typenum == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>FLOAT_filt
 *     elif typenum == np.NPY_DOUBLE:
 */
  __pyx_t_1 = (__pyx_v_typenum == NPY_FLOAT);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":83
 * cdef BasicFilterFunction get_filter_function(int typenum):
 *     if typenum == np.NPY_FLOAT:
 *         return <BasicFilterFunction>FLOAT_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_DOUBLE:
 *         return <BasicFilterFunction>DOUBLE_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction)__pyx_function_pointer_FLOAT_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":84
 *     if typenum == np.NPY_FLOAT:
 *         return <BasicFilterFunction>FLOAT_filt
 *     elif typenum == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>DOUBLE_filt
 *     elif typenum == np.NPY_LONGDOUBLE:
 */
  __pyx_t_1 = (__pyx_v_typenum == NPY_DOUBLE);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":85
 *         return <BasicFilterFunction>FLOAT_filt
 *     elif typenum == np.NPY_DOUBLE:
 *         return <BasicFilterFunction>DOUBLE_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         return <BasicFilterFunction>EXTENDED_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction)__pyx_function_pointer_DOUBLE_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":86
 *     elif typenum == np.NPY_DOUBLE:
 *         return <BasicFilterFunction>DOUBLE_filt
 *     elif typenum == np.NPY_LONGDOUBLE:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>EXTENDED_filt
 *     elif typenum == np.NPY_CFLOAT:
 */
  __pyx_t_1 = (__pyx_v_typenum == NPY_LONGDOUBLE);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":87
 *         return <BasicFilterFunction>DOUBLE_filt
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         return <BasicFilterFunction>EXTENDED_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CFLOAT:
 *         return <BasicFilterFunction>CFLOAT_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction)__pyx_function_pointer_EXTENDED_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":88
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         return <BasicFilterFunction>EXTENDED_filt
 *     elif typenum == np.NPY_CFLOAT:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>CFLOAT_filt
 *     elif typenum == np.NPY_CDOUBLE:
 */
  __pyx_t_1 = (__pyx_v_typenum == NPY_CFLOAT);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":89
 *         return <BasicFilterFunction>EXTENDED_filt
 *     elif typenum == np.NPY_CFLOAT:
 *         return <BasicFilterFunction>CFLOAT_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CDOUBLE:
 *         return <BasicFilterFunction>CDOUBLE_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction)__pyx_function_pointer_CFLOAT_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":90
 *     elif typenum == np.NPY_CFLOAT:
 *         return <BasicFilterFunction>CFLOAT_filt
 *     elif typenum == np.NPY_CDOUBLE:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>CDOUBLE_filt
 *     elif typenum == np.NPY_CLONGDOUBLE:
 */
  __pyx_t_1 = (__pyx_v_typenum == NPY_CDOUBLE);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":91
 *         return <BasicFilterFunction>CFLOAT_filt
 *     elif typenum == np.NPY_CDOUBLE:
 *         return <BasicFilterFunction>CDOUBLE_filt             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CLONGDOUBLE:
 *         return <BasicFilterFunction>CEXTENDED_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction)__pyx_function_pointer_CDOUBLE_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":92
 *     elif typenum == np.NPY_CDOUBLE:
 *         return <BasicFilterFunction>CDOUBLE_filt
 *     elif typenum == np.NPY_CLONGDOUBLE:             # <<<<<<<<<<<<<<
 *         return <BasicFilterFunction>CEXTENDED_filt
 *     #elif typenum == np.NPY_OBJECT:
 */
  __pyx_t_1 = (__pyx_v_typenum == NPY_CLONGDOUBLE);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":93
 *         return <BasicFilterFunction>CDOUBLE_filt
 *     elif typenum == np.NPY_CLONGDOUBLE:
 *         return <BasicFilterFunction>CEXTENDED_filt             # <<<<<<<<<<<<<<
 *     #elif typenum == np.NPY_OBJECT:
 *     #    return <BasicFilterFunction>OBJECT_filt
 */
    __pyx_r = ((__pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction)__pyx_function_pointer_CEXTENDED_filt);
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":97
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":101
 * 
 * # XXX: Error checking not done yet
 * def _linear_filter(np.ndarray b, np.ndarray a,             # <<<<<<<<<<<<<<
 *                    np.ndarray X, int axis=-1,
 *                    np.ndarray Vi=None):
 */

static System::Object^ _linear_filter(System::Object^ b, System::Object^ a, System::Object^ X, [InteropServices::Optional]System::Object^ axis, [InteropServices::Optional]System::Object^ Vi) {
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
  __pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction __pyx_v_basic_filter;
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
    __pyx_v_axis = __site_cvt_cvt_int_101_0->Target(__site_cvt_cvt_int_101_0, axis);
  } else {
    __pyx_v_axis = ((int)-1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(Vi) == nullptr) {
    __pyx_v_Vi = ((NumpyDotNet::ndarray^)Vi);
  } else {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":103
 * def _linear_filter(np.ndarray b, np.ndarray a,
 *                    np.ndarray X, int axis=-1,
 *                    np.ndarray Vi=None):             # <<<<<<<<<<<<<<
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":106
 *     cdef np.ndarray ara, arb, arX, arY, arVf, arVi
 *     cdef int theaxis, st
 *     cdef char *ara_ptr, input_flag = 0, *azero             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp na, nb, nal
 *     cdef BasicFilterFunction basic_filter
 */
  __pyx_v_input_flag = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":111
 *     cdef np.dtype type
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(b)))             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(a, type)
 *     type = np.NpyArray_FindArrayType_2args(X, type)
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(PyArray_TYPE(__pyx_v_b)))); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":112
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(b)))
 *     type = np.NpyArray_FindArrayType_2args(a, type)             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(X, type)
 *     if Vi is not None:
 */
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_a), __pyx_v_type)); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":113
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(b)))
 *     type = np.NpyArray_FindArrayType_2args(a, type)
 *     type = np.NpyArray_FindArrayType_2args(X, type)             # <<<<<<<<<<<<<<
 *     if Vi is not None:
 *         type = np.NpyArray_FindArrayType_2args(Vi, type)
 */
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_X), __pyx_v_type)); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":114
 *     type = np.NpyArray_FindArrayType_2args(a, type)
 *     type = np.NpyArray_FindArrayType_2args(X, type)
 *     if Vi is not None:             # <<<<<<<<<<<<<<
 *         type = np.NpyArray_FindArrayType_2args(Vi, type)
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_Vi) != nullptr);
  if (__pyx_t_2) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":115
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":117
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":118
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":119
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":121
 *     arX = np.PyArray_FromAny(X, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 * 
 *     if (axis < -np.PyArray_NDIM(arX)) or (axis > np.PyArray_NDIM(arX) - 1):             # <<<<<<<<<<<<<<
 *         raise ValueError("selected axis is out of range")
 * 
 */
  __pyx_t_3 = __pyx_v_axis;
  __pyx_t_1 = PyArray_NDIM(__pyx_v_arX); 
  __pyx_t_4 = __site_Negate_121_15->Target(__site_Negate_121_15, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_lt_121_13->Target(__site_op_lt_121_13, __pyx_t_3, __pyx_t_4);
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_2 = __site_istrue_121_13->Target(__site_istrue_121_13, __pyx_t_1);
  __pyx_t_1 = nullptr;
  if (!__pyx_t_2) {
    __pyx_t_1 = __pyx_v_axis;
    __pyx_t_4 = PyArray_NDIM(__pyx_v_arX); 
    __pyx_t_3 = __site_op_sub_121_70->Target(__site_op_sub_121_70, __pyx_t_4, __pyx_int_1);
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_op_gt_121_47->Target(__site_op_gt_121_47, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_5 = __site_istrue_121_47->Target(__site_istrue_121_47, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_6 = __pyx_t_5;
  } else {
    __pyx_t_6 = __pyx_t_2;
  }
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":122
 * 
 *     if (axis < -np.PyArray_NDIM(arX)) or (axis > np.PyArray_NDIM(arX) - 1):
 *         raise ValueError("selected axis is out of range")             # <<<<<<<<<<<<<<
 * 
 *     if axis < 0:
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_122_24->Target(__site_call1_122_24, __pyx_context, __pyx_t_4, ((System::Object^)"selected axis is out of range"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":124
 *         raise ValueError("selected axis is out of range")
 * 
 *     if axis < 0:             # <<<<<<<<<<<<<<
 *         theaxis = np.PyArray_NDIM(arX) + axis
 *     else:
 */
  __pyx_t_6 = (__pyx_v_axis < 0);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":125
 * 
 *     if axis < 0:
 *         theaxis = np.PyArray_NDIM(arX) + axis             # <<<<<<<<<<<<<<
 *     else:
 *         theaxis = axis
 */
    __pyx_t_3 = PyArray_NDIM(__pyx_v_arX); 
    __pyx_t_4 = __pyx_v_axis;
    __pyx_t_1 = __site_op_add_125_39->Target(__site_op_add_125_39, __pyx_t_3, __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_7 = __site_cvt_cvt_int_125_39->Target(__site_cvt_cvt_int_125_39, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_theaxis = __pyx_t_7;
    goto __pyx_L7;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":127
 *         theaxis = np.PyArray_NDIM(arX) + axis
 *     else:
 *         theaxis = axis             # <<<<<<<<<<<<<<
 * 
 *     if Vi is not None:
 */
    __pyx_v_theaxis = __pyx_v_axis;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":129
 *         theaxis = axis
 * 
 *     if Vi is not None:             # <<<<<<<<<<<<<<
 *         arVi = np.PyArray_FromAny(Vi, type, np.PyArray_NDIM(arX), np.PyArray_NDIM(arX), np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None)
 *         input_flag = 1
 */
  __pyx_t_6 = (((System::Object^)__pyx_v_Vi) != nullptr);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":130
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":131
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":133
 *         input_flag = 1
 * 
 *     cdef int typenum = type.num             # <<<<<<<<<<<<<<
 * 
 *     arY = np.PyArray_SimpleNew(np.PyArray_NDIM(arX), np.PyArray_DIMS(arX), typenum)
 */
  __pyx_t_8 = __site_get_num_133_27->Target(__site_get_num_133_27, ((System::Object^)__pyx_v_type), __pyx_context);
  __pyx_t_9 = __site_cvt_cvt_int_133_27->Target(__site_cvt_cvt_int_133_27, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_v_typenum = __pyx_t_9;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":135
 *     cdef int typenum = type.num
 * 
 *     arY = np.PyArray_SimpleNew(np.PyArray_NDIM(arX), np.PyArray_DIMS(arX), typenum)             # <<<<<<<<<<<<<<
 * 
 *     if input_flag:
 */
  __pyx_t_8 = PyArray_NDIM(__pyx_v_arX); 
  __pyx_t_10 = __site_cvt_cvt_int_135_46->Target(__site_cvt_cvt_int_135_46, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_t_8 = PyArray_SimpleNew(__pyx_t_10, PyArray_DIMS(__pyx_v_arX), __pyx_v_typenum); 
  if (__pyx_t_8 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_arY = ((NumpyDotNet::ndarray^)__pyx_t_8);
  __pyx_t_8 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":137
 *     arY = np.PyArray_SimpleNew(np.PyArray_NDIM(arX), np.PyArray_DIMS(arX), typenum)
 * 
 *     if input_flag:             # <<<<<<<<<<<<<<
 *         arVf = np.PyArray_SimpleNew(np.PyArray_NDIM(arVi), np.PyArray_DIMS(arVi), typenum)
 * 
 */
  if (__pyx_v_input_flag) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":138
 * 
 *     if input_flag:
 *         arVf = np.PyArray_SimpleNew(np.PyArray_NDIM(arVi), np.PyArray_DIMS(arVi), typenum)             # <<<<<<<<<<<<<<
 * 
 *     basic_filter = get_filter_function(<int>np.PyArray_TYPE(arX))
 */
    __pyx_t_8 = PyArray_NDIM(__pyx_v_arVi); 
    __pyx_t_11 = __site_cvt_cvt_int_138_51->Target(__site_cvt_cvt_int_138_51, __pyx_t_8);
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":140
 *         arVf = np.PyArray_SimpleNew(np.PyArray_NDIM(arVi), np.PyArray_DIMS(arVi), typenum)
 * 
 *     basic_filter = get_filter_function(<int>np.PyArray_TYPE(arX))             # <<<<<<<<<<<<<<
 *     if basic_filter == NULL:
 *         raise NotImplementedError("input type '%s' not supported\n", str(np.PyArray_DESCR(arX)))
 */
  __pyx_v_basic_filter = get_filter_function(((int)PyArray_TYPE(__pyx_v_arX)));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":141
 * 
 *     basic_filter = get_filter_function(<int>np.PyArray_TYPE(arX))
 *     if basic_filter == NULL:             # <<<<<<<<<<<<<<
 *         raise NotImplementedError("input type '%s' not supported\n", str(np.PyArray_DESCR(arX)))
 * 
 */
  __pyx_t_6 = (__pyx_v_basic_filter == NULL);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":142
 *     basic_filter = get_filter_function(<int>np.PyArray_TYPE(arX))
 *     if basic_filter == NULL:
 *         raise NotImplementedError("input type '%s' not supported\n", str(np.PyArray_DESCR(arX)))             # <<<<<<<<<<<<<<
 * 
 *     # Skip over leading zeros in vector representing denominator (a)
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "NotImplementedError");
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "str");
    __pyx_t_4 = PyArray_DESCR(__pyx_v_arX); 
    __pyx_t_1 = __site_call1_142_72->Target(__site_call1_142_72, __pyx_context, ((System::Object^)__pyx_t_3), __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_call2_142_33->Target(__site_call2_142_33, __pyx_context, __pyx_t_8, ((System::Object^)"input type '%s' not supported\n"), __pyx_t_1);
    __pyx_t_8 = nullptr;
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":146
 *     # Skip over leading zeros in vector representing denominator (a)
 *     # XXX: handle this correctly
 *     azero = <char *>np.PyArray_Zero(ara)             # <<<<<<<<<<<<<<
 *     ara_ptr = <char *>np.PyArray_DATA(ara)
 *     nal = np.PyArray_ITEMSIZE(ara);
 */
  __pyx_v_azero = ((char *)PyArray_Zero(((System::Object^)__pyx_v_ara)));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":147
 *     # XXX: handle this correctly
 *     azero = <char *>np.PyArray_Zero(ara)
 *     ara_ptr = <char *>np.PyArray_DATA(ara)             # <<<<<<<<<<<<<<
 *     nal = np.PyArray_ITEMSIZE(ara);
 *     if memcmp(<void *>ara_ptr, <void *>azero, nal) == 0:
 */
  __pyx_v_ara_ptr = ((char *)PyArray_DATA(__pyx_v_ara));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":148
 *     azero = <char *>np.PyArray_Zero(ara)
 *     ara_ptr = <char *>np.PyArray_DATA(ara)
 *     nal = np.PyArray_ITEMSIZE(ara);             # <<<<<<<<<<<<<<
 *     if memcmp(<void *>ara_ptr, <void *>azero, nal) == 0:
 *         raise ValueError("BUG: filter coefficient a[0] == 0 not supported yet")
 */
  __pyx_v_nal = PyArray_ITEMSIZE(__pyx_v_ara);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":149
 *     ara_ptr = <char *>np.PyArray_DATA(ara)
 *     nal = np.PyArray_ITEMSIZE(ara);
 *     if memcmp(<void *>ara_ptr, <void *>azero, nal) == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("BUG: filter coefficient a[0] == 0 not supported yet")
 * 
 */
  __pyx_t_6 = (memcmp(((void *)__pyx_v_ara_ptr), ((void *)__pyx_v_azero), __pyx_v_nal) == 0);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":150
 *     nal = np.PyArray_ITEMSIZE(ara);
 *     if memcmp(<void *>ara_ptr, <void *>azero, nal) == 0:
 *         raise ValueError("BUG: filter coefficient a[0] == 0 not supported yet")             # <<<<<<<<<<<<<<
 * 
 *     np.NpyDataMem_FREE(azero)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_150_24->Target(__site_call1_150_24, __pyx_context, __pyx_t_4, ((System::Object^)"BUG: filter coefficient a[0] == 0 not supported yet"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":152
 *         raise ValueError("BUG: filter coefficient a[0] == 0 not supported yet")
 * 
 *     np.NpyDataMem_FREE(azero)             # <<<<<<<<<<<<<<
 * 
 *     na = np.PyArray_SIZE(ara)
 */
  NpyDataMem_FREE(__pyx_v_azero);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":154
 *     np.NpyDataMem_FREE(azero)
 * 
 *     na = np.PyArray_SIZE(ara)             # <<<<<<<<<<<<<<
 *     nb = np.PyArray_SIZE(arb)
 *     if input_flag:
 */
  __pyx_v_na = PyArray_SIZE(__pyx_v_ara);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":155
 * 
 *     na = np.PyArray_SIZE(ara)
 *     nb = np.PyArray_SIZE(arb)             # <<<<<<<<<<<<<<
 *     if input_flag:
 *         if np.PyArray_DIMS(arVi)[theaxis] != (na if na > nb else nb) - 1:
 */
  __pyx_v_nb = PyArray_SIZE(__pyx_v_arb);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":156
 *     na = np.PyArray_SIZE(ara)
 *     nb = np.PyArray_SIZE(arb)
 *     if input_flag:             # <<<<<<<<<<<<<<
 *         if np.PyArray_DIMS(arVi)[theaxis] != (na if na > nb else nb) - 1:
 *             raise ValueError("The number of initial conditions must be max([len(a),len(b)]) - 1")
 */
  if (__pyx_v_input_flag) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":157
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":158
 *     if input_flag:
 *         if np.PyArray_DIMS(arVi)[theaxis] != (na if na > nb else nb) - 1:
 *             raise ValueError("The number of initial conditions must be max([len(a),len(b)]) - 1")             # <<<<<<<<<<<<<<
 * 
 *     st = RawFilter(arb, ara, arX, arVi, arVf, arY, theaxis, basic_filter)
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __site_call1_158_28->Target(__site_call1_158_28, __pyx_context, __pyx_t_1, ((System::Object^)"The number of initial conditions must be max([len(a),len(b)]) - 1"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L13;
    }
    __pyx_L13:;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":160
 *             raise ValueError("The number of initial conditions must be max([len(a),len(b)]) - 1")
 * 
 *     st = RawFilter(arb, ara, arX, arVi, arVf, arY, theaxis, basic_filter)             # <<<<<<<<<<<<<<
 *     if st:
 *         raise SystemError # RawFilter raised an exception
 */
  __pyx_v_st = RawFilter(__pyx_v_arb, __pyx_v_ara, __pyx_v_arX, __pyx_v_arVi, __pyx_v_arVf, __pyx_v_arY, __pyx_v_theaxis, __pyx_v_basic_filter);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":161
 * 
 *     st = RawFilter(arb, ara, arX, arVi, arVf, arY, theaxis, basic_filter)
 *     if st:             # <<<<<<<<<<<<<<
 *         raise SystemError # RawFilter raised an exception
 * 
 */
  if (__pyx_v_st) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":162
 *     st = RawFilter(arb, ara, arX, arVi, arVf, arY, theaxis, basic_filter)
 *     if st:
 *         raise SystemError # RawFilter raised an exception             # <<<<<<<<<<<<<<
 * 
 *     if not input_flag:
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "SystemError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L14;
  }
  __pyx_L14:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":164
 *         raise SystemError # RawFilter raised an exception
 * 
 *     if not input_flag:             # <<<<<<<<<<<<<<
 *         return np.PyArray_Return(arY)
 *     else:
 */
  __pyx_t_6 = (!__pyx_v_input_flag);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":165
 * 
 *     if not input_flag:
 *         return np.PyArray_Return(arY)             # <<<<<<<<<<<<<<
 *     else:
 *         return (arY, arVf)
 */
    __pyx_t_4 = PyArray_Return(((System::Object^)__pyx_v_arY)); 
    __pyx_r = __pyx_t_4;
    __pyx_t_4 = nullptr;
    goto __pyx_L0;
    goto __pyx_L15;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":167
 *         return np.PyArray_Return(arY)
 *     else:
 *         return (arY, arVf)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_arY), ((System::Object^)__pyx_v_arVf)});
    __pyx_r = __pyx_t_4;
    __pyx_t_4 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L15:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":171
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":174
 *     cdef char *xzero
 *     cdef np.npy_intp i, nxl
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(x)             # <<<<<<<<<<<<<<
 * 
 *     nxl = np.NpyArray_ITEMSIZE(x)
 */
  __pyx_v_copyswap = ARRAY_COPYSWAP_FUNC(__pyx_v_x);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":176
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(x)
 * 
 *     nxl = np.NpyArray_ITEMSIZE(x)             # <<<<<<<<<<<<<<
 *     xzero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(x))
 * 
 */
  __pyx_v_nxl = NpyArray_ITEMSIZE(__pyx_v_x);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":177
 * 
 *     nxl = np.NpyArray_ITEMSIZE(x)
 *     xzero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(x))             # <<<<<<<<<<<<<<
 * 
 *     if nx > 0:
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_x)); 
  __pyx_v_xzero = ((char *)PyArray_Zero(__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":179
 *     xzero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(x))
 * 
 *     if nx > 0:             # <<<<<<<<<<<<<<
 *         for i in range(nx):
 *             copyswap(xzfilled + i * nxl, <char*>np.NpyArray_DATA(x) + i * nxl, 0, NULL)
 */
  __pyx_t_2 = (__pyx_v_nx > 0);
  if (__pyx_t_2) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":180
 * 
 *     if nx > 0:
 *         for i in range(nx):             # <<<<<<<<<<<<<<
 *             copyswap(xzfilled + i * nxl, <char*>np.NpyArray_DATA(x) + i * nxl, 0, NULL)
 * 
 */
    __pyx_t_3 = __pyx_v_nx;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_i = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":181
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":183
 *             copyswap(xzfilled + i * nxl, <char*>np.NpyArray_DATA(x) + i * nxl, 0, NULL)
 * 
 *     for i in range(nx, nxzfilled):             # <<<<<<<<<<<<<<
 *         copyswap(xzfilled + i * nxl, xzero, 0, NULL)
 * 
 */
  __pyx_t_3 = __pyx_v_nxzfilled;
  for (__pyx_t_4 = __pyx_v_nx; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
    __pyx_v_i = __pyx_t_4;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":184
 * 
 *     for i in range(nx, nxzfilled):
 *         copyswap(xzfilled + i * nxl, xzero, 0, NULL)             # <<<<<<<<<<<<<<
 * 
 *     np.NpyDataMem_FREE(xzero)
 */
    __pyx_v_copyswap((__pyx_v_xzfilled + (__pyx_v_i * __pyx_v_nxl)), __pyx_v_xzero, 0, NULL);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":186
 *         copyswap(xzfilled + i * nxl, xzero, 0, NULL)
 * 
 *     np.NpyDataMem_FREE(xzero)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
  NpyDataMem_FREE(__pyx_v_xzero);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":188
 *     np.NpyDataMem_FREE(xzero)
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":198
 * # XXX: the code should be refactored (at least with/without initial
 * # condition), some code is wasteful here
 * cdef int RawFilter(np.ndarray b, np.ndarray a,             # <<<<<<<<<<<<<<
 *           np.ndarray x, np.ndarray zi,
 *           np.ndarray zf, np.ndarray y, int axis,
 */

static  int RawFilter(NumpyDotNet::ndarray^ __pyx_v_b, NumpyDotNet::ndarray^ __pyx_v_a, NumpyDotNet::ndarray^ __pyx_v_x, NumpyDotNet::ndarray^ __pyx_v_zi, NumpyDotNet::ndarray^ __pyx_v_zf, NumpyDotNet::ndarray^ __pyx_v_y, int __pyx_v_axis, __pyx_t_5scipy_6signal_11sigtoolsmod_BasicFilterFunction __pyx_v_filter_func) {
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":202
 *           np.ndarray zf, np.ndarray y, int axis,
 *           BasicFilterFunction filter_func):
 *     cdef np.NpyArrayIterObject *itx, *ity, *itzi=NULL, *itzf=NULL             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp nitx, i, nxl, nzfl, j
 *     cdef np.npy_intp na, nb, nal, nbl
 */
  __pyx_v_itzi = NULL;
  __pyx_v_itzf = NULL;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":207
 *     cdef np.npy_intp nfilt
 *     cdef char *azfilled, *bzfilled, *zfzfilled, *yoyo
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(np.PyArray_ARRAY(x))             # <<<<<<<<<<<<<<
 * 
 *     itx = np.PyArray_IterAllButAxis(x, &axis)
 */
  __pyx_v_copyswap = ARRAY_COPYSWAP_FUNC(PyArray_ARRAY(__pyx_v_x));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":209
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(np.PyArray_ARRAY(x))
 * 
 *     itx = np.PyArray_IterAllButAxis(x, &axis)             # <<<<<<<<<<<<<<
 *     if itx == NULL:
 *         raise MemoryError("Could not create itx")
 */
  __pyx_v_itx = PyArray_IterAllButAxis(__pyx_v_x, (&__pyx_v_axis));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":210
 * 
 *     itx = np.PyArray_IterAllButAxis(x, &axis)
 *     if itx == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create itx")
 *     nitx = itx.size
 */
  __pyx_t_1 = (__pyx_v_itx == NULL);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":211
 *     itx = np.PyArray_IterAllButAxis(x, &axis)
 *     if itx == NULL:
 *         raise MemoryError("Could not create itx")             # <<<<<<<<<<<<<<
 *     nitx = itx.size
 * 
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_3 = __site_call1_211_25->Target(__site_call1_211_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create itx"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":212
 *     if itx == NULL:
 *         raise MemoryError("Could not create itx")
 *     nitx = itx.size             # <<<<<<<<<<<<<<
 * 
 *     ity = np.PyArray_IterAllButAxis(y, &axis)
 */
  __pyx_v_nitx = __pyx_v_itx->size;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":214
 *     nitx = itx.size
 * 
 *     ity = np.PyArray_IterAllButAxis(y, &axis)             # <<<<<<<<<<<<<<
 *     if ity == NULL:
 *         raise MemoryError("Could not create ity")
 */
  __pyx_v_ity = PyArray_IterAllButAxis(__pyx_v_y, (&__pyx_v_axis));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":215
 * 
 *     ity = np.PyArray_IterAllButAxis(y, &axis)
 *     if ity == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create ity")
 * 
 */
  __pyx_t_1 = (__pyx_v_ity == NULL);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":216
 *     ity = np.PyArray_IterAllButAxis(y, &axis)
 *     if ity == NULL:
 *         raise MemoryError("Could not create ity")             # <<<<<<<<<<<<<<
 * 
 *     if zi is not None:
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_2 = __site_call1_216_25->Target(__site_call1_216_25, __pyx_context, __pyx_t_3, ((System::Object^)"Could not create ity"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":218
 *         raise MemoryError("Could not create ity")
 * 
 *     if zi is not None:             # <<<<<<<<<<<<<<
 *         itzi = np.PyArray_IterAllButAxis(zi, &axis)
 *         if itzi == NULL:
 */
  __pyx_t_1 = (((System::Object^)__pyx_v_zi) != nullptr);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":219
 * 
 *     if zi is not None:
 *         itzi = np.PyArray_IterAllButAxis(zi, &axis)             # <<<<<<<<<<<<<<
 *         if itzi == NULL:
 *             raise MemoryError("Could not create itzi")
 */
    __pyx_v_itzi = PyArray_IterAllButAxis(__pyx_v_zi, (&__pyx_v_axis));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":220
 *     if zi is not None:
 *         itzi = np.PyArray_IterAllButAxis(zi, &axis)
 *         if itzi == NULL:             # <<<<<<<<<<<<<<
 *             raise MemoryError("Could not create itzi")
 * 
 */
    __pyx_t_1 = (__pyx_v_itzi == NULL);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":221
 *         itzi = np.PyArray_IterAllButAxis(zi, &axis)
 *         if itzi == NULL:
 *             raise MemoryError("Could not create itzi")             # <<<<<<<<<<<<<<
 * 
 *         itzf = np.PyArray_IterAllButAxis(zf, &axis)
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
      __pyx_t_3 = __site_call1_221_29->Target(__site_call1_221_29, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create itzi"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":223
 *             raise MemoryError("Could not create itzi")
 * 
 *         itzf = np.PyArray_IterAllButAxis(zf, &axis)             # <<<<<<<<<<<<<<
 *         if itzf == NULL:
 *             raise MemoryError("Could not create itzf")
 */
    __pyx_v_itzf = PyArray_IterAllButAxis(__pyx_v_zf, (&__pyx_v_axis));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":224
 * 
 *         itzf = np.PyArray_IterAllButAxis(zf, &axis)
 *         if itzf == NULL:             # <<<<<<<<<<<<<<
 *             raise MemoryError("Could not create itzf")
 * 
 */
    __pyx_t_1 = (__pyx_v_itzf == NULL);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":225
 *         itzf = np.PyArray_IterAllButAxis(zf, &axis)
 *         if itzf == NULL:
 *             raise MemoryError("Could not create itzf")             # <<<<<<<<<<<<<<
 * 
 *     na = np.PyArray_SIZE(a)
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
      __pyx_t_2 = __site_call1_225_29->Target(__site_call1_225_29, __pyx_context, __pyx_t_3, ((System::Object^)"Could not create itzf"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L7;
    }
    __pyx_L7:;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":227
 *             raise MemoryError("Could not create itzf")
 * 
 *     na = np.PyArray_SIZE(a)             # <<<<<<<<<<<<<<
 *     nal = np.PyArray_ITEMSIZE(a)
 *     nb = np.PyArray_SIZE(b)
 */
  __pyx_v_na = PyArray_SIZE(__pyx_v_a);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":228
 * 
 *     na = np.PyArray_SIZE(a)
 *     nal = np.PyArray_ITEMSIZE(a)             # <<<<<<<<<<<<<<
 *     nb = np.PyArray_SIZE(b)
 *     nbl = np.PyArray_ITEMSIZE(b)
 */
  __pyx_v_nal = PyArray_ITEMSIZE(__pyx_v_a);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":229
 *     na = np.PyArray_SIZE(a)
 *     nal = np.PyArray_ITEMSIZE(a)
 *     nb = np.PyArray_SIZE(b)             # <<<<<<<<<<<<<<
 *     nbl = np.PyArray_ITEMSIZE(b)
 * 
 */
  __pyx_v_nb = PyArray_SIZE(__pyx_v_b);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":230
 *     nal = np.PyArray_ITEMSIZE(a)
 *     nb = np.PyArray_SIZE(b)
 *     nbl = np.PyArray_ITEMSIZE(b)             # <<<<<<<<<<<<<<
 * 
 *     nfilt = na if na > nb else nb
 */
  __pyx_v_nbl = PyArray_ITEMSIZE(__pyx_v_b);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":232
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":234
 *     nfilt = na if na > nb else nb
 * 
 *     azfilled = <char *>malloc(nal * nfilt)             # <<<<<<<<<<<<<<
 *     if azfilled == NULL:
 *         raise MemoryError("Could not create azfilled")
 */
  __pyx_v_azfilled = ((char *)malloc((__pyx_v_nal * __pyx_v_nfilt)));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":235
 * 
 *     azfilled = <char *>malloc(nal * nfilt)
 *     if azfilled == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create azfilled")
 * 
 */
  __pyx_t_1 = (__pyx_v_azfilled == NULL);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":236
 *     azfilled = <char *>malloc(nal * nfilt)
 *     if azfilled == NULL:
 *         raise MemoryError("Could not create azfilled")             # <<<<<<<<<<<<<<
 * 
 *     bzfilled = <char *>malloc(nbl * nfilt)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_3 = __site_call1_236_25->Target(__site_call1_236_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create azfilled"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":238
 *         raise MemoryError("Could not create azfilled")
 * 
 *     bzfilled = <char *>malloc(nbl * nfilt)             # <<<<<<<<<<<<<<
 *     if bzfilled == NULL:
 *         raise MemoryError("Could not create bzfilled")
 */
  __pyx_v_bzfilled = ((char *)malloc((__pyx_v_nbl * __pyx_v_nfilt)));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":239
 * 
 *     bzfilled = <char *>malloc(nbl * nfilt)
 *     if bzfilled == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create bzfilled")
 * 
 */
  __pyx_t_1 = (__pyx_v_bzfilled == NULL);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":240
 *     bzfilled = <char *>malloc(nbl * nfilt)
 *     if bzfilled == NULL:
 *         raise MemoryError("Could not create bzfilled")             # <<<<<<<<<<<<<<
 * 
 *     nxl = np.PyArray_ITEMSIZE(x)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_2 = __site_call1_240_25->Target(__site_call1_240_25, __pyx_context, __pyx_t_3, ((System::Object^)"Could not create bzfilled"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":242
 *         raise MemoryError("Could not create bzfilled")
 * 
 *     nxl = np.PyArray_ITEMSIZE(x)             # <<<<<<<<<<<<<<
 *     zfzfilled = <char *>malloc(nxl * (nfilt - 1))
 *     if zfzfilled == NULL:
 */
  __pyx_v_nxl = PyArray_ITEMSIZE(__pyx_v_x);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":243
 * 
 *     nxl = np.PyArray_ITEMSIZE(x)
 *     zfzfilled = <char *>malloc(nxl * (nfilt - 1))             # <<<<<<<<<<<<<<
 *     if zfzfilled == NULL:
 *         raise MemoryError("Could not create zfzfilled")
 */
  __pyx_v_zfzfilled = ((char *)malloc((__pyx_v_nxl * (__pyx_v_nfilt - 1))));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":244
 *     nxl = np.PyArray_ITEMSIZE(x)
 *     zfzfilled = <char *>malloc(nxl * (nfilt - 1))
 *     if zfzfilled == NULL:             # <<<<<<<<<<<<<<
 *         raise MemoryError("Could not create zfzfilled")
 * 
 */
  __pyx_t_1 = (__pyx_v_zfzfilled == NULL);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":245
 *     zfzfilled = <char *>malloc(nxl * (nfilt - 1))
 *     if zfzfilled == NULL:
 *         raise MemoryError("Could not create zfzfilled")             # <<<<<<<<<<<<<<
 * 
 *     # Initialize zero filled buffers to 0, so that we can use
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
    __pyx_t_3 = __site_call1_245_25->Target(__site_call1_245_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create zfzfilled"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":253
 *     # refcounts), but oh well...
 * 
 *     memset(<void *>azfilled, 0, nal * nfilt)             # <<<<<<<<<<<<<<
 *     memset(<void *>bzfilled, 0, nbl * nfilt)
 *     memset(<void *>zfzfilled, 0, nxl * (nfilt - 1))
 */
  memset(((void *)__pyx_v_azfilled), 0, (__pyx_v_nal * __pyx_v_nfilt));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":254
 * 
 *     memset(<void *>azfilled, 0, nal * nfilt)
 *     memset(<void *>bzfilled, 0, nbl * nfilt)             # <<<<<<<<<<<<<<
 *     memset(<void *>zfzfilled, 0, nxl * (nfilt - 1))
 * 
 */
  memset(((void *)__pyx_v_bzfilled), 0, (__pyx_v_nbl * __pyx_v_nfilt));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":255
 *     memset(<void *>azfilled, 0, nal * nfilt)
 *     memset(<void *>bzfilled, 0, nbl * nfilt)
 *     memset(<void *>zfzfilled, 0, nxl * (nfilt - 1))             # <<<<<<<<<<<<<<
 * 
 *     zfill(np.PyArray_ARRAY(a), na, azfilled, nfilt)
 */
  memset(((void *)__pyx_v_zfzfilled), 0, (__pyx_v_nxl * (__pyx_v_nfilt - 1)));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":257
 *     memset(<void *>zfzfilled, 0, nxl * (nfilt - 1))
 * 
 *     zfill(np.PyArray_ARRAY(a), na, azfilled, nfilt)             # <<<<<<<<<<<<<<
 *     zfill(np.PyArray_ARRAY(b), nb, bzfilled, nfilt)
 * 
 */
  zfill(PyArray_ARRAY(__pyx_v_a), __pyx_v_na, __pyx_v_azfilled, __pyx_v_nfilt);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":258
 * 
 *     zfill(np.PyArray_ARRAY(a), na, azfilled, nfilt)
 *     zfill(np.PyArray_ARRAY(b), nb, bzfilled, nfilt)             # <<<<<<<<<<<<<<
 * 
 *     # XXX: Check that zf and zi have same type ?
 */
  zfill(PyArray_ARRAY(__pyx_v_b), __pyx_v_nb, __pyx_v_bzfilled, __pyx_v_nfilt);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":261
 * 
 *     # XXX: Check that zf and zi have same type ?
 *     if zf is not None:             # <<<<<<<<<<<<<<
 *         nzfl = np.PyArray_ITEMSIZE(zf)
 *     else:
 */
  __pyx_t_1 = (((System::Object^)__pyx_v_zf) != nullptr);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":262
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":264
 *         nzfl = np.PyArray_ITEMSIZE(zf)
 *     else:
 *         nzfl = 0             # <<<<<<<<<<<<<<
 * 
 *     # Iterate over the input array
 */
    __pyx_v_nzfl = 0;
  }
  __pyx_L11:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":267
 * 
 *     # Iterate over the input array
 *     for i in range(nitx):             # <<<<<<<<<<<<<<
 *         if zi is not None:
 *             yoyo = itzi.dataptr
 */
  __pyx_t_4 = __pyx_v_nitx;
  for (__pyx_t_5 = 0; __pyx_t_5 < __pyx_t_4; __pyx_t_5+=1) {
    __pyx_v_i = __pyx_t_5;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":268
 *     # Iterate over the input array
 *     for i in range(nitx):
 *         if zi is not None:             # <<<<<<<<<<<<<<
 *             yoyo = itzi.dataptr
 *             # Copy initial conditions zi in zfzfilled buffer
 */
    __pyx_t_1 = (((System::Object^)__pyx_v_zi) != nullptr);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":269
 *     for i in range(nitx):
 *         if zi is not None:
 *             yoyo = itzi.dataptr             # <<<<<<<<<<<<<<
 *             # Copy initial conditions zi in zfzfilled buffer
 *             for j in range(nfilt - 1):
 */
      __pyx_v_yoyo = __pyx_v_itzi->dataptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":271
 *             yoyo = itzi.dataptr
 *             # Copy initial conditions zi in zfzfilled buffer
 *             for j in range(nfilt - 1):             # <<<<<<<<<<<<<<
 *                 copyswap(zfzfilled + j * nzfl, yoyo, 0, NULL)
 *                 yoyo += itzi.strides[axis]
 */
      __pyx_t_6 = (__pyx_v_nfilt - 1);
      for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
        __pyx_v_j = __pyx_t_7;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":272
 *             # Copy initial conditions zi in zfzfilled buffer
 *             for j in range(nfilt - 1):
 *                 copyswap(zfzfilled + j * nzfl, yoyo, 0, NULL)             # <<<<<<<<<<<<<<
 *                 yoyo += itzi.strides[axis]
 * 
 */
        __pyx_v_copyswap((__pyx_v_zfzfilled + (__pyx_v_j * __pyx_v_nzfl)), __pyx_v_yoyo, 0, NULL);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":273
 *             for j in range(nfilt - 1):
 *                 copyswap(zfzfilled + j * nzfl, yoyo, 0, NULL)
 *                 yoyo += itzi.strides[axis]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArray_ITER_NEXT(itzi)
 */
        __pyx_v_yoyo += (__pyx_v_itzi->strides[__pyx_v_axis]);
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":275
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":277
 *             np.PyArray_ITER_NEXT(itzi)
 *         else:
 *             zfill(np.PyArray_ARRAY(x), 0, zfzfilled, nfilt - 1)             # <<<<<<<<<<<<<<
 * 
 *         filter_func(bzfilled, azfilled,
 */
      zfill(PyArray_ARRAY(__pyx_v_x), 0, __pyx_v_zfzfilled, (__pyx_v_nfilt - 1));
    }
    __pyx_L14:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":282
 *                     itx.dataptr, ity.dataptr, zfzfilled,
 *                     nfilt, np.PyArray_DIMS(x)[axis], itx.strides[axis],
 *                     ity.strides[axis]);             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_NEXT(itx)
 *         np.PyArray_ITER_NEXT(ity)
 */
    __pyx_v_filter_func(__pyx_v_bzfilled, __pyx_v_azfilled, __pyx_v_itx->dataptr, __pyx_v_ity->dataptr, __pyx_v_zfzfilled, __pyx_v_nfilt, (PyArray_DIMS(__pyx_v_x)[__pyx_v_axis]), (__pyx_v_itx->strides[__pyx_v_axis]), (__pyx_v_ity->strides[__pyx_v_axis]));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":283
 *                     nfilt, np.PyArray_DIMS(x)[axis], itx.strides[axis],
 *                     ity.strides[axis]);
 *         np.PyArray_ITER_NEXT(itx)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_NEXT(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":284
 *                     ity.strides[axis]);
 *         np.PyArray_ITER_NEXT(itx)
 *         np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         # Copy tmp buffer fo final values back into zf output array
 */
    PyArray_ITER_NEXT(__pyx_v_ity);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":287
 * 
 *         # Copy tmp buffer fo final values back into zf output array
 *         if zi is not None:             # <<<<<<<<<<<<<<
 *             yoyo = itzf.dataptr
 *             for j in range(nfilt - 1):
 */
    __pyx_t_1 = (((System::Object^)__pyx_v_zi) != nullptr);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":288
 *         # Copy tmp buffer fo final values back into zf output array
 *         if zi is not None:
 *             yoyo = itzf.dataptr             # <<<<<<<<<<<<<<
 *             for j in range(nfilt - 1):
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)
 */
      __pyx_v_yoyo = __pyx_v_itzf->dataptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":289
 *         if zi is not None:
 *             yoyo = itzf.dataptr
 *             for j in range(nfilt - 1):             # <<<<<<<<<<<<<<
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)
 *                 yoyo += itzf.strides[axis]
 */
      __pyx_t_6 = (__pyx_v_nfilt - 1);
      for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
        __pyx_v_j = __pyx_t_7;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":290
 *             yoyo = itzf.dataptr
 *             for j in range(nfilt - 1):
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)             # <<<<<<<<<<<<<<
 *                 yoyo += itzf.strides[axis]
 *             np.PyArray_ITER_NEXT(itzf);
 */
        __pyx_v_copyswap(__pyx_v_yoyo, (__pyx_v_zfzfilled + (__pyx_v_j * __pyx_v_nzfl)), 0, NULL);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":291
 *             for j in range(nfilt - 1):
 *                 copyswap(yoyo, zfzfilled + j * nzfl, 0, NULL)
 *                 yoyo += itzf.strides[axis]             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(itzf);
 * 
 */
        __pyx_v_yoyo += (__pyx_v_itzf->strides[__pyx_v_axis]);
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":292
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":295
 * 
 *     # Free up allocated memory
 *     free(zfzfilled)             # <<<<<<<<<<<<<<
 *     free(bzfilled)
 *     free(azfilled)
 */
  free(__pyx_v_zfzfilled);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":296
 *     # Free up allocated memory
 *     free(zfzfilled)
 *     free(bzfilled)             # <<<<<<<<<<<<<<
 *     free(azfilled)
 * 
 */
  free(__pyx_v_bzfilled);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":297
 *     free(zfzfilled)
 *     free(bzfilled)
 *     free(azfilled)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
  free(__pyx_v_azfilled);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":299
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":305
 * #   dimension of an N-D array.                                  #
 * #################################################################
 * cdef int FLOAT_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static int (*__pyx_function_pointer_FLOAT_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef int (*__pyx_fp_t_FLOAT_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_FLOAT_filt^ __pyx_delegate_val_FLOAT_filt;
static  int FLOAT_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
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
  int __pyx_r;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  float __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  float __pyx_t_7;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":308
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef float *ptr_Z, *ptr_b
 *     cdef float *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":312
 *     cdef float *ptr_a
 *     cdef float *xn, *yn
 *     cdef float a0 = (<float *> a)[0]             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp n
 *     cdef np.npy_uintp k
 */
  __pyx_v_a0 = (((float *)__pyx_v_a)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":316
 *     cdef np.npy_uintp k
 * 
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <float *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <float *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":317
 * 
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/             # <<<<<<<<<<<<<<
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x
 */
    __pyx_v_ptr_b = ((float *)__pyx_v_b);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":318
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <float *>a             # <<<<<<<<<<<<<<
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y
 */
    __pyx_v_ptr_a = ((float *)__pyx_v_a);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":319
 *         ptr_b = <float *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <float *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((float *)__pyx_v_ptr_x);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":320
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <float *>Z
 */
    __pyx_v_yn = ((float *)__pyx_v_ptr_y);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":321
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <float *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":322
 *         yn = <float *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <float *>Z             # <<<<<<<<<<<<<<
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 */
      __pyx_v_ptr_Z = ((float *)__pyx_v_Z);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":323
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":324
 *             ptr_Z = <float *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1             # <<<<<<<<<<<<<<
 *             ptr_a += 1
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":325
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 *             ptr_a += 1             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":327
 *             ptr_a += 1
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":328
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":329
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1             # <<<<<<<<<<<<<<
 *                 ptr_a += 1
 *                 ptr_Z += 1
 */
        __pyx_v_ptr_b += 1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":330
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 *                 ptr_a += 1             # <<<<<<<<<<<<<<
 *                 ptr_Z += 1
 *             # Calculate last delay
 */
        __pyx_v_ptr_a += 1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":331
 *                 ptr_b += 1
 *                 ptr_a += 1
 *                 ptr_Z += 1             # <<<<<<<<<<<<<<
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 */
        __pyx_v_ptr_Z += 1;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":333
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":335
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":337
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 * 
 *         ptr_y += stride_Y      # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 *     return 0
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":338
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":339
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":342
 * 
 * 
 * cdef int CFLOAT_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static int (*__pyx_function_pointer_CFLOAT_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef int (*__pyx_fp_t_CFLOAT_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CFLOAT_filt^ __pyx_delegate_val_CFLOAT_filt;
static  int CFLOAT_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
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
  int __pyx_r;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  float __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":345
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef float *ptr_Z, *ptr_b
 *     cdef float *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":349
 *     cdef float *ptr_a
 *     cdef float *xn, *yn
 *     cdef float a0r = (<float *>a)[0]             # <<<<<<<<<<<<<<
 *     cdef float a0i = (<float *>a)[1]
 *     cdef float a0_mag, tmpr, tmpi
 */
  __pyx_v_a0r = (((float *)__pyx_v_a)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":350
 *     cdef float *xn, *yn
 *     cdef float a0r = (<float *>a)[0]
 *     cdef float a0i = (<float *>a)[1]             # <<<<<<<<<<<<<<
 *     cdef float a0_mag, tmpr, tmpi
 *     cdef np.npy_intp n
 */
  __pyx_v_a0i = (((float *)__pyx_v_a)[1]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":355
 *     cdef np.npy_uintp k
 * 
 *     a0_mag = a0r * a0r + a0i * a0i             # <<<<<<<<<<<<<<
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers
 */
  __pyx_v_a0_mag = ((__pyx_v_a0r * __pyx_v_a0r) + (__pyx_v_a0i * __pyx_v_a0i));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":356
 * 
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <float *>b   # Reset a and b pointers
 *         ptr_a = <float *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":357
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers             # <<<<<<<<<<<<<<
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x
 */
    __pyx_v_ptr_b = ((float *)__pyx_v_b);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":358
 *     for k in range(len_x):
 *         ptr_b = <float *>b   # Reset a and b pointers
 *         ptr_a = <float *>a             # <<<<<<<<<<<<<<
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y
 */
    __pyx_v_ptr_a = ((float *)__pyx_v_a);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":359
 *         ptr_b = <float *>b   # Reset a and b pointers
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <float *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((float *)__pyx_v_ptr_x);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":360
 *         ptr_a = <float *>a
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <float *>Z
 */
    __pyx_v_yn = ((float *)__pyx_v_ptr_y);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":361
 *         xn = <float *>ptr_x
 *         yn = <float *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <float *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":362
 *         yn = <float *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <float *>Z             # <<<<<<<<<<<<<<
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_v_ptr_Z = ((float *)__pyx_v_Z);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":363
 *         if len_b > 1:
 *             ptr_Z = <float *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":364
 *             ptr_Z = <float *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":366
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":367
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":368
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2             # <<<<<<<<<<<<<<
 *             ptr_a += 2
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 2;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":369
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 *             ptr_a += 2             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 2;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":371
 *             ptr_a += 2
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":372
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":373
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":374
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":375
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":376
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":377
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":378
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":379
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":380
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2             # <<<<<<<<<<<<<<
 *                 ptr_a += 2
 *                 ptr_Z += 2
 */
        __pyx_v_ptr_b += 2;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":381
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 *                 ptr_a += 2             # <<<<<<<<<<<<<<
 *                 ptr_Z += 2
 * 
 */
        __pyx_v_ptr_a += 2;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":382
 *                 ptr_b += 2
 *                 ptr_a += 2
 *                 ptr_Z += 2             # <<<<<<<<<<<<<<
 * 
 *             # Calculate last delay
 */
        __pyx_v_ptr_Z += 2;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":385
 * 
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":386
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":387
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":388
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":389
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":390
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":391
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":392
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":394
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":395
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":396
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":397
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":399
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 *         ptr_y += stride_Y     # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 *     return 0
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":400
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 *     return 0
 * cdef int DOUBLE_filt(char *b, char *a, char *x, char *y, char *Z,
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":401
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int DOUBLE_filt(char *b, char *a, char *x, char *y, char *Z,
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":402
 *         ptr_x += stride_X
 *     return 0
 * cdef int DOUBLE_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static int (*__pyx_function_pointer_DOUBLE_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef int (*__pyx_fp_t_DOUBLE_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_DOUBLE_filt^ __pyx_delegate_val_DOUBLE_filt;
static  int DOUBLE_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
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
  int __pyx_r;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  double __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  double __pyx_t_7;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":405
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef double *ptr_Z, *ptr_b
 *     cdef double *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":409
 *     cdef double *ptr_a
 *     cdef double *xn, *yn
 *     cdef double a0 = (<double *> a)[0]             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp n
 *     cdef np.npy_uintp k
 */
  __pyx_v_a0 = (((double *)__pyx_v_a)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":413
 *     cdef np.npy_uintp k
 * 
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <double *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <double *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":414
 * 
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/             # <<<<<<<<<<<<<<
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x
 */
    __pyx_v_ptr_b = ((double *)__pyx_v_b);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":415
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <double *>a             # <<<<<<<<<<<<<<
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y
 */
    __pyx_v_ptr_a = ((double *)__pyx_v_a);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":416
 *         ptr_b = <double *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <double *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((double *)__pyx_v_ptr_x);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":417
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <double *>Z
 */
    __pyx_v_yn = ((double *)__pyx_v_ptr_y);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":418
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <double *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":419
 *         yn = <double *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <double *>Z             # <<<<<<<<<<<<<<
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 */
      __pyx_v_ptr_Z = ((double *)__pyx_v_Z);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":420
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":421
 *             ptr_Z = <double *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1             # <<<<<<<<<<<<<<
 *             ptr_a += 1
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":422
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 *             ptr_a += 1             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":424
 *             ptr_a += 1
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":425
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":426
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1             # <<<<<<<<<<<<<<
 *                 ptr_a += 1
 *                 ptr_Z += 1
 */
        __pyx_v_ptr_b += 1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":427
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 *                 ptr_a += 1             # <<<<<<<<<<<<<<
 *                 ptr_Z += 1
 *             # Calculate last delay
 */
        __pyx_v_ptr_a += 1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":428
 *                 ptr_b += 1
 *                 ptr_a += 1
 *                 ptr_Z += 1             # <<<<<<<<<<<<<<
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 */
        __pyx_v_ptr_Z += 1;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":430
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":432
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":434
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 * 
 *         ptr_y += stride_Y      # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 *     return 0
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":435
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":436
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":439
 * 
 * 
 * cdef int CDOUBLE_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static int (*__pyx_function_pointer_CDOUBLE_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef int (*__pyx_fp_t_CDOUBLE_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CDOUBLE_filt^ __pyx_delegate_val_CDOUBLE_filt;
static  int CDOUBLE_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
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
  int __pyx_r;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  double __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":442
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef double *ptr_Z, *ptr_b
 *     cdef double *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":446
 *     cdef double *ptr_a
 *     cdef double *xn, *yn
 *     cdef double a0r = (<double *>a)[0]             # <<<<<<<<<<<<<<
 *     cdef double a0i = (<double *>a)[1]
 *     cdef double a0_mag, tmpr, tmpi
 */
  __pyx_v_a0r = (((double *)__pyx_v_a)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":447
 *     cdef double *xn, *yn
 *     cdef double a0r = (<double *>a)[0]
 *     cdef double a0i = (<double *>a)[1]             # <<<<<<<<<<<<<<
 *     cdef double a0_mag, tmpr, tmpi
 *     cdef np.npy_intp n
 */
  __pyx_v_a0i = (((double *)__pyx_v_a)[1]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":452
 *     cdef np.npy_uintp k
 * 
 *     a0_mag = a0r * a0r + a0i * a0i             # <<<<<<<<<<<<<<
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers
 */
  __pyx_v_a0_mag = ((__pyx_v_a0r * __pyx_v_a0r) + (__pyx_v_a0i * __pyx_v_a0i));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":453
 * 
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <double *>b   # Reset a and b pointers
 *         ptr_a = <double *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":454
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers             # <<<<<<<<<<<<<<
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x
 */
    __pyx_v_ptr_b = ((double *)__pyx_v_b);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":455
 *     for k in range(len_x):
 *         ptr_b = <double *>b   # Reset a and b pointers
 *         ptr_a = <double *>a             # <<<<<<<<<<<<<<
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y
 */
    __pyx_v_ptr_a = ((double *)__pyx_v_a);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":456
 *         ptr_b = <double *>b   # Reset a and b pointers
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <double *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((double *)__pyx_v_ptr_x);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":457
 *         ptr_a = <double *>a
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <double *>Z
 */
    __pyx_v_yn = ((double *)__pyx_v_ptr_y);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":458
 *         xn = <double *>ptr_x
 *         yn = <double *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <double *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":459
 *         yn = <double *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <double *>Z             # <<<<<<<<<<<<<<
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_v_ptr_Z = ((double *)__pyx_v_Z);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":460
 *         if len_b > 1:
 *             ptr_Z = <double *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":461
 *             ptr_Z = <double *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":463
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":464
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":465
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2             # <<<<<<<<<<<<<<
 *             ptr_a += 2
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 2;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":466
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 *             ptr_a += 2             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 2;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":468
 *             ptr_a += 2
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":469
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":470
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":471
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":472
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":473
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":474
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":475
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":476
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":477
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2             # <<<<<<<<<<<<<<
 *                 ptr_a += 2
 *                 ptr_Z += 2
 */
        __pyx_v_ptr_b += 2;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":478
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 *                 ptr_a += 2             # <<<<<<<<<<<<<<
 *                 ptr_Z += 2
 * 
 */
        __pyx_v_ptr_a += 2;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":479
 *                 ptr_b += 2
 *                 ptr_a += 2
 *                 ptr_Z += 2             # <<<<<<<<<<<<<<
 * 
 *             # Calculate last delay
 */
        __pyx_v_ptr_Z += 2;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":482
 * 
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":483
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":484
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":485
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":486
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":487
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":488
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":489
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":491
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":492
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":493
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":494
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":496
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 *         ptr_y += stride_Y     # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 *     return 0
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":497
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 *     return 0
 * cdef int EXTENDED_filt(char *b, char *a, char *x, char *y, char *Z,
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":498
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int EXTENDED_filt(char *b, char *a, char *x, char *y, char *Z,
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":499
 *         ptr_x += stride_X
 *     return 0
 * cdef int EXTENDED_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static int (*__pyx_function_pointer_EXTENDED_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef int (*__pyx_fp_t_EXTENDED_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_EXTENDED_filt^ __pyx_delegate_val_EXTENDED_filt;
static  int EXTENDED_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
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
  int __pyx_r;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  __pyx_t_5numpy_npy_longdouble __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  __pyx_t_5numpy_npy_longdouble __pyx_t_7;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":502
 *                    np.npy_intp len_b, np.npy_uintp len_x,
 *                    np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef np.npy_longdouble *ptr_Z, *ptr_b
 *     cdef np.npy_longdouble *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":506
 *     cdef np.npy_longdouble *ptr_a
 *     cdef np.npy_longdouble *xn, *yn
 *     cdef np.npy_longdouble a0 = (<np.npy_longdouble *> a)[0]             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp n
 *     cdef np.npy_uintp k
 */
  __pyx_v_a0 = (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":510
 *     cdef np.npy_uintp k
 * 
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <np.npy_longdouble *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":511
 * 
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/             # <<<<<<<<<<<<<<
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x
 */
    __pyx_v_ptr_b = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_b);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":512
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <np.npy_longdouble *>a             # <<<<<<<<<<<<<<
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y
 */
    __pyx_v_ptr_a = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":513
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers *[inserted by cython to avoid comment closer]/
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ptr_x);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":514
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z
 */
    __pyx_v_yn = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ptr_y);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":515
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <np.npy_longdouble *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":516
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z             # <<<<<<<<<<<<<<
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 */
      __pyx_v_ptr_Z = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_Z);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":517
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":518
 *             ptr_Z = <np.npy_longdouble *>Z
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1             # <<<<<<<<<<<<<<
 *             ptr_a += 1
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":519
 *             yn[0] = ptr_Z[0] + ptr_b[0] / a0 * xn[0] # Calculate first delay (output)
 *             ptr_b += 1
 *             ptr_a += 1             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":521
 *             ptr_a += 1
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":522
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":523
 *             for n in range(len_b - 2):
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1             # <<<<<<<<<<<<<<
 *                 ptr_a += 1
 *                 ptr_Z += 1
 */
        __pyx_v_ptr_b += 1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":524
 *                 ptr_Z[0] = ptr_Z[1] + xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 *                 ptr_b += 1
 *                 ptr_a += 1             # <<<<<<<<<<<<<<
 *                 ptr_Z += 1
 *             # Calculate last delay
 */
        __pyx_v_ptr_a += 1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":525
 *                 ptr_b += 1
 *                 ptr_a += 1
 *                 ptr_Z += 1             # <<<<<<<<<<<<<<
 *             # Calculate last delay
 *             ptr_Z[0] = xn[0] * (ptr_b[0] / a0) - yn[0] * (ptr_a[0] / a0)
 */
        __pyx_v_ptr_Z += 1;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":527
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":529
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":531
 *             yn[0] = xn[0] * (ptr_b[0] / a0)
 * 
 *         ptr_y += stride_Y      # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 *     return 0
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":532
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":533
 *         ptr_y += stride_Y      # Move to next input/output point
 *         ptr_x += stride_X
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":536
 * 
 * 
 * cdef int CEXTENDED_filt(char *b, char *a, char *x, char *y, char *Z,             # <<<<<<<<<<<<<<
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 */

static int (*__pyx_function_pointer_CEXTENDED_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
typedef int (*__pyx_fp_t_CEXTENDED_filt)(char *, char *, char *, char *, char *, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_uintp, __pyx_t_5numpy_npy_intp, __pyx_t_5numpy_npy_intp);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CEXTENDED_filt^ __pyx_delegate_val_CEXTENDED_filt;
static  int CEXTENDED_filt(char *__pyx_v_b, char *__pyx_v_a, char *__pyx_v_x, char *__pyx_v_y, char *__pyx_v_Z, __pyx_t_5numpy_npy_intp __pyx_v_len_b, __pyx_t_5numpy_npy_uintp __pyx_v_len_x, __pyx_t_5numpy_npy_intp __pyx_v_stride_X, __pyx_t_5numpy_npy_intp __pyx_v_stride_Y) {
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
  int __pyx_r;
  __pyx_t_5numpy_npy_uintp __pyx_t_1;
  __pyx_t_5numpy_npy_uintp __pyx_t_2;
  int __pyx_t_3;
  __pyx_t_5numpy_npy_longdouble __pyx_t_4;
  long __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":539
 *                     np.npy_intp len_b, np.npy_uintp len_x,
 *                     np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef np.npy_longdouble *ptr_Z, *ptr_b
 *     cdef np.npy_longdouble *ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":543
 *     cdef np.npy_longdouble *ptr_a
 *     cdef np.npy_longdouble *xn, *yn
 *     cdef np.npy_longdouble a0r = (<np.npy_longdouble *>a)[0]             # <<<<<<<<<<<<<<
 *     cdef np.npy_longdouble a0i = (<np.npy_longdouble *>a)[1]
 *     cdef np.npy_longdouble a0_mag, tmpr, tmpi
 */
  __pyx_v_a0r = (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":544
 *     cdef np.npy_longdouble *xn, *yn
 *     cdef np.npy_longdouble a0r = (<np.npy_longdouble *>a)[0]
 *     cdef np.npy_longdouble a0i = (<np.npy_longdouble *>a)[1]             # <<<<<<<<<<<<<<
 *     cdef np.npy_longdouble a0_mag, tmpr, tmpi
 *     cdef np.npy_intp n
 */
  __pyx_v_a0i = (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a)[1]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":549
 *     cdef np.npy_uintp k
 * 
 *     a0_mag = a0r * a0r + a0i * a0i             # <<<<<<<<<<<<<<
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers
 */
  __pyx_v_a0_mag = ((__pyx_v_a0r * __pyx_v_a0r) + (__pyx_v_a0i * __pyx_v_a0i));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":550
 * 
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers
 *         ptr_a = <np.npy_longdouble *>a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":551
 *     a0_mag = a0r * a0r + a0i * a0i
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers             # <<<<<<<<<<<<<<
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x
 */
    __pyx_v_ptr_b = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_b);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":552
 *     for k in range(len_x):
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers
 *         ptr_a = <np.npy_longdouble *>a             # <<<<<<<<<<<<<<
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y
 */
    __pyx_v_ptr_a = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_a);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":553
 *         ptr_b = <np.npy_longdouble *>b   # Reset a and b pointers
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x             # <<<<<<<<<<<<<<
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ptr_x);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":554
 *         ptr_a = <np.npy_longdouble *>a
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z
 */
    __pyx_v_yn = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ptr_y);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":555
 *         xn = <np.npy_longdouble *>ptr_x
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = <np.npy_longdouble *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":556
 *         yn = <np.npy_longdouble *>ptr_y
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z             # <<<<<<<<<<<<<<
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_v_ptr_Z = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_Z);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":557
 *         if len_b > 1:
 *             ptr_Z = <np.npy_longdouble *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             # Calculate first delay (output)
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":558
 *             ptr_Z = <np.npy_longdouble *>Z
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             # Calculate first delay (output)
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":560
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":561
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":562
 *             yn[0] = ptr_Z[0] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2             # <<<<<<<<<<<<<<
 *             ptr_a += 2
 *             # Fill in middle delays
 */
      __pyx_v_ptr_b += 2;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":563
 *             yn[1] = ptr_Z[1] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             ptr_b += 2
 *             ptr_a += 2             # <<<<<<<<<<<<<<
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 */
      __pyx_v_ptr_a += 2;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":565
 *             ptr_a += 2
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 */
      __pyx_t_5 = (__pyx_v_len_b - 2);
      for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
        __pyx_v_n = __pyx_t_6;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":566
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":567
 *             for n in range(len_b - 2):
 *                 tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *                 tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":568
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":569
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":570
 *                 ptr_Z[0] = ptr_Z[2] + (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
        __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":571
 *                 ptr_Z[1] = ptr_Z[3] + (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *                 tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *                 tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
        __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":572
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":573
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

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":574
 *                 ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2             # <<<<<<<<<<<<<<
 *                 ptr_a += 2
 *                 ptr_Z += 2
 */
        __pyx_v_ptr_b += 2;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":575
 *                 ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *                 ptr_b += 2
 *                 ptr_a += 2             # <<<<<<<<<<<<<<
 *                 ptr_Z += 2
 * 
 */
        __pyx_v_ptr_a += 2;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":576
 *                 ptr_b += 2
 *                 ptr_a += 2
 *                 ptr_Z += 2             # <<<<<<<<<<<<<<
 * 
 *             # Calculate last delay
 */
        __pyx_v_ptr_Z += 2;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":579
 * 
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":580
 *             # Calculate last delay
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":581
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":582
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":583
 *             ptr_Z[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_a[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_a[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":584
 *             ptr_Z[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 *             tmpr = ptr_a[0] * a0r + ptr_a[1] * a0i
 *             tmpi = ptr_a[1] * a0r - ptr_a[0] * a0i             # <<<<<<<<<<<<<<
 *             ptr_Z[0] -= (tmpr * yn[0] - tmpi * yn[1]) / a0_mag
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_a[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_a[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":585
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":586
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":588
 *             ptr_Z[1] -= (tmpi * yn[0] + tmpr * yn[1]) / a0_mag
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i             # <<<<<<<<<<<<<<
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 */
      __pyx_v_tmpr = (((__pyx_v_ptr_b[0]) * __pyx_v_a0r) + ((__pyx_v_ptr_b[1]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":589
 *         else:
 *             tmpr = ptr_b[0] * a0r + ptr_b[1] * a0i
 *             tmpi = ptr_b[1] * a0r - ptr_b[0] * a0i             # <<<<<<<<<<<<<<
 *             yn[0] = (tmpr * xn[0] - tmpi * xn[1]) / a0_mag
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 */
      __pyx_v_tmpi = (((__pyx_v_ptr_b[1]) * __pyx_v_a0r) - ((__pyx_v_ptr_b[0]) * __pyx_v_a0i));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":590
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":591
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":593
 *             yn[1] = (tmpi * xn[0] + tmpr * xn[1]) / a0_mag
 * 
 *         ptr_y += stride_Y     # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 *     return 0
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":594
 * 
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X             # <<<<<<<<<<<<<<
 *     return 0
 * 
 */
    __pyx_v_ptr_x += __pyx_v_stride_X;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":595
 *         ptr_y += stride_Y     # Move to next input/output point
 *         ptr_x += stride_X
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * cdef OBJECT_filt(char *b, char *a, char *x, char *y, char *Z,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":597
 *     return 0
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":600
 *                  np.npy_intp len_b, np.npy_uintp len_x,
 *                  np.npy_intp stride_X, np.npy_intp stride_Y):
 *     cdef char *ptr_x = x, *ptr_y = y             # <<<<<<<<<<<<<<
 *     cdef PYOBJPTRPTR ptr_Z, ptr_b
 *     cdef PYOBJPTRPTR ptr_a
 */
  __pyx_v_ptr_x = __pyx_v_x;
  __pyx_v_ptr_y = __pyx_v_y;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":604
 *     cdef PYOBJPTRPTR ptr_a
 *     cdef PYOBJPTRPTR xn, yn
 *     cdef PYOBJPTRPTR a0 = <PYOBJPTRPTR> a             # <<<<<<<<<<<<<<
 *     cdef object tmp1, tmp2, tmp3
 *     cdef np.npy_intp n
 */
  __pyx_v_a0 = ((PYOBJPTRPTR)__pyx_v_a);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":610
 * 
 *     # My reference counting might not be right
 *     for k in range(len_x):             # <<<<<<<<<<<<<<
 *         ptr_b = <PYOBJPTRPTR> b        # Reset a and b pointers
 *         ptr_a = <PYOBJPTRPTR> a
 */
  __pyx_t_1 = __pyx_v_len_x;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_k = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":611
 *     # My reference counting might not be right
 *     for k in range(len_x):
 *         ptr_b = <PYOBJPTRPTR> b        # Reset a and b pointers             # <<<<<<<<<<<<<<
 *         ptr_a = <PYOBJPTRPTR> a
 *         xn = <PYOBJPTRPTR> ptr_x
 */
    __pyx_v_ptr_b = ((PYOBJPTRPTR)__pyx_v_b);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":612
 *     for k in range(len_x):
 *         ptr_b = <PYOBJPTRPTR> b        # Reset a and b pointers
 *         ptr_a = <PYOBJPTRPTR> a             # <<<<<<<<<<<<<<
 *         xn = <PYOBJPTRPTR> ptr_x
 *         yn = <PYOBJPTRPTR> ptr_y
 */
    __pyx_v_ptr_a = ((PYOBJPTRPTR)__pyx_v_a);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":613
 *         ptr_b = <PYOBJPTRPTR> b        # Reset a and b pointers
 *         ptr_a = <PYOBJPTRPTR> a
 *         xn = <PYOBJPTRPTR> ptr_x             # <<<<<<<<<<<<<<
 *         yn = <PYOBJPTRPTR> ptr_y
 *         if len_b > 1:
 */
    __pyx_v_xn = ((PYOBJPTRPTR)__pyx_v_ptr_x);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":614
 *         ptr_a = <PYOBJPTRPTR> a
 *         xn = <PYOBJPTRPTR> ptr_x
 *         yn = <PYOBJPTRPTR> ptr_y             # <<<<<<<<<<<<<<
 *         if len_b > 1:
 *             ptr_Z = (<PYOBJPTRPTR> Z)
 */
    __pyx_v_yn = ((PYOBJPTRPTR)__pyx_v_ptr_y);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":615
 *         xn = <PYOBJPTRPTR> ptr_x
 *         yn = <PYOBJPTRPTR> ptr_y
 *         if len_b > 1:             # <<<<<<<<<<<<<<
 *             ptr_Z = (<PYOBJPTRPTR> Z)
 *             # Calculate first delay (output)
 */
    __pyx_t_3 = (__pyx_v_len_b > 1);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":616
 *         yn = <PYOBJPTRPTR> ptr_y
 *         if len_b > 1:
 *             ptr_Z = (<PYOBJPTRPTR> Z)             # <<<<<<<<<<<<<<
 *             # Calculate first delay (output)
 *             tmp1 = READOBJECT(ptr_b) * READOBJECT(xn)
 */
      __pyx_v_ptr_Z = ((PYOBJPTRPTR)__pyx_v_Z);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":618
 *             ptr_Z = (<PYOBJPTRPTR> Z)
 *             # Calculate first delay (output)
 *             tmp1 = READOBJECT(ptr_b) * READOBJECT(xn)             # <<<<<<<<<<<<<<
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)
 */
      __pyx_t_4 = READOBJECT(__pyx_v_ptr_b); 
      __pyx_t_5 = READOBJECT(__pyx_v_xn); 
      __pyx_t_6 = __site_op_mul_618_37->Target(__site_op_mul_618_37, __pyx_t_4, __pyx_t_5);
      __pyx_t_4 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_v_tmp1 = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":619
 *             # Calculate first delay (output)
 *             tmp1 = READOBJECT(ptr_b) * READOBJECT(xn)
 *             tmp2 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)
 *             ASSIGNOBJECT(yn, tmp3)
 */
      __pyx_t_6 = READOBJECT(__pyx_v_a0); 
      __pyx_t_5 = __site_op_div_619_24->Target(__site_op_div_619_24, __pyx_v_tmp1, __pyx_t_6);
      __pyx_t_6 = nullptr;
      __pyx_v_tmp2 = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":620
 *             tmp1 = READOBJECT(ptr_b) * READOBJECT(xn)
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)             # <<<<<<<<<<<<<<
 *             ASSIGNOBJECT(yn, tmp3)
 *             ptr_b += 1
 */
      __pyx_t_5 = READOBJECT(__pyx_v_ptr_Z); 
      __pyx_t_6 = __site_op_add_620_24->Target(__site_op_add_620_24, __pyx_v_tmp2, __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_v_tmp3 = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":621
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)
 *             ASSIGNOBJECT(yn, tmp3)             # <<<<<<<<<<<<<<
 *             ptr_b += 1
 *             ptr_a += 1
 */
      ASSIGNOBJECT(__pyx_v_yn, __pyx_v_tmp3);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":622
 *             tmp3 = tmp2 + READOBJECT(ptr_Z)
 *             ASSIGNOBJECT(yn, tmp3)
 *             ptr_b += 1             # <<<<<<<<<<<<<<
 *             ptr_a += 1
 * 
 */
      __pyx_v_ptr_b += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":623
 *             ASSIGNOBJECT(yn, tmp3)
 *             ptr_b += 1
 *             ptr_a += 1             # <<<<<<<<<<<<<<
 * 
 *             # Fill in middle delays
 */
      __pyx_v_ptr_a += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":626
 * 
 *             # Fill in middle delays
 *             for n in range(len_b - 2):             # <<<<<<<<<<<<<<
 *                 tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *                 tmp2 = tmp1 / READOBJECT(a0)
 */
      __pyx_t_7 = (__pyx_v_len_b - 2);
      for (__pyx_t_8 = 0; __pyx_t_8 < __pyx_t_7; __pyx_t_8+=1) {
        __pyx_v_n = __pyx_t_8;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":627
 *             # Fill in middle delays
 *             for n in range(len_b - 2):
 *                 tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)             # <<<<<<<<<<<<<<
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)
 */
        __pyx_t_6 = READOBJECT(__pyx_v_xn); 
        __pyx_t_5 = READOBJECT(__pyx_v_ptr_b); 
        __pyx_t_4 = __site_op_mul_627_38->Target(__site_op_mul_627_38, __pyx_t_6, __pyx_t_5);
        __pyx_t_6 = nullptr;
        __pyx_t_5 = nullptr;
        __pyx_v_tmp1 = __pyx_t_4;
        __pyx_t_4 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":628
 *             for n in range(len_b - 2):
 *                 tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *                 tmp2 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 */
        __pyx_t_4 = READOBJECT(__pyx_v_a0); 
        __pyx_t_5 = __site_op_div_628_28->Target(__site_op_div_628_28, __pyx_v_tmp1, __pyx_t_4);
        __pyx_t_4 = nullptr;
        __pyx_v_tmp2 = __pyx_t_5;
        __pyx_t_5 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":629
 *                 tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)             # <<<<<<<<<<<<<<
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *                 tmp2 = tmp1 / READOBJECT(a0)
 */
        __pyx_t_5 = READOBJECT((__pyx_v_ptr_Z + 1)); 
        __pyx_t_4 = __site_op_div_629_28->Target(__site_op_div_629_28, __pyx_v_tmp2, __pyx_t_5);
        __pyx_t_5 = nullptr;
        __pyx_v_tmp3 = __pyx_t_4;
        __pyx_t_4 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":630
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)             # <<<<<<<<<<<<<<
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 */
        __pyx_t_4 = READOBJECT(__pyx_v_yn); 
        __pyx_t_5 = READOBJECT(__pyx_v_ptr_a); 
        __pyx_t_6 = __site_op_mul_630_38->Target(__site_op_mul_630_38, __pyx_t_4, __pyx_t_5);
        __pyx_t_4 = nullptr;
        __pyx_t_5 = nullptr;
        __pyx_v_tmp1 = __pyx_t_6;
        __pyx_t_6 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":631
 *                 tmp3 = tmp2 / READOBJECT(ptr_Z + 1)
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *                 tmp2 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *                 ptr_b += 1
 */
        __pyx_t_6 = READOBJECT(__pyx_v_a0); 
        __pyx_t_5 = __site_op_div_631_28->Target(__site_op_div_631_28, __pyx_v_tmp1, __pyx_t_6);
        __pyx_t_6 = nullptr;
        __pyx_v_tmp2 = __pyx_t_5;
        __pyx_t_5 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":632
 *                 tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)             # <<<<<<<<<<<<<<
 *                 ptr_b += 1
 *                 ptr_a += 1
 */
        __pyx_t_5 = __site_op_sub_632_41->Target(__site_op_sub_632_41, __pyx_v_tmp3, __pyx_v_tmp2);
        ASSIGNOBJECT(__pyx_v_ptr_Z, __pyx_t_5);
        __pyx_t_5 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":633
 *                 tmp2 = tmp1 / READOBJECT(a0)
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *                 ptr_b += 1             # <<<<<<<<<<<<<<
 *                 ptr_a += 1
 *                 ptr_Z += 1
 */
        __pyx_v_ptr_b += 1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":634
 *                 ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *                 ptr_b += 1
 *                 ptr_a += 1             # <<<<<<<<<<<<<<
 *                 ptr_Z += 1
 * 
 */
        __pyx_v_ptr_a += 1;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":635
 *                 ptr_b += 1
 *                 ptr_a += 1
 *                 ptr_Z += 1             # <<<<<<<<<<<<<<
 * 
 *             # Calculate last delay
 */
        __pyx_v_ptr_Z += 1;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":638
 * 
 *             # Calculate last delay
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)             # <<<<<<<<<<<<<<
 *             tmp3 = tmp1 / READOBJECT(a0)
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 */
      __pyx_t_5 = READOBJECT(__pyx_v_xn); 
      __pyx_t_6 = READOBJECT(__pyx_v_ptr_b); 
      __pyx_t_4 = __site_op_mul_638_34->Target(__site_op_mul_638_34, __pyx_t_5, __pyx_t_6);
      __pyx_t_5 = nullptr;
      __pyx_t_6 = nullptr;
      __pyx_v_tmp1 = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":639
 *             # Calculate last delay
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *             tmp3 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *             tmp2 = tmp1 / READOBJECT(a0)
 */
      __pyx_t_4 = READOBJECT(__pyx_v_a0); 
      __pyx_t_6 = __site_op_div_639_24->Target(__site_op_div_639_24, __pyx_v_tmp1, __pyx_t_4);
      __pyx_t_4 = nullptr;
      __pyx_v_tmp3 = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":640
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *             tmp3 = tmp1 / READOBJECT(a0)
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)             # <<<<<<<<<<<<<<
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 */
      __pyx_t_6 = READOBJECT(__pyx_v_yn); 
      __pyx_t_4 = READOBJECT(__pyx_v_ptr_a); 
      __pyx_t_5 = __site_op_mul_640_34->Target(__site_op_mul_640_34, __pyx_t_6, __pyx_t_4);
      __pyx_t_6 = nullptr;
      __pyx_t_4 = nullptr;
      __pyx_v_tmp1 = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":641
 *             tmp3 = tmp1 / READOBJECT(a0)
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *             tmp2 = tmp1 / READOBJECT(a0)             # <<<<<<<<<<<<<<
 *             ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *         else:
 */
      __pyx_t_5 = READOBJECT(__pyx_v_a0); 
      __pyx_t_4 = __site_op_div_641_24->Target(__site_op_div_641_24, __pyx_v_tmp1, __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_v_tmp2 = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":642
 *             tmp1 = READOBJECT(yn) * READOBJECT(ptr_a)
 *             tmp2 = tmp1 / READOBJECT(a0)
 *             ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)             # <<<<<<<<<<<<<<
 *         else:
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 */
      __pyx_t_4 = __site_op_sub_642_37->Target(__site_op_sub_642_37, __pyx_v_tmp3, __pyx_v_tmp2);
      ASSIGNOBJECT(__pyx_v_ptr_Z, __pyx_t_4);
      __pyx_t_4 = nullptr;
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":644
 *             ASSIGNOBJECT(ptr_Z, tmp3 - tmp2)
 *         else:
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)             # <<<<<<<<<<<<<<
 *             ASSIGNOBJECT(yn, tmp1 / READOBJECT(a0))
 * 
 */
      __pyx_t_4 = READOBJECT(__pyx_v_xn); 
      __pyx_t_5 = READOBJECT(__pyx_v_ptr_b); 
      __pyx_t_6 = __site_op_mul_644_34->Target(__site_op_mul_644_34, __pyx_t_4, __pyx_t_5);
      __pyx_t_4 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_v_tmp1 = __pyx_t_6;
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":645
 *         else:
 *             tmp1 = READOBJECT(xn) * READOBJECT(ptr_b)
 *             ASSIGNOBJECT(yn, tmp1 / READOBJECT(a0))             # <<<<<<<<<<<<<<
 * 
 *         ptr_y += stride_Y      # Move to next input/output point
 */
      __pyx_t_6 = READOBJECT(__pyx_v_a0); 
      __pyx_t_5 = __site_op_div_645_34->Target(__site_op_div_645_34, __pyx_v_tmp1, __pyx_t_6);
      __pyx_t_6 = nullptr;
      ASSIGNOBJECT(__pyx_v_yn, __pyx_t_5);
      __pyx_t_5 = nullptr;
    }
    __pyx_L5:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":647
 *             ASSIGNOBJECT(yn, tmp1 / READOBJECT(a0))
 * 
 *         ptr_y += stride_Y      # Move to next input/output point             # <<<<<<<<<<<<<<
 *         ptr_x += stride_X
 * 
 */
    __pyx_v_ptr_y += __pyx_v_stride_Y;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":648
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":656
 *     CORR_MODE_FULL  = 2
 * 
 * def _correlateND(np.ndarray ax, np.ndarray ay, np.ndarray aout, int mode):             # <<<<<<<<<<<<<<
 *     cdef np.NpyArrayIterObject *itx, *ity, *itz
 *     cdef int st
 */

static System::Object^ _correlateND(System::Object^ ax, System::Object^ ay, System::Object^ aout, System::Object^ mode) {
  NumpyDotNet::ndarray^ __pyx_v_ax = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_ay = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_aout = nullptr;
  int __pyx_v_mode;
  NpyArrayIterObject *__pyx_v_itx;
  NpyArrayIterObject *__pyx_v_ity;
  NpyArrayIterObject *__pyx_v_itz;
  int __pyx_v_st;
  NumpyDotNet::dtype^ __pyx_v_type;
  int __pyx_v_typenum;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_ax = ((NumpyDotNet::ndarray^)ax);
  __pyx_v_ay = ((NumpyDotNet::ndarray^)ay);
  __pyx_v_aout = ((NumpyDotNet::ndarray^)aout);
  __pyx_v_mode = __site_cvt_cvt_int_656_0->Target(__site_cvt_cvt_int_656_0, mode);
  __pyx_v_type = nullptr;
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ax) == nullptr)) {
    throw PythonOps::TypeError("Argument 'ax' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ay) == nullptr)) {
    throw PythonOps::TypeError("Argument 'ay' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_aout) == nullptr)) {
    throw PythonOps::TypeError("Argument 'aout' has incorrect type");
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":661
 *     cdef np.dtype type
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(ax)))             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(ay, type)
 *     type = np.NpyArray_FindArrayType_2args(aout, type)
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(PyArray_TYPE(__pyx_v_ax)))); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":662
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(ax)))
 *     type = np.NpyArray_FindArrayType_2args(ay, type)             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(aout, type)
 * 
 */
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_ay), __pyx_v_type)); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":663
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(ax)))
 *     type = np.NpyArray_FindArrayType_2args(ay, type)
 *     type = np.NpyArray_FindArrayType_2args(aout, type)             # <<<<<<<<<<<<<<
 * 
 *     ax = np.PyArray_FromAny(ax, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 */
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_aout), __pyx_v_type)); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":665
 *     type = np.NpyArray_FindArrayType_2args(aout, type)
 * 
 *     ax = np.PyArray_FromAny(ax, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);             # <<<<<<<<<<<<<<
 *     ay = np.PyArray_FromAny(ay, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 *     aout = np.PyArray_FromAny(aout, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 */
  __pyx_t_1 = (System::Object^)(long long)((NPY_BEHAVED | NPY_ENSUREARRAY));
  __pyx_t_2 = PyArray_FromAny(((System::Object^)__pyx_v_ax), ((System::Object^)__pyx_v_type), __pyx_int_0, __pyx_int_0, __pyx_t_1, nullptr); 
  __pyx_t_1 = nullptr;
  if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ax = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":666
 * 
 *     ax = np.PyArray_FromAny(ax, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 *     ay = np.PyArray_FromAny(ay, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);             # <<<<<<<<<<<<<<
 *     aout = np.PyArray_FromAny(aout, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 * 
 */
  __pyx_t_2 = (System::Object^)(long long)((NPY_BEHAVED | NPY_ENSUREARRAY));
  __pyx_t_1 = PyArray_FromAny(((System::Object^)__pyx_v_ay), ((System::Object^)__pyx_v_type), __pyx_int_0, __pyx_int_0, __pyx_t_2, nullptr); 
  __pyx_t_2 = nullptr;
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ay = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":667
 *     ax = np.PyArray_FromAny(ax, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 *     ay = np.PyArray_FromAny(ay, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 *     aout = np.PyArray_FromAny(aout, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);             # <<<<<<<<<<<<<<
 * 
 *     if np.PyArray_NDIM(ax) != np.PyArray_NDIM(ay):
 */
  __pyx_t_1 = (System::Object^)(long long)((NPY_BEHAVED | NPY_ENSUREARRAY));
  __pyx_t_2 = PyArray_FromAny(((System::Object^)__pyx_v_aout), ((System::Object^)__pyx_v_type), __pyx_int_0, __pyx_int_0, __pyx_t_1, nullptr); 
  __pyx_t_1 = nullptr;
  if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_aout = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":669
 *     aout = np.PyArray_FromAny(aout, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 * 
 *     if np.PyArray_NDIM(ax) != np.PyArray_NDIM(ay):             # <<<<<<<<<<<<<<
 *         raise ValueError("Arrays must have the same number of dimensions.")
 * 
 */
  __pyx_t_2 = PyArray_NDIM(__pyx_v_ax); 
  __pyx_t_1 = PyArray_NDIM(__pyx_v_ay); 
  __pyx_t_3 = __site_op_ne_669_27->Target(__site_op_ne_669_27, __pyx_t_2, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_istrue_669_27->Target(__site_istrue_669_27, __pyx_t_3);
  __pyx_t_3 = nullptr;
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":670
 * 
 *     if np.PyArray_NDIM(ax) != np.PyArray_NDIM(ay):
 *         raise ValueError("Arrays must have the same number of dimensions.")             # <<<<<<<<<<<<<<
 * 
 *     if np.PyArray_NDIM(ax) == 0:
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_670_24->Target(__site_call1_670_24, __pyx_context, __pyx_t_3, ((System::Object^)"Arrays must have the same number of dimensions."));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":672
 *         raise ValueError("Arrays must have the same number of dimensions.")
 * 
 *     if np.PyArray_NDIM(ax) == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("Cannot convolve zero-dimensional arrays.")
 * 
 */
  __pyx_t_1 = PyArray_NDIM(__pyx_v_ax); 
  __pyx_t_3 = __site_op_eq_672_27->Target(__site_op_eq_672_27, __pyx_t_1, __pyx_int_0);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_istrue_672_27->Target(__site_istrue_672_27, __pyx_t_3);
  __pyx_t_3 = nullptr;
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":673
 * 
 *     if np.PyArray_NDIM(ax) == 0:
 *         raise ValueError("Cannot convolve zero-dimensional arrays.")             # <<<<<<<<<<<<<<
 * 
 *     itx = np.PyArray_IterNew(ax)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_673_24->Target(__site_call1_673_24, __pyx_context, __pyx_t_3, ((System::Object^)"Cannot convolve zero-dimensional arrays."));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":675
 *         raise ValueError("Cannot convolve zero-dimensional arrays.")
 * 
 *     itx = np.PyArray_IterNew(ax)             # <<<<<<<<<<<<<<
 *     ity = np.PyArray_IterNew(ay)
 *     itz = np.PyArray_IterNew(aout)
 */
  __pyx_v_itx = PyArray_IterNew(__pyx_v_ax);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":676
 * 
 *     itx = np.PyArray_IterNew(ax)
 *     ity = np.PyArray_IterNew(ay)             # <<<<<<<<<<<<<<
 *     itz = np.PyArray_IterNew(aout)
 * 
 */
  __pyx_v_ity = PyArray_IterNew(__pyx_v_ay);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":677
 *     itx = np.PyArray_IterNew(ax)
 *     ity = np.PyArray_IterNew(ay)
 *     itz = np.PyArray_IterNew(aout)             # <<<<<<<<<<<<<<
 * 
 *     cdef int typenum = type.num
 */
  __pyx_v_itz = PyArray_IterNew(__pyx_v_aout);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":679
 *     itz = np.PyArray_IterNew(aout)
 * 
 *     cdef int typenum = type.num             # <<<<<<<<<<<<<<
 * 
 *     st = _correlate_nd_imp(itx, ity, itz, typenum, mode);
 */
  __pyx_t_1 = __site_get_num_679_27->Target(__site_get_num_679_27, ((System::Object^)__pyx_v_type), __pyx_context);
  __pyx_t_5 = __site_cvt_cvt_int_679_27->Target(__site_cvt_cvt_int_679_27, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_typenum = __pyx_t_5;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":681
 *     cdef int typenum = type.num
 * 
 *     st = _correlate_nd_imp(itx, ity, itz, typenum, mode);             # <<<<<<<<<<<<<<
 *     if st:
 *         return None
 */
  __pyx_t_1 = _correlate_nd_imp(__pyx_v_itx, __pyx_v_ity, __pyx_v_itz, __pyx_v_typenum, __pyx_v_mode); 
  __pyx_t_6 = __site_cvt_cvt_int_681_26->Target(__site_cvt_cvt_int_681_26, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_st = __pyx_t_6;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":682
 * 
 *     st = _correlate_nd_imp(itx, ity, itz, typenum, mode);
 *     if st:             # <<<<<<<<<<<<<<
 *         return None
 * 
 */
  if (__pyx_v_st) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":683
 *     st = _correlate_nd_imp(itx, ity, itz, typenum, mode);
 *     if st:
 *         return None             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(aout)
 */
    __pyx_r = nullptr;
    goto __pyx_L0;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":685
 *         return None
 * 
 *     return np.PyArray_Return(aout)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_aout)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":691
 * # Implementation of the type-specific correlation 'kernels'
 * #
 * cdef int _imp_correlate_nd_ubyte(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_ubyte(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_ubyte __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":697
 *     cdef np.npy_ubyte acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":698
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":699
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":700
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":701
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_ubyte *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_ubyte *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":703
 *             acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":704
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":706
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_ubyte*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":708
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_ubyte*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_ubyte *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":710
 *         (<np.npy_ubyte*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":711
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":713
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_byte(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":714
 * 
 *     return 0
 * cdef int _imp_correlate_nd_byte(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_byte(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_byte __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":720
 *     cdef np.npy_byte acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":721
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":722
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":723
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":724
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_byte *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_byte *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":726
 *             acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":727
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":729
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_byte*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":731
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_byte*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_byte *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":733
 *         (<np.npy_byte*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":734
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":736
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_ushort(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":737
 * 
 *     return 0
 * cdef int _imp_correlate_nd_ushort(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_ushort(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_ushort __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":743
 *     cdef np.npy_ushort acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":744
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":745
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":746
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":747
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_ushort *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_ushort *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":749
 *             acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":750
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":752
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_ushort*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":754
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_ushort*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_ushort *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":756
 *         (<np.npy_ushort*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":757
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":759
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_short(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":760
 * 
 *     return 0
 * cdef int _imp_correlate_nd_short(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_short(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  short __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":766
 *     cdef short acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":767
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":768
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":769
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":770
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((short *)__pyx_v_curneighx->dataptr)[0]) * (((short *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":772
 *             acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":773
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":775
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<short*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":777
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<short*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((short *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":779
 *         (<short*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":780
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":782
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_uint(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":783
 * 
 *     return 0
 * cdef int _imp_correlate_nd_uint(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_uint(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_uint __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":789
 *     cdef np.npy_uint acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":790
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":791
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":792
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":793
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_uint *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_uint *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":795
 *             acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":796
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":798
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_uint*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":800
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_uint*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_uint *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":802
 *         (<np.npy_uint*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":803
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":805
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_int(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":806
 * 
 *     return 0
 * cdef int _imp_correlate_nd_int(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_int(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  int __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":812
 *     cdef int acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":813
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":814
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":815
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":816
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((int *)__pyx_v_curneighx->dataptr)[0]) * (((int *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":818
 *             acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":819
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":821
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<int*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":823
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<int*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((int *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":825
 *         (<int*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":826
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":828
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_ulong(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":829
 * 
 *     return 0
 * cdef int _imp_correlate_nd_ulong(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_ulong(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_ulong __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":835
 *     cdef np.npy_ulong acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":836
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":837
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":838
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":839
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_ulong *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_ulong *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":841
 *             acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":842
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":844
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_ulong*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":846
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_ulong*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_ulong *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":848
 *         (<np.npy_ulong*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":849
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":851
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_long(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":852
 * 
 *     return 0
 * cdef int _imp_correlate_nd_long(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_long(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  long __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":858
 *     cdef long acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":859
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":860
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":861
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":862
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((long *)__pyx_v_curneighx->dataptr)[0]) * (((long *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":864
 *             acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":865
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":867
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<long*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":869
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<long*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((long *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":871
 *         (<long*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":872
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":874
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_ulonglong(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":875
 * 
 *     return 0
 * cdef int _imp_correlate_nd_ulonglong(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_ulonglong(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_ulonglong __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":881
 *     cdef np.npy_ulonglong acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":882
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":883
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":884
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":885
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_ulonglong *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_ulonglong *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":887
 *             acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":888
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":890
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_ulonglong*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":892
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_ulonglong*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_ulonglong *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":894
 *         (<np.npy_ulonglong*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":895
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":897
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_longlong(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":898
 * 
 *     return 0
 * cdef int _imp_correlate_nd_longlong(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_longlong(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_longlong __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":904
 *     cdef np.npy_longlong acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":905
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":906
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":907
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":908
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_longlong *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_longlong *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":910
 *             acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":911
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":913
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_longlong*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":915
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_longlong*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_longlong *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":917
 *         (<np.npy_longlong*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":918
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":920
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_float(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":921
 * 
 *     return 0
 * cdef int _imp_correlate_nd_float(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_float(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  float __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":927
 *     cdef float acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":928
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":929
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":930
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":931
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((float *)__pyx_v_curneighx->dataptr)[0]) * (((float *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":933
 *             acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":934
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":936
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<float*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":938
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<float*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((float *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":940
 *         (<float*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":941
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":943
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_double(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":944
 * 
 *     return 0
 * cdef int _imp_correlate_nd_double(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_double(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  double __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":950
 *     cdef double acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":951
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":952
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":953
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":954
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((double *)__pyx_v_curneighx->dataptr)[0]) * (((double *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":956
 *             acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":957
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":959
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<double*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":961
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<double*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((double *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":963
 *         (<double*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":964
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":966
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_longdouble(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":967
 * 
 *     return 0
 * cdef int _imp_correlate_nd_longdouble(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_longdouble(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_longdouble __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":973
 *     cdef np.npy_longdouble acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":974
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":975
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":976
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":977
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_longdouble *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ity->dataptr)[0]));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":979
 *             acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":980
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":982
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":984
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":986
 *         (<np.npy_longdouble*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":987
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":989
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * cdef int _imp_correlate_nd_cfloat(np.NpyArrayNeighborhoodIterObject *curx,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":991
 *     return 0
 * 
 * cdef int _imp_correlate_nd_cfloat(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_cfloat(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  int __pyx_v_i;
  int __pyx_v_j;
  float __pyx_v_racc;
  float __pyx_v_iacc;
  float *__pyx_v_ptr1;
  float *__pyx_v_ptr2;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  int __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  int __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":998
 *     cdef float *ptr1, *ptr2
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         racc = 0
 *         iacc = 0
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":999
 * 
 *     for i in range(curx.size):
 *         racc = 0             # <<<<<<<<<<<<<<
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
    __pyx_v_racc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1000
 *     for i in range(curx.size):
 *         racc = 0
 *         iacc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_iacc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1001
 *         racc = 0
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             ptr1 = <float*>curneighx.dataptr
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1002
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             ptr1 = <float*>curneighx.dataptr
 *             ptr2 = <float*>ity.dataptr
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1003
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             ptr1 = <float*>curneighx.dataptr             # <<<<<<<<<<<<<<
 *             ptr2 = <float*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 */
      __pyx_v_ptr1 = ((float *)__pyx_v_curneighx->dataptr);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1004
 *         for j in range(curneighx.size):
 *             ptr1 = <float*>curneighx.dataptr
 *             ptr2 = <float*>ity.dataptr             # <<<<<<<<<<<<<<
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 */
      __pyx_v_ptr2 = ((float *)__pyx_v_ity->dataptr);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1005
 *             ptr1 = <float*>curneighx.dataptr
 *             ptr2 = <float*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]             # <<<<<<<<<<<<<<
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 */
      __pyx_v_racc += (((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[0])) + ((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[1])));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1006
 *             ptr2 = <float*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_iacc += (((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[0])) - ((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[1])));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1008
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1009
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1011
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<float*>itz.dataptr)[0] = racc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1013
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<float*>itz.dataptr)[0] = racc             # <<<<<<<<<<<<<<
 *         (<float*>itz.dataptr)[1] = iacc
 * 
 */
    (((float *)__pyx_v_itz->dataptr)[0]) = __pyx_v_racc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1014
 * 
 *         (<float*>itz.dataptr)[0] = racc
 *         (<float*>itz.dataptr)[1] = iacc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((float *)__pyx_v_itz->dataptr)[1]) = __pyx_v_iacc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1016
 *         (<float*>itz.dataptr)[1] = iacc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1017
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1019
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_cdouble(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1020
 * 
 *     return 0
 * cdef int _imp_correlate_nd_cdouble(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_cdouble(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  int __pyx_v_i;
  int __pyx_v_j;
  double __pyx_v_racc;
  double __pyx_v_iacc;
  double *__pyx_v_ptr1;
  double *__pyx_v_ptr2;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  int __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  int __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1027
 *     cdef double *ptr1, *ptr2
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         racc = 0
 *         iacc = 0
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1028
 * 
 *     for i in range(curx.size):
 *         racc = 0             # <<<<<<<<<<<<<<
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
    __pyx_v_racc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1029
 *     for i in range(curx.size):
 *         racc = 0
 *         iacc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_iacc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1030
 *         racc = 0
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             ptr1 = <double*>curneighx.dataptr
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1031
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             ptr1 = <double*>curneighx.dataptr
 *             ptr2 = <double*>ity.dataptr
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1032
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             ptr1 = <double*>curneighx.dataptr             # <<<<<<<<<<<<<<
 *             ptr2 = <double*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 */
      __pyx_v_ptr1 = ((double *)__pyx_v_curneighx->dataptr);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1033
 *         for j in range(curneighx.size):
 *             ptr1 = <double*>curneighx.dataptr
 *             ptr2 = <double*>ity.dataptr             # <<<<<<<<<<<<<<
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 */
      __pyx_v_ptr2 = ((double *)__pyx_v_ity->dataptr);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1034
 *             ptr1 = <double*>curneighx.dataptr
 *             ptr2 = <double*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]             # <<<<<<<<<<<<<<
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 */
      __pyx_v_racc += (((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[0])) + ((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[1])));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1035
 *             ptr2 = <double*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_iacc += (((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[0])) - ((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[1])));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1037
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1038
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1040
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<double*>itz.dataptr)[0] = racc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1042
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<double*>itz.dataptr)[0] = racc             # <<<<<<<<<<<<<<
 *         (<double*>itz.dataptr)[1] = iacc
 * 
 */
    (((double *)__pyx_v_itz->dataptr)[0]) = __pyx_v_racc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1043
 * 
 *         (<double*>itz.dataptr)[0] = racc
 *         (<double*>itz.dataptr)[1] = iacc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((double *)__pyx_v_itz->dataptr)[1]) = __pyx_v_iacc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1045
 *         (<double*>itz.dataptr)[1] = iacc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1046
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1048
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_clongdouble(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1049
 * 
 *     return 0
 * cdef int _imp_correlate_nd_clongdouble(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_clongdouble(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  int __pyx_v_i;
  int __pyx_v_j;
  __pyx_t_5numpy_npy_longdouble __pyx_v_racc;
  __pyx_t_5numpy_npy_longdouble __pyx_v_iacc;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr1;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr2;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  int __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  int __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1056
 *     cdef np.npy_longdouble *ptr1, *ptr2
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         racc = 0
 *         iacc = 0
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1057
 * 
 *     for i in range(curx.size):
 *         racc = 0             # <<<<<<<<<<<<<<
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
    __pyx_v_racc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1058
 *     for i in range(curx.size):
 *         racc = 0
 *         iacc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_iacc = 0.0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1059
 *         racc = 0
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1060
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr
 *             ptr2 = <np.npy_longdouble*>ity.dataptr
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1061
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr             # <<<<<<<<<<<<<<
 *             ptr2 = <np.npy_longdouble*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 */
      __pyx_v_ptr1 = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_curneighx->dataptr);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1062
 *         for j in range(curneighx.size):
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr
 *             ptr2 = <np.npy_longdouble*>ity.dataptr             # <<<<<<<<<<<<<<
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 */
      __pyx_v_ptr2 = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ity->dataptr);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1063
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr
 *             ptr2 = <np.npy_longdouble*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]             # <<<<<<<<<<<<<<
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 */
      __pyx_v_racc += (((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[0])) + ((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[1])));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1064
 *             ptr2 = <np.npy_longdouble*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_iacc += (((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[0])) - ((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[1])));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1066
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1067
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1069
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = racc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1071
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = racc             # <<<<<<<<<<<<<<
 *         (<np.npy_longdouble*>itz.dataptr)[1] = iacc
 * 
 */
    (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_itz->dataptr)[0]) = __pyx_v_racc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1072
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = racc
 *         (<np.npy_longdouble*>itz.dataptr)[1] = iacc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_itz->dataptr)[1]) = __pyx_v_iacc;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1074
 *         (<np.npy_longdouble*>itz.dataptr)[1] = iacc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1075
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1077
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * cdef int _imp_correlate_nd_object(np.NpyArrayNeighborhoodIterObject *curx,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1079
 *     return 0
 * 
 * cdef int _imp_correlate_nd_object(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_object(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  int __pyx_v_i;
  int __pyx_v_j;
  char *__pyx_v_zero;
  __pyx_t_5numpy_PyArray_CopySwapFunc __pyx_v_copyswap;
  System::Object^ __pyx_v_tmp;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  int __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;
  int __pyx_t_5;
  System::Object^ __pyx_t_6 = nullptr;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;
  __pyx_v_tmp = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1084
 *     cdef int i, j
 *     cdef char *zero
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(curx.ao)             # <<<<<<<<<<<<<<
 * 
 *     zero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(curx.ao))
 */
  __pyx_v_copyswap = ARRAY_COPYSWAP_FUNC(__pyx_v_curx->ao);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1086
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(curx.ao)
 * 
 *     zero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(curx.ao))             # <<<<<<<<<<<<<<
 * 
 *     for i in range(curx.size):
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_curx->ao)); 
  __pyx_v_zero = ((char *)PyArray_Zero(__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1088
 *     zero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(curx.ao))
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)
 */
  __pyx_t_2 = __pyx_v_curx->size;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1089
 * 
 *     for i in range(curx.size):
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)
 * 
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1090
 *     for i in range(curx.size):
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)             # <<<<<<<<<<<<<<
 * 
 *         for j in range(curneighx.size):
 */
    __pyx_v_copyswap(((void *)__pyx_v_itz->dataptr), ((void *)__pyx_v_zero), 0, NULL);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1092
 *         copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)
 * 
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             # compute tmp = acc + x * y. Not all objects supporting the
 *             # number protocol support inplace operations, so we do it the most
 */
    __pyx_t_4 = __pyx_v_curneighx->size;
    for (__pyx_t_5 = 0; __pyx_t_5 < __pyx_t_4; __pyx_t_5+=1) {
      __pyx_v_j = __pyx_t_5;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1096
 *             # number protocol support inplace operations, so we do it the most
 *             # straightfoward way.
 *             tmp = NpyIter_READOBJECT(itz) + \             # <<<<<<<<<<<<<<
 *                   NpyIter_READOBJECT(curneighx) * NpyIter_READOBJECT(ity)
 * 
 */
      __pyx_t_1 = NpyIter_READOBJECT(__pyx_v_itz); 

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1097
 *             # straightfoward way.
 *             tmp = NpyIter_READOBJECT(itz) + \
 *                   NpyIter_READOBJECT(curneighx) * NpyIter_READOBJECT(ity)             # <<<<<<<<<<<<<<
 * 
 *             NpyIter_ASSIGNOBJECT(itz, tmp)
 */
      __pyx_t_6 = NpyIter_READOBJECT(__pyx_v_curneighx); 
      __pyx_t_7 = NpyIter_READOBJECT(__pyx_v_ity); 
      __pyx_t_8 = __site_op_mul_1097_48->Target(__site_op_mul_1097_48, __pyx_t_6, __pyx_t_7);
      __pyx_t_6 = nullptr;
      __pyx_t_7 = nullptr;
      __pyx_t_7 = __site_op_add_1096_42->Target(__site_op_add_1096_42, __pyx_t_1, __pyx_t_8);
      __pyx_t_1 = nullptr;
      __pyx_t_8 = nullptr;
      __pyx_v_tmp = __pyx_t_7;
      __pyx_t_7 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1099
 *                   NpyIter_READOBJECT(curneighx) * NpyIter_READOBJECT(ity)
 * 
 *             NpyIter_ASSIGNOBJECT(itz, tmp)             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      NpyIter_ASSIGNOBJECT(__pyx_v_itz, __pyx_v_tmp);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1101
 *             NpyIter_ASSIGNOBJECT(itz, tmp)
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1102
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1104
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1106
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1107
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     np.NpyDataMem_FREE(zero)
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1109
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     np.NpyDataMem_FREE(zero)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
  NpyDataMem_FREE(__pyx_v_zero);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1111
 *     np.NpyDataMem_FREE(zero)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * cdef _correlate_nd_imp(np.NpyArrayIterObject* itx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1113
 *     return 0
 * 
 * cdef _correlate_nd_imp(np.NpyArrayIterObject* itx, np.NpyArrayIterObject *ity,             # <<<<<<<<<<<<<<
 *         np.NpyArrayIterObject *itz, int typenum, int mode):
 *     cdef np.NpyArrayNeighborhoodIterObject *curneighx, *curx
 */

static  System::Object^ _correlate_nd_imp(NpyArrayIterObject *__pyx_v_itx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz, int __pyx_v_typenum, int __pyx_v_mode) {
  NpyArrayNeighborhoodIterObject *__pyx_v_curneighx;
  NpyArrayNeighborhoodIterObject *__pyx_v_curx;
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_nz;
  __pyx_t_5numpy_npy_intp __pyx_v_nx;
  __pyx_t_5numpy_npy_intp __pyx_v_bounds[(NPY_MAXDIMS * 2)];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  long __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;
  long __pyx_t_5;
  int __pyx_t_6;
  long __pyx_t_7;
  long __pyx_t_8;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1122
 *     # traverse x directly, such as each point of the output is the
 *     # innerproduct of y with the neighborhood around curx *[inserted by cython to avoid comment closer]/
 *     if mode == CORR_MODE_VALID:             # <<<<<<<<<<<<<<
 *         # Only walk through the input points such as the correponding
 *         # output will not depend on 0 padding
 */
  switch (__pyx_v_mode) {
    case __pyx_e_5scipy_6signal_11sigtoolsmod_CORR_MODE_VALID:

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1125
 *         # Only walk through the input points such as the correponding
 *         # output will not depend on 0 padding
 *         for i in range(np.PyArray_NDIM(np.NpyIter_ARRAY(itx))):             # <<<<<<<<<<<<<<
 *             bounds[2*i] = np.PyArray_DIMS(np.NpyIter_ARRAY(ity))[i] - 1
 *             bounds[2*i+1] = np.PyArray_DIMS(np.NpyIter_ARRAY(itx))[i] - 1
 */
    __pyx_t_1 = ((System::Object^)NpyIter_ARRAY(__pyx_v_itx)); 
    __pyx_t_2 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_t_1)); 
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_cvt_cvt_long_1125_38->Target(__site_cvt_cvt_long_1125_38, __pyx_t_2);
    __pyx_t_2 = nullptr;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_i = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1126
 *         # output will not depend on 0 padding
 *         for i in range(np.PyArray_NDIM(np.NpyIter_ARRAY(itx))):
 *             bounds[2*i] = np.PyArray_DIMS(np.NpyIter_ARRAY(ity))[i] - 1             # <<<<<<<<<<<<<<
 *             bounds[2*i+1] = np.PyArray_DIMS(np.NpyIter_ARRAY(itx))[i] - 1
 *     elif mode == CORR_MODE_SAME:
 */
      __pyx_t_2 = ((System::Object^)NpyIter_ARRAY(__pyx_v_ity)); 
      (__pyx_v_bounds[(2 * __pyx_v_i)]) = ((PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_2))[__pyx_v_i]) - 1);
      __pyx_t_2 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1127
 *         for i in range(np.PyArray_NDIM(np.NpyIter_ARRAY(itx))):
 *             bounds[2*i] = np.PyArray_DIMS(np.NpyIter_ARRAY(ity))[i] - 1
 *             bounds[2*i+1] = np.PyArray_DIMS(np.NpyIter_ARRAY(itx))[i] - 1             # <<<<<<<<<<<<<<
 *     elif mode == CORR_MODE_SAME:
 *         # Only walk through the input such as the output will be centered
 */
      __pyx_t_2 = ((System::Object^)NpyIter_ARRAY(__pyx_v_itx)); 
      (__pyx_v_bounds[((2 * __pyx_v_i) + 1)]) = ((PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_2))[__pyx_v_i]) - 1);
      __pyx_t_2 = nullptr;
    }
    break;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1128
 *             bounds[2*i] = np.PyArray_DIMS(np.NpyIter_ARRAY(ity))[i] - 1
 *             bounds[2*i+1] = np.PyArray_DIMS(np.NpyIter_ARRAY(itx))[i] - 1
 *     elif mode == CORR_MODE_SAME:             # <<<<<<<<<<<<<<
 *         # Only walk through the input such as the output will be centered
 *         # relatively to the output as computed in the full mode
 */
    case __pyx_e_5scipy_6signal_11sigtoolsmod_CORR_MODE_SAME:

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1131
 *         # Only walk through the input such as the output will be centered
 *         # relatively to the output as computed in the full mode
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):             # <<<<<<<<<<<<<<
 *             nz = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i]
 *             # Recover 'original' nx, before it was zero-padded *[inserted by cython to avoid comment closer]/
 */
    __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_itx->ao)); 
    __pyx_t_1 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;
    __pyx_t_5 = __site_cvt_cvt_long_1131_38->Target(__site_cvt_cvt_long_1131_38, __pyx_t_1);
    __pyx_t_1 = nullptr;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_5; __pyx_t_4+=1) {
      __pyx_v_i = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1132
 *         # relatively to the output as computed in the full mode
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 *             nz = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i]             # <<<<<<<<<<<<<<
 *             # Recover 'original' nx, before it was zero-padded *[inserted by cython to avoid comment closer]/
 *             nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 */
      __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_itx->ao)); 
      __pyx_v_nz = (PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_1))[__pyx_v_i]);
      __pyx_t_1 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1134
 *             nz = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i]
 *             # Recover 'original' nx, before it was zero-padded *[inserted by cython to avoid comment closer]/
 *             nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1             # <<<<<<<<<<<<<<
 *             if (nz - nx) % 2 == 0:
 *                 bounds[2*i] = (nz - nx) / 2
 */
      __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_ity->ao)); 
      __pyx_v_nx = ((__pyx_v_nz - (PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_1))[__pyx_v_i])) + 1);
      __pyx_t_1 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1135
 *             # Recover 'original' nx, before it was zero-padded *[inserted by cython to avoid comment closer]/
 *             nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 *             if (nz - nx) % 2 == 0:             # <<<<<<<<<<<<<<
 *                 bounds[2*i] = (nz - nx) / 2
 *             else:
 */
      __pyx_t_6 = (__Pyx_mod_long((__pyx_v_nz - __pyx_v_nx), 2) == 0);
      if (__pyx_t_6) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1136
 *             nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 *             if (nz - nx) % 2 == 0:
 *                 bounds[2*i] = (nz - nx) / 2             # <<<<<<<<<<<<<<
 *             else:
 *                 bounds[2*i] = (nz - nx - 1) / 2
 */
        (__pyx_v_bounds[(2 * __pyx_v_i)]) = __Pyx_div_long((__pyx_v_nz - __pyx_v_nx), 2);
        goto __pyx_L7;
      }
      /*else*/ {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1138
 *                 bounds[2*i] = (nz - nx) / 2
 *             else:
 *                 bounds[2*i] = (nz - nx - 1) / 2             # <<<<<<<<<<<<<<
 * 
 *             bounds[2*i+1] = bounds[2*i] + nx - 1
 */
        (__pyx_v_bounds[(2 * __pyx_v_i)]) = __Pyx_div_long(((__pyx_v_nz - __pyx_v_nx) - 1), 2);
      }
      __pyx_L7:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1140
 *                 bounds[2*i] = (nz - nx - 1) / 2
 * 
 *             bounds[2*i+1] = bounds[2*i] + nx - 1             # <<<<<<<<<<<<<<
 *     elif mode == CORR_MODE_FULL:
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 */
      (__pyx_v_bounds[((2 * __pyx_v_i) + 1)]) = (((__pyx_v_bounds[(2 * __pyx_v_i)]) + __pyx_v_nx) - 1);
    }
    break;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1141
 * 
 *             bounds[2*i+1] = bounds[2*i] + nx - 1
 *     elif mode == CORR_MODE_FULL:             # <<<<<<<<<<<<<<
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 *             bounds[2*i] = 0;
 */
    case __pyx_e_5scipy_6signal_11sigtoolsmod_CORR_MODE_FULL:

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1142
 *             bounds[2*i+1] = bounds[2*i] + nx - 1
 *     elif mode == CORR_MODE_FULL:
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):             # <<<<<<<<<<<<<<
 *             bounds[2*i] = 0;
 *             bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1
 */
    __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_itx->ao)); 
    __pyx_t_2 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_t_1)); 
    __pyx_t_1 = nullptr;
    __pyx_t_7 = __site_cvt_cvt_long_1142_38->Target(__site_cvt_cvt_long_1142_38, __pyx_t_2);
    __pyx_t_2 = nullptr;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_7; __pyx_t_4+=1) {
      __pyx_v_i = __pyx_t_4;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1143
 *     elif mode == CORR_MODE_FULL:
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 *             bounds[2*i] = 0;             # <<<<<<<<<<<<<<
 *             bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1
 *     else:
 */
      (__pyx_v_bounds[(2 * __pyx_v_i)]) = 0;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1144
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 *             bounds[2*i] = 0;
 *             bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1             # <<<<<<<<<<<<<<
 *     else:
 *         raise SystemError
 */
      __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_itx->ao)); 
      (__pyx_v_bounds[((2 * __pyx_v_i) + 1)]) = ((PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_2))[__pyx_v_i]) - 1);
      __pyx_t_2 = nullptr;
    }
    break;
    default:

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1146
 *             bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1
 *     else:
 *         raise SystemError             # <<<<<<<<<<<<<<
 * 
 *     curx = np.PyArray_NeighborhoodIterNew(itx, bounds,
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "SystemError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    break;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1149
 * 
 *     curx = np.PyArray_NeighborhoodIterNew(itx, bounds,
 *                                 np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)             # <<<<<<<<<<<<<<
 *     if (curx == NULL):
 *         raise SystemError("Could not create curx ?")
 */
  __pyx_v_curx = PyArray_NeighborhoodIterNew(__pyx_v_itx, __pyx_v_bounds, NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1150
 *     curx = np.PyArray_NeighborhoodIterNew(itx, bounds,
 *                                 np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)
 *     if (curx == NULL):             # <<<<<<<<<<<<<<
 *         raise SystemError("Could not create curx ?")
 * 
 */
  __pyx_t_6 = (__pyx_v_curx == NULL);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1151
 *                                 np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)
 *     if (curx == NULL):
 *         raise SystemError("Could not create curx ?")             # <<<<<<<<<<<<<<
 * 
 *     # Compute boundaries for the neighborhood iterator: the neighborhood for x
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "SystemError");
    __pyx_t_1 = __site_call1_1151_25->Target(__site_call1_1151_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create curx ?"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1155
 *     # Compute boundaries for the neighborhood iterator: the neighborhood for x
 *     #   should have the same dimensions as y
 *     for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(ity.ao))):             # <<<<<<<<<<<<<<
 *         bounds[2*i] = -np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 *         bounds[2*i+1] = 0
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_ity->ao)); 
  __pyx_t_2 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_t_1)); 
  __pyx_t_1 = nullptr;
  __pyx_t_8 = __site_cvt_cvt_long_1155_34->Target(__site_cvt_cvt_long_1155_34, __pyx_t_2);
  __pyx_t_2 = nullptr;
  for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_8; __pyx_t_4+=1) {
    __pyx_v_i = __pyx_t_4;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1156
 *     #   should have the same dimensions as y
 *     for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(ity.ao))):
 *         bounds[2*i] = -np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1             # <<<<<<<<<<<<<<
 *         bounds[2*i+1] = 0
 * 
 */
    __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_ity->ao)); 
    (__pyx_v_bounds[(2 * __pyx_v_i)]) = ((-(PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_2))[__pyx_v_i])) + 1);
    __pyx_t_2 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1157
 *     for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(ity.ao))):
 *         bounds[2*i] = -np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 *         bounds[2*i+1] = 0             # <<<<<<<<<<<<<<
 * 
 *     curneighx = np.PyArray_NeighborhoodIterNew(<np.NpyArrayIterObject *>curx,
 */
    (__pyx_v_bounds[((2 * __pyx_v_i) + 1)]) = 0;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1160
 * 
 *     curneighx = np.PyArray_NeighborhoodIterNew(<np.NpyArrayIterObject *>curx,
 *                         bounds, np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)             # <<<<<<<<<<<<<<
 * 
 *     if typenum == np.NPY_OBJECT:
 */
  __pyx_v_curneighx = PyArray_NeighborhoodIterNew(((NpyArrayIterObject *)__pyx_v_curx), __pyx_v_bounds, NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1162
 *                         bounds, np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)
 * 
 *     if typenum == np.NPY_OBJECT:             # <<<<<<<<<<<<<<
 *         # The object array case does not worth being optimized, since most of
 *     	# the cost is numerical operations, not iterators moving in this case ?
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_OBJECT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1165
 *         # The object array case does not worth being optimized, since most of
 *     	# the cost is numerical operations, not iterators moving in this case ?
 *         _imp_correlate_nd_object(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_UBYTE:
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_object(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1166
 *     	# the cost is numerical operations, not iterators moving in this case ?
 *         _imp_correlate_nd_object(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UBYTE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_BYTE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_UBYTE);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1167
 *         _imp_correlate_nd_object(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UBYTE:
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_BYTE:
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_ubyte(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1168
 *     elif typenum == np.NPY_UBYTE:
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_BYTE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_USHORT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_BYTE);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1169
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_BYTE:
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_USHORT:
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_byte(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1170
 *     elif typenum == np.NPY_BYTE:
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_USHORT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_SHORT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_USHORT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1171
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_USHORT:
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_SHORT:
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_ushort(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1172
 *     elif typenum == np.NPY_USHORT:
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_SHORT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UINT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_SHORT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1173
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_SHORT:
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_UINT:
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_short(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1174
 *     elif typenum == np.NPY_SHORT:
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UINT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_INT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_UINT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1175
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UINT:
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_INT:
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_uint(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1176
 *     elif typenum == np.NPY_UINT:
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_INT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONG:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_INT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1177
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_INT:
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_ULONG:
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_int(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1178
 *     elif typenum == np.NPY_INT:
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONG:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONG:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_ULONG);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1179
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONG:
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_LONG:
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_ulong(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1180
 *     elif typenum == np.NPY_ULONG:
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONG:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONGLONG:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_LONG);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1181
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONG:
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_ULONGLONG:
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_long(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1182
 *     elif typenum == np.NPY_LONG:
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONGLONG:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGLONG:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_ULONGLONG);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1183
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONGLONG:
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_LONGLONG:
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_ulonglong(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1184
 *     elif typenum == np.NPY_ULONGLONG:
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGLONG:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_FLOAT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_LONGLONG);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1185
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGLONG:
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_FLOAT:
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_longlong(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1186
 *     elif typenum == np.NPY_LONGLONG:
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_DOUBLE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_FLOAT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1187
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_FLOAT:
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_DOUBLE:
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_float(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1188
 *     elif typenum == np.NPY_FLOAT:
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGDOUBLE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_DOUBLE);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1189
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_DOUBLE:
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_double(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1190
 *     elif typenum == np.NPY_DOUBLE:
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGDOUBLE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CFLOAT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_LONGDOUBLE);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1191
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CFLOAT:
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_longdouble(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1192
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CFLOAT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CDOUBLE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_CFLOAT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1193
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CFLOAT:
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CDOUBLE:
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_cfloat(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1194
 *     elif typenum == np.NPY_CFLOAT:
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CDOUBLE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CLONGDOUBLE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_CDOUBLE);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1195
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CDOUBLE:
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CLONGDOUBLE:
 *         _imp_correlate_nd_clongdouble(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_cdouble(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1196
 *     elif typenum == np.NPY_CDOUBLE:
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CLONGDOUBLE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_clongdouble(curx, curneighx, ity, itz)
 * 
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_CLONGDOUBLE);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1197
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CLONGDOUBLE:
 *         _imp_correlate_nd_clongdouble(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    _imp_correlate_nd_clongdouble(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1200
 * 
 *     else:
 *         raise ValueError("Unsupported type")             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_1200_24->Target(__site_call1_1200_24, __pyx_context, __pyx_t_2, ((System::Object^)"Unsupported type"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
  }
  __pyx_L13:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1202
 *         raise ValueError("Unsupported type")
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * ##########################
 */
  __pyx_r = __pyx_int_0;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1207
 * #  N-D Order Filtering.  #
 * 
 * cdef fill_buffer(char *ip1, np.ndarray ap1, np.ndarray ap2,             # <<<<<<<<<<<<<<
 *                  char *sort_buffer, int nels2, int check, np.npy_intp *loop_ind,
 *                  np.npy_intp *temp_ind, np.npy_uintp *offset):
 */

static  System::Object^ fill_buffer(char *__pyx_v_ip1, NumpyDotNet::ndarray^ __pyx_v_ap1, NumpyDotNet::ndarray^ __pyx_v_ap2, char *__pyx_v_sort_buffer, int __pyx_v_nels2, int __pyx_v_check, __pyx_t_5numpy_npy_intp *__pyx_v_loop_ind, __pyx_t_5numpy_npy_intp *__pyx_v_temp_ind, __pyx_t_5numpy_npy_uintp *__pyx_v_offset) {
  int __pyx_v_i;
  int __pyx_v_j;
  int __pyx_v_k;
  int __pyx_v_incr;
  int __pyx_v_ndims;
  __pyx_t_5numpy_npy_intp *__pyx_v_dims2;
  __pyx_t_5numpy_npy_intp *__pyx_v_dims1;
  __pyx_t_5numpy_npy_intp __pyx_v_is1;
  __pyx_t_5numpy_npy_intp __pyx_v_is2;
  char *__pyx_v_ip2;
  int __pyx_v_elsize;
  char *__pyx_v_ptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  long __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  size_t __pyx_t_10;
  int __pyx_t_11;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1210
 *                  char *sort_buffer, int nels2, int check, np.npy_intp *loop_ind,
 *                  np.npy_intp *temp_ind, np.npy_uintp *offset):
 *     cdef int i, j, k, incr = 1             # <<<<<<<<<<<<<<
 *     cdef int ndims = np.PyArray_NDIM(ap1)
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
 */
  __pyx_v_incr = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1211
 *                  np.npy_intp *temp_ind, np.npy_uintp *offset):
 *     cdef int i, j, k, incr = 1
 *     cdef int ndims = np.PyArray_NDIM(ap1)             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
 */
  __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
  __pyx_t_2 = __site_cvt_cvt_int_1211_36->Target(__site_cvt_cvt_int_1211_36, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_ndims = __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1212
 *     cdef int i, j, k, incr = 1
 *     cdef int ndims = np.PyArray_NDIM(ap1)
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
 */
  __pyx_v_dims2 = PyArray_DIMS(__pyx_v_ap2);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1213
 *     cdef int ndims = np.PyArray_NDIM(ap1)
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
 */
  __pyx_v_dims1 = PyArray_DIMS(__pyx_v_ap1);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1214
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
 *     cdef char *ip2 = <char *>np.PyArray_DATA(ap2)
 */
  __pyx_v_is1 = (PyArray_STRIDES(__pyx_v_ap1)[(__pyx_v_ndims - 1)]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1215
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]             # <<<<<<<<<<<<<<
 *     cdef char *ip2 = <char *>np.PyArray_DATA(ap2)
 *     cdef int elsize = np.PyArray_DESCR(ap1).ElementSize
 */
  __pyx_v_is2 = (PyArray_STRIDES(__pyx_v_ap2)[(__pyx_v_ndims - 1)]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1216
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
 *     cdef char *ip2 = <char *>np.PyArray_DATA(ap2)             # <<<<<<<<<<<<<<
 *     cdef int elsize = np.PyArray_DESCR(ap1).ElementSize
 *     cdef char *ptr
 */
  __pyx_v_ip2 = ((char *)PyArray_DATA(__pyx_v_ap2));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1217
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
 *     cdef char *ip2 = <char *>np.PyArray_DATA(ap2)
 *     cdef int elsize = np.PyArray_DESCR(ap1).ElementSize             # <<<<<<<<<<<<<<
 *     cdef char *ptr
 * 
 */
  __pyx_t_1 = PyArray_DESCR(__pyx_v_ap1); 
  __pyx_t_3 = __site_get_ElementSize_1217_43->Target(__site_get_ElementSize_1217_43, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_cvt_cvt_int_1217_43->Target(__site_cvt_cvt_int_1217_43, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_v_elsize = __pyx_t_4;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1220
 *     cdef char *ptr
 * 
 *     ptr = <char *>np.PyArray_Zero(ap2)             # <<<<<<<<<<<<<<
 *     temp_ind[ndims-1] -= 1
 * 
 */
  __pyx_v_ptr = ((char *)PyArray_Zero(((System::Object^)__pyx_v_ap2)));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1221
 * 
 *     ptr = <char *>np.PyArray_Zero(ap2)
 *     temp_ind[ndims-1] -= 1             # <<<<<<<<<<<<<<
 * 
 *     for i in range(nels2 - 1, -1, -1):
 */
  (__pyx_v_temp_ind[(__pyx_v_ndims - 1)]) -= 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1223
 *     temp_ind[ndims-1] -= 1
 * 
 *     for i in range(nels2 - 1, -1, -1):             # <<<<<<<<<<<<<<
 *         # Adjust index array and move ptr1 to right place
 *         k = ndims - 1
 */
  for (__pyx_t_5 = (__pyx_v_nels2 - 1); __pyx_t_5 > -1; __pyx_t_5-=1) {
    __pyx_v_i = __pyx_t_5;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1225
 *     for i in range(nels2 - 1, -1, -1):
 *         # Adjust index array and move ptr1 to right place
 *         k = ndims - 1             # <<<<<<<<<<<<<<
 *         for j in range(incr-1):
 *             temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions
 */
    __pyx_v_k = (__pyx_v_ndims - 1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1226
 *         # Adjust index array and move ptr1 to right place
 *         k = ndims - 1
 *         for j in range(incr-1):             # <<<<<<<<<<<<<<
 *             temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions
 *             k -= 1
 */
    __pyx_t_6 = (__pyx_v_incr - 1);
    for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
      __pyx_v_j = __pyx_t_7;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1227
 *         k = ndims - 1
 *         for j in range(incr-1):
 *             temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions             # <<<<<<<<<<<<<<
 *             k -= 1
 * 
 */
      (__pyx_v_temp_ind[__pyx_v_k]) -= ((__pyx_v_dims2[__pyx_v_k]) - 1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1228
 *         for j in range(incr-1):
 *             temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions
 *             k -= 1             # <<<<<<<<<<<<<<
 * 
 *         ip1 += offset[k] * is1           # Precomputed offset array
 */
      __pyx_v_k -= 1;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1230
 *             k -= 1
 * 
 *         ip1 += offset[k] * is1           # Precomputed offset array             # <<<<<<<<<<<<<<
 *         temp_ind[k] += 1
 * 
 */
    __pyx_v_ip1 += ((__pyx_v_offset[__pyx_v_k]) * __pyx_v_is1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1231
 * 
 *         ip1 += offset[k] * is1           # Precomputed offset array
 *         temp_ind[k] += 1             # <<<<<<<<<<<<<<
 * 
 *         if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and
 */
    (__pyx_v_temp_ind[__pyx_v_k]) += 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1233
 *         temp_ind[k] += 1
 * 
 *         if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and             # <<<<<<<<<<<<<<
 *                 memcmp(ip2, ptr, np.PyArray_DESCR(ap2).ElementSize)):
 *             memcpy(sort_buffer, ip1, elsize)
 */
    if (__pyx_v_check) {
      __pyx_t_7 = index_out_of_bounds(__pyx_v_temp_ind, __pyx_v_dims1, __pyx_v_ndims);
      __pyx_t_8 = __pyx_t_7;
    } else {
      __pyx_t_8 = __pyx_v_check;
    }
    __pyx_t_9 = (!__pyx_t_8);
    if (__pyx_t_9) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1234
 * 
 *         if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and
 *                 memcmp(ip2, ptr, np.PyArray_DESCR(ap2).ElementSize)):             # <<<<<<<<<<<<<<
 *             memcpy(sort_buffer, ip1, elsize)
 *             sort_buffer += elsize
 */
      __pyx_t_3 = PyArray_DESCR(__pyx_v_ap2); 
      __pyx_t_1 = __site_get_ElementSize_1234_54->Target(__site_get_ElementSize_1234_54, __pyx_t_3, __pyx_context);
      __pyx_t_3 = nullptr;
      __pyx_t_10 = __site_cvt_cvt_size_t_1234_54->Target(__site_cvt_cvt_size_t_1234_54, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_1 = memcmp(__pyx_v_ip2, __pyx_v_ptr, __pyx_t_10);
      __pyx_t_8 = __site_istrue_1234_22->Target(__site_istrue_1234_22, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_11 = __pyx_t_8;
    } else {
      __pyx_t_11 = __pyx_t_9;
    }
    if (__pyx_t_11) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1235
 *         if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and
 *                 memcmp(ip2, ptr, np.PyArray_DESCR(ap2).ElementSize)):
 *             memcpy(sort_buffer, ip1, elsize)             # <<<<<<<<<<<<<<
 *             sort_buffer += elsize
 * 
 */
      memcpy(__pyx_v_sort_buffer, __pyx_v_ip1, __pyx_v_elsize);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1236
 *                 memcmp(ip2, ptr, np.PyArray_DESCR(ap2).ElementSize)):
 *             memcpy(sort_buffer, ip1, elsize)
 *             sort_buffer += elsize             # <<<<<<<<<<<<<<
 * 
 *         incr = increment(loop_ind, ndims, dims2)   # Returns number of N-D indices incremented.
 */
      __pyx_v_sort_buffer += __pyx_v_elsize;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1238
 *             sort_buffer += elsize
 * 
 *         incr = increment(loop_ind, ndims, dims2)   # Returns number of N-D indices incremented.             # <<<<<<<<<<<<<<
 *         ip2 += is2
 * 
 */
    __pyx_v_incr = increment(__pyx_v_loop_ind, __pyx_v_ndims, __pyx_v_dims2);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1239
 * 
 *         incr = increment(loop_ind, ndims, dims2)   # Returns number of N-D indices incremented.
 *         ip2 += is2             # <<<<<<<<<<<<<<
 * 
 *     np.NpyDataMem_FREE(ptr)
 */
    __pyx_v_ip2 += __pyx_v_is2;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1241
 *         ip2 += is2
 * 
 *     np.NpyDataMem_FREE(ptr)             # <<<<<<<<<<<<<<
 *     return
 * 
 */
  NpyDataMem_FREE(__pyx_v_ptr);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1242
 * 
 *     np.NpyDataMem_FREE(ptr)
 *     return             # <<<<<<<<<<<<<<
 * 
 * cdef int DOUBLE_compare(double *ip1, double *ip2):
 */
  __pyx_r = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1244
 *     return
 * 
 * cdef int DOUBLE_compare(double *ip1, double *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_DOUBLE_compare)(double *, double *);
typedef int (*__pyx_fp_t_DOUBLE_compare)(double *, double *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_DOUBLE_compare^ __pyx_delegate_val_DOUBLE_compare;
static  int DOUBLE_compare(double *__pyx_v_ip1, double *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1245
 * 
 * cdef int DOUBLE_compare(double *ip1, double *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int FLOAT_compare(float *ip1, float *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1247
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int FLOAT_compare(float *ip1, float *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_FLOAT_compare)(float *, float *);
typedef int (*__pyx_fp_t_FLOAT_compare)(float *, float *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_FLOAT_compare^ __pyx_delegate_val_FLOAT_compare;
static  int FLOAT_compare(float *__pyx_v_ip1, float *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1248
 * 
 * cdef int FLOAT_compare(float *ip1, float *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int LONGDOUBLE_compare(np.npy_longdouble *ip1, np.npy_longdouble *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1250
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int LONGDOUBLE_compare(np.npy_longdouble *ip1, np.npy_longdouble *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_LONGDOUBLE_compare)(__pyx_t_5numpy_npy_longdouble *, __pyx_t_5numpy_npy_longdouble *);
typedef int (*__pyx_fp_t_LONGDOUBLE_compare)(__pyx_t_5numpy_npy_longdouble *, __pyx_t_5numpy_npy_longdouble *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONGDOUBLE_compare^ __pyx_delegate_val_LONGDOUBLE_compare;
static  int LONGDOUBLE_compare(__pyx_t_5numpy_npy_longdouble *__pyx_v_ip1, __pyx_t_5numpy_npy_longdouble *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1251
 * 
 * cdef int LONGDOUBLE_compare(np.npy_longdouble *ip1, np.npy_longdouble *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int BYTE_compare(np.npy_byte *ip1, np.npy_byte *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1253
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int BYTE_compare(np.npy_byte *ip1, np.npy_byte *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_BYTE_compare)(__pyx_t_5numpy_npy_byte *, __pyx_t_5numpy_npy_byte *);
typedef int (*__pyx_fp_t_BYTE_compare)(__pyx_t_5numpy_npy_byte *, __pyx_t_5numpy_npy_byte *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_BYTE_compare^ __pyx_delegate_val_BYTE_compare;
static  int BYTE_compare(__pyx_t_5numpy_npy_byte *__pyx_v_ip1, __pyx_t_5numpy_npy_byte *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1254
 * 
 * cdef int BYTE_compare(np.npy_byte *ip1, np.npy_byte *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int SHORT_compare(short *ip1, short *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1256
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int SHORT_compare(short *ip1, short *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_SHORT_compare)(short *, short *);
typedef int (*__pyx_fp_t_SHORT_compare)(short *, short *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_SHORT_compare^ __pyx_delegate_val_SHORT_compare;
static  int SHORT_compare(short *__pyx_v_ip1, short *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1257
 * 
 * cdef int SHORT_compare(short *ip1, short *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int INT_compare(int *ip1, int *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1259
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int INT_compare(int *ip1, int *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_INT_compare)(int *, int *);
typedef int (*__pyx_fp_t_INT_compare)(int *, int *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_INT_compare^ __pyx_delegate_val_INT_compare;
static  int INT_compare(int *__pyx_v_ip1, int *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1260
 * 
 * cdef int INT_compare(int *ip1, int *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int LONG_compare(long *ip1, long *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1262
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int LONG_compare(long *ip1, long *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_LONG_compare)(long *, long *);
typedef int (*__pyx_fp_t_LONG_compare)(long *, long *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONG_compare^ __pyx_delegate_val_LONG_compare;
static  int LONG_compare(long *__pyx_v_ip1, long *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1263
 * 
 * cdef int LONG_compare(long *ip1, long *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int LONGLONG_compare(np.npy_longlong *ip1, np.npy_longlong *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1265
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int LONGLONG_compare(np.npy_longlong *ip1, np.npy_longlong *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_LONGLONG_compare)(__pyx_t_5numpy_npy_longlong *, __pyx_t_5numpy_npy_longlong *);
typedef int (*__pyx_fp_t_LONGLONG_compare)(__pyx_t_5numpy_npy_longlong *, __pyx_t_5numpy_npy_longlong *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONGLONG_compare^ __pyx_delegate_val_LONGLONG_compare;
static  int LONGLONG_compare(__pyx_t_5numpy_npy_longlong *__pyx_v_ip1, __pyx_t_5numpy_npy_longlong *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1266
 * 
 * cdef int LONGLONG_compare(np.npy_longlong *ip1, np.npy_longlong *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int UBYTE_compare(np.npy_ubyte *ip1, np.npy_ubyte *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1268
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int UBYTE_compare(np.npy_ubyte *ip1, np.npy_ubyte *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_UBYTE_compare)(__pyx_t_5numpy_npy_ubyte *, __pyx_t_5numpy_npy_ubyte *);
typedef int (*__pyx_fp_t_UBYTE_compare)(__pyx_t_5numpy_npy_ubyte *, __pyx_t_5numpy_npy_ubyte *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_UBYTE_compare^ __pyx_delegate_val_UBYTE_compare;
static  int UBYTE_compare(__pyx_t_5numpy_npy_ubyte *__pyx_v_ip1, __pyx_t_5numpy_npy_ubyte *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1269
 * 
 * cdef int UBYTE_compare(np.npy_ubyte *ip1, np.npy_ubyte *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int USHORT_compare(np.npy_ushort *ip1, np.npy_ushort *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1271
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int USHORT_compare(np.npy_ushort *ip1, np.npy_ushort *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_USHORT_compare)(__pyx_t_5numpy_npy_ushort *, __pyx_t_5numpy_npy_ushort *);
typedef int (*__pyx_fp_t_USHORT_compare)(__pyx_t_5numpy_npy_ushort *, __pyx_t_5numpy_npy_ushort *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_USHORT_compare^ __pyx_delegate_val_USHORT_compare;
static  int USHORT_compare(__pyx_t_5numpy_npy_ushort *__pyx_v_ip1, __pyx_t_5numpy_npy_ushort *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1272
 * 
 * cdef int USHORT_compare(np.npy_ushort *ip1, np.npy_ushort *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int UINT_compare(np.npy_uint *ip1, np.npy_uint *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1274
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int UINT_compare(np.npy_uint *ip1, np.npy_uint *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_UINT_compare)(__pyx_t_5numpy_npy_uint *, __pyx_t_5numpy_npy_uint *);
typedef int (*__pyx_fp_t_UINT_compare)(__pyx_t_5numpy_npy_uint *, __pyx_t_5numpy_npy_uint *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_UINT_compare^ __pyx_delegate_val_UINT_compare;
static  int UINT_compare(__pyx_t_5numpy_npy_uint *__pyx_v_ip1, __pyx_t_5numpy_npy_uint *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1275
 * 
 * cdef int UINT_compare(np.npy_uint *ip1, np.npy_uint *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int ULONG_compare(np.npy_ulong *ip1, np.npy_ulong *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1277
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int ULONG_compare(np.npy_ulong *ip1, np.npy_ulong *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_ULONG_compare)(__pyx_t_5numpy_npy_ulong *, __pyx_t_5numpy_npy_ulong *);
typedef int (*__pyx_fp_t_ULONG_compare)(__pyx_t_5numpy_npy_ulong *, __pyx_t_5numpy_npy_ulong *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_ULONG_compare^ __pyx_delegate_val_ULONG_compare;
static  int ULONG_compare(__pyx_t_5numpy_npy_ulong *__pyx_v_ip1, __pyx_t_5numpy_npy_ulong *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1278
 * 
 * cdef int ULONG_compare(np.npy_ulong *ip1, np.npy_ulong *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int ULONGLONG_compare(np.npy_ulonglong *ip1, np.npy_ulonglong *ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1280
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int ULONGLONG_compare(np.npy_ulonglong *ip1, np.npy_ulonglong *ip2):             # <<<<<<<<<<<<<<
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 */

static int (*__pyx_function_pointer_ULONGLONG_compare)(__pyx_t_5numpy_npy_ulonglong *, __pyx_t_5numpy_npy_ulonglong *);
typedef int (*__pyx_fp_t_ULONGLONG_compare)(__pyx_t_5numpy_npy_ulonglong *, __pyx_t_5numpy_npy_ulonglong *);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_ULONGLONG_compare^ __pyx_delegate_val_ULONGLONG_compare;
static  int ULONGLONG_compare(__pyx_t_5numpy_npy_ulonglong *__pyx_v_ip1, __pyx_t_5numpy_npy_ulonglong *__pyx_v_ip2) {
  int __pyx_r;
  long __pyx_t_1;
  long __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1281
 * 
 * cdef int ULONGLONG_compare(np.npy_ulonglong *ip1, np.npy_ulonglong *ip2):
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)             # <<<<<<<<<<<<<<
 * 
 * cdef int OBJECT_compare(object ip1, object ip2):
 */
  if (((__pyx_v_ip1[0]) < (__pyx_v_ip2[0]))) {
    __pyx_t_1 = -1;
  } else {
    if (((__pyx_v_ip1[0]) == (__pyx_v_ip2[0]))) {
      __pyx_t_2 = 0;
    } else {
      __pyx_t_2 = 1;
    }
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_r = __pyx_t_1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1283
 *     return -1 if ip1[0] < ip2[0] else (0 if ip1[0] == ip2[0] else 1)
 * 
 * cdef int OBJECT_compare(object ip1, object ip2):             # <<<<<<<<<<<<<<
 *     return (ip1 == ip2) != 1
 * 
 */

static int (*__pyx_function_pointer_OBJECT_compare)(System::Object^, System::Object^);
typedef int (*__pyx_fp_t_OBJECT_compare)(System::Object^, System::Object^);
static __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_OBJECT_compare^ __pyx_delegate_val_OBJECT_compare;
static  int OBJECT_compare(System::Object^ __pyx_v_ip1, System::Object^ __pyx_v_ip2) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1284
 * 
 * cdef int OBJECT_compare(object ip1, object ip2):
 *     return (ip1 == ip2) != 1             # <<<<<<<<<<<<<<
 * 
 * cdef CompareFunction compare_functions[21]
 */
  __pyx_t_1 = __site_op_eq_1284_16->Target(__site_op_eq_1284_16, __pyx_v_ip1, __pyx_v_ip2);
  __pyx_t_2 = __site_op_ne_1284_24->Target(__site_op_ne_1284_24, __pyx_t_1, __pyx_int_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_cvt_cvt_int_1284_24->Target(__site_cvt_cvt_int_1284_24, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1302
 * compare_functions[<int>np.NPY_OBJECT] = <CompareFunction>OBJECT_compare
 * 
 * def _order_filterND(a0, domain, int order=0):             # <<<<<<<<<<<<<<
 *     """ out = _order_filterND(a,domain,order)
 *     """
 */

static System::Object^ _order_filterND(System::Object^ a0, System::Object^ domain, [InteropServices::Optional]System::Object^ order) {
  System::Object^ __pyx_v_a0 = nullptr;
  System::Object^ __pyx_v_domain = nullptr;
  int __pyx_v_order;
  NumpyDotNet::ndarray^ __pyx_v_ap1;
  NumpyDotNet::ndarray^ __pyx_v_ap2;
  NumpyDotNet::ndarray^ __pyx_v_ret;
  __pyx_t_5numpy_npy_intp *__pyx_v_a_ind;
  __pyx_t_5numpy_npy_intp *__pyx_v_b_ind;
  __pyx_t_5numpy_npy_intp *__pyx_v_temp_ind;
  __pyx_t_5numpy_npy_intp *__pyx_v_mode_dep;
  __pyx_t_5numpy_npy_intp *__pyx_v_check_ind;
  __pyx_t_5numpy_npy_uintp *__pyx_v_offsets;
  __pyx_t_5numpy_npy_intp __pyx_v_offset1;
  __pyx_t_5numpy_npy_intp *__pyx_v_offsets2;
  __pyx_t_5numpy_npy_intp *__pyx_v_ret_ind;
  int __pyx_v_i;
  int __pyx_v_j;
  int __pyx_v_n2;
  int __pyx_v_n2_nonzero;
  int __pyx_v_k;
  int __pyx_v_check;
  int __pyx_v_incr;
  int __pyx_v_bytes_in_array;
  int __pyx_v_is1;
  int __pyx_v_os;
  int __pyx_v_typenum;
  char *__pyx_v_op;
  char *__pyx_v_ap1_ptr;
  char *__pyx_v_ap2_ptr;
  char *__pyx_v_sort_buffer;
  __pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction __pyx_v_compare_func;
  char *__pyx_v_zptr;
  System::Object^ __pyx_v_type;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  size_t __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  int __pyx_t_10;
  int __pyx_t_11;
  int __pyx_t_12;
  int __pyx_t_13;
  long __pyx_t_14;
  int __pyx_t_15;
  size_t __pyx_t_16;
  size_t __pyx_t_17;
  long __pyx_t_18;
  int __pyx_t_19;
  Py_ssize_t __pyx_t_20;
  int __pyx_t_21;
  int __pyx_t_22;
  long __pyx_t_23;
  int __pyx_t_24;
  __pyx_v_a0 = a0;
  __pyx_v_domain = domain;
  if (dynamic_cast<System::Reflection::Missing^>(order) == nullptr) {
    __pyx_v_order = __site_cvt_cvt_int_1302_0->Target(__site_cvt_cvt_int_1302_0, order);
  } else {
    __pyx_v_order = ((int)0);
  }
  __pyx_v_ap1 = nullptr;
  __pyx_v_ap2 = nullptr;
  __pyx_v_ret = nullptr;
  __pyx_v_type = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1311
 *     cdef np.npy_intp *offsets2
 *     cdef np.npy_intp *ret_ind
 *     cdef int i, j, n2, n2_nonzero, k, check, incr = 1             # <<<<<<<<<<<<<<
 *     cdef int bytes_in_array
 *     cdef int is1, os
 */
  __pyx_v_incr = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1317
 *     cdef char *op, *ap1_ptr, *ap2_ptr, *sort_buffer
 *     cdef CompareFunction compare_func
 *     cdef char *zptr=NULL             # <<<<<<<<<<<<<<
 * 
 *     # Get Array objects from input
 */
  __pyx_v_zptr = NULL;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1320
 * 
 *     # Get Array objects from input
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(a0)))             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(domain, type)
 * 
 */
  if (__pyx_v_a0 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_a0) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(PyArray_TYPE(((NumpyDotNet::ndarray^)__pyx_v_a0))))); 
  __pyx_v_type = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1321
 *     # Get Array objects from input
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(a0)))
 *     type = np.NpyArray_FindArrayType_2args(domain, type)             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
  if (__pyx_v_type != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_v_type) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(__pyx_v_domain, ((NumpyDotNet::dtype^)__pyx_v_type))); 
  __pyx_v_type = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1323
 *     type = np.NpyArray_FindArrayType_2args(domain, type)
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         ap1 = np.PyArray_FromAny(a0, type, 0, 0, np.NPY_CONTIGUOUS, None)
 *         ap2 = np.PyArray_FromAny(domain, type, 0, 0, np.NPY_CONTIGUOUS, None)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1324
 * 
 *     try:
 *         ap1 = np.PyArray_FromAny(a0, type, 0, 0, np.NPY_CONTIGUOUS, None)             # <<<<<<<<<<<<<<
 *         ap2 = np.PyArray_FromAny(domain, type, 0, 0, np.NPY_CONTIGUOUS, None)
 * 
 */
    __pyx_t_1 = (System::Object^)(long long)(NPY_CONTIGUOUS);
    __pyx_t_2 = PyArray_FromAny(__pyx_v_a0, __pyx_v_type, __pyx_int_0, __pyx_int_0, __pyx_t_1, nullptr); 
    __pyx_t_1 = nullptr;
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ap1 = ((NumpyDotNet::ndarray^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1325
 *     try:
 *         ap1 = np.PyArray_FromAny(a0, type, 0, 0, np.NPY_CONTIGUOUS, None)
 *         ap2 = np.PyArray_FromAny(domain, type, 0, 0, np.NPY_CONTIGUOUS, None)             # <<<<<<<<<<<<<<
 * 
 *         if np.PyArray_NDIM(ap1) != np.PyArray_NDIM(ap2):
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
    __pyx_t_1 = PyArray_FromAny(__pyx_v_domain, __pyx_v_type, __pyx_int_0, __pyx_int_0, __pyx_t_2, nullptr); 
    __pyx_t_2 = nullptr;
    if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ap2 = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1327
 *         ap2 = np.PyArray_FromAny(domain, type, 0, 0, np.NPY_CONTIGUOUS, None)
 * 
 *         if np.PyArray_NDIM(ap1) != np.PyArray_NDIM(ap2):             # <<<<<<<<<<<<<<
 *             raise ValueError("All input arrays must have the same number of dimensions.")
 * 
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_2 = PyArray_NDIM(__pyx_v_ap2); 
    __pyx_t_3 = __site_op_ne_1327_32->Target(__site_op_ne_1327_32, __pyx_t_1, __pyx_t_2);
    __pyx_t_1 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_t_4 = __site_istrue_1327_32->Target(__site_istrue_1327_32, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1328
 * 
 *         if np.PyArray_NDIM(ap1) != np.PyArray_NDIM(ap2):
 *             raise ValueError("All input arrays must have the same number of dimensions.")             # <<<<<<<<<<<<<<
 * 
 *         n2 = np.PyArray_SIZE(ap2)
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_2 = __site_call1_1328_28->Target(__site_call1_1328_28, __pyx_context, __pyx_t_3, ((System::Object^)"All input arrays must have the same number of dimensions."));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1330
 *             raise ValueError("All input arrays must have the same number of dimensions.")
 * 
 *         n2 = np.PyArray_SIZE(ap2)             # <<<<<<<<<<<<<<
 *         n2_nonzero = 0
 *         ap2_ptr = <char *>np.PyArray_DATA(ap2)
 */
    __pyx_v_n2 = PyArray_SIZE(__pyx_v_ap2);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1331
 * 
 *         n2 = np.PyArray_SIZE(ap2)
 *         n2_nonzero = 0             # <<<<<<<<<<<<<<
 *         ap2_ptr = <char *>np.PyArray_DATA(ap2)
 * 
 */
    __pyx_v_n2_nonzero = 0;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1332
 *         n2 = np.PyArray_SIZE(ap2)
 *         n2_nonzero = 0
 *         ap2_ptr = <char *>np.PyArray_DATA(ap2)             # <<<<<<<<<<<<<<
 * 
 *         # Find out the number of non-zero entries in domain (allows for
 */
    __pyx_v_ap2_ptr = ((char *)PyArray_DATA(__pyx_v_ap2));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1336
 *         # Find out the number of non-zero entries in domain (allows for
 *         # different shapped rank-filters to be used besides just rectangles)
 *         zptr = <char *>np.PyArray_Zero(ap2)             # <<<<<<<<<<<<<<
 *         if zptr == NULL:
 *             return None
 */
    __pyx_v_zptr = ((char *)PyArray_Zero(((System::Object^)__pyx_v_ap2)));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1337
 *         # different shapped rank-filters to be used besides just rectangles)
 *         zptr = <char *>np.PyArray_Zero(ap2)
 *         if zptr == NULL:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_4 = (__pyx_v_zptr == NULL);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1338
 *         zptr = <char *>np.PyArray_Zero(ap2)
 *         if zptr == NULL:
 *             return None             # <<<<<<<<<<<<<<
 * 
 *         for k in range(n2):
 */
      __pyx_r = nullptr;
      goto __pyx_L0;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1340
 *             return None
 * 
 *         for k in range(n2):             # <<<<<<<<<<<<<<
 *             n2_nonzero += (memcmp(ap2_ptr,zptr,np.PyArray_DESCR(ap2).ElementSize) != 0)
 *             ap2_ptr += <int>np.PyArray_DESCR(ap2).ElementSize
 */
    __pyx_t_5 = __pyx_v_n2;
    for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
      __pyx_v_k = __pyx_t_6;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1341
 * 
 *         for k in range(n2):
 *             n2_nonzero += (memcmp(ap2_ptr,zptr,np.PyArray_DESCR(ap2).ElementSize) != 0)             # <<<<<<<<<<<<<<
 *             ap2_ptr += <int>np.PyArray_DESCR(ap2).ElementSize
 * 
 */
      __pyx_t_2 = PyArray_DESCR(__pyx_v_ap2); 
      __pyx_t_3 = __site_get_ElementSize_1341_68->Target(__site_get_ElementSize_1341_68, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      __pyx_t_7 = __site_cvt_cvt_size_t_1341_68->Target(__site_cvt_cvt_size_t_1341_68, __pyx_t_3);
      __pyx_t_3 = nullptr;
      __pyx_v_n2_nonzero += (memcmp(__pyx_v_ap2_ptr, __pyx_v_zptr, __pyx_t_7) != 0);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1342
 *         for k in range(n2):
 *             n2_nonzero += (memcmp(ap2_ptr,zptr,np.PyArray_DESCR(ap2).ElementSize) != 0)
 *             ap2_ptr += <int>np.PyArray_DESCR(ap2).ElementSize             # <<<<<<<<<<<<<<
 * 
 *         if (order >= n2_nonzero) or (order < 0):
 */
      __pyx_t_3 = PyArray_DESCR(__pyx_v_ap2); 
      __pyx_t_2 = __site_get_ElementSize_1342_49->Target(__site_get_ElementSize_1342_49, __pyx_t_3, __pyx_context);
      __pyx_t_3 = nullptr;
      __pyx_t_8 = __site_cvt_cvt_int_1342_49->Target(__site_cvt_cvt_int_1342_49, __pyx_t_2);
      __pyx_t_2 = nullptr;
      __pyx_v_ap2_ptr += ((int)__pyx_t_8);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1344
 *             ap2_ptr += <int>np.PyArray_DESCR(ap2).ElementSize
 * 
 *         if (order >= n2_nonzero) or (order < 0):             # <<<<<<<<<<<<<<
 *             raise ValueError("Order must be non-negative and less than number of nonzero elements in domain.")
 * 
 */
    __pyx_t_4 = (__pyx_v_order >= __pyx_v_n2_nonzero);
    if (!__pyx_t_4) {
      __pyx_t_9 = (__pyx_v_order < 0);
      __pyx_t_10 = __pyx_t_9;
    } else {
      __pyx_t_10 = __pyx_t_4;
    }
    if (__pyx_t_10) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1345
 * 
 *         if (order >= n2_nonzero) or (order < 0):
 *             raise ValueError("Order must be non-negative and less than number of nonzero elements in domain.")             # <<<<<<<<<<<<<<
 * 
 *         typenum = type.num
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_3 = __site_call1_1345_28->Target(__site_call1_1345_28, __pyx_context, __pyx_t_2, ((System::Object^)"Order must be non-negative and less than number of nonzero elements in domain."));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L9;
    }
    __pyx_L9:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1347
 *             raise ValueError("Order must be non-negative and less than number of nonzero elements in domain.")
 * 
 *         typenum = type.num             # <<<<<<<<<<<<<<
 * 
 *         ret = np.PyArray_SimpleNew(np.PyArray_NDIM(ap1), np.PyArray_DIMS(ap1), typenum)
 */
    __pyx_t_3 = __site_get_num_1347_22->Target(__site_get_num_1347_22, __pyx_v_type, __pyx_context);
    __pyx_t_5 = __site_cvt_cvt_int_1347_22->Target(__site_cvt_cvt_int_1347_22, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_typenum = __pyx_t_5;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1349
 *         typenum = type.num
 * 
 *         ret = np.PyArray_SimpleNew(np.PyArray_NDIM(ap1), np.PyArray_DIMS(ap1), typenum)             # <<<<<<<<<<<<<<
 * 
 *         compare_func = compare_functions[np.PyArray_TYPE(ap1)]
 */
    __pyx_t_3 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_6 = __site_cvt_cvt_int_1349_50->Target(__site_cvt_cvt_int_1349_50, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_t_3 = PyArray_SimpleNew(__pyx_t_6, PyArray_DIMS(__pyx_v_ap1), __pyx_v_typenum); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ret = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1351
 *         ret = np.PyArray_SimpleNew(np.PyArray_NDIM(ap1), np.PyArray_DIMS(ap1), typenum)
 * 
 *         compare_func = compare_functions[np.PyArray_TYPE(ap1)]             # <<<<<<<<<<<<<<
 *         if compare_func == NULL:
 *             raise ValueError("order_filterND not available for this type")
 */
    __pyx_v_compare_func = (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[PyArray_TYPE(__pyx_v_ap1)]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1352
 * 
 *         compare_func = compare_functions[np.PyArray_TYPE(ap1)]
 *         if compare_func == NULL:             # <<<<<<<<<<<<<<
 *             raise ValueError("order_filterND not available for this type")
 * 
 */
    __pyx_t_10 = (__pyx_v_compare_func == NULL);
    if (__pyx_t_10) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1353
 *         compare_func = compare_functions[np.PyArray_TYPE(ap1)]
 *         if compare_func == NULL:
 *             raise ValueError("order_filterND not available for this type")             # <<<<<<<<<<<<<<
 * 
 *         is1 = np.PyArray_DESCR(ap1).ElementSize
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_2 = __site_call1_1353_28->Target(__site_call1_1353_28, __pyx_context, __pyx_t_3, ((System::Object^)"order_filterND not available for this type"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L10;
    }
    __pyx_L10:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1355
 *             raise ValueError("order_filterND not available for this type")
 * 
 *         is1 = np.PyArray_DESCR(ap1).ElementSize             # <<<<<<<<<<<<<<
 *         sort_buffer = <char *>malloc(n2_nonzero*is1)
 *         if sort_buffer == NULL:
 */
    __pyx_t_2 = PyArray_DESCR(__pyx_v_ap1); 
    __pyx_t_3 = __site_get_ElementSize_1355_35->Target(__site_get_ElementSize_1355_35, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_11 = __site_cvt_cvt_int_1355_35->Target(__site_cvt_cvt_int_1355_35, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_is1 = __pyx_t_11;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1356
 * 
 *         is1 = np.PyArray_DESCR(ap1).ElementSize
 *         sort_buffer = <char *>malloc(n2_nonzero*is1)             # <<<<<<<<<<<<<<
 *         if sort_buffer == NULL:
 *             return None
 */
    __pyx_v_sort_buffer = ((char *)malloc((__pyx_v_n2_nonzero * __pyx_v_is1)));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1357
 *         is1 = np.PyArray_DESCR(ap1).ElementSize
 *         sort_buffer = <char *>malloc(n2_nonzero*is1)
 *         if sort_buffer == NULL:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_10 = (__pyx_v_sort_buffer == NULL);
    if (__pyx_t_10) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1358
 *         sort_buffer = <char *>malloc(n2_nonzero*is1)
 *         if sort_buffer == NULL:
 *             return None             # <<<<<<<<<<<<<<
 * 
 *         op = <char *>np.PyArray_DATA(ret)
 */
      __pyx_r = nullptr;
      goto __pyx_L0;
      goto __pyx_L11;
    }
    __pyx_L11:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1360
 *             return None
 * 
 *         op = <char *>np.PyArray_DATA(ret)             # <<<<<<<<<<<<<<
 *         os = np.PyArray_DESCR(ret).ElementSize
 * 
 */
    __pyx_v_op = ((char *)PyArray_DATA(__pyx_v_ret));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1361
 * 
 *         op = <char *>np.PyArray_DATA(ret)
 *         os = np.PyArray_DESCR(ret).ElementSize             # <<<<<<<<<<<<<<
 * 
 *         bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)
 */
    __pyx_t_3 = PyArray_DESCR(__pyx_v_ret); 
    __pyx_t_2 = __site_get_ElementSize_1361_34->Target(__site_get_ElementSize_1361_34, __pyx_t_3, __pyx_context);
    __pyx_t_3 = nullptr;
    __pyx_t_12 = __site_cvt_cvt_int_1361_34->Target(__site_cvt_cvt_int_1361_34, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_os = __pyx_t_12;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1363
 *         os = np.PyArray_DESCR(ret).ElementSize
 * 
 *         bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)             # <<<<<<<<<<<<<<
 *         mode_dep = <np.npy_intp *>malloc(bytes_in_array)
 *         for k in range(np.PyArray_NDIM(ap1)):
 */
    __pyx_t_2 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_3 = (sizeof(__pyx_t_5numpy_npy_intp));
    __pyx_t_1 = __site_op_mul_1363_45->Target(__site_op_mul_1363_45, __pyx_t_2, __pyx_t_3);
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_13 = __site_cvt_cvt_int_1363_45->Target(__site_cvt_cvt_int_1363_45, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_bytes_in_array = __pyx_t_13;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1364
 * 
 *         bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)
 *         mode_dep = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)
 */
    __pyx_v_mode_dep = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1365
 *         bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)
 *         mode_dep = <np.npy_intp *>malloc(bytes_in_array)
 *         for k in range(np.PyArray_NDIM(ap1)):             # <<<<<<<<<<<<<<
 *             mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)
 * 
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_14 = __site_cvt_cvt_long_1365_38->Target(__site_cvt_cvt_long_1365_38, __pyx_t_1);
    __pyx_t_1 = nullptr;
    for (__pyx_t_15 = 0; __pyx_t_15 < __pyx_t_14; __pyx_t_15+=1) {
      __pyx_v_k = __pyx_t_15;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1366
 *         mode_dep = <np.npy_intp *>malloc(bytes_in_array)
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)             # <<<<<<<<<<<<<<
 * 
 *         b_ind = <np.npy_intp *>malloc(bytes_in_array)  # loop variables
 */
      (__pyx_v_mode_dep[__pyx_v_k]) = (-(((PyArray_DIMS(__pyx_v_ap2)[__pyx_v_k]) - 1) >> 1));
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1368
 *             mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)
 * 
 *         b_ind = <np.npy_intp *>malloc(bytes_in_array)  # loop variables             # <<<<<<<<<<<<<<
 *         memset(b_ind,0,bytes_in_array)
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)
 */
    __pyx_v_b_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1369
 * 
 *         b_ind = <np.npy_intp *>malloc(bytes_in_array)  # loop variables
 *         memset(b_ind,0,bytes_in_array)             # <<<<<<<<<<<<<<
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)
 */
    memset(__pyx_v_b_ind, 0, __pyx_v_bytes_in_array);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1370
 *         b_ind = <np.npy_intp *>malloc(bytes_in_array)  # loop variables
 *         memset(b_ind,0,bytes_in_array)
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         memset(ret_ind,0,bytes_in_array)
 */
    __pyx_v_a_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1371
 *         memset(b_ind,0,bytes_in_array)
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         memset(ret_ind,0,bytes_in_array)
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)
 */
    __pyx_v_ret_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1372
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         memset(ret_ind,0,bytes_in_array)             # <<<<<<<<<<<<<<
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)
 */
    memset(__pyx_v_ret_ind, 0, __pyx_v_bytes_in_array);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1373
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         memset(ret_ind,0,bytes_in_array)
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         offsets = <np.npy_uintp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))
 */
    __pyx_v_temp_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1374
 *         memset(ret_ind,0,bytes_in_array)
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         offsets = <np.npy_uintp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))
 *         offsets2 = <np.npy_intp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_intp))
 */
    __pyx_v_check_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1375
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         offsets = <np.npy_uintp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))             # <<<<<<<<<<<<<<
 *         offsets2 = <np.npy_intp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_intp))
 *         offset1 = compute_offsets(offsets,offsets2,
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_3 = (sizeof(__pyx_t_5numpy_npy_uintp));
    __pyx_t_2 = __site_op_mul_1375_61->Target(__site_op_mul_1375_61, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_16 = __site_cvt_cvt_size_t_1375_61->Target(__site_cvt_cvt_size_t_1375_61, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_offsets = ((__pyx_t_5numpy_npy_uintp *)malloc(__pyx_t_16));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1376
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         offsets = <np.npy_uintp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))
 *         offsets2 = <np.npy_intp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_intp))             # <<<<<<<<<<<<<<
 *         offset1 = compute_offsets(offsets,offsets2,
 *                                   np.PyArray_DIMS(ap1),np.PyArray_DIMS(ap2),
 */
    __pyx_t_2 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_3 = (sizeof(__pyx_t_5numpy_npy_intp));
    __pyx_t_1 = __site_op_mul_1376_61->Target(__site_op_mul_1376_61, __pyx_t_2, __pyx_t_3);
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_17 = __site_cvt_cvt_size_t_1376_61->Target(__site_cvt_cvt_size_t_1376_61, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_offsets2 = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_t_17));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1379
 *         offset1 = compute_offsets(offsets,offsets2,
 *                                   np.PyArray_DIMS(ap1),np.PyArray_DIMS(ap2),
 *                                   np.PyArray_DIMS(ret),mode_dep,np.PyArray_NDIM(ap1))             # <<<<<<<<<<<<<<
 * 
 *         # The filtering proceeds by looping through the output array
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_15 = __site_cvt_cvt_int_1379_79->Target(__site_cvt_cvt_int_1379_79, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_offset1 = compute_offsets(__pyx_v_offsets, __pyx_v_offsets2, PyArray_DIMS(__pyx_v_ap1), PyArray_DIMS(__pyx_v_ap2), PyArray_DIMS(__pyx_v_ret), __pyx_v_mode_dep, __pyx_t_15);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1399
 * 
 *         # Calculate it once and the just move it around appropriately
 *         np.NpyDataMem_FREE(zptr)             # <<<<<<<<<<<<<<
 *         zptr = NULL
 *         zptr = <char *>np.PyArray_Zero(ap1)
 */
    NpyDataMem_FREE(__pyx_v_zptr);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1400
 *         # Calculate it once and the just move it around appropriately
 *         np.NpyDataMem_FREE(zptr)
 *         zptr = NULL             # <<<<<<<<<<<<<<
 *         zptr = <char *>np.PyArray_Zero(ap1)
 *         if zptr == NULL:
 */
    __pyx_v_zptr = NULL;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1401
 *         np.NpyDataMem_FREE(zptr)
 *         zptr = NULL
 *         zptr = <char *>np.PyArray_Zero(ap1)             # <<<<<<<<<<<<<<
 *         if zptr == NULL:
 *             return None
 */
    __pyx_v_zptr = ((char *)PyArray_Zero(((System::Object^)__pyx_v_ap1)));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1402
 *         zptr = NULL
 *         zptr = <char *>np.PyArray_Zero(ap1)
 *         if zptr == NULL:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_10 = (__pyx_v_zptr == NULL);
    if (__pyx_t_10) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1403
 *         zptr = <char *>np.PyArray_Zero(ap1)
 *         if zptr == NULL:
 *             return None             # <<<<<<<<<<<<<<
 * 
 *         ap1_ptr = <char *>np.PyArray_DATA(ap1) + offset1*is1
 */
      __pyx_r = nullptr;
      goto __pyx_L0;
      goto __pyx_L14;
    }
    __pyx_L14:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1405
 *             return None
 * 
 *         ap1_ptr = <char *>np.PyArray_DATA(ap1) + offset1*is1             # <<<<<<<<<<<<<<
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             a_ind[k] = mode_dep[k]
 */
    __pyx_v_ap1_ptr = (((char *)PyArray_DATA(__pyx_v_ap1)) + (__pyx_v_offset1 * __pyx_v_is1));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1406
 * 
 *         ap1_ptr = <char *>np.PyArray_DATA(ap1) + offset1*is1
 *         for k in range(np.PyArray_NDIM(ap1)):             # <<<<<<<<<<<<<<
 *             a_ind[k] = mode_dep[k]
 *             check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_18 = __site_cvt_cvt_long_1406_38->Target(__site_cvt_cvt_long_1406_38, __pyx_t_1);
    __pyx_t_1 = nullptr;
    for (__pyx_t_19 = 0; __pyx_t_19 < __pyx_t_18; __pyx_t_19+=1) {
      __pyx_v_k = __pyx_t_19;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1407
 *         ap1_ptr = <char *>np.PyArray_DATA(ap1) + offset1*is1
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             a_ind[k] = mode_dep[k]             # <<<<<<<<<<<<<<
 *             check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1
 * 
 */
      (__pyx_v_a_ind[__pyx_v_k]) = (__pyx_v_mode_dep[__pyx_v_k]);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1408
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             a_ind[k] = mode_dep[k]
 *             check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1             # <<<<<<<<<<<<<<
 * 
 *         a_ind[np.PyArray_NDIM(ap1)-1] -= 1
 */
      (__pyx_v_check_ind[__pyx_v_k]) = (((PyArray_DIM(__pyx_v_ap1, __pyx_v_k) - PyArray_DIM(__pyx_v_ap2, __pyx_v_k)) - (__pyx_v_mode_dep[__pyx_v_k])) - 1);
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1410
 *             check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1
 * 
 *         a_ind[np.PyArray_NDIM(ap1)-1] -= 1             # <<<<<<<<<<<<<<
 *         for i in range(np.PyArray_SIZE(ret)-1, -1, -1):
 *             # Zero out the sort_buffer (has effect of zero-padding on boundaries).
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_3 = __site_op_sub_1410_34->Target(__site_op_sub_1410_34, __pyx_t_1, __pyx_int_1);
    __pyx_t_1 = nullptr;
    __pyx_t_20 = __site_cvt_cvt_Py_ssize_t_1410_34->Target(__site_cvt_cvt_Py_ssize_t_1410_34, __pyx_t_3);
    __pyx_t_3 = nullptr;
    (__pyx_v_a_ind[__pyx_t_20]) -= 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1411
 * 
 *         a_ind[np.PyArray_NDIM(ap1)-1] -= 1
 *         for i in range(np.PyArray_SIZE(ret)-1, -1, -1):             # <<<<<<<<<<<<<<
 *             # Zero out the sort_buffer (has effect of zero-padding on boundaries).
 *             # Treat object arrays right.
 */
    for (__pyx_t_19 = (PyArray_SIZE(__pyx_v_ret) - 1); __pyx_t_19 > -1; __pyx_t_19-=1) {
      __pyx_v_i = __pyx_t_19;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1414
 *             # Zero out the sort_buffer (has effect of zero-padding on boundaries).
 *             # Treat object arrays right.
 *             ap2_ptr = sort_buffer             # <<<<<<<<<<<<<<
 *             for k in range(n2_nonzero):
 *                 memcpy(ap2_ptr,zptr,is1)
 */
      __pyx_v_ap2_ptr = __pyx_v_sort_buffer;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1415
 *             # Treat object arrays right.
 *             ap2_ptr = sort_buffer
 *             for k in range(n2_nonzero):             # <<<<<<<<<<<<<<
 *                 memcpy(ap2_ptr,zptr,is1)
 *                 ap2_ptr += is1
 */
      __pyx_t_21 = __pyx_v_n2_nonzero;
      for (__pyx_t_22 = 0; __pyx_t_22 < __pyx_t_21; __pyx_t_22+=1) {
        __pyx_v_k = __pyx_t_22;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1416
 *             ap2_ptr = sort_buffer
 *             for k in range(n2_nonzero):
 *                 memcpy(ap2_ptr,zptr,is1)             # <<<<<<<<<<<<<<
 *                 ap2_ptr += is1
 * 
 */
        memcpy(__pyx_v_ap2_ptr, __pyx_v_zptr, __pyx_v_is1);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1417
 *             for k in range(n2_nonzero):
 *                 memcpy(ap2_ptr,zptr,is1)
 *                 ap2_ptr += is1             # <<<<<<<<<<<<<<
 * 
 *             k = np.PyArray_NDIM(ap1) - 1
 */
        __pyx_v_ap2_ptr += __pyx_v_is1;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1419
 *                 ap2_ptr += is1
 * 
 *             k = np.PyArray_NDIM(ap1) - 1             # <<<<<<<<<<<<<<
 *             for j in range(incr-1):
 *                 a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start
 */
      __pyx_t_3 = PyArray_NDIM(__pyx_v_ap1); 
      __pyx_t_1 = __site_op_sub_1419_37->Target(__site_op_sub_1419_37, __pyx_t_3, __pyx_int_1);
      __pyx_t_3 = nullptr;
      __pyx_t_21 = __site_cvt_cvt_int_1419_37->Target(__site_cvt_cvt_int_1419_37, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_v_k = __pyx_t_21;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1420
 * 
 *             k = np.PyArray_NDIM(ap1) - 1
 *             for j in range(incr-1):             # <<<<<<<<<<<<<<
 *                 a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start
 *                 k -= 1
 */
      __pyx_t_23 = (__pyx_v_incr - 1);
      for (__pyx_t_22 = 0; __pyx_t_22 < __pyx_t_23; __pyx_t_22+=1) {
        __pyx_v_j = __pyx_t_22;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1421
 *             k = np.PyArray_NDIM(ap1) - 1
 *             for j in range(incr-1):
 *                 a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start             # <<<<<<<<<<<<<<
 *                 k -= 1
 * 
 */
        (__pyx_v_a_ind[__pyx_v_k]) -= (PyArray_DIM(__pyx_v_ret, __pyx_v_k) - 1);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1422
 *             for j in range(incr-1):
 *                 a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start
 *                 k -= 1             # <<<<<<<<<<<<<<
 * 
 *             ap1_ptr += offsets2[k]*is1
 */
        __pyx_v_k -= 1;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1424
 *                 k -= 1
 * 
 *             ap1_ptr += offsets2[k]*is1             # <<<<<<<<<<<<<<
 *             a_ind[k] += 1
 *             memcpy(temp_ind, a_ind, bytes_in_array)
 */
      __pyx_v_ap1_ptr += ((__pyx_v_offsets2[__pyx_v_k]) * __pyx_v_is1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1425
 * 
 *             ap1_ptr += offsets2[k]*is1
 *             a_ind[k] += 1             # <<<<<<<<<<<<<<
 *             memcpy(temp_ind, a_ind, bytes_in_array)
 * 
 */
      (__pyx_v_a_ind[__pyx_v_k]) += 1;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1426
 *             ap1_ptr += offsets2[k]*is1
 *             a_ind[k] += 1
 *             memcpy(temp_ind, a_ind, bytes_in_array)             # <<<<<<<<<<<<<<
 * 
 *             check = 0
 */
      memcpy(__pyx_v_temp_ind, __pyx_v_a_ind, __pyx_v_bytes_in_array);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1428
 *             memcpy(temp_ind, a_ind, bytes_in_array)
 * 
 *             check = 0             # <<<<<<<<<<<<<<
 *             k = 0
 *             while (not check and (k < np.PyArray_NDIM(ap1))):
 */
      __pyx_v_check = 0;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1429
 * 
 *             check = 0
 *             k = 0             # <<<<<<<<<<<<<<
 *             while (not check and (k < np.PyArray_NDIM(ap1))):
 *                 check = check or (ret_ind[k] < -mode_dep[k]) or (ret_ind[k] > check_ind[k])
 */
      __pyx_v_k = 0;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1430
 *             check = 0
 *             k = 0
 *             while (not check and (k < np.PyArray_NDIM(ap1))):             # <<<<<<<<<<<<<<
 *                 check = check or (ret_ind[k] < -mode_dep[k]) or (ret_ind[k] > check_ind[k])
 *                 k += 1
 */
      while (1) {
        __pyx_t_10 = (!__pyx_v_check);
        if (__pyx_t_10) {
          __pyx_t_1 = __pyx_v_k;
          __pyx_t_3 = PyArray_NDIM(__pyx_v_ap1); 
          __pyx_t_2 = __site_op_lt_1430_36->Target(__site_op_lt_1430_36, __pyx_t_1, __pyx_t_3);
          __pyx_t_1 = nullptr;
          __pyx_t_3 = nullptr;
          __pyx_t_4 = __site_istrue_1430_36->Target(__site_istrue_1430_36, __pyx_t_2);
          __pyx_t_2 = nullptr;
          __pyx_t_9 = __pyx_t_4;
        } else {
          __pyx_t_9 = __pyx_t_10;
        }
        if (!__pyx_t_9) break;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1431
 *             k = 0
 *             while (not check and (k < np.PyArray_NDIM(ap1))):
 *                 check = check or (ret_ind[k] < -mode_dep[k]) or (ret_ind[k] > check_ind[k])             # <<<<<<<<<<<<<<
 *                 k += 1
 * 
 */
        __pyx_t_2 = __pyx_v_check;
        __pyx_t_9 = __site_cvt_bool_1431_30->Target(__site_cvt_bool_1431_30, __pyx_t_2);
        if (!__pyx_t_9) {
          __pyx_t_2 = nullptr;
          __pyx_t_9 = ((__pyx_v_ret_ind[__pyx_v_k]) < (-(__pyx_v_mode_dep[__pyx_v_k])));
          if (!__pyx_t_9) {
            __pyx_t_10 = ((__pyx_v_ret_ind[__pyx_v_k]) > (__pyx_v_check_ind[__pyx_v_k]));
            __pyx_t_4 = __pyx_t_10;
          } else {
            __pyx_t_4 = __pyx_t_9;
          }
          __pyx_t_3 = __pyx_t_4;
          __pyx_t_1 = __pyx_t_3;
          __pyx_t_3 = nullptr;
        } else {
          __pyx_t_1 = __pyx_t_2;
          __pyx_t_2 = nullptr;
        }
        __pyx_t_22 = __site_cvt_cvt_int_1431_30->Target(__site_cvt_cvt_int_1431_30, __pyx_t_1);
        __pyx_t_1 = nullptr;
        __pyx_v_check = __pyx_t_22;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1432
 *             while (not check and (k < np.PyArray_NDIM(ap1))):
 *                 check = check or (ret_ind[k] < -mode_dep[k]) or (ret_ind[k] > check_ind[k])
 *                 k += 1             # <<<<<<<<<<<<<<
 * 
 *             fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)
 */
        __pyx_v_k += 1;
      }

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1434
 *                 k += 1
 * 
 *             fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)             # <<<<<<<<<<<<<<
 *             qsort(<void *>sort_buffer, n2_nonzero, is1, COMPARE_CONST_HELPER(compare_func))
 *             memcpy(op, sort_buffer + order*is1, os)
 */
      __pyx_t_1 = fill_buffer(__pyx_v_ap1_ptr, __pyx_v_ap1, __pyx_v_ap2, __pyx_v_sort_buffer, __pyx_v_n2, __pyx_v_check, __pyx_v_b_ind, __pyx_v_temp_ind, __pyx_v_offsets); 
      __pyx_t_1 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1435
 * 
 *             fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)
 *             qsort(<void *>sort_buffer, n2_nonzero, is1, COMPARE_CONST_HELPER(compare_func))             # <<<<<<<<<<<<<<
 *             memcpy(op, sort_buffer + order*is1, os)
 * 
 */
      qsort(((void *)__pyx_v_sort_buffer), __pyx_v_n2_nonzero, __pyx_v_is1, COMPARE_CONST_HELPER(__pyx_v_compare_func));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1436
 *             fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)
 *             qsort(<void *>sort_buffer, n2_nonzero, is1, COMPARE_CONST_HELPER(compare_func))
 *             memcpy(op, sort_buffer + order*is1, os)             # <<<<<<<<<<<<<<
 * 
 *             incr = increment(ret_ind, np.PyArray_NDIM(ret), np.PyArray_DIMS(ret)) # increment index counter
 */
      memcpy(__pyx_v_op, (__pyx_v_sort_buffer + (__pyx_v_order * __pyx_v_is1)), __pyx_v_os);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1438
 *             memcpy(op, sort_buffer + order*is1, os)
 * 
 *             incr = increment(ret_ind, np.PyArray_NDIM(ret), np.PyArray_DIMS(ret)) # increment index counter             # <<<<<<<<<<<<<<
 *             op += os   # increment to next output index
 * 
 */
      __pyx_t_1 = PyArray_NDIM(__pyx_v_ret); 
      __pyx_t_24 = __site_cvt_cvt_int_1438_53->Target(__site_cvt_cvt_int_1438_53, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_v_incr = increment(__pyx_v_ret_ind, __pyx_t_24, PyArray_DIMS(__pyx_v_ret));

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1439
 * 
 *             incr = increment(ret_ind, np.PyArray_NDIM(ret), np.PyArray_DIMS(ret)) # increment index counter
 *             op += os   # increment to next output index             # <<<<<<<<<<<<<<
 * 
 * 
 */
      __pyx_v_op += __pyx_v_os;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1442
 * 
 * 
 *         free(b_ind)             # <<<<<<<<<<<<<<
 *         free(a_ind)
 *         free(ret_ind)
 */
    free(__pyx_v_b_ind);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1443
 * 
 *         free(b_ind)
 *         free(a_ind)             # <<<<<<<<<<<<<<
 *         free(ret_ind)
 *         free(offsets)
 */
    free(__pyx_v_a_ind);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1444
 *         free(b_ind)
 *         free(a_ind)
 *         free(ret_ind)             # <<<<<<<<<<<<<<
 *         free(offsets)
 *         free(offsets2)
 */
    free(__pyx_v_ret_ind);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1445
 *         free(a_ind)
 *         free(ret_ind)
 *         free(offsets)             # <<<<<<<<<<<<<<
 *         free(offsets2)
 *         free(temp_ind)
 */
    free(__pyx_v_offsets);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1446
 *         free(ret_ind)
 *         free(offsets)
 *         free(offsets2)             # <<<<<<<<<<<<<<
 *         free(temp_ind)
 *         free(check_ind)
 */
    free(__pyx_v_offsets2);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1447
 *         free(offsets)
 *         free(offsets2)
 *         free(temp_ind)             # <<<<<<<<<<<<<<
 *         free(check_ind)
 *         free(mode_dep)
 */
    free(__pyx_v_temp_ind);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1448
 *         free(offsets2)
 *         free(temp_ind)
 *         free(check_ind)             # <<<<<<<<<<<<<<
 *         free(mode_dep)
 *         free(sort_buffer)
 */
    free(__pyx_v_check_ind);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1449
 *         free(temp_ind)
 *         free(check_ind)
 *         free(mode_dep)             # <<<<<<<<<<<<<<
 *         free(sort_buffer)
 * 
 */
    free(__pyx_v_mode_dep);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1450
 *         free(check_ind)
 *         free(mode_dep)
 *         free(sort_buffer)             # <<<<<<<<<<<<<<
 * 
 *         return np.PyArray_Return(ret)
 */
    free(__pyx_v_sort_buffer);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1452
 *         free(sort_buffer)
 * 
 *         return np.PyArray_Return(ret)             # <<<<<<<<<<<<<<
 *     #except Exception, e:
 *     #    print "Oops! %s" % e
 */
    __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_ret)); 
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1458
 *     finally:
 *         # clean up after PyArray_Zero()
 *         if zptr != NULL:             # <<<<<<<<<<<<<<
 *             np.NpyDataMem_FREE(zptr)
 * 
 */
  finally {
    __pyx_t_4 = (__pyx_v_zptr != NULL);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1459
 *         # clean up after PyArray_Zero()
 *         if zptr != NULL:
 *             np.NpyDataMem_FREE(zptr)             # <<<<<<<<<<<<<<
 * 
 *     return None
 */
      NpyDataMem_FREE(__pyx_v_zptr);
      goto __pyx_L25;
    }
    __pyx_L25:;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1461
 *             np.NpyDataMem_FREE(zptr)
 * 
 *     return None             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1464
 * 
 * 
 * def _convolve2d(in1, in2, int flip=1, int mode=2, int boundary=0, fill_value=None):             # <<<<<<<<<<<<<<
 *     """ out = _convolve2d(in1, in2, flip, mode, boundary, fillvalue)
 *     """
 */

static System::Object^ _convolve2d(System::Object^ in1, System::Object^ in2, [InteropServices::Optional]System::Object^ flip, [InteropServices::Optional]System::Object^ mode, [InteropServices::Optional]System::Object^ boundary, [InteropServices::Optional]System::Object^ fill_value) {
  System::Object^ __pyx_v_in1 = nullptr;
  System::Object^ __pyx_v_in2 = nullptr;
  int __pyx_v_flip;
  int __pyx_v_mode;
  int __pyx_v_boundary;
  System::Object^ __pyx_v_fill_value = nullptr;
  int __pyx_v_flag;
  int __pyx_v_ret;
  __pyx_t_5numpy_npy_intp *__pyx_v_aout_dimens;
  __pyx_t_5numpy_npy_intp *__pyx_v_dims;
  char __pyx_v_zeros[32];
  int __pyx_v_n1;
  int __pyx_v_n2;
  int __pyx_v_i;
  int __pyx_v_masked_mode;
  int __pyx_v_typenum;
  NumpyDotNet::ndarray^ __pyx_v_ain1;
  NumpyDotNet::ndarray^ __pyx_v_ain2;
  NumpyDotNet::ndarray^ __pyx_v_aout;
  NumpyDotNet::ndarray^ __pyx_v_afill;
  NumpyDotNet::ndarray^ __pyx_v_newfill;
  System::Object^ __pyx_v_type;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  size_t __pyx_t_9;
  int __pyx_t_10;
  long __pyx_t_11;
  int __pyx_t_12;
  long __pyx_t_13;
  long __pyx_t_14;
  System::Object^ __pyx_t_15 = nullptr;
  int __pyx_t_16;
  __pyx_v_in1 = in1;
  __pyx_v_in2 = in2;
  if (dynamic_cast<System::Reflection::Missing^>(flip) == nullptr) {
    __pyx_v_flip = __site_cvt_cvt_int_1464_0->Target(__site_cvt_cvt_int_1464_0, flip);
  } else {
    __pyx_v_flip = ((int)1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(mode) == nullptr) {
    __pyx_v_mode = __site_cvt_cvt_int_1464_0_1->Target(__site_cvt_cvt_int_1464_0_1, mode);
  } else {
    __pyx_v_mode = ((int)2);
  }
  if (dynamic_cast<System::Reflection::Missing^>(boundary) == nullptr) {
    __pyx_v_boundary = __site_cvt_cvt_int_1464_0_2->Target(__site_cvt_cvt_int_1464_0_2, boundary);
  } else {
    __pyx_v_boundary = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(fill_value) == nullptr) {
    __pyx_v_fill_value = fill_value;
  } else {
    __pyx_v_fill_value = ((System::Object^)nullptr);
  }
  __pyx_v_ain1 = nullptr;
  __pyx_v_ain2 = nullptr;
  __pyx_v_aout = nullptr;
  __pyx_v_afill = nullptr;
  __pyx_v_newfill = nullptr;
  __pyx_v_type = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1468
 *     """
 *     cdef int flag, ret
 *     cdef np.npy_intp *aout_dimens=NULL, *dims=NULL             # <<<<<<<<<<<<<<
 *     cdef char zeros[32] # Zeros
 *     cdef int n1, n2, i, masked_mode, typenum
 */
  __pyx_v_aout_dimens = NULL;
  __pyx_v_dims = NULL;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1474
 *     cdef np.ndarray afill, newfill
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(in1)))             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(in2, type)
 * 
 */
  if (__pyx_v_in1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_in1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(PyArray_TYPE(((NumpyDotNet::ndarray^)__pyx_v_in1))))); 
  __pyx_v_type = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1475
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(in1)))
 *     type = np.NpyArray_FindArrayType_2args(in2, type)             # <<<<<<<<<<<<<<
 * 
 *     typenum = type.num
 */
  if (__pyx_v_type != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_v_type) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(__pyx_v_in2, ((NumpyDotNet::dtype^)__pyx_v_type))); 
  __pyx_v_type = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1477
 *     type = np.NpyArray_FindArrayType_2args(in2, type)
 * 
 *     typenum = type.num             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
  __pyx_t_1 = __site_get_num_1477_18->Target(__site_get_num_1477_18, __pyx_v_type, __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_int_1477_18->Target(__site_cvt_cvt_int_1477_18, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_typenum = __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1479
 *     typenum = type.num
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         ain1 = np.PyArray_FromAny(in1, type, 2, 2, np.NPY_CONTIGUOUS, None)
 *         ain2 = np.PyArray_FromAny(in2, type, 2, 2, np.NPY_CONTIGUOUS, None)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1480
 * 
 *     try:
 *         ain1 = np.PyArray_FromAny(in1, type, 2, 2, np.NPY_CONTIGUOUS, None)             # <<<<<<<<<<<<<<
 *         ain2 = np.PyArray_FromAny(in2, type, 2, 2, np.NPY_CONTIGUOUS, None)
 * 
 */
    __pyx_t_1 = (System::Object^)(long long)(NPY_CONTIGUOUS);
    __pyx_t_3 = PyArray_FromAny(__pyx_v_in1, __pyx_v_type, __pyx_int_2, __pyx_int_2, __pyx_t_1, nullptr); 
    __pyx_t_1 = nullptr;
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ain1 = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1481
 *     try:
 *         ain1 = np.PyArray_FromAny(in1, type, 2, 2, np.NPY_CONTIGUOUS, None)
 *         ain2 = np.PyArray_FromAny(in2, type, 2, 2, np.NPY_CONTIGUOUS, None)             # <<<<<<<<<<<<<<
 * 
 *         if boundary != PAD and boundary != REFLECT and boundary != CIRCULAR:
 */
    __pyx_t_3 = (System::Object^)(long long)(NPY_CONTIGUOUS);
    __pyx_t_1 = PyArray_FromAny(__pyx_v_in2, __pyx_v_type, __pyx_int_2, __pyx_int_2, __pyx_t_3, nullptr); 
    __pyx_t_3 = nullptr;
    if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ain2 = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1483
 *         ain2 = np.PyArray_FromAny(in2, type, 2, 2, np.NPY_CONTIGUOUS, None)
 * 
 *         if boundary != PAD and boundary != REFLECT and boundary != CIRCULAR:             # <<<<<<<<<<<<<<
 *             raise ValueError("Incorrect boundary value.")
 * 
 */
    __pyx_t_1 = __pyx_v_boundary;
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "PAD");
    __pyx_t_4 = __site_op_ne_1483_20->Target(__site_op_ne_1483_20, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_5 = __site_istrue_1483_20->Target(__site_istrue_1483_20, __pyx_t_4);
    __pyx_t_4 = nullptr;
    if (__pyx_t_5) {
      __pyx_t_4 = __pyx_v_boundary;
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "REFLECT");
      __pyx_t_1 = __site_op_ne_1483_40->Target(__site_op_ne_1483_40, __pyx_t_4, __pyx_t_3);
      __pyx_t_4 = nullptr;
      __pyx_t_3 = nullptr;
      __pyx_t_6 = __site_istrue_1483_40->Target(__site_istrue_1483_40, __pyx_t_1);
      __pyx_t_1 = nullptr;
      if (__pyx_t_6) {
        __pyx_t_1 = __pyx_v_boundary;
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "CIRCULAR");
        __pyx_t_4 = __site_op_ne_1483_64->Target(__site_op_ne_1483_64, __pyx_t_1, __pyx_t_3);
        __pyx_t_1 = nullptr;
        __pyx_t_3 = nullptr;
        __pyx_t_7 = __site_istrue_1483_64->Target(__site_istrue_1483_64, __pyx_t_4);
        __pyx_t_4 = nullptr;
        __pyx_t_8 = __pyx_t_7;
      } else {
        __pyx_t_8 = __pyx_t_6;
      }
      __pyx_t_6 = __pyx_t_8;
    } else {
      __pyx_t_6 = __pyx_t_5;
    }
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1484
 * 
 *         if boundary != PAD and boundary != REFLECT and boundary != CIRCULAR:
 *             raise ValueError("Incorrect boundary value.")             # <<<<<<<<<<<<<<
 * 
 *         if boundary == PAD:
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_3 = __site_call1_1484_28->Target(__site_call1_1484_28, __pyx_context, __pyx_t_4, ((System::Object^)"Incorrect boundary value."));
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1486
 *             raise ValueError("Incorrect boundary value.")
 * 
 *         if boundary == PAD:             # <<<<<<<<<<<<<<
 *             if fill_value is None:
 *                 newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 */
    __pyx_t_3 = __pyx_v_boundary;
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "PAD");
    __pyx_t_1 = __site_op_eq_1486_20->Target(__site_op_eq_1486_20, __pyx_t_3, __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_6 = __site_istrue_1486_20->Target(__site_istrue_1486_20, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1487
 * 
 *         if boundary == PAD:
 *             if fill_value is None:             # <<<<<<<<<<<<<<
 *                 newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 *             else:
 */
      __pyx_t_6 = (__pyx_v_fill_value == nullptr);
      if (__pyx_t_6) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1488
 *         if boundary == PAD:
 *             if fill_value is None:
 *                 newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)             # <<<<<<<<<<<<<<
 *             else:
 *                 afill = np.PyArray_FROMANY(fill_value, np.NPY_CDOUBLE, 0, 0, np.NPY_CONTIGUOUS)
 */
        __pyx_t_1 = PyArray_SimpleNewFromData(0, __pyx_v_dims, __pyx_v_typenum, __pyx_v_zeros); 
        if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_newfill = ((NumpyDotNet::ndarray^)__pyx_t_1);
        __pyx_t_1 = nullptr;
        goto __pyx_L7;
      }
      /*else*/ {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1490
 *                 newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 *             else:
 *                 afill = np.PyArray_FROMANY(fill_value, np.NPY_CDOUBLE, 0, 0, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *                 if afill is None:
 *                     return None
 */
        __pyx_t_1 = (System::Object^)(long long)(NPY_CDOUBLE);
        __pyx_t_4 = (System::Object^)(long long)(NPY_CONTIGUOUS);
        __pyx_t_3 = PyArray_FROMANY(__pyx_v_fill_value, __pyx_t_1, __pyx_int_0, __pyx_int_0, __pyx_t_4); 
        __pyx_t_1 = nullptr;
        __pyx_t_4 = nullptr;
        if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_afill = ((NumpyDotNet::ndarray^)__pyx_t_3);
        __pyx_t_3 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1491
 *             else:
 *                 afill = np.PyArray_FROMANY(fill_value, np.NPY_CDOUBLE, 0, 0, np.NPY_CONTIGUOUS)
 *                 if afill is None:             # <<<<<<<<<<<<<<
 *                     return None
 *                 newfill = np.PyArray_Cast(afill, typenum)
 */
        __pyx_t_6 = (((System::Object^)__pyx_v_afill) == nullptr);
        if (__pyx_t_6) {

          /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1492
 *                 afill = np.PyArray_FROMANY(fill_value, np.NPY_CDOUBLE, 0, 0, np.NPY_CONTIGUOUS)
 *                 if afill is None:
 *                     return None             # <<<<<<<<<<<<<<
 *                 newfill = np.PyArray_Cast(afill, typenum)
 * 
 */
          __pyx_r = nullptr;
          goto __pyx_L0;
          goto __pyx_L8;
        }
        __pyx_L8:;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1493
 *                 if afill is None:
 *                     return None
 *                 newfill = np.PyArray_Cast(afill, typenum)             # <<<<<<<<<<<<<<
 * 
 *             if newfill is None:
 */
        __pyx_t_3 = __pyx_v_typenum;
        __pyx_t_4 = PyArray_Cast(((System::Object^)__pyx_v_afill), __pyx_t_3); 
        __pyx_t_3 = nullptr;
        if (__pyx_t_4 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_newfill = ((NumpyDotNet::ndarray^)__pyx_t_4);
        __pyx_t_4 = nullptr;
      }
      __pyx_L7:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1495
 *                 newfill = np.PyArray_Cast(afill, typenum)
 * 
 *             if newfill is None:             # <<<<<<<<<<<<<<
 *                 return None
 *         else:
 */
      __pyx_t_6 = (((System::Object^)__pyx_v_newfill) == nullptr);
      if (__pyx_t_6) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1496
 * 
 *             if newfill is None:
 *                 return None             # <<<<<<<<<<<<<<
 *         else:
 *             newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 */
        __pyx_r = nullptr;
        goto __pyx_L0;
        goto __pyx_L9;
      }
      __pyx_L9:;
      goto __pyx_L6;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1498
 *                 return None
 *         else:
 *             newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)             # <<<<<<<<<<<<<<
 *             if newfill is None:
 *                 return None
 */
      __pyx_t_4 = PyArray_SimpleNewFromData(0, __pyx_v_dims, __pyx_v_typenum, __pyx_v_zeros); 
      if (__pyx_t_4 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_newfill = ((NumpyDotNet::ndarray^)__pyx_t_4);
      __pyx_t_4 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1499
 *         else:
 *             newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 *             if newfill is None:             # <<<<<<<<<<<<<<
 *                 return None
 * 
 */
      __pyx_t_6 = (((System::Object^)__pyx_v_newfill) == nullptr);
      if (__pyx_t_6) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1500
 *             newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 *             if newfill is None:
 *                 return None             # <<<<<<<<<<<<<<
 * 
 *         n1 = np.PyArray_SIZE(ain1)
 */
        __pyx_r = nullptr;
        goto __pyx_L0;
        goto __pyx_L10;
      }
      __pyx_L10:;
    }
    __pyx_L6:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1502
 *                 return None
 * 
 *         n1 = np.PyArray_SIZE(ain1)             # <<<<<<<<<<<<<<
 *         n2 = np.PyArray_SIZE(ain2)
 * 
 */
    __pyx_v_n1 = PyArray_SIZE(__pyx_v_ain1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1503
 * 
 *         n1 = np.PyArray_SIZE(ain1)
 *         n2 = np.PyArray_SIZE(ain2)             # <<<<<<<<<<<<<<
 * 
 *         aout_dimens = <np.npy_intp *>malloc(np.PyArray_NDIM(ain1)*sizeof(np.npy_intp))
 */
    __pyx_v_n2 = PyArray_SIZE(__pyx_v_ain2);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1505
 *         n2 = np.PyArray_SIZE(ain2)
 * 
 *         aout_dimens = <np.npy_intp *>malloc(np.PyArray_NDIM(ain1)*sizeof(np.npy_intp))             # <<<<<<<<<<<<<<
 *         masked_mode = mode & OUTSIZE_MASK
 * 
 */
    __pyx_t_4 = PyArray_NDIM(__pyx_v_ain1); 
    __pyx_t_3 = (sizeof(__pyx_t_5numpy_npy_intp));
    __pyx_t_1 = __site_op_mul_1505_65->Target(__site_op_mul_1505_65, __pyx_t_4, __pyx_t_3);
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_9 = __site_cvt_cvt_size_t_1505_65->Target(__site_cvt_cvt_size_t_1505_65, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_aout_dimens = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_t_9));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1506
 * 
 *         aout_dimens = <np.npy_intp *>malloc(np.PyArray_NDIM(ain1)*sizeof(np.npy_intp))
 *         masked_mode = mode & OUTSIZE_MASK             # <<<<<<<<<<<<<<
 * 
 *         if masked_mode == VALID:
 */
    __pyx_t_1 = __pyx_v_mode;
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "OUTSIZE_MASK");
    __pyx_t_4 = __site_op_and_1506_27->Target(__site_op_and_1506_27, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_10 = __site_cvt_cvt_int_1506_27->Target(__site_cvt_cvt_int_1506_27, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_v_masked_mode = __pyx_t_10;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1508
 *         masked_mode = mode & OUTSIZE_MASK
 * 
 *         if masked_mode == VALID:             # <<<<<<<<<<<<<<
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
 */
    __pyx_t_4 = __pyx_v_masked_mode;
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "VALID");
    __pyx_t_1 = __site_op_eq_1508_23->Target(__site_op_eq_1508_23, __pyx_t_4, __pyx_t_3);
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_6 = __site_istrue_1508_23->Target(__site_istrue_1508_23, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1509
 * 
 *         if masked_mode == VALID:
 *             for i in range(np.PyArray_NDIM(ain1)):             # <<<<<<<<<<<<<<
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
 *                 if aout_dimens[i] < 0:
 */
      __pyx_t_1 = PyArray_NDIM(__pyx_v_ain1); 
      __pyx_t_11 = __site_cvt_cvt_long_1509_42->Target(__site_cvt_cvt_long_1509_42, __pyx_t_1);
      __pyx_t_1 = nullptr;
      for (__pyx_t_12 = 0; __pyx_t_12 < __pyx_t_11; __pyx_t_12+=1) {
        __pyx_v_i = __pyx_t_12;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1510
 *         if masked_mode == VALID:
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1             # <<<<<<<<<<<<<<
 *                 if aout_dimens[i] < 0:
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
 */
        (__pyx_v_aout_dimens[__pyx_v_i]) = (((PyArray_DIMS(__pyx_v_ain1)[__pyx_v_i]) - (PyArray_DIMS(__pyx_v_ain2)[__pyx_v_i])) + 1);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1511
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
 *                 if aout_dimens[i] < 0:             # <<<<<<<<<<<<<<
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
 *         elif masked_mode == SAME:
 */
        __pyx_t_6 = ((__pyx_v_aout_dimens[__pyx_v_i]) < 0);
        if (__pyx_t_6) {

          /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1512
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
 *                 if aout_dimens[i] < 0:
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")             # <<<<<<<<<<<<<<
 *         elif masked_mode == SAME:
 *             for i in range(np.PyArray_NDIM(ain1)):
 */
          __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
          __pyx_t_3 = __site_call1_1512_36->Target(__site_call1_1512_36, __pyx_context, __pyx_t_1, ((System::Object^)"no part of the output is valid, use option 1 (same) or 2 (full) for third argument"));
          __pyx_t_1 = nullptr;
          throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
          __pyx_t_3 = nullptr;
          goto __pyx_L14;
        }
        __pyx_L14:;
      }
      goto __pyx_L11;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1513
 *                 if aout_dimens[i] < 0:
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
 *         elif masked_mode == SAME:             # <<<<<<<<<<<<<<
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
 */
    __pyx_t_3 = __pyx_v_masked_mode;
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "SAME");
    __pyx_t_4 = __site_op_eq_1513_25->Target(__site_op_eq_1513_25, __pyx_t_3, __pyx_t_1);
    __pyx_t_3 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_6 = __site_istrue_1513_25->Target(__site_istrue_1513_25, __pyx_t_4);
    __pyx_t_4 = nullptr;
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1514
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
 *         elif masked_mode == SAME:
 *             for i in range(np.PyArray_NDIM(ain1)):             # <<<<<<<<<<<<<<
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
 *         elif masked_mode == FULL:
 */
      __pyx_t_4 = PyArray_NDIM(__pyx_v_ain1); 
      __pyx_t_13 = __site_cvt_cvt_long_1514_42->Target(__site_cvt_cvt_long_1514_42, __pyx_t_4);
      __pyx_t_4 = nullptr;
      for (__pyx_t_12 = 0; __pyx_t_12 < __pyx_t_13; __pyx_t_12+=1) {
        __pyx_v_i = __pyx_t_12;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1515
 *         elif masked_mode == SAME:
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]             # <<<<<<<<<<<<<<
 *         elif masked_mode == FULL:
 *             for i in range(np.PyArray_NDIM(ain1)):
 */
        (__pyx_v_aout_dimens[__pyx_v_i]) = (PyArray_DIMS(__pyx_v_ain1)[__pyx_v_i]);
      }
      goto __pyx_L11;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1516
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
 *         elif masked_mode == FULL:             # <<<<<<<<<<<<<<
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] + np.PyArray_DIMS(ain2)[i] - 1
 */
    __pyx_t_4 = __pyx_v_masked_mode;
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "FULL");
    __pyx_t_3 = __site_op_eq_1516_25->Target(__site_op_eq_1516_25, __pyx_t_4, __pyx_t_1);
    __pyx_t_4 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_6 = __site_istrue_1516_25->Target(__site_istrue_1516_25, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1517
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
 *         elif masked_mode == FULL:
 *             for i in range(np.PyArray_NDIM(ain1)):             # <<<<<<<<<<<<<<
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] + np.PyArray_DIMS(ain2)[i] - 1
 *         else:
 */
      __pyx_t_3 = PyArray_NDIM(__pyx_v_ain1); 
      __pyx_t_14 = __site_cvt_cvt_long_1517_42->Target(__site_cvt_cvt_long_1517_42, __pyx_t_3);
      __pyx_t_3 = nullptr;
      for (__pyx_t_12 = 0; __pyx_t_12 < __pyx_t_14; __pyx_t_12+=1) {
        __pyx_v_i = __pyx_t_12;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1518
 *         elif masked_mode == FULL:
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] + np.PyArray_DIMS(ain2)[i] - 1             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("mode must be 0 (valid), 1 (same), or 2 (full)")
 */
        (__pyx_v_aout_dimens[__pyx_v_i]) = (((PyArray_DIMS(__pyx_v_ain1)[__pyx_v_i]) + (PyArray_DIMS(__pyx_v_ain2)[__pyx_v_i])) - 1);
      }
      goto __pyx_L11;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1520
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] + np.PyArray_DIMS(ain2)[i] - 1
 *         else:
 *             raise ValueError("mode must be 0 (valid), 1 (same), or 2 (full)")             # <<<<<<<<<<<<<<
 * 
 *         aout = np.PyArray_SimpleNew(np.PyArray_NDIM(ain1), aout_dimens, typenum)
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_1520_28->Target(__site_call1_1520_28, __pyx_context, __pyx_t_3, ((System::Object^)"mode must be 0 (valid), 1 (same), or 2 (full)"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
    }
    __pyx_L11:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1522
 *             raise ValueError("mode must be 0 (valid), 1 (same), or 2 (full)")
 * 
 *         aout = np.PyArray_SimpleNew(np.PyArray_NDIM(ain1), aout_dimens, typenum)             # <<<<<<<<<<<<<<
 *         if aout is None:
 *             return None
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ain1); 
    __pyx_t_12 = __site_cvt_cvt_int_1522_51->Target(__site_cvt_cvt_int_1522_51, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = PyArray_SimpleNew(__pyx_t_12, __pyx_v_aout_dimens, __pyx_v_typenum); 
    if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_aout = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1523
 * 
 *         aout = np.PyArray_SimpleNew(np.PyArray_NDIM(ain1), aout_dimens, typenum)
 *         if aout is None:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_6 = (((System::Object^)__pyx_v_aout) == nullptr);
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1524
 *         aout = np.PyArray_SimpleNew(np.PyArray_NDIM(ain1), aout_dimens, typenum)
 *         if aout is None:
 *             return None             # <<<<<<<<<<<<<<
 * 
 *         flag = mode + boundary + (typenum << TYPE_SHIFT) + (flip != 0) * FLIP_MASK
 */
      __pyx_r = nullptr;
      goto __pyx_L0;
      goto __pyx_L19;
    }
    __pyx_L19:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1526
 *             return None
 * 
 *         flag = mode + boundary + (typenum << TYPE_SHIFT) + (flip != 0) * FLIP_MASK             # <<<<<<<<<<<<<<
 * 
 *         ret = pylab_convolve_2d(<char *>np.PyArray_DATA(ain1),     # Input data Ns[0] x Ns[1]
 */
    __pyx_t_1 = (__pyx_v_mode + __pyx_v_boundary);
    __pyx_t_3 = __pyx_v_typenum;
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "TYPE_SHIFT");
    __pyx_t_15 = __site_op_lshift_1526_42->Target(__site_op_lshift_1526_42, __pyx_t_3, __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_op_add_1526_31->Target(__site_op_add_1526_31, __pyx_t_1, __pyx_t_15);
    __pyx_t_1 = nullptr;
    __pyx_t_15 = nullptr;
    __pyx_t_15 = (__pyx_v_flip != 0);
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "FLIP_MASK");
    __pyx_t_3 = __site_op_mul_1526_71->Target(__site_op_mul_1526_71, __pyx_t_15, __pyx_t_1);
    __pyx_t_15 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_op_add_1526_57->Target(__site_op_add_1526_57, __pyx_t_4, __pyx_t_3);
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_16 = __site_cvt_cvt_int_1526_57->Target(__site_cvt_cvt_int_1526_57, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_flag = __pyx_t_16;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1537
 *                                 np.PyArray_DIMS(ain1),     # Size of image Ns[0] x Ns[1]
 *                                 flag,                      # convolution parameters
 *                                 <char *>np.PyArray_DATA(newfill))  # fill value             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_v_ret = pylab_convolve_2d(((char *)PyArray_DATA(__pyx_v_ain1)), PyArray_STRIDES(__pyx_v_ain1), ((char *)PyArray_DATA(__pyx_v_aout)), PyArray_STRIDES(__pyx_v_aout), ((char *)PyArray_DATA(__pyx_v_ain2)), PyArray_STRIDES(__pyx_v_ain2), PyArray_DIMS(__pyx_v_ain2), PyArray_DIMS(__pyx_v_ain1), __pyx_v_flag, ((char *)PyArray_DATA(__pyx_v_newfill)));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1540
 * 
 * 
 *         if ret == 0:             # <<<<<<<<<<<<<<
 *             return aout
 *         elif ret in [-5, -4]:
 */
    __pyx_t_6 = (__pyx_v_ret == 0);
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1541
 * 
 *         if ret == 0:
 *             return aout             # <<<<<<<<<<<<<<
 *         elif ret in [-5, -4]:
 *             raise ValueError("convolve2d not available for this type.")
 */
      __pyx_r = ((System::Object^)__pyx_v_aout);
      goto __pyx_L0;
      goto __pyx_L20;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1542
 *         if ret == 0:
 *             return aout
 *         elif ret in [-5, -4]:             # <<<<<<<<<<<<<<
 *             raise ValueError("convolve2d not available for this type.")
 *         elif ret == -3:
 */
    __pyx_t_1 = __pyx_v_ret;
    __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_int_neg_5, __pyx_int_neg_4});
    __pyx_t_6 = ((__site_contains_1542_17->Target(__site_contains_1542_17, __pyx_t_1, ((System::Object^)__pyx_t_3))));
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1543
 *             return aout
 *         elif ret in [-5, -4]:
 *             raise ValueError("convolve2d not available for this type.")             # <<<<<<<<<<<<<<
 *         elif ret == -3:
 *             raise MemoryError
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_1543_28->Target(__site_call1_1543_28, __pyx_context, __pyx_t_3, ((System::Object^)"convolve2d not available for this type."));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L20;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1544
 *         elif ret in [-5, -4]:
 *             raise ValueError("convolve2d not available for this type.")
 *         elif ret == -3:             # <<<<<<<<<<<<<<
 *             raise MemoryError
 *         elif ret == -2:
 */
    __pyx_t_6 = (__pyx_v_ret == -3);
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1545
 *             raise ValueError("convolve2d not available for this type.")
 *         elif ret == -3:
 *             raise MemoryError             # <<<<<<<<<<<<<<
 *         elif ret == -2:
 *             raise ValueError("Invalid boundary type.")
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L20;
    }

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1546
 *         elif ret == -3:
 *             raise MemoryError
 *         elif ret == -2:             # <<<<<<<<<<<<<<
 *             raise ValueError("Invalid boundary type.")
 *         elif -1:
 */
    __pyx_t_6 = (__pyx_v_ret == -2);
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1547
 *             raise MemoryError
 *         elif ret == -2:
 *             raise ValueError("Invalid boundary type.")             # <<<<<<<<<<<<<<
 *         elif -1:
 *             raise ValueError("Invalid output flag.")
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_3 = __site_call1_1547_28->Target(__site_call1_1547_28, __pyx_context, __pyx_t_1, ((System::Object^)"Invalid boundary type."));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L20;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1549
 *             raise ValueError("Invalid boundary type.")
 *         elif -1:
 *             raise ValueError("Invalid output flag.")             # <<<<<<<<<<<<<<
 * 
 *     finally:
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_1549_28->Target(__site_call1_1549_28, __pyx_context, __pyx_t_3, ((System::Object^)"Invalid output flag."));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
    }
    __pyx_L20:;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1552
 * 
 *     finally:
 *         free(aout_dimens)             # <<<<<<<<<<<<<<
 * 
 *     return None
 */
  finally {
    free(__pyx_v_aout_dimens);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1554
 *         free(aout_dimens)
 * 
 *     return None             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1557
 * 
 * 
 * def _remez(int numtaps, object bands, object des, object weight, int type=BANDPASS,             # <<<<<<<<<<<<<<
 *            double Hz=1.0, int maxiter=25, int grid_density=16):
 *     """
 */

static System::Object^ _remez(System::Object^ numtaps, System::Object^ bands, System::Object^ des, System::Object^ weight, [InteropServices::Optional]System::Object^ type, [InteropServices::Optional]System::Object^ Hz, [InteropServices::Optional]System::Object^ maxiter, [InteropServices::Optional]System::Object^ grid_density) {
  int __pyx_v_numtaps;
  System::Object^ __pyx_v_bands = nullptr;
  System::Object^ __pyx_v_des = nullptr;
  System::Object^ __pyx_v_weight = nullptr;
  int __pyx_v_type;
  double __pyx_v_Hz;
  int __pyx_v_maxiter;
  int __pyx_v_grid_density;
  int __pyx_v_k;
  int __pyx_v_numbands;
  int __pyx_v_err;
  NumpyDotNet::ndarray^ __pyx_v_a_bands;
  NumpyDotNet::ndarray^ __pyx_v_a_des;
  NumpyDotNet::ndarray^ __pyx_v_a_weight;
  NumpyDotNet::ndarray^ __pyx_v_h;
  __pyx_t_5numpy_npy_intp __pyx_v_ret_dimens;
  double __pyx_v_oldvalue;
  double *__pyx_v_dptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  long __pyx_t_9;
  int __pyx_t_10;
  __pyx_v_numtaps = __site_cvt_cvt_int_1557_0->Target(__site_cvt_cvt_int_1557_0, numtaps);
  __pyx_v_bands = bands;
  __pyx_v_des = des;
  __pyx_v_weight = weight;
  if (dynamic_cast<System::Reflection::Missing^>(type) == nullptr) {
    __pyx_v_type = __site_cvt_cvt_int_1557_0_1->Target(__site_cvt_cvt_int_1557_0_1, type);
  } else {
    __pyx_v_type = __pyx_k_1;
  }
  if (dynamic_cast<System::Reflection::Missing^>(Hz) == nullptr) {
    __pyx_v_Hz = __site_cvt_cvt_double_1557_0->Target(__site_cvt_cvt_double_1557_0, Hz);
  } else {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1558
 * 
 * def _remez(int numtaps, object bands, object des, object weight, int type=BANDPASS,
 *            double Hz=1.0, int maxiter=25, int grid_density=16):             # <<<<<<<<<<<<<<
 *     """
 *         h = _remez(numtaps, bands, des, weight, type, Hz, maxiter, grid_density)
 */
    __pyx_v_Hz = ((double)1.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(maxiter) == nullptr) {
    __pyx_v_maxiter = __site_cvt_cvt_int_1557_0_2->Target(__site_cvt_cvt_int_1557_0_2, maxiter);
  } else {
    __pyx_v_maxiter = ((int)25);
  }
  if (dynamic_cast<System::Reflection::Missing^>(grid_density) == nullptr) {
    __pyx_v_grid_density = __site_cvt_cvt_int_1557_0_3->Target(__site_cvt_cvt_int_1557_0_3, grid_density);
  } else {
    __pyx_v_grid_density = ((int)16);
  }
  __pyx_v_a_bands = nullptr;
  __pyx_v_a_des = nullptr;
  __pyx_v_a_weight = nullptr;
  __pyx_v_h = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1573
 *     cdef double oldvalue, *dptr
 * 
 *     if type not in [BANDPASS, DIFFERENTIATOR, HILBERT]:             # <<<<<<<<<<<<<<
 *         raise ValueError("The type must be BANDPASS, DIFFERENTIATOR, or HILBERT.")
 * 
 */
  __pyx_t_1 = __pyx_v_type;
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "BANDPASS");
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "DIFFERENTIATOR");
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "HILBERT");
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3, __pyx_t_4});
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_6 = (!(__site_contains_1573_12->Target(__site_contains_1573_12, __pyx_t_1, ((System::Object^)__pyx_t_5))));
  __pyx_t_1 = nullptr;
  __pyx_t_5 = nullptr;
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1574
 * 
 *     if type not in [BANDPASS, DIFFERENTIATOR, HILBERT]:
 *         raise ValueError("The type must be BANDPASS, DIFFERENTIATOR, or HILBERT.")             # <<<<<<<<<<<<<<
 * 
 *     if numtaps < 2:
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_1574_24->Target(__site_call1_1574_24, __pyx_context, __pyx_t_5, ((System::Object^)"The type must be BANDPASS, DIFFERENTIATOR, or HILBERT."));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1576
 *         raise ValueError("The type must be BANDPASS, DIFFERENTIATOR, or HILBERT.")
 * 
 *     if numtaps < 2:             # <<<<<<<<<<<<<<
 *         raise ValueError("The number of taps must be greater than 1.")
 * 
 */
  __pyx_t_6 = (__pyx_v_numtaps < 2);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1577
 * 
 *     if numtaps < 2:
 *         raise ValueError("The number of taps must be greater than 1.")             # <<<<<<<<<<<<<<
 * 
 *     a_bands = np.PyArray_FROMANY(bands, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_1577_24->Target(__site_call1_1577_24, __pyx_context, __pyx_t_1, ((System::Object^)"The number of taps must be greater than 1."));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1579
 *         raise ValueError("The number of taps must be greater than 1.")
 * 
 *     a_bands = np.PyArray_FROMANY(bands, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *     a_des = np.PyArray_FROMANY(des, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 *     a_weight = np.PyArray_FROMANY(weight, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 */
  __pyx_t_5 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_1 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_4 = PyArray_FROMANY(__pyx_v_bands, __pyx_t_5, __pyx_int_1, __pyx_int_1, __pyx_t_1); 
  __pyx_t_5 = nullptr;
  __pyx_t_1 = nullptr;
  if (__pyx_t_4 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_bands = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1580
 * 
 *     a_bands = np.PyArray_FROMANY(bands, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 *     a_des = np.PyArray_FROMANY(des, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *     a_weight = np.PyArray_FROMANY(weight, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 * 
 */
  __pyx_t_4 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_1 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_5 = PyArray_FROMANY(__pyx_v_des, __pyx_t_4, __pyx_int_1, __pyx_int_1, __pyx_t_1); 
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_des = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1581
 *     a_bands = np.PyArray_FROMANY(bands, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 *     a_des = np.PyArray_FROMANY(des, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 *     a_weight = np.PyArray_FROMANY(weight, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 * 
 *     numbands = np.PyArray_DIMS(a_des)[0]
 */
  __pyx_t_5 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_1 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_4 = PyArray_FROMANY(__pyx_v_weight, __pyx_t_5, __pyx_int_1, __pyx_int_1, __pyx_t_1); 
  __pyx_t_5 = nullptr;
  __pyx_t_1 = nullptr;
  if (__pyx_t_4 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_weight = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1583
 *     a_weight = np.PyArray_FROMANY(weight, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 * 
 *     numbands = np.PyArray_DIMS(a_des)[0]             # <<<<<<<<<<<<<<
 *     if (np.PyArray_DIMS(a_bands)[0] != 2*numbands) or (np.PyArray_DIMS(a_weight)[0] != numbands):
 *         raise ValueError("The inputs desired and weight must have same length.\n  The input bands must have twice this length.")
 */
  __pyx_v_numbands = (PyArray_DIMS(__pyx_v_a_des)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1584
 * 
 *     numbands = np.PyArray_DIMS(a_des)[0]
 *     if (np.PyArray_DIMS(a_bands)[0] != 2*numbands) or (np.PyArray_DIMS(a_weight)[0] != numbands):             # <<<<<<<<<<<<<<
 *         raise ValueError("The inputs desired and weight must have same length.\n  The input bands must have twice this length.")
 * 
 */
  __pyx_t_6 = ((PyArray_DIMS(__pyx_v_a_bands)[0]) != (2 * __pyx_v_numbands));
  if (!__pyx_t_6) {
    __pyx_t_7 = ((PyArray_DIMS(__pyx_v_a_weight)[0]) != __pyx_v_numbands);
    __pyx_t_8 = __pyx_t_7;
  } else {
    __pyx_t_8 = __pyx_t_6;
  }
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1585
 *     numbands = np.PyArray_DIMS(a_des)[0]
 *     if (np.PyArray_DIMS(a_bands)[0] != 2*numbands) or (np.PyArray_DIMS(a_weight)[0] != numbands):
 *         raise ValueError("The inputs desired and weight must have same length.\n  The input bands must have twice this length.")             # <<<<<<<<<<<<<<
 * 
 *     # Check the bands input to see if it is monotonic, divide by
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_1585_24->Target(__site_call1_1585_24, __pyx_context, __pyx_t_4, ((System::Object^)"The inputs desired and weight must have same length.\n  The input bands must have twice this length."));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1590
 *     # Hz to take from range 0 to 0.5 and check to see if in that range.
 * 
 *     dptr = <double *>np.PyArray_DATA(a_bands)             # <<<<<<<<<<<<<<
 *     oldvalue = 0
 *     for k in range(2*numbands):
 */
  __pyx_v_dptr = ((double *)PyArray_DATA(__pyx_v_a_bands));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1591
 * 
 *     dptr = <double *>np.PyArray_DATA(a_bands)
 *     oldvalue = 0             # <<<<<<<<<<<<<<
 *     for k in range(2*numbands):
 *         if dptr[0] < oldvalue:
 */
  __pyx_v_oldvalue = 0.0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1592
 *     dptr = <double *>np.PyArray_DATA(a_bands)
 *     oldvalue = 0
 *     for k in range(2*numbands):             # <<<<<<<<<<<<<<
 *         if dptr[0] < oldvalue:
 *             raise ValueError("Bands must be monotonic starting at zero.")
 */
  __pyx_t_9 = (2 * __pyx_v_numbands);
  for (__pyx_t_10 = 0; __pyx_t_10 < __pyx_t_9; __pyx_t_10+=1) {
    __pyx_v_k = __pyx_t_10;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1593
 *     oldvalue = 0
 *     for k in range(2*numbands):
 *         if dptr[0] < oldvalue:             # <<<<<<<<<<<<<<
 *             raise ValueError("Bands must be monotonic starting at zero.")
 *         if (dptr[0] * 2.0) > Hz:
 */
    __pyx_t_8 = ((__pyx_v_dptr[0]) < __pyx_v_oldvalue);
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1594
 *     for k in range(2*numbands):
 *         if dptr[0] < oldvalue:
 *             raise ValueError("Bands must be monotonic starting at zero.")             # <<<<<<<<<<<<<<
 *         if (dptr[0] * 2.0) > Hz:
 *             raise ValueError("Band edges should be less than 1/2 the sampling frequency")
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __site_call1_1594_28->Target(__site_call1_1594_28, __pyx_context, __pyx_t_1, ((System::Object^)"Bands must be monotonic starting at zero."));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L10;
    }
    __pyx_L10:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1595
 *         if dptr[0] < oldvalue:
 *             raise ValueError("Bands must be monotonic starting at zero.")
 *         if (dptr[0] * 2.0) > Hz:             # <<<<<<<<<<<<<<
 *             raise ValueError("Band edges should be less than 1/2 the sampling frequency")
 * 
 */
    __pyx_t_8 = (((__pyx_v_dptr[0]) * 2.0) > __pyx_v_Hz);
    if (__pyx_t_8) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1596
 *             raise ValueError("Bands must be monotonic starting at zero.")
 *         if (dptr[0] * 2.0) > Hz:
 *             raise ValueError("Band edges should be less than 1/2 the sampling frequency")             # <<<<<<<<<<<<<<
 * 
 *         oldvalue = dptr[0]
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_1596_28->Target(__site_call1_1596_28, __pyx_context, __pyx_t_4, ((System::Object^)"Band edges should be less than 1/2 the sampling frequency"));
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L11;
    }
    __pyx_L11:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1598
 *             raise ValueError("Band edges should be less than 1/2 the sampling frequency")
 * 
 *         oldvalue = dptr[0]             # <<<<<<<<<<<<<<
 *         dptr[0] = oldvalue / Hz # Change so that sampling frequency is 1.0
 *         dptr += 1
 */
    __pyx_v_oldvalue = (__pyx_v_dptr[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1599
 * 
 *         oldvalue = dptr[0]
 *         dptr[0] = oldvalue / Hz # Change so that sampling frequency is 1.0             # <<<<<<<<<<<<<<
 *         dptr += 1
 * 
 */
    if (unlikely(__pyx_v_Hz == 0)) {
      throw PythonOps::ZeroDivisionError("float division");
    }
    (__pyx_v_dptr[0]) = (__pyx_v_oldvalue / __pyx_v_Hz);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1600
 *         oldvalue = dptr[0]
 *         dptr[0] = oldvalue / Hz # Change so that sampling frequency is 1.0
 *         dptr += 1             # <<<<<<<<<<<<<<
 * 
 *     ret_dimens = numtaps
 */
    __pyx_v_dptr += 1;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1602
 *         dptr += 1
 * 
 *     ret_dimens = numtaps             # <<<<<<<<<<<<<<
 *     h = np.PyArray_SimpleNew(1, &ret_dimens, np.NPY_DOUBLE)
 * 
 */
  __pyx_v_ret_dimens = __pyx_v_numtaps;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1603
 * 
 *     ret_dimens = numtaps
 *     h = np.PyArray_SimpleNew(1, &ret_dimens, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 * 
 *     err = pre_remez(<double *>np.PyArray_DATA(h), numtaps, numbands,
 */
  __pyx_t_1 = PyArray_SimpleNew(1, (&__pyx_v_ret_dimens), NPY_DOUBLE); 
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_h = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1607
 *     err = pre_remez(<double *>np.PyArray_DATA(h), numtaps, numbands,
 *                     <double *>np.PyArray_DATA(a_bands), <double *>np.PyArray_DATA(a_des),
 *                     <double *>np.PyArray_DATA(a_weight), type, maxiter, grid_density)             # <<<<<<<<<<<<<<
 *     if err < 0:
 *         if err == -1:
 */
  __pyx_v_err = pre_remez(((double *)PyArray_DATA(__pyx_v_h)), __pyx_v_numtaps, __pyx_v_numbands, ((double *)PyArray_DATA(__pyx_v_a_bands)), ((double *)PyArray_DATA(__pyx_v_a_des)), ((double *)PyArray_DATA(__pyx_v_a_weight)), __pyx_v_type, __pyx_v_maxiter, __pyx_v_grid_density);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1608
 *                     <double *>np.PyArray_DATA(a_bands), <double *>np.PyArray_DATA(a_des),
 *                     <double *>np.PyArray_DATA(a_weight), type, maxiter, grid_density)
 *     if err < 0:             # <<<<<<<<<<<<<<
 *         if err == -1:
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)
 */
  __pyx_t_8 = (__pyx_v_err < 0);
  if (__pyx_t_8) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1609
 *                     <double *>np.PyArray_DATA(a_weight), type, maxiter, grid_density)
 *     if err < 0:
 *         if err == -1:             # <<<<<<<<<<<<<<
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)
 *         elif err == -2:
 */
    switch (__pyx_v_err) {
      case -1:

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1610
 *     if err < 0:
 *         if err == -1:
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)             # <<<<<<<<<<<<<<
 *         elif err == -2:
 *             raise MemoryError
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __pyx_v_maxiter;
      __pyx_t_5 = __site_op_mod_1610_108->Target(__site_op_mod_1610_108, ((System::Object^)"Failure to converge after %d iterations.\n      Design may still be correct."), __pyx_t_4);
      __pyx_t_4 = nullptr;
      __pyx_t_4 = __site_call1_1610_28->Target(__site_call1_1610_28, __pyx_context, __pyx_t_1, ((System::Object^)__pyx_t_5));
      __pyx_t_1 = nullptr;
      __pyx_t_5 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      break;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1611
 *         if err == -1:
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)
 *         elif err == -2:             # <<<<<<<<<<<<<<
 *             raise MemoryError
 * 
 */
      case -2:

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1612
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)
 *         elif err == -2:
 *             raise MemoryError             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(h)
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      break;
    }
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1614
 *             raise MemoryError
 * 
 *     return np.PyArray_Return(h)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = PyArray_Return(((System::Object^)__pyx_v_h)); 
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1617
 * 
 * 
 * def _medfilt2d(image, size=None):             # <<<<<<<<<<<<<<
 *     """ filt = _median2d(data, size)
 *     """
 */

static System::Object^ _medfilt2d(System::Object^ image, [InteropServices::Optional]System::Object^ size) {
  System::Object^ __pyx_v_image = nullptr;
  System::Object^ __pyx_v_size = nullptr;
  int __pyx_v_typenum;
  NumpyDotNet::ndarray^ __pyx_v_a_image;
  NumpyDotNet::ndarray^ __pyx_v_a_size;
  NumpyDotNet::ndarray^ __pyx_v_a_out;
  __pyx_t_5numpy_npy_intp *__pyx_v_Nwin;
  System::Object^ __pyx_r = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_1[2];
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  __pyx_v_image = image;
  if (dynamic_cast<System::Reflection::Missing^>(size) == nullptr) {
    __pyx_v_size = size;
  } else {
    __pyx_v_size = ((System::Object^)nullptr);
  }
  __pyx_v_a_image = nullptr;
  __pyx_v_a_size = nullptr;
  __pyx_v_a_out = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1622
 *     cdef int typenum
 *     cdef np.ndarray a_image, a_size, a_out
 *     cdef np.npy_intp *Nwin = [3,3]             # <<<<<<<<<<<<<<
 * 
 *     typenum = np.PyArray_TYPE(image)
 */
  __pyx_t_1[0] = 3;
  __pyx_t_1[1] = 3;
  __pyx_v_Nwin = __pyx_t_1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1624
 *     cdef np.npy_intp *Nwin = [3,3]
 * 
 *     typenum = np.PyArray_TYPE(image)             # <<<<<<<<<<<<<<
 *     a_image = np.PyArray_FROMANY(image, typenum, 2, 2, np.NPY_CONTIGUOUS)
 * 
 */
  if (__pyx_v_image != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_image) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_typenum = PyArray_TYPE(((NumpyDotNet::ndarray^)__pyx_v_image));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1625
 * 
 *     typenum = np.PyArray_TYPE(image)
 *     a_image = np.PyArray_FROMANY(image, typenum, 2, 2, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 * 
 *     if size is not None:
 */
  __pyx_t_2 = __pyx_v_typenum;
  __pyx_t_3 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_4 = PyArray_FROMANY(__pyx_v_image, __pyx_t_2, __pyx_int_2, __pyx_int_2, __pyx_t_3); 
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  if (__pyx_t_4 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_image = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1627
 *     a_image = np.PyArray_FROMANY(image, typenum, 2, 2, np.NPY_CONTIGUOUS)
 * 
 *     if size is not None:             # <<<<<<<<<<<<<<
 *         a_size = np.PyArray_FROMANY(size, np.NPY_INTP, 1, 1, np.NPY_CONTIGUOUS)
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):
 */
  __pyx_t_5 = (__pyx_v_size != nullptr);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1628
 * 
 *     if size is not None:
 *         a_size = np.PyArray_FROMANY(size, np.NPY_INTP, 1, 1, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):
 *             raise ValueError("Size must be a length two sequence")
 */
    __pyx_t_4 = (System::Object^)(long long)(NPY_INTP);
    __pyx_t_3 = (System::Object^)(long long)(NPY_CONTIGUOUS);
    __pyx_t_2 = PyArray_FROMANY(__pyx_v_size, __pyx_t_4, __pyx_int_1, __pyx_int_1, __pyx_t_3); 
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_a_size = ((NumpyDotNet::ndarray^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1629
 *     if size is not None:
 *         a_size = np.PyArray_FROMANY(size, np.NPY_INTP, 1, 1, np.NPY_CONTIGUOUS)
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):             # <<<<<<<<<<<<<<
 *             raise ValueError("Size must be a length two sequence")
 *         Nwin[0] = (<np.npy_intp *>np.PyArray_DATA(a_size))[0]
 */
    __pyx_t_2 = PyArray_NDIM(__pyx_v_a_size); 
    __pyx_t_3 = __site_op_ne_1629_36->Target(__site_op_ne_1629_36, __pyx_t_2, __pyx_int_1);
    __pyx_t_2 = nullptr;
    __pyx_t_5 = __site_istrue_1629_36->Target(__site_istrue_1629_36, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (!__pyx_t_5) {
      __pyx_t_6 = ((PyArray_DIMS(__pyx_v_a_size)[0]) < 2);
      __pyx_t_7 = __pyx_t_6;
    } else {
      __pyx_t_7 = __pyx_t_5;
    }
    if (__pyx_t_7) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1630
 *         a_size = np.PyArray_FROMANY(size, np.NPY_INTP, 1, 1, np.NPY_CONTIGUOUS)
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):
 *             raise ValueError("Size must be a length two sequence")             # <<<<<<<<<<<<<<
 *         Nwin[0] = (<np.npy_intp *>np.PyArray_DATA(a_size))[0]
 *         Nwin[1] = (<np.npy_intp *>np.PyArray_DATA(a_size))[1]
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_2 = __site_call1_1630_28->Target(__site_call1_1630_28, __pyx_context, __pyx_t_3, ((System::Object^)"Size must be a length two sequence"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1631
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):
 *             raise ValueError("Size must be a length two sequence")
 *         Nwin[0] = (<np.npy_intp *>np.PyArray_DATA(a_size))[0]             # <<<<<<<<<<<<<<
 *         Nwin[1] = (<np.npy_intp *>np.PyArray_DATA(a_size))[1]
 * 
 */
    (__pyx_v_Nwin[0]) = (((__pyx_t_5numpy_npy_intp *)PyArray_DATA(__pyx_v_a_size))[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1632
 *             raise ValueError("Size must be a length two sequence")
 *         Nwin[0] = (<np.npy_intp *>np.PyArray_DATA(a_size))[0]
 *         Nwin[1] = (<np.npy_intp *>np.PyArray_DATA(a_size))[1]             # <<<<<<<<<<<<<<
 * 
 *     a_out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), typenum)
 */
    (__pyx_v_Nwin[1]) = (((__pyx_t_5numpy_npy_intp *)PyArray_DATA(__pyx_v_a_size))[1]);
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1634
 *         Nwin[1] = (<np.npy_intp *>np.PyArray_DATA(a_size))[1]
 * 
 *     a_out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), typenum)             # <<<<<<<<<<<<<<
 * 
 *     if typenum == np.NPY_UBYTE:
 */
  __pyx_t_2 = PyArray_SimpleNew(2, PyArray_DIMS(__pyx_v_a_image), __pyx_v_typenum); 
  if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_out = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1636
 *     a_out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), typenum)
 * 
 *     if typenum == np.NPY_UBYTE:             # <<<<<<<<<<<<<<
 *         b_medfilt2(<unsigned char *>np.PyArray_DATA(a_image),
 *                    <unsigned char *>np.PyArray_DATA(a_out),
 */
  __pyx_t_7 = (__pyx_v_typenum == NPY_UBYTE);
  if (__pyx_t_7) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1640
 *                    <unsigned char *>np.PyArray_DATA(a_out),
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_FLOAT:
 *         f_medfilt2(<float *>np.PyArray_DATA(a_image),
 */
    b_medfilt2(((unsigned char *)PyArray_DATA(__pyx_v_a_image)), ((unsigned char *)PyArray_DATA(__pyx_v_a_out)), __pyx_v_Nwin, PyArray_DIMS(__pyx_v_a_image), __pyx_function_pointer_check_malloc);
    goto __pyx_L7;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1641
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)
 *     elif typenum == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         f_medfilt2(<float *>np.PyArray_DATA(a_image),
 *                    <float *>np.PyArray_DATA(a_out),
 */
  __pyx_t_7 = (__pyx_v_typenum == NPY_FLOAT);
  if (__pyx_t_7) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1645
 *                    <float *>np.PyArray_DATA(a_out),
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_DOUBLE:
 *         d_medfilt2(<double *>np.PyArray_DATA(a_image),
 */
    f_medfilt2(((float *)PyArray_DATA(__pyx_v_a_image)), ((float *)PyArray_DATA(__pyx_v_a_out)), __pyx_v_Nwin, PyArray_DIMS(__pyx_v_a_image), __pyx_function_pointer_check_malloc);
    goto __pyx_L7;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1646
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)
 *     elif typenum == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         d_medfilt2(<double *>np.PyArray_DATA(a_image),
 *                    <double *>np.PyArray_DATA(a_out),
 */
  __pyx_t_7 = (__pyx_v_typenum == NPY_DOUBLE);
  if (__pyx_t_7) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1650
 *                    <double *>np.PyArray_DATA(a_out),
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)             # <<<<<<<<<<<<<<
 *     else:
 *         raise ValueError("2D median filter only supports Int8, Float32, and Float64.")
 */
    d_medfilt2(((double *)PyArray_DATA(__pyx_v_a_image)), ((double *)PyArray_DATA(__pyx_v_a_out)), __pyx_v_Nwin, PyArray_DIMS(__pyx_v_a_image), __pyx_function_pointer_check_malloc);
    goto __pyx_L7;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1652
 *                    check_malloc)
 *     else:
 *         raise ValueError("2D median filter only supports Int8, Float32, and Float64.")             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(a_out);
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1652_24->Target(__site_call1_1652_24, __pyx_context, __pyx_t_2, ((System::Object^)"2D median filter only supports Int8, Float32, and Float64."));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1654
 *         raise ValueError("2D median filter only supports Int8, Float32, and Float64.")
 * 
 *     return np.PyArray_Return(a_out);             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PyArray_Return(((System::Object^)__pyx_v_a_out)); 
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

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
  __pyx_int_0 = 0;
  __pyx_int_1 = 1;
  __pyx_int_2 = 2;
  __pyx_int_3 = 3;
  __pyx_int_4 = 4;
  __pyx_int_5 = 5;
  __pyx_int_8 = 8;
  __pyx_int_neg_4 = -4;
  __pyx_int_neg_5 = -5;
  __pyx_int_16 = 16;

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
  __site_cvt_cvt_int_1557_82 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_76_56 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_cvt_cvt_int_101_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_Negate_121_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeUnaryOperationAction(__pyx_context, ExpressionType::Negate));
  __site_op_lt_121_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_121_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_sub_121_70 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_gt_121_47 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::GreaterThan));
  __site_istrue_121_47 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_122_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_125_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_cvt_int_125_39 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_num_133_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "num", false));
  __site_cvt_cvt_int_133_27 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_135_46 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_138_51 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_142_72 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_142_33 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call1_150_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_158_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_211_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_216_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_221_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_225_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_236_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_240_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_245_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mul_618_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_619_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_add_620_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_mul_627_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_628_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_div_629_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_mul_630_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_631_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_sub_632_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_mul_638_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_639_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_mul_640_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_641_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_op_sub_642_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_op_mul_644_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_div_645_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Divide));
  __site_cvt_cvt_int_656_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_669_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_669_27 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_670_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_eq_672_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_672_27 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_673_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_num_679_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "num", false));
  __site_cvt_cvt_int_679_27 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_681_26 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_1097_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_1096_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_cvt_long_1125_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_1131_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_1142_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1151_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_long_1155_34 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1200_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_1211_36 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ElementSize_1217_43 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ElementSize", false));
  __site_cvt_cvt_int_1217_43 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ElementSize_1234_54 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ElementSize", false));
  __site_cvt_cvt_size_t_1234_54 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_1234_22 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_1284_16 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_op_ne_1284_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_cvt_cvt_int_1284_24 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1302_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_1327_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_1327_32 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1328_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ElementSize_1341_68 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ElementSize", false));
  __site_cvt_cvt_size_t_1341_68 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ElementSize_1342_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ElementSize", false));
  __site_cvt_cvt_int_1342_49 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1345_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_num_1347_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "num", false));
  __site_cvt_cvt_int_1347_22 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1349_50 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1353_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ElementSize_1355_35 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ElementSize", false));
  __site_cvt_cvt_int_1355_35 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ElementSize_1361_34 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ElementSize", false));
  __site_cvt_cvt_int_1361_34 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_1363_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_int_1363_45 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_1365_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_1375_61 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_size_t_1375_61 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_1376_61 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_size_t_1376_61 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1379_79 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_1406_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_op_sub_1410_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_cvt_cvt_Py_ssize_t_1410_34 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_sub_1419_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_cvt_cvt_int_1419_37 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_lt_1430_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_1430_36 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_bool_1431_30 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1431_30 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1438_53 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1464_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1464_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1464_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_num_1477_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "num", false));
  __site_cvt_cvt_int_1477_18 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_1483_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_1483_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_1483_40 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_1483_40 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_1483_64 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_1483_64 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1484_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_eq_1486_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_1486_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_1505_65 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_size_t_1505_65 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_and_1506_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_cvt_cvt_int_1506_27 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_1508_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_1508_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_1509_42 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1512_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_eq_1513_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_1513_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_1514_42 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_1516_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_1516_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_1517_42 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1520_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_1522_51 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_lshift_1526_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LeftShift));
  __site_op_add_1526_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_mul_1526_71 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_1526_57 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_cvt_int_1526_57 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_contains_1542_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_Contains));
  __site_call1_1543_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1547_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1549_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_1557_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1557_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_1557_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1557_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_1557_0_3 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_contains_1573_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_Contains));
  __site_call1_1574_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1577_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1585_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1594_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1596_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mod_1610_108 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_1610_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_ne_1629_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_1629_36 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1630_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1652_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  __pyx_delegate_val_check_malloc = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_check_malloc(check_malloc);
  __pyx_function_pointer_check_malloc = (__pyx_fp_t_check_malloc)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_check_malloc).ToPointer());
  __pyx_delegate_val_FLOAT_filt = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_FLOAT_filt(FLOAT_filt);
  __pyx_function_pointer_FLOAT_filt = (__pyx_fp_t_FLOAT_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_FLOAT_filt).ToPointer());
  __pyx_delegate_val_CFLOAT_filt = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CFLOAT_filt(CFLOAT_filt);
  __pyx_function_pointer_CFLOAT_filt = (__pyx_fp_t_CFLOAT_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_CFLOAT_filt).ToPointer());
  __pyx_delegate_val_DOUBLE_filt = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_DOUBLE_filt(DOUBLE_filt);
  __pyx_function_pointer_DOUBLE_filt = (__pyx_fp_t_DOUBLE_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_DOUBLE_filt).ToPointer());
  __pyx_delegate_val_CDOUBLE_filt = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CDOUBLE_filt(CDOUBLE_filt);
  __pyx_function_pointer_CDOUBLE_filt = (__pyx_fp_t_CDOUBLE_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_CDOUBLE_filt).ToPointer());
  __pyx_delegate_val_EXTENDED_filt = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_EXTENDED_filt(EXTENDED_filt);
  __pyx_function_pointer_EXTENDED_filt = (__pyx_fp_t_EXTENDED_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_EXTENDED_filt).ToPointer());
  __pyx_delegate_val_CEXTENDED_filt = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_CEXTENDED_filt(CEXTENDED_filt);
  __pyx_function_pointer_CEXTENDED_filt = (__pyx_fp_t_CEXTENDED_filt)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_CEXTENDED_filt).ToPointer());
  __pyx_delegate_val_DOUBLE_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_DOUBLE_compare(DOUBLE_compare);
  __pyx_function_pointer_DOUBLE_compare = (__pyx_fp_t_DOUBLE_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_DOUBLE_compare).ToPointer());
  __pyx_delegate_val_FLOAT_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_FLOAT_compare(FLOAT_compare);
  __pyx_function_pointer_FLOAT_compare = (__pyx_fp_t_FLOAT_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_FLOAT_compare).ToPointer());
  __pyx_delegate_val_LONGDOUBLE_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONGDOUBLE_compare(LONGDOUBLE_compare);
  __pyx_function_pointer_LONGDOUBLE_compare = (__pyx_fp_t_LONGDOUBLE_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_LONGDOUBLE_compare).ToPointer());
  __pyx_delegate_val_BYTE_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_BYTE_compare(BYTE_compare);
  __pyx_function_pointer_BYTE_compare = (__pyx_fp_t_BYTE_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_BYTE_compare).ToPointer());
  __pyx_delegate_val_SHORT_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_SHORT_compare(SHORT_compare);
  __pyx_function_pointer_SHORT_compare = (__pyx_fp_t_SHORT_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_SHORT_compare).ToPointer());
  __pyx_delegate_val_INT_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_INT_compare(INT_compare);
  __pyx_function_pointer_INT_compare = (__pyx_fp_t_INT_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_INT_compare).ToPointer());
  __pyx_delegate_val_LONG_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONG_compare(LONG_compare);
  __pyx_function_pointer_LONG_compare = (__pyx_fp_t_LONG_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_LONG_compare).ToPointer());
  __pyx_delegate_val_LONGLONG_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_LONGLONG_compare(LONGLONG_compare);
  __pyx_function_pointer_LONGLONG_compare = (__pyx_fp_t_LONGLONG_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_LONGLONG_compare).ToPointer());
  __pyx_delegate_val_UBYTE_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_UBYTE_compare(UBYTE_compare);
  __pyx_function_pointer_UBYTE_compare = (__pyx_fp_t_UBYTE_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_UBYTE_compare).ToPointer());
  __pyx_delegate_val_USHORT_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_USHORT_compare(USHORT_compare);
  __pyx_function_pointer_USHORT_compare = (__pyx_fp_t_USHORT_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_USHORT_compare).ToPointer());
  __pyx_delegate_val_UINT_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_UINT_compare(UINT_compare);
  __pyx_function_pointer_UINT_compare = (__pyx_fp_t_UINT_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_UINT_compare).ToPointer());
  __pyx_delegate_val_ULONG_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_ULONG_compare(ULONG_compare);
  __pyx_function_pointer_ULONG_compare = (__pyx_fp_t_ULONG_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_ULONG_compare).ToPointer());
  __pyx_delegate_val_ULONGLONG_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_ULONGLONG_compare(ULONGLONG_compare);
  __pyx_function_pointer_ULONGLONG_compare = (__pyx_fp_t_ULONGLONG_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_ULONGLONG_compare).ToPointer());
  __pyx_delegate_val_OBJECT_compare = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_OBJECT_compare(OBJECT_compare);
  __pyx_function_pointer_OBJECT_compare = (__pyx_fp_t_OBJECT_compare)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_OBJECT_compare).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  PythonDictionary^ __pyx_t_3;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":9
 * 
 * cimport numpy as np
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * ctypedef int (*CompareFunction) (void *, void *)
 */
  import_array();

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":55
 * 
 * # define some constants
 * OUTSIZE_MASK = 3             # <<<<<<<<<<<<<<
 * FLIP_MASK    = 16
 * TYPE_SHIFT   = 5
 */
  PythonOps::SetGlobal(__pyx_context, "OUTSIZE_MASK", __pyx_int_3);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":56
 * # define some constants
 * OUTSIZE_MASK = 3
 * FLIP_MASK    = 16             # <<<<<<<<<<<<<<
 * TYPE_SHIFT   = 5
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "FLIP_MASK", __pyx_int_16);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":57
 * OUTSIZE_MASK = 3
 * FLIP_MASK    = 16
 * TYPE_SHIFT   = 5             # <<<<<<<<<<<<<<
 * 
 * FULL  = 2
 */
  PythonOps::SetGlobal(__pyx_context, "TYPE_SHIFT", __pyx_int_5);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":59
 * TYPE_SHIFT   = 5
 * 
 * FULL  = 2             # <<<<<<<<<<<<<<
 * SAME  = 1
 * VALID = 0
 */
  PythonOps::SetGlobal(__pyx_context, "FULL", __pyx_int_2);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":60
 * 
 * FULL  = 2
 * SAME  = 1             # <<<<<<<<<<<<<<
 * VALID = 0
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "SAME", __pyx_int_1);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":61
 * FULL  = 2
 * SAME  = 1
 * VALID = 0             # <<<<<<<<<<<<<<
 * 
 * CIRCULAR = 8
 */
  PythonOps::SetGlobal(__pyx_context, "VALID", __pyx_int_0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":63
 * VALID = 0
 * 
 * CIRCULAR = 8             # <<<<<<<<<<<<<<
 * REFLECT  = 4
 * PAD      = 0
 */
  PythonOps::SetGlobal(__pyx_context, "CIRCULAR", __pyx_int_8);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":64
 * 
 * CIRCULAR = 8
 * REFLECT  = 4             # <<<<<<<<<<<<<<
 * PAD      = 0
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "REFLECT", __pyx_int_4);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":65
 * CIRCULAR = 8
 * REFLECT  = 4
 * PAD      = 0             # <<<<<<<<<<<<<<
 * 
 * BANDPASS       = 1
 */
  PythonOps::SetGlobal(__pyx_context, "PAD", __pyx_int_0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":67
 * PAD      = 0
 * 
 * BANDPASS       = 1             # <<<<<<<<<<<<<<
 * DIFFERENTIATOR = 2
 * HILBERT        = 3
 */
  PythonOps::SetGlobal(__pyx_context, "BANDPASS", __pyx_int_1);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":68
 * 
 * BANDPASS       = 1
 * DIFFERENTIATOR = 2             # <<<<<<<<<<<<<<
 * HILBERT        = 3
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "DIFFERENTIATOR", __pyx_int_2);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":69
 * BANDPASS       = 1
 * DIFFERENTIATOR = 2
 * HILBERT        = 3             # <<<<<<<<<<<<<<
 * 
 * # A memory allocator which raises a python exception.
 */
  PythonOps::SetGlobal(__pyx_context, "HILBERT", __pyx_int_3);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1287
 * 
 * cdef CompareFunction compare_functions[21]
 * compare_functions[<int>np.NPY_BYTE] = <CompareFunction>BYTE_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_UBYTE] = <CompareFunction>UBYTE_compare
 * compare_functions[<int>np.NPY_SHORT] = <CompareFunction>SHORT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_BYTE)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_BYTE_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1288
 * cdef CompareFunction compare_functions[21]
 * compare_functions[<int>np.NPY_BYTE] = <CompareFunction>BYTE_compare
 * compare_functions[<int>np.NPY_UBYTE] = <CompareFunction>UBYTE_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_SHORT] = <CompareFunction>SHORT_compare
 * compare_functions[<int>np.NPY_USHORT] = <CompareFunction>USHORT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_UBYTE)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_UBYTE_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1289
 * compare_functions[<int>np.NPY_BYTE] = <CompareFunction>BYTE_compare
 * compare_functions[<int>np.NPY_UBYTE] = <CompareFunction>UBYTE_compare
 * compare_functions[<int>np.NPY_SHORT] = <CompareFunction>SHORT_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_USHORT] = <CompareFunction>USHORT_compare
 * compare_functions[<int>np.NPY_INT] = <CompareFunction>INT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_SHORT)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_SHORT_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1290
 * compare_functions[<int>np.NPY_UBYTE] = <CompareFunction>UBYTE_compare
 * compare_functions[<int>np.NPY_SHORT] = <CompareFunction>SHORT_compare
 * compare_functions[<int>np.NPY_USHORT] = <CompareFunction>USHORT_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_INT] = <CompareFunction>INT_compare
 * compare_functions[<int>np.NPY_UINT] = <CompareFunction>UINT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_USHORT)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_USHORT_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1291
 * compare_functions[<int>np.NPY_SHORT] = <CompareFunction>SHORT_compare
 * compare_functions[<int>np.NPY_USHORT] = <CompareFunction>USHORT_compare
 * compare_functions[<int>np.NPY_INT] = <CompareFunction>INT_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_UINT] = <CompareFunction>UINT_compare
 * compare_functions[<int>np.NPY_LONG] = <CompareFunction>LONG_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_INT)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_INT_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1292
 * compare_functions[<int>np.NPY_USHORT] = <CompareFunction>USHORT_compare
 * compare_functions[<int>np.NPY_INT] = <CompareFunction>INT_compare
 * compare_functions[<int>np.NPY_UINT] = <CompareFunction>UINT_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_LONG] = <CompareFunction>LONG_compare
 * compare_functions[<int>np.NPY_ULONG] = <CompareFunction>ULONG_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_UINT)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_UINT_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1293
 * compare_functions[<int>np.NPY_INT] = <CompareFunction>INT_compare
 * compare_functions[<int>np.NPY_UINT] = <CompareFunction>UINT_compare
 * compare_functions[<int>np.NPY_LONG] = <CompareFunction>LONG_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_ULONG] = <CompareFunction>ULONG_compare
 * compare_functions[<int>np.NPY_LONGLONG] = <CompareFunction>LONGLONG_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_LONG)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_LONG_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1294
 * compare_functions[<int>np.NPY_UINT] = <CompareFunction>UINT_compare
 * compare_functions[<int>np.NPY_LONG] = <CompareFunction>LONG_compare
 * compare_functions[<int>np.NPY_ULONG] = <CompareFunction>ULONG_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_LONGLONG] = <CompareFunction>LONGLONG_compare
 * compare_functions[<int>np.NPY_ULONGLONG] = <CompareFunction>ULONGLONG_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_ULONG)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_ULONG_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1295
 * compare_functions[<int>np.NPY_LONG] = <CompareFunction>LONG_compare
 * compare_functions[<int>np.NPY_ULONG] = <CompareFunction>ULONG_compare
 * compare_functions[<int>np.NPY_LONGLONG] = <CompareFunction>LONGLONG_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_ULONGLONG] = <CompareFunction>ULONGLONG_compare
 * compare_functions[<int>np.NPY_FLOAT] = <CompareFunction>FLOAT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_LONGLONG)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_LONGLONG_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1296
 * compare_functions[<int>np.NPY_ULONG] = <CompareFunction>ULONG_compare
 * compare_functions[<int>np.NPY_LONGLONG] = <CompareFunction>LONGLONG_compare
 * compare_functions[<int>np.NPY_ULONGLONG] = <CompareFunction>ULONGLONG_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_FLOAT] = <CompareFunction>FLOAT_compare
 * compare_functions[<int>np.NPY_DOUBLE] = <CompareFunction>DOUBLE_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_ULONGLONG)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_ULONGLONG_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1297
 * compare_functions[<int>np.NPY_LONGLONG] = <CompareFunction>LONGLONG_compare
 * compare_functions[<int>np.NPY_ULONGLONG] = <CompareFunction>ULONGLONG_compare
 * compare_functions[<int>np.NPY_FLOAT] = <CompareFunction>FLOAT_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_DOUBLE] = <CompareFunction>DOUBLE_compare
 * compare_functions[<int>np.NPY_LONGDOUBLE] = <CompareFunction>LONGDOUBLE_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_FLOAT)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_FLOAT_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1298
 * compare_functions[<int>np.NPY_ULONGLONG] = <CompareFunction>ULONGLONG_compare
 * compare_functions[<int>np.NPY_FLOAT] = <CompareFunction>FLOAT_compare
 * compare_functions[<int>np.NPY_DOUBLE] = <CompareFunction>DOUBLE_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_LONGDOUBLE] = <CompareFunction>LONGDOUBLE_compare
 * compare_functions[<int>np.NPY_OBJECT] = <CompareFunction>OBJECT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_DOUBLE)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_DOUBLE_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1299
 * compare_functions[<int>np.NPY_FLOAT] = <CompareFunction>FLOAT_compare
 * compare_functions[<int>np.NPY_DOUBLE] = <CompareFunction>DOUBLE_compare
 * compare_functions[<int>np.NPY_LONGDOUBLE] = <CompareFunction>LONGDOUBLE_compare             # <<<<<<<<<<<<<<
 * compare_functions[<int>np.NPY_OBJECT] = <CompareFunction>OBJECT_compare
 * 
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_LONGDOUBLE)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_LONGDOUBLE_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1300
 * compare_functions[<int>np.NPY_DOUBLE] = <CompareFunction>DOUBLE_compare
 * compare_functions[<int>np.NPY_LONGDOUBLE] = <CompareFunction>LONGDOUBLE_compare
 * compare_functions[<int>np.NPY_OBJECT] = <CompareFunction>OBJECT_compare             # <<<<<<<<<<<<<<
 * 
 * def _order_filterND(a0, domain, int order=0):
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[((int)NPY_OBJECT)]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_OBJECT_compare);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1557
 * 
 * 
 * def _remez(int numtaps, object bands, object des, object weight, int type=BANDPASS,             # <<<<<<<<<<<<<<
 *            double Hz=1.0, int maxiter=25, int grid_density=16):
 *     """
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "BANDPASS");
  __pyx_t_2 = __site_cvt_cvt_int_1557_82->Target(__site_cvt_cvt_int_1557_82, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_k_1 = __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1
 * # SIGTOOLS module by Travis Oliphant             # <<<<<<<<<<<<<<
 * #
 * # Copyright 2005 Travis Oliphant
 */
  __pyx_t_3 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

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

static __pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction *__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions = new __pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction [21];
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
[assembly: PythonModule("scipy__signal__sigtoolsmod", module_sigtoolsmod::typeid)];
};
