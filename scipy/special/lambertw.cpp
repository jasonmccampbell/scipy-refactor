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
  dict["__module__"] = "scipy.special.lambertw";
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
#define __PYX_HAVE_API__scipy__special__lambertw
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "math.h"
#include "stdlib.h"
#include "npy_math.h"

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

typedef __pyx_t_5numpy_npy_intp __pyx_t_5scipy_7special_8lambertw_npy_intp;
/* Cython code section 'complex_type_declarations' */

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

typedef void (*__pyx_t_5numpy_PyUFuncGenericFunction)(char **, __pyx_t_5numpy_npy_intp *, __pyx_t_5numpy_npy_intp *, void *);
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
/* Module declarations from cython */
/* Module declarations from numpy */
/* Module declarations from numpy */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int);
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int);
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_EMPTY(int, __pyx_t_5numpy_intp_t *, int, int);
static CYTHON_INLINE System::Object^ PyArray_EMPTY(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *);
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5numpy_PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int);
static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void *__pyx_delegate_t_5numpy_PyArray_DATA(NumpyDotNet::ndarray^);
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_intp_t *__pyx_delegate_t_5numpy_PyArray_DIMS(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_intp_t __pyx_delegate_t_5numpy_PyArray_SIZE(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^);
static CYTHON_INLINE System::Object^ PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^);
static CYTHON_INLINE System::Object^ PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_Check(System::Object^);
static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_NDIM(System::Object^);
static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5numpy_import_array(void);
static CYTHON_INLINE void import_array(void); /*proto*/
/* Module declarations from scipy.special.lambertw */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7special_8lambertw_zisnan(__pyx_t_double_complex);
static CYTHON_INLINE int zisnan(__pyx_t_double_complex); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate double __pyx_delegate_t_5scipy_7special_8lambertw_zabs(__pyx_t_double_complex);
static CYTHON_INLINE double zabs(__pyx_t_double_complex); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_double_complex __pyx_delegate_t_5scipy_7special_8lambertw_zlog(__pyx_t_double_complex);
static CYTHON_INLINE __pyx_t_double_complex zlog(__pyx_t_double_complex); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_double_complex __pyx_delegate_t_5scipy_7special_8lambertw_zexp(__pyx_t_double_complex);
static CYTHON_INLINE __pyx_t_double_complex zexp(__pyx_t_double_complex); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_7special_8lambertw_lambertw_raise_warning(__pyx_t_double_complex);
static void lambertw_raise_warning(__pyx_t_double_complex); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_double_complex __pyx_delegate_t_5scipy_7special_8lambertw_lambertw_scalar(__pyx_t_double_complex, long, double);
static __pyx_t_double_complex lambertw_scalar(__pyx_t_double_complex, long, double); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_7special_8lambertw__apply_func_to_1d_vec(char **, __pyx_t_5scipy_7special_8lambertw_npy_intp *, __pyx_t_5scipy_7special_8lambertw_npy_intp *, void *);
static void _apply_func_to_1d_vec(char **, __pyx_t_5scipy_7special_8lambertw_npy_intp *, __pyx_t_5scipy_7special_8lambertw_npy_intp *, void *); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.special.lambertw"

/* Implementation of scipy.special.lambertw */
namespace clr_lambertw {
  public ref class module_lambertw sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_112_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_349_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_199_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_199_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_201_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_201_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_207_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_207_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_209_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_209_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_218_54;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_218_54;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_222_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_222_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_226_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_226_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_230_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_230_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_235_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_FromAny_235_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_235_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_238_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_238_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ior_239_14;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_240_77;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_243_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_246_14;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_0;
static System::Object^ __pyx_k_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":49
 *     double NPY_PI
 * 
 * cdef inline bint zisnan(double complex x) nogil:             # <<<<<<<<<<<<<<
 *     return npy_isnan(x.real) or npy_isnan(x.imag)
 * 
 */

static CYTHON_INLINE int zisnan(__pyx_t_double_complex __pyx_v_x) {
  int __pyx_r;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":50
 * 
 * cdef inline bint zisnan(double complex x) nogil:
 *     return npy_isnan(x.real) or npy_isnan(x.imag)             # <<<<<<<<<<<<<<
 * 
 * cdef inline double zabs(double complex x) nogil:
 */
  __pyx_t_1 = npy_isnan(__Pyx_CREAL(__pyx_v_x));
  if (!__pyx_t_1) {
    __pyx_t_2 = npy_isnan(__Pyx_CIMAG(__pyx_v_x));
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  __pyx_r = __pyx_t_3;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":52
 *     return npy_isnan(x.real) or npy_isnan(x.imag)
 * 
 * cdef inline double zabs(double complex x) nogil:             # <<<<<<<<<<<<<<
 *     cdef double r
 *     r = npy_cabs((<npy_cdouble*>&x)[0])
 */

static CYTHON_INLINE double zabs(__pyx_t_double_complex __pyx_v_x) {
  double __pyx_v_r;
  double __pyx_r;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":54
 * cdef inline double zabs(double complex x) nogil:
 *     cdef double r
 *     r = npy_cabs((<npy_cdouble*>&x)[0])             # <<<<<<<<<<<<<<
 *     return r
 * 
 */
  __pyx_v_r = npy_cabs((((npy_cdouble *)(&__pyx_v_x))[0]));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":55
 *     cdef double r
 *     r = npy_cabs((<npy_cdouble*>&x)[0])
 *     return r             # <<<<<<<<<<<<<<
 * 
 * cdef inline double complex zlog(double complex x) nogil:
 */
  __pyx_r = __pyx_v_r;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":57
 *     return r
 * 
 * cdef inline double complex zlog(double complex x) nogil:             # <<<<<<<<<<<<<<
 *     cdef npy_cdouble r
 *     r = npy_clog((<npy_cdouble*>&x)[0])
 */

static CYTHON_INLINE __pyx_t_double_complex zlog(__pyx_t_double_complex __pyx_v_x) {
  npy_cdouble __pyx_v_r;
  __pyx_t_double_complex __pyx_r;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":59
 * cdef inline double complex zlog(double complex x) nogil:
 *     cdef npy_cdouble r
 *     r = npy_clog((<npy_cdouble*>&x)[0])             # <<<<<<<<<<<<<<
 *     return (<double complex*>&r)[0]
 * 
 */
  __pyx_v_r = npy_clog((((npy_cdouble *)(&__pyx_v_x))[0]));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":60
 *     cdef npy_cdouble r
 *     r = npy_clog((<npy_cdouble*>&x)[0])
 *     return (<double complex*>&r)[0]             # <<<<<<<<<<<<<<
 * 
 * cdef inline double complex zexp(double complex x) nogil:
 */
  __pyx_r = (((__pyx_t_double_complex *)(&__pyx_v_r))[0]);
  goto __pyx_L0;

  __pyx_r = __pyx_t_double_complex_from_parts(0, 0);
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":62
 *     return (<double complex*>&r)[0]
 * 
 * cdef inline double complex zexp(double complex x) nogil:             # <<<<<<<<<<<<<<
 *     cdef npy_cdouble r
 *     r = npy_cexp((<npy_cdouble*>&x)[0])
 */

static CYTHON_INLINE __pyx_t_double_complex zexp(__pyx_t_double_complex __pyx_v_x) {
  npy_cdouble __pyx_v_r;
  __pyx_t_double_complex __pyx_r;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":64
 * cdef inline double complex zexp(double complex x) nogil:
 *     cdef npy_cdouble r
 *     r = npy_cexp((<npy_cdouble*>&x)[0])             # <<<<<<<<<<<<<<
 *     return (<double complex*>&r)[0]
 * 
 */
  __pyx_v_r = npy_cexp((((npy_cdouble *)(&__pyx_v_x))[0]));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":65
 *     cdef npy_cdouble r
 *     r = npy_cexp((<npy_cdouble*>&x)[0])
 *     return (<double complex*>&r)[0]             # <<<<<<<<<<<<<<
 * 
 * cdef void lambertw_raise_warning(double complex z): # XXX with gil:
 */
  __pyx_r = (((__pyx_t_double_complex *)(&__pyx_v_r))[0]);
  goto __pyx_L0;

  __pyx_r = __pyx_t_double_complex_from_parts(0, 0);
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":67
 *     return (<double complex*>&r)[0]
 * 
 * cdef void lambertw_raise_warning(double complex z): # XXX with gil:             # <<<<<<<<<<<<<<
 *     # XXX warnings.warn("Lambert W iteration failed to converge: %r" % z)
 *     pass
 */

static  void lambertw_raise_warning(__pyx_t_double_complex __pyx_v_z) {

}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":74
 * 
 * @cython.cdivision(True)
 * cdef double complex lambertw_scalar(double complex z, long k, double tol): # XXX nogil             # <<<<<<<<<<<<<<
 *     """
 *     This is just the implementation of W for a single input z.
 */

static __pyx_t_double_complex (*__pyx_function_pointer_lambertw_scalar)(__pyx_t_double_complex, long, double);
typedef __pyx_t_double_complex (*__pyx_fp_t_lambertw_scalar)(__pyx_t_double_complex, long, double);
static __pyx_delegate_t_5scipy_7special_8lambertw_lambertw_scalar^ __pyx_delegate_val_lambertw_scalar;
static  __pyx_t_double_complex lambertw_scalar(__pyx_t_double_complex __pyx_v_z, long __pyx_v_k, double __pyx_v_tol) {
  __pyx_t_double_complex __pyx_v_w;
  double __pyx_v_u;
  double __pyx_v_absz;
  __pyx_t_double_complex __pyx_v_ew;
  __pyx_t_double_complex __pyx_v_wew;
  __pyx_t_double_complex __pyx_v_wewz;
  __pyx_t_double_complex __pyx_v_wn;
  int __pyx_v_i;
  __pyx_t_double_complex __pyx_r;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":80
 *     """
 *     # Comments copied verbatim from [2] are marked with '>'
 *     if zisnan(z):             # <<<<<<<<<<<<<<
 *         return z
 * 
 */
  __pyx_t_1 = zisnan(__pyx_v_z);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":81
 *     # Comments copied verbatim from [2] are marked with '>'
 *     if zisnan(z):
 *         return z             # <<<<<<<<<<<<<<
 * 
 *     # Return value:
 */
    __pyx_r = __pyx_v_z;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":88
 *     #> We must be extremely careful near the singularities at -1/e and 0
 *     cdef double u
 *     u = exp(-1)             # <<<<<<<<<<<<<<
 * 
 *     cdef double absz
 */
  __pyx_v_u = exp(-1.0);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":91
 * 
 *     cdef double absz
 *     absz = zabs(z)             # <<<<<<<<<<<<<<
 *     if absz <= u:
 *         if z == 0:
 */
  __pyx_v_absz = zabs(__pyx_v_z);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":92
 *     cdef double absz
 *     absz = zabs(z)
 *     if absz <= u:             # <<<<<<<<<<<<<<
 *         if z == 0:
 *             #> w(0,0) = 0; for all other branches we hit the pole
 */
  __pyx_t_1 = (__pyx_v_absz <= __pyx_v_u);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":93
 *     absz = zabs(z)
 *     if absz <= u:
 *         if z == 0:             # <<<<<<<<<<<<<<
 *             #> w(0,0) = 0; for all other branches we hit the pole
 *             if k == 0:
 */
    __pyx_t_1 = (__Pyx_c_eq(__pyx_v_z, __pyx_t_double_complex_from_parts(0, 0)));
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":95
 *         if z == 0:
 *             #> w(0,0) = 0; for all other branches we hit the pole
 *             if k == 0:             # <<<<<<<<<<<<<<
 *                 return z
 *             return -NPY_INFINITY
 */
      __pyx_t_1 = (__pyx_v_k == 0);
      if (__pyx_t_1) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":96
 *             #> w(0,0) = 0; for all other branches we hit the pole
 *             if k == 0:
 *                 return z             # <<<<<<<<<<<<<<
 *             return -NPY_INFINITY
 * 
 */
        __pyx_r = __pyx_v_z;
        goto __pyx_L0;
        goto __pyx_L6;
      }
      __pyx_L6:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":97
 *             if k == 0:
 *                 return z
 *             return -NPY_INFINITY             # <<<<<<<<<<<<<<
 * 
 *         if k == 0:
 */
      __pyx_r = __pyx_t_double_complex_from_parts((-NPY_INFINITY), 0);
      goto __pyx_L0;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":99
 *             return -NPY_INFINITY
 * 
 *         if k == 0:             # <<<<<<<<<<<<<<
 *             w = z # Initial guess for iteration
 *         #> For small real z < 0, the -1 branch beaves roughly like log(-z)
 */
    __pyx_t_1 = (__pyx_v_k == 0);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":100
 * 
 *         if k == 0:
 *             w = z # Initial guess for iteration             # <<<<<<<<<<<<<<
 *         #> For small real z < 0, the -1 branch beaves roughly like log(-z)
 *         elif k == -1 and z.imag ==0 and z.real < 0:
 */
      __pyx_v_w = __pyx_v_z;
      goto __pyx_L7;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":102
 *             w = z # Initial guess for iteration
 *         #> For small real z < 0, the -1 branch beaves roughly like log(-z)
 *         elif k == -1 and z.imag ==0 and z.real < 0:             # <<<<<<<<<<<<<<
 *             w = log(-z.real)
 *         #> Use a simple asymptotic approximation.
 */
    __pyx_t_1 = (__pyx_v_k == -1);
    if (__pyx_t_1) {
      __pyx_t_2 = (__Pyx_CIMAG(__pyx_v_z) == 0.0);
      if (__pyx_t_2) {
        __pyx_t_3 = (__Pyx_CREAL(__pyx_v_z) < 0.0);
        __pyx_t_4 = __pyx_t_3;
      } else {
        __pyx_t_4 = __pyx_t_2;
      }
      __pyx_t_2 = __pyx_t_4;
    } else {
      __pyx_t_2 = __pyx_t_1;
    }
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":103
 *         #> For small real z < 0, the -1 branch beaves roughly like log(-z)
 *         elif k == -1 and z.imag ==0 and z.real < 0:
 *             w = log(-z.real)             # <<<<<<<<<<<<<<
 *         #> Use a simple asymptotic approximation.
 *         else:
 */
      __pyx_v_w = __pyx_t_double_complex_from_parts(log((-__Pyx_CREAL(__pyx_v_z))), 0);
      goto __pyx_L7;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":106
 *         #> Use a simple asymptotic approximation.
 *         else:
 *             w = zlog(z)             # <<<<<<<<<<<<<<
 *             #> The branches are roughly logarithmic. This approximation
 *             #> gets better for large |k|; need to check that this always
 */
      __pyx_v_w = zlog(__pyx_v_z);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":110
 *             #> gets better for large |k|; need to check that this always
 *             #> works for k ~= -1, 0, 1.
 *             if k: w = w + k*2*NPY_PI*1j             # <<<<<<<<<<<<<<
 * 
 *     elif k == 0 and z.imag and zabs(z) <= 0.7:
 */
      if (__pyx_v_k) {
        __pyx_v_w = __Pyx_c_sum(__pyx_v_w, __Pyx_c_prod(__pyx_t_double_complex_from_parts(((__pyx_v_k * 2) * NPY_PI), 0), __pyx_t_double_complex_from_parts(0, 1.0)));
        goto __pyx_L8;
      }
      __pyx_L8:;
    }
    __pyx_L7:;
    goto __pyx_L4;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":112
 *             if k: w = w + k*2*NPY_PI*1j
 * 
 *     elif k == 0 and z.imag and zabs(z) <= 0.7:             # <<<<<<<<<<<<<<
 *         #> Both the W(z) ~= z and W(z) ~= ln(z) approximations break
 *         #> down around z ~= -0.5 (converging to the wrong branch), so patch
 */
  __pyx_t_2 = (__pyx_v_k == 0);
  if (__pyx_t_2) {
    __pyx_t_5 = __Pyx_CIMAG(__pyx_v_z);
    __pyx_t_1 = __site_istrue_112_21->Target(__site_istrue_112_21, __pyx_t_5);
    __pyx_t_5 = nullptr;
    if (__pyx_t_1) {
      __pyx_t_4 = (zabs(__pyx_v_z) <= 0.7);
      __pyx_t_3 = __pyx_t_4;
    } else {
      __pyx_t_3 = __pyx_t_1;
    }
    __pyx_t_1 = __pyx_t_3;
  } else {
    __pyx_t_1 = __pyx_t_2;
  }
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":116
 *         #> down around z ~= -0.5 (converging to the wrong branch), so patch
 *         #> with a constant approximation (adjusted for sign)
 *         if zabs(z+0.5) < 0.1:             # <<<<<<<<<<<<<<
 *             if z.imag > 0:
 *                 w = 0.7 + 0.7j
 */
    __pyx_t_1 = (zabs(__Pyx_c_sum(__pyx_v_z, __pyx_t_double_complex_from_parts(0.5, 0))) < 0.1);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":117
 *         #> with a constant approximation (adjusted for sign)
 *         if zabs(z+0.5) < 0.1:
 *             if z.imag > 0:             # <<<<<<<<<<<<<<
 *                 w = 0.7 + 0.7j
 *             else:
 */
      __pyx_t_1 = (__Pyx_CIMAG(__pyx_v_z) > 0.0);
      if (__pyx_t_1) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":118
 *         if zabs(z+0.5) < 0.1:
 *             if z.imag > 0:
 *                 w = 0.7 + 0.7j             # <<<<<<<<<<<<<<
 *             else:
 *                 w = 0.7 - 0.7j
 */
        __pyx_v_w = __Pyx_c_sum(__pyx_t_double_complex_from_parts(0.7, 0), __pyx_t_double_complex_from_parts(0, 0.69999999999999996));
        goto __pyx_L10;
      }
      /*else*/ {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":120
 *                 w = 0.7 + 0.7j
 *             else:
 *                 w = 0.7 - 0.7j             # <<<<<<<<<<<<<<
 *         else:
 *             w = z
 */
        __pyx_v_w = __Pyx_c_diff(__pyx_t_double_complex_from_parts(0.7, 0), __pyx_t_double_complex_from_parts(0, 0.69999999999999996));
      }
      __pyx_L10:;
      goto __pyx_L9;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":122
 *                 w = 0.7 - 0.7j
 *         else:
 *             w = z             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
      __pyx_v_w = __pyx_v_z;
    }
    __pyx_L9:;
    goto __pyx_L4;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":125
 * 
 *     else:
 *         if z.real == NPY_INFINITY:             # <<<<<<<<<<<<<<
 *             if k == 0:
 *                 return z
 */
    __pyx_t_1 = (__Pyx_CREAL(__pyx_v_z) == NPY_INFINITY);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":126
 *     else:
 *         if z.real == NPY_INFINITY:
 *             if k == 0:             # <<<<<<<<<<<<<<
 *                 return z
 *             else:
 */
      __pyx_t_1 = (__pyx_v_k == 0);
      if (__pyx_t_1) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":127
 *         if z.real == NPY_INFINITY:
 *             if k == 0:
 *                 return z             # <<<<<<<<<<<<<<
 *             else:
 *                 return z + 2*k*NPY_PI*1j
 */
        __pyx_r = __pyx_v_z;
        goto __pyx_L0;
        goto __pyx_L12;
      }
      /*else*/ {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":129
 *                 return z
 *             else:
 *                 return z + 2*k*NPY_PI*1j             # <<<<<<<<<<<<<<
 * 
 *         if z.real == -NPY_INFINITY:
 */
        __pyx_r = __Pyx_c_sum(__pyx_v_z, __Pyx_c_prod(__pyx_t_double_complex_from_parts(((2 * __pyx_v_k) * NPY_PI), 0), __pyx_t_double_complex_from_parts(0, 1.0)));
        goto __pyx_L0;
      }
      __pyx_L12:;
      goto __pyx_L11;
    }
    __pyx_L11:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":131
 *                 return z + 2*k*NPY_PI*1j
 * 
 *         if z.real == -NPY_INFINITY:             # <<<<<<<<<<<<<<
 *             return (-z) + (2*k+1)*NPY_PI*1j
 * 
 */
    __pyx_t_1 = (__Pyx_CREAL(__pyx_v_z) == (-NPY_INFINITY));
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":132
 * 
 *         if z.real == -NPY_INFINITY:
 *             return (-z) + (2*k+1)*NPY_PI*1j             # <<<<<<<<<<<<<<
 * 
 *         #> Simple asymptotic approximation as above
 */
      __pyx_r = __Pyx_c_sum(__Pyx_c_neg(__pyx_v_z), __Pyx_c_prod(__pyx_t_double_complex_from_parts((((2 * __pyx_v_k) + 1) * NPY_PI), 0), __pyx_t_double_complex_from_parts(0, 1.0)));
      goto __pyx_L0;
      goto __pyx_L13;
    }
    __pyx_L13:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":135
 * 
 *         #> Simple asymptotic approximation as above
 *         w = zlog(z)             # <<<<<<<<<<<<<<
 *         if k: w = w + k*2*NPY_PI*1j
 * 
 */
    __pyx_v_w = zlog(__pyx_v_z);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":136
 *         #> Simple asymptotic approximation as above
 *         w = zlog(z)
 *         if k: w = w + k*2*NPY_PI*1j             # <<<<<<<<<<<<<<
 * 
 *     #> Use Halley iteration to solve w*exp(w) = z
 */
    if (__pyx_v_k) {
      __pyx_v_w = __Pyx_c_sum(__pyx_v_w, __Pyx_c_prod(__pyx_t_double_complex_from_parts(((__pyx_v_k * 2) * NPY_PI), 0), __pyx_t_double_complex_from_parts(0, 1.0)));
      goto __pyx_L14;
    }
    __pyx_L14:;
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":141
 *     cdef double complex ew, wew, wewz, wn
 *     cdef int i
 *     for i in range(100):             # <<<<<<<<<<<<<<
 *         ew = zexp(w)
 *         wew = w*ew
 */
  for (__pyx_t_6 = 0; __pyx_t_6 < 100; __pyx_t_6+=1) {
    __pyx_v_i = __pyx_t_6;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":142
 *     cdef int i
 *     for i in range(100):
 *         ew = zexp(w)             # <<<<<<<<<<<<<<
 *         wew = w*ew
 *         wewz = wew-z
 */
    __pyx_v_ew = zexp(__pyx_v_w);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":143
 *     for i in range(100):
 *         ew = zexp(w)
 *         wew = w*ew             # <<<<<<<<<<<<<<
 *         wewz = wew-z
 *         wn = w - wewz / (wew + ew - (w + 2)*wewz/(2*w + 2))
 */
    __pyx_v_wew = __Pyx_c_prod(__pyx_v_w, __pyx_v_ew);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":144
 *         ew = zexp(w)
 *         wew = w*ew
 *         wewz = wew-z             # <<<<<<<<<<<<<<
 *         wn = w - wewz / (wew + ew - (w + 2)*wewz/(2*w + 2))
 *         if zabs(wn-w) < tol*zabs(wn):
 */
    __pyx_v_wewz = __Pyx_c_diff(__pyx_v_wew, __pyx_v_z);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":145
 *         wew = w*ew
 *         wewz = wew-z
 *         wn = w - wewz / (wew + ew - (w + 2)*wewz/(2*w + 2))             # <<<<<<<<<<<<<<
 *         if zabs(wn-w) < tol*zabs(wn):
 *             return wn
 */
    __pyx_v_wn = __Pyx_c_diff(__pyx_v_w, __Pyx_c_quot(__pyx_v_wewz, __Pyx_c_diff(__Pyx_c_sum(__pyx_v_wew, __pyx_v_ew), __Pyx_c_quot(__Pyx_c_prod(__Pyx_c_sum(__pyx_v_w, __pyx_t_double_complex_from_parts(2, 0)), __pyx_v_wewz), __Pyx_c_sum(__Pyx_c_prod(__pyx_t_double_complex_from_parts(2, 0), __pyx_v_w), __pyx_t_double_complex_from_parts(2, 0))))));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":146
 *         wewz = wew-z
 *         wn = w - wewz / (wew + ew - (w + 2)*wewz/(2*w + 2))
 *         if zabs(wn-w) < tol*zabs(wn):             # <<<<<<<<<<<<<<
 *             return wn
 *         else:
 */
    __pyx_t_1 = (zabs(__Pyx_c_diff(__pyx_v_wn, __pyx_v_w)) < (__pyx_v_tol * zabs(__pyx_v_wn)));
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":147
 *         wn = w - wewz / (wew + ew - (w + 2)*wewz/(2*w + 2))
 *         if zabs(wn-w) < tol*zabs(wn):
 *             return wn             # <<<<<<<<<<<<<<
 *         else:
 *             w = wn
 */
      __pyx_r = __pyx_v_wn;
      goto __pyx_L0;
      goto __pyx_L17;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":149
 *             return wn
 *         else:
 *             w = wn             # <<<<<<<<<<<<<<
 * 
 *     lambertw_raise_warning(z)
 */
      __pyx_v_w = __pyx_v_wn;
    }
    __pyx_L17:;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":151
 *             w = wn
 * 
 *     lambertw_raise_warning(z)             # <<<<<<<<<<<<<<
 *     return wn
 * 
 */
  lambertw_raise_warning(__pyx_v_z);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":152
 * 
 *     lambertw_raise_warning(z)
 *     return wn             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_wn;
  goto __pyx_L0;

  __pyx_r = __pyx_t_double_complex_from_parts(0, 0);
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":174
 * ctypedef np.npy_intp npy_intp
 * 
 * cdef void _apply_func_to_1d_vec(char **args, npy_intp *dimensions, npy_intp *steps,             # <<<<<<<<<<<<<<
 *                      void *func) nogil:
 *     cdef npy_intp i
 */

static void (*__pyx_function_pointer__apply_func_to_1d_vec)(char **, __pyx_t_5scipy_7special_8lambertw_npy_intp *, __pyx_t_5scipy_7special_8lambertw_npy_intp *, void *);
typedef void (*__pyx_fp_t__apply_func_to_1d_vec)(char **, __pyx_t_5scipy_7special_8lambertw_npy_intp *, __pyx_t_5scipy_7special_8lambertw_npy_intp *, void *);
static __pyx_delegate_t_5scipy_7special_8lambertw__apply_func_to_1d_vec^ __pyx_delegate_val__apply_func_to_1d_vec;
static  void _apply_func_to_1d_vec(char **__pyx_v_args, __pyx_t_5scipy_7special_8lambertw_npy_intp *__pyx_v_dimensions, __pyx_t_5scipy_7special_8lambertw_npy_intp *__pyx_v_steps, void *__pyx_v_func) {
  __pyx_t_5scipy_7special_8lambertw_npy_intp __pyx_v_i;
  char *__pyx_v_ip1;
  char *__pyx_v_ip2;
  char *__pyx_v_ip3;
  char *__pyx_v_op;
  __pyx_t_5scipy_7special_8lambertw_npy_intp __pyx_t_1;
  __pyx_t_5scipy_7special_8lambertw_npy_intp __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":177
 *                      void *func) nogil:
 *     cdef npy_intp i
 *     cdef char *ip1=args[0], *ip2=args[1], *ip3=args[2], *op=args[3]             # <<<<<<<<<<<<<<
 *     for i in range(0, dimensions[0]):
 *         (<double complex*>op)[0] = (<double complex(*)(double complex, long, double) nogil>func)(
 */
  __pyx_v_ip1 = (__pyx_v_args[0]);
  __pyx_v_ip2 = (__pyx_v_args[1]);
  __pyx_v_ip3 = (__pyx_v_args[2]);
  __pyx_v_op = (__pyx_v_args[3]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":178
 *     cdef npy_intp i
 *     cdef char *ip1=args[0], *ip2=args[1], *ip3=args[2], *op=args[3]
 *     for i in range(0, dimensions[0]):             # <<<<<<<<<<<<<<
 *         (<double complex*>op)[0] = (<double complex(*)(double complex, long, double) nogil>func)(
 *             (<double complex*>ip1)[0], (<long*>ip2)[0], (<double*>ip3)[0])
 */
  __pyx_t_1 = (__pyx_v_dimensions[0]);
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":179
 *     cdef char *ip1=args[0], *ip2=args[1], *ip3=args[2], *op=args[3]
 *     for i in range(0, dimensions[0]):
 *         (<double complex*>op)[0] = (<double complex(*)(double complex, long, double) nogil>func)(             # <<<<<<<<<<<<<<
 *             (<double complex*>ip1)[0], (<long*>ip2)[0], (<double*>ip3)[0])
 *         ip1 += steps[0]; ip2 += steps[1]; ip3 += steps[2]; op += steps[3]
 */
    (((__pyx_t_double_complex *)__pyx_v_op)[0]) = ((__pyx_t_double_complex (*)(__pyx_t_double_complex, long, double))__pyx_v_func)((((__pyx_t_double_complex *)__pyx_v_ip1)[0]), (((long *)__pyx_v_ip2)[0]), (((double *)__pyx_v_ip3)[0]));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":181
 *         (<double complex*>op)[0] = (<double complex(*)(double complex, long, double) nogil>func)(
 *             (<double complex*>ip1)[0], (<long*>ip2)[0], (<double*>ip3)[0])
 *         ip1 += steps[0]; ip2 += steps[1]; ip3 += steps[2]; op += steps[3]             # <<<<<<<<<<<<<<
 * 
 * cdef np.PyUFuncGenericFunction *_loop_funcs = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction))
 */
    __pyx_v_ip1 += (__pyx_v_steps[0]);
    __pyx_v_ip2 += (__pyx_v_steps[1]);
    __pyx_v_ip3 += (__pyx_v_steps[2]);
    __pyx_v_op += (__pyx_v_steps[3]);
  }

}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":202
 *     _inp_outp_types, 1, 3, 1, 0, empty, empty, 0)
 * 
 * def lambertw(z, k=0, tol=1e-8):             # <<<<<<<<<<<<<<
 *     r"""
 *     lambertw(z, k=0, tol=1e-8)
 */

static System::Object^ lambertw(System::Object^ z, [InteropServices::Optional]System::Object^ k, [InteropServices::Optional]System::Object^ tol) {
  System::Object^ __pyx_v_z = nullptr;
  System::Object^ __pyx_v_k = nullptr;
  System::Object^ __pyx_v_tol = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_v_z = z;
  if (dynamic_cast<System::Reflection::Missing^>(k) == nullptr) {
    __pyx_v_k = k;
  } else {
    __pyx_v_k = ((System::Object^)__pyx_int_0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(tol) == nullptr) {
    __pyx_v_tol = tol;
  } else {
    __pyx_v_tol = __pyx_k_1;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":349
 * 
 *     """
 *     return _lambertw(z, k, tol)             # <<<<<<<<<<<<<<
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "_lambertw");
  __pyx_t_2 = __site_call3_349_20->Target(__site_call3_349_20, __pyx_context, __pyx_t_1, __pyx_v_z, __pyx_v_k, __pyx_v_tol);
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":190
 *     object Npy_INTERFACE_array "Npy_INTERFACE_OBJECT" (NpyArray*)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":193
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyUFunc_FromFuncAndDataAndSignature(__pyx_v_func, __pyx_v_data, __pyx_v_types, __pyx_v_ntypes, __pyx_v_nin, __pyx_v_nout, __pyx_v_identity, __pyx_v_name, __pyx_v_doc, __pyx_v_c, NULL)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":195
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_ZEROS(int __pyx_v_ndim, __pyx_t_5numpy_intp_t *__pyx_v_shape, int __pyx_v_typenum, int __pyx_v_fortran) {
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

  /* "../cython/include\numpy.pxd":196
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":198
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":199
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_199_18->Target(__site_get_append_199_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_199_25->Target(__site_call1_199_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":200
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":201
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 */
  __pyx_t_5 = __site_get_zeros_201_16->Target(__site_get_zeros_201_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_201_22->Target(__site_call3_201_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include\numpy.pxd":203
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_EMPTY(int __pyx_v_ndim, __pyx_t_5numpy_intp_t *__pyx_v_shape, int __pyx_v_typenum, int __pyx_v_fortran) {
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

  /* "../cython/include\numpy.pxd":204
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":206
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":207
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_207_18->Target(__site_get_append_207_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_207_25->Target(__site_call1_207_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":208
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":209
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):
 */
  __pyx_t_5 = __site_get_empty_209_16->Target(__site_get_empty_209_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_209_22->Target(__site_call3_209_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include\numpy.pxd":211
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":212
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

  /* "../cython/include\numpy.pxd":213
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

  /* "../cython/include\numpy.pxd":214
 *     assert subtype == NULL
 *     assert obj == NULL
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))             # <<<<<<<<<<<<<<
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_New(__pyx_v_subtype, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, __pyx_v_strides, __pyx_v_data, __pyx_v_itemsize, __pyx_v_flags, __pyx_v_obj)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":216
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):             # <<<<<<<<<<<<<<
 *      # XXX "long long" is wrong type
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)
 */

static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^ __pyx_v_n, int __pyx_v_flags) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":218
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 *      # XXX "long long" is wrong type
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_218_54->Target(__site_get_Array_218_54, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_218_54->Target(__site_cvt_PY_LONG_LONG_218_54, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_CHKFLAGS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)), __pyx_v_flags);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":220
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)
 * 
 * cdef inline void* PyArray_DATA(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":222
 * cdef inline void* PyArray_DATA(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_222_49->Target(__site_get_Array_222_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_222_49->Target(__site_cvt_PY_LONG_LONG_222_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":224
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":226
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_226_49->Target(__site_get_Array_226_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_226_49->Target(__site_cvt_PY_LONG_LONG_226_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":228
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":230
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_1 = __site_get_Array_230_49->Target(__site_get_Array_230_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_230_49->Target(__site_cvt_PY_LONG_LONG_230_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_SIZE(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":232
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
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

  /* "../cython/include\numpy.pxd":233
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":234
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":235
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 */
  __pyx_t_1 = __site_get_NpyArray_235_22->Target(__site_get_NpyArray_235_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_FromAny_235_31->Target(__site_get_FromAny_235_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_235_39->Target(__site_call6_235_39, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":237
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
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

  /* "../cython/include\numpy.pxd":238
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_ENSURECOPY);
  __pyx_t_2 = __site_op_and_238_13->Target(__site_op_and_238_13, __pyx_v_flags, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_238_13->Target(__site_istrue_238_13, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3) {

    /* "../cython/include\numpy.pxd":239
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DEFAULT);
    __pyx_t_1 = __site_op_ior_239_14->Target(__site_op_ior_239_14, __pyx_v_flags, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_flags = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include\numpy.pxd":240
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Check(obj):
 */
  __pyx_t_4 = __site_cvt_int_240_77->Target(__site_cvt_int_240_77, __pyx_v_type);
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

/* "../cython/include\numpy.pxd":242
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 * cdef inline object PyArray_Check(obj):             # <<<<<<<<<<<<<<
 *     return isinstance(obj, ndarray)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;

  /* "../cython/include\numpy.pxd":243
 * 
 * cdef inline object PyArray_Check(obj):
 *     return isinstance(obj, ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(obj):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_call2_243_21->Target(__site_call2_243_21, __pyx_context, __pyx_t_1, __pyx_v_obj, ((System::Object^)((System::Object^)__pyx_ptype_5numpy_ndarray)));
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":245
 *     return isinstance(obj, ndarray)
 * 
 * cdef inline object PyArray_NDIM(obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":246
 * 
 * cdef inline object PyArray_NDIM(obj):
 *     return obj.ndim             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_ndim_246_14->Target(__site_get_ndim_246_14, __pyx_v_obj, __pyx_context);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":248
 *     return obj.ndim
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 */

static CYTHON_INLINE void import_array(void) {

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
  __site_istrue_112_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_349_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_199_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_199_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_201_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_201_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_207_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_207_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_209_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_209_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_218_54 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_218_54 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_222_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_222_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_226_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_226_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_230_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_230_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_235_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_FromAny_235_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "FromAny", false));
  __site_call6_235_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_op_and_238_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_istrue_238_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ior_239_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::OrAssign));
  __site_cvt_int_240_77 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call2_243_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_ndim_246_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  /*--- Create function pointers ---*/
  __pyx_delegate_val_lambertw_scalar = gcnew __pyx_delegate_t_5scipy_7special_8lambertw_lambertw_scalar(lambertw_scalar);
  __pyx_function_pointer_lambertw_scalar = (__pyx_fp_t_lambertw_scalar)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_lambertw_scalar).ToPointer());
  __pyx_delegate_val__apply_func_to_1d_vec = gcnew __pyx_delegate_t_5scipy_7special_8lambertw__apply_func_to_1d_vec(_apply_func_to_1d_vec);
  __pyx_function_pointer__apply_func_to_1d_vec = (__pyx_fp_t__apply_func_to_1d_vec)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val__apply_func_to_1d_vec).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  char *__pyx_t_2;
  System::IntPtr __pyx_t_3;
  char *__pyx_t_4;
  System::IntPtr __pyx_t_5;
  PythonDictionary^ __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":24
 * 
 * import cython
 * import warnings             # <<<<<<<<<<<<<<
 * import numpy
 * cimport numpy as np
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "warnings", -1));
  PythonOps::SetGlobal(__pyx_context, "warnings", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":25
 * import cython
 * import warnings
 * import numpy             # <<<<<<<<<<<<<<
 * cimport numpy as np
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "numpy", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":183
 *         ip1 += steps[0]; ip2 += steps[1]; ip3 += steps[2]; op += steps[3]
 * 
 * cdef np.PyUFuncGenericFunction *_loop_funcs = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction))             # <<<<<<<<<<<<<<
 * _loop_funcs[0] = _apply_func_to_1d_vec
 * 
 */
  __pyx_v_5scipy_7special_8lambertw__loop_funcs = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction))));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":184
 * 
 * cdef np.PyUFuncGenericFunction *_loop_funcs = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction))
 * _loop_funcs[0] = _apply_func_to_1d_vec             # <<<<<<<<<<<<<<
 * 
 * cdef char *_inp_outp_types = <char *>malloc(4)
 */
  (__pyx_v_5scipy_7special_8lambertw__loop_funcs[0]) = __pyx_function_pointer__apply_func_to_1d_vec;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":186
 * _loop_funcs[0] = _apply_func_to_1d_vec
 * 
 * cdef char *_inp_outp_types = <char *>malloc(4)             # <<<<<<<<<<<<<<
 * _inp_outp_types[0] = np.NPY_CDOUBLE
 * _inp_outp_types[1] = np.NPY_LONG
 */
  __pyx_v_5scipy_7special_8lambertw__inp_outp_types = ((char *)malloc(4));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":187
 * 
 * cdef char *_inp_outp_types = <char *>malloc(4)
 * _inp_outp_types[0] = np.NPY_CDOUBLE             # <<<<<<<<<<<<<<
 * _inp_outp_types[1] = np.NPY_LONG
 * _inp_outp_types[2] = np.NPY_DOUBLE
 */
  (__pyx_v_5scipy_7special_8lambertw__inp_outp_types[0]) = NPY_CDOUBLE;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":188
 * cdef char *_inp_outp_types = <char *>malloc(4)
 * _inp_outp_types[0] = np.NPY_CDOUBLE
 * _inp_outp_types[1] = np.NPY_LONG             # <<<<<<<<<<<<<<
 * _inp_outp_types[2] = np.NPY_DOUBLE
 * _inp_outp_types[3] = np.NPY_CDOUBLE
 */
  (__pyx_v_5scipy_7special_8lambertw__inp_outp_types[1]) = NPY_LONG;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":189
 * _inp_outp_types[0] = np.NPY_CDOUBLE
 * _inp_outp_types[1] = np.NPY_LONG
 * _inp_outp_types[2] = np.NPY_DOUBLE             # <<<<<<<<<<<<<<
 * _inp_outp_types[3] = np.NPY_CDOUBLE
 * 
 */
  (__pyx_v_5scipy_7special_8lambertw__inp_outp_types[2]) = NPY_DOUBLE;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":190
 * _inp_outp_types[1] = np.NPY_LONG
 * _inp_outp_types[2] = np.NPY_DOUBLE
 * _inp_outp_types[3] = np.NPY_CDOUBLE             # <<<<<<<<<<<<<<
 * 
 * # import_array()
 */
  (__pyx_v_5scipy_7special_8lambertw__inp_outp_types[3]) = NPY_CDOUBLE;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":196
 * 
 * # The actual ufunc declaration:
 * cdef void **the_func_to_apply = <void **>malloc(sizeof(void*))             # <<<<<<<<<<<<<<
 * the_func_to_apply[0] = <void*>lambertw_scalar
 * empty = ""
 */
  __pyx_v_5scipy_7special_8lambertw_the_func_to_apply = ((void **)malloc((sizeof(void *))));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":197
 * # The actual ufunc declaration:
 * cdef void **the_func_to_apply = <void **>malloc(sizeof(void*))
 * the_func_to_apply[0] = <void*>lambertw_scalar             # <<<<<<<<<<<<<<
 * empty = ""
 * _lambertw = np.PyUFunc_FromFuncAndData(_loop_funcs, the_func_to_apply,
 */
  (__pyx_v_5scipy_7special_8lambertw_the_func_to_apply[0]) = ((void *)__pyx_function_pointer_lambertw_scalar);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":198
 * cdef void **the_func_to_apply = <void **>malloc(sizeof(void*))
 * the_func_to_apply[0] = <void*>lambertw_scalar
 * empty = ""             # <<<<<<<<<<<<<<
 * _lambertw = np.PyUFunc_FromFuncAndData(_loop_funcs, the_func_to_apply,
 *     _inp_outp_types, 1, 3, 1, 0, empty, empty, 0)
 */
  PythonOps::SetGlobal(__pyx_context, "empty", ((System::Object^)""));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":200
 * empty = ""
 * _lambertw = np.PyUFunc_FromFuncAndData(_loop_funcs, the_func_to_apply,
 *     _inp_outp_types, 1, 3, 1, 0, empty, empty, 0)             # <<<<<<<<<<<<<<
 * 
 * def lambertw(z, k=0, tol=1e-8):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "empty");
  __pyx_t_3 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_1));
  __pyx_t_2 = static_cast<char *>(__pyx_t_3.ToPointer());
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "empty");
  __pyx_t_5 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_1));
  __pyx_t_4 = static_cast<char *>(__pyx_t_5.ToPointer());
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_8lambertw__loop_funcs, __pyx_v_5scipy_7special_8lambertw_the_func_to_apply, __pyx_v_5scipy_7special_8lambertw__inp_outp_types, 1, 3, 1, 0, __pyx_t_2, __pyx_t_4, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_3);
  InteropServices::Marshal::FreeHGlobal(__pyx_t_5);
  PythonOps::SetGlobal(__pyx_context, "_lambertw", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":202
 *     _inp_outp_types, 1, 3, 1, 0, empty, empty, 0)
 * 
 * def lambertw(z, k=0, tol=1e-8):             # <<<<<<<<<<<<<<
 *     r"""
 *     lambertw(z, k=0, tol=1e-8)
 */
  __pyx_t_1 = 1e-8;
  __pyx_k_1 = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\lambertw.pyx":1
 * # Implementation of the Lambert W function [1]. Based on the MPMath             # <<<<<<<<<<<<<<
 * # implementation [2], and documentaion [3].
 * #
 */
  __pyx_t_6 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_6));
  __pyx_t_6 = nullptr;

  /* "../cython/include\numpy.pxd":248
 *     return obj.ndim
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 */
}
/* Cython code section 'cleanup_globals' */
/* Cython code section 'cleanup_module' */
/* Cython code section 'main_method' */
/* Cython code section 'dotnet_globals' */



static Types::PythonType^ __pyx_ptype_5numpy_ndarray = nullptr;
static Types::PythonType^ __pyx_ptype_5numpy_dtype = nullptr;

static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_8lambertw__loop_funcs;
static char *__pyx_v_5scipy_7special_8lambertw__inp_outp_types;
static void **__pyx_v_5scipy_7special_8lambertw_the_func_to_apply;
/* Cython code section 'utility_code_def' */

/* Runtime support code */

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
[assembly: PythonModule("scipy__special__lambertw", module_lambertw::typeid)];
};
