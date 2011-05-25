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
/* Module declarations from scipy.signal.sigtoolsmod */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate char *__pyx_delegate_t_5scipy_6signal_11sigtoolsmod_check_malloc(int);
static char *check_malloc(int); /*proto*/
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
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_418_82;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_63_56;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_76_36;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_82_43;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_82_43;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_99_54;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_99_54;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_99_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_149_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_149_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_149_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_167_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_191_32;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_191_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_192_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_205_68;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_205_68;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_206_49;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_206_49;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_209_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_num_211_22;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_211_22;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_213_50;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_217_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_219_35;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_219_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_225_34;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_225_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_227_45;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_227_45;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_229_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_239_61;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_239_61;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_240_61;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_240_61;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_243_79;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_269_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_273_34;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_cvt_Py_ssize_t_273_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_282_37;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_282_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_293_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_293_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_294_30;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_294_30;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_301_53;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_325_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_325_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_325_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_num_338_18;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_338_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_344_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_344_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_344_40;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_344_40;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_344_64;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_344_64;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_345_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_347_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_347_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyArray_Cast_354_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_354_41;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_366_65;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_cvt_size_t_366_65;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_367_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_367_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_369_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_369_23;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_370_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_373_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_374_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_374_25;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_375_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_377_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_377_25;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_378_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_381_28;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_383_51;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lshift_387_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_387_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_387_71;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_387_57;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_387_57;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >^ __site_contains_403_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_404_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_408_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_410_28;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_418_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_418_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_418_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_418_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_418_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >^ __site_contains_434_12;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_435_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_438_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_446_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_455_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_457_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_471_108;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_471_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_490_36;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_490_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_491_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_513_24;
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":60
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":61
 * # Used by median filter
 * cdef char *check_malloc(int size):
 *     cdef char *the_block = <char *>malloc(size)             # <<<<<<<<<<<<<<
 *     if the_block == NULL:
 *         print "\nERROR: unable to allocate %d bytes!\n" % size
 */
  __pyx_v_the_block = ((char *)malloc(__pyx_v_size));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":62
 * cdef char *check_malloc(int size):
 *     cdef char *the_block = <char *>malloc(size)
 *     if the_block == NULL:             # <<<<<<<<<<<<<<
 *         print "\nERROR: unable to allocate %d bytes!\n" % size
 *         raise MemoryError
 */
  __pyx_t_1 = (__pyx_v_the_block == NULL);
  if (__pyx_t_1) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":63
 *     cdef char *the_block = <char *>malloc(size)
 *     if the_block == NULL:
 *         print "\nERROR: unable to allocate %d bytes!\n" % size             # <<<<<<<<<<<<<<
 *         raise MemoryError
 * 
 */
    __pyx_t_2 = __pyx_v_size;
    __pyx_t_3 = __site_op_mod_63_56->Target(__site_op_mod_63_56, ((System::Object^)"\nERROR: unable to allocate %d bytes!\n"), __pyx_t_2);
    __pyx_t_2 = nullptr;
    PythonOps::Print(__pyx_context, ((System::Object^)__pyx_t_3));
    __pyx_t_3 = nullptr;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":64
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":66
 *         raise MemoryError
 * 
 *     return the_block             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_the_block;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":72
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
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  size_t __pyx_t_10;
  int __pyx_t_11;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":75
 *                  char *sort_buffer, int nels2, int check, np.npy_intp *loop_ind,
 *                  np.npy_intp *temp_ind, np.npy_uintp *offset):
 *     cdef int i, j, k, incr = 1             # <<<<<<<<<<<<<<
 *     cdef int ndims = np.PyArray_NDIM(ap1)
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
 */
  __pyx_v_incr = 1;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":76
 *                  np.npy_intp *temp_ind, np.npy_uintp *offset):
 *     cdef int i, j, k, incr = 1
 *     cdef int ndims = np.PyArray_NDIM(ap1)             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
 */
  __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
  __pyx_t_2 = __site_cvt_cvt_int_76_36->Target(__site_cvt_cvt_int_76_36, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_ndims = __pyx_t_2;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":77
 *     cdef int i, j, k, incr = 1
 *     cdef int ndims = np.PyArray_NDIM(ap1)
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
 */
  __pyx_v_dims2 = PyArray_DIMS(__pyx_v_ap2);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":78
 *     cdef int ndims = np.PyArray_NDIM(ap1)
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
 */
  __pyx_v_dims1 = PyArray_DIMS(__pyx_v_ap1);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":79
 *     cdef np.npy_intp *dims2 = np.PyArray_DIMS(ap2)
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
 *     cdef char *ip2 = <char *>np.PyArray_DATA(ap2)
 */
  __pyx_v_is1 = (PyArray_STRIDES(__pyx_v_ap1)[(__pyx_v_ndims - 1)]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":80
 *     cdef np.npy_intp *dims1 = np.PyArray_DIMS(ap1)
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]             # <<<<<<<<<<<<<<
 *     cdef char *ip2 = <char *>np.PyArray_DATA(ap2)
 *     cdef int elsize = np.PyArray_DESCR(ap1).elsize
 */
  __pyx_v_is2 = (PyArray_STRIDES(__pyx_v_ap2)[(__pyx_v_ndims - 1)]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":81
 *     cdef np.npy_intp is1 = np.PyArray_STRIDES(ap1)[ndims-1]
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
 *     cdef char *ip2 = <char *>np.PyArray_DATA(ap2)             # <<<<<<<<<<<<<<
 *     cdef int elsize = np.PyArray_DESCR(ap1).elsize
 *     cdef char *ptr
 */
  __pyx_v_ip2 = ((char *)PyArray_DATA(__pyx_v_ap2));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":82
 *     cdef np.npy_intp is2 = np.PyArray_STRIDES(ap2)[ndims-1]
 *     cdef char *ip2 = <char *>np.PyArray_DATA(ap2)
 *     cdef int elsize = np.PyArray_DESCR(ap1).elsize             # <<<<<<<<<<<<<<
 *     cdef char *ptr
 * 
 */
  __pyx_t_1 = PyArray_DESCR(__pyx_v_ap1); 
  __pyx_t_3 = __site_get_elsize_82_43->Target(__site_get_elsize_82_43, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_cvt_cvt_int_82_43->Target(__site_cvt_cvt_int_82_43, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_v_elsize = __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":85
 *     cdef char *ptr
 * 
 *     ptr = <char *>np.PyArray_Zero(ap2)             # <<<<<<<<<<<<<<
 *     temp_ind[ndims-1] -= 1
 * 
 */
  __pyx_v_ptr = ((char *)PyArray_Zero(((System::Object^)__pyx_v_ap2)));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":86
 * 
 *     ptr = <char *>np.PyArray_Zero(ap2)
 *     temp_ind[ndims-1] -= 1             # <<<<<<<<<<<<<<
 * 
 *     for i in range(nels2 - 1, -1, -1):
 */
  (__pyx_v_temp_ind[(__pyx_v_ndims - 1)]) -= 1;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":88
 *     temp_ind[ndims-1] -= 1
 * 
 *     for i in range(nels2 - 1, -1, -1):             # <<<<<<<<<<<<<<
 *         # Adjust index array and move ptr1 to right place
 *         k = ndims - 1
 */
  for (__pyx_t_5 = (__pyx_v_nels2 - 1); __pyx_t_5 > -1; __pyx_t_5-=1) {
    __pyx_v_i = __pyx_t_5;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":90
 *     for i in range(nels2 - 1, -1, -1):
 *         # Adjust index array and move ptr1 to right place
 *         k = ndims - 1             # <<<<<<<<<<<<<<
 *         for j in range(incr):
 *             temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions
 */
    __pyx_v_k = (__pyx_v_ndims - 1);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":91
 *         # Adjust index array and move ptr1 to right place
 *         k = ndims - 1
 *         for j in range(incr):             # <<<<<<<<<<<<<<
 *             temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions
 *             k -= 1
 */
    __pyx_t_6 = __pyx_v_incr;
    for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
      __pyx_v_j = __pyx_t_7;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":92
 *         k = ndims - 1
 *         for j in range(incr):
 *             temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions             # <<<<<<<<<<<<<<
 *             k -= 1
 * 
 */
      (__pyx_v_temp_ind[__pyx_v_k]) -= ((__pyx_v_dims2[__pyx_v_k]) - 1);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":93
 *         for j in range(incr):
 *             temp_ind[k] -= dims2[k] - 1  # Return to start for these dimensions
 *             k -= 1             # <<<<<<<<<<<<<<
 * 
 *         ip1 += offset[k] * is1           # Precomputed offset array
 */
      __pyx_v_k -= 1;
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":95
 *             k -= 1
 * 
 *         ip1 += offset[k] * is1           # Precomputed offset array             # <<<<<<<<<<<<<<
 *         temp_ind[k] += 1
 * 
 */
    __pyx_v_ip1 += ((__pyx_v_offset[__pyx_v_k]) * __pyx_v_is1);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":96
 * 
 *         ip1 += offset[k] * is1           # Precomputed offset array
 *         temp_ind[k] += 1             # <<<<<<<<<<<<<<
 * 
 *         if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and
 */
    (__pyx_v_temp_ind[__pyx_v_k]) += 1;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":98
 *         temp_ind[k] += 1
 * 
 *         if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and             # <<<<<<<<<<<<<<
 *                 memcmp(ip2, ptr, np.PyArray_DESCR(ap2).elsize)):
 *             memcpy(sort_buffer, ip1, elsize)
 */
    if (__pyx_v_check) {
      __pyx_t_6 = index_out_of_bounds(__pyx_v_temp_ind, __pyx_v_dims1, __pyx_v_ndims);
      __pyx_t_8 = __pyx_t_6;
    } else {
      __pyx_t_8 = __pyx_v_check;
    }
    __pyx_t_9 = (!__pyx_t_8);
    if (__pyx_t_9) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":99
 * 
 *         if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and
 *                 memcmp(ip2, ptr, np.PyArray_DESCR(ap2).elsize)):             # <<<<<<<<<<<<<<
 *             memcpy(sort_buffer, ip1, elsize)
 *             sort_buffer += elsize
 */
      __pyx_t_3 = PyArray_DESCR(__pyx_v_ap2); 
      __pyx_t_1 = __site_get_elsize_99_54->Target(__site_get_elsize_99_54, __pyx_t_3, __pyx_context);
      __pyx_t_3 = nullptr;
      __pyx_t_10 = __site_cvt_cvt_size_t_99_54->Target(__site_cvt_cvt_size_t_99_54, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_1 = memcmp(__pyx_v_ip2, __pyx_v_ptr, __pyx_t_10);
      __pyx_t_8 = __site_istrue_99_22->Target(__site_istrue_99_22, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_11 = __pyx_t_8;
    } else {
      __pyx_t_11 = __pyx_t_9;
    }
    if (__pyx_t_11) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":100
 *         if (not (check and index_out_of_bounds(temp_ind,dims1,ndims)) and
 *                 memcmp(ip2, ptr, np.PyArray_DESCR(ap2).elsize)):
 *             memcpy(sort_buffer, ip1, elsize)             # <<<<<<<<<<<<<<
 *             sort_buffer += elsize
 * 
 */
      memcpy(__pyx_v_sort_buffer, __pyx_v_ip1, __pyx_v_elsize);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":101
 *                 memcmp(ip2, ptr, np.PyArray_DESCR(ap2).elsize)):
 *             memcpy(sort_buffer, ip1, elsize)
 *             sort_buffer += elsize             # <<<<<<<<<<<<<<
 * 
 *         incr = increment(loop_ind, ndims, dims2)   # Returns number of N-D indices incremented.
 */
      __pyx_v_sort_buffer += __pyx_v_elsize;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":103
 *             sort_buffer += elsize
 * 
 *         incr = increment(loop_ind, ndims, dims2)   # Returns number of N-D indices incremented.             # <<<<<<<<<<<<<<
 *         ip2 += is2
 * 
 */
    __pyx_v_incr = increment(__pyx_v_loop_ind, __pyx_v_ndims, __pyx_v_dims2);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":104
 * 
 *         incr = increment(loop_ind, ndims, dims2)   # Returns number of N-D indices incremented.
 *         ip2 += is2             # <<<<<<<<<<<<<<
 * 
 *     np.NpyDataMem_FREE(ptr)
 */
    __pyx_v_ip2 += __pyx_v_is2;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":106
 *         ip2 += is2
 * 
 *     np.NpyDataMem_FREE(ptr)             # <<<<<<<<<<<<<<
 *     return
 * 
 */
  NpyDataMem_FREE(__pyx_v_ptr);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":107
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":109
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":110
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":112
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":113
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":115
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":116
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":118
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":119
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":121
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":122
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":124
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":125
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":127
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":128
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":130
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":131
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":133
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":134
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":136
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":137
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":139
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":140
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":142
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":143
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":145
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":146
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":148
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":149
 * 
 * cdef int OBJECT_compare(object ip1, object ip2):
 *     return (ip1 == ip2) != 1             # <<<<<<<<<<<<<<
 * 
 * cdef CompareFunction compare_functions[21]
 */
  __pyx_t_1 = __site_op_eq_149_16->Target(__site_op_eq_149_16, __pyx_v_ip1, __pyx_v_ip2);
  __pyx_t_2 = __site_op_ne_149_24->Target(__site_op_ne_149_24, __pyx_t_1, __pyx_int_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_cvt_cvt_int_149_24->Target(__site_cvt_cvt_int_149_24, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":167
 * compare_functions[17] = <CompareFunction>OBJECT_compare
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
  __pyx_t_5numpy_npy_uintp __pyx_v_offset1;
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
  __pyx_t_5numpy_intp_t __pyx_t_21;
  int __pyx_t_22;
  int __pyx_t_23;
  int __pyx_t_24;
  __pyx_v_a0 = a0;
  __pyx_v_domain = domain;
  if (dynamic_cast<System::Reflection::Missing^>(order) == nullptr) {
    __pyx_v_order = __site_cvt_cvt_int_167_0->Target(__site_cvt_cvt_int_167_0, order);
  } else {
    __pyx_v_order = ((int)0);
  }
  __pyx_v_ap1 = nullptr;
  __pyx_v_ap2 = nullptr;
  __pyx_v_ret = nullptr;
  __pyx_v_type = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":175
 *     cdef np.npy_intp *offsets2
 *     cdef np.npy_intp *ret_ind
 *     cdef int i, j, n2, n2_nonzero, k, check, incr = 1             # <<<<<<<<<<<<<<
 *     cdef int bytes_in_array
 *     cdef int is1, os
 */
  __pyx_v_incr = 1;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":181
 *     cdef char *op, *ap1_ptr, *ap2_ptr, *sort_buffer
 *     cdef CompareFunction compare_func
 *     cdef char *zptr=NULL             # <<<<<<<<<<<<<<
 * 
 *     # Get Array objects from input
 */
  __pyx_v_zptr = NULL;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":184
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":185
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":187
 *     type = np.NpyArray_FindArrayType_2args(domain, type)
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         ap1 = np.PyArray_FromAny(a0, type, 0, 0, np.NPY_CONTIGUOUS, None)
 *         ap2 = np.PyArray_FromAny(domain, type, 0, 0, np.NPY_CONTIGUOUS, None)
 */
  try {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":188
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":189
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":191
 *         ap2 = np.PyArray_FromAny(domain, type, 0, 0, np.NPY_CONTIGUOUS, None)
 * 
 *         if np.PyArray_NDIM(ap1) != np.PyArray_NDIM(ap2):             # <<<<<<<<<<<<<<
 *             raise ValueError("All input arrays must have the same number of dimensions.")
 * 
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_2 = PyArray_NDIM(__pyx_v_ap2); 
    __pyx_t_3 = __site_op_ne_191_32->Target(__site_op_ne_191_32, __pyx_t_1, __pyx_t_2);
    __pyx_t_1 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_t_4 = __site_istrue_191_32->Target(__site_istrue_191_32, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (__pyx_t_4) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":192
 * 
 *         if np.PyArray_NDIM(ap1) != np.PyArray_NDIM(ap2):
 *             raise ValueError("All input arrays must have the same number of dimensions.")             # <<<<<<<<<<<<<<
 * 
 *         n2 = np.PyArray_SIZE(ap2)
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_2 = __site_call1_192_28->Target(__site_call1_192_28, __pyx_context, __pyx_t_3, ((System::Object^)"All input arrays must have the same number of dimensions."));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":194
 *             raise ValueError("All input arrays must have the same number of dimensions.")
 * 
 *         n2 = np.PyArray_SIZE(ap2)             # <<<<<<<<<<<<<<
 *         n2_nonzero = 0
 *         ap2_ptr = <char *>np.PyArray_DATA(ap2)
 */
    __pyx_v_n2 = PyArray_SIZE(__pyx_v_ap2);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":195
 * 
 *         n2 = np.PyArray_SIZE(ap2)
 *         n2_nonzero = 0             # <<<<<<<<<<<<<<
 *         ap2_ptr = <char *>np.PyArray_DATA(ap2)
 * 
 */
    __pyx_v_n2_nonzero = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":196
 *         n2 = np.PyArray_SIZE(ap2)
 *         n2_nonzero = 0
 *         ap2_ptr = <char *>np.PyArray_DATA(ap2)             # <<<<<<<<<<<<<<
 * 
 *         # Find out the number of non-zero entries in domain (allows for
 */
    __pyx_v_ap2_ptr = ((char *)PyArray_DATA(__pyx_v_ap2));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":200
 *         # Find out the number of non-zero entries in domain (allows for
 *         # different shapped rank-filters to be used besides just rectangles)
 *         zptr = <char *>np.PyArray_Zero(ap2)             # <<<<<<<<<<<<<<
 *         if zptr == NULL:
 *             return None
 */
    __pyx_v_zptr = ((char *)PyArray_Zero(((System::Object^)__pyx_v_ap2)));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":201
 *         # different shapped rank-filters to be used besides just rectangles)
 *         zptr = <char *>np.PyArray_Zero(ap2)
 *         if zptr == NULL:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_4 = (__pyx_v_zptr == NULL);
    if (__pyx_t_4) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":202
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":204
 *             return None
 * 
 *         for k in range(n2):             # <<<<<<<<<<<<<<
 *             n2_nonzero += (memcmp(ap2_ptr,zptr,np.PyArray_DESCR(ap2).elsize) != 0)
 *             ap2_ptr += <int>np.PyArray_DESCR(ap2).elsize
 */
    __pyx_t_5 = __pyx_v_n2;
    for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
      __pyx_v_k = __pyx_t_6;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":205
 * 
 *         for k in range(n2):
 *             n2_nonzero += (memcmp(ap2_ptr,zptr,np.PyArray_DESCR(ap2).elsize) != 0)             # <<<<<<<<<<<<<<
 *             ap2_ptr += <int>np.PyArray_DESCR(ap2).elsize
 * 
 */
      __pyx_t_2 = PyArray_DESCR(__pyx_v_ap2); 
      __pyx_t_3 = __site_get_elsize_205_68->Target(__site_get_elsize_205_68, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      __pyx_t_7 = __site_cvt_cvt_size_t_205_68->Target(__site_cvt_cvt_size_t_205_68, __pyx_t_3);
      __pyx_t_3 = nullptr;
      __pyx_v_n2_nonzero += (memcmp(__pyx_v_ap2_ptr, __pyx_v_zptr, __pyx_t_7) != 0);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":206
 *         for k in range(n2):
 *             n2_nonzero += (memcmp(ap2_ptr,zptr,np.PyArray_DESCR(ap2).elsize) != 0)
 *             ap2_ptr += <int>np.PyArray_DESCR(ap2).elsize             # <<<<<<<<<<<<<<
 * 
 *         if (order >= n2_nonzero) or (order < 0):
 */
      __pyx_t_3 = PyArray_DESCR(__pyx_v_ap2); 
      __pyx_t_2 = __site_get_elsize_206_49->Target(__site_get_elsize_206_49, __pyx_t_3, __pyx_context);
      __pyx_t_3 = nullptr;
      __pyx_t_8 = __site_cvt_cvt_int_206_49->Target(__site_cvt_cvt_int_206_49, __pyx_t_2);
      __pyx_t_2 = nullptr;
      __pyx_v_ap2_ptr += ((int)__pyx_t_8);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":208
 *             ap2_ptr += <int>np.PyArray_DESCR(ap2).elsize
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

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":209
 * 
 *         if (order >= n2_nonzero) or (order < 0):
 *             raise ValueError("Order must be non-negative and less than number of nonzero elements in domain.")             # <<<<<<<<<<<<<<
 * 
 *         typenum = type.num
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_3 = __site_call1_209_28->Target(__site_call1_209_28, __pyx_context, __pyx_t_2, ((System::Object^)"Order must be non-negative and less than number of nonzero elements in domain."));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L9;
    }
    __pyx_L9:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":211
 *             raise ValueError("Order must be non-negative and less than number of nonzero elements in domain.")
 * 
 *         typenum = type.num             # <<<<<<<<<<<<<<
 * 
 *         ret = np.PyArray_SimpleNew(np.PyArray_NDIM(ap1), np.PyArray_DIMS(ap1), typenum)
 */
    __pyx_t_3 = __site_get_num_211_22->Target(__site_get_num_211_22, __pyx_v_type, __pyx_context);
    __pyx_t_5 = __site_cvt_cvt_int_211_22->Target(__site_cvt_cvt_int_211_22, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_typenum = __pyx_t_5;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":213
 *         typenum = type.num
 * 
 *         ret = np.PyArray_SimpleNew(np.PyArray_NDIM(ap1), np.PyArray_DIMS(ap1), typenum)             # <<<<<<<<<<<<<<
 * 
 *         compare_func = compare_functions[np.PyArray_TYPE(ap1)]
 */
    __pyx_t_3 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_6 = __site_cvt_cvt_int_213_50->Target(__site_cvt_cvt_int_213_50, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_t_3 = PyArray_SimpleNew(__pyx_t_6, PyArray_DIMS(__pyx_v_ap1), __pyx_v_typenum); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ret = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":215
 *         ret = np.PyArray_SimpleNew(np.PyArray_NDIM(ap1), np.PyArray_DIMS(ap1), typenum)
 * 
 *         compare_func = compare_functions[np.PyArray_TYPE(ap1)]             # <<<<<<<<<<<<<<
 *         if compare_func == NULL:
 *             raise ValueError("order_filterND not available for this type")
 */
    __pyx_v_compare_func = (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[PyArray_TYPE(__pyx_v_ap1)]);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":216
 * 
 *         compare_func = compare_functions[np.PyArray_TYPE(ap1)]
 *         if compare_func == NULL:             # <<<<<<<<<<<<<<
 *             raise ValueError("order_filterND not available for this type")
 * 
 */
    __pyx_t_10 = (__pyx_v_compare_func == NULL);
    if (__pyx_t_10) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":217
 *         compare_func = compare_functions[np.PyArray_TYPE(ap1)]
 *         if compare_func == NULL:
 *             raise ValueError("order_filterND not available for this type")             # <<<<<<<<<<<<<<
 * 
 *         is1 = np.PyArray_DESCR(ap1).elsize
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_2 = __site_call1_217_28->Target(__site_call1_217_28, __pyx_context, __pyx_t_3, ((System::Object^)"order_filterND not available for this type"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L10;
    }
    __pyx_L10:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":219
 *             raise ValueError("order_filterND not available for this type")
 * 
 *         is1 = np.PyArray_DESCR(ap1).elsize             # <<<<<<<<<<<<<<
 *         sort_buffer = <char *>malloc(n2_nonzero*is1)
 *         if sort_buffer == NULL:
 */
    __pyx_t_2 = PyArray_DESCR(__pyx_v_ap1); 
    __pyx_t_3 = __site_get_elsize_219_35->Target(__site_get_elsize_219_35, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_11 = __site_cvt_cvt_int_219_35->Target(__site_cvt_cvt_int_219_35, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_is1 = __pyx_t_11;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":220
 * 
 *         is1 = np.PyArray_DESCR(ap1).elsize
 *         sort_buffer = <char *>malloc(n2_nonzero*is1)             # <<<<<<<<<<<<<<
 *         if sort_buffer == NULL:
 *             return None
 */
    __pyx_v_sort_buffer = ((char *)malloc((__pyx_v_n2_nonzero * __pyx_v_is1)));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":221
 *         is1 = np.PyArray_DESCR(ap1).elsize
 *         sort_buffer = <char *>malloc(n2_nonzero*is1)
 *         if sort_buffer == NULL:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_10 = (__pyx_v_sort_buffer == NULL);
    if (__pyx_t_10) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":222
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":224
 *             return None
 * 
 *         op = <char *>np.PyArray_DATA(ret)             # <<<<<<<<<<<<<<
 *         os = np.PyArray_DESCR(ret).elsize
 * 
 */
    __pyx_v_op = ((char *)PyArray_DATA(__pyx_v_ret));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":225
 * 
 *         op = <char *>np.PyArray_DATA(ret)
 *         os = np.PyArray_DESCR(ret).elsize             # <<<<<<<<<<<<<<
 * 
 *         bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)
 */
    __pyx_t_3 = PyArray_DESCR(__pyx_v_ret); 
    __pyx_t_2 = __site_get_elsize_225_34->Target(__site_get_elsize_225_34, __pyx_t_3, __pyx_context);
    __pyx_t_3 = nullptr;
    __pyx_t_12 = __site_cvt_cvt_int_225_34->Target(__site_cvt_cvt_int_225_34, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_os = __pyx_t_12;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":227
 *         os = np.PyArray_DESCR(ret).elsize
 * 
 *         bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)             # <<<<<<<<<<<<<<
 *         mode_dep = <np.npy_intp *>malloc(bytes_in_array)
 *         for k in range(np.PyArray_NDIM(ap1)):
 */
    __pyx_t_2 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_3 = (sizeof(__pyx_t_5numpy_npy_intp));
    __pyx_t_1 = __site_op_mul_227_45->Target(__site_op_mul_227_45, __pyx_t_2, __pyx_t_3);
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_13 = __site_cvt_cvt_int_227_45->Target(__site_cvt_cvt_int_227_45, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_bytes_in_array = __pyx_t_13;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":228
 * 
 *         bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)
 *         mode_dep = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)
 */
    __pyx_v_mode_dep = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":229
 *         bytes_in_array = np.PyArray_NDIM(ap1)*sizeof(np.npy_intp)
 *         mode_dep = <np.npy_intp *>malloc(bytes_in_array)
 *         for k in range(np.PyArray_NDIM(ap1)):             # <<<<<<<<<<<<<<
 *             mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)
 * 
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_14 = __site_cvt_cvt_long_229_38->Target(__site_cvt_cvt_long_229_38, __pyx_t_1);
    __pyx_t_1 = nullptr;
    for (__pyx_t_15 = 0; __pyx_t_15 < __pyx_t_14; __pyx_t_15+=1) {
      __pyx_v_k = __pyx_t_15;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":230
 *         mode_dep = <np.npy_intp *>malloc(bytes_in_array)
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)             # <<<<<<<<<<<<<<
 * 
 *         b_ind = <np.npy_intp *>malloc(bytes_in_array)  # loop variables
 */
      (__pyx_v_mode_dep[__pyx_v_k]) = (-(((PyArray_DIMS(__pyx_v_ap2)[__pyx_v_k]) - 1) >> 1));
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":232
 *             mode_dep[k] = -((np.PyArray_DIMS(ap2)[k]-1) >> 1)
 * 
 *         b_ind = <np.npy_intp *>malloc(bytes_in_array)  # loop variables             # <<<<<<<<<<<<<<
 *         memset(b_ind,0,bytes_in_array)
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)
 */
    __pyx_v_b_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":233
 * 
 *         b_ind = <np.npy_intp *>malloc(bytes_in_array)  # loop variables
 *         memset(b_ind,0,bytes_in_array)             # <<<<<<<<<<<<<<
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)
 */
    memset(__pyx_v_b_ind, 0, __pyx_v_bytes_in_array);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":234
 *         b_ind = <np.npy_intp *>malloc(bytes_in_array)  # loop variables
 *         memset(b_ind,0,bytes_in_array)
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         memset(ret_ind,0,bytes_in_array)
 */
    __pyx_v_a_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":235
 *         memset(b_ind,0,bytes_in_array)
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         memset(ret_ind,0,bytes_in_array)
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)
 */
    __pyx_v_ret_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":236
 *         a_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         memset(ret_ind,0,bytes_in_array)             # <<<<<<<<<<<<<<
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)
 */
    memset(__pyx_v_ret_ind, 0, __pyx_v_bytes_in_array);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":237
 *         ret_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         memset(ret_ind,0,bytes_in_array)
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         offsets = <np.npy_uintp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))
 */
    __pyx_v_temp_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":238
 *         memset(ret_ind,0,bytes_in_array)
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)             # <<<<<<<<<<<<<<
 *         offsets = <np.npy_uintp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))
 *         offsets2 = <np.npy_intp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_intp))
 */
    __pyx_v_check_ind = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_v_bytes_in_array));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":239
 *         temp_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         offsets = <np.npy_uintp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))             # <<<<<<<<<<<<<<
 *         offsets2 = <np.npy_intp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_intp))
 *         offset1 = compute_offsets(offsets,offsets2,
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_3 = (sizeof(__pyx_t_5numpy_npy_uintp));
    __pyx_t_2 = __site_op_mul_239_61->Target(__site_op_mul_239_61, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_16 = __site_cvt_cvt_size_t_239_61->Target(__site_cvt_cvt_size_t_239_61, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_offsets = ((__pyx_t_5numpy_npy_uintp *)malloc(__pyx_t_16));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":240
 *         check_ind = <np.npy_intp *>malloc(bytes_in_array)
 *         offsets = <np.npy_uintp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_uintp))
 *         offsets2 = <np.npy_intp *>malloc(np.PyArray_NDIM(ap1)*sizeof(np.npy_intp))             # <<<<<<<<<<<<<<
 *         offset1 = compute_offsets(offsets,offsets2,
 *                                   np.PyArray_DIMS(ap1),np.PyArray_DIMS(ap2),
 */
    __pyx_t_2 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_3 = (sizeof(__pyx_t_5numpy_npy_intp));
    __pyx_t_1 = __site_op_mul_240_61->Target(__site_op_mul_240_61, __pyx_t_2, __pyx_t_3);
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_17 = __site_cvt_cvt_size_t_240_61->Target(__site_cvt_cvt_size_t_240_61, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_offsets2 = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_t_17));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":243
 *         offset1 = compute_offsets(offsets,offsets2,
 *                                   np.PyArray_DIMS(ap1),np.PyArray_DIMS(ap2),
 *                                   np.PyArray_DIMS(ret),mode_dep,np.PyArray_NDIM(ap1))             # <<<<<<<<<<<<<<
 * 
 *         # The filtering proceeds by looping through the output array
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_15 = __site_cvt_cvt_int_243_79->Target(__site_cvt_cvt_int_243_79, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_offset1 = compute_offsets(__pyx_v_offsets, __pyx_v_offsets2, PyArray_DIMS(__pyx_v_ap1), PyArray_DIMS(__pyx_v_ap2), PyArray_DIMS(__pyx_v_ret), __pyx_v_mode_dep, __pyx_t_15);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":263
 * 
 *         # Calculate it once and the just move it around appropriately
 *         np.NpyDataMem_FREE(zptr)             # <<<<<<<<<<<<<<
 *         zptr = <char *>np.PyArray_Zero(ap1)
 *         if zptr == NULL:
 */
    NpyDataMem_FREE(__pyx_v_zptr);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":264
 *         # Calculate it once and the just move it around appropriately
 *         np.NpyDataMem_FREE(zptr)
 *         zptr = <char *>np.PyArray_Zero(ap1)             # <<<<<<<<<<<<<<
 *         if zptr == NULL:
 *             return None
 */
    __pyx_v_zptr = ((char *)PyArray_Zero(((System::Object^)__pyx_v_ap1)));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":265
 *         np.NpyDataMem_FREE(zptr)
 *         zptr = <char *>np.PyArray_Zero(ap1)
 *         if zptr == NULL:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_10 = (__pyx_v_zptr == NULL);
    if (__pyx_t_10) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":266
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":268
 *             return None
 * 
 *         ap1_ptr = <char *>np.PyArray_DATA(ap1) + offset1*is1             # <<<<<<<<<<<<<<
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             a_ind[k] = mode_dep[k]
 */
    __pyx_v_ap1_ptr = (((char *)PyArray_DATA(__pyx_v_ap1)) + (__pyx_v_offset1 * __pyx_v_is1));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":269
 * 
 *         ap1_ptr = <char *>np.PyArray_DATA(ap1) + offset1*is1
 *         for k in range(np.PyArray_NDIM(ap1)):             # <<<<<<<<<<<<<<
 *             a_ind[k] = mode_dep[k]
 *             check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_18 = __site_cvt_cvt_long_269_38->Target(__site_cvt_cvt_long_269_38, __pyx_t_1);
    __pyx_t_1 = nullptr;
    for (__pyx_t_19 = 0; __pyx_t_19 < __pyx_t_18; __pyx_t_19+=1) {
      __pyx_v_k = __pyx_t_19;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":270
 *         ap1_ptr = <char *>np.PyArray_DATA(ap1) + offset1*is1
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             a_ind[k] = mode_dep[k]             # <<<<<<<<<<<<<<
 *             check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1
 * 
 */
      (__pyx_v_a_ind[__pyx_v_k]) = (__pyx_v_mode_dep[__pyx_v_k]);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":271
 *         for k in range(np.PyArray_NDIM(ap1)):
 *             a_ind[k] = mode_dep[k]
 *             check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1             # <<<<<<<<<<<<<<
 * 
 *         a_ind[np.PyArray_NDIM(ap1)-1] -= 1
 */
      (__pyx_v_check_ind[__pyx_v_k]) = (((PyArray_DIM(__pyx_v_ap1, __pyx_v_k) - PyArray_DIM(__pyx_v_ap2, __pyx_v_k)) - (__pyx_v_mode_dep[__pyx_v_k])) - 1);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":273
 *             check_ind[k] = np.PyArray_DIM(ap1,k) - np.PyArray_DIM(ap2,k) - mode_dep[k] - 1
 * 
 *         a_ind[np.PyArray_NDIM(ap1)-1] -= 1             # <<<<<<<<<<<<<<
 *         for i in range(np.PyArray_SIZE(ret)):
 *             # Zero out the sort_buffer (has effect of zero-padding on boundaries).
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ap1); 
    __pyx_t_3 = __site_op_sub_273_34->Target(__site_op_sub_273_34, __pyx_t_1, __pyx_int_1);
    __pyx_t_1 = nullptr;
    __pyx_t_20 = __site_cvt_cvt_Py_ssize_t_273_34->Target(__site_cvt_cvt_Py_ssize_t_273_34, __pyx_t_3);
    __pyx_t_3 = nullptr;
    (__pyx_v_a_ind[__pyx_t_20]) -= 1;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":274
 * 
 *         a_ind[np.PyArray_NDIM(ap1)-1] -= 1
 *         for i in range(np.PyArray_SIZE(ret)):             # <<<<<<<<<<<<<<
 *             # Zero out the sort_buffer (has effect of zero-padding on boundaries).
 *             # Treat object arrays right.
 */
    __pyx_t_21 = PyArray_SIZE(__pyx_v_ret);
    for (__pyx_t_19 = 0; __pyx_t_19 < __pyx_t_21; __pyx_t_19+=1) {
      __pyx_v_i = __pyx_t_19;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":277
 *             # Zero out the sort_buffer (has effect of zero-padding on boundaries).
 *             # Treat object arrays right.
 *             ap2_ptr = sort_buffer             # <<<<<<<<<<<<<<
 *             for k in range(n2_nonzero):
 *                 memcpy(ap2_ptr,zptr,is1)
 */
      __pyx_v_ap2_ptr = __pyx_v_sort_buffer;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":278
 *             # Treat object arrays right.
 *             ap2_ptr = sort_buffer
 *             for k in range(n2_nonzero):             # <<<<<<<<<<<<<<
 *                 memcpy(ap2_ptr,zptr,is1)
 *                 ap2_ptr += is1
 */
      __pyx_t_22 = __pyx_v_n2_nonzero;
      for (__pyx_t_23 = 0; __pyx_t_23 < __pyx_t_22; __pyx_t_23+=1) {
        __pyx_v_k = __pyx_t_23;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":279
 *             ap2_ptr = sort_buffer
 *             for k in range(n2_nonzero):
 *                 memcpy(ap2_ptr,zptr,is1)             # <<<<<<<<<<<<<<
 *                 ap2_ptr += is1
 * 
 */
        memcpy(__pyx_v_ap2_ptr, __pyx_v_zptr, __pyx_v_is1);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":280
 *             for k in range(n2_nonzero):
 *                 memcpy(ap2_ptr,zptr,is1)
 *                 ap2_ptr += is1             # <<<<<<<<<<<<<<
 * 
 *             k = np.PyArray_NDIM(ap1) - 1
 */
        __pyx_v_ap2_ptr += __pyx_v_is1;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":282
 *                 ap2_ptr += is1
 * 
 *             k = np.PyArray_NDIM(ap1) - 1             # <<<<<<<<<<<<<<
 *             for j in range(incr):
 *                 a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start
 */
      __pyx_t_3 = PyArray_NDIM(__pyx_v_ap1); 
      __pyx_t_1 = __site_op_sub_282_37->Target(__site_op_sub_282_37, __pyx_t_3, __pyx_int_1);
      __pyx_t_3 = nullptr;
      __pyx_t_22 = __site_cvt_cvt_int_282_37->Target(__site_cvt_cvt_int_282_37, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_v_k = __pyx_t_22;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":283
 * 
 *             k = np.PyArray_NDIM(ap1) - 1
 *             for j in range(incr):             # <<<<<<<<<<<<<<
 *                 a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start
 *                 k -= 1
 */
      __pyx_t_23 = __pyx_v_incr;
      for (__pyx_t_24 = 0; __pyx_t_24 < __pyx_t_23; __pyx_t_24+=1) {
        __pyx_v_j = __pyx_t_24;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":284
 *             k = np.PyArray_NDIM(ap1) - 1
 *             for j in range(incr):
 *                 a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start             # <<<<<<<<<<<<<<
 *                 k -= 1
 * 
 */
        (__pyx_v_a_ind[__pyx_v_k]) -= (PyArray_DIM(__pyx_v_ret, __pyx_v_k) - 1);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":285
 *             for j in range(incr):
 *                 a_ind[k] -= np.PyArray_DIM(ret, k) - 1  # Return to start
 *                 k -= 1             # <<<<<<<<<<<<<<
 * 
 *             ap1_ptr += offsets2[k]*is1
 */
        __pyx_v_k -= 1;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":287
 *                 k -= 1
 * 
 *             ap1_ptr += offsets2[k]*is1             # <<<<<<<<<<<<<<
 *             a_ind[k] += 1
 *             memcpy(temp_ind, a_ind, bytes_in_array)
 */
      __pyx_v_ap1_ptr += ((__pyx_v_offsets2[__pyx_v_k]) * __pyx_v_is1);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":288
 * 
 *             ap1_ptr += offsets2[k]*is1
 *             a_ind[k] += 1             # <<<<<<<<<<<<<<
 *             memcpy(temp_ind, a_ind, bytes_in_array)
 * 
 */
      (__pyx_v_a_ind[__pyx_v_k]) += 1;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":289
 *             ap1_ptr += offsets2[k]*is1
 *             a_ind[k] += 1
 *             memcpy(temp_ind, a_ind, bytes_in_array)             # <<<<<<<<<<<<<<
 * 
 *             check = 0
 */
      memcpy(__pyx_v_temp_ind, __pyx_v_a_ind, __pyx_v_bytes_in_array);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":291
 *             memcpy(temp_ind, a_ind, bytes_in_array)
 * 
 *             check = 0             # <<<<<<<<<<<<<<
 *             k = 0
 *             while (not check and (k < np.PyArray_NDIM(ap1))):
 */
      __pyx_v_check = 0;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":292
 * 
 *             check = 0
 *             k = 0             # <<<<<<<<<<<<<<
 *             while (not check and (k < np.PyArray_NDIM(ap1))):
 *                 check = check or (ret_ind[k] < -mode_dep[k]) or (ret_ind[k] > check_ind[k])
 */
      __pyx_v_k = 0;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":293
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
          __pyx_t_2 = __site_op_lt_293_36->Target(__site_op_lt_293_36, __pyx_t_1, __pyx_t_3);
          __pyx_t_1 = nullptr;
          __pyx_t_3 = nullptr;
          __pyx_t_4 = __site_istrue_293_36->Target(__site_istrue_293_36, __pyx_t_2);
          __pyx_t_2 = nullptr;
          __pyx_t_9 = __pyx_t_4;
        } else {
          __pyx_t_9 = __pyx_t_10;
        }
        if (!__pyx_t_9) break;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":294
 *             k = 0
 *             while (not check and (k < np.PyArray_NDIM(ap1))):
 *                 check = check or (ret_ind[k] < -mode_dep[k]) or (ret_ind[k] > check_ind[k])             # <<<<<<<<<<<<<<
 *                 k += 1
 * 
 */
        __pyx_t_2 = __pyx_v_check;
        __pyx_t_9 = __site_cvt_bool_294_30->Target(__site_cvt_bool_294_30, __pyx_t_2);
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
        __pyx_t_23 = __site_cvt_cvt_int_294_30->Target(__site_cvt_cvt_int_294_30, __pyx_t_1);
        __pyx_t_1 = nullptr;
        __pyx_v_check = __pyx_t_23;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":295
 *             while (not check and (k < np.PyArray_NDIM(ap1))):
 *                 check = check or (ret_ind[k] < -mode_dep[k]) or (ret_ind[k] > check_ind[k])
 *                 k += 1             # <<<<<<<<<<<<<<
 * 
 *             fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)
 */
        __pyx_v_k += 1;
      }

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":297
 *                 k += 1
 * 
 *             fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)             # <<<<<<<<<<<<<<
 *             qsort(<void *>sort_buffer, n2_nonzero, is1, COMPARE_CONST_HELPER(compare_func))
 *             memcpy(op, sort_buffer + order*is1, os)
 */
      __pyx_t_1 = fill_buffer(__pyx_v_ap1_ptr, __pyx_v_ap1, __pyx_v_ap2, __pyx_v_sort_buffer, __pyx_v_n2, __pyx_v_check, __pyx_v_b_ind, __pyx_v_temp_ind, __pyx_v_offsets); 
      __pyx_t_1 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":298
 * 
 *             fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)
 *             qsort(<void *>sort_buffer, n2_nonzero, is1, COMPARE_CONST_HELPER(compare_func))             # <<<<<<<<<<<<<<
 *             memcpy(op, sort_buffer + order*is1, os)
 * 
 */
      qsort(((void *)__pyx_v_sort_buffer), __pyx_v_n2_nonzero, __pyx_v_is1, COMPARE_CONST_HELPER(__pyx_v_compare_func));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":299
 *             fill_buffer(ap1_ptr,ap1,ap2,sort_buffer,n2,check,b_ind,temp_ind,offsets)
 *             qsort(<void *>sort_buffer, n2_nonzero, is1, COMPARE_CONST_HELPER(compare_func))
 *             memcpy(op, sort_buffer + order*is1, os)             # <<<<<<<<<<<<<<
 * 
 *             incr = increment(ret_ind, np.PyArray_NDIM(ret), np.PyArray_DIMS(ret)) # increment index counter
 */
      memcpy(__pyx_v_op, (__pyx_v_sort_buffer + (__pyx_v_order * __pyx_v_is1)), __pyx_v_os);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":301
 *             memcpy(op, sort_buffer + order*is1, os)
 * 
 *             incr = increment(ret_ind, np.PyArray_NDIM(ret), np.PyArray_DIMS(ret)) # increment index counter             # <<<<<<<<<<<<<<
 *             op += os   # increment to next output index
 * 
 */
      __pyx_t_1 = PyArray_NDIM(__pyx_v_ret); 
      __pyx_t_24 = __site_cvt_cvt_int_301_53->Target(__site_cvt_cvt_int_301_53, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_v_incr = increment(__pyx_v_ret_ind, __pyx_t_24, PyArray_DIMS(__pyx_v_ret));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":302
 * 
 *             incr = increment(ret_ind, np.PyArray_NDIM(ret), np.PyArray_DIMS(ret)) # increment index counter
 *             op += os   # increment to next output index             # <<<<<<<<<<<<<<
 * 
 * 
 */
      __pyx_v_op += __pyx_v_os;
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":305
 * 
 * 
 *         free(b_ind)             # <<<<<<<<<<<<<<
 *         free(a_ind)
 *         free(ret_ind)
 */
    free(__pyx_v_b_ind);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":306
 * 
 *         free(b_ind)
 *         free(a_ind)             # <<<<<<<<<<<<<<
 *         free(ret_ind)
 *         free(offsets)
 */
    free(__pyx_v_a_ind);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":307
 *         free(b_ind)
 *         free(a_ind)
 *         free(ret_ind)             # <<<<<<<<<<<<<<
 *         free(offsets)
 *         free(offsets2)
 */
    free(__pyx_v_ret_ind);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":308
 *         free(a_ind)
 *         free(ret_ind)
 *         free(offsets)             # <<<<<<<<<<<<<<
 *         free(offsets2)
 *         free(temp_ind)
 */
    free(__pyx_v_offsets);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":309
 *         free(ret_ind)
 *         free(offsets)
 *         free(offsets2)             # <<<<<<<<<<<<<<
 *         free(temp_ind)
 *         free(check_ind)
 */
    free(__pyx_v_offsets2);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":310
 *         free(offsets)
 *         free(offsets2)
 *         free(temp_ind)             # <<<<<<<<<<<<<<
 *         free(check_ind)
 *         free(mode_dep)
 */
    free(__pyx_v_temp_ind);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":311
 *         free(offsets2)
 *         free(temp_ind)
 *         free(check_ind)             # <<<<<<<<<<<<<<
 *         free(mode_dep)
 *         free(sort_buffer)
 */
    free(__pyx_v_check_ind);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":312
 *         free(temp_ind)
 *         free(check_ind)
 *         free(mode_dep)             # <<<<<<<<<<<<<<
 *         free(sort_buffer)
 * 
 */
    free(__pyx_v_mode_dep);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":313
 *         free(check_ind)
 *         free(mode_dep)
 *         free(sort_buffer)             # <<<<<<<<<<<<<<
 * 
 *         return np.PyArray_Return(ret)
 */
    free(__pyx_v_sort_buffer);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":315
 *         free(sort_buffer)
 * 
 *         return np.PyArray_Return(ret)             # <<<<<<<<<<<<<<
 * 
 *     finally:
 */
    __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_ret)); 
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":319
 *     finally:
 *         # clean up after PyArray_Zero()
 *         if zptr != NULL:             # <<<<<<<<<<<<<<
 *             np.NpyDataMem_FREE(zptr)
 * 
 */
  finally {
    __pyx_t_4 = (__pyx_v_zptr != NULL);
    if (__pyx_t_4) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":320
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":322
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":325
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
    __pyx_v_flip = __site_cvt_cvt_int_325_0->Target(__site_cvt_cvt_int_325_0, flip);
  } else {
    __pyx_v_flip = ((int)1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(mode) == nullptr) {
    __pyx_v_mode = __site_cvt_cvt_int_325_0_1->Target(__site_cvt_cvt_int_325_0_1, mode);
  } else {
    __pyx_v_mode = ((int)2);
  }
  if (dynamic_cast<System::Reflection::Missing^>(boundary) == nullptr) {
    __pyx_v_boundary = __site_cvt_cvt_int_325_0_2->Target(__site_cvt_cvt_int_325_0_2, boundary);
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":329
 *     """
 *     cdef int flag, ret
 *     cdef np.npy_intp *aout_dimens=NULL, *dims=NULL             # <<<<<<<<<<<<<<
 *     cdef char zeros[32] # Zeros
 *     cdef int n1, n2, i, masked_mode, typenum
 */
  __pyx_v_aout_dimens = NULL;
  __pyx_v_dims = NULL;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":335
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":336
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":338
 *     type = np.NpyArray_FindArrayType_2args(in2, type)
 * 
 *     typenum = type.num             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
  __pyx_t_1 = __site_get_num_338_18->Target(__site_get_num_338_18, __pyx_v_type, __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_int_338_18->Target(__site_cvt_cvt_int_338_18, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_typenum = __pyx_t_2;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":340
 *     typenum = type.num
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         ain1 = np.PyArray_FromAny(in1, type, 2, 2, np.NPY_CONTIGUOUS, None)
 *         ain2 = np.PyArray_FromAny(in2, type, 2, 2, np.NPY_CONTIGUOUS, None)
 */
  try {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":341
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":342
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":344
 *         ain2 = np.PyArray_FromAny(in2, type, 2, 2, np.NPY_CONTIGUOUS, None)
 * 
 *         if boundary != PAD and boundary != REFLECT and boundary != CIRCULAR:             # <<<<<<<<<<<<<<
 *             raise ValueError("Incorrect boundary value.")
 * 
 */
    __pyx_t_1 = __pyx_v_boundary;
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "PAD");
    __pyx_t_4 = __site_op_ne_344_20->Target(__site_op_ne_344_20, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_5 = __site_istrue_344_20->Target(__site_istrue_344_20, __pyx_t_4);
    __pyx_t_4 = nullptr;
    if (__pyx_t_5) {
      __pyx_t_4 = __pyx_v_boundary;
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "REFLECT");
      __pyx_t_1 = __site_op_ne_344_40->Target(__site_op_ne_344_40, __pyx_t_4, __pyx_t_3);
      __pyx_t_4 = nullptr;
      __pyx_t_3 = nullptr;
      __pyx_t_6 = __site_istrue_344_40->Target(__site_istrue_344_40, __pyx_t_1);
      __pyx_t_1 = nullptr;
      if (__pyx_t_6) {
        __pyx_t_1 = __pyx_v_boundary;
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "CIRCULAR");
        __pyx_t_4 = __site_op_ne_344_64->Target(__site_op_ne_344_64, __pyx_t_1, __pyx_t_3);
        __pyx_t_1 = nullptr;
        __pyx_t_3 = nullptr;
        __pyx_t_7 = __site_istrue_344_64->Target(__site_istrue_344_64, __pyx_t_4);
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

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":345
 * 
 *         if boundary != PAD and boundary != REFLECT and boundary != CIRCULAR:
 *             raise ValueError("Incorrect boundary value.")             # <<<<<<<<<<<<<<
 * 
 *         if boundary == PAD:
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_3 = __site_call1_345_28->Target(__site_call1_345_28, __pyx_context, __pyx_t_4, ((System::Object^)"Incorrect boundary value."));
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":347
 *             raise ValueError("Incorrect boundary value.")
 * 
 *         if boundary == PAD:             # <<<<<<<<<<<<<<
 *             if fill_value is None:
 *                 newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 */
    __pyx_t_3 = __pyx_v_boundary;
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "PAD");
    __pyx_t_1 = __site_op_eq_347_20->Target(__site_op_eq_347_20, __pyx_t_3, __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_6 = __site_istrue_347_20->Target(__site_istrue_347_20, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":348
 * 
 *         if boundary == PAD:
 *             if fill_value is None:             # <<<<<<<<<<<<<<
 *                 newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 *             else:
 */
      __pyx_t_6 = (__pyx_v_fill_value == nullptr);
      if (__pyx_t_6) {

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":349
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

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":351
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

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":352
 *             else:
 *                 afill = np.PyArray_FROMANY(fill_value, np.NPY_CDOUBLE, 0, 0, np.NPY_CONTIGUOUS)
 *                 if afill is None:             # <<<<<<<<<<<<<<
 *                     return None
 *                 newfill = np.PyArray_Cast(afill, typenum)
 */
        __pyx_t_6 = (((System::Object^)__pyx_v_afill) == nullptr);
        if (__pyx_t_6) {

          /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":353
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

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":354
 *                 if afill is None:
 *                     return None
 *                 newfill = np.PyArray_Cast(afill, typenum)             # <<<<<<<<<<<<<<
 * 
 *             if newfill is None:
 */
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "np");
        __pyx_t_4 = __site_get_PyArray_Cast_354_28->Target(__site_get_PyArray_Cast_354_28, __pyx_t_3, __pyx_context);
        __pyx_t_3 = nullptr;
        __pyx_t_3 = __pyx_v_typenum;
        __pyx_t_1 = __site_call2_354_41->Target(__site_call2_354_41, __pyx_context, __pyx_t_4, ((System::Object^)__pyx_v_afill), __pyx_t_3);
        __pyx_t_4 = nullptr;
        __pyx_t_3 = nullptr;
        if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_newfill = ((NumpyDotNet::ndarray^)__pyx_t_1);
        __pyx_t_1 = nullptr;
      }
      __pyx_L7:;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":356
 *                 newfill = np.PyArray_Cast(afill, typenum)
 * 
 *             if newfill is None:             # <<<<<<<<<<<<<<
 *                 return None
 *         else:
 */
      __pyx_t_6 = (((System::Object^)__pyx_v_newfill) == nullptr);
      if (__pyx_t_6) {

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":357
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

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":359
 *                 return None
 *         else:
 *             newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)             # <<<<<<<<<<<<<<
 *             if newfill is None:
 *                 return None
 */
      __pyx_t_1 = PyArray_SimpleNewFromData(0, __pyx_v_dims, __pyx_v_typenum, __pyx_v_zeros); 
      if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_newfill = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":360
 *         else:
 *             newfill = np.PyArray_SimpleNewFromData(0, dims, typenum, zeros)
 *             if newfill is None:             # <<<<<<<<<<<<<<
 *                 return None
 * 
 */
      __pyx_t_6 = (((System::Object^)__pyx_v_newfill) == nullptr);
      if (__pyx_t_6) {

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":361
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":363
 *                 return None
 * 
 *         n1 = np.PyArray_SIZE(ain1)             # <<<<<<<<<<<<<<
 *         n2 = np.PyArray_SIZE(ain2)
 * 
 */
    __pyx_v_n1 = PyArray_SIZE(__pyx_v_ain1);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":364
 * 
 *         n1 = np.PyArray_SIZE(ain1)
 *         n2 = np.PyArray_SIZE(ain2)             # <<<<<<<<<<<<<<
 * 
 *         aout_dimens = <np.npy_intp *>malloc(np.PyArray_NDIM(ain1)*sizeof(np.npy_intp))
 */
    __pyx_v_n2 = PyArray_SIZE(__pyx_v_ain2);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":366
 *         n2 = np.PyArray_SIZE(ain2)
 * 
 *         aout_dimens = <np.npy_intp *>malloc(np.PyArray_NDIM(ain1)*sizeof(np.npy_intp))             # <<<<<<<<<<<<<<
 *         masked_mode = mode & OUTSIZE_MASK
 * 
 */
    __pyx_t_1 = PyArray_NDIM(__pyx_v_ain1); 
    __pyx_t_3 = (sizeof(__pyx_t_5numpy_npy_intp));
    __pyx_t_4 = __site_op_mul_366_65->Target(__site_op_mul_366_65, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_9 = __site_cvt_cvt_size_t_366_65->Target(__site_cvt_cvt_size_t_366_65, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_v_aout_dimens = ((__pyx_t_5numpy_npy_intp *)malloc(__pyx_t_9));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":367
 * 
 *         aout_dimens = <np.npy_intp *>malloc(np.PyArray_NDIM(ain1)*sizeof(np.npy_intp))
 *         masked_mode = mode & OUTSIZE_MASK             # <<<<<<<<<<<<<<
 * 
 *         if masked_mode == VALID:
 */
    __pyx_t_4 = __pyx_v_mode;
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "OUTSIZE_MASK");
    __pyx_t_1 = __site_op_and_367_27->Target(__site_op_and_367_27, __pyx_t_4, __pyx_t_3);
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_10 = __site_cvt_cvt_int_367_27->Target(__site_cvt_cvt_int_367_27, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_masked_mode = __pyx_t_10;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":369
 *         masked_mode = mode & OUTSIZE_MASK
 * 
 *         if masked_mode == VALID:             # <<<<<<<<<<<<<<
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
 */
    __pyx_t_1 = __pyx_v_masked_mode;
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "VALID");
    __pyx_t_4 = __site_op_eq_369_23->Target(__site_op_eq_369_23, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_6 = __site_istrue_369_23->Target(__site_istrue_369_23, __pyx_t_4);
    __pyx_t_4 = nullptr;
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":370
 * 
 *         if masked_mode == VALID:
 *             for i in range(np.PyArray_NDIM(ain1)):             # <<<<<<<<<<<<<<
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
 *                 if aout_dimens[i] < 0:
 */
      __pyx_t_4 = PyArray_NDIM(__pyx_v_ain1); 
      __pyx_t_11 = __site_cvt_cvt_long_370_42->Target(__site_cvt_cvt_long_370_42, __pyx_t_4);
      __pyx_t_4 = nullptr;
      for (__pyx_t_12 = 0; __pyx_t_12 < __pyx_t_11; __pyx_t_12+=1) {
        __pyx_v_i = __pyx_t_12;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":371
 *         if masked_mode == VALID:
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1             # <<<<<<<<<<<<<<
 *                 if aout_dimens[i] < 0:
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
 */
        (__pyx_v_aout_dimens[__pyx_v_i]) = (((PyArray_DIMS(__pyx_v_ain1)[__pyx_v_i]) - (PyArray_DIMS(__pyx_v_ain2)[__pyx_v_i])) + 1);

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":372
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
 *                 if aout_dimens[i] < 0:             # <<<<<<<<<<<<<<
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
 *         elif masked_mode == SAME:
 */
        __pyx_t_6 = ((__pyx_v_aout_dimens[__pyx_v_i]) < 0);
        if (__pyx_t_6) {

          /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":373
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] - np.PyArray_DIMS(ain2)[i] + 1
 *                 if aout_dimens[i] < 0:
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")             # <<<<<<<<<<<<<<
 *         elif masked_mode == SAME:
 *             for i in range(np.PyArray_NDIM(ain1)):
 */
          __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
          __pyx_t_3 = __site_call1_373_36->Target(__site_call1_373_36, __pyx_context, __pyx_t_4, ((System::Object^)"no part of the output is valid, use option 1 (same) or 2 (full) for third argument"));
          __pyx_t_4 = nullptr;
          throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
          __pyx_t_3 = nullptr;
          goto __pyx_L14;
        }
        __pyx_L14:;
      }
      goto __pyx_L11;
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":374
 *                 if aout_dimens[i] < 0:
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
 *         elif masked_mode == SAME:             # <<<<<<<<<<<<<<
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
 */
    __pyx_t_3 = __pyx_v_masked_mode;
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "SAME");
    __pyx_t_1 = __site_op_eq_374_25->Target(__site_op_eq_374_25, __pyx_t_3, __pyx_t_4);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_6 = __site_istrue_374_25->Target(__site_istrue_374_25, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":375
 *                     raise ValueError("no part of the output is valid, use option 1 (same) or 2 (full) for third argument")
 *         elif masked_mode == SAME:
 *             for i in range(np.PyArray_NDIM(ain1)):             # <<<<<<<<<<<<<<
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
 *         elif masked_mode == FULL:
 */
      __pyx_t_1 = PyArray_NDIM(__pyx_v_ain1); 
      __pyx_t_13 = __site_cvt_cvt_long_375_42->Target(__site_cvt_cvt_long_375_42, __pyx_t_1);
      __pyx_t_1 = nullptr;
      for (__pyx_t_12 = 0; __pyx_t_12 < __pyx_t_13; __pyx_t_12+=1) {
        __pyx_v_i = __pyx_t_12;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":376
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":377
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
 *         elif masked_mode == FULL:             # <<<<<<<<<<<<<<
 *             for i in range(np.PyArray_NDIM(ain1)):
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] + np.PyArray_DIMS(ain2)[i] - 1
 */
    __pyx_t_1 = __pyx_v_masked_mode;
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "FULL");
    __pyx_t_3 = __site_op_eq_377_25->Target(__site_op_eq_377_25, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_6 = __site_istrue_377_25->Target(__site_istrue_377_25, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":378
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i]
 *         elif masked_mode == FULL:
 *             for i in range(np.PyArray_NDIM(ain1)):             # <<<<<<<<<<<<<<
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] + np.PyArray_DIMS(ain2)[i] - 1
 *         else:
 */
      __pyx_t_3 = PyArray_NDIM(__pyx_v_ain1); 
      __pyx_t_14 = __site_cvt_cvt_long_378_42->Target(__site_cvt_cvt_long_378_42, __pyx_t_3);
      __pyx_t_3 = nullptr;
      for (__pyx_t_12 = 0; __pyx_t_12 < __pyx_t_14; __pyx_t_12+=1) {
        __pyx_v_i = __pyx_t_12;

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":379
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

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":381
 *                 aout_dimens[i] = np.PyArray_DIMS(ain1)[i] + np.PyArray_DIMS(ain2)[i] - 1
 *         else:
 *             raise ValueError("mode must be 0 (valid), 1 (same), or 2 (full)")             # <<<<<<<<<<<<<<
 * 
 *         aout = np.PyArray_SimpleNew(np.PyArray_NDIM(ain1), aout_dimens, typenum)
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __site_call1_381_28->Target(__site_call1_381_28, __pyx_context, __pyx_t_3, ((System::Object^)"mode must be 0 (valid), 1 (same), or 2 (full)"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
    }
    __pyx_L11:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":383
 *             raise ValueError("mode must be 0 (valid), 1 (same), or 2 (full)")
 * 
 *         aout = np.PyArray_SimpleNew(np.PyArray_NDIM(ain1), aout_dimens, typenum)             # <<<<<<<<<<<<<<
 *         if aout is None:
 *             return None
 */
    __pyx_t_4 = PyArray_NDIM(__pyx_v_ain1); 
    __pyx_t_12 = __site_cvt_cvt_int_383_51->Target(__site_cvt_cvt_int_383_51, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_4 = PyArray_SimpleNew(__pyx_t_12, __pyx_v_aout_dimens, __pyx_v_typenum); 
    if (__pyx_t_4 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_aout = ((NumpyDotNet::ndarray^)__pyx_t_4);
    __pyx_t_4 = nullptr;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":384
 * 
 *         aout = np.PyArray_SimpleNew(np.PyArray_NDIM(ain1), aout_dimens, typenum)
 *         if aout is None:             # <<<<<<<<<<<<<<
 *             return None
 * 
 */
    __pyx_t_6 = (((System::Object^)__pyx_v_aout) == nullptr);
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":385
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":387
 *             return None
 * 
 *         flag = mode + boundary + (typenum << TYPE_SHIFT) + (flip != 0) * FLIP_MASK             # <<<<<<<<<<<<<<
 * 
 *         ret = pylab_convolve_2d(<char *>np.PyArray_DATA(ain1),     # Input data Ns[0] x Ns[1]
 */
    __pyx_t_4 = (__pyx_v_mode + __pyx_v_boundary);
    __pyx_t_3 = __pyx_v_typenum;
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "TYPE_SHIFT");
    __pyx_t_15 = __site_op_lshift_387_42->Target(__site_op_lshift_387_42, __pyx_t_3, __pyx_t_1);
    __pyx_t_3 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_op_add_387_31->Target(__site_op_add_387_31, __pyx_t_4, __pyx_t_15);
    __pyx_t_4 = nullptr;
    __pyx_t_15 = nullptr;
    __pyx_t_15 = (__pyx_v_flip != 0);
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "FLIP_MASK");
    __pyx_t_3 = __site_op_mul_387_71->Target(__site_op_mul_387_71, __pyx_t_15, __pyx_t_4);
    __pyx_t_15 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_op_add_387_57->Target(__site_op_add_387_57, __pyx_t_1, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_16 = __site_cvt_cvt_int_387_57->Target(__site_cvt_cvt_int_387_57, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_v_flag = __pyx_t_16;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":398
 *                                 np.PyArray_DIMS(ain1),     # Size of image Ns[0] x Ns[1]
 *                                 flag,                      # convolution parameters
 *                                 <char *>np.PyArray_DATA(newfill))  # fill value             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_v_ret = pylab_convolve_2d(((char *)PyArray_DATA(__pyx_v_ain1)), PyArray_STRIDES(__pyx_v_ain1), ((char *)PyArray_DATA(__pyx_v_aout)), PyArray_STRIDES(__pyx_v_aout), ((char *)PyArray_DATA(__pyx_v_ain2)), PyArray_STRIDES(__pyx_v_ain2), PyArray_DIMS(__pyx_v_ain2), PyArray_DIMS(__pyx_v_ain1), __pyx_v_flag, ((char *)PyArray_DATA(__pyx_v_newfill)));

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":401
 * 
 * 
 *         if ret == 0:             # <<<<<<<<<<<<<<
 *             return aout
 *         elif ret in [-5, -4]:
 */
    __pyx_t_6 = (__pyx_v_ret == 0);
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":402
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":403
 *         if ret == 0:
 *             return aout
 *         elif ret in [-5, -4]:             # <<<<<<<<<<<<<<
 *             raise ValueError("convolve2d not available for this type.")
 *         elif ret == -3:
 */
    __pyx_t_4 = __pyx_v_ret;
    __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_int_neg_5, __pyx_int_neg_4});
    __pyx_t_6 = ((__site_contains_403_17->Target(__site_contains_403_17, __pyx_t_4, ((System::Object^)__pyx_t_3))));
    __pyx_t_4 = nullptr;
    __pyx_t_3 = nullptr;
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":404
 *             return aout
 *         elif ret in [-5, -4]:
 *             raise ValueError("convolve2d not available for this type.")             # <<<<<<<<<<<<<<
 *         elif ret == -3:
 *             raise MemoryError
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __site_call1_404_28->Target(__site_call1_404_28, __pyx_context, __pyx_t_3, ((System::Object^)"convolve2d not available for this type."));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L20;
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":405
 *         elif ret in [-5, -4]:
 *             raise ValueError("convolve2d not available for this type.")
 *         elif ret == -3:             # <<<<<<<<<<<<<<
 *             raise MemoryError
 *         elif ret == -2:
 */
    __pyx_t_6 = (__pyx_v_ret == -3);
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":406
 *             raise ValueError("convolve2d not available for this type.")
 *         elif ret == -3:
 *             raise MemoryError             # <<<<<<<<<<<<<<
 *         elif ret == -2:
 *             raise ValueError("Invalid boundary type.")
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "MemoryError");
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L20;
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":407
 *         elif ret == -3:
 *             raise MemoryError
 *         elif ret == -2:             # <<<<<<<<<<<<<<
 *             raise ValueError("Invalid boundary type.")
 *         elif -1:
 */
    __pyx_t_6 = (__pyx_v_ret == -2);
    if (__pyx_t_6) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":408
 *             raise MemoryError
 *         elif ret == -2:
 *             raise ValueError("Invalid boundary type.")             # <<<<<<<<<<<<<<
 *         elif -1:
 *             raise ValueError("Invalid output flag.")
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_3 = __site_call1_408_28->Target(__site_call1_408_28, __pyx_context, __pyx_t_4, ((System::Object^)"Invalid boundary type."));
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L20;
    }
    /*else*/ {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":410
 *             raise ValueError("Invalid boundary type.")
 *         elif -1:
 *             raise ValueError("Invalid output flag.")             # <<<<<<<<<<<<<<
 * 
 *     finally:
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __site_call1_410_28->Target(__site_call1_410_28, __pyx_context, __pyx_t_3, ((System::Object^)"Invalid output flag."));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
    }
    __pyx_L20:;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":413
 * 
 *     finally:
 *         free(aout_dimens)             # <<<<<<<<<<<<<<
 * 
 *     return None
 */
  finally {
    free(__pyx_v_aout_dimens);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":415
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":418
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
  __pyx_v_numtaps = __site_cvt_cvt_int_418_0->Target(__site_cvt_cvt_int_418_0, numtaps);
  __pyx_v_bands = bands;
  __pyx_v_des = des;
  __pyx_v_weight = weight;
  if (dynamic_cast<System::Reflection::Missing^>(type) == nullptr) {
    __pyx_v_type = __site_cvt_cvt_int_418_0_1->Target(__site_cvt_cvt_int_418_0_1, type);
  } else {
    __pyx_v_type = __pyx_k_1;
  }
  if (dynamic_cast<System::Reflection::Missing^>(Hz) == nullptr) {
    __pyx_v_Hz = __site_cvt_cvt_double_418_0->Target(__site_cvt_cvt_double_418_0, Hz);
  } else {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":419
 * 
 * def _remez(int numtaps, object bands, object des, object weight, int type=BANDPASS,
 *            double Hz=1.0, int maxiter=25, int grid_density=16):             # <<<<<<<<<<<<<<
 *     """
 *         h = _remez(numtaps, bands, des, weight, type, Hz, maxiter, grid_density)
 */
    __pyx_v_Hz = ((double)1.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(maxiter) == nullptr) {
    __pyx_v_maxiter = __site_cvt_cvt_int_418_0_2->Target(__site_cvt_cvt_int_418_0_2, maxiter);
  } else {
    __pyx_v_maxiter = ((int)25);
  }
  if (dynamic_cast<System::Reflection::Missing^>(grid_density) == nullptr) {
    __pyx_v_grid_density = __site_cvt_cvt_int_418_0_3->Target(__site_cvt_cvt_int_418_0_3, grid_density);
  } else {
    __pyx_v_grid_density = ((int)16);
  }
  __pyx_v_a_bands = nullptr;
  __pyx_v_a_des = nullptr;
  __pyx_v_a_weight = nullptr;
  __pyx_v_h = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":434
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
  __pyx_t_6 = (!(__site_contains_434_12->Target(__site_contains_434_12, __pyx_t_1, ((System::Object^)__pyx_t_5))));
  __pyx_t_1 = nullptr;
  __pyx_t_5 = nullptr;
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":435
 * 
 *     if type not in [BANDPASS, DIFFERENTIATOR, HILBERT]:
 *         raise ValueError("The type must be BANDPASS, DIFFERENTIATOR, or HILBERT.")             # <<<<<<<<<<<<<<
 * 
 *     if numtaps < 2:
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_435_24->Target(__site_call1_435_24, __pyx_context, __pyx_t_5, ((System::Object^)"The type must be BANDPASS, DIFFERENTIATOR, or HILBERT."));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":437
 *         raise ValueError("The type must be BANDPASS, DIFFERENTIATOR, or HILBERT.")
 * 
 *     if numtaps < 2:             # <<<<<<<<<<<<<<
 *         raise ValueError("The number of taps must be greater than 1.")
 * 
 */
  __pyx_t_6 = (__pyx_v_numtaps < 2);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":438
 * 
 *     if numtaps < 2:
 *         raise ValueError("The number of taps must be greater than 1.")             # <<<<<<<<<<<<<<
 * 
 *     a_bands = np.PyArray_FROMANY(bands, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_438_24->Target(__site_call1_438_24, __pyx_context, __pyx_t_1, ((System::Object^)"The number of taps must be greater than 1."));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":440
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":441
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":442
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":444
 *     a_weight = np.PyArray_FROMANY(weight, np.NPY_DOUBLE, 1, 1, np.NPY_CONTIGUOUS)
 * 
 *     numbands = np.PyArray_DIMS(a_des)[0]             # <<<<<<<<<<<<<<
 *     if (np.PyArray_DIMS(a_bands)[0] != 2*numbands) or (np.PyArray_DIMS(a_weight)[0] != numbands):
 *         raise ValueError("The inputs desired and weight must have same length.\n  The input bands must have twice this length.")
 */
  __pyx_v_numbands = (PyArray_DIMS(__pyx_v_a_des)[0]);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":445
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":446
 *     numbands = np.PyArray_DIMS(a_des)[0]
 *     if (np.PyArray_DIMS(a_bands)[0] != 2*numbands) or (np.PyArray_DIMS(a_weight)[0] != numbands):
 *         raise ValueError("The inputs desired and weight must have same length.\n  The input bands must have twice this length.")             # <<<<<<<<<<<<<<
 * 
 *     # Check the bands input to see if it is monotonic, divide by
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_446_24->Target(__site_call1_446_24, __pyx_context, __pyx_t_4, ((System::Object^)"The inputs desired and weight must have same length.\n  The input bands must have twice this length."));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":451
 *     # Hz to take from range 0 to 0.5 and check to see if in that range.
 * 
 *     dptr = <double *>np.PyArray_DATA(a_bands)             # <<<<<<<<<<<<<<
 *     oldvalue = 0
 *     for k in range(2*numbands):
 */
  __pyx_v_dptr = ((double *)PyArray_DATA(__pyx_v_a_bands));

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":452
 * 
 *     dptr = <double *>np.PyArray_DATA(a_bands)
 *     oldvalue = 0             # <<<<<<<<<<<<<<
 *     for k in range(2*numbands):
 *         if dptr[0] < oldvalue:
 */
  __pyx_v_oldvalue = 0.0;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":453
 *     dptr = <double *>np.PyArray_DATA(a_bands)
 *     oldvalue = 0
 *     for k in range(2*numbands):             # <<<<<<<<<<<<<<
 *         if dptr[0] < oldvalue:
 *             raise ValueError("Bands must be monotonic starting at zero.")
 */
  __pyx_t_9 = (2 * __pyx_v_numbands);
  for (__pyx_t_10 = 0; __pyx_t_10 < __pyx_t_9; __pyx_t_10+=1) {
    __pyx_v_k = __pyx_t_10;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":454
 *     oldvalue = 0
 *     for k in range(2*numbands):
 *         if dptr[0] < oldvalue:             # <<<<<<<<<<<<<<
 *             raise ValueError("Bands must be monotonic starting at zero.")
 *         if (dptr[0] * 2.0) > Hz:
 */
    __pyx_t_8 = ((__pyx_v_dptr[0]) < __pyx_v_oldvalue);
    if (__pyx_t_8) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":455
 *     for k in range(2*numbands):
 *         if dptr[0] < oldvalue:
 *             raise ValueError("Bands must be monotonic starting at zero.")             # <<<<<<<<<<<<<<
 *         if (dptr[0] * 2.0) > Hz:
 *             raise ValueError("Band edges should be less than 1/2 the sampling frequency")
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __site_call1_455_28->Target(__site_call1_455_28, __pyx_context, __pyx_t_1, ((System::Object^)"Bands must be monotonic starting at zero."));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L10;
    }
    __pyx_L10:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":456
 *         if dptr[0] < oldvalue:
 *             raise ValueError("Bands must be monotonic starting at zero.")
 *         if (dptr[0] * 2.0) > Hz:             # <<<<<<<<<<<<<<
 *             raise ValueError("Band edges should be less than 1/2 the sampling frequency")
 * 
 */
    __pyx_t_8 = (((__pyx_v_dptr[0]) * 2.0) > __pyx_v_Hz);
    if (__pyx_t_8) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":457
 *             raise ValueError("Bands must be monotonic starting at zero.")
 *         if (dptr[0] * 2.0) > Hz:
 *             raise ValueError("Band edges should be less than 1/2 the sampling frequency")             # <<<<<<<<<<<<<<
 * 
 *         oldvalue = dptr[0]
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_457_28->Target(__site_call1_457_28, __pyx_context, __pyx_t_4, ((System::Object^)"Band edges should be less than 1/2 the sampling frequency"));
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L11;
    }
    __pyx_L11:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":459
 *             raise ValueError("Band edges should be less than 1/2 the sampling frequency")
 * 
 *         oldvalue = dptr[0]             # <<<<<<<<<<<<<<
 *         dptr[0] = oldvalue / Hz # Change so that sampling frequency is 1.0
 *         dptr += 1
 */
    __pyx_v_oldvalue = (__pyx_v_dptr[0]);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":460
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":461
 *         oldvalue = dptr[0]
 *         dptr[0] = oldvalue / Hz # Change so that sampling frequency is 1.0
 *         dptr += 1             # <<<<<<<<<<<<<<
 * 
 *     ret_dimens = numtaps
 */
    __pyx_v_dptr += 1;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":463
 *         dptr += 1
 * 
 *     ret_dimens = numtaps             # <<<<<<<<<<<<<<
 *     h = np.PyArray_SimpleNew(1, &ret_dimens, np.NPY_DOUBLE)
 * 
 */
  __pyx_v_ret_dimens = __pyx_v_numtaps;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":464
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":468
 *     err = pre_remez(<double *>np.PyArray_DATA(h), numtaps, numbands,
 *                     <double *>np.PyArray_DATA(a_bands), <double *>np.PyArray_DATA(a_des),
 *                     <double *>np.PyArray_DATA(a_weight), type, maxiter, grid_density)             # <<<<<<<<<<<<<<
 *     if err < 0:
 *         if err == -1:
 */
  __pyx_v_err = pre_remez(((double *)PyArray_DATA(__pyx_v_h)), __pyx_v_numtaps, __pyx_v_numbands, ((double *)PyArray_DATA(__pyx_v_a_bands)), ((double *)PyArray_DATA(__pyx_v_a_des)), ((double *)PyArray_DATA(__pyx_v_a_weight)), __pyx_v_type, __pyx_v_maxiter, __pyx_v_grid_density);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":469
 *                     <double *>np.PyArray_DATA(a_bands), <double *>np.PyArray_DATA(a_des),
 *                     <double *>np.PyArray_DATA(a_weight), type, maxiter, grid_density)
 *     if err < 0:             # <<<<<<<<<<<<<<
 *         if err == -1:
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)
 */
  __pyx_t_8 = (__pyx_v_err < 0);
  if (__pyx_t_8) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":470
 *                     <double *>np.PyArray_DATA(a_weight), type, maxiter, grid_density)
 *     if err < 0:
 *         if err == -1:             # <<<<<<<<<<<<<<
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)
 *         elif err == -2:
 */
    switch (__pyx_v_err) {
      case -1:

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":471
 *     if err < 0:
 *         if err == -1:
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)             # <<<<<<<<<<<<<<
 *         elif err == -2:
 *             raise MemoryError
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __pyx_v_maxiter;
      __pyx_t_5 = __site_op_mod_471_108->Target(__site_op_mod_471_108, ((System::Object^)"Failure to converge after %d iterations.\n      Design may still be correct."), __pyx_t_4);
      __pyx_t_4 = nullptr;
      __pyx_t_4 = __site_call1_471_28->Target(__site_call1_471_28, __pyx_context, __pyx_t_1, ((System::Object^)__pyx_t_5));
      __pyx_t_1 = nullptr;
      __pyx_t_5 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      break;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":472
 *         if err == -1:
 *             raise ValueError("Failure to converge after %d iterations.\n      Design may still be correct." % maxiter)
 *         elif err == -2:             # <<<<<<<<<<<<<<
 *             raise MemoryError
 * 
 */
      case -2:

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":473
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":475
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":478
 * 
 * 
 * def _median2d(image, size=None):             # <<<<<<<<<<<<<<
 *     """ filt = _median2d(data, size)
 *     """
 */

static System::Object^ _median2d(System::Object^ image, [InteropServices::Optional]System::Object^ size) {
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":483
 *     cdef int typenum
 *     cdef np.ndarray a_image, a_size, a_out
 *     cdef np.npy_intp *Nwin = [3,3]             # <<<<<<<<<<<<<<
 * 
 *     typenum = np.PyArray_TYPE(image)
 */
  __pyx_t_1[0] = 3;
  __pyx_t_1[1] = 3;
  __pyx_v_Nwin = __pyx_t_1;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":485
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":486
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":488
 *     a_image = np.PyArray_FROMANY(image, typenum, 2, 2, np.NPY_CONTIGUOUS)
 * 
 *     if size is not None:             # <<<<<<<<<<<<<<
 *         a_size = np.PyArray_FROMANY(size, np.NPY_INTP, 1, 1, np.NPY_CONTIGUOUS)
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):
 */
  __pyx_t_5 = (__pyx_v_size != nullptr);
  if (__pyx_t_5) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":489
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":490
 *     if size is not None:
 *         a_size = np.PyArray_FROMANY(size, np.NPY_INTP, 1, 1, np.NPY_CONTIGUOUS)
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):             # <<<<<<<<<<<<<<
 *             raise ValueError("Size must be a length two sequence")
 *         Nwin[0] = (<np.npy_intp *>np.PyArray_DATA(a_size))[0]
 */
    __pyx_t_2 = PyArray_NDIM(__pyx_v_a_size); 
    __pyx_t_3 = __site_op_ne_490_36->Target(__site_op_ne_490_36, __pyx_t_2, __pyx_int_1);
    __pyx_t_2 = nullptr;
    __pyx_t_5 = __site_istrue_490_36->Target(__site_istrue_490_36, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (!__pyx_t_5) {
      __pyx_t_6 = ((PyArray_DIMS(__pyx_v_a_size)[0]) < 2);
      __pyx_t_7 = __pyx_t_6;
    } else {
      __pyx_t_7 = __pyx_t_5;
    }
    if (__pyx_t_7) {

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":491
 *         a_size = np.PyArray_FROMANY(size, np.NPY_INTP, 1, 1, np.NPY_CONTIGUOUS)
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):
 *             raise ValueError("Size must be a length two sequence")             # <<<<<<<<<<<<<<
 *         Nwin[0] = (<np.npy_intp *>np.PyArray_DATA(a_size))[0]
 *         Nwin[1] = (<np.npy_intp *>np.PyArray_DATA(a_size))[1]
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_2 = __site_call1_491_28->Target(__site_call1_491_28, __pyx_context, __pyx_t_3, ((System::Object^)"Size must be a length two sequence"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":492
 *         if (np.PyArray_NDIM(a_size) != 1) or (np.PyArray_DIMS(a_size)[0] < 2):
 *             raise ValueError("Size must be a length two sequence")
 *         Nwin[0] = (<np.npy_intp *>np.PyArray_DATA(a_size))[0]             # <<<<<<<<<<<<<<
 *         Nwin[1] = (<np.npy_intp *>np.PyArray_DATA(a_size))[1]
 * 
 */
    (__pyx_v_Nwin[0]) = (((__pyx_t_5numpy_npy_intp *)PyArray_DATA(__pyx_v_a_size))[0]);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":493
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":495
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":497
 *     a_out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), typenum)
 * 
 *     if typenum == np.NPY_UBYTE:             # <<<<<<<<<<<<<<
 *         b_medfilt2(<unsigned char *>np.PyArray_DATA(a_image),
 *                    <unsigned char *>np.PyArray_DATA(a_out),
 */
  __pyx_t_7 = (__pyx_v_typenum == NPY_UBYTE);
  if (__pyx_t_7) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":501
 *                    <unsigned char *>np.PyArray_DATA(a_out),
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_FLOAT:
 *         f_medfilt2(<float *>np.PyArray_DATA(a_image),
 */
    b_medfilt2(((unsigned char *)PyArray_DATA(__pyx_v_a_image)), ((unsigned char *)PyArray_DATA(__pyx_v_a_out)), __pyx_v_Nwin, PyArray_DIMS(__pyx_v_a_image), __pyx_function_pointer_check_malloc);
    goto __pyx_L7;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":502
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)
 *     elif typenum == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         f_medfilt2(<float *>np.PyArray_DATA(a_image),
 *                    <float *>np.PyArray_DATA(a_out),
 */
  __pyx_t_7 = (__pyx_v_typenum == NPY_FLOAT);
  if (__pyx_t_7) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":506
 *                    <float *>np.PyArray_DATA(a_out),
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_DOUBLE:
 *         d_medfilt2(<double *>np.PyArray_DATA(a_image),
 */
    f_medfilt2(((float *)PyArray_DATA(__pyx_v_a_image)), ((float *)PyArray_DATA(__pyx_v_a_out)), __pyx_v_Nwin, PyArray_DIMS(__pyx_v_a_image), __pyx_function_pointer_check_malloc);
    goto __pyx_L7;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":507
 *                    Nwin, np.PyArray_DIMS(a_image),
 *                    check_malloc)
 *     elif typenum == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         d_medfilt2(<double *>np.PyArray_DATA(a_image),
 *                    <double *>np.PyArray_DATA(a_out),
 */
  __pyx_t_7 = (__pyx_v_typenum == NPY_DOUBLE);
  if (__pyx_t_7) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":511
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

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":513
 *                    check_malloc)
 *     else:
 *         raise ValueError("2D median filter only supports Int8, Float32, and Float64.")             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(a_out);
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_513_24->Target(__site_call1_513_24, __pyx_context, __pyx_t_2, ((System::Object^)"2D median filter only supports Int8, Float32, and Float64."));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
  }
  __pyx_L7:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":515
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
  __site_cvt_cvt_int_418_82 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_63_56 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_cvt_cvt_int_76_36 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_82_43 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_82_43 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_99_54 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_size_t_99_54 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_99_22 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_149_16 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_op_ne_149_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_cvt_cvt_int_149_24 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_167_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_191_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_191_32 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_192_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_elsize_205_68 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_size_t_205_68 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_206_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_206_49 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_209_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_num_211_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "num", false));
  __site_cvt_cvt_int_211_22 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_213_50 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_217_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_elsize_219_35 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_219_35 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_225_34 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_225_34 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_227_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_int_227_45 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_229_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_239_61 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_size_t_239_61 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_240_61 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_size_t_240_61 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_243_79 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_269_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_op_sub_273_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_cvt_cvt_Py_ssize_t_273_34 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_sub_282_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_cvt_cvt_int_282_37 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_lt_293_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_293_36 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_bool_294_30 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_294_30 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_301_53 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_325_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_325_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_325_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_num_338_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "num", false));
  __site_cvt_cvt_int_338_18 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_344_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_344_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_344_40 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_344_40 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_344_64 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_344_64 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_345_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_eq_347_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_347_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_PyArray_Cast_354_28 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyArray_Cast", false));
  __site_call2_354_41 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_op_mul_366_65 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_size_t_366_65 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_and_367_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_cvt_cvt_int_367_27 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_369_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_369_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_370_42 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_373_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_eq_374_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_374_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_375_42 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_op_eq_377_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_377_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_378_42 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_381_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_383_51 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_lshift_387_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LeftShift));
  __site_op_add_387_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_mul_387_71 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_387_57 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_cvt_int_387_57 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_contains_403_17 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_Contains));
  __site_call1_404_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_408_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_410_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_418_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_418_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_418_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_418_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_418_0_3 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_contains_434_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_Contains));
  __site_call1_435_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_438_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_446_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_455_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_457_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mod_471_108 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_471_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_ne_490_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_490_36 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_491_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_513_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  __pyx_delegate_val_check_malloc = gcnew __pyx_delegate_t_5scipy_6signal_11sigtoolsmod_check_malloc(check_malloc);
  __pyx_function_pointer_check_malloc = (__pyx_fp_t_check_malloc)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_check_malloc).ToPointer());
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

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":9
 * 
 * cimport numpy as np
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * ctypedef int (*CompareFunction) (void *, void *)
 */
  import_array();

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":42
 * 
 * # define some constants
 * OUTSIZE_MASK = 3             # <<<<<<<<<<<<<<
 * FLIP_MASK    = 16
 * TYPE_SHIFT   = 5
 */
  PythonOps::SetGlobal(__pyx_context, "OUTSIZE_MASK", __pyx_int_3);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":43
 * # define some constants
 * OUTSIZE_MASK = 3
 * FLIP_MASK    = 16             # <<<<<<<<<<<<<<
 * TYPE_SHIFT   = 5
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "FLIP_MASK", __pyx_int_16);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":44
 * OUTSIZE_MASK = 3
 * FLIP_MASK    = 16
 * TYPE_SHIFT   = 5             # <<<<<<<<<<<<<<
 * 
 * FULL  = 2
 */
  PythonOps::SetGlobal(__pyx_context, "TYPE_SHIFT", __pyx_int_5);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":46
 * TYPE_SHIFT   = 5
 * 
 * FULL  = 2             # <<<<<<<<<<<<<<
 * SAME  = 1
 * VALID = 0
 */
  PythonOps::SetGlobal(__pyx_context, "FULL", __pyx_int_2);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":47
 * 
 * FULL  = 2
 * SAME  = 1             # <<<<<<<<<<<<<<
 * VALID = 0
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "SAME", __pyx_int_1);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":48
 * FULL  = 2
 * SAME  = 1
 * VALID = 0             # <<<<<<<<<<<<<<
 * 
 * CIRCULAR = 8
 */
  PythonOps::SetGlobal(__pyx_context, "VALID", __pyx_int_0);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":50
 * VALID = 0
 * 
 * CIRCULAR = 8             # <<<<<<<<<<<<<<
 * REFLECT  = 4
 * PAD      = 0
 */
  PythonOps::SetGlobal(__pyx_context, "CIRCULAR", __pyx_int_8);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":51
 * 
 * CIRCULAR = 8
 * REFLECT  = 4             # <<<<<<<<<<<<<<
 * PAD      = 0
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "REFLECT", __pyx_int_4);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":52
 * CIRCULAR = 8
 * REFLECT  = 4
 * PAD      = 0             # <<<<<<<<<<<<<<
 * 
 * BANDPASS       = 1
 */
  PythonOps::SetGlobal(__pyx_context, "PAD", __pyx_int_0);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":54
 * PAD      = 0
 * 
 * BANDPASS       = 1             # <<<<<<<<<<<<<<
 * DIFFERENTIATOR = 2
 * HILBERT        = 3
 */
  PythonOps::SetGlobal(__pyx_context, "BANDPASS", __pyx_int_1);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":55
 * 
 * BANDPASS       = 1
 * DIFFERENTIATOR = 2             # <<<<<<<<<<<<<<
 * HILBERT        = 3
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "DIFFERENTIATOR", __pyx_int_2);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":56
 * BANDPASS       = 1
 * DIFFERENTIATOR = 2
 * HILBERT        = 3             # <<<<<<<<<<<<<<
 * 
 * # A memory allocator which raises a python exception.
 */
  PythonOps::SetGlobal(__pyx_context, "HILBERT", __pyx_int_3);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":152
 * 
 * cdef CompareFunction compare_functions[21]
 * compare_functions[1] = <CompareFunction>BYTE_compare             # <<<<<<<<<<<<<<
 * compare_functions[2] = <CompareFunction>UBYTE_compare
 * compare_functions[3] = <CompareFunction>SHORT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[1]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_BYTE_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":153
 * cdef CompareFunction compare_functions[21]
 * compare_functions[1] = <CompareFunction>BYTE_compare
 * compare_functions[2] = <CompareFunction>UBYTE_compare             # <<<<<<<<<<<<<<
 * compare_functions[3] = <CompareFunction>SHORT_compare
 * compare_functions[4] = <CompareFunction>USHORT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[2]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_UBYTE_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":154
 * compare_functions[1] = <CompareFunction>BYTE_compare
 * compare_functions[2] = <CompareFunction>UBYTE_compare
 * compare_functions[3] = <CompareFunction>SHORT_compare             # <<<<<<<<<<<<<<
 * compare_functions[4] = <CompareFunction>USHORT_compare
 * compare_functions[5] = <CompareFunction>INT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[3]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_SHORT_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":155
 * compare_functions[2] = <CompareFunction>UBYTE_compare
 * compare_functions[3] = <CompareFunction>SHORT_compare
 * compare_functions[4] = <CompareFunction>USHORT_compare             # <<<<<<<<<<<<<<
 * compare_functions[5] = <CompareFunction>INT_compare
 * compare_functions[6] = <CompareFunction>UINT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[4]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_USHORT_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":156
 * compare_functions[3] = <CompareFunction>SHORT_compare
 * compare_functions[4] = <CompareFunction>USHORT_compare
 * compare_functions[5] = <CompareFunction>INT_compare             # <<<<<<<<<<<<<<
 * compare_functions[6] = <CompareFunction>UINT_compare
 * compare_functions[7] = <CompareFunction>LONG_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[5]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_INT_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":157
 * compare_functions[4] = <CompareFunction>USHORT_compare
 * compare_functions[5] = <CompareFunction>INT_compare
 * compare_functions[6] = <CompareFunction>UINT_compare             # <<<<<<<<<<<<<<
 * compare_functions[7] = <CompareFunction>LONG_compare
 * compare_functions[8] = <CompareFunction>ULONG_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[6]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_UINT_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":158
 * compare_functions[5] = <CompareFunction>INT_compare
 * compare_functions[6] = <CompareFunction>UINT_compare
 * compare_functions[7] = <CompareFunction>LONG_compare             # <<<<<<<<<<<<<<
 * compare_functions[8] = <CompareFunction>ULONG_compare
 * compare_functions[9] = <CompareFunction>LONGLONG_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[7]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_LONG_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":159
 * compare_functions[6] = <CompareFunction>UINT_compare
 * compare_functions[7] = <CompareFunction>LONG_compare
 * compare_functions[8] = <CompareFunction>ULONG_compare             # <<<<<<<<<<<<<<
 * compare_functions[9] = <CompareFunction>LONGLONG_compare
 * compare_functions[10] = <CompareFunction>ULONGLONG_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[8]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_ULONG_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":160
 * compare_functions[7] = <CompareFunction>LONG_compare
 * compare_functions[8] = <CompareFunction>ULONG_compare
 * compare_functions[9] = <CompareFunction>LONGLONG_compare             # <<<<<<<<<<<<<<
 * compare_functions[10] = <CompareFunction>ULONGLONG_compare
 * compare_functions[11] = <CompareFunction>FLOAT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[9]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_LONGLONG_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":161
 * compare_functions[8] = <CompareFunction>ULONG_compare
 * compare_functions[9] = <CompareFunction>LONGLONG_compare
 * compare_functions[10] = <CompareFunction>ULONGLONG_compare             # <<<<<<<<<<<<<<
 * compare_functions[11] = <CompareFunction>FLOAT_compare
 * compare_functions[12] = <CompareFunction>DOUBLE_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[10]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_ULONGLONG_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":162
 * compare_functions[9] = <CompareFunction>LONGLONG_compare
 * compare_functions[10] = <CompareFunction>ULONGLONG_compare
 * compare_functions[11] = <CompareFunction>FLOAT_compare             # <<<<<<<<<<<<<<
 * compare_functions[12] = <CompareFunction>DOUBLE_compare
 * compare_functions[13] = <CompareFunction>LONGDOUBLE_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[11]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_FLOAT_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":163
 * compare_functions[10] = <CompareFunction>ULONGLONG_compare
 * compare_functions[11] = <CompareFunction>FLOAT_compare
 * compare_functions[12] = <CompareFunction>DOUBLE_compare             # <<<<<<<<<<<<<<
 * compare_functions[13] = <CompareFunction>LONGDOUBLE_compare
 * compare_functions[17] = <CompareFunction>OBJECT_compare
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[12]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_DOUBLE_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":164
 * compare_functions[11] = <CompareFunction>FLOAT_compare
 * compare_functions[12] = <CompareFunction>DOUBLE_compare
 * compare_functions[13] = <CompareFunction>LONGDOUBLE_compare             # <<<<<<<<<<<<<<
 * compare_functions[17] = <CompareFunction>OBJECT_compare
 * 
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[13]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_LONGDOUBLE_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":165
 * compare_functions[12] = <CompareFunction>DOUBLE_compare
 * compare_functions[13] = <CompareFunction>LONGDOUBLE_compare
 * compare_functions[17] = <CompareFunction>OBJECT_compare             # <<<<<<<<<<<<<<
 * 
 * def _order_filterND(a0, domain, int order=0):
 */
  (__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions[17]) = ((__pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction)__pyx_function_pointer_OBJECT_compare);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":418
 * 
 * 
 * def _remez(int numtaps, object bands, object des, object weight, int type=BANDPASS,             # <<<<<<<<<<<<<<
 *            double Hz=1.0, int maxiter=25, int grid_density=16):
 *     """
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "BANDPASS");
  __pyx_t_2 = __site_cvt_cvt_int_418_82->Target(__site_cvt_cvt_int_418_82, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_k_1 = __pyx_t_2;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/sigtoolsmod.pyx":1
 * # SIGTOOLS module by Travis Oliphant             # <<<<<<<<<<<<<<
 * #
 * # Copyright 2005 Travis Oliphant
 */
  __pyx_t_3 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

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

static __pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction *__pyx_v_5scipy_6signal_11sigtoolsmod_compare_functions = new __pyx_t_5scipy_6signal_11sigtoolsmod_CompareFunction [21];
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
[assembly: PythonModule("scipy__signal__sigtoolsmod", module_sigtoolsmod::typeid)];
};
