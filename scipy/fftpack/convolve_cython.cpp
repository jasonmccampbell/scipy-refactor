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
  dict["__module__"] = "scipy.fftpack.convolve";
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
#define __PYX_HAVE_API__scipy__fftpack__convolve
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "fwrap_ktp_header.h"
#include "convolve_fc.h"
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

typedef int __pyx_t_5scipy_7fftpack_5numpy_npy_int;

typedef double __pyx_t_5scipy_7fftpack_5numpy_double_t;

typedef int __pyx_t_5scipy_7fftpack_5numpy_npy_intp;

typedef signed char __pyx_t_5scipy_7fftpack_5numpy_npy_int8;

typedef signed short __pyx_t_5scipy_7fftpack_5numpy_npy_int16;

typedef signed int __pyx_t_5scipy_7fftpack_5numpy_npy_int32;

typedef signed PY_LONG_LONG __pyx_t_5scipy_7fftpack_5numpy_npy_int64;

typedef unsigned char __pyx_t_5scipy_7fftpack_5numpy_npy_uint8;

typedef unsigned short __pyx_t_5scipy_7fftpack_5numpy_npy_uint16;

typedef unsigned int __pyx_t_5scipy_7fftpack_5numpy_npy_uint32;

typedef unsigned PY_LONG_LONG __pyx_t_5scipy_7fftpack_5numpy_npy_uint64;

typedef float __pyx_t_5scipy_7fftpack_5numpy_npy_float32;

typedef double __pyx_t_5scipy_7fftpack_5numpy_npy_float64;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_intp __pyx_t_5scipy_7fftpack_5numpy_intp_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_int8 __pyx_t_5scipy_7fftpack_5numpy_int8_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_int16 __pyx_t_5scipy_7fftpack_5numpy_int16_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_int32 __pyx_t_5scipy_7fftpack_5numpy_int32_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_int64 __pyx_t_5scipy_7fftpack_5numpy_int64_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_uint8 __pyx_t_5scipy_7fftpack_5numpy_uint8_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_uint16 __pyx_t_5scipy_7fftpack_5numpy_uint16_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_uint32 __pyx_t_5scipy_7fftpack_5numpy_uint32_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_uint64 __pyx_t_5scipy_7fftpack_5numpy_uint64_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_float32 __pyx_t_5scipy_7fftpack_5numpy_float32_t;

typedef __pyx_t_5scipy_7fftpack_5numpy_npy_float64 __pyx_t_5scipy_7fftpack_5numpy_float64_t;
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

typedef void (*__pyx_t_5scipy_7fftpack_5numpy_PyUFuncGenericFunction)(char **, __pyx_t_5scipy_7fftpack_5numpy_npy_intp *, __pyx_t_5scipy_7fftpack_5numpy_npy_intp *, void *);

typedef System::Object^ __pyx_t_5scipy_7fftpack_9fwrap_ktp_fw_bytes;

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":183
 * 
 * 
 * cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy,             # <<<<<<<<<<<<<<
 *                               int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS
 */

ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_asfortranarray {
  int __pyx_n;
  int alignment;
};

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":198
 *     return result, result
 * 
 * cdef object fw_explicitshapearray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.intp_t *shape, bint copy, int alignment=1):
 *     if value is None:
 */

ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_explicitshapearray {
  int __pyx_n;
  int alignment;
};
/* Cython code section 'utility_code_proto' */

static CYTHON_INLINE long __Pyx_mod_long(long, long); /* proto */

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
/* Module declarations from scipy.fftpack.numpy */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_5numpy_PyUFunc_FromFuncAndData(__pyx_t_5scipy_7fftpack_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int);
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5scipy_7fftpack_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_ZEROS(int, __pyx_t_5scipy_7fftpack_5numpy_intp_t *, int, int);
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5scipy_7fftpack_5numpy_intp_t *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_EMPTY(int, __pyx_t_5scipy_7fftpack_5numpy_intp_t *, int, int);
static CYTHON_INLINE System::Object^ PyArray_EMPTY(int, __pyx_t_5scipy_7fftpack_5numpy_intp_t *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_New(void *, int, __pyx_t_5scipy_7fftpack_5numpy_npy_intp *, int, __pyx_t_5scipy_7fftpack_5numpy_npy_intp *, void *, int, int, void *);
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5scipy_7fftpack_5numpy_npy_intp *, int, __pyx_t_5scipy_7fftpack_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int);
static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void *__pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_DATA(NumpyDotNet::ndarray^);
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5scipy_7fftpack_5numpy_intp_t *__pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_DIMS(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5scipy_7fftpack_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5scipy_7fftpack_5numpy_intp_t __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_SIZE(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5scipy_7fftpack_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^);
static CYTHON_INLINE System::Object^ PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^);
static CYTHON_INLINE System::Object^ PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_Check(System::Object^);
static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_5numpy_PyArray_NDIM(System::Object^);
static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_7fftpack_5numpy_import_array(void);
static CYTHON_INLINE void import_array(void); /*proto*/
/* Module declarations from scipy.fftpack.fwrap_ktp */
/* Module declarations from scipy.fftpack.convolve_fc */
/* Module declarations from scipy.fftpack.convolve */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7fftpack_8convolve_init_convolution_kernel_cb_core(double *, int);
static int init_convolution_kernel_cb_core(double *, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate double __pyx_delegate_t_5scipy_7fftpack_8convolve_init_convolution_kernel_cb(int);
static double init_convolution_kernel_cb(int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_8convolve_destroy_convolve_cache(int __pyx_skip_dispatch);
static System::Object^ destroy_convolve_cache(int __pyx_skip_dispatch); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_8convolve_fw_asfortranarray(System::Object^, int, int, int, ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_asfortranarray ^__pyx_optional_args);
static System::Object^ fw_asfortranarray(System::Object^, int, int, int, ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_asfortranarray ^__pyx_optional_args); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_7fftpack_8convolve_fw_explicitshapearray(System::Object^, int, int, __pyx_t_5scipy_7fftpack_5numpy_intp_t *, int, ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_explicitshapearray ^__pyx_optional_args);
static System::Object^ fw_explicitshapearray(System::Object^, int, int, __pyx_t_5scipy_7fftpack_5numpy_intp_t *, int, ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_explicitshapearray ^__pyx_optional_args); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.fftpack.convolve"

/* Implementation of scipy.fftpack.convolve */
namespace clr_convolve {
  public ref class module_convolve sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_intc_2_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int8_3_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int8_4_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int16_5_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int16_6_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int32_7_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int32_8_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int64_9_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int64_10_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_single_11_13;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_float32_12_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_float32_13_15;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_float64_14_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_float64_15_15;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_16_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_csingle_17_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_csingle_18_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_csingle_19_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_cdouble_20_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_cdouble_21_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_cdouble_22_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_byte_23_17;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_intc_24_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int8_25_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int8_26_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int16_27_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int16_28_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int32_29_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int32_30_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int64_31_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int64_32_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_intc_33_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_49_38;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_double_49_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_ARGS_51_38;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_double_51_38;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_56_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_56_31;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_68_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_68_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_fwi_integer_t_88_20;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_90_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_93_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_94_26;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_120_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_120_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_141_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_144_24;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_149_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_171_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_174_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_177_24;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_189_55;
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
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":33
 *     void *memcpy(void *dest, void *src, size_t n)
 * 
 * cdef class _CallbackInfo(object):             # <<<<<<<<<<<<<<
 *     cdef object callback
 *     cdef object extra_args
 */
[PythonType]
ref struct _CallbackInfo {
  System::Object^ callback;
  System::Object^ extra_args;
  System::Object^ exc;
  System::Object^ arrays;
};

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":41
 * cdef _CallbackInfo kernel_func_info
 * 
 * cdef int init_convolution_kernel_cb_core(double* presult, int k):             # <<<<<<<<<<<<<<
 *     global kernel_func_info
 *     cdef _CallbackInfo info
 */

static  int init_convolution_kernel_cb_core(double *__pyx_v_presult, int __pyx_v_k) {
  _CallbackInfo^ __pyx_v_info;
  int __pyx_r;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  double __pyx_t_6;
  double __pyx_t_7;
  __pyx_v_info = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":45
 *     cdef _CallbackInfo info
 * 
 *     info = kernel_func_info             # <<<<<<<<<<<<<<
 *     kernel_func_info = None
 *     try:
 */
  __pyx_v_info = __pyx_v_5scipy_7fftpack_8convolve_kernel_func_info;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":46
 * 
 *     info = kernel_func_info
 *     kernel_func_info = None             # <<<<<<<<<<<<<<
 *     try:
 *         if info.extra_args is None:
 */
  __pyx_v_5scipy_7fftpack_8convolve_kernel_func_info = ((_CallbackInfo^)nullptr);

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":47
 *     info = kernel_func_info
 *     kernel_func_info = None
 *     try:             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             presult[0] = info.callback(k)
 */
  try {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":48
 *     kernel_func_info = None
 *     try:
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             presult[0] = info.callback(k)
 *         else:
 */
    __pyx_t_3 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_3) {

      /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":49
 *     try:
 *         if info.extra_args is None:
 *             presult[0] = info.callback(k)             # <<<<<<<<<<<<<<
 *         else:
 *             presult[0] = info.callback(k, *info.extra_args)
 */
      __pyx_t_4 = __pyx_v_k;
      __pyx_t_5 = __site_call1_49_38->Target(__site_call1_49_38, __pyx_context, __pyx_v_info->callback, __pyx_t_4);
      __pyx_t_4 = nullptr;
      __pyx_t_6 = __site_cvt_double_49_38->Target(__site_cvt_double_49_38, __pyx_t_5);
      __pyx_t_5 = nullptr;
      (__pyx_v_presult[0]) = __pyx_t_6;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":51
 *             presult[0] = info.callback(k)
 *         else:
 *             presult[0] = info.callback(k, *info.extra_args)             # <<<<<<<<<<<<<<
 *         kernel_func_info = info
 *         return 0
 */
      __pyx_t_5 = __pyx_v_k;
      __pyx_t_4 = __site_call1_ARGS_51_38->Target(__site_call1_ARGS_51_38, __pyx_context, __pyx_v_info->callback, __pyx_t_5, __pyx_v_info->extra_args);
      __pyx_t_5 = nullptr;
      __pyx_t_7 = __site_cvt_double_51_38->Target(__site_cvt_double_51_38, __pyx_t_4);
      __pyx_t_4 = nullptr;
      (__pyx_v_presult[0]) = __pyx_t_7;
    }
    __pyx_L3:;

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":52
 *         else:
 *             presult[0] = info.callback(k, *info.extra_args)
 *         kernel_func_info = info             # <<<<<<<<<<<<<<
 *         return 0
 *     except:
 */
    __pyx_v_5scipy_7fftpack_8convolve_kernel_func_info = __pyx_v_info;

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":53
 *             presult[0] = info.callback(k, *info.extra_args)
 *         kernel_func_info = info
 *         return 0             # <<<<<<<<<<<<<<
 *     except:
 *         kernel_func_info = info
 */
    __pyx_r = 0;
    goto __pyx_L0;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":54
 *         kernel_func_info = info
 *         return 0
 *     except:             # <<<<<<<<<<<<<<
 *         kernel_func_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.fftpack.convolve.init_convolution_kernel_cb_core");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":55
 *         return 0
 *     except:
 *         kernel_func_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         return -1
 */
      __pyx_v_5scipy_7fftpack_8convolve_kernel_func_info = __pyx_v_info;

      /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":56
 *     except:
 *         kernel_func_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         return -1
 * 
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_5 = __site_get_exc_info_56_22->Target(__site_get_exc_info_56_22, __pyx_t_4, __pyx_context);
      __pyx_t_4 = nullptr;
      __pyx_t_4 = __site_call0_56_31->Target(__site_call0_56_31, __pyx_context, __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_v_info->exc = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":57
 *         kernel_func_info = info
 *         info.exc = sys.exc_info()
 *         return -1             # <<<<<<<<<<<<<<
 * 
 * cdef double init_convolution_kernel_cb(int k):
 */
      __pyx_r = -1;
      goto __pyx_L0;
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":59
 *         return -1
 * 
 * cdef double init_convolution_kernel_cb(int k):             # <<<<<<<<<<<<<<
 *     # To make sure we do not lose references, do the longjmp in a
 *     # function with no Python objects
 */

static double (*__pyx_function_pointer_init_convolution_kernel_cb)(int);
typedef double (*__pyx_fp_t_init_convolution_kernel_cb)(int);
static __pyx_delegate_t_5scipy_7fftpack_8convolve_init_convolution_kernel_cb^ __pyx_delegate_val_init_convolution_kernel_cb;
static  double init_convolution_kernel_cb(int __pyx_v_k) {
  double __pyx_v_result;
  double __pyx_r;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":63
 *     # function with no Python objects
 *     cdef double result
 *     if init_convolution_kernel_cb_core(&result, k) == 0:             # <<<<<<<<<<<<<<
 *         return result
 *     else:
 */
  __pyx_t_1 = (init_convolution_kernel_cb_core((&__pyx_v_result), __pyx_v_k) == 0);
  if (__pyx_t_1) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":64
 *     cdef double result
 *     if init_convolution_kernel_cb_core(&result, k) == 0:
 *         return result             # <<<<<<<<<<<<<<
 *     else:
 *         raise RuntimeError
 */
    __pyx_r = __pyx_v_result;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":66
 *         return result
 *     else:
 *         raise RuntimeError             # <<<<<<<<<<<<<<
 * 
 * def init_convolution_kernel(fwi_integer_t n, object kernel_func, fwi_integer_t d=0, object zero_nyquist=None, object kernel_func_extra_args=None, object omega=None):
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
  }
  __pyx_L3:;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":68
 *         raise RuntimeError
 * 
 * def init_convolution_kernel(fwi_integer_t n, object kernel_func, fwi_integer_t d=0, object zero_nyquist=None, object kernel_func_extra_args=None, object omega=None):             # <<<<<<<<<<<<<<
 *     """init_convolution_kernel(n, kernel_func[, d, zero_nyquist, omega]) -> omega
 * 
 */

static System::Object^ init_convolution_kernel(System::Object^ n, System::Object^ kernel_func, [InteropServices::Optional]System::Object^ d, [InteropServices::Optional]System::Object^ zero_nyquist, [InteropServices::Optional]System::Object^ kernel_func_extra_args, [InteropServices::Optional]System::Object^ omega) {
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_v_kernel_func = nullptr;
  fwi_integer_t __pyx_v_d;
  System::Object^ __pyx_v_zero_nyquist = nullptr;
  System::Object^ __pyx_v_kernel_func_extra_args = nullptr;
  System::Object^ __pyx_v_omega = nullptr;
  fwi_integer_t __pyx_v_zero_nyquist_;
  NumpyDotNet::ndarray^ __pyx_v_omega_;
  _CallbackInfo^ __pyx_v_cbinfo;
  System::Object^ __pyx_v_t;
  System::Object^ __pyx_v_val;
  System::Object^ __pyx_v_tb;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  fwi_integer_t __pyx_t_4;
  __pyx_t_5scipy_7fftpack_5numpy_intp_t __pyx_t_5[1];
  array<System::Object^>^ __pyx_t_6;
  System::Object^ __pyx_t_7 = nullptr;
  int __pyx_t_8;
  __pyx_v_n = __site_cvt_68_0->Target(__site_cvt_68_0, n);
  __pyx_v_kernel_func = kernel_func;
  if (dynamic_cast<System::Reflection::Missing^>(d) == nullptr) {
    __pyx_v_d = __site_cvt_68_0_1->Target(__site_cvt_68_0_1, d);
  } else {
    __pyx_v_d = ((fwi_integer_t)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(zero_nyquist) == nullptr) {
    __pyx_v_zero_nyquist = zero_nyquist;
  } else {
    __pyx_v_zero_nyquist = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(kernel_func_extra_args) == nullptr) {
    __pyx_v_kernel_func_extra_args = kernel_func_extra_args;
  } else {
    __pyx_v_kernel_func_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(omega) == nullptr) {
    __pyx_v_omega = omega;
  } else {
    __pyx_v_omega = ((System::Object^)nullptr);
  }
  __pyx_v_omega_ = nullptr;
  __pyx_v_cbinfo = nullptr;
  __pyx_v_t = nullptr;
  __pyx_v_val = nullptr;
  __pyx_v_tb = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":88
 *     cdef np.ndarray omega_
 *     cdef _CallbackInfo cbinfo
 *     zero_nyquist_ = zero_nyquist if (zero_nyquist is not None) else d % 2             # <<<<<<<<<<<<<<
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 */
  __pyx_t_2 = (__pyx_v_zero_nyquist != nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = __pyx_v_zero_nyquist;
  } else {
    __pyx_t_3 = __Pyx_mod_long(__pyx_v_d, 2);
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  __pyx_t_4 = __site_cvt_fwi_integer_t_88_20->Target(__site_cvt_fwi_integer_t_88_20, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_zero_nyquist_ = __pyx_t_4;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":89
 *     cdef _CallbackInfo cbinfo
 *     zero_nyquist_ = zero_nyquist if (zero_nyquist is not None) else d % 2
 *     if not (n > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     omega_, omega = fw_explicitshapearray(omega, fwr_real_x8_t_enum, 1, [n], False)
 */
  __pyx_t_2 = (!(__pyx_v_n > 0));
  if (__pyx_t_2) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":90
 *     zero_nyquist_ = zero_nyquist if (zero_nyquist is not None) else d % 2
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')             # <<<<<<<<<<<<<<
 *     omega_, omega = fw_explicitshapearray(omega, fwr_real_x8_t_enum, 1, [n], False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_90_24->Target(__site_call1_90_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: n > 0"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":91
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     omega_, omega = fw_explicitshapearray(omega, fwr_real_x8_t_enum, 1, [n], False)             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
 */
  __pyx_t_5[0] = __pyx_v_n;
  __pyx_t_3 = fw_explicitshapearray(__pyx_v_omega, NPY_FLOAT64, 1, __pyx_t_5, 0, nullptr); 
  __pyx_t_6 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_3, 2)));
  __pyx_t_1 = __pyx_t_6[0];
  if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_7 = __pyx_t_6[1];
  __pyx_t_3 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_v_omega_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_omega = __pyx_t_7;
  __pyx_t_7 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":92
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     omega_, omega = fw_explicitshapearray(omega, fwr_real_x8_t_enum, 1, [n], False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
 *     cbinfo = _CallbackInfo()
 */
  __pyx_t_2 = (0 <= __pyx_v_n);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_n <= (PyArray_DIMS(__pyx_v_omega_)[0]));
  }
  __pyx_t_8 = (!__pyx_t_2);
  if (__pyx_t_8) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":93
 *     omega_, omega = fw_explicitshapearray(omega, fwr_real_x8_t_enum, 1, [n], False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     cbinfo = _CallbackInfo()
 *     cbinfo.callback = kernel_func
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_7 = __site_call1_93_24->Target(__site_call1_93_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n <= omega.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_7, nullptr, nullptr);
    __pyx_t_7 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":94
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
 *     cbinfo = _CallbackInfo()             # <<<<<<<<<<<<<<
 *     cbinfo.callback = kernel_func
 *     cbinfo.extra_args = kernel_func_extra_args
 */
  __pyx_t_7 = __site_call0_94_26->Target(__site_call0_94_26, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7fftpack_8convolve__CallbackInfo)));
  __pyx_v_cbinfo = ((_CallbackInfo^)__pyx_t_7);
  __pyx_t_7 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":95
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
 *     cbinfo = _CallbackInfo()
 *     cbinfo.callback = kernel_func             # <<<<<<<<<<<<<<
 *     cbinfo.extra_args = kernel_func_extra_args
 *     kernel_func_info = cbinfo
 */
  __pyx_v_cbinfo->callback = __pyx_v_kernel_func;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":96
 *     cbinfo = _CallbackInfo()
 *     cbinfo.callback = kernel_func
 *     cbinfo.extra_args = kernel_func_extra_args             # <<<<<<<<<<<<<<
 *     kernel_func_info = cbinfo
 *     try:
 */
  __pyx_v_cbinfo->extra_args = __pyx_v_kernel_func_extra_args;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":97
 *     cbinfo.callback = kernel_func
 *     cbinfo.extra_args = kernel_func_extra_args
 *     kernel_func_info = cbinfo             # <<<<<<<<<<<<<<
 *     try:
 *         fc.init_convolution_kernel(n, <fwr_real_x8_t*>np.PyArray_DATA(omega_), d, &init_convolution_kernel_cb, zero_nyquist_)
 */
  __pyx_v_5scipy_7fftpack_8convolve_kernel_func_info = __pyx_v_cbinfo;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":98
 *     cbinfo.extra_args = kernel_func_extra_args
 *     kernel_func_info = cbinfo
 *     try:             # <<<<<<<<<<<<<<
 *         fc.init_convolution_kernel(n, <fwr_real_x8_t*>np.PyArray_DATA(omega_), d, &init_convolution_kernel_cb, zero_nyquist_)
 *     except RuntimeError:
 */
  try {
    try {

      /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":99
 *     kernel_func_info = cbinfo
 *     try:
 *         fc.init_convolution_kernel(n, <fwr_real_x8_t*>np.PyArray_DATA(omega_), d, &init_convolution_kernel_cb, zero_nyquist_)             # <<<<<<<<<<<<<<
 *     except RuntimeError:
 *         t, val, tb = cbinfo.exc
 */
      GLOBALFUNC(init_convolution_kernel)(__pyx_v_n, ((fwr_real_x8_t *)PyArray_DATA(__pyx_v_omega_)), __pyx_v_d, __pyx_function_pointer_init_convolution_kernel_cb, __pyx_v_zero_nyquist_);
    } catch (System::Exception^ __pyx_lt_9) {
      System::Object^ __pyx_lt_10 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_9);

      /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":100
 *     try:
 *         fc.init_convolution_kernel(n, <fwr_real_x8_t*>np.PyArray_DATA(omega_), d, &init_convolution_kernel_cb, zero_nyquist_)
 *     except RuntimeError:             # <<<<<<<<<<<<<<
 *         t, val, tb = cbinfo.exc
 *         cbinfo.exc = None
 */
      __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
      System::Object^ __pyx_lt_11;
      __pyx_lt_11 = PythonOps::CheckException(__pyx_context, __pyx_lt_10, __pyx_t_7);
      __pyx_t_7 = nullptr;
      if (__pyx_lt_11 != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.fftpack.convolve.init_convolution_kernel");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_9);

        /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":101
 *         fc.init_convolution_kernel(n, <fwr_real_x8_t*>np.PyArray_DATA(omega_), d, &init_convolution_kernel_cb, zero_nyquist_)
 *     except RuntimeError:
 *         t, val, tb = cbinfo.exc             # <<<<<<<<<<<<<<
 *         cbinfo.exc = None
 *         raise t, val, tb
 */
        __pyx_t_6 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_cbinfo->exc, 3)));
        __pyx_t_7 = __pyx_t_6[0];
        __pyx_t_3 = __pyx_t_6[1];
        __pyx_t_1 = __pyx_t_6[2];
        __pyx_t_6 = nullptr;
        __pyx_v_t = __pyx_t_7;
        __pyx_t_7 = nullptr;
        __pyx_v_val = __pyx_t_3;
        __pyx_t_3 = nullptr;
        __pyx_v_tb = __pyx_t_1;
        __pyx_t_1 = nullptr;

        /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":102
 *     except RuntimeError:
 *         t, val, tb = cbinfo.exc
 *         cbinfo.exc = None             # <<<<<<<<<<<<<<
 *         raise t, val, tb
 *     finally:
 */
        __pyx_v_cbinfo->exc = nullptr;

        /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":103
 *         t, val, tb = cbinfo.exc
 *         cbinfo.exc = None
 *         raise t, val, tb             # <<<<<<<<<<<<<<
 *     finally:
 *         kernel_func_info = None
 */
        throw PythonOps::MakeException(__pyx_context, __pyx_v_t, __pyx_v_val, __pyx_v_tb);
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_9);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":105
 *         raise t, val, tb
 *     finally:
 *         kernel_func_info = None             # <<<<<<<<<<<<<<
 *     return omega
 * 
 */
  finally {
    __pyx_v_5scipy_7fftpack_8convolve_kernel_func_info = ((_CallbackInfo^)nullptr);
  }

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":106
 *     finally:
 *         kernel_func_info = None
 *     return omega             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_omega;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":109
 * 
 * 
 * cpdef object destroy_convolve_cache():             # <<<<<<<<<<<<<<
 *     """destroy_convolve_cache()
 * 
 */

static  System::Object^ destroy_convolve_cache(void) {
  System::Object^ __pyx_r = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":117
 * 
 *     """
 *     fc.destroy_convolve_cache()             # <<<<<<<<<<<<<<
 * 
 * 
 */
  GLOBALFUNC(destroy_convolve_cache)();

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":120
 * 
 * 
 * def convolve(object x, object omega, fwi_integer_t swap_real_imag=0, bint overwrite_x=False):             # <<<<<<<<<<<<<<
 *     """convolve(x, omega[, swap_real_imag, overwrite_x]) -> x
 * 
 */

static System::Object^ convolve(System::Object^ x, System::Object^ omega, [InteropServices::Optional]System::Object^ swap_real_imag, [InteropServices::Optional]System::Object^ overwrite_x) {
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_omega = nullptr;
  fwi_integer_t __pyx_v_swap_real_imag;
  int __pyx_v_overwrite_x;
  NumpyDotNet::ndarray^ __pyx_v_x_;
  NumpyDotNet::ndarray^ __pyx_v_omega_;
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  array<System::Object^>^ __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_x = x;
  __pyx_v_omega = omega;
  if (dynamic_cast<System::Reflection::Missing^>(swap_real_imag) == nullptr) {
    __pyx_v_swap_real_imag = __site_cvt_120_0->Target(__site_cvt_120_0, swap_real_imag);
  } else {
    __pyx_v_swap_real_imag = ((fwi_integer_t)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_x) == nullptr) {
    __pyx_v_overwrite_x = __site_cvt_120_0_1->Target(__site_cvt_120_0_1, overwrite_x);
  } else {
    __pyx_v_overwrite_x = ((int)0);
  }
  __pyx_v_x_ = nullptr;
  __pyx_v_omega_ = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":138
 *     cdef np.ndarray omega_
 *     cdef fwi_integer_t n
 *     x_, x = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, not overwrite_x)             # <<<<<<<<<<<<<<
 *     n = np.PyArray_DIMS(x_)[0]
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
 */
  __pyx_t_1 = fw_asfortranarray(__pyx_v_x, NPY_FLOAT64, 1, (!__pyx_v_overwrite_x), nullptr); 
  __pyx_t_2 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_1, 2)));
  __pyx_t_3 = __pyx_t_2[0];
  if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_4 = __pyx_t_2[1];
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_x_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_v_x = __pyx_t_4;
  __pyx_t_4 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":139
 *     cdef fwi_integer_t n
 *     x_, x = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, not overwrite_x)
 *     n = np.PyArray_DIMS(x_)[0]             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 */
  __pyx_v_n = (PyArray_DIMS(__pyx_v_x_)[0]);

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":140
 *     x_, x = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, not overwrite_x)
 *     n = np.PyArray_DIMS(x_)[0]
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     omega_, omega = fw_asfortranarray(omega, fwr_real_x8_t_enum, 1, False)
 */
  __pyx_t_5 = (0 <= __pyx_v_n);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_v_n <= (PyArray_DIMS(__pyx_v_x_)[0]));
  }
  __pyx_t_6 = (!__pyx_t_5);
  if (__pyx_t_6) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":141
 *     n = np.PyArray_DIMS(x_)[0]
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     omega_, omega = fw_asfortranarray(omega, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_141_24->Target(__site_call1_141_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= x.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":142
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     omega_, omega = fw_asfortranarray(omega, fwr_real_x8_t_enum, 1, False)             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
 */
  __pyx_t_4 = fw_asfortranarray(__pyx_v_omega, NPY_FLOAT64, 1, 0, nullptr); 
  __pyx_t_2 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_4, 2)));
  __pyx_t_1 = __pyx_t_2[0];
  if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_3 = __pyx_t_2[1];
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_omega_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_omega = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":143
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     omega_, omega = fw_asfortranarray(omega, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
 *     fc.convolve(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_), swap_real_imag)
 */
  __pyx_t_6 = (0 <= __pyx_v_n);
  if (__pyx_t_6) {
    __pyx_t_6 = (__pyx_v_n <= (PyArray_DIMS(__pyx_v_omega_)[0]));
  }
  __pyx_t_5 = (!__pyx_t_6);
  if (__pyx_t_5) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":144
 *     omega_, omega = fw_asfortranarray(omega, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.convolve(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_), swap_real_imag)
 *     return x
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_144_24->Target(__site_call1_144_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n <= omega.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":145
 *     if not (0 <= n <= np.PyArray_DIMS(omega_)[0]):
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
 *     fc.convolve(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_), swap_real_imag)             # <<<<<<<<<<<<<<
 *     return x
 * 
 */
  GLOBALFUNC(convolve)(__pyx_v_n, ((fwr_real_x8_t *)PyArray_DATA(__pyx_v_x_)), ((fwr_real_x8_t *)PyArray_DATA(__pyx_v_omega_)), __pyx_v_swap_real_imag);

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":146
 *         raise ValueError("(0 <= n <= omega.shape[0]) not satisifed")
 *     fc.convolve(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_), swap_real_imag)
 *     return x             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_x;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":149
 * 
 * 
 * def convolve_z(object x, object omega_real, object omega_imag, bint overwrite_x=False):             # <<<<<<<<<<<<<<
 *     """convolve_z(x, omega_real, omega_imag[, overwrite_x]) -> x
 * 
 */

static System::Object^ convolve_z(System::Object^ x, System::Object^ omega_real, System::Object^ omega_imag, [InteropServices::Optional]System::Object^ overwrite_x) {
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_omega_real = nullptr;
  System::Object^ __pyx_v_omega_imag = nullptr;
  int __pyx_v_overwrite_x;
  NumpyDotNet::ndarray^ __pyx_v_x_;
  NumpyDotNet::ndarray^ __pyx_v_omega_real_;
  NumpyDotNet::ndarray^ __pyx_v_omega_imag_;
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  array<System::Object^>^ __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_x = x;
  __pyx_v_omega_real = omega_real;
  __pyx_v_omega_imag = omega_imag;
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_x) == nullptr) {
    __pyx_v_overwrite_x = __site_cvt_149_0->Target(__site_cvt_149_0, overwrite_x);
  } else {
    __pyx_v_overwrite_x = ((int)0);
  }
  __pyx_v_x_ = nullptr;
  __pyx_v_omega_real_ = nullptr;
  __pyx_v_omega_imag_ = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":168
 *     cdef np.ndarray omega_imag_
 *     cdef fwi_integer_t n
 *     x_, x = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, not overwrite_x)             # <<<<<<<<<<<<<<
 *     n = np.PyArray_DIMS(x_)[0]
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
 */
  __pyx_t_1 = fw_asfortranarray(__pyx_v_x, NPY_FLOAT64, 1, (!__pyx_v_overwrite_x), nullptr); 
  __pyx_t_2 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_1, 2)));
  __pyx_t_3 = __pyx_t_2[0];
  if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_4 = __pyx_t_2[1];
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_x_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_v_x = __pyx_t_4;
  __pyx_t_4 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":169
 *     cdef fwi_integer_t n
 *     x_, x = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, not overwrite_x)
 *     n = np.PyArray_DIMS(x_)[0]             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 */
  __pyx_v_n = (PyArray_DIMS(__pyx_v_x_)[0]);

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":170
 *     x_, x = fw_asfortranarray(x, fwr_real_x8_t_enum, 1, not overwrite_x)
 *     n = np.PyArray_DIMS(x_)[0]
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     omega_real_, omega_real = fw_asfortranarray(omega_real, fwr_real_x8_t_enum, 1, False)
 */
  __pyx_t_5 = (0 <= __pyx_v_n);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_v_n <= (PyArray_DIMS(__pyx_v_x_)[0]));
  }
  __pyx_t_6 = (!__pyx_t_5);
  if (__pyx_t_6) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":171
 *     n = np.PyArray_DIMS(x_)[0]
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     omega_real_, omega_real = fw_asfortranarray(omega_real, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_real_)[0]):
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_171_24->Target(__site_call1_171_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= x.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":172
 *     if not (0 <= n <= np.PyArray_DIMS(x_)[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     omega_real_, omega_real = fw_asfortranarray(omega_real, fwr_real_x8_t_enum, 1, False)             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= np.PyArray_DIMS(omega_real_)[0]):
 *         raise ValueError("(0 <= n <= omega_real.shape[0]) not satisifed")
 */
  __pyx_t_4 = fw_asfortranarray(__pyx_v_omega_real, NPY_FLOAT64, 1, 0, nullptr); 
  __pyx_t_2 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_4, 2)));
  __pyx_t_1 = __pyx_t_2[0];
  if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_3 = __pyx_t_2[1];
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_omega_real_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_omega_real = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":173
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     omega_real_, omega_real = fw_asfortranarray(omega_real, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_real_)[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= omega_real.shape[0]) not satisifed")
 *     omega_imag_, omega_imag = fw_asfortranarray(omega_imag, fwr_real_x8_t_enum, 1, False)
 */
  __pyx_t_6 = (0 <= __pyx_v_n);
  if (__pyx_t_6) {
    __pyx_t_6 = (__pyx_v_n <= (PyArray_DIMS(__pyx_v_omega_real_)[0]));
  }
  __pyx_t_5 = (!__pyx_t_6);
  if (__pyx_t_5) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":174
 *     omega_real_, omega_real = fw_asfortranarray(omega_real, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_real_)[0]):
 *         raise ValueError("(0 <= n <= omega_real.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     omega_imag_, omega_imag = fw_asfortranarray(omega_imag, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_imag_)[0]):
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_174_24->Target(__site_call1_174_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n <= omega_real.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":175
 *     if not (0 <= n <= np.PyArray_DIMS(omega_real_)[0]):
 *         raise ValueError("(0 <= n <= omega_real.shape[0]) not satisifed")
 *     omega_imag_, omega_imag = fw_asfortranarray(omega_imag, fwr_real_x8_t_enum, 1, False)             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= np.PyArray_DIMS(omega_imag_)[0]):
 *         raise ValueError("(0 <= n <= omega_imag.shape[0]) not satisifed")
 */
  __pyx_t_3 = fw_asfortranarray(__pyx_v_omega_imag, NPY_FLOAT64, 1, 0, nullptr); 
  __pyx_t_2 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_3, 2)));
  __pyx_t_4 = __pyx_t_2[0];
  if (__pyx_t_4 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_1 = __pyx_t_2[1];
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_omega_imag_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_v_omega_imag = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":176
 *         raise ValueError("(0 <= n <= omega_real.shape[0]) not satisifed")
 *     omega_imag_, omega_imag = fw_asfortranarray(omega_imag, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_imag_)[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= omega_imag.shape[0]) not satisifed")
 *     fc.convolve_z(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_real_), <fwr_real_x8_t*>np.PyArray_DATA(omega_imag_))
 */
  __pyx_t_5 = (0 <= __pyx_v_n);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_v_n <= (PyArray_DIMS(__pyx_v_omega_imag_)[0]));
  }
  __pyx_t_6 = (!__pyx_t_5);
  if (__pyx_t_6) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":177
 *     omega_imag_, omega_imag = fw_asfortranarray(omega_imag, fwr_real_x8_t_enum, 1, False)
 *     if not (0 <= n <= np.PyArray_DIMS(omega_imag_)[0]):
 *         raise ValueError("(0 <= n <= omega_imag.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.convolve_z(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_real_), <fwr_real_x8_t*>np.PyArray_DATA(omega_imag_))
 *     return x
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_177_24->Target(__site_call1_177_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n <= omega_imag.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":178
 *     if not (0 <= n <= np.PyArray_DIMS(omega_imag_)[0]):
 *         raise ValueError("(0 <= n <= omega_imag.shape[0]) not satisifed")
 *     fc.convolve_z(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_real_), <fwr_real_x8_t*>np.PyArray_DATA(omega_imag_))             # <<<<<<<<<<<<<<
 *     return x
 * 
 */
  GLOBALFUNC(convolve_z)(__pyx_v_n, ((fwr_real_x8_t *)PyArray_DATA(__pyx_v_x_)), ((fwr_real_x8_t *)PyArray_DATA(__pyx_v_omega_real_)), ((fwr_real_x8_t *)PyArray_DATA(__pyx_v_omega_imag_)));

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":179
 *         raise ValueError("(0 <= n <= omega_imag.shape[0]) not satisifed")
 *     fc.convolve_z(n, <fwr_real_x8_t*>np.PyArray_DATA(x_), <fwr_real_x8_t*>np.PyArray_DATA(omega_real_), <fwr_real_x8_t*>np.PyArray_DATA(omega_imag_))
 *     return x             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_x;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":183
 * 
 * 
 * cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy,             # <<<<<<<<<<<<<<
 *                               int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS
 */

static  System::Object^ fw_asfortranarray(System::Object^ __pyx_v_value, int __pyx_v_typenum, int __pyx_v_ndim, int __pyx_v_copy, ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_asfortranarray ^__pyx_optional_args) {
  int __pyx_v_alignment = ((int)1);
  int __pyx_v_flags;
  System::Object^ __pyx_v_result;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;
  System::Object^ __pyx_t_9 = nullptr;
  System::Object^ __pyx_t_10 = nullptr;
  if (__pyx_optional_args) {
    if (__pyx_optional_args->__pyx_n > 0) {
      __pyx_v_alignment = __pyx_optional_args->alignment;
    }
  }
  __pyx_v_result = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":185
 * cdef object fw_asfortranarray(object value, int typenum, int ndim, bint copy,
 *                               int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS             # <<<<<<<<<<<<<<
 *     if ndim <= 1:
 *         # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 */
  __pyx_v_flags = NPY_F_CONTIGUOUS;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":186
 *                               int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS
 *     if ndim <= 1:             # <<<<<<<<<<<<<<
 *         # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *         flags |= np.NPY_C_CONTIGUOUS
 */
  __pyx_t_1 = (__pyx_v_ndim <= 1);
  if (__pyx_t_1) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":188
 *     if ndim <= 1:
 *         # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *         flags |= np.NPY_C_CONTIGUOUS             # <<<<<<<<<<<<<<
 *     if (not copy and alignment > 1 and np.PyArray_Check(value) and
 *         (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):
 */
    __pyx_v_flags |= NPY_C_CONTIGUOUS;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":189
 *         # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *         flags |= np.NPY_C_CONTIGUOUS
 *     if (not copy and alignment > 1 and np.PyArray_Check(value) and             # <<<<<<<<<<<<<<
 *         (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):
 *         # mis-aligned array
 */
  __pyx_t_1 = (!__pyx_v_copy);
  if (__pyx_t_1) {
    __pyx_t_2 = (__pyx_v_alignment > 1);
    if (__pyx_t_2) {
      __pyx_t_3 = PyArray_Check(__pyx_v_value); 
      __pyx_t_4 = __site_istrue_189_55->Target(__site_istrue_189_55, __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_t_4) {

        /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":190
 *         flags |= np.NPY_C_CONTIGUOUS
 *     if (not copy and alignment > 1 and np.PyArray_Check(value) and
 *         (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):             # <<<<<<<<<<<<<<
 *         # mis-aligned array
 *         copy = True
 */
        if (__pyx_v_value == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_value) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_t_5 = ((((Py_ssize_t)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_value))) & (__pyx_v_alignment - 1)) != 0);
        __pyx_t_6 = __pyx_t_5;
      } else {
        __pyx_t_6 = __pyx_t_4;
      }
      __pyx_t_4 = __pyx_t_6;
    } else {
      __pyx_t_4 = __pyx_t_2;
    }
    __pyx_t_2 = __pyx_t_4;
  } else {
    __pyx_t_2 = __pyx_t_1;
  }
  if (__pyx_t_2) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":192
 *         (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):
 *         # mis-aligned array
 *         copy = True             # <<<<<<<<<<<<<<
 *     if copy:
 *         flags |= np.NPY_ENSURECOPY
 */
    __pyx_v_copy = 1;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":193
 *         # mis-aligned array
 *         copy = True
 *     if copy:             # <<<<<<<<<<<<<<
 *         flags |= np.NPY_ENSURECOPY
 *     result = np.PyArray_FROMANY(value, typenum, ndim, ndim, flags)
 */
  if (__pyx_v_copy) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":194
 *         copy = True
 *     if copy:
 *         flags |= np.NPY_ENSURECOPY             # <<<<<<<<<<<<<<
 *     result = np.PyArray_FROMANY(value, typenum, ndim, ndim, flags)
 *     return result, result
 */
    __pyx_v_flags |= NPY_ENSURECOPY;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":195
 *     if copy:
 *         flags |= np.NPY_ENSURECOPY
 *     result = np.PyArray_FROMANY(value, typenum, ndim, ndim, flags)             # <<<<<<<<<<<<<<
 *     return result, result
 * 
 */
  __pyx_t_3 = __pyx_v_typenum;
  __pyx_t_7 = __pyx_v_ndim;
  __pyx_t_8 = __pyx_v_ndim;
  __pyx_t_9 = __pyx_v_flags;
  __pyx_t_10 = PyArray_FROMANY(__pyx_v_value, __pyx_t_3, __pyx_t_7, __pyx_t_8, __pyx_t_9); 
  __pyx_t_3 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_v_result = __pyx_t_10;
  __pyx_t_10 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":196
 *         flags |= np.NPY_ENSURECOPY
 *     result = np.PyArray_FROMANY(value, typenum, ndim, ndim, flags)
 *     return result, result             # <<<<<<<<<<<<<<
 * 
 * cdef object fw_explicitshapearray(object value, int typenum, int ndim,
 */
  __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_v_result, __pyx_v_result});
  __pyx_r = __pyx_t_10;
  __pyx_t_10 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":198
 *     return result, result
 * 
 * cdef object fw_explicitshapearray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.intp_t *shape, bint copy, int alignment=1):
 *     if value is None:
 */

static  System::Object^ fw_explicitshapearray(System::Object^ __pyx_v_value, int __pyx_v_typenum, int __pyx_v_ndim, __pyx_t_5scipy_7fftpack_5numpy_intp_t *__pyx_v_shape, int __pyx_v_copy, ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_explicitshapearray ^__pyx_optional_args) {
  int __pyx_v_alignment = ((int)1);
  System::Object^ __pyx_v_result;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  ref struct __pyx_opt_args_5scipy_7fftpack_8convolve_fw_asfortranarray __pyx_t_3;
  if (__pyx_optional_args) {
    if (__pyx_optional_args->__pyx_n > 0) {
      __pyx_v_alignment = __pyx_optional_args->alignment;
    }
  }
  __pyx_v_result = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":200
 * cdef object fw_explicitshapearray(object value, int typenum, int ndim,
 *                                   np.intp_t *shape, bint copy, int alignment=1):
 *     if value is None:             # <<<<<<<<<<<<<<
 *         result = np.PyArray_ZEROS(ndim, shape, typenum, 1)
 *         return result, result
 */
  __pyx_t_1 = (__pyx_v_value == nullptr);
  if (__pyx_t_1) {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":201
 *                                   np.intp_t *shape, bint copy, int alignment=1):
 *     if value is None:
 *         result = np.PyArray_ZEROS(ndim, shape, typenum, 1)             # <<<<<<<<<<<<<<
 *         return result, result
 *     else:
 */
    __pyx_t_2 = PyArray_ZEROS(__pyx_v_ndim, __pyx_v_shape, __pyx_v_typenum, 1); 
    __pyx_v_result = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":202
 *     if value is None:
 *         result = np.PyArray_ZEROS(ndim, shape, typenum, 1)
 *         return result, result             # <<<<<<<<<<<<<<
 *     else:
 *         return fw_asfortranarray(value, typenum, ndim, copy, alignment)
 */
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_v_result, __pyx_v_result});
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":204
 *         return result, result
 *     else:
 *         return fw_asfortranarray(value, typenum, ndim, copy, alignment)             # <<<<<<<<<<<<<<
 * 
 * # Fwrap configuration:
 */
    __pyx_t_3.__pyx_n = 1;
    __pyx_t_3.alignment = __pyx_v_alignment;
    __pyx_t_2 = fw_asfortranarray(__pyx_v_value, __pyx_v_typenum, __pyx_v_ndim, __pyx_v_copy, %__pyx_t_3); 
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L3:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":190
 *     object Npy_INTERFACE_array "Npy_INTERFACE_OBJECT" (NpyArray*)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5scipy_7fftpack_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":193
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":195
 *    return Npy_INTERFACE_ufunc(NpyUFunc_FromFuncAndDataAndSignature(func, data, types, ntypes, nin, nout, identity, name, doc, c, NULL))
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_ZEROS(int __pyx_v_ndim, __pyx_t_5scipy_7fftpack_5numpy_intp_t *__pyx_v_shape, int __pyx_v_typenum, int __pyx_v_fortran) {
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":196
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":198
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":199
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":200
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":201
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":203
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):             # <<<<<<<<<<<<<<
 *     shape_list = []
 *     cdef int i
 */

static CYTHON_INLINE System::Object^ PyArray_EMPTY(int __pyx_v_ndim, __pyx_t_5scipy_7fftpack_5numpy_intp_t *__pyx_v_shape, int __pyx_v_typenum, int __pyx_v_fortran) {
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":204
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":206
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":207
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":208
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":209
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":211
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5scipy_7fftpack_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5scipy_7fftpack_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":212
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":213
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":214
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":216
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":218
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":220
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":222
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":224
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5scipy_7fftpack_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5scipy_7fftpack_5numpy_intp_t *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":226
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":228
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5scipy_7fftpack_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5scipy_7fftpack_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":230
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":232
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":233
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":234
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":235
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":237
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":238
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

    /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":239
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":240
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":242
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

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":243
 * 
 * cdef inline object PyArray_Check(obj):
 *     return isinstance(obj, ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(obj):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_call2_243_21->Target(__site_call2_243_21, __pyx_context, __pyx_t_1, __pyx_v_obj, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7fftpack_5numpy_ndarray)));
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":245
 *     return isinstance(obj, ndarray)
 * 
 * cdef inline object PyArray_NDIM(obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":246
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

/* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":248
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
  __site_get_intc_2_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "intc", false));
  __site_get_int8_3_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int8", false));
  __site_get_int8_4_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int8", false));
  __site_get_int16_5_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int16", false));
  __site_get_int16_6_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int16", false));
  __site_get_int32_7_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int32", false));
  __site_get_int32_8_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int32", false));
  __site_get_int64_9_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int64", false));
  __site_get_int64_10_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int64", false));
  __site_get_single_11_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "single", false));
  __site_get_float32_12_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "float32", false));
  __site_get_float32_13_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "float32", false));
  __site_get_float64_14_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "float64", false));
  __site_get_float64_15_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "float64", false));
  __site_get_double_16_12 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_csingle_17_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "csingle", false));
  __site_get_csingle_18_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "csingle", false));
  __site_get_csingle_19_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "csingle", false));
  __site_get_cdouble_20_20 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "cdouble", false));
  __site_get_cdouble_21_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "cdouble", false));
  __site_get_cdouble_22_20 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "cdouble", false));
  __site_get_byte_23_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "byte", false));
  __site_get_intc_24_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "intc", false));
  __site_get_int8_25_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int8", false));
  __site_get_int8_26_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int8", false));
  __site_get_int16_27_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int16", false));
  __site_get_int16_28_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int16", false));
  __site_get_int32_29_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int32", false));
  __site_get_int32_30_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int32", false));
  __site_get_int64_31_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int64", false));
  __site_get_int64_32_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int64", false));
  __site_get_intc_33_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "intc", false));
  __site_call1_49_38 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_double_49_38 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_ARGS_51_38 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument(ArgumentType::List)})));
  __site_cvt_double_51_38 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_get_exc_info_56_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_56_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_68_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_68_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_fwi_integer_t_88_20 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_90_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_93_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call0_94_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_120_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_120_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_141_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_144_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_149_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_171_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_174_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_177_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_189_55 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
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
  __pyx_ptype_5scipy_7fftpack_8convolve__CallbackInfo = safe_cast<Types::PythonType^>(dict["_CallbackInfo"]);
  /*--- Create function pointers ---*/
  __pyx_delegate_val_init_convolution_kernel_cb = gcnew __pyx_delegate_t_5scipy_7fftpack_8convolve_init_convolution_kernel_cb(init_convolution_kernel_cb);
  __pyx_function_pointer_init_convolution_kernel_cb = (__pyx_fp_t_init_convolution_kernel_cb)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_init_convolution_kernel_cb).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  PythonDictionary^ __pyx_t_3;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":22
 * 
 * """
 * import sys             # <<<<<<<<<<<<<<
 * 
 * np.import_array()
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "sys", -1));
  PythonOps::SetGlobal(__pyx_context, "sys", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":24
 * import sys
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * include 'fwrap_ktp.pxi'
 * 
 */
  import_array();

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":1
 * import numpy as np             # <<<<<<<<<<<<<<
 * fwi_integer = np.intc
 * fwi_integer_x1 = np.int8
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":2
 * import numpy as np
 * fwi_integer = np.intc             # <<<<<<<<<<<<<<
 * fwi_integer_x1 = np.int8
 * fwi_integer_1 = np.int8
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_intc_2_16->Target(__site_get_intc_2_16, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":3
 * import numpy as np
 * fwi_integer = np.intc
 * fwi_integer_x1 = np.int8             # <<<<<<<<<<<<<<
 * fwi_integer_1 = np.int8
 * fwi_integer_x2 = np.int16
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_int8_3_19->Target(__site_get_int8_3_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer_x1", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":4
 * fwi_integer = np.intc
 * fwi_integer_x1 = np.int8
 * fwi_integer_1 = np.int8             # <<<<<<<<<<<<<<
 * fwi_integer_x2 = np.int16
 * fwi_integer_2 = np.int16
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_int8_4_18->Target(__site_get_int8_4_18, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer_1", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":5
 * fwi_integer_x1 = np.int8
 * fwi_integer_1 = np.int8
 * fwi_integer_x2 = np.int16             # <<<<<<<<<<<<<<
 * fwi_integer_2 = np.int16
 * fwi_integer_x4 = np.int32
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_int16_5_19->Target(__site_get_int16_5_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer_x2", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":6
 * fwi_integer_1 = np.int8
 * fwi_integer_x2 = np.int16
 * fwi_integer_2 = np.int16             # <<<<<<<<<<<<<<
 * fwi_integer_x4 = np.int32
 * fwi_integer_4 = np.int32
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_int16_6_18->Target(__site_get_int16_6_18, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer_2", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":7
 * fwi_integer_x2 = np.int16
 * fwi_integer_2 = np.int16
 * fwi_integer_x4 = np.int32             # <<<<<<<<<<<<<<
 * fwi_integer_4 = np.int32
 * fwi_integer_x8 = np.int64
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_int32_7_19->Target(__site_get_int32_7_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer_x4", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":8
 * fwi_integer_2 = np.int16
 * fwi_integer_x4 = np.int32
 * fwi_integer_4 = np.int32             # <<<<<<<<<<<<<<
 * fwi_integer_x8 = np.int64
 * fwi_integer_8 = np.int64
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_int32_8_18->Target(__site_get_int32_8_18, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer_4", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":9
 * fwi_integer_x4 = np.int32
 * fwi_integer_4 = np.int32
 * fwi_integer_x8 = np.int64             # <<<<<<<<<<<<<<
 * fwi_integer_8 = np.int64
 * fwr_real = np.single
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_int64_9_19->Target(__site_get_int64_9_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer_x8", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":10
 * fwi_integer_4 = np.int32
 * fwi_integer_x8 = np.int64
 * fwi_integer_8 = np.int64             # <<<<<<<<<<<<<<
 * fwr_real = np.single
 * fwr_real_x4 = np.float32
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_int64_10_18->Target(__site_get_int64_10_18, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwi_integer_8", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":11
 * fwi_integer_x8 = np.int64
 * fwi_integer_8 = np.int64
 * fwr_real = np.single             # <<<<<<<<<<<<<<
 * fwr_real_x4 = np.float32
 * fwr_real_4 = np.float32
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_single_11_13->Target(__site_get_single_11_13, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwr_real", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":12
 * fwi_integer_8 = np.int64
 * fwr_real = np.single
 * fwr_real_x4 = np.float32             # <<<<<<<<<<<<<<
 * fwr_real_4 = np.float32
 * fwr_real_x8 = np.float64
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_float32_12_16->Target(__site_get_float32_12_16, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwr_real_x4", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":13
 * fwr_real = np.single
 * fwr_real_x4 = np.float32
 * fwr_real_4 = np.float32             # <<<<<<<<<<<<<<
 * fwr_real_x8 = np.float64
 * fwr_real_8 = np.float64
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_float32_13_15->Target(__site_get_float32_13_15, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwr_real_4", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":14
 * fwr_real_x4 = np.float32
 * fwr_real_4 = np.float32
 * fwr_real_x8 = np.float64             # <<<<<<<<<<<<<<
 * fwr_real_8 = np.float64
 * fwr_dbl = np.double
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_float64_14_16->Target(__site_get_float64_14_16, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwr_real_x8", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":15
 * fwr_real_4 = np.float32
 * fwr_real_x8 = np.float64
 * fwr_real_8 = np.float64             # <<<<<<<<<<<<<<
 * fwr_dbl = np.double
 * fwc_complex = np.csingle
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_float64_15_15->Target(__site_get_float64_15_15, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwr_real_8", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":16
 * fwr_real_x8 = np.float64
 * fwr_real_8 = np.float64
 * fwr_dbl = np.double             # <<<<<<<<<<<<<<
 * fwc_complex = np.csingle
 * fwc_complex_x8 = np.csingle
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_double_16_12->Target(__site_get_double_16_12, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwr_dbl", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":17
 * fwr_real_8 = np.float64
 * fwr_dbl = np.double
 * fwc_complex = np.csingle             # <<<<<<<<<<<<<<
 * fwc_complex_x8 = np.csingle
 * fwc_complex_4 = np.csingle
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_csingle_17_16->Target(__site_get_csingle_17_16, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwc_complex", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":18
 * fwr_dbl = np.double
 * fwc_complex = np.csingle
 * fwc_complex_x8 = np.csingle             # <<<<<<<<<<<<<<
 * fwc_complex_4 = np.csingle
 * fwc_complex_x16 = np.cdouble
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_csingle_18_19->Target(__site_get_csingle_18_19, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwc_complex_x8", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":19
 * fwc_complex = np.csingle
 * fwc_complex_x8 = np.csingle
 * fwc_complex_4 = np.csingle             # <<<<<<<<<<<<<<
 * fwc_complex_x16 = np.cdouble
 * fwc_complex_8 = np.cdouble
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_csingle_19_18->Target(__site_get_csingle_19_18, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwc_complex_4", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":20
 * fwc_complex_x8 = np.csingle
 * fwc_complex_4 = np.csingle
 * fwc_complex_x16 = np.cdouble             # <<<<<<<<<<<<<<
 * fwc_complex_8 = np.cdouble
 * fwc_dbl_complex = np.cdouble
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_cdouble_20_20->Target(__site_get_cdouble_20_20, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwc_complex_x16", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":21
 * fwc_complex_4 = np.csingle
 * fwc_complex_x16 = np.cdouble
 * fwc_complex_8 = np.cdouble             # <<<<<<<<<<<<<<
 * fwc_dbl_complex = np.cdouble
 * fw_character = np.byte
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_cdouble_21_18->Target(__site_get_cdouble_21_18, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwc_complex_8", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":22
 * fwc_complex_x16 = np.cdouble
 * fwc_complex_8 = np.cdouble
 * fwc_dbl_complex = np.cdouble             # <<<<<<<<<<<<<<
 * fw_character = np.byte
 * fwl_logical = np.intc
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_cdouble_22_20->Target(__site_get_cdouble_22_20, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwc_dbl_complex", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":23
 * fwc_complex_8 = np.cdouble
 * fwc_dbl_complex = np.cdouble
 * fw_character = np.byte             # <<<<<<<<<<<<<<
 * fwl_logical = np.intc
 * fwl_logical_x1 = np.int8
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_byte_23_17->Target(__site_get_byte_23_17, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fw_character", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":24
 * fwc_dbl_complex = np.cdouble
 * fw_character = np.byte
 * fwl_logical = np.intc             # <<<<<<<<<<<<<<
 * fwl_logical_x1 = np.int8
 * fwl_logical_1 = np.int8
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_intc_24_16->Target(__site_get_intc_24_16, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":25
 * fw_character = np.byte
 * fwl_logical = np.intc
 * fwl_logical_x1 = np.int8             # <<<<<<<<<<<<<<
 * fwl_logical_1 = np.int8
 * fwl_logical_x2 = np.int16
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_int8_25_19->Target(__site_get_int8_25_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical_x1", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":26
 * fwl_logical = np.intc
 * fwl_logical_x1 = np.int8
 * fwl_logical_1 = np.int8             # <<<<<<<<<<<<<<
 * fwl_logical_x2 = np.int16
 * fwl_logical_2 = np.int16
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_int8_26_18->Target(__site_get_int8_26_18, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical_1", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":27
 * fwl_logical_x1 = np.int8
 * fwl_logical_1 = np.int8
 * fwl_logical_x2 = np.int16             # <<<<<<<<<<<<<<
 * fwl_logical_2 = np.int16
 * fwl_logical_x4 = np.int32
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_int16_27_19->Target(__site_get_int16_27_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical_x2", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":28
 * fwl_logical_1 = np.int8
 * fwl_logical_x2 = np.int16
 * fwl_logical_2 = np.int16             # <<<<<<<<<<<<<<
 * fwl_logical_x4 = np.int32
 * fwl_logical_4 = np.int32
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_int16_28_18->Target(__site_get_int16_28_18, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical_2", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":29
 * fwl_logical_x2 = np.int16
 * fwl_logical_2 = np.int16
 * fwl_logical_x4 = np.int32             # <<<<<<<<<<<<<<
 * fwl_logical_4 = np.int32
 * fwl_logical_x8 = np.int64
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_int32_29_19->Target(__site_get_int32_29_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical_x4", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":30
 * fwl_logical_2 = np.int16
 * fwl_logical_x4 = np.int32
 * fwl_logical_4 = np.int32             # <<<<<<<<<<<<<<
 * fwl_logical_x8 = np.int64
 * fwl_logical_8 = np.int64
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_int32_30_18->Target(__site_get_int32_30_18, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical_4", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":31
 * fwl_logical_x4 = np.int32
 * fwl_logical_4 = np.int32
 * fwl_logical_x8 = np.int64             # <<<<<<<<<<<<<<
 * fwl_logical_8 = np.int64
 * fw_shape = np.intc
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_int64_31_19->Target(__site_get_int64_31_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical_x8", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":32
 * fwl_logical_4 = np.int32
 * fwl_logical_x8 = np.int64
 * fwl_logical_8 = np.int64             # <<<<<<<<<<<<<<
 * fw_shape = np.intc
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_2 = __site_get_int64_32_18->Target(__site_get_int64_32_18, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fwl_logical_8", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\fwrap_ktp.pxi":33
 * fwl_logical_x8 = np.int64
 * fwl_logical_8 = np.int64
 * fw_shape = np.intc             # <<<<<<<<<<<<<<
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_1 = __site_get_intc_33_13->Target(__site_get_intc_33_13, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "fw_shape", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":27
 * include 'fwrap_ktp.pxi'
 * 
 * __all__ = ['init_convolution_kernel', 'destroy_convolve_cache',             # <<<<<<<<<<<<<<
 *            'convolve', 'convolve_z']
 * 
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"init_convolution_kernel"), ((System::Object^)"destroy_convolve_cache"), ((System::Object^)"convolve"), ((System::Object^)"convolve_z")});
  PythonOps::SetGlobal(__pyx_context, "__all__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\convolve.pyx":1
 * #cython: ccomplex=True             # <<<<<<<<<<<<<<
 * 
 * """The convolve module was generated with Fwrap v0.2.0dev_e929453.
 */
  __pyx_t_3 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Users\jwiggins\source\scipy-refactor\scipy\fftpack\numpy.pxd":248
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


static Types::PythonType^ __pyx_ptype_5scipy_7fftpack_5numpy_ndarray = nullptr;
static Types::PythonType^ __pyx_ptype_5scipy_7fftpack_5numpy_dtype = nullptr;



static Types::PythonType^ __pyx_ptype_5scipy_7fftpack_8convolve__CallbackInfo = nullptr;
static _CallbackInfo^ __pyx_v_5scipy_7fftpack_8convolve_kernel_func_info = nullptr;
/* Cython code section 'utility_code_def' */

/* Runtime support code */

static CYTHON_INLINE long __Pyx_mod_long(long a, long b) {
    long r = a % b;
    r += ((r != 0) & ((r ^ b) < 0)) * b;
    return r;
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
[assembly: PythonModule("scipy__fftpack__convolve", module_convolve::typeid)];
};
