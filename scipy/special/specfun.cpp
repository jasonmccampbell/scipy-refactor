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
  dict["__module__"] = "scipy.special.specfun";
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
#define __PYX_HAVE_API__scipy__special__specfun
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "fwrap_ktp_header.h"
#include "specfun_fc.h"
#include "string.h"
#include "math.h"

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

typedef void (*__pyx_t_5numpy_PyUFuncGenericFunction)(char **, __pyx_t_5numpy_npy_intp *, __pyx_t_5numpy_npy_intp *, void *);

typedef System::Object^ __pyx_t_5scipy_7special_9fwrap_ktp_fw_bytes;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1621
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

ref struct __pyx_opt_args_5scipy_7special_7specfun_fw_asfortranarray {
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
/* Module declarations from scipy.special.fwrap_ktp */
/* Module declarations from scipy.special.specfun_fc */
/* Module declarations from scipy.special.specfun */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate NumpyDotNet::ndarray^ __pyx_delegate_t_5scipy_7special_7specfun_fw_asfortranarray(System::Object^, int, int, __pyx_t_5numpy_intp_t *, int, int, ref struct __pyx_opt_args_5scipy_7special_7specfun_fw_asfortranarray ^__pyx_optional_args);
static NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^, int, int, __pyx_t_5numpy_intp_t *, int, int, ref struct __pyx_opt_args_5scipy_7special_7specfun_fw_asfortranarray ^__pyx_optional_args); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.special.specfun"

/* Implementation of scipy.special.specfun */
namespace clr_specfun {
  public ref class module_specfun sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_68_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_68_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_68_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_89_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_91_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_96_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_98_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_102_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_104_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_109_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_109_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_109_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_109_0_3;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_132_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_134_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_138_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_140_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_144_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_146_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_151_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_173_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_194_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_210_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_214_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_219_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_235_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_239_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_244_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_270_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_274_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_278_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_282_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_286_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_291_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_291_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_291_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_311_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_313_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_317_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_321_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_326_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_342_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_346_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_351_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_373_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_377_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_381_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_386_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_386_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_409_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_413_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_417_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_421_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_425_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_430_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_446_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_450_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_455_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_455_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_455_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_473_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_475_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_479_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_484_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_484_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_503_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_507_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_511_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_516_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_516_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_538_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_542_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_546_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_551_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_569_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_573_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_577_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_582_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_600_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_604_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_608_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_613_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_613_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_636_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_636_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ge_636_30;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_636_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_637_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_638_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_638_30;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_638_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_640_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_640_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_640_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_640_33;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_640_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_641_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_642_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_642_30;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_642_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_644_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_644_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_644_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_644_33;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_644_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_645_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_650_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_666_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_670_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_675_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_675_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_697_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_701_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_705_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_710_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_732_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_736_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_740_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_745_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_745_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_745_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_765_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_767_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_771_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_775_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_780_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_780_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_780_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_800_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_800_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_800_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_822_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_824_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_828_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_830_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_834_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_836_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_841_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_841_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_858_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_860_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_864_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_869_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_869_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_869_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_869_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_869_0_4;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_869_0_5;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_891_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_893_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_895_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_897_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_902_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_902_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_921_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_923_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_927_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_931_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_936_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_954_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ge_954_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_954_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_955_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_956_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_956_26;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_956_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_958_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_958_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_958_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_958_28;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_958_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_959_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_960_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_960_26;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_960_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_962_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_962_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_962_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_962_28;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_962_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_963_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_968_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_968_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_987_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_991_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_995_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1000_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1000_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1000_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1000_0_3;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1019_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1021_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1030_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1030_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1052_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1056_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1060_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1065_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1065_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1087_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1091_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1095_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1100_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1100_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1121_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1125_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1129_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1133_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1138_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1138_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1138_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1158_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1160_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1162_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1166_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1170_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1175_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1201_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1205_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1209_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1213_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1217_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1222_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1222_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1244_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1248_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1252_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1257_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1257_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1257_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1277_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1279_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1283_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1287_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1292_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1292_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1309_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1311_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1315_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1320_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1320_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1343_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1345_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1349_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1353_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1357_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1361_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1366_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1366_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1388_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1392_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1396_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1401_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1419_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1423_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1427_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1432_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1432_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1454_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1456_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1460_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1464_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1469_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1469_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1492_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_1492_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ge_1492_30;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1492_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1493_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1494_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_1494_30;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_1494_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1496_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_1496_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_1496_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_1496_33;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1496_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1497_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1498_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_1498_30;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_1498_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1500_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_1500_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_1500_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_1500_33;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1500_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1501_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1506_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1506_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1530_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1532_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1537_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1539_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1543_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1545_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1550_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1550_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1550_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1550_0_3;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1572_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1574_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1578_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_1583_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_1583_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1605_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1607_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1611_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1615_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1633_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_1638_59;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1645_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_1647_60;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_1647_24;
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
static int^ __pyx_int_1;
static int^ __pyx_int_2;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":68
 * cdef extern from "math.h":
 *     double fabs(double)
 * def lqmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object qm=None, object qd=None):             # <<<<<<<<<<<<<<
 *     """lqmn(m, n, x[, qm, qd]) -> (qm, qd)
 * 
 */

static System::Object^ lqmn(System::Object^ m, System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ qm, [InteropServices::Optional]System::Object^ qd) {
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_qm = nullptr;
  System::Object^ __pyx_v_qd = nullptr;
  fwi_integer_t __pyx_v_mm;
  NumpyDotNet::ndarray^ __pyx_v_qm_;
  NumpyDotNet::ndarray^ __pyx_v_qd_;
  __pyx_t_5numpy_npy_intp __pyx_v_qm_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_qd_shape[2];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_m = __site_cvt_68_0->Target(__site_cvt_68_0, m);
  __pyx_v_n = __site_cvt_68_0_1->Target(__site_cvt_68_0_1, n);
  __pyx_v_x = __site_cvt_68_0_2->Target(__site_cvt_68_0_2, x);
  if (dynamic_cast<System::Reflection::Missing^>(qm) == nullptr) {
    __pyx_v_qm = qm;
  } else {
    __pyx_v_qm = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(qd) == nullptr) {
    __pyx_v_qd = qd;
  } else {
    __pyx_v_qd = ((System::Object^)nullptr);
  }
  __pyx_v_qm_ = nullptr;
  __pyx_v_qd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":88
 *     cdef np.ndarray qm_, qd_
 *     cdef np.npy_intp qm_shape[2], qd_shape[2]
 *     if not (m >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')
 *     if not (n >= 1):
 */
  __pyx_t_1 = (!(__pyx_v_m >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":89
 *     cdef np.npy_intp qm_shape[2], qd_shape[2]
 *     if not (m >= 1):
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_89_24->Target(__site_call1_89_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: m >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":90
 *     if not (m >= 1):
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     mm = m
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":91
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     mm = m
 *     qm_shape[0] = mm - 0 + 1; qm_shape[1] = n - 0 + 1
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_91_24->Target(__site_call1_91_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":92
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     mm = m             # <<<<<<<<<<<<<<
 *     qm_shape[0] = mm - 0 + 1; qm_shape[1] = n - 0 + 1
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 2, qm_shape, False, True)
 */
  __pyx_v_mm = __pyx_v_m;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":93
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     mm = m
 *     qm_shape[0] = mm - 0 + 1; qm_shape[1] = n - 0 + 1             # <<<<<<<<<<<<<<
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 2, qm_shape, False, True)
 *     if mm - 0 + 1 != qm_shape[0]:
 */
  (__pyx_v_qm_shape[0]) = ((__pyx_v_mm - 0) + 1);
  (__pyx_v_qm_shape[1]) = ((__pyx_v_n - 0) + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":94
 *     mm = m
 *     qm_shape[0] = mm - 0 + 1; qm_shape[1] = n - 0 + 1
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 2, qm_shape, False, True)             # <<<<<<<<<<<<<<
 *     if mm - 0 + 1 != qm_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == qm.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_qm, NPY_DOUBLE, 2, __pyx_v_qm_shape, 0, 1, nullptr)); 
  __pyx_v_qm_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":95
 *     qm_shape[0] = mm - 0 + 1; qm_shape[1] = n - 0 + 1
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 2, qm_shape, False, True)
 *     if mm - 0 + 1 != qm_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(mm - 0 + 1 == qm.shape[0]) not satisifed")
 *     if n - 0 + 1 != qm_shape[1]:
 */
  __pyx_t_1 = (((__pyx_v_mm - 0) + 1) != (__pyx_v_qm_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":96
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 2, qm_shape, False, True)
 *     if mm - 0 + 1 != qm_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == qm.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n - 0 + 1 != qm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == qm.shape[1]) not satisifed")
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_96_24->Target(__site_call1_96_24, __pyx_context, __pyx_t_2, ((System::Object^)"(mm - 0 + 1 == qm.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":97
 *     if mm - 0 + 1 != qm_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == qm.shape[0]) not satisifed")
 *     if n - 0 + 1 != qm_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n - 0 + 1 == qm.shape[1]) not satisifed")
 *     qd_shape[0] = mm - 0 + 1; qd_shape[1] = n - 0 + 1
 */
  __pyx_t_1 = (((__pyx_v_n - 0) + 1) != (__pyx_v_qm_shape[1]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":98
 *         raise ValueError("(mm - 0 + 1 == qm.shape[0]) not satisifed")
 *     if n - 0 + 1 != qm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == qm.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     qd_shape[0] = mm - 0 + 1; qd_shape[1] = n - 0 + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 2, qd_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_98_24->Target(__site_call1_98_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n - 0 + 1 == qm.shape[1]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":99
 *     if n - 0 + 1 != qm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == qm.shape[1]) not satisifed")
 *     qd_shape[0] = mm - 0 + 1; qd_shape[1] = n - 0 + 1             # <<<<<<<<<<<<<<
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 2, qd_shape, False, True)
 *     if mm - 0 + 1 != qd_shape[0]:
 */
  (__pyx_v_qd_shape[0]) = ((__pyx_v_mm - 0) + 1);
  (__pyx_v_qd_shape[1]) = ((__pyx_v_n - 0) + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":100
 *         raise ValueError("(n - 0 + 1 == qm.shape[1]) not satisifed")
 *     qd_shape[0] = mm - 0 + 1; qd_shape[1] = n - 0 + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 2, qd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if mm - 0 + 1 != qd_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == qd.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_qd, NPY_DOUBLE, 2, __pyx_v_qd_shape, 0, 1, nullptr)); 
  __pyx_v_qd_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":101
 *     qd_shape[0] = mm - 0 + 1; qd_shape[1] = n - 0 + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 2, qd_shape, False, True)
 *     if mm - 0 + 1 != qd_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(mm - 0 + 1 == qd.shape[0]) not satisifed")
 *     if n - 0 + 1 != qd_shape[1]:
 */
  __pyx_t_1 = (((__pyx_v_mm - 0) + 1) != (__pyx_v_qd_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":102
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 2, qd_shape, False, True)
 *     if mm - 0 + 1 != qd_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == qd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n - 0 + 1 != qd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == qd.shape[1]) not satisifed")
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_102_24->Target(__site_call1_102_24, __pyx_context, __pyx_t_2, ((System::Object^)"(mm - 0 + 1 == qd.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":103
 *     if mm - 0 + 1 != qd_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == qd.shape[0]) not satisifed")
 *     if n - 0 + 1 != qd_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n - 0 + 1 == qd.shape[1]) not satisifed")
 *     fc.lqmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 */
  __pyx_t_1 = (((__pyx_v_n - 0) + 1) != (__pyx_v_qd_shape[1]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":104
 *         raise ValueError("(mm - 0 + 1 == qd.shape[0]) not satisifed")
 *     if n - 0 + 1 != qd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == qd.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lqmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 *     return (qm_, qd_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_104_24->Target(__site_call1_104_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n - 0 + 1 == qd.shape[1]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":105
 *     if n - 0 + 1 != qd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == qd.shape[1]) not satisifed")
 *     fc.lqmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))             # <<<<<<<<<<<<<<
 *     return (qm_, qd_,)
 * 
 */
  F_FUNC(lqmn,LQMN)((&__pyx_v_mm), (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_qm_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_qd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":106
 *         raise ValueError("(n - 0 + 1 == qd.shape[1]) not satisifed")
 *     fc.lqmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 *     return (qm_, qd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_qm_), ((System::Object^)__pyx_v_qd_)});
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":109
 * 
 * 
 * def clpmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, fwr_dbl_t y, object cpm=None, object cpd=None):             # <<<<<<<<<<<<<<
 *     """clpmn(m, n, x, y[, cpm, cpd]) -> (cpm, cpd)
 * 
 */

static System::Object^ clpmn(System::Object^ m, System::Object^ n, System::Object^ x, System::Object^ y, [InteropServices::Optional]System::Object^ cpm, [InteropServices::Optional]System::Object^ cpd) {
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  fwr_dbl_t __pyx_v_y;
  System::Object^ __pyx_v_cpm = nullptr;
  System::Object^ __pyx_v_cpd = nullptr;
  fwi_integer_t __pyx_v_mm;
  NumpyDotNet::ndarray^ __pyx_v_cpm_;
  NumpyDotNet::ndarray^ __pyx_v_cpd_;
  __pyx_t_5numpy_npy_intp __pyx_v_cpm_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_cpd_shape[2];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_m = __site_cvt_109_0->Target(__site_cvt_109_0, m);
  __pyx_v_n = __site_cvt_109_0_1->Target(__site_cvt_109_0_1, n);
  __pyx_v_x = __site_cvt_109_0_2->Target(__site_cvt_109_0_2, x);
  __pyx_v_y = __site_cvt_109_0_3->Target(__site_cvt_109_0_3, y);
  if (dynamic_cast<System::Reflection::Missing^>(cpm) == nullptr) {
    __pyx_v_cpm = cpm;
  } else {
    __pyx_v_cpm = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cpd) == nullptr) {
    __pyx_v_cpd = cpd;
  } else {
    __pyx_v_cpd = ((System::Object^)nullptr);
  }
  __pyx_v_cpm_ = nullptr;
  __pyx_v_cpd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":130
 *     cdef np.ndarray cpm_, cpd_
 *     cdef np.npy_intp cpm_shape[2], cpd_shape[2]
 *     mm = m             # <<<<<<<<<<<<<<
 *     if not (m >= 0):
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 */
  __pyx_v_mm = __pyx_v_m;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":131
 *     cdef np.npy_intp cpm_shape[2], cpd_shape[2]
 *     mm = m
 *     if not (m >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= 0):
 */
  __pyx_t_1 = (!(__pyx_v_m >= 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":132
 *     mm = m
 *     if not (m >= 0):
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')             # <<<<<<<<<<<<<<
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_132_24->Target(__site_call1_132_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: m >= 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":133
 *     if not (m >= 0):
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     cpm_shape[0] = m - 0 + 1; cpm_shape[1] = n - 0 + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":134
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')             # <<<<<<<<<<<<<<
 *     cpm_shape[0] = m - 0 + 1; cpm_shape[1] = n - 0 + 1
 *     cpm_ = fw_asfortranarray(cpm, fwc_complex_x16_t_enum, 2, cpm_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_134_24->Target(__site_call1_134_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: n >= 0"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":135
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     cpm_shape[0] = m - 0 + 1; cpm_shape[1] = n - 0 + 1             # <<<<<<<<<<<<<<
 *     cpm_ = fw_asfortranarray(cpm, fwc_complex_x16_t_enum, 2, cpm_shape, False, True)
 *     if m - 0 + 1 != cpm_shape[0]:
 */
  (__pyx_v_cpm_shape[0]) = ((__pyx_v_m - 0) + 1);
  (__pyx_v_cpm_shape[1]) = ((__pyx_v_n - 0) + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":136
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     cpm_shape[0] = m - 0 + 1; cpm_shape[1] = n - 0 + 1
 *     cpm_ = fw_asfortranarray(cpm, fwc_complex_x16_t_enum, 2, cpm_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m - 0 + 1 != cpm_shape[0]:
 *         raise ValueError("(m - 0 + 1 == cpm.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_cpm, NPY_CDOUBLE, 2, __pyx_v_cpm_shape, 0, 1, nullptr)); 
  __pyx_v_cpm_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":137
 *     cpm_shape[0] = m - 0 + 1; cpm_shape[1] = n - 0 + 1
 *     cpm_ = fw_asfortranarray(cpm, fwc_complex_x16_t_enum, 2, cpm_shape, False, True)
 *     if m - 0 + 1 != cpm_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m - 0 + 1 == cpm.shape[0]) not satisifed")
 *     if n - 0 + 1 != cpm_shape[1]:
 */
  __pyx_t_1 = (((__pyx_v_m - 0) + 1) != (__pyx_v_cpm_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":138
 *     cpm_ = fw_asfortranarray(cpm, fwc_complex_x16_t_enum, 2, cpm_shape, False, True)
 *     if m - 0 + 1 != cpm_shape[0]:
 *         raise ValueError("(m - 0 + 1 == cpm.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n - 0 + 1 != cpm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cpm.shape[1]) not satisifed")
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_138_24->Target(__site_call1_138_24, __pyx_context, __pyx_t_2, ((System::Object^)"(m - 0 + 1 == cpm.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":139
 *     if m - 0 + 1 != cpm_shape[0]:
 *         raise ValueError("(m - 0 + 1 == cpm.shape[0]) not satisifed")
 *     if n - 0 + 1 != cpm_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n - 0 + 1 == cpm.shape[1]) not satisifed")
 *     cpd_shape[0] = m - 0 + 1; cpd_shape[1] = n - 0 + 1
 */
  __pyx_t_1 = (((__pyx_v_n - 0) + 1) != (__pyx_v_cpm_shape[1]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":140
 *         raise ValueError("(m - 0 + 1 == cpm.shape[0]) not satisifed")
 *     if n - 0 + 1 != cpm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cpm.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     cpd_shape[0] = m - 0 + 1; cpd_shape[1] = n - 0 + 1
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 2, cpd_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_140_24->Target(__site_call1_140_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n - 0 + 1 == cpm.shape[1]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":141
 *     if n - 0 + 1 != cpm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cpm.shape[1]) not satisifed")
 *     cpd_shape[0] = m - 0 + 1; cpd_shape[1] = n - 0 + 1             # <<<<<<<<<<<<<<
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 2, cpd_shape, False, True)
 *     if m - 0 + 1 != cpd_shape[0]:
 */
  (__pyx_v_cpd_shape[0]) = ((__pyx_v_m - 0) + 1);
  (__pyx_v_cpd_shape[1]) = ((__pyx_v_n - 0) + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":142
 *         raise ValueError("(n - 0 + 1 == cpm.shape[1]) not satisifed")
 *     cpd_shape[0] = m - 0 + 1; cpd_shape[1] = n - 0 + 1
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 2, cpd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m - 0 + 1 != cpd_shape[0]:
 *         raise ValueError("(m - 0 + 1 == cpd.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_cpd, NPY_CDOUBLE, 2, __pyx_v_cpd_shape, 0, 1, nullptr)); 
  __pyx_v_cpd_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":143
 *     cpd_shape[0] = m - 0 + 1; cpd_shape[1] = n - 0 + 1
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 2, cpd_shape, False, True)
 *     if m - 0 + 1 != cpd_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m - 0 + 1 == cpd.shape[0]) not satisifed")
 *     if n - 0 + 1 != cpd_shape[1]:
 */
  __pyx_t_1 = (((__pyx_v_m - 0) + 1) != (__pyx_v_cpd_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":144
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 2, cpd_shape, False, True)
 *     if m - 0 + 1 != cpd_shape[0]:
 *         raise ValueError("(m - 0 + 1 == cpd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n - 0 + 1 != cpd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cpd.shape[1]) not satisifed")
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_144_24->Target(__site_call1_144_24, __pyx_context, __pyx_t_2, ((System::Object^)"(m - 0 + 1 == cpd.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":145
 *     if m - 0 + 1 != cpd_shape[0]:
 *         raise ValueError("(m - 0 + 1 == cpd.shape[0]) not satisifed")
 *     if n - 0 + 1 != cpd_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n - 0 + 1 == cpd.shape[1]) not satisifed")
 *     fc.clpmn(&mm, &m, &n, &x, &y, <fwc_complex_x16_t*>np.PyArray_DATA(cpm_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 */
  __pyx_t_1 = (((__pyx_v_n - 0) + 1) != (__pyx_v_cpd_shape[1]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":146
 *         raise ValueError("(m - 0 + 1 == cpd.shape[0]) not satisifed")
 *     if n - 0 + 1 != cpd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cpd.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.clpmn(&mm, &m, &n, &x, &y, <fwc_complex_x16_t*>np.PyArray_DATA(cpm_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 *     return (cpm_, cpd_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_146_24->Target(__site_call1_146_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n - 0 + 1 == cpd.shape[1]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":147
 *     if n - 0 + 1 != cpd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cpd.shape[1]) not satisifed")
 *     fc.clpmn(&mm, &m, &n, &x, &y, <fwc_complex_x16_t*>np.PyArray_DATA(cpm_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))             # <<<<<<<<<<<<<<
 *     return (cpm_, cpd_,)
 * 
 */
  F_FUNC(clpmn,CLPMN)((&__pyx_v_mm), (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_x), (&__pyx_v_y), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cpm_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cpd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":148
 *         raise ValueError("(n - 0 + 1 == cpd.shape[1]) not satisifed")
 *     fc.clpmn(&mm, &m, &n, &x, &y, <fwc_complex_x16_t*>np.PyArray_DATA(cpm_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 *     return (cpm_, cpd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_cpm_), ((System::Object^)__pyx_v_cpd_)});
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":151
 * 
 * 
 * def jdzo(fwi_integer_t nt, object n=None, object m=None, object pcode=None, object zo=None):             # <<<<<<<<<<<<<<
 *     """jdzo(nt[, n, m, pcode, zo]) -> (n, m, pcode, zo)
 * 
 */

static System::Object^ jdzo(System::Object^ nt, [InteropServices::Optional]System::Object^ n, [InteropServices::Optional]System::Object^ m, [InteropServices::Optional]System::Object^ pcode, [InteropServices::Optional]System::Object^ zo) {
  fwi_integer_t __pyx_v_nt;
  System::Object^ __pyx_v_n = nullptr;
  System::Object^ __pyx_v_m = nullptr;
  System::Object^ __pyx_v_pcode = nullptr;
  System::Object^ __pyx_v_zo = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_n_;
  NumpyDotNet::ndarray^ __pyx_v_m_;
  NumpyDotNet::ndarray^ __pyx_v_pcode_;
  NumpyDotNet::ndarray^ __pyx_v_zo_;
  __pyx_t_5numpy_npy_intp __pyx_v_n_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_m_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_pcode_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_zo_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_nt = __site_cvt_151_0->Target(__site_cvt_151_0, nt);
  if (dynamic_cast<System::Reflection::Missing^>(n) == nullptr) {
    __pyx_v_n = n;
  } else {
    __pyx_v_n = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(m) == nullptr) {
    __pyx_v_m = m;
  } else {
    __pyx_v_m = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(pcode) == nullptr) {
    __pyx_v_pcode = pcode;
  } else {
    __pyx_v_pcode = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(zo) == nullptr) {
    __pyx_v_zo = zo;
  } else {
    __pyx_v_zo = ((System::Object^)nullptr);
  }
  __pyx_v_n_ = nullptr;
  __pyx_v_m_ = nullptr;
  __pyx_v_pcode_ = nullptr;
  __pyx_v_zo_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":172
 *     cdef np.ndarray n_, m_, pcode_, zo_
 *     cdef np.npy_intp n_shape[1], m_shape[1], pcode_shape[1], zo_shape[1]
 *     if not ((nt > 0) and (nt <= 1200)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (nt > 0) and (nt <= 1200)')
 *     n_shape[0] = 1400
 */
  __pyx_t_1 = (__pyx_v_nt > 0);
  if (__pyx_t_1) {
    __pyx_t_2 = (__pyx_v_nt <= 1200);
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":173
 *     cdef np.npy_intp n_shape[1], m_shape[1], pcode_shape[1], zo_shape[1]
 *     if not ((nt > 0) and (nt <= 1200)):
 *         raise ValueError('Condition on arguments not satisfied: (nt > 0) and (nt <= 1200)')             # <<<<<<<<<<<<<<
 *     n_shape[0] = 1400
 *     n_ = fw_asfortranarray(n, fwi_integer_t_enum, 1, n_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_173_24->Target(__site_call1_173_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: (nt > 0) and (nt <= 1200)"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":174
 *     if not ((nt > 0) and (nt <= 1200)):
 *         raise ValueError('Condition on arguments not satisfied: (nt > 0) and (nt <= 1200)')
 *     n_shape[0] = 1400             # <<<<<<<<<<<<<<
 *     n_ = fw_asfortranarray(n, fwi_integer_t_enum, 1, n_shape, False, True)
 *     if not (0 <= 1400 <= n_shape[0]):
 */
  (__pyx_v_n_shape[0]) = 1400;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":175
 *         raise ValueError('Condition on arguments not satisfied: (nt > 0) and (nt <= 1200)')
 *     n_shape[0] = 1400
 *     n_ = fw_asfortranarray(n, fwi_integer_t_enum, 1, n_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= 1400 <= n_shape[0]):
 *         raise ValueError("(0 <= 1400 <= n.shape[0]) not satisifed")
 */
  __pyx_t_5 = ((System::Object^)fw_asfortranarray(__pyx_v_n, NPY_INT, 1, __pyx_v_n_shape, 0, 1, nullptr)); 
  __pyx_v_n_ = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":178
 *     if not (0 <= 1400 <= n_shape[0]):
 *         raise ValueError("(0 <= 1400 <= n.shape[0]) not satisifed")
 *     m_shape[0] = 1400             # <<<<<<<<<<<<<<
 *     m_ = fw_asfortranarray(m, fwi_integer_t_enum, 1, m_shape, False, True)
 *     if not (0 <= 1400 <= m_shape[0]):
 */
  (__pyx_v_m_shape[0]) = 1400;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":179
 *         raise ValueError("(0 <= 1400 <= n.shape[0]) not satisifed")
 *     m_shape[0] = 1400
 *     m_ = fw_asfortranarray(m, fwi_integer_t_enum, 1, m_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= 1400 <= m_shape[0]):
 *         raise ValueError("(0 <= 1400 <= m.shape[0]) not satisifed")
 */
  __pyx_t_5 = ((System::Object^)fw_asfortranarray(__pyx_v_m, NPY_INT, 1, __pyx_v_m_shape, 0, 1, nullptr)); 
  __pyx_v_m_ = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":182
 *     if not (0 <= 1400 <= m_shape[0]):
 *         raise ValueError("(0 <= 1400 <= m.shape[0]) not satisifed")
 *     pcode_shape[0] = 1400             # <<<<<<<<<<<<<<
 *     pcode_ = fw_asfortranarray(pcode, fwi_integer_t_enum, 1, pcode_shape, False, True)
 *     if not (0 <= 1400 <= pcode_shape[0]):
 */
  (__pyx_v_pcode_shape[0]) = 1400;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":183
 *         raise ValueError("(0 <= 1400 <= m.shape[0]) not satisifed")
 *     pcode_shape[0] = 1400
 *     pcode_ = fw_asfortranarray(pcode, fwi_integer_t_enum, 1, pcode_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= 1400 <= pcode_shape[0]):
 *         raise ValueError("(0 <= 1400 <= pcode.shape[0]) not satisifed")
 */
  __pyx_t_5 = ((System::Object^)fw_asfortranarray(__pyx_v_pcode, NPY_INT, 1, __pyx_v_pcode_shape, 0, 1, nullptr)); 
  __pyx_v_pcode_ = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":186
 *     if not (0 <= 1400 <= pcode_shape[0]):
 *         raise ValueError("(0 <= 1400 <= pcode.shape[0]) not satisifed")
 *     zo_shape[0] = 1400 - 0 + 1             # <<<<<<<<<<<<<<
 *     zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)
 *     if not (0 <= 1400 - 0 + 1 <= zo_shape[0]):
 */
  (__pyx_v_zo_shape[0]) = 1401;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":187
 *         raise ValueError("(0 <= 1400 <= pcode.shape[0]) not satisifed")
 *     zo_shape[0] = 1400 - 0 + 1
 *     zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= 1400 - 0 + 1 <= zo_shape[0]):
 *         raise ValueError("(0 <= 1400 - 0 + 1 <= zo.shape[0]) not satisifed")
 */
  __pyx_t_5 = ((System::Object^)fw_asfortranarray(__pyx_v_zo, NPY_DOUBLE, 1, __pyx_v_zo_shape, 0, 1, nullptr)); 
  __pyx_v_zo_ = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":190
 *     if not (0 <= 1400 - 0 + 1 <= zo_shape[0]):
 *         raise ValueError("(0 <= 1400 - 0 + 1 <= zo.shape[0]) not satisifed")
 *     fc.jdzo(&nt, <fwi_integer_t*>np.PyArray_DATA(n_), <fwi_integer_t*>np.PyArray_DATA(m_), <fwi_integer_t*>np.PyArray_DATA(pcode_), <fwr_dbl_t*>np.PyArray_DATA(zo_))             # <<<<<<<<<<<<<<
 *     return (n_, m_, pcode_, zo_,)
 * 
 */
  F_FUNC(jdzo,JDZO)((&__pyx_v_nt), ((fwi_integer_t *)PyArray_DATA(__pyx_v_n_)), ((fwi_integer_t *)PyArray_DATA(__pyx_v_m_)), ((fwi_integer_t *)PyArray_DATA(__pyx_v_pcode_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_zo_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":191
 *         raise ValueError("(0 <= 1400 - 0 + 1 <= zo.shape[0]) not satisifed")
 *     fc.jdzo(&nt, <fwi_integer_t*>np.PyArray_DATA(n_), <fwi_integer_t*>np.PyArray_DATA(m_), <fwi_integer_t*>np.PyArray_DATA(pcode_), <fwr_dbl_t*>np.PyArray_DATA(zo_))
 *     return (n_, m_, pcode_, zo_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_n_), ((System::Object^)__pyx_v_m_), ((System::Object^)__pyx_v_pcode_), ((System::Object^)__pyx_v_zo_)});
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":194
 * 
 * 
 * def bernob(fwi_integer_t n, object bn=None):             # <<<<<<<<<<<<<<
 *     """bernob(n[, bn]) -> bn
 * 
 */

static System::Object^ bernob(System::Object^ n, [InteropServices::Optional]System::Object^ bn) {
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_v_bn = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_bn_;
  __pyx_t_5numpy_npy_intp __pyx_v_bn_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_194_0->Target(__site_cvt_194_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(bn) == nullptr) {
    __pyx_v_bn = bn;
  } else {
    __pyx_v_bn = ((System::Object^)nullptr);
  }
  __pyx_v_bn_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":209
 *     cdef np.ndarray bn_
 *     cdef np.npy_intp bn_shape[1]
 *     if not (n >= 2):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 2')
 *     bn_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 2));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":210
 *     cdef np.npy_intp bn_shape[1]
 *     if not (n >= 2):
 *         raise ValueError('Condition on arguments not satisfied: n >= 2')             # <<<<<<<<<<<<<<
 *     bn_shape[0] = n + 1
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_210_24->Target(__site_call1_210_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 2"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":211
 *     if not (n >= 2):
 *         raise ValueError('Condition on arguments not satisfied: n >= 2')
 *     bn_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
 *     if not (0 <= n + 1 <= bn_shape[0]):
 */
  (__pyx_v_bn_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":212
 *         raise ValueError('Condition on arguments not satisfied: n >= 2')
 *     bn_shape[0] = n + 1
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= bn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_bn, NPY_DOUBLE, 1, __pyx_v_bn_shape, 0, 1, nullptr)); 
  __pyx_v_bn_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":213
 *     bn_shape[0] = n + 1
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
 *     if not (0 <= n + 1 <= bn_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")
 *     fc.bernob(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_bn_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":214
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
 *     if not (0 <= n + 1 <= bn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.bernob(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))
 *     return bn_
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_214_24->Target(__site_call1_214_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= bn.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":215
 *     if not (0 <= n + 1 <= bn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")
 *     fc.bernob(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))             # <<<<<<<<<<<<<<
 *     return bn_
 * 
 */
  F_FUNC(bernob,BERNOB)((&__pyx_v_n), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_bn_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":216
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")
 *     fc.bernob(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))
 *     return bn_             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_bn_);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":219
 * 
 * 
 * def bernoa(fwi_integer_t n, object bn=None):             # <<<<<<<<<<<<<<
 *     """bernoa(n[, bn]) -> bn
 * 
 */

static System::Object^ bernoa(System::Object^ n, [InteropServices::Optional]System::Object^ bn) {
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_v_bn = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_bn_;
  __pyx_t_5numpy_npy_intp __pyx_v_bn_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_219_0->Target(__site_cvt_219_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(bn) == nullptr) {
    __pyx_v_bn = bn;
  } else {
    __pyx_v_bn = ((System::Object^)nullptr);
  }
  __pyx_v_bn_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":234
 *     cdef np.ndarray bn_
 *     cdef np.npy_intp bn_shape[1]
 *     if not (n >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     bn_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":235
 *     cdef np.npy_intp bn_shape[1]
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')             # <<<<<<<<<<<<<<
 *     bn_shape[0] = n + 1
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_235_24->Target(__site_call1_235_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":236
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     bn_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
 *     if not (0 <= n + 1 <= bn_shape[0]):
 */
  (__pyx_v_bn_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":237
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     bn_shape[0] = n + 1
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= bn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_bn, NPY_DOUBLE, 1, __pyx_v_bn_shape, 0, 1, nullptr)); 
  __pyx_v_bn_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":238
 *     bn_shape[0] = n + 1
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
 *     if not (0 <= n + 1 <= bn_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")
 *     fc.bernoa(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_bn_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":239
 *     bn_ = fw_asfortranarray(bn, fwr_dbl_t_enum, 1, bn_shape, False, True)
 *     if not (0 <= n + 1 <= bn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.bernoa(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))
 *     return bn_
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_239_24->Target(__site_call1_239_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= bn.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":240
 *     if not (0 <= n + 1 <= bn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")
 *     fc.bernoa(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))             # <<<<<<<<<<<<<<
 *     return bn_
 * 
 */
  F_FUNC(bernoa,BERNOA)((&__pyx_v_n), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_bn_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":241
 *         raise ValueError("(0 <= n + 1 <= bn.shape[0]) not satisifed")
 *     fc.bernoa(&n, <fwr_dbl_t*>np.PyArray_DATA(bn_))
 *     return bn_             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_bn_);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":244
 * 
 * 
 * def csphjy(fwi_integer_t n, fwc_complex_x16_t z, object csj=None, object cdj=None, object csy=None, object cdy=None):             # <<<<<<<<<<<<<<
 *     """csphjy(n, z[, csj, cdj, csy, cdy]) -> (nm, csj, cdj, csy, cdy)
 * 
 */

static System::Object^ csphjy(System::Object^ n, System::Object^ z, [InteropServices::Optional]System::Object^ csj, [InteropServices::Optional]System::Object^ cdj, [InteropServices::Optional]System::Object^ csy, [InteropServices::Optional]System::Object^ cdy) {
  fwi_integer_t __pyx_v_n;
  __pyx_t_double_complex __pyx_v_z;
  System::Object^ __pyx_v_csj = nullptr;
  System::Object^ __pyx_v_cdj = nullptr;
  System::Object^ __pyx_v_csy = nullptr;
  System::Object^ __pyx_v_cdy = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_csj_;
  NumpyDotNet::ndarray^ __pyx_v_cdj_;
  NumpyDotNet::ndarray^ __pyx_v_csy_;
  NumpyDotNet::ndarray^ __pyx_v_cdy_;
  __pyx_t_5numpy_npy_intp __pyx_v_csj_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_cdj_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_csy_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_cdy_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Numerics::Complex __pyx_t_1;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  long __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_n = __site_cvt_244_0->Target(__site_cvt_244_0, n);
  __pyx_t_1 = IronPython::Runtime::Converter::ConvertToComplex(z);
  __pyx_v_z.real(__pyx_t_1.Real);
  __pyx_v_z.imag(__pyx_t_1.Imaginary);
  if (dynamic_cast<System::Reflection::Missing^>(csj) == nullptr) {
    __pyx_v_csj = csj;
  } else {
    __pyx_v_csj = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cdj) == nullptr) {
    __pyx_v_cdj = cdj;
  } else {
    __pyx_v_cdj = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(csy) == nullptr) {
    __pyx_v_csy = csy;
  } else {
    __pyx_v_csy = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cdy) == nullptr) {
    __pyx_v_cdy = cdy;
  } else {
    __pyx_v_cdy = ((System::Object^)nullptr);
  }
  __pyx_v_csj_ = nullptr;
  __pyx_v_cdj_ = nullptr;
  __pyx_v_csy_ = nullptr;
  __pyx_v_cdy_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":268
 *     cdef np.ndarray csj_, cdj_, csy_, cdy_
 *     cdef np.npy_intp csj_shape[1], cdj_shape[1], csy_shape[1], cdy_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":269
 *     cdef np.npy_intp csj_shape[1], cdj_shape[1], csy_shape[1], cdy_shape[1]
 *     nm = 0
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     csj_shape[0] = n + 1
 */
  __pyx_t_2 = (!(__pyx_v_n >= 1));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":270
 *     nm = 0
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     csj_shape[0] = n + 1
 *     csj_ = fw_asfortranarray(csj, fwc_complex_x16_t_enum, 1, csj_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_270_24->Target(__site_call1_270_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":271
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     csj_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     csj_ = fw_asfortranarray(csj, fwc_complex_x16_t_enum, 1, csj_shape, False, True)
 *     if not (0 <= n + 1 <= csj_shape[0]):
 */
  (__pyx_v_csj_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":272
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     csj_shape[0] = n + 1
 *     csj_ = fw_asfortranarray(csj, fwc_complex_x16_t_enum, 1, csj_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= csj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csj.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_csj, NPY_CDOUBLE, 1, __pyx_v_csj_shape, 0, 1, nullptr)); 
  __pyx_v_csj_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":273
 *     csj_shape[0] = n + 1
 *     csj_ = fw_asfortranarray(csj, fwc_complex_x16_t_enum, 1, csj_shape, False, True)
 *     if not (0 <= n + 1 <= csj_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= csj.shape[0]) not satisifed")
 *     cdj_shape[0] = n + 1
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_2 = (0 <= __pyx_t_5);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_t_5 <= (__pyx_v_csj_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_2);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":274
 *     csj_ = fw_asfortranarray(csj, fwc_complex_x16_t_enum, 1, csj_shape, False, True)
 *     if not (0 <= n + 1 <= csj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csj.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     cdj_shape[0] = n + 1
 *     cdj_ = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, cdj_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_274_24->Target(__site_call1_274_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n + 1 <= csj.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":275
 *     if not (0 <= n + 1 <= csj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csj.shape[0]) not satisifed")
 *     cdj_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     cdj_ = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, cdj_shape, False, True)
 *     if not (0 <= n + 1 <= cdj_shape[0]):
 */
  (__pyx_v_cdj_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":276
 *         raise ValueError("(0 <= n + 1 <= csj.shape[0]) not satisifed")
 *     cdj_shape[0] = n + 1
 *     cdj_ = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, cdj_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= cdj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdj.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cdj, NPY_CDOUBLE, 1, __pyx_v_cdj_shape, 0, 1, nullptr)); 
  __pyx_v_cdj_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":277
 *     cdj_shape[0] = n + 1
 *     cdj_ = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, cdj_shape, False, True)
 *     if not (0 <= n + 1 <= cdj_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= cdj.shape[0]) not satisifed")
 *     csy_shape[0] = n + 1
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_6 = (0 <= __pyx_t_5);
  if (__pyx_t_6) {
    __pyx_t_6 = (__pyx_t_5 <= (__pyx_v_cdj_shape[0]));
  }
  __pyx_t_2 = (!__pyx_t_6);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":278
 *     cdj_ = fw_asfortranarray(cdj, fwc_complex_x16_t_enum, 1, cdj_shape, False, True)
 *     if not (0 <= n + 1 <= cdj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdj.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     csy_shape[0] = n + 1
 *     csy_ = fw_asfortranarray(csy, fwc_complex_x16_t_enum, 1, csy_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_278_24->Target(__site_call1_278_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= cdj.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":279
 *     if not (0 <= n + 1 <= cdj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdj.shape[0]) not satisifed")
 *     csy_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     csy_ = fw_asfortranarray(csy, fwc_complex_x16_t_enum, 1, csy_shape, False, True)
 *     if not (0 <= n + 1 <= csy_shape[0]):
 */
  (__pyx_v_csy_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":280
 *         raise ValueError("(0 <= n + 1 <= cdj.shape[0]) not satisifed")
 *     csy_shape[0] = n + 1
 *     csy_ = fw_asfortranarray(csy, fwc_complex_x16_t_enum, 1, csy_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= csy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csy.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_csy, NPY_CDOUBLE, 1, __pyx_v_csy_shape, 0, 1, nullptr)); 
  __pyx_v_csy_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":281
 *     csy_shape[0] = n + 1
 *     csy_ = fw_asfortranarray(csy, fwc_complex_x16_t_enum, 1, csy_shape, False, True)
 *     if not (0 <= n + 1 <= csy_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= csy.shape[0]) not satisifed")
 *     cdy_shape[0] = n + 1
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_2 = (0 <= __pyx_t_5);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_t_5 <= (__pyx_v_csy_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_2);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":282
 *     csy_ = fw_asfortranarray(csy, fwc_complex_x16_t_enum, 1, csy_shape, False, True)
 *     if not (0 <= n + 1 <= csy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csy.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     cdy_shape[0] = n + 1
 *     cdy_ = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, cdy_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_282_24->Target(__site_call1_282_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n + 1 <= csy.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":283
 *     if not (0 <= n + 1 <= csy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csy.shape[0]) not satisifed")
 *     cdy_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     cdy_ = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, cdy_shape, False, True)
 *     if not (0 <= n + 1 <= cdy_shape[0]):
 */
  (__pyx_v_cdy_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":284
 *         raise ValueError("(0 <= n + 1 <= csy.shape[0]) not satisifed")
 *     cdy_shape[0] = n + 1
 *     cdy_ = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, cdy_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= cdy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdy.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cdy, NPY_CDOUBLE, 1, __pyx_v_cdy_shape, 0, 1, nullptr)); 
  __pyx_v_cdy_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":285
 *     cdy_shape[0] = n + 1
 *     cdy_ = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, cdy_shape, False, True)
 *     if not (0 <= n + 1 <= cdy_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= cdy.shape[0]) not satisifed")
 *     fc.csphjy(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csj_), <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), <fwc_complex_x16_t*>np.PyArray_DATA(csy_), <fwc_complex_x16_t*>np.PyArray_DATA(cdy_))
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_6 = (0 <= __pyx_t_5);
  if (__pyx_t_6) {
    __pyx_t_6 = (__pyx_t_5 <= (__pyx_v_cdy_shape[0]));
  }
  __pyx_t_2 = (!__pyx_t_6);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":286
 *     cdy_ = fw_asfortranarray(cdy, fwc_complex_x16_t_enum, 1, cdy_shape, False, True)
 *     if not (0 <= n + 1 <= cdy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdy.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.csphjy(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csj_), <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), <fwc_complex_x16_t*>np.PyArray_DATA(csy_), <fwc_complex_x16_t*>np.PyArray_DATA(cdy_))
 *     return (nm, csj_, cdj_, csy_, cdy_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_286_24->Target(__site_call1_286_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= cdy.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":287
 *     if not (0 <= n + 1 <= cdy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdy.shape[0]) not satisifed")
 *     fc.csphjy(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csj_), <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), <fwc_complex_x16_t*>np.PyArray_DATA(csy_), <fwc_complex_x16_t*>np.PyArray_DATA(cdy_))             # <<<<<<<<<<<<<<
 *     return (nm, csj_, cdj_, csy_, cdy_,)
 * 
 */
  F_FUNC(csphjy,CSPHJY)((&__pyx_v_n), (&__pyx_v_z), (&__pyx_v_nm), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_csj_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cdj_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_csy_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cdy_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":288
 *         raise ValueError("(0 <= n + 1 <= cdy.shape[0]) not satisifed")
 *     fc.csphjy(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csj_), <fwc_complex_x16_t*>np.PyArray_DATA(cdj_), <fwc_complex_x16_t*>np.PyArray_DATA(csy_), <fwc_complex_x16_t*>np.PyArray_DATA(cdy_))
 *     return (nm, csj_, cdj_, csy_, cdy_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_nm;
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, ((System::Object^)__pyx_v_csj_), ((System::Object^)__pyx_v_cdj_), ((System::Object^)__pyx_v_csy_), ((System::Object^)__pyx_v_cdy_)});
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":291
 * 
 * 
 * def lpmns(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object pm=None, object pd=None):             # <<<<<<<<<<<<<<
 *     """lpmns(m, n, x[, pm, pd]) -> (pm, pd)
 * 
 */

static System::Object^ lpmns(System::Object^ m, System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ pm, [InteropServices::Optional]System::Object^ pd) {
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_pm = nullptr;
  System::Object^ __pyx_v_pd = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_pm_;
  NumpyDotNet::ndarray^ __pyx_v_pd_;
  __pyx_t_5numpy_npy_intp __pyx_v_pm_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_pd_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  long __pyx_t_6;
  __pyx_v_m = __site_cvt_291_0->Target(__site_cvt_291_0, m);
  __pyx_v_n = __site_cvt_291_0_1->Target(__site_cvt_291_0_1, n);
  __pyx_v_x = __site_cvt_291_0_2->Target(__site_cvt_291_0_2, x);
  if (dynamic_cast<System::Reflection::Missing^>(pm) == nullptr) {
    __pyx_v_pm = pm;
  } else {
    __pyx_v_pm = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(pd) == nullptr) {
    __pyx_v_pd = pd;
  } else {
    __pyx_v_pd = ((System::Object^)nullptr);
  }
  __pyx_v_pm_ = nullptr;
  __pyx_v_pd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":310
 *     cdef np.ndarray pm_, pd_
 *     cdef np.npy_intp pm_shape[1], pd_shape[1]
 *     if not ((m >= 0) and (m <= n)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
 *     if not (n >= 1):
 */
  __pyx_t_1 = (__pyx_v_m >= 0);
  if (__pyx_t_1) {
    __pyx_t_2 = (__pyx_v_m <= __pyx_v_n);
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":311
 *     cdef np.npy_intp pm_shape[1], pd_shape[1]
 *     if not ((m >= 0) and (m <= n)):
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_311_24->Target(__site_call1_311_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: (m >= 0) and (m <= n)"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":312
 *     if not ((m >= 0) and (m <= n)):
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     pm_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":313
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     pm_shape[0] = n + 1
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 1, pm_shape, False, True)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_313_24->Target(__site_call1_313_24, __pyx_context, __pyx_t_5, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":314
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     pm_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 1, pm_shape, False, True)
 *     if not (0 <= n + 1 <= pm_shape[0]):
 */
  (__pyx_v_pm_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":315
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     pm_shape[0] = n + 1
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 1, pm_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pm_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pm.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_pm, NPY_DOUBLE, 1, __pyx_v_pm_shape, 0, 1, nullptr)); 
  __pyx_v_pm_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":316
 *     pm_shape[0] = n + 1
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 1, pm_shape, False, True)
 *     if not (0 <= n + 1 <= pm_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pm.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1
 */
  __pyx_t_6 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_6);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_6 <= (__pyx_v_pm_shape[0]));
  }
  __pyx_t_3 = (!__pyx_t_1);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":317
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 1, pm_shape, False, True)
 *     if not (0 <= n + 1 <= pm_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pm.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_317_24->Target(__site_call1_317_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n + 1 <= pm.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":318
 *     if not (0 <= n + 1 <= pm_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pm.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):
 */
  (__pyx_v_pd_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":319
 *         raise ValueError("(0 <= n + 1 <= pm.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 */
  __pyx_t_5 = ((System::Object^)fw_asfortranarray(__pyx_v_pd, NPY_DOUBLE, 1, __pyx_v_pd_shape, 0, 1, nullptr)); 
  __pyx_v_pd_ = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":320
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     fc.lpmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 */
  __pyx_t_6 = (__pyx_v_n + 1);
  __pyx_t_3 = (0 <= __pyx_t_6);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_t_6 <= (__pyx_v_pd_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":321
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lpmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 *     return (pm_, pd_,)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_321_24->Target(__site_call1_321_24, __pyx_context, __pyx_t_5, ((System::Object^)"(0 <= n + 1 <= pd.shape[0]) not satisifed"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":322
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     fc.lpmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))             # <<<<<<<<<<<<<<
 *     return (pm_, pd_,)
 * 
 */
  F_FUNC(lpmns,LPMNS)((&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pm_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":323
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     fc.lpmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 *     return (pm_, pd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_pm_), ((System::Object^)__pyx_v_pd_)});
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":326
 * 
 * 
 * def eulera(fwi_integer_t n, object en=None):             # <<<<<<<<<<<<<<
 *     """eulera(n[, en]) -> en
 * 
 */

static System::Object^ eulera(System::Object^ n, [InteropServices::Optional]System::Object^ en) {
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_v_en = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_en_;
  __pyx_t_5numpy_npy_intp __pyx_v_en_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_326_0->Target(__site_cvt_326_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(en) == nullptr) {
    __pyx_v_en = en;
  } else {
    __pyx_v_en = ((System::Object^)nullptr);
  }
  __pyx_v_en_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":341
 *     cdef np.ndarray en_
 *     cdef np.npy_intp en_shape[1]
 *     if not (n >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     en_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":342
 *     cdef np.npy_intp en_shape[1]
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')             # <<<<<<<<<<<<<<
 *     en_shape[0] = n + 1
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_342_24->Target(__site_call1_342_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":343
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     en_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
 *     if not (0 <= n + 1 <= en_shape[0]):
 */
  (__pyx_v_en_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":344
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     en_shape[0] = n + 1
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= en_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_en, NPY_DOUBLE, 1, __pyx_v_en_shape, 0, 1, nullptr)); 
  __pyx_v_en_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":345
 *     en_shape[0] = n + 1
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
 *     if not (0 <= n + 1 <= en_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")
 *     fc.eulera(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_en_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":346
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
 *     if not (0 <= n + 1 <= en_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.eulera(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))
 *     return en_
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_346_24->Target(__site_call1_346_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= en.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":347
 *     if not (0 <= n + 1 <= en_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")
 *     fc.eulera(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))             # <<<<<<<<<<<<<<
 *     return en_
 * 
 */
  F_FUNC(eulera,EULERA)((&__pyx_v_n), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_en_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":348
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")
 *     fc.eulera(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))
 *     return en_             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_en_);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":351
 * 
 * 
 * def clqn(fwi_integer_t n, fwc_complex_x16_t z, object cqn=None, object cqd=None):             # <<<<<<<<<<<<<<
 *     """clqn(n, z[, cqn, cqd]) -> (cqn, cqd)
 * 
 */

static System::Object^ clqn(System::Object^ n, System::Object^ z, [InteropServices::Optional]System::Object^ cqn, [InteropServices::Optional]System::Object^ cqd) {
  fwi_integer_t __pyx_v_n;
  __pyx_t_double_complex __pyx_v_z;
  System::Object^ __pyx_v_cqn = nullptr;
  System::Object^ __pyx_v_cqd = nullptr;
  fwr_dbl_t __pyx_v_x_f;
  fwr_dbl_t __pyx_v_y_f;
  NumpyDotNet::ndarray^ __pyx_v_cqn_;
  NumpyDotNet::ndarray^ __pyx_v_cqd_;
  __pyx_t_5numpy_npy_intp __pyx_v_cqn_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_cqd_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Numerics::Complex __pyx_t_1;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  long __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_n = __site_cvt_351_0->Target(__site_cvt_351_0, n);
  __pyx_t_1 = IronPython::Runtime::Converter::ConvertToComplex(z);
  __pyx_v_z.real(__pyx_t_1.Real);
  __pyx_v_z.imag(__pyx_t_1.Imaginary);
  if (dynamic_cast<System::Reflection::Missing^>(cqn) == nullptr) {
    __pyx_v_cqn = cqn;
  } else {
    __pyx_v_cqn = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cqd) == nullptr) {
    __pyx_v_cqd = cqd;
  } else {
    __pyx_v_cqd = ((System::Object^)nullptr);
  }
  __pyx_v_cqn_ = nullptr;
  __pyx_v_cqd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":370
 *     cdef np.ndarray cqn_, cqd_
 *     cdef np.npy_intp cqn_shape[1], cqd_shape[1]
 *     x_f = z.real             # <<<<<<<<<<<<<<
 *     y_f = z.imag
 *     if not (n >= 1):
 */
  __pyx_v_x_f = __Pyx_CREAL(__pyx_v_z);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":371
 *     cdef np.npy_intp cqn_shape[1], cqd_shape[1]
 *     x_f = z.real
 *     y_f = z.imag             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_y_f = __Pyx_CIMAG(__pyx_v_z);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":372
 *     x_f = z.real
 *     y_f = z.imag
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     cqn_shape[0] = n + 1
 */
  __pyx_t_2 = (!(__pyx_v_n >= 1));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":373
 *     y_f = z.imag
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     cqn_shape[0] = n + 1
 *     cqn_ = fw_asfortranarray(cqn, fwc_complex_x16_t_enum, 1, cqn_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_373_24->Target(__site_call1_373_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":374
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     cqn_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     cqn_ = fw_asfortranarray(cqn, fwc_complex_x16_t_enum, 1, cqn_shape, False, True)
 *     if not (0 <= n + 1 <= cqn_shape[0]):
 */
  (__pyx_v_cqn_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":375
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     cqn_shape[0] = n + 1
 *     cqn_ = fw_asfortranarray(cqn, fwc_complex_x16_t_enum, 1, cqn_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= cqn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cqn.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_cqn, NPY_CDOUBLE, 1, __pyx_v_cqn_shape, 0, 1, nullptr)); 
  __pyx_v_cqn_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":376
 *     cqn_shape[0] = n + 1
 *     cqn_ = fw_asfortranarray(cqn, fwc_complex_x16_t_enum, 1, cqn_shape, False, True)
 *     if not (0 <= n + 1 <= cqn_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= cqn.shape[0]) not satisifed")
 *     cqd_shape[0] = n + 1
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_2 = (0 <= __pyx_t_5);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_t_5 <= (__pyx_v_cqn_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_2);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":377
 *     cqn_ = fw_asfortranarray(cqn, fwc_complex_x16_t_enum, 1, cqn_shape, False, True)
 *     if not (0 <= n + 1 <= cqn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cqn.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     cqd_shape[0] = n + 1
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 1, cqd_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_377_24->Target(__site_call1_377_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n + 1 <= cqn.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":378
 *     if not (0 <= n + 1 <= cqn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cqn.shape[0]) not satisifed")
 *     cqd_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 1, cqd_shape, False, True)
 *     if not (0 <= n + 1 <= cqd_shape[0]):
 */
  (__pyx_v_cqd_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":379
 *         raise ValueError("(0 <= n + 1 <= cqn.shape[0]) not satisifed")
 *     cqd_shape[0] = n + 1
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 1, cqd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= cqd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cqd.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cqd, NPY_CDOUBLE, 1, __pyx_v_cqd_shape, 0, 1, nullptr)); 
  __pyx_v_cqd_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":380
 *     cqd_shape[0] = n + 1
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 1, cqd_shape, False, True)
 *     if not (0 <= n + 1 <= cqd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= cqd.shape[0]) not satisifed")
 *     fc.clqn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqn_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_6 = (0 <= __pyx_t_5);
  if (__pyx_t_6) {
    __pyx_t_6 = (__pyx_t_5 <= (__pyx_v_cqd_shape[0]));
  }
  __pyx_t_2 = (!__pyx_t_6);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":381
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 1, cqd_shape, False, True)
 *     if not (0 <= n + 1 <= cqd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cqd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.clqn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqn_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))
 *     return (cqn_, cqd_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_381_24->Target(__site_call1_381_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= cqd.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":382
 *     if not (0 <= n + 1 <= cqd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cqd.shape[0]) not satisifed")
 *     fc.clqn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqn_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))             # <<<<<<<<<<<<<<
 *     return (cqn_, cqd_,)
 * 
 */
  F_FUNC(clqn,CLQN)((&__pyx_v_n), (&__pyx_v_x_f), (&__pyx_v_y_f), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cqn_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cqd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":383
 *         raise ValueError("(0 <= n + 1 <= cqd.shape[0]) not satisifed")
 *     fc.clqn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqn_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))
 *     return (cqn_, cqd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_cqn_), ((System::Object^)__pyx_v_cqd_)});
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":386
 * 
 * 
 * def airyzo(fwi_integer_t nt, fwi_integer_t kf=1, object xa=None, object xb=None, object xc=None, object xd=None):             # <<<<<<<<<<<<<<
 *     """airyzo(nt[, kf, xa, xb, xc, xd]) -> (xa, xb, xc, xd)
 * 
 */

static System::Object^ airyzo(System::Object^ nt, [InteropServices::Optional]System::Object^ kf, [InteropServices::Optional]System::Object^ xa, [InteropServices::Optional]System::Object^ xb, [InteropServices::Optional]System::Object^ xc, [InteropServices::Optional]System::Object^ xd) {
  fwi_integer_t __pyx_v_nt;
  fwi_integer_t __pyx_v_kf;
  System::Object^ __pyx_v_xa = nullptr;
  System::Object^ __pyx_v_xb = nullptr;
  System::Object^ __pyx_v_xc = nullptr;
  System::Object^ __pyx_v_xd = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_xa_;
  NumpyDotNet::ndarray^ __pyx_v_xb_;
  NumpyDotNet::ndarray^ __pyx_v_xc_;
  NumpyDotNet::ndarray^ __pyx_v_xd_;
  __pyx_t_5numpy_npy_intp __pyx_v_xa_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_xb_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_xc_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_xd_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_nt = __site_cvt_386_0->Target(__site_cvt_386_0, nt);
  if (dynamic_cast<System::Reflection::Missing^>(kf) == nullptr) {
    __pyx_v_kf = __site_cvt_386_0_1->Target(__site_cvt_386_0_1, kf);
  } else {
    __pyx_v_kf = ((fwi_integer_t)1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(xa) == nullptr) {
    __pyx_v_xa = xa;
  } else {
    __pyx_v_xa = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(xb) == nullptr) {
    __pyx_v_xb = xb;
  } else {
    __pyx_v_xb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(xc) == nullptr) {
    __pyx_v_xc = xc;
  } else {
    __pyx_v_xc = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(xd) == nullptr) {
    __pyx_v_xd = xd;
  } else {
    __pyx_v_xd = ((System::Object^)nullptr);
  }
  __pyx_v_xa_ = nullptr;
  __pyx_v_xb_ = nullptr;
  __pyx_v_xc_ = nullptr;
  __pyx_v_xd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":408
 *     cdef np.ndarray xa_, xb_, xc_, xd_
 *     cdef np.npy_intp xa_shape[1], xb_shape[1], xc_shape[1], xd_shape[1]
 *     if not (nt > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     xa_shape[0] = nt
 */
  __pyx_t_1 = (!(__pyx_v_nt > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":409
 *     cdef np.npy_intp xa_shape[1], xb_shape[1], xc_shape[1], xd_shape[1]
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')             # <<<<<<<<<<<<<<
 *     xa_shape[0] = nt
 *     xa_ = fw_asfortranarray(xa, fwr_dbl_t_enum, 1, xa_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_409_24->Target(__site_call1_409_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: nt > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":410
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     xa_shape[0] = nt             # <<<<<<<<<<<<<<
 *     xa_ = fw_asfortranarray(xa, fwr_dbl_t_enum, 1, xa_shape, False, True)
 *     if nt != xa_shape[0]:
 */
  (__pyx_v_xa_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":411
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     xa_shape[0] = nt
 *     xa_ = fw_asfortranarray(xa, fwr_dbl_t_enum, 1, xa_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != xa_shape[0]:
 *         raise ValueError("(nt == xa.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_xa, NPY_DOUBLE, 1, __pyx_v_xa_shape, 0, 1, nullptr)); 
  __pyx_v_xa_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":412
 *     xa_shape[0] = nt
 *     xa_ = fw_asfortranarray(xa, fwr_dbl_t_enum, 1, xa_shape, False, True)
 *     if nt != xa_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == xa.shape[0]) not satisifed")
 *     xb_shape[0] = nt
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_xa_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":413
 *     xa_ = fw_asfortranarray(xa, fwr_dbl_t_enum, 1, xa_shape, False, True)
 *     if nt != xa_shape[0]:
 *         raise ValueError("(nt == xa.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     xb_shape[0] = nt
 *     xb_ = fw_asfortranarray(xb, fwr_dbl_t_enum, 1, xb_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_413_24->Target(__site_call1_413_24, __pyx_context, __pyx_t_3, ((System::Object^)"(nt == xa.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":414
 *     if nt != xa_shape[0]:
 *         raise ValueError("(nt == xa.shape[0]) not satisifed")
 *     xb_shape[0] = nt             # <<<<<<<<<<<<<<
 *     xb_ = fw_asfortranarray(xb, fwr_dbl_t_enum, 1, xb_shape, False, True)
 *     if nt != xb_shape[0]:
 */
  (__pyx_v_xb_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":415
 *         raise ValueError("(nt == xa.shape[0]) not satisifed")
 *     xb_shape[0] = nt
 *     xb_ = fw_asfortranarray(xb, fwr_dbl_t_enum, 1, xb_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != xb_shape[0]:
 *         raise ValueError("(nt == xb.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_xb, NPY_DOUBLE, 1, __pyx_v_xb_shape, 0, 1, nullptr)); 
  __pyx_v_xb_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":416
 *     xb_shape[0] = nt
 *     xb_ = fw_asfortranarray(xb, fwr_dbl_t_enum, 1, xb_shape, False, True)
 *     if nt != xb_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == xb.shape[0]) not satisifed")
 *     xc_shape[0] = nt
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_xb_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":417
 *     xb_ = fw_asfortranarray(xb, fwr_dbl_t_enum, 1, xb_shape, False, True)
 *     if nt != xb_shape[0]:
 *         raise ValueError("(nt == xb.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     xc_shape[0] = nt
 *     xc_ = fw_asfortranarray(xc, fwr_dbl_t_enum, 1, xc_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_417_24->Target(__site_call1_417_24, __pyx_context, __pyx_t_2, ((System::Object^)"(nt == xb.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":418
 *     if nt != xb_shape[0]:
 *         raise ValueError("(nt == xb.shape[0]) not satisifed")
 *     xc_shape[0] = nt             # <<<<<<<<<<<<<<
 *     xc_ = fw_asfortranarray(xc, fwr_dbl_t_enum, 1, xc_shape, False, True)
 *     if nt != xc_shape[0]:
 */
  (__pyx_v_xc_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":419
 *         raise ValueError("(nt == xb.shape[0]) not satisifed")
 *     xc_shape[0] = nt
 *     xc_ = fw_asfortranarray(xc, fwr_dbl_t_enum, 1, xc_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != xc_shape[0]:
 *         raise ValueError("(nt == xc.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_xc, NPY_DOUBLE, 1, __pyx_v_xc_shape, 0, 1, nullptr)); 
  __pyx_v_xc_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":420
 *     xc_shape[0] = nt
 *     xc_ = fw_asfortranarray(xc, fwr_dbl_t_enum, 1, xc_shape, False, True)
 *     if nt != xc_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == xc.shape[0]) not satisifed")
 *     xd_shape[0] = nt
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_xc_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":421
 *     xc_ = fw_asfortranarray(xc, fwr_dbl_t_enum, 1, xc_shape, False, True)
 *     if nt != xc_shape[0]:
 *         raise ValueError("(nt == xc.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     xd_shape[0] = nt
 *     xd_ = fw_asfortranarray(xd, fwr_dbl_t_enum, 1, xd_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_421_24->Target(__site_call1_421_24, __pyx_context, __pyx_t_3, ((System::Object^)"(nt == xc.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":422
 *     if nt != xc_shape[0]:
 *         raise ValueError("(nt == xc.shape[0]) not satisifed")
 *     xd_shape[0] = nt             # <<<<<<<<<<<<<<
 *     xd_ = fw_asfortranarray(xd, fwr_dbl_t_enum, 1, xd_shape, False, True)
 *     if nt != xd_shape[0]:
 */
  (__pyx_v_xd_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":423
 *         raise ValueError("(nt == xc.shape[0]) not satisifed")
 *     xd_shape[0] = nt
 *     xd_ = fw_asfortranarray(xd, fwr_dbl_t_enum, 1, xd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != xd_shape[0]:
 *         raise ValueError("(nt == xd.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_xd, NPY_DOUBLE, 1, __pyx_v_xd_shape, 0, 1, nullptr)); 
  __pyx_v_xd_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":424
 *     xd_shape[0] = nt
 *     xd_ = fw_asfortranarray(xd, fwr_dbl_t_enum, 1, xd_shape, False, True)
 *     if nt != xd_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == xd.shape[0]) not satisifed")
 *     fc.airyzo(&nt, &kf, <fwr_dbl_t*>np.PyArray_DATA(xa_), <fwr_dbl_t*>np.PyArray_DATA(xb_), <fwr_dbl_t*>np.PyArray_DATA(xc_), <fwr_dbl_t*>np.PyArray_DATA(xd_))
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_xd_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":425
 *     xd_ = fw_asfortranarray(xd, fwr_dbl_t_enum, 1, xd_shape, False, True)
 *     if nt != xd_shape[0]:
 *         raise ValueError("(nt == xd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.airyzo(&nt, &kf, <fwr_dbl_t*>np.PyArray_DATA(xa_), <fwr_dbl_t*>np.PyArray_DATA(xb_), <fwr_dbl_t*>np.PyArray_DATA(xc_), <fwr_dbl_t*>np.PyArray_DATA(xd_))
 *     return (xa_, xb_, xc_, xd_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_425_24->Target(__site_call1_425_24, __pyx_context, __pyx_t_2, ((System::Object^)"(nt == xd.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":426
 *     if nt != xd_shape[0]:
 *         raise ValueError("(nt == xd.shape[0]) not satisifed")
 *     fc.airyzo(&nt, &kf, <fwr_dbl_t*>np.PyArray_DATA(xa_), <fwr_dbl_t*>np.PyArray_DATA(xb_), <fwr_dbl_t*>np.PyArray_DATA(xc_), <fwr_dbl_t*>np.PyArray_DATA(xd_))             # <<<<<<<<<<<<<<
 *     return (xa_, xb_, xc_, xd_,)
 * 
 */
  F_FUNC(airyzo,AIRYZO)((&__pyx_v_nt), (&__pyx_v_kf), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_xa_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_xb_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_xc_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_xd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":427
 *         raise ValueError("(nt == xd.shape[0]) not satisifed")
 *     fc.airyzo(&nt, &kf, <fwr_dbl_t*>np.PyArray_DATA(xa_), <fwr_dbl_t*>np.PyArray_DATA(xb_), <fwr_dbl_t*>np.PyArray_DATA(xc_), <fwr_dbl_t*>np.PyArray_DATA(xd_))
 *     return (xa_, xb_, xc_, xd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_xa_), ((System::Object^)__pyx_v_xb_), ((System::Object^)__pyx_v_xc_), ((System::Object^)__pyx_v_xd_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":430
 * 
 * 
 * def eulerb(fwi_integer_t n, object en=None):             # <<<<<<<<<<<<<<
 *     """eulerb(n[, en]) -> en
 * 
 */

static System::Object^ eulerb(System::Object^ n, [InteropServices::Optional]System::Object^ en) {
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_v_en = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_en_;
  __pyx_t_5numpy_npy_intp __pyx_v_en_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_430_0->Target(__site_cvt_430_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(en) == nullptr) {
    __pyx_v_en = en;
  } else {
    __pyx_v_en = ((System::Object^)nullptr);
  }
  __pyx_v_en_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":445
 *     cdef np.ndarray en_
 *     cdef np.npy_intp en_shape[1]
 *     if not (n >= 2):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 2')
 *     en_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 2));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":446
 *     cdef np.npy_intp en_shape[1]
 *     if not (n >= 2):
 *         raise ValueError('Condition on arguments not satisfied: n >= 2')             # <<<<<<<<<<<<<<
 *     en_shape[0] = n + 1
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_446_24->Target(__site_call1_446_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 2"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":447
 *     if not (n >= 2):
 *         raise ValueError('Condition on arguments not satisfied: n >= 2')
 *     en_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
 *     if not (0 <= n + 1 <= en_shape[0]):
 */
  (__pyx_v_en_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":448
 *         raise ValueError('Condition on arguments not satisfied: n >= 2')
 *     en_shape[0] = n + 1
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= en_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_en, NPY_DOUBLE, 1, __pyx_v_en_shape, 0, 1, nullptr)); 
  __pyx_v_en_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":449
 *     en_shape[0] = n + 1
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
 *     if not (0 <= n + 1 <= en_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")
 *     fc.eulerb(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_en_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":450
 *     en_ = fw_asfortranarray(en, fwr_dbl_t_enum, 1, en_shape, False, True)
 *     if not (0 <= n + 1 <= en_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.eulerb(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))
 *     return en_
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_450_24->Target(__site_call1_450_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= en.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":451
 *     if not (0 <= n + 1 <= en_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")
 *     fc.eulerb(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))             # <<<<<<<<<<<<<<
 *     return en_
 * 
 */
  F_FUNC(eulerb,EULERB)((&__pyx_v_n), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_en_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":452
 *         raise ValueError("(0 <= n + 1 <= en.shape[0]) not satisifed")
 *     fc.eulerb(&n, <fwr_dbl_t*>np.PyArray_DATA(en_))
 *     return en_             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_en_);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":455
 * 
 * 
 * def cva1(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, object cv=None):             # <<<<<<<<<<<<<<
 *     """cva1(kd, m, q[, cv]) -> cv
 * 
 */

static System::Object^ cva1(System::Object^ kd, System::Object^ m, System::Object^ q, [InteropServices::Optional]System::Object^ cv) {
  fwi_integer_t __pyx_v_kd;
  fwi_integer_t __pyx_v_m;
  fwr_dbl_t __pyx_v_q;
  System::Object^ __pyx_v_cv = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_cv_;
  __pyx_t_5numpy_npy_intp __pyx_v_cv_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_kd = __site_cvt_455_0->Target(__site_cvt_455_0, kd);
  __pyx_v_m = __site_cvt_455_0_1->Target(__site_cvt_455_0_1, m);
  __pyx_v_q = __site_cvt_455_0_2->Target(__site_cvt_455_0_2, q);
  if (dynamic_cast<System::Reflection::Missing^>(cv) == nullptr) {
    __pyx_v_cv = cv;
  } else {
    __pyx_v_cv = ((System::Object^)nullptr);
  }
  __pyx_v_cv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":472
 *     cdef np.ndarray cv_
 *     cdef np.npy_intp cv_shape[1]
 *     if not (m <= 200):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: m <= 200')
 *     if not (q >= 0):
 */
  __pyx_t_1 = (!(__pyx_v_m <= 200));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":473
 *     cdef np.npy_intp cv_shape[1]
 *     if not (m <= 200):
 *         raise ValueError('Condition on arguments not satisfied: m <= 200')             # <<<<<<<<<<<<<<
 *     if not (q >= 0):
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_473_24->Target(__site_call1_473_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: m <= 200"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":474
 *     if not (m <= 200):
 *         raise ValueError('Condition on arguments not satisfied: m <= 200')
 *     if not (q >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')
 *     cv_shape[0] = m
 */
  __pyx_t_1 = (!(__pyx_v_q >= 0.0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":475
 *         raise ValueError('Condition on arguments not satisfied: m <= 200')
 *     if not (q >= 0):
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')             # <<<<<<<<<<<<<<
 *     cv_shape[0] = m
 *     cv_ = fw_asfortranarray(cv, fwr_dbl_t_enum, 1, cv_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_475_24->Target(__site_call1_475_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: q >= 0"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":476
 *     if not (q >= 0):
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')
 *     cv_shape[0] = m             # <<<<<<<<<<<<<<
 *     cv_ = fw_asfortranarray(cv, fwr_dbl_t_enum, 1, cv_shape, False, True)
 *     if m != cv_shape[0]:
 */
  (__pyx_v_cv_shape[0]) = __pyx_v_m;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":477
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')
 *     cv_shape[0] = m
 *     cv_ = fw_asfortranarray(cv, fwr_dbl_t_enum, 1, cv_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m != cv_shape[0]:
 *         raise ValueError("(m == cv.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_cv, NPY_DOUBLE, 1, __pyx_v_cv_shape, 0, 1, nullptr)); 
  __pyx_v_cv_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":478
 *     cv_shape[0] = m
 *     cv_ = fw_asfortranarray(cv, fwr_dbl_t_enum, 1, cv_shape, False, True)
 *     if m != cv_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m == cv.shape[0]) not satisifed")
 *     fc.cva1(&kd, &m, &q, <fwr_dbl_t*>np.PyArray_DATA(cv_))
 */
  __pyx_t_1 = (__pyx_v_m != (__pyx_v_cv_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":479
 *     cv_ = fw_asfortranarray(cv, fwr_dbl_t_enum, 1, cv_shape, False, True)
 *     if m != cv_shape[0]:
 *         raise ValueError("(m == cv.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.cva1(&kd, &m, &q, <fwr_dbl_t*>np.PyArray_DATA(cv_))
 *     return cv_
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_479_24->Target(__site_call1_479_24, __pyx_context, __pyx_t_2, ((System::Object^)"(m == cv.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":480
 *     if m != cv_shape[0]:
 *         raise ValueError("(m == cv.shape[0]) not satisifed")
 *     fc.cva1(&kd, &m, &q, <fwr_dbl_t*>np.PyArray_DATA(cv_))             # <<<<<<<<<<<<<<
 *     return cv_
 * 
 */
  F_FUNC(cva1,CVA1)((&__pyx_v_kd), (&__pyx_v_m), (&__pyx_v_q), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_cv_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":481
 *         raise ValueError("(m == cv.shape[0]) not satisifed")
 *     fc.cva1(&kd, &m, &q, <fwr_dbl_t*>np.PyArray_DATA(cv_))
 *     return cv_             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_cv_);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":484
 * 
 * 
 * def lqnb(fwi_integer_t n, fwr_dbl_t x, object qn=None, object qd=None):             # <<<<<<<<<<<<<<
 *     """lqnb(n, x[, qn, qd]) -> (qn, qd)
 * 
 */

static System::Object^ lqnb(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ qn, [InteropServices::Optional]System::Object^ qd) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_qn = nullptr;
  System::Object^ __pyx_v_qd = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_qn_;
  NumpyDotNet::ndarray^ __pyx_v_qd_;
  __pyx_t_5numpy_npy_intp __pyx_v_qn_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_qd_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_484_0->Target(__site_cvt_484_0, n);
  __pyx_v_x = __site_cvt_484_0_1->Target(__site_cvt_484_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(qn) == nullptr) {
    __pyx_v_qn = qn;
  } else {
    __pyx_v_qn = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(qd) == nullptr) {
    __pyx_v_qd = qd;
  } else {
    __pyx_v_qd = ((System::Object^)nullptr);
  }
  __pyx_v_qn_ = nullptr;
  __pyx_v_qd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":502
 *     cdef np.ndarray qn_, qd_
 *     cdef np.npy_intp qn_shape[1], qd_shape[1]
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     qn_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":503
 *     cdef np.npy_intp qn_shape[1], qd_shape[1]
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     qn_shape[0] = n + 1
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_503_24->Target(__site_call1_503_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":504
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     qn_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
 *     if not (0 <= n + 1 <= qn_shape[0]):
 */
  (__pyx_v_qn_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":505
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     qn_shape[0] = n + 1
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= qn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_qn, NPY_DOUBLE, 1, __pyx_v_qn_shape, 0, 1, nullptr)); 
  __pyx_v_qn_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":506
 *     qn_shape[0] = n + 1
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
 *     if not (0 <= n + 1 <= qn_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_qn_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":507
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
 *     if not (0 <= n + 1 <= qn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_507_24->Target(__site_call1_507_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= qn.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":508
 *     if not (0 <= n + 1 <= qn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):
 */
  (__pyx_v_qd_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":509
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_qd, NPY_DOUBLE, 1, __pyx_v_qd_shape, 0, 1, nullptr)); 
  __pyx_v_qd_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":510
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqnb(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_qd_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":511
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lqnb(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 *     return (qn_, qd_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_511_24->Target(__site_call1_511_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= qd.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":512
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqnb(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))             # <<<<<<<<<<<<<<
 *     return (qn_, qd_,)
 * 
 */
  F_FUNC(lqnb,LQNB)((&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_qn_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_qd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":513
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqnb(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 *     return (qn_, qd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_qn_), ((System::Object^)__pyx_v_qd_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":516
 * 
 * 
 * def lamv(fwr_dbl_t v, fwr_dbl_t x, object vl=None, object dl=None):             # <<<<<<<<<<<<<<
 *     """lamv(v, x[, vl, dl]) -> (vm, vl, dl)
 * 
 */

static System::Object^ lamv(System::Object^ v, System::Object^ x, [InteropServices::Optional]System::Object^ vl, [InteropServices::Optional]System::Object^ dl) {
  fwr_dbl_t __pyx_v_v;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_vl = nullptr;
  System::Object^ __pyx_v_dl = nullptr;
  fwr_dbl_t __pyx_v_vm;
  NumpyDotNet::ndarray^ __pyx_v_vl_;
  NumpyDotNet::ndarray^ __pyx_v_dl_;
  __pyx_t_5numpy_npy_intp __pyx_v_vl_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dl_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_v = __site_cvt_516_0->Target(__site_cvt_516_0, v);
  __pyx_v_x = __site_cvt_516_0_1->Target(__site_cvt_516_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(vl) == nullptr) {
    __pyx_v_vl = vl;
  } else {
    __pyx_v_vl = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dl) == nullptr) {
    __pyx_v_dl = dl;
  } else {
    __pyx_v_dl = ((System::Object^)nullptr);
  }
  __pyx_v_vl_ = nullptr;
  __pyx_v_dl_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":536
 *     cdef np.ndarray vl_, dl_
 *     cdef np.npy_intp vl_shape[1], dl_shape[1]
 *     vm = 0             # <<<<<<<<<<<<<<
 *     if not (v >= 1):
 *         raise ValueError('Condition on arguments not satisfied: v >= 1')
 */
  __pyx_v_vm = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":537
 *     cdef np.npy_intp vl_shape[1], dl_shape[1]
 *     vm = 0
 *     if not (v >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: v >= 1')
 *     vl_shape[0] = <int>v + 1
 */
  __pyx_t_1 = (!(__pyx_v_v >= 1.0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":538
 *     vm = 0
 *     if not (v >= 1):
 *         raise ValueError('Condition on arguments not satisfied: v >= 1')             # <<<<<<<<<<<<<<
 *     vl_shape[0] = <int>v + 1
 *     vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 1, vl_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_538_24->Target(__site_call1_538_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: v >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":539
 *     if not (v >= 1):
 *         raise ValueError('Condition on arguments not satisfied: v >= 1')
 *     vl_shape[0] = <int>v + 1             # <<<<<<<<<<<<<<
 *     vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 1, vl_shape, False, True)
 *     if not (0 <= <int>v + 1 <= vl_shape[0]):
 */
  (__pyx_v_vl_shape[0]) = (((int)__pyx_v_v) + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":540
 *         raise ValueError('Condition on arguments not satisfied: v >= 1')
 *     vl_shape[0] = <int>v + 1
 *     vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 1, vl_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= <int>v + 1 <= vl_shape[0]):
 *         raise ValueError("(0 <= <int>v + 1 <= vl.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_vl, NPY_DOUBLE, 1, __pyx_v_vl_shape, 0, 1, nullptr)); 
  __pyx_v_vl_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":541
 *     vl_shape[0] = <int>v + 1
 *     vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 1, vl_shape, False, True)
 *     if not (0 <= <int>v + 1 <= vl_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= <int>v + 1 <= vl.shape[0]) not satisifed")
 *     dl_shape[0] = <int>v + 1
 */
  __pyx_t_4 = (((int)__pyx_v_v) + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_vl_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":542
 *     vl_ = fw_asfortranarray(vl, fwr_dbl_t_enum, 1, vl_shape, False, True)
 *     if not (0 <= <int>v + 1 <= vl_shape[0]):
 *         raise ValueError("(0 <= <int>v + 1 <= vl.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dl_shape[0] = <int>v + 1
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_542_24->Target(__site_call1_542_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= <int>v + 1 <= vl.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":543
 *     if not (0 <= <int>v + 1 <= vl_shape[0]):
 *         raise ValueError("(0 <= <int>v + 1 <= vl.shape[0]) not satisifed")
 *     dl_shape[0] = <int>v + 1             # <<<<<<<<<<<<<<
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
 *     if not (0 <= <int>v + 1 <= dl_shape[0]):
 */
  (__pyx_v_dl_shape[0]) = (((int)__pyx_v_v) + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":544
 *         raise ValueError("(0 <= <int>v + 1 <= vl.shape[0]) not satisifed")
 *     dl_shape[0] = <int>v + 1
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= <int>v + 1 <= dl_shape[0]):
 *         raise ValueError("(0 <= <int>v + 1 <= dl.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_dl, NPY_DOUBLE, 1, __pyx_v_dl_shape, 0, 1, nullptr)); 
  __pyx_v_dl_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":545
 *     dl_shape[0] = <int>v + 1
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
 *     if not (0 <= <int>v + 1 <= dl_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= <int>v + 1 <= dl.shape[0]) not satisifed")
 *     fc.lamv(&v, &x, &vm, <fwr_dbl_t*>np.PyArray_DATA(vl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))
 */
  __pyx_t_4 = (((int)__pyx_v_v) + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_dl_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":546
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
 *     if not (0 <= <int>v + 1 <= dl_shape[0]):
 *         raise ValueError("(0 <= <int>v + 1 <= dl.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lamv(&v, &x, &vm, <fwr_dbl_t*>np.PyArray_DATA(vl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))
 *     return (vm, vl_, dl_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_546_24->Target(__site_call1_546_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= <int>v + 1 <= dl.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":547
 *     if not (0 <= <int>v + 1 <= dl_shape[0]):
 *         raise ValueError("(0 <= <int>v + 1 <= dl.shape[0]) not satisifed")
 *     fc.lamv(&v, &x, &vm, <fwr_dbl_t*>np.PyArray_DATA(vl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))             # <<<<<<<<<<<<<<
 *     return (vm, vl_, dl_,)
 * 
 */
  F_FUNC(lamv,LAMV)((&__pyx_v_v), (&__pyx_v_x), (&__pyx_v_vm), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_vl_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dl_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":548
 *         raise ValueError("(0 <= <int>v + 1 <= dl.shape[0]) not satisifed")
 *     fc.lamv(&v, &x, &vm, <fwr_dbl_t*>np.PyArray_DATA(vl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))
 *     return (vm, vl_, dl_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_vm;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, ((System::Object^)__pyx_v_vl_), ((System::Object^)__pyx_v_dl_)});
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":551
 * 
 * 
 * def lagzo(fwi_integer_t n, object x=None, object w=None):             # <<<<<<<<<<<<<<
 *     """lagzo(n[, x, w]) -> (x, w)
 * 
 */

static System::Object^ lagzo(System::Object^ n, [InteropServices::Optional]System::Object^ x, [InteropServices::Optional]System::Object^ w) {
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_w = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_x_;
  NumpyDotNet::ndarray^ __pyx_v_w_;
  __pyx_t_5numpy_npy_intp __pyx_v_x_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_w_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = __site_cvt_551_0->Target(__site_cvt_551_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(x) == nullptr) {
    __pyx_v_x = x;
  } else {
    __pyx_v_x = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(w) == nullptr) {
    __pyx_v_w = w;
  } else {
    __pyx_v_w = ((System::Object^)nullptr);
  }
  __pyx_v_x_ = nullptr;
  __pyx_v_w_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":568
 *     cdef np.ndarray x_, w_
 *     cdef np.npy_intp x_shape[1], w_shape[1]
 *     if not (n > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n
 */
  __pyx_t_1 = (!(__pyx_v_n > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":569
 *     cdef np.npy_intp x_shape[1], w_shape[1]
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')             # <<<<<<<<<<<<<<
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_569_24->Target(__site_call1_569_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":570
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n             # <<<<<<<<<<<<<<
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:
 */
  (__pyx_v_x_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":571
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)             # <<<<<<<<<<<<<<
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_x, NPY_DOUBLE, 1, __pyx_v_x_shape, 0, 1, nullptr)); 
  __pyx_v_x_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":572
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n
 */
  __pyx_t_1 = (__pyx_v_n != (__pyx_v_x_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":573
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_573_24->Target(__site_call1_573_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == x.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":574
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n             # <<<<<<<<<<<<<<
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:
 */
  (__pyx_v_w_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":575
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)             # <<<<<<<<<<<<<<
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_w, NPY_DOUBLE, 1, __pyx_v_w_shape, 0, 1, nullptr)); 
  __pyx_v_w_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":576
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.lagzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 */
  __pyx_t_1 = (__pyx_v_n != (__pyx_v_w_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":577
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lagzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 *     return (x_, w_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_577_24->Target(__site_call1_577_24, __pyx_context, __pyx_t_2, ((System::Object^)"(n == w.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":578
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.lagzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))             # <<<<<<<<<<<<<<
 *     return (x_, w_,)
 * 
 */
  F_FUNC(lagzo,LAGZO)((&__pyx_v_n), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_x_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_w_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":579
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.lagzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 *     return (x_, w_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_x_), ((System::Object^)__pyx_v_w_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":582
 * 
 * 
 * def legzo(fwi_integer_t n, object x=None, object w=None):             # <<<<<<<<<<<<<<
 *     """legzo(n[, x, w]) -> (x, w)
 * 
 */

static System::Object^ legzo(System::Object^ n, [InteropServices::Optional]System::Object^ x, [InteropServices::Optional]System::Object^ w) {
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_w = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_x_;
  NumpyDotNet::ndarray^ __pyx_v_w_;
  __pyx_t_5numpy_npy_intp __pyx_v_x_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_w_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = __site_cvt_582_0->Target(__site_cvt_582_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(x) == nullptr) {
    __pyx_v_x = x;
  } else {
    __pyx_v_x = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(w) == nullptr) {
    __pyx_v_w = w;
  } else {
    __pyx_v_w = ((System::Object^)nullptr);
  }
  __pyx_v_x_ = nullptr;
  __pyx_v_w_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":599
 *     cdef np.ndarray x_, w_
 *     cdef np.npy_intp x_shape[1], w_shape[1]
 *     if not (n > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n
 */
  __pyx_t_1 = (!(__pyx_v_n > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":600
 *     cdef np.npy_intp x_shape[1], w_shape[1]
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')             # <<<<<<<<<<<<<<
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_600_24->Target(__site_call1_600_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":601
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n             # <<<<<<<<<<<<<<
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:
 */
  (__pyx_v_x_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":602
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)             # <<<<<<<<<<<<<<
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_x, NPY_DOUBLE, 1, __pyx_v_x_shape, 0, 1, nullptr)); 
  __pyx_v_x_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":603
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n
 */
  __pyx_t_1 = (__pyx_v_n != (__pyx_v_x_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":604
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_604_24->Target(__site_call1_604_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == x.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":605
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n             # <<<<<<<<<<<<<<
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:
 */
  (__pyx_v_w_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":606
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)             # <<<<<<<<<<<<<<
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_w, NPY_DOUBLE, 1, __pyx_v_w_shape, 0, 1, nullptr)); 
  __pyx_v_w_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":607
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.legzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 */
  __pyx_t_1 = (__pyx_v_n != (__pyx_v_w_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":608
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.legzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 *     return (x_, w_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_608_24->Target(__site_call1_608_24, __pyx_context, __pyx_t_2, ((System::Object^)"(n == w.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":609
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.legzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))             # <<<<<<<<<<<<<<
 *     return (x_, w_,)
 * 
 */
  F_FUNC(legzo,LEGZO)((&__pyx_v_n), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_x_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_w_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":610
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.legzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 *     return (x_, w_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_x_), ((System::Object^)__pyx_v_w_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":613
 * 
 * 
 * def pbdv(fwr_dbl_t v, fwr_dbl_t x, object dv=None, object dp=None):             # <<<<<<<<<<<<<<
 *     """pbdv(v, x[, dv, dp]) -> (dv, dp, pdf, pdd)
 * 
 */

static System::Object^ pbdv(System::Object^ v, System::Object^ x, [InteropServices::Optional]System::Object^ dv, [InteropServices::Optional]System::Object^ dp) {
  fwr_dbl_t __pyx_v_v;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_dv = nullptr;
  System::Object^ __pyx_v_dp = nullptr;
  fwr_dbl_t __pyx_v_pdf;
  fwr_dbl_t __pyx_v_pdd;
  NumpyDotNet::ndarray^ __pyx_v_dv_;
  NumpyDotNet::ndarray^ __pyx_v_dp_;
  __pyx_t_5numpy_npy_intp __pyx_v_dv_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dp_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  __pyx_t_5numpy_npy_intp __pyx_t_7;
  __pyx_v_v = __site_cvt_613_0->Target(__site_cvt_613_0, v);
  __pyx_v_x = __site_cvt_613_0_1->Target(__site_cvt_613_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(dv) == nullptr) {
    __pyx_v_dv = dv;
  } else {
    __pyx_v_dv = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dp) == nullptr) {
    __pyx_v_dp = dp;
  } else {
    __pyx_v_dp = ((System::Object^)nullptr);
  }
  __pyx_v_dv_ = nullptr;
  __pyx_v_dp_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":634
 *     cdef np.ndarray dv_, dp_
 *     cdef np.npy_intp dv_shape[1], dp_shape[1]
 *     pdf = 0             # <<<<<<<<<<<<<<
 *     pdd = 0
 *     if not ((abs(<int>v) + 2) >= 2):
 */
  __pyx_v_pdf = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":635
 *     cdef np.npy_intp dv_shape[1], dp_shape[1]
 *     pdf = 0
 *     pdd = 0             # <<<<<<<<<<<<<<
 *     if not ((abs(<int>v) + 2) >= 2):
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
 */
  __pyx_v_pdd = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":636
 *     pdf = 0
 *     pdd = 0
 *     if not ((abs(<int>v) + 2) >= 2):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
 *     dv_shape[0] = abs(<int>v) + 2
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_2 = ((int)__pyx_v_v);
  __pyx_t_3 = __site_call1_636_16->Target(__site_call1_636_16, __pyx_context, __pyx_t_1, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_add_636_25->Target(__site_op_add_636_25, __pyx_t_3, __pyx_int_2);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_ge_636_30->Target(__site_op_ge_636_30, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_636_30->Target(__site_istrue_636_30, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":637
 *     pdd = 0
 *     if not ((abs(<int>v) + 2) >= 2):
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')             # <<<<<<<<<<<<<<
 *     dv_shape[0] = abs(<int>v) + 2
 *     dv_ = fw_asfortranarray(dv, fwr_dbl_t_enum, 1, dv_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_637_24->Target(__site_call1_637_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":638
 *     if not ((abs(<int>v) + 2) >= 2):
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
 *     dv_shape[0] = abs(<int>v) + 2             # <<<<<<<<<<<<<<
 *     dv_ = fw_asfortranarray(dv, fwr_dbl_t_enum, 1, dv_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= dv_shape[0]):
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_3 = ((int)__pyx_v_v);
  __pyx_t_1 = __site_call1_638_21->Target(__site_call1_638_21, __pyx_context, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_add_638_30->Target(__site_op_add_638_30, __pyx_t_1, __pyx_int_2);
  __pyx_t_1 = nullptr;
  __pyx_t_6 = __site_cvt___pyx_t_5numpy_npy_intp_638_30->Target(__site_cvt___pyx_t_5numpy_npy_intp_638_30, __pyx_t_3);
  __pyx_t_3 = nullptr;
  (__pyx_v_dv_shape[0]) = __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":639
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
 *     dv_shape[0] = abs(<int>v) + 2
 *     dv_ = fw_asfortranarray(dv, fwr_dbl_t_enum, 1, dv_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= abs(<int>v) + 2 <= dv_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dv.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_dv, NPY_DOUBLE, 1, __pyx_v_dv_shape, 0, 1, nullptr)); 
  __pyx_v_dv_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":640
 *     dv_shape[0] = abs(<int>v) + 2
 *     dv_ = fw_asfortranarray(dv, fwr_dbl_t_enum, 1, dv_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= dv_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dv.shape[0]) not satisifed")
 *     dp_shape[0] = abs(<int>v) + 2
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_1 = ((int)__pyx_v_v);
  __pyx_t_2 = __site_call1_640_20->Target(__site_call1_640_20, __pyx_context, __pyx_t_3, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_add_640_29->Target(__site_op_add_640_29, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_le_640_14->Target(__site_op_le_640_14, __pyx_int_0, __pyx_t_1);
  if (__pyx_t_2) {
    __pyx_t_3 = (__pyx_v_dv_shape[0]);
    __pyx_t_2 = __site_op_le_640_33->Target(__site_op_le_640_33, __pyx_t_1, __pyx_t_3);
    __pyx_t_3 = nullptr;
  }
  __pyx_t_1 = nullptr;
  __pyx_t_5 = __site_istrue_640_14->Target(__site_istrue_640_14, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = (!__pyx_t_5);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":641
 *     dv_ = fw_asfortranarray(dv, fwr_dbl_t_enum, 1, dv_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= dv_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dv.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dp_shape[0] = abs(<int>v) + 2
 *     dp_ = fw_asfortranarray(dp, fwr_dbl_t_enum, 1, dp_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_641_24->Target(__site_call1_641_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= abs(<int>v) + 2 <= dv.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":642
 *     if not (0 <= abs(<int>v) + 2 <= dv_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dv.shape[0]) not satisifed")
 *     dp_shape[0] = abs(<int>v) + 2             # <<<<<<<<<<<<<<
 *     dp_ = fw_asfortranarray(dp, fwr_dbl_t_enum, 1, dp_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= dp_shape[0]):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_2 = ((int)__pyx_v_v);
  __pyx_t_3 = __site_call1_642_21->Target(__site_call1_642_21, __pyx_context, __pyx_t_1, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_add_642_30->Target(__site_op_add_642_30, __pyx_t_3, __pyx_int_2);
  __pyx_t_3 = nullptr;
  __pyx_t_7 = __site_cvt___pyx_t_5numpy_npy_intp_642_30->Target(__site_cvt___pyx_t_5numpy_npy_intp_642_30, __pyx_t_2);
  __pyx_t_2 = nullptr;
  (__pyx_v_dp_shape[0]) = __pyx_t_7;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":643
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dv.shape[0]) not satisifed")
 *     dp_shape[0] = abs(<int>v) + 2
 *     dp_ = fw_asfortranarray(dp, fwr_dbl_t_enum, 1, dp_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= abs(<int>v) + 2 <= dp_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dp.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_dp, NPY_DOUBLE, 1, __pyx_v_dp_shape, 0, 1, nullptr)); 
  __pyx_v_dp_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":644
 *     dp_shape[0] = abs(<int>v) + 2
 *     dp_ = fw_asfortranarray(dp, fwr_dbl_t_enum, 1, dp_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= dp_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dp.shape[0]) not satisifed")
 *     fc.pbdv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(dv_), <fwr_dbl_t*>np.PyArray_DATA(dp_), &pdf, &pdd)
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_3 = ((int)__pyx_v_v);
  __pyx_t_1 = __site_call1_644_20->Target(__site_call1_644_20, __pyx_context, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_add_644_29->Target(__site_op_add_644_29, __pyx_t_1, __pyx_int_2);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_le_644_14->Target(__site_op_le_644_14, __pyx_int_0, __pyx_t_3);
  if (__pyx_t_1) {
    __pyx_t_2 = (__pyx_v_dp_shape[0]);
    __pyx_t_1 = __site_op_le_644_33->Target(__site_op_le_644_33, __pyx_t_3, __pyx_t_2);
    __pyx_t_2 = nullptr;
  }
  __pyx_t_3 = nullptr;
  __pyx_t_4 = __site_istrue_644_14->Target(__site_istrue_644_14, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":645
 *     dp_ = fw_asfortranarray(dp, fwr_dbl_t_enum, 1, dp_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= dp_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dp.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.pbdv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(dv_), <fwr_dbl_t*>np.PyArray_DATA(dp_), &pdf, &pdd)
 *     return (dv_, dp_, pdf, pdd,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_645_24->Target(__site_call1_645_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= abs(<int>v) + 2 <= dp.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":646
 *     if not (0 <= abs(<int>v) + 2 <= dp_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dp.shape[0]) not satisifed")
 *     fc.pbdv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(dv_), <fwr_dbl_t*>np.PyArray_DATA(dp_), &pdf, &pdd)             # <<<<<<<<<<<<<<
 *     return (dv_, dp_, pdf, pdd,)
 * 
 */
  F_FUNC(pbdv,PBDV)((&__pyx_v_v), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dv_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dp_)), (&__pyx_v_pdf), (&__pyx_v_pdd));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":647
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= dp.shape[0]) not satisifed")
 *     fc.pbdv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(dv_), <fwr_dbl_t*>np.PyArray_DATA(dp_), &pdf, &pdd)
 *     return (dv_, dp_, pdf, pdd,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_pdf;
  __pyx_t_1 = __pyx_v_pdd;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_dv_), ((System::Object^)__pyx_v_dp_), __pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":650
 * 
 * 
 * def cerzo(fwi_integer_t nt, object zo=None):             # <<<<<<<<<<<<<<
 *     """cerzo(nt[, zo]) -> zo
 * 
 */

static System::Object^ cerzo(System::Object^ nt, [InteropServices::Optional]System::Object^ zo) {
  fwi_integer_t __pyx_v_nt;
  System::Object^ __pyx_v_zo = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_zo_;
  __pyx_t_5numpy_npy_intp __pyx_v_zo_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_nt = __site_cvt_650_0->Target(__site_cvt_650_0, nt);
  if (dynamic_cast<System::Reflection::Missing^>(zo) == nullptr) {
    __pyx_v_zo = zo;
  } else {
    __pyx_v_zo = ((System::Object^)nullptr);
  }
  __pyx_v_zo_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":665
 *     cdef np.ndarray zo_
 *     cdef np.npy_intp zo_shape[1]
 *     if not (nt > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     zo_shape[0] = nt
 */
  __pyx_t_1 = (!(__pyx_v_nt > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":666
 *     cdef np.npy_intp zo_shape[1]
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')             # <<<<<<<<<<<<<<
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_666_24->Target(__site_call1_666_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: nt > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":667
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     zo_shape[0] = nt             # <<<<<<<<<<<<<<
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:
 */
  (__pyx_v_zo_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":668
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_zo, NPY_CDOUBLE, 1, __pyx_v_zo_shape, 0, 1, nullptr)); 
  __pyx_v_zo_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":669
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.cerzo(&nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_zo_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":670
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.cerzo(&nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))
 *     return zo_
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_670_24->Target(__site_call1_670_24, __pyx_context, __pyx_t_3, ((System::Object^)"(nt == zo.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":671
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.cerzo(&nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))             # <<<<<<<<<<<<<<
 *     return zo_
 * 
 */
  F_FUNC(cerzo,CERZO)((&__pyx_v_nt), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_zo_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":672
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.cerzo(&nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))
 *     return zo_             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_zo_);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":675
 * 
 * 
 * def lamn(fwi_integer_t n, fwr_dbl_t x, object bl=None, object dl=None):             # <<<<<<<<<<<<<<
 *     """lamn(n, x[, bl, dl]) -> (nm, bl, dl)
 * 
 */

static System::Object^ lamn(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ bl, [InteropServices::Optional]System::Object^ dl) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_bl = nullptr;
  System::Object^ __pyx_v_dl = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_bl_;
  NumpyDotNet::ndarray^ __pyx_v_dl_;
  __pyx_t_5numpy_npy_intp __pyx_v_bl_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dl_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_675_0->Target(__site_cvt_675_0, n);
  __pyx_v_x = __site_cvt_675_0_1->Target(__site_cvt_675_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(bl) == nullptr) {
    __pyx_v_bl = bl;
  } else {
    __pyx_v_bl = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dl) == nullptr) {
    __pyx_v_dl = dl;
  } else {
    __pyx_v_dl = ((System::Object^)nullptr);
  }
  __pyx_v_bl_ = nullptr;
  __pyx_v_dl_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":695
 *     cdef np.ndarray bl_, dl_
 *     cdef np.npy_intp bl_shape[1], dl_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":696
 *     cdef np.npy_intp bl_shape[1], dl_shape[1]
 *     nm = 0
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     bl_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":697
 *     nm = 0
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     bl_shape[0] = n + 1
 *     bl_ = fw_asfortranarray(bl, fwr_dbl_t_enum, 1, bl_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_697_24->Target(__site_call1_697_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":698
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     bl_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     bl_ = fw_asfortranarray(bl, fwr_dbl_t_enum, 1, bl_shape, False, True)
 *     if not (0 <= n + 1 <= bl_shape[0]):
 */
  (__pyx_v_bl_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":699
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     bl_shape[0] = n + 1
 *     bl_ = fw_asfortranarray(bl, fwr_dbl_t_enum, 1, bl_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= bl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bl.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_bl, NPY_DOUBLE, 1, __pyx_v_bl_shape, 0, 1, nullptr)); 
  __pyx_v_bl_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":700
 *     bl_shape[0] = n + 1
 *     bl_ = fw_asfortranarray(bl, fwr_dbl_t_enum, 1, bl_shape, False, True)
 *     if not (0 <= n + 1 <= bl_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= bl.shape[0]) not satisifed")
 *     dl_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_bl_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":701
 *     bl_ = fw_asfortranarray(bl, fwr_dbl_t_enum, 1, bl_shape, False, True)
 *     if not (0 <= n + 1 <= bl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bl.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dl_shape[0] = n + 1
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_701_24->Target(__site_call1_701_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= bl.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":702
 *     if not (0 <= n + 1 <= bl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= bl.shape[0]) not satisifed")
 *     dl_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
 *     if not (0 <= n + 1 <= dl_shape[0]):
 */
  (__pyx_v_dl_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":703
 *         raise ValueError("(0 <= n + 1 <= bl.shape[0]) not satisifed")
 *     dl_shape[0] = n + 1
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= dl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dl.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_dl, NPY_DOUBLE, 1, __pyx_v_dl_shape, 0, 1, nullptr)); 
  __pyx_v_dl_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":704
 *     dl_shape[0] = n + 1
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
 *     if not (0 <= n + 1 <= dl_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= dl.shape[0]) not satisifed")
 *     fc.lamn(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(bl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_dl_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":705
 *     dl_ = fw_asfortranarray(dl, fwr_dbl_t_enum, 1, dl_shape, False, True)
 *     if not (0 <= n + 1 <= dl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dl.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lamn(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(bl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))
 *     return (nm, bl_, dl_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_705_24->Target(__site_call1_705_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= dl.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":706
 *     if not (0 <= n + 1 <= dl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dl.shape[0]) not satisifed")
 *     fc.lamn(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(bl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))             # <<<<<<<<<<<<<<
 *     return (nm, bl_, dl_,)
 * 
 */
  F_FUNC(lamn,LAMN)((&__pyx_v_n), (&__pyx_v_x), (&__pyx_v_nm), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_bl_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dl_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":707
 *         raise ValueError("(0 <= n + 1 <= dl.shape[0]) not satisifed")
 *     fc.lamn(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(bl_), <fwr_dbl_t*>np.PyArray_DATA(dl_))
 *     return (nm, bl_, dl_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_nm;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, ((System::Object^)__pyx_v_bl_), ((System::Object^)__pyx_v_dl_)});
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":710
 * 
 * 
 * def clpn(fwi_integer_t n, fwc_complex_x16_t z, object cpn=None, object cpd=None):             # <<<<<<<<<<<<<<
 *     """clpn(n, z[, cpn, cpd]) -> (cpn, cpd)
 * 
 */

static System::Object^ clpn(System::Object^ n, System::Object^ z, [InteropServices::Optional]System::Object^ cpn, [InteropServices::Optional]System::Object^ cpd) {
  fwi_integer_t __pyx_v_n;
  __pyx_t_double_complex __pyx_v_z;
  System::Object^ __pyx_v_cpn = nullptr;
  System::Object^ __pyx_v_cpd = nullptr;
  fwr_dbl_t __pyx_v_x_f;
  fwr_dbl_t __pyx_v_y_f;
  NumpyDotNet::ndarray^ __pyx_v_cpn_;
  NumpyDotNet::ndarray^ __pyx_v_cpd_;
  __pyx_t_5numpy_npy_intp __pyx_v_cpn_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_cpd_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Numerics::Complex __pyx_t_1;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  long __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_n = __site_cvt_710_0->Target(__site_cvt_710_0, n);
  __pyx_t_1 = IronPython::Runtime::Converter::ConvertToComplex(z);
  __pyx_v_z.real(__pyx_t_1.Real);
  __pyx_v_z.imag(__pyx_t_1.Imaginary);
  if (dynamic_cast<System::Reflection::Missing^>(cpn) == nullptr) {
    __pyx_v_cpn = cpn;
  } else {
    __pyx_v_cpn = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cpd) == nullptr) {
    __pyx_v_cpd = cpd;
  } else {
    __pyx_v_cpd = ((System::Object^)nullptr);
  }
  __pyx_v_cpn_ = nullptr;
  __pyx_v_cpd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":729
 *     cdef np.ndarray cpn_, cpd_
 *     cdef np.npy_intp cpn_shape[1], cpd_shape[1]
 *     x_f = z.real             # <<<<<<<<<<<<<<
 *     y_f = z.imag
 *     if not (n >= 1):
 */
  __pyx_v_x_f = __Pyx_CREAL(__pyx_v_z);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":730
 *     cdef np.npy_intp cpn_shape[1], cpd_shape[1]
 *     x_f = z.real
 *     y_f = z.imag             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_y_f = __Pyx_CIMAG(__pyx_v_z);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":731
 *     x_f = z.real
 *     y_f = z.imag
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     cpn_shape[0] = n + 1
 */
  __pyx_t_2 = (!(__pyx_v_n >= 1));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":732
 *     y_f = z.imag
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     cpn_shape[0] = n + 1
 *     cpn_ = fw_asfortranarray(cpn, fwc_complex_x16_t_enum, 1, cpn_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_732_24->Target(__site_call1_732_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":733
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     cpn_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     cpn_ = fw_asfortranarray(cpn, fwc_complex_x16_t_enum, 1, cpn_shape, False, True)
 *     if not (0 <= n + 1 <= cpn_shape[0]):
 */
  (__pyx_v_cpn_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":734
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     cpn_shape[0] = n + 1
 *     cpn_ = fw_asfortranarray(cpn, fwc_complex_x16_t_enum, 1, cpn_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= cpn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cpn.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_cpn, NPY_CDOUBLE, 1, __pyx_v_cpn_shape, 0, 1, nullptr)); 
  __pyx_v_cpn_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":735
 *     cpn_shape[0] = n + 1
 *     cpn_ = fw_asfortranarray(cpn, fwc_complex_x16_t_enum, 1, cpn_shape, False, True)
 *     if not (0 <= n + 1 <= cpn_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= cpn.shape[0]) not satisifed")
 *     cpd_shape[0] = n + 1
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_2 = (0 <= __pyx_t_5);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_t_5 <= (__pyx_v_cpn_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_2);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":736
 *     cpn_ = fw_asfortranarray(cpn, fwc_complex_x16_t_enum, 1, cpn_shape, False, True)
 *     if not (0 <= n + 1 <= cpn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cpn.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     cpd_shape[0] = n + 1
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_736_24->Target(__site_call1_736_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n + 1 <= cpn.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":737
 *     if not (0 <= n + 1 <= cpn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cpn.shape[0]) not satisifed")
 *     cpd_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
 *     if not (0 <= n + 1 <= cpd_shape[0]):
 */
  (__pyx_v_cpd_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":738
 *         raise ValueError("(0 <= n + 1 <= cpn.shape[0]) not satisifed")
 *     cpd_shape[0] = n + 1
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= cpd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cpd.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cpd, NPY_CDOUBLE, 1, __pyx_v_cpd_shape, 0, 1, nullptr)); 
  __pyx_v_cpd_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":739
 *     cpd_shape[0] = n + 1
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
 *     if not (0 <= n + 1 <= cpd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= cpd.shape[0]) not satisifed")
 *     fc.clpn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cpn_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_6 = (0 <= __pyx_t_5);
  if (__pyx_t_6) {
    __pyx_t_6 = (__pyx_t_5 <= (__pyx_v_cpd_shape[0]));
  }
  __pyx_t_2 = (!__pyx_t_6);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":740
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
 *     if not (0 <= n + 1 <= cpd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cpd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.clpn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cpn_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 *     return (cpn_, cpd_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_740_24->Target(__site_call1_740_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= cpd.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":741
 *     if not (0 <= n + 1 <= cpd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cpd.shape[0]) not satisifed")
 *     fc.clpn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cpn_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))             # <<<<<<<<<<<<<<
 *     return (cpn_, cpd_,)
 * 
 */
  F_FUNC(clpn,CLPN)((&__pyx_v_n), (&__pyx_v_x_f), (&__pyx_v_y_f), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cpn_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cpd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":742
 *         raise ValueError("(0 <= n + 1 <= cpd.shape[0]) not satisifed")
 *     fc.clpn(&n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cpn_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 *     return (cpn_, cpd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_cpn_), ((System::Object^)__pyx_v_cpd_)});
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":745
 * 
 * 
 * def lqmns(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object qm=None, object qd=None):             # <<<<<<<<<<<<<<
 *     """lqmns(m, n, x[, qm, qd]) -> (qm, qd)
 * 
 */

static System::Object^ lqmns(System::Object^ m, System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ qm, [InteropServices::Optional]System::Object^ qd) {
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_qm = nullptr;
  System::Object^ __pyx_v_qd = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_qm_;
  NumpyDotNet::ndarray^ __pyx_v_qd_;
  __pyx_t_5numpy_npy_intp __pyx_v_qm_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_qd_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_m = __site_cvt_745_0->Target(__site_cvt_745_0, m);
  __pyx_v_n = __site_cvt_745_0_1->Target(__site_cvt_745_0_1, n);
  __pyx_v_x = __site_cvt_745_0_2->Target(__site_cvt_745_0_2, x);
  if (dynamic_cast<System::Reflection::Missing^>(qm) == nullptr) {
    __pyx_v_qm = qm;
  } else {
    __pyx_v_qm = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(qd) == nullptr) {
    __pyx_v_qd = qd;
  } else {
    __pyx_v_qd = ((System::Object^)nullptr);
  }
  __pyx_v_qm_ = nullptr;
  __pyx_v_qd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":764
 *     cdef np.ndarray qm_, qd_
 *     cdef np.npy_intp qm_shape[1], qd_shape[1]
 *     if not (m >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= 1):
 */
  __pyx_t_1 = (!(__pyx_v_m >= 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":765
 *     cdef np.npy_intp qm_shape[1], qd_shape[1]
 *     if not (m >= 0):
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_765_24->Target(__site_call1_765_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: m >= 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":766
 *     if not (m >= 0):
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     qm_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":767
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     qm_shape[0] = n + 1
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 1, qm_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_767_24->Target(__site_call1_767_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":768
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     qm_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 1, qm_shape, False, True)
 *     if not (0 <= n + 1 <= qm_shape[0]):
 */
  (__pyx_v_qm_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":769
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     qm_shape[0] = n + 1
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 1, qm_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= qm_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qm.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_qm, NPY_DOUBLE, 1, __pyx_v_qm_shape, 0, 1, nullptr)); 
  __pyx_v_qm_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":770
 *     qm_shape[0] = n + 1
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 1, qm_shape, False, True)
 *     if not (0 <= n + 1 <= qm_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= qm.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_qm_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":771
 *     qm_ = fw_asfortranarray(qm, fwr_dbl_t_enum, 1, qm_shape, False, True)
 *     if not (0 <= n + 1 <= qm_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qm.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_771_24->Target(__site_call1_771_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= qm.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":772
 *     if not (0 <= n + 1 <= qm_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qm.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):
 */
  (__pyx_v_qd_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":773
 *         raise ValueError("(0 <= n + 1 <= qm.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_qd, NPY_DOUBLE, 1, __pyx_v_qd_shape, 0, 1, nullptr)); 
  __pyx_v_qd_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":774
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_qd_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":775
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lqmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 *     return (qm_, qd_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_775_24->Target(__site_call1_775_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= qd.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":776
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))             # <<<<<<<<<<<<<<
 *     return (qm_, qd_,)
 * 
 */
  F_FUNC(lqmns,LQMNS)((&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_qm_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_qd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":777
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqmns(&m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(qm_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 *     return (qm_, qd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_qm_), ((System::Object^)__pyx_v_qd_)});
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":780
 * 
 * 
 * def chgm(fwr_dbl_t a, fwr_dbl_t b, fwr_dbl_t x):             # <<<<<<<<<<<<<<
 *     """chgm(a, b, x) -> hg
 * 
 */

static System::Object^ chgm(System::Object^ a, System::Object^ b, System::Object^ x) {
  fwr_dbl_t __pyx_v_a;
  fwr_dbl_t __pyx_v_b;
  fwr_dbl_t __pyx_v_x;
  fwr_dbl_t __pyx_v_hg;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_a = __site_cvt_780_0->Target(__site_cvt_780_0, a);
  __pyx_v_b = __site_cvt_780_0_1->Target(__site_cvt_780_0_1, b);
  __pyx_v_x = __site_cvt_780_0_2->Target(__site_cvt_780_0_2, x);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":795
 *     """
 *     cdef fwr_dbl_t hg
 *     hg = 0             # <<<<<<<<<<<<<<
 *     fc.chgm(&a, &b, &x, &hg)
 *     return hg
 */
  __pyx_v_hg = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":796
 *     cdef fwr_dbl_t hg
 *     hg = 0
 *     fc.chgm(&a, &b, &x, &hg)             # <<<<<<<<<<<<<<
 *     return hg
 * 
 */
  F_FUNC(chgm,CHGM)((&__pyx_v_a), (&__pyx_v_b), (&__pyx_v_x), (&__pyx_v_hg));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":797
 *     hg = 0
 *     fc.chgm(&a, &b, &x, &hg)
 *     return hg             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = __pyx_v_hg;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":800
 * 
 * 
 * def lpmn(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t x, object pm=None, object pd=None):             # <<<<<<<<<<<<<<
 *     """lpmn(m, n, x[, pm, pd]) -> (pm, pd)
 * 
 */

static System::Object^ lpmn(System::Object^ m, System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ pm, [InteropServices::Optional]System::Object^ pd) {
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_pm = nullptr;
  System::Object^ __pyx_v_pd = nullptr;
  fwi_integer_t __pyx_v_mm;
  NumpyDotNet::ndarray^ __pyx_v_pm_;
  NumpyDotNet::ndarray^ __pyx_v_pd_;
  __pyx_t_5numpy_npy_intp __pyx_v_pm_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_pd_shape[2];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  long __pyx_t_6;
  __pyx_v_m = __site_cvt_800_0->Target(__site_cvt_800_0, m);
  __pyx_v_n = __site_cvt_800_0_1->Target(__site_cvt_800_0_1, n);
  __pyx_v_x = __site_cvt_800_0_2->Target(__site_cvt_800_0_2, x);
  if (dynamic_cast<System::Reflection::Missing^>(pm) == nullptr) {
    __pyx_v_pm = pm;
  } else {
    __pyx_v_pm = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(pd) == nullptr) {
    __pyx_v_pd = pd;
  } else {
    __pyx_v_pd = ((System::Object^)nullptr);
  }
  __pyx_v_pm_ = nullptr;
  __pyx_v_pd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":820
 *     cdef np.ndarray pm_, pd_
 *     cdef np.npy_intp pm_shape[2], pd_shape[2]
 *     mm = m             # <<<<<<<<<<<<<<
 *     if not ((m >= 0) and (m <= n)):
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
 */
  __pyx_v_mm = __pyx_v_m;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":821
 *     cdef np.npy_intp pm_shape[2], pd_shape[2]
 *     mm = m
 *     if not ((m >= 0) and (m <= n)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
 *     if not (n >= 0):
 */
  __pyx_t_1 = (__pyx_v_m >= 0);
  if (__pyx_t_1) {
    __pyx_t_2 = (__pyx_v_m <= __pyx_v_n);
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":822
 *     mm = m
 *     if not ((m >= 0) and (m <= n)):
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')             # <<<<<<<<<<<<<<
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_822_24->Target(__site_call1_822_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: (m >= 0) and (m <= n)"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":823
 *     if not ((m >= 0) and (m <= n)):
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
 *     if not (n >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     pm_shape[0] = m + 1; pm_shape[1] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":824
 *         raise ValueError('Condition on arguments not satisfied: (m >= 0) and (m <= n)')
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')             # <<<<<<<<<<<<<<
 *     pm_shape[0] = m + 1; pm_shape[1] = n + 1
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 2, pm_shape, False, True)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_824_24->Target(__site_call1_824_24, __pyx_context, __pyx_t_5, ((System::Object^)"Condition on arguments not satisfied: n >= 0"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":825
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     pm_shape[0] = m + 1; pm_shape[1] = n + 1             # <<<<<<<<<<<<<<
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 2, pm_shape, False, True)
 *     if m + 1 != pm_shape[0]:
 */
  (__pyx_v_pm_shape[0]) = (__pyx_v_m + 1);
  (__pyx_v_pm_shape[1]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":826
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     pm_shape[0] = m + 1; pm_shape[1] = n + 1
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 2, pm_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m + 1 != pm_shape[0]:
 *         raise ValueError("(m + 1 == pm.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_pm, NPY_DOUBLE, 2, __pyx_v_pm_shape, 0, 1, nullptr)); 
  __pyx_v_pm_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":827
 *     pm_shape[0] = m + 1; pm_shape[1] = n + 1
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 2, pm_shape, False, True)
 *     if m + 1 != pm_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m + 1 == pm.shape[0]) not satisifed")
 *     if not (0 <= n + 1 <= pm_shape[1]):
 */
  __pyx_t_1 = ((__pyx_v_m + 1) != (__pyx_v_pm_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":828
 *     pm_ = fw_asfortranarray(pm, fwr_dbl_t_enum, 2, pm_shape, False, True)
 *     if m + 1 != pm_shape[0]:
 *         raise ValueError("(m + 1 == pm.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pm_shape[1]):
 *         raise ValueError("(0 <= n + 1 <= pm.shape[1]) not satisifed")
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_828_24->Target(__site_call1_828_24, __pyx_context, __pyx_t_4, ((System::Object^)"(m + 1 == pm.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":829
 *     if m + 1 != pm_shape[0]:
 *         raise ValueError("(m + 1 == pm.shape[0]) not satisifed")
 *     if not (0 <= n + 1 <= pm_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pm.shape[1]) not satisifed")
 *     pd_shape[0] = m + 1; pd_shape[1] = n + 1
 */
  __pyx_t_6 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_6);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_6 <= (__pyx_v_pm_shape[1]));
  }
  __pyx_t_3 = (!__pyx_t_1);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":830
 *         raise ValueError("(m + 1 == pm.shape[0]) not satisifed")
 *     if not (0 <= n + 1 <= pm_shape[1]):
 *         raise ValueError("(0 <= n + 1 <= pm.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     pd_shape[0] = m + 1; pd_shape[1] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 2, pd_shape, False, True)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_830_24->Target(__site_call1_830_24, __pyx_context, __pyx_t_5, ((System::Object^)"(0 <= n + 1 <= pm.shape[1]) not satisifed"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":831
 *     if not (0 <= n + 1 <= pm_shape[1]):
 *         raise ValueError("(0 <= n + 1 <= pm.shape[1]) not satisifed")
 *     pd_shape[0] = m + 1; pd_shape[1] = n + 1             # <<<<<<<<<<<<<<
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 2, pd_shape, False, True)
 *     if m + 1 != pd_shape[0]:
 */
  (__pyx_v_pd_shape[0]) = (__pyx_v_m + 1);
  (__pyx_v_pd_shape[1]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":832
 *         raise ValueError("(0 <= n + 1 <= pm.shape[1]) not satisifed")
 *     pd_shape[0] = m + 1; pd_shape[1] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 2, pd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if m + 1 != pd_shape[0]:
 *         raise ValueError("(m + 1 == pd.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_pd, NPY_DOUBLE, 2, __pyx_v_pd_shape, 0, 1, nullptr)); 
  __pyx_v_pd_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":833
 *     pd_shape[0] = m + 1; pd_shape[1] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 2, pd_shape, False, True)
 *     if m + 1 != pd_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(m + 1 == pd.shape[0]) not satisifed")
 *     if not (0 <= n + 1 <= pd_shape[1]):
 */
  __pyx_t_3 = ((__pyx_v_m + 1) != (__pyx_v_pd_shape[0]));
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":834
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 2, pd_shape, False, True)
 *     if m + 1 != pd_shape[0]:
 *         raise ValueError("(m + 1 == pd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pd_shape[1]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[1]) not satisifed")
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_834_24->Target(__site_call1_834_24, __pyx_context, __pyx_t_4, ((System::Object^)"(m + 1 == pd.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":835
 *     if m + 1 != pd_shape[0]:
 *         raise ValueError("(m + 1 == pd.shape[0]) not satisifed")
 *     if not (0 <= n + 1 <= pd_shape[1]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pd.shape[1]) not satisifed")
 *     fc.lpmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 */
  __pyx_t_6 = (__pyx_v_n + 1);
  __pyx_t_3 = (0 <= __pyx_t_6);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_t_6 <= (__pyx_v_pd_shape[1]));
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":836
 *         raise ValueError("(m + 1 == pd.shape[0]) not satisifed")
 *     if not (0 <= n + 1 <= pd_shape[1]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lpmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 *     return (pm_, pd_,)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_836_24->Target(__site_call1_836_24, __pyx_context, __pyx_t_5, ((System::Object^)"(0 <= n + 1 <= pd.shape[1]) not satisifed"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":837
 *     if not (0 <= n + 1 <= pd_shape[1]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[1]) not satisifed")
 *     fc.lpmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))             # <<<<<<<<<<<<<<
 *     return (pm_, pd_,)
 * 
 */
  F_FUNC(lpmn,LPMN)((&__pyx_v_mm), (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pm_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":838
 *         raise ValueError("(0 <= n + 1 <= pd.shape[1]) not satisifed")
 *     fc.lpmn(&mm, &m, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pm_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 *     return (pm_, pd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_pm_), ((System::Object^)__pyx_v_pd_)});
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":841
 * 
 * 
 * def fcszo(fwi_integer_t kf, fwi_integer_t nt, object zo=None):             # <<<<<<<<<<<<<<
 *     """fcszo(kf, nt[, zo]) -> zo
 * 
 */

static System::Object^ fcszo(System::Object^ kf, System::Object^ nt, [InteropServices::Optional]System::Object^ zo) {
  fwi_integer_t __pyx_v_kf;
  fwi_integer_t __pyx_v_nt;
  System::Object^ __pyx_v_zo = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_zo_;
  __pyx_t_5numpy_npy_intp __pyx_v_zo_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  __pyx_v_kf = __site_cvt_841_0->Target(__site_cvt_841_0, kf);
  __pyx_v_nt = __site_cvt_841_0_1->Target(__site_cvt_841_0_1, nt);
  if (dynamic_cast<System::Reflection::Missing^>(zo) == nullptr) {
    __pyx_v_zo = zo;
  } else {
    __pyx_v_zo = ((System::Object^)nullptr);
  }
  __pyx_v_zo_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":857
 *     cdef np.ndarray zo_
 *     cdef np.npy_intp zo_shape[1]
 *     if not ((kf == 1) or (kf == 2)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (kf == 1) or (kf == 2)')
 *     if not (nt > 0):
 */
  switch (__pyx_v_kf) {
    case 1:
    case 2:
    __pyx_t_1 = 1;
    break;
    default:
    __pyx_t_1 = 0;
    break;
  }
  __pyx_t_2 = (!__pyx_t_1);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":858
 *     cdef np.npy_intp zo_shape[1]
 *     if not ((kf == 1) or (kf == 2)):
 *         raise ValueError('Condition on arguments not satisfied: (kf == 1) or (kf == 2)')             # <<<<<<<<<<<<<<
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_858_24->Target(__site_call1_858_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: (kf == 1) or (kf == 2)"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":859
 *     if not ((kf == 1) or (kf == 2)):
 *         raise ValueError('Condition on arguments not satisfied: (kf == 1) or (kf == 2)')
 *     if not (nt > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     zo_shape[0] = nt
 */
  __pyx_t_2 = (!(__pyx_v_nt > 0));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":860
 *         raise ValueError('Condition on arguments not satisfied: (kf == 1) or (kf == 2)')
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')             # <<<<<<<<<<<<<<
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_860_24->Target(__site_call1_860_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: nt > 0"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":861
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     zo_shape[0] = nt             # <<<<<<<<<<<<<<
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:
 */
  (__pyx_v_zo_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":862
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_zo, NPY_CDOUBLE, 1, __pyx_v_zo_shape, 0, 1, nullptr)); 
  __pyx_v_zo_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":863
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.fcszo(&kf, &nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))
 */
  __pyx_t_2 = (__pyx_v_nt != (__pyx_v_zo_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":864
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.fcszo(&kf, &nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))
 *     return zo_
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_864_24->Target(__site_call1_864_24, __pyx_context, __pyx_t_3, ((System::Object^)"(nt == zo.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":865
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.fcszo(&kf, &nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))             # <<<<<<<<<<<<<<
 *     return zo_
 * 
 */
  F_FUNC(fcszo,FCSZO)((&__pyx_v_kf), (&__pyx_v_nt), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_zo_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":866
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.fcszo(&kf, &nt, <fwc_complex_x16_t*>np.PyArray_DATA(zo_))
 *     return zo_             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_zo_);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":869
 * 
 * 
 * def aswfb(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwr_dbl_t x, fwi_integer_t kd, fwr_dbl_t cv):             # <<<<<<<<<<<<<<
 *     """aswfb(m, n, c, x, kd, cv) -> (s1f, s1d)
 * 
 */

static System::Object^ aswfb(System::Object^ m, System::Object^ n, System::Object^ c, System::Object^ x, System::Object^ kd, System::Object^ cv) {
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_c;
  fwr_dbl_t __pyx_v_x;
  fwi_integer_t __pyx_v_kd;
  fwr_dbl_t __pyx_v_cv;
  fwr_dbl_t __pyx_v_s1f;
  fwr_dbl_t __pyx_v_s1d;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_m = __site_cvt_869_0->Target(__site_cvt_869_0, m);
  __pyx_v_n = __site_cvt_869_0_1->Target(__site_cvt_869_0_1, n);
  __pyx_v_c = __site_cvt_869_0_2->Target(__site_cvt_869_0_2, c);
  __pyx_v_x = __site_cvt_869_0_3->Target(__site_cvt_869_0_3, x);
  __pyx_v_kd = __site_cvt_869_0_4->Target(__site_cvt_869_0_4, kd);
  __pyx_v_cv = __site_cvt_869_0_5->Target(__site_cvt_869_0_5, cv);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":888
 *     """
 *     cdef fwr_dbl_t s1f, s1d
 *     s1f = 0             # <<<<<<<<<<<<<<
 *     s1d = 0
 *     if not (m >= 0):
 */
  __pyx_v_s1f = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":889
 *     cdef fwr_dbl_t s1f, s1d
 *     s1f = 0
 *     s1d = 0             # <<<<<<<<<<<<<<
 *     if not (m >= 0):
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 */
  __pyx_v_s1d = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":890
 *     s1f = 0
 *     s1d = 0
 *     if not (m >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= m):
 */
  __pyx_t_1 = (!(__pyx_v_m >= 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":891
 *     s1d = 0
 *     if not (m >= 0):
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')             # <<<<<<<<<<<<<<
 *     if not (n >= m):
 *         raise ValueError('Condition on arguments not satisfied: n >= m')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_891_24->Target(__site_call1_891_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: m >= 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":892
 *     if not (m >= 0):
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= m):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= m')
 *     if not (fabs(x)<1):
 */
  __pyx_t_1 = (!(__pyx_v_n >= __pyx_v_m));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":893
 *         raise ValueError('Condition on arguments not satisfied: m >= 0')
 *     if not (n >= m):
 *         raise ValueError('Condition on arguments not satisfied: n >= m')             # <<<<<<<<<<<<<<
 *     if not (fabs(x)<1):
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_893_24->Target(__site_call1_893_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: n >= m"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":894
 *     if not (n >= m):
 *         raise ValueError('Condition on arguments not satisfied: n >= m')
 *     if not (fabs(x)<1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
 *     if not ((kd == -1) or (kd == 1)):
 */
  __pyx_t_1 = (!(fabs(__pyx_v_x) < 1.0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":895
 *         raise ValueError('Condition on arguments not satisfied: n >= m')
 *     if not (fabs(x)<1):
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')             # <<<<<<<<<<<<<<
 *     if not ((kd == -1) or (kd == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_895_24->Target(__site_call1_895_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: fabs(x)<1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":896
 *     if not (fabs(x)<1):
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
 *     if not ((kd == -1) or (kd == 1)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
 *     fc.aswfb(&m, &n, &c, &x, &kd, &cv, &s1f, &s1d)
 */
  switch (__pyx_v_kd) {
    case -1:
    case 1:
    __pyx_t_1 = 1;
    break;
    default:
    __pyx_t_1 = 0;
    break;
  }
  __pyx_t_4 = (!__pyx_t_1);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":897
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
 *     if not ((kd == -1) or (kd == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')             # <<<<<<<<<<<<<<
 *     fc.aswfb(&m, &n, &c, &x, &kd, &cv, &s1f, &s1d)
 *     return (s1f, s1d,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_897_24->Target(__site_call1_897_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: (kd == -1) or (kd == 1)"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":898
 *     if not ((kd == -1) or (kd == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
 *     fc.aswfb(&m, &n, &c, &x, &kd, &cv, &s1f, &s1d)             # <<<<<<<<<<<<<<
 *     return (s1f, s1d,)
 * 
 */
  F_FUNC(aswfb,ASWFB)((&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_c), (&__pyx_v_x), (&__pyx_v_kd), (&__pyx_v_cv), (&__pyx_v_s1f), (&__pyx_v_s1d));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":899
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
 *     fc.aswfb(&m, &n, &c, &x, &kd, &cv, &s1f, &s1d)
 *     return (s1f, s1d,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = __pyx_v_s1f;
  __pyx_t_3 = __pyx_v_s1d;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3});
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":902
 * 
 * 
 * def lqna(fwi_integer_t n, fwr_dbl_t x, object qn=None, object qd=None):             # <<<<<<<<<<<<<<
 *     """lqna(n, x[, qn, qd]) -> (qn, qd)
 * 
 */

static System::Object^ lqna(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ qn, [InteropServices::Optional]System::Object^ qd) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_qn = nullptr;
  System::Object^ __pyx_v_qd = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_qn_;
  NumpyDotNet::ndarray^ __pyx_v_qd_;
  __pyx_t_5numpy_npy_intp __pyx_v_qn_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_qd_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_902_0->Target(__site_cvt_902_0, n);
  __pyx_v_x = __site_cvt_902_0_1->Target(__site_cvt_902_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(qn) == nullptr) {
    __pyx_v_qn = qn;
  } else {
    __pyx_v_qn = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(qd) == nullptr) {
    __pyx_v_qd = qd;
  } else {
    __pyx_v_qd = ((System::Object^)nullptr);
  }
  __pyx_v_qn_ = nullptr;
  __pyx_v_qd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":920
 *     cdef np.ndarray qn_, qd_
 *     cdef np.npy_intp qn_shape[1], qd_shape[1]
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (fabs(x)<1):
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":921
 *     cdef np.npy_intp qn_shape[1], qd_shape[1]
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     if not (fabs(x)<1):
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_921_24->Target(__site_call1_921_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":922
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (fabs(x)<1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
 *     qn_shape[0] = n + 1
 */
  __pyx_t_1 = (!(fabs(__pyx_v_x) < 1.0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":923
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (fabs(x)<1):
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')             # <<<<<<<<<<<<<<
 *     qn_shape[0] = n + 1
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_923_24->Target(__site_call1_923_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: fabs(x)<1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":924
 *     if not (fabs(x)<1):
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
 *     qn_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
 *     if not (0 <= n + 1 <= qn_shape[0]):
 */
  (__pyx_v_qn_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":925
 *         raise ValueError('Condition on arguments not satisfied: fabs(x)<1')
 *     qn_shape[0] = n + 1
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= qn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_qn, NPY_DOUBLE, 1, __pyx_v_qn_shape, 0, 1, nullptr)); 
  __pyx_v_qn_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":926
 *     qn_shape[0] = n + 1
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
 *     if not (0 <= n + 1 <= qn_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_qn_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":927
 *     qn_ = fw_asfortranarray(qn, fwr_dbl_t_enum, 1, qn_shape, False, True)
 *     if not (0 <= n + 1 <= qn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_927_24->Target(__site_call1_927_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= qn.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":928
 *     if not (0 <= n + 1 <= qn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):
 */
  (__pyx_v_qd_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":929
 *         raise ValueError("(0 <= n + 1 <= qn.shape[0]) not satisifed")
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_qd, NPY_DOUBLE, 1, __pyx_v_qd_shape, 0, 1, nullptr)); 
  __pyx_v_qd_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":930
 *     qd_shape[0] = n + 1
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqna(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_qd_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":931
 *     qd_ = fw_asfortranarray(qd, fwr_dbl_t_enum, 1, qd_shape, False, True)
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lqna(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 *     return (qn_, qd_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_931_24->Target(__site_call1_931_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= qd.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":932
 *     if not (0 <= n + 1 <= qd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqna(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))             # <<<<<<<<<<<<<<
 *     return (qn_, qd_,)
 * 
 */
  F_FUNC(lqna,LQNA)((&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_qn_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_qd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":933
 *         raise ValueError("(0 <= n + 1 <= qd.shape[0]) not satisifed")
 *     fc.lqna(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(qn_), <fwr_dbl_t*>np.PyArray_DATA(qd_))
 *     return (qn_, qd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_qn_), ((System::Object^)__pyx_v_qd_)});
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":936
 * 
 * 
 * def cpbdn(fwi_integer_t n, fwc_complex_x16_t z, object cpb=None, object cpd=None):             # <<<<<<<<<<<<<<
 *     """cpbdn(n, z[, cpb, cpd]) -> (cpb, cpd)
 * 
 */

static System::Object^ cpbdn(System::Object^ n, System::Object^ z, [InteropServices::Optional]System::Object^ cpb, [InteropServices::Optional]System::Object^ cpd) {
  fwi_integer_t __pyx_v_n;
  __pyx_t_double_complex __pyx_v_z;
  System::Object^ __pyx_v_cpb = nullptr;
  System::Object^ __pyx_v_cpd = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_cpb_;
  NumpyDotNet::ndarray^ __pyx_v_cpd_;
  __pyx_t_5numpy_npy_intp __pyx_v_cpb_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_cpd_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Numerics::Complex __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  __pyx_t_5numpy_npy_intp __pyx_t_7;
  __pyx_t_5numpy_npy_intp __pyx_t_8;
  __pyx_v_n = __site_cvt_936_0->Target(__site_cvt_936_0, n);
  __pyx_t_1 = IronPython::Runtime::Converter::ConvertToComplex(z);
  __pyx_v_z.real(__pyx_t_1.Real);
  __pyx_v_z.imag(__pyx_t_1.Imaginary);
  if (dynamic_cast<System::Reflection::Missing^>(cpb) == nullptr) {
    __pyx_v_cpb = cpb;
  } else {
    __pyx_v_cpb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cpd) == nullptr) {
    __pyx_v_cpd = cpd;
  } else {
    __pyx_v_cpd = ((System::Object^)nullptr);
  }
  __pyx_v_cpb_ = nullptr;
  __pyx_v_cpd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":954
 *     cdef np.ndarray cpb_, cpd_
 *     cdef np.npy_intp cpb_shape[1], cpd_shape[1]
 *     if not (abs(n) >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: abs(n) >= 1')
 *     cpb_shape[0] = abs(n) + 2
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_3 = __pyx_v_n;
  __pyx_t_4 = __site_call1_954_15->Target(__site_call1_954_15, __pyx_context, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_ge_954_19->Target(__site_op_ge_954_19, __pyx_t_4, __pyx_int_1);
  __pyx_t_4 = nullptr;
  __pyx_t_5 = __site_istrue_954_19->Target(__site_istrue_954_19, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_t_6 = (!__pyx_t_5);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":955
 *     cdef np.npy_intp cpb_shape[1], cpd_shape[1]
 *     if not (abs(n) >= 1):
 *         raise ValueError('Condition on arguments not satisfied: abs(n) >= 1')             # <<<<<<<<<<<<<<
 *     cpb_shape[0] = abs(n) + 2
 *     cpb_ = fw_asfortranarray(cpb, fwc_complex_x16_t_enum, 1, cpb_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_955_24->Target(__site_call1_955_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: abs(n) >= 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":956
 *     if not (abs(n) >= 1):
 *         raise ValueError('Condition on arguments not satisfied: abs(n) >= 1')
 *     cpb_shape[0] = abs(n) + 2             # <<<<<<<<<<<<<<
 *     cpb_ = fw_asfortranarray(cpb, fwc_complex_x16_t_enum, 1, cpb_shape, False, True)
 *     if not (0 <= abs(n) + 2 <= cpb_shape[0]):
 */
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_3 = __pyx_v_n;
  __pyx_t_2 = __site_call1_956_22->Target(__site_call1_956_22, __pyx_context, __pyx_t_4, __pyx_t_3);
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_add_956_26->Target(__site_op_add_956_26, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_7 = __site_cvt___pyx_t_5numpy_npy_intp_956_26->Target(__site_cvt___pyx_t_5numpy_npy_intp_956_26, __pyx_t_3);
  __pyx_t_3 = nullptr;
  (__pyx_v_cpb_shape[0]) = __pyx_t_7;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":957
 *         raise ValueError('Condition on arguments not satisfied: abs(n) >= 1')
 *     cpb_shape[0] = abs(n) + 2
 *     cpb_ = fw_asfortranarray(cpb, fwc_complex_x16_t_enum, 1, cpb_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= abs(n) + 2 <= cpb_shape[0]):
 *         raise ValueError("(0 <= abs(n) + 2 <= cpb.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cpb, NPY_CDOUBLE, 1, __pyx_v_cpb_shape, 0, 1, nullptr)); 
  __pyx_v_cpb_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":958
 *     cpb_shape[0] = abs(n) + 2
 *     cpb_ = fw_asfortranarray(cpb, fwc_complex_x16_t_enum, 1, cpb_shape, False, True)
 *     if not (0 <= abs(n) + 2 <= cpb_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= abs(n) + 2 <= cpb.shape[0]) not satisifed")
 *     cpd_shape[0] = abs(n) + 2
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_2 = __pyx_v_n;
  __pyx_t_4 = __site_call1_958_20->Target(__site_call1_958_20, __pyx_context, __pyx_t_3, __pyx_t_2);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_add_958_24->Target(__site_op_add_958_24, __pyx_t_4, __pyx_int_2);
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_op_le_958_14->Target(__site_op_le_958_14, __pyx_int_0, __pyx_t_2);
  if (__pyx_t_4) {
    __pyx_t_3 = (__pyx_v_cpb_shape[0]);
    __pyx_t_4 = __site_op_le_958_28->Target(__site_op_le_958_28, __pyx_t_2, __pyx_t_3);
    __pyx_t_3 = nullptr;
  }
  __pyx_t_2 = nullptr;
  __pyx_t_6 = __site_istrue_958_14->Target(__site_istrue_958_14, __pyx_t_4);
  __pyx_t_4 = nullptr;
  __pyx_t_5 = (!__pyx_t_6);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":959
 *     cpb_ = fw_asfortranarray(cpb, fwc_complex_x16_t_enum, 1, cpb_shape, False, True)
 *     if not (0 <= abs(n) + 2 <= cpb_shape[0]):
 *         raise ValueError("(0 <= abs(n) + 2 <= cpb.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     cpd_shape[0] = abs(n) + 2
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_959_24->Target(__site_call1_959_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= abs(n) + 2 <= cpb.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":960
 *     if not (0 <= abs(n) + 2 <= cpb_shape[0]):
 *         raise ValueError("(0 <= abs(n) + 2 <= cpb.shape[0]) not satisifed")
 *     cpd_shape[0] = abs(n) + 2             # <<<<<<<<<<<<<<
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
 *     if not (0 <= abs(n) + 2 <= cpd_shape[0]):
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_4 = __pyx_v_n;
  __pyx_t_3 = __site_call1_960_22->Target(__site_call1_960_22, __pyx_context, __pyx_t_2, __pyx_t_4);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_4 = __site_op_add_960_26->Target(__site_op_add_960_26, __pyx_t_3, __pyx_int_2);
  __pyx_t_3 = nullptr;
  __pyx_t_8 = __site_cvt___pyx_t_5numpy_npy_intp_960_26->Target(__site_cvt___pyx_t_5numpy_npy_intp_960_26, __pyx_t_4);
  __pyx_t_4 = nullptr;
  (__pyx_v_cpd_shape[0]) = __pyx_t_8;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":961
 *         raise ValueError("(0 <= abs(n) + 2 <= cpb.shape[0]) not satisifed")
 *     cpd_shape[0] = abs(n) + 2
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= abs(n) + 2 <= cpd_shape[0]):
 *         raise ValueError("(0 <= abs(n) + 2 <= cpd.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_cpd, NPY_CDOUBLE, 1, __pyx_v_cpd_shape, 0, 1, nullptr)); 
  __pyx_v_cpd_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":962
 *     cpd_shape[0] = abs(n) + 2
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
 *     if not (0 <= abs(n) + 2 <= cpd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= abs(n) + 2 <= cpd.shape[0]) not satisifed")
 *     fc.cpbdn(&n, &z, <fwc_complex_x16_t*>np.PyArray_DATA(cpb_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 */
  __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_3 = __pyx_v_n;
  __pyx_t_2 = __site_call1_962_20->Target(__site_call1_962_20, __pyx_context, __pyx_t_4, __pyx_t_3);
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_add_962_24->Target(__site_op_add_962_24, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_le_962_14->Target(__site_op_le_962_14, __pyx_int_0, __pyx_t_3);
  if (__pyx_t_2) {
    __pyx_t_4 = (__pyx_v_cpd_shape[0]);
    __pyx_t_2 = __site_op_le_962_28->Target(__site_op_le_962_28, __pyx_t_3, __pyx_t_4);
    __pyx_t_4 = nullptr;
  }
  __pyx_t_3 = nullptr;
  __pyx_t_5 = __site_istrue_962_14->Target(__site_istrue_962_14, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_6 = (!__pyx_t_5);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":963
 *     cpd_ = fw_asfortranarray(cpd, fwc_complex_x16_t_enum, 1, cpd_shape, False, True)
 *     if not (0 <= abs(n) + 2 <= cpd_shape[0]):
 *         raise ValueError("(0 <= abs(n) + 2 <= cpd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.cpbdn(&n, &z, <fwc_complex_x16_t*>np.PyArray_DATA(cpb_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 *     return (cpb_, cpd_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_963_24->Target(__site_call1_963_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= abs(n) + 2 <= cpd.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":964
 *     if not (0 <= abs(n) + 2 <= cpd_shape[0]):
 *         raise ValueError("(0 <= abs(n) + 2 <= cpd.shape[0]) not satisifed")
 *     fc.cpbdn(&n, &z, <fwc_complex_x16_t*>np.PyArray_DATA(cpb_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))             # <<<<<<<<<<<<<<
 *     return (cpb_, cpd_,)
 * 
 */
  F_FUNC(cpbdn,CPBDN)((&__pyx_v_n), (&__pyx_v_z), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cpb_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cpd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":965
 *         raise ValueError("(0 <= abs(n) + 2 <= cpd.shape[0]) not satisifed")
 *     fc.cpbdn(&n, &z, <fwc_complex_x16_t*>np.PyArray_DATA(cpb_), <fwc_complex_x16_t*>np.PyArray_DATA(cpd_))
 *     return (cpb_, cpd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_cpb_), ((System::Object^)__pyx_v_cpd_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":968
 * 
 * 
 * def lpn(fwi_integer_t n, fwr_dbl_t x, object pn=None, object pd=None):             # <<<<<<<<<<<<<<
 *     """lpn(n, x[, pn, pd]) -> (pn, pd)
 * 
 */

static System::Object^ lpn(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ pn, [InteropServices::Optional]System::Object^ pd) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_pn = nullptr;
  System::Object^ __pyx_v_pd = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_pn_;
  NumpyDotNet::ndarray^ __pyx_v_pd_;
  __pyx_t_5numpy_npy_intp __pyx_v_pn_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_pd_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_968_0->Target(__site_cvt_968_0, n);
  __pyx_v_x = __site_cvt_968_0_1->Target(__site_cvt_968_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(pn) == nullptr) {
    __pyx_v_pn = pn;
  } else {
    __pyx_v_pn = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(pd) == nullptr) {
    __pyx_v_pd = pd;
  } else {
    __pyx_v_pd = ((System::Object^)nullptr);
  }
  __pyx_v_pn_ = nullptr;
  __pyx_v_pd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":986
 *     cdef np.ndarray pn_, pd_
 *     cdef np.npy_intp pn_shape[1], pd_shape[1]
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     pn_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":987
 *     cdef np.npy_intp pn_shape[1], pd_shape[1]
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     pn_shape[0] = n + 1
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_987_24->Target(__site_call1_987_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":988
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     pn_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
 *     if not (0 <= n + 1 <= pn_shape[0]):
 */
  (__pyx_v_pn_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":989
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     pn_shape[0] = n + 1
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_pn, NPY_DOUBLE, 1, __pyx_v_pn_shape, 0, 1, nullptr)); 
  __pyx_v_pn_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":990
 *     pn_shape[0] = n + 1
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
 *     if not (0 <= n + 1 <= pn_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_pn_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":991
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
 *     if not (0 <= n + 1 <= pn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_991_24->Target(__site_call1_991_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= pn.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":992
 *     if not (0 <= n + 1 <= pn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):
 */
  (__pyx_v_pd_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":993
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_pd, NPY_DOUBLE, 1, __pyx_v_pd_shape, 0, 1, nullptr)); 
  __pyx_v_pd_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":994
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     fc.lpn(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_pd_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":995
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lpn(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 *     return (pn_, pd_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_995_24->Target(__site_call1_995_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= pd.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":996
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     fc.lpn(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_))             # <<<<<<<<<<<<<<
 *     return (pn_, pd_,)
 * 
 */
  F_FUNC(lpn,LPN)((&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pn_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":997
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     fc.lpn(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_))
 *     return (pn_, pd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_pn_), ((System::Object^)__pyx_v_pd_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1000
 * 
 * 
 * def fcoef(fwi_integer_t kd, fwi_integer_t m, fwr_dbl_t q, fwr_dbl_t a, object fc__=None):             # <<<<<<<<<<<<<<
 *     """fcoef(kd, m, q, a[, fc__]) -> fc__
 * 
 */

static System::Object^ fcoef(System::Object^ kd, System::Object^ m, System::Object^ q, System::Object^ a, [InteropServices::Optional]System::Object^ fc__) {
  fwi_integer_t __pyx_v_kd;
  fwi_integer_t __pyx_v_m;
  fwr_dbl_t __pyx_v_q;
  fwr_dbl_t __pyx_v_a;
  System::Object^ __pyx_v_fc__ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_fc___;
  __pyx_t_5numpy_npy_intp __pyx_v_fc___shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_kd = __site_cvt_1000_0->Target(__site_cvt_1000_0, kd);
  __pyx_v_m = __site_cvt_1000_0_1->Target(__site_cvt_1000_0_1, m);
  __pyx_v_q = __site_cvt_1000_0_2->Target(__site_cvt_1000_0_2, q);
  __pyx_v_a = __site_cvt_1000_0_3->Target(__site_cvt_1000_0_3, a);
  if (dynamic_cast<System::Reflection::Missing^>(fc__) == nullptr) {
    __pyx_v_fc__ = fc__;
  } else {
    __pyx_v_fc__ = ((System::Object^)nullptr);
  }
  __pyx_v_fc___ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1018
 *     cdef np.ndarray fc___
 *     cdef np.npy_intp fc___shape[1]
 *     if not ((kd > 0) and (kd < 5)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (kd > 0) and (kd < 5)')
 *     if not (q >= 0):
 */
  __pyx_t_1 = (__pyx_v_kd > 0);
  if (__pyx_t_1) {
    __pyx_t_2 = (__pyx_v_kd < 5);
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1019
 *     cdef np.npy_intp fc___shape[1]
 *     if not ((kd > 0) and (kd < 5)):
 *         raise ValueError('Condition on arguments not satisfied: (kd > 0) and (kd < 5)')             # <<<<<<<<<<<<<<
 *     if not (q >= 0):
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_1019_24->Target(__site_call1_1019_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: (kd > 0) and (kd < 5)"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1020
 *     if not ((kd > 0) and (kd < 5)):
 *         raise ValueError('Condition on arguments not satisfied: (kd > 0) and (kd < 5)')
 *     if not (q >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')
 *     fc___shape[0] = 251
 */
  __pyx_t_1 = (!(__pyx_v_q >= 0.0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1021
 *         raise ValueError('Condition on arguments not satisfied: (kd > 0) and (kd < 5)')
 *     if not (q >= 0):
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')             # <<<<<<<<<<<<<<
 *     fc___shape[0] = 251
 *     fc___ = fw_asfortranarray(fc__, fwr_dbl_t_enum, 1, fc___shape, False, True)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1021_24->Target(__site_call1_1021_24, __pyx_context, __pyx_t_5, ((System::Object^)"Condition on arguments not satisfied: q >= 0"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1022
 *     if not (q >= 0):
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')
 *     fc___shape[0] = 251             # <<<<<<<<<<<<<<
 *     fc___ = fw_asfortranarray(fc__, fwr_dbl_t_enum, 1, fc___shape, False, True)
 *     if not (0 <= 251 <= fc___shape[0]):
 */
  (__pyx_v_fc___shape[0]) = 251;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1023
 *         raise ValueError('Condition on arguments not satisfied: q >= 0')
 *     fc___shape[0] = 251
 *     fc___ = fw_asfortranarray(fc__, fwr_dbl_t_enum, 1, fc___shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= 251 <= fc___shape[0]):
 *         raise ValueError("(0 <= 251 <= fc__.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_fc__, NPY_DOUBLE, 1, __pyx_v_fc___shape, 0, 1, nullptr)); 
  __pyx_v_fc___ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1026
 *     if not (0 <= 251 <= fc___shape[0]):
 *         raise ValueError("(0 <= 251 <= fc__.shape[0]) not satisifed")
 *     fc.fcoef(&kd, &m, &q, &a, <fwr_dbl_t*>np.PyArray_DATA(fc___))             # <<<<<<<<<<<<<<
 *     return fc___
 * 
 */
  F_FUNC(fcoef,FCOEF)((&__pyx_v_kd), (&__pyx_v_m), (&__pyx_v_q), (&__pyx_v_a), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_fc___)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1027
 *         raise ValueError("(0 <= 251 <= fc__.shape[0]) not satisifed")
 *     fc.fcoef(&kd, &m, &q, &a, <fwr_dbl_t*>np.PyArray_DATA(fc___))
 *     return fc___             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_fc___);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1030
 * 
 * 
 * def sphi(fwi_integer_t n, fwr_dbl_t x, object si=None, object di=None):             # <<<<<<<<<<<<<<
 *     """sphi(n, x[, si, di]) -> (nm, si, di)
 * 
 */

static System::Object^ sphi(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ si, [InteropServices::Optional]System::Object^ di) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_si = nullptr;
  System::Object^ __pyx_v_di = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_si_;
  NumpyDotNet::ndarray^ __pyx_v_di_;
  __pyx_t_5numpy_npy_intp __pyx_v_si_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_di_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_1030_0->Target(__site_cvt_1030_0, n);
  __pyx_v_x = __site_cvt_1030_0_1->Target(__site_cvt_1030_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(si) == nullptr) {
    __pyx_v_si = si;
  } else {
    __pyx_v_si = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(di) == nullptr) {
    __pyx_v_di = di;
  } else {
    __pyx_v_di = ((System::Object^)nullptr);
  }
  __pyx_v_si_ = nullptr;
  __pyx_v_di_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1050
 *     cdef np.ndarray si_, di_
 *     cdef np.npy_intp si_shape[1], di_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1051
 *     cdef np.npy_intp si_shape[1], di_shape[1]
 *     nm = 0
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     si_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1052
 *     nm = 0
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     si_shape[0] = n + 1
 *     si_ = fw_asfortranarray(si, fwr_dbl_t_enum, 1, si_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1052_24->Target(__site_call1_1052_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1053
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     si_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     si_ = fw_asfortranarray(si, fwr_dbl_t_enum, 1, si_shape, False, True)
 *     if not (0 <= n + 1 <= si_shape[0]):
 */
  (__pyx_v_si_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1054
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     si_shape[0] = n + 1
 *     si_ = fw_asfortranarray(si, fwr_dbl_t_enum, 1, si_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= si_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= si.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_si, NPY_DOUBLE, 1, __pyx_v_si_shape, 0, 1, nullptr)); 
  __pyx_v_si_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1055
 *     si_shape[0] = n + 1
 *     si_ = fw_asfortranarray(si, fwr_dbl_t_enum, 1, si_shape, False, True)
 *     if not (0 <= n + 1 <= si_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= si.shape[0]) not satisifed")
 *     di_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_si_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1056
 *     si_ = fw_asfortranarray(si, fwr_dbl_t_enum, 1, si_shape, False, True)
 *     if not (0 <= n + 1 <= si_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= si.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     di_shape[0] = n + 1
 *     di_ = fw_asfortranarray(di, fwr_dbl_t_enum, 1, di_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1056_24->Target(__site_call1_1056_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= si.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1057
 *     if not (0 <= n + 1 <= si_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= si.shape[0]) not satisifed")
 *     di_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     di_ = fw_asfortranarray(di, fwr_dbl_t_enum, 1, di_shape, False, True)
 *     if not (0 <= n + 1 <= di_shape[0]):
 */
  (__pyx_v_di_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1058
 *         raise ValueError("(0 <= n + 1 <= si.shape[0]) not satisifed")
 *     di_shape[0] = n + 1
 *     di_ = fw_asfortranarray(di, fwr_dbl_t_enum, 1, di_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= di_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= di.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_di, NPY_DOUBLE, 1, __pyx_v_di_shape, 0, 1, nullptr)); 
  __pyx_v_di_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1059
 *     di_shape[0] = n + 1
 *     di_ = fw_asfortranarray(di, fwr_dbl_t_enum, 1, di_shape, False, True)
 *     if not (0 <= n + 1 <= di_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= di.shape[0]) not satisifed")
 *     fc.sphi(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(si_), <fwr_dbl_t*>np.PyArray_DATA(di_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_di_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1060
 *     di_ = fw_asfortranarray(di, fwr_dbl_t_enum, 1, di_shape, False, True)
 *     if not (0 <= n + 1 <= di_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= di.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.sphi(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(si_), <fwr_dbl_t*>np.PyArray_DATA(di_))
 *     return (nm, si_, di_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1060_24->Target(__site_call1_1060_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= di.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1061
 *     if not (0 <= n + 1 <= di_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= di.shape[0]) not satisifed")
 *     fc.sphi(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(si_), <fwr_dbl_t*>np.PyArray_DATA(di_))             # <<<<<<<<<<<<<<
 *     return (nm, si_, di_,)
 * 
 */
  F_FUNC(sphi,SPHI)((&__pyx_v_n), (&__pyx_v_x), (&__pyx_v_nm), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_si_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_di_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1062
 *         raise ValueError("(0 <= n + 1 <= di.shape[0]) not satisifed")
 *     fc.sphi(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(si_), <fwr_dbl_t*>np.PyArray_DATA(di_))
 *     return (nm, si_, di_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_nm;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, ((System::Object^)__pyx_v_si_), ((System::Object^)__pyx_v_di_)});
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1065
 * 
 * 
 * def rcty(fwi_integer_t n, fwr_dbl_t x, object ry=None, object dy=None):             # <<<<<<<<<<<<<<
 *     """rcty(n, x[, ry, dy]) -> (nm, ry, dy)
 * 
 */

static System::Object^ rcty(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ ry, [InteropServices::Optional]System::Object^ dy) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_ry = nullptr;
  System::Object^ __pyx_v_dy = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_ry_;
  NumpyDotNet::ndarray^ __pyx_v_dy_;
  __pyx_t_5numpy_npy_intp __pyx_v_ry_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dy_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_1065_0->Target(__site_cvt_1065_0, n);
  __pyx_v_x = __site_cvt_1065_0_1->Target(__site_cvt_1065_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(ry) == nullptr) {
    __pyx_v_ry = ry;
  } else {
    __pyx_v_ry = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dy) == nullptr) {
    __pyx_v_dy = dy;
  } else {
    __pyx_v_dy = ((System::Object^)nullptr);
  }
  __pyx_v_ry_ = nullptr;
  __pyx_v_dy_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1085
 *     cdef np.ndarray ry_, dy_
 *     cdef np.npy_intp ry_shape[1], dy_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1086
 *     cdef np.npy_intp ry_shape[1], dy_shape[1]
 *     nm = 0
 *     if not (n > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     ry_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1087
 *     nm = 0
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')             # <<<<<<<<<<<<<<
 *     ry_shape[0] = n + 1
 *     ry_ = fw_asfortranarray(ry, fwr_dbl_t_enum, 1, ry_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1087_24->Target(__site_call1_1087_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1088
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     ry_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     ry_ = fw_asfortranarray(ry, fwr_dbl_t_enum, 1, ry_shape, False, True)
 *     if not (0 <= n + 1 <= ry_shape[0]):
 */
  (__pyx_v_ry_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1089
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     ry_shape[0] = n + 1
 *     ry_ = fw_asfortranarray(ry, fwr_dbl_t_enum, 1, ry_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= ry_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= ry.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_ry, NPY_DOUBLE, 1, __pyx_v_ry_shape, 0, 1, nullptr)); 
  __pyx_v_ry_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1090
 *     ry_shape[0] = n + 1
 *     ry_ = fw_asfortranarray(ry, fwr_dbl_t_enum, 1, ry_shape, False, True)
 *     if not (0 <= n + 1 <= ry_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= ry.shape[0]) not satisifed")
 *     dy_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_ry_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1091
 *     ry_ = fw_asfortranarray(ry, fwr_dbl_t_enum, 1, ry_shape, False, True)
 *     if not (0 <= n + 1 <= ry_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= ry.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dy_shape[0] = n + 1
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1091_24->Target(__site_call1_1091_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= ry.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1092
 *     if not (0 <= n + 1 <= ry_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= ry.shape[0]) not satisifed")
 *     dy_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
 *     if not (0 <= n + 1 <= dy_shape[0]):
 */
  (__pyx_v_dy_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1093
 *         raise ValueError("(0 <= n + 1 <= ry.shape[0]) not satisifed")
 *     dy_shape[0] = n + 1
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= dy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_dy, NPY_DOUBLE, 1, __pyx_v_dy_shape, 0, 1, nullptr)); 
  __pyx_v_dy_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1094
 *     dy_shape[0] = n + 1
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
 *     if not (0 <= n + 1 <= dy_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")
 *     fc.rcty(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(ry_), <fwr_dbl_t*>np.PyArray_DATA(dy_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_dy_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1095
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
 *     if not (0 <= n + 1 <= dy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.rcty(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(ry_), <fwr_dbl_t*>np.PyArray_DATA(dy_))
 *     return (nm, ry_, dy_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1095_24->Target(__site_call1_1095_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= dy.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1096
 *     if not (0 <= n + 1 <= dy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")
 *     fc.rcty(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(ry_), <fwr_dbl_t*>np.PyArray_DATA(dy_))             # <<<<<<<<<<<<<<
 *     return (nm, ry_, dy_,)
 * 
 */
  F_FUNC(rcty,RCTY)((&__pyx_v_n), (&__pyx_v_x), (&__pyx_v_nm), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_ry_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dy_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1097
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")
 *     fc.rcty(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(ry_), <fwr_dbl_t*>np.PyArray_DATA(dy_))
 *     return (nm, ry_, dy_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_nm;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, ((System::Object^)__pyx_v_ry_), ((System::Object^)__pyx_v_dy_)});
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1100
 * 
 * 
 * def lpni(fwi_integer_t n, fwr_dbl_t x, object pn=None, object pd=None, object pl=None):             # <<<<<<<<<<<<<<
 *     """lpni(n, x[, pn, pd, pl]) -> (pn, pd, pl)
 * 
 */

static System::Object^ lpni(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ pn, [InteropServices::Optional]System::Object^ pd, [InteropServices::Optional]System::Object^ pl) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_pn = nullptr;
  System::Object^ __pyx_v_pd = nullptr;
  System::Object^ __pyx_v_pl = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_pn_;
  NumpyDotNet::ndarray^ __pyx_v_pd_;
  NumpyDotNet::ndarray^ __pyx_v_pl_;
  __pyx_t_5numpy_npy_intp __pyx_v_pn_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_pd_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_pl_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_1100_0->Target(__site_cvt_1100_0, n);
  __pyx_v_x = __site_cvt_1100_0_1->Target(__site_cvt_1100_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(pn) == nullptr) {
    __pyx_v_pn = pn;
  } else {
    __pyx_v_pn = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(pd) == nullptr) {
    __pyx_v_pd = pd;
  } else {
    __pyx_v_pd = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(pl) == nullptr) {
    __pyx_v_pl = pl;
  } else {
    __pyx_v_pl = ((System::Object^)nullptr);
  }
  __pyx_v_pn_ = nullptr;
  __pyx_v_pd_ = nullptr;
  __pyx_v_pl_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1120
 *     cdef np.ndarray pn_, pd_, pl_
 *     cdef np.npy_intp pn_shape[1], pd_shape[1], pl_shape[1]
 *     if not (n > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     pn_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1121
 *     cdef np.npy_intp pn_shape[1], pd_shape[1], pl_shape[1]
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')             # <<<<<<<<<<<<<<
 *     pn_shape[0] = n + 1
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1121_24->Target(__site_call1_1121_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1122
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     pn_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
 *     if not (0 <= n + 1 <= pn_shape[0]):
 */
  (__pyx_v_pn_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1123
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     pn_shape[0] = n + 1
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_pn, NPY_DOUBLE, 1, __pyx_v_pn_shape, 0, 1, nullptr)); 
  __pyx_v_pn_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1124
 *     pn_shape[0] = n + 1
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
 *     if not (0 <= n + 1 <= pn_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_pn_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1125
 *     pn_ = fw_asfortranarray(pn, fwr_dbl_t_enum, 1, pn_shape, False, True)
 *     if not (0 <= n + 1 <= pn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1125_24->Target(__site_call1_1125_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= pn.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1126
 *     if not (0 <= n + 1 <= pn_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):
 */
  (__pyx_v_pd_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1127
 *         raise ValueError("(0 <= n + 1 <= pn.shape[0]) not satisifed")
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_pd, NPY_DOUBLE, 1, __pyx_v_pd_shape, 0, 1, nullptr)); 
  __pyx_v_pd_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1128
 *     pd_shape[0] = n + 1
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     pl_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_pd_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1129
 *     pd_ = fw_asfortranarray(pd, fwr_dbl_t_enum, 1, pd_shape, False, True)
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     pl_shape[0] = n + 1
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1129_24->Target(__site_call1_1129_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= pd.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1130
 *     if not (0 <= n + 1 <= pd_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     pl_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
 *     if not (0 <= n + 1 <= pl_shape[0]):
 */
  (__pyx_v_pl_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1131
 *         raise ValueError("(0 <= n + 1 <= pd.shape[0]) not satisifed")
 *     pl_shape[0] = n + 1
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_pl, NPY_DOUBLE, 1, __pyx_v_pl_shape, 0, 1, nullptr)); 
  __pyx_v_pl_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1132
 *     pl_shape[0] = n + 1
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
 *     if not (0 <= n + 1 <= pl_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")
 *     fc.lpni(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_), <fwr_dbl_t*>np.PyArray_DATA(pl_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_pl_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1133
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
 *     if not (0 <= n + 1 <= pl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.lpni(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_), <fwr_dbl_t*>np.PyArray_DATA(pl_))
 *     return (pn_, pd_, pl_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1133_24->Target(__site_call1_1133_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= pl.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1134
 *     if not (0 <= n + 1 <= pl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")
 *     fc.lpni(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_), <fwr_dbl_t*>np.PyArray_DATA(pl_))             # <<<<<<<<<<<<<<
 *     return (pn_, pd_, pl_,)
 * 
 */
  F_FUNC(lpni,LPNI)((&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pn_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pd_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pl_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1135
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")
 *     fc.lpni(&n, &x, <fwr_dbl_t*>np.PyArray_DATA(pn_), <fwr_dbl_t*>np.PyArray_DATA(pd_), <fwr_dbl_t*>np.PyArray_DATA(pl_))
 *     return (pn_, pd_, pl_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_pn_), ((System::Object^)__pyx_v_pd_), ((System::Object^)__pyx_v_pl_)});
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1138
 * 
 * 
 * def cyzo(fwi_integer_t nt, fwi_integer_t kf, fwi_integer_t kc, object zo=None, object zv=None):             # <<<<<<<<<<<<<<
 *     """cyzo(nt, kf, kc[, zo, zv]) -> (zo, zv)
 * 
 */

static System::Object^ cyzo(System::Object^ nt, System::Object^ kf, System::Object^ kc, [InteropServices::Optional]System::Object^ zo, [InteropServices::Optional]System::Object^ zv) {
  fwi_integer_t __pyx_v_nt;
  fwi_integer_t __pyx_v_kf;
  fwi_integer_t __pyx_v_kc;
  System::Object^ __pyx_v_zo = nullptr;
  System::Object^ __pyx_v_zv = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_zo_;
  NumpyDotNet::ndarray^ __pyx_v_zv_;
  __pyx_t_5numpy_npy_intp __pyx_v_zo_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_zv_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_nt = __site_cvt_1138_0->Target(__site_cvt_1138_0, nt);
  __pyx_v_kf = __site_cvt_1138_0_1->Target(__site_cvt_1138_0_1, kf);
  __pyx_v_kc = __site_cvt_1138_0_2->Target(__site_cvt_1138_0_2, kc);
  if (dynamic_cast<System::Reflection::Missing^>(zo) == nullptr) {
    __pyx_v_zo = zo;
  } else {
    __pyx_v_zo = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(zv) == nullptr) {
    __pyx_v_zv = zv;
  } else {
    __pyx_v_zv = ((System::Object^)nullptr);
  }
  __pyx_v_zo_ = nullptr;
  __pyx_v_zv_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1157
 *     cdef np.ndarray zo_, zv_
 *     cdef np.npy_intp zo_shape[1], zv_shape[1]
 *     if not (nt > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     if not ((kf >= 0) and (kf <= 2)):
 */
  __pyx_t_1 = (!(__pyx_v_nt > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1158
 *     cdef np.npy_intp zo_shape[1], zv_shape[1]
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')             # <<<<<<<<<<<<<<
 *     if not ((kf >= 0) and (kf <= 2)):
 *         raise ValueError('Condition on arguments not satisfied: (kf >= 0) and (kf <= 2)')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1158_24->Target(__site_call1_1158_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: nt > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1159
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     if not ((kf >= 0) and (kf <= 2)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (kf >= 0) and (kf <= 2)')
 *     if not ((kc == 0) or (kc == 1)):
 */
  __pyx_t_1 = (__pyx_v_kf >= 0);
  if (__pyx_t_1) {
    __pyx_t_4 = (__pyx_v_kf <= 2);
    __pyx_t_5 = __pyx_t_4;
  } else {
    __pyx_t_5 = __pyx_t_1;
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1160
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     if not ((kf >= 0) and (kf <= 2)):
 *         raise ValueError('Condition on arguments not satisfied: (kf >= 0) and (kf <= 2)')             # <<<<<<<<<<<<<<
 *     if not ((kc == 0) or (kc == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kc == 0) or (kc == 1)')
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1160_24->Target(__site_call1_1160_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: (kf >= 0) and (kf <= 2)"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1161
 *     if not ((kf >= 0) and (kf <= 2)):
 *         raise ValueError('Condition on arguments not satisfied: (kf >= 0) and (kf <= 2)')
 *     if not ((kc == 0) or (kc == 1)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (kc == 0) or (kc == 1)')
 *     zo_shape[0] = nt
 */
  switch (__pyx_v_kc) {
    case 0:
    case 1:
    __pyx_t_1 = 1;
    break;
    default:
    __pyx_t_1 = 0;
    break;
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1162
 *         raise ValueError('Condition on arguments not satisfied: (kf >= 0) and (kf <= 2)')
 *     if not ((kc == 0) or (kc == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kc == 0) or (kc == 1)')             # <<<<<<<<<<<<<<
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1162_24->Target(__site_call1_1162_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: (kc == 0) or (kc == 1)"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1163
 *     if not ((kc == 0) or (kc == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kc == 0) or (kc == 1)')
 *     zo_shape[0] = nt             # <<<<<<<<<<<<<<
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:
 */
  (__pyx_v_zo_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1164
 *         raise ValueError('Condition on arguments not satisfied: (kc == 0) or (kc == 1)')
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_zo, NPY_CDOUBLE, 1, __pyx_v_zo_shape, 0, 1, nullptr)); 
  __pyx_v_zo_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1165
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     zv_shape[0] = nt
 */
  __pyx_t_5 = (__pyx_v_nt != (__pyx_v_zo_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1166
 *     zo_ = fw_asfortranarray(zo, fwc_complex_x16_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     zv_shape[0] = nt
 *     zv_ = fw_asfortranarray(zv, fwc_complex_x16_t_enum, 1, zv_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1166_24->Target(__site_call1_1166_24, __pyx_context, __pyx_t_3, ((System::Object^)"(nt == zo.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1167
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     zv_shape[0] = nt             # <<<<<<<<<<<<<<
 *     zv_ = fw_asfortranarray(zv, fwc_complex_x16_t_enum, 1, zv_shape, False, True)
 *     if nt != zv_shape[0]:
 */
  (__pyx_v_zv_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1168
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     zv_shape[0] = nt
 *     zv_ = fw_asfortranarray(zv, fwc_complex_x16_t_enum, 1, zv_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != zv_shape[0]:
 *         raise ValueError("(nt == zv.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_zv, NPY_CDOUBLE, 1, __pyx_v_zv_shape, 0, 1, nullptr)); 
  __pyx_v_zv_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1169
 *     zv_shape[0] = nt
 *     zv_ = fw_asfortranarray(zv, fwc_complex_x16_t_enum, 1, zv_shape, False, True)
 *     if nt != zv_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == zv.shape[0]) not satisifed")
 *     fc.cyzo(&nt, &kf, &kc, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), <fwc_complex_x16_t*>np.PyArray_DATA(zv_))
 */
  __pyx_t_5 = (__pyx_v_nt != (__pyx_v_zv_shape[0]));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1170
 *     zv_ = fw_asfortranarray(zv, fwc_complex_x16_t_enum, 1, zv_shape, False, True)
 *     if nt != zv_shape[0]:
 *         raise ValueError("(nt == zv.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.cyzo(&nt, &kf, &kc, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), <fwc_complex_x16_t*>np.PyArray_DATA(zv_))
 *     return (zo_, zv_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1170_24->Target(__site_call1_1170_24, __pyx_context, __pyx_t_2, ((System::Object^)"(nt == zv.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1171
 *     if nt != zv_shape[0]:
 *         raise ValueError("(nt == zv.shape[0]) not satisifed")
 *     fc.cyzo(&nt, &kf, &kc, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), <fwc_complex_x16_t*>np.PyArray_DATA(zv_))             # <<<<<<<<<<<<<<
 *     return (zo_, zv_,)
 * 
 */
  F_FUNC(cyzo,CYZO)((&__pyx_v_nt), (&__pyx_v_kf), (&__pyx_v_kc), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_zo_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_zv_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1172
 *         raise ValueError("(nt == zv.shape[0]) not satisifed")
 *     fc.cyzo(&nt, &kf, &kc, <fwc_complex_x16_t*>np.PyArray_DATA(zo_), <fwc_complex_x16_t*>np.PyArray_DATA(zv_))
 *     return (zo_, zv_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_zo_), ((System::Object^)__pyx_v_zv_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1175
 * 
 * 
 * def csphik(fwi_integer_t n, fwc_complex_x16_t z, object csi=None, object cdi=None, object csk=None, object cdk=None):             # <<<<<<<<<<<<<<
 *     """csphik(n, z[, csi, cdi, csk, cdk]) -> (nm, csi, cdi, csk, cdk)
 * 
 */

static System::Object^ csphik(System::Object^ n, System::Object^ z, [InteropServices::Optional]System::Object^ csi, [InteropServices::Optional]System::Object^ cdi, [InteropServices::Optional]System::Object^ csk, [InteropServices::Optional]System::Object^ cdk) {
  fwi_integer_t __pyx_v_n;
  __pyx_t_double_complex __pyx_v_z;
  System::Object^ __pyx_v_csi = nullptr;
  System::Object^ __pyx_v_cdi = nullptr;
  System::Object^ __pyx_v_csk = nullptr;
  System::Object^ __pyx_v_cdk = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_csi_;
  NumpyDotNet::ndarray^ __pyx_v_cdi_;
  NumpyDotNet::ndarray^ __pyx_v_csk_;
  NumpyDotNet::ndarray^ __pyx_v_cdk_;
  __pyx_t_5numpy_npy_intp __pyx_v_csi_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_cdi_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_csk_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_cdk_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Numerics::Complex __pyx_t_1;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  long __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_n = __site_cvt_1175_0->Target(__site_cvt_1175_0, n);
  __pyx_t_1 = IronPython::Runtime::Converter::ConvertToComplex(z);
  __pyx_v_z.real(__pyx_t_1.Real);
  __pyx_v_z.imag(__pyx_t_1.Imaginary);
  if (dynamic_cast<System::Reflection::Missing^>(csi) == nullptr) {
    __pyx_v_csi = csi;
  } else {
    __pyx_v_csi = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cdi) == nullptr) {
    __pyx_v_cdi = cdi;
  } else {
    __pyx_v_cdi = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(csk) == nullptr) {
    __pyx_v_csk = csk;
  } else {
    __pyx_v_csk = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cdk) == nullptr) {
    __pyx_v_cdk = cdk;
  } else {
    __pyx_v_cdk = ((System::Object^)nullptr);
  }
  __pyx_v_csi_ = nullptr;
  __pyx_v_cdi_ = nullptr;
  __pyx_v_csk_ = nullptr;
  __pyx_v_cdk_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1199
 *     cdef np.ndarray csi_, cdi_, csk_, cdk_
 *     cdef np.npy_intp csi_shape[1], cdi_shape[1], csk_shape[1], cdk_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1200
 *     cdef np.npy_intp csi_shape[1], cdi_shape[1], csk_shape[1], cdk_shape[1]
 *     nm = 0
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     csi_shape[0] = n + 1
 */
  __pyx_t_2 = (!(__pyx_v_n >= 1));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1201
 *     nm = 0
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     csi_shape[0] = n + 1
 *     csi_ = fw_asfortranarray(csi, fwc_complex_x16_t_enum, 1, csi_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1201_24->Target(__site_call1_1201_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1202
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     csi_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     csi_ = fw_asfortranarray(csi, fwc_complex_x16_t_enum, 1, csi_shape, False, True)
 *     if not (0 <= n + 1 <= csi_shape[0]):
 */
  (__pyx_v_csi_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1203
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     csi_shape[0] = n + 1
 *     csi_ = fw_asfortranarray(csi, fwc_complex_x16_t_enum, 1, csi_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= csi_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csi.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_csi, NPY_CDOUBLE, 1, __pyx_v_csi_shape, 0, 1, nullptr)); 
  __pyx_v_csi_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1204
 *     csi_shape[0] = n + 1
 *     csi_ = fw_asfortranarray(csi, fwc_complex_x16_t_enum, 1, csi_shape, False, True)
 *     if not (0 <= n + 1 <= csi_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= csi.shape[0]) not satisifed")
 *     cdi_shape[0] = n + 1
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_2 = (0 <= __pyx_t_5);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_t_5 <= (__pyx_v_csi_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_2);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1205
 *     csi_ = fw_asfortranarray(csi, fwc_complex_x16_t_enum, 1, csi_shape, False, True)
 *     if not (0 <= n + 1 <= csi_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csi.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     cdi_shape[0] = n + 1
 *     cdi_ = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, cdi_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1205_24->Target(__site_call1_1205_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n + 1 <= csi.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1206
 *     if not (0 <= n + 1 <= csi_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csi.shape[0]) not satisifed")
 *     cdi_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     cdi_ = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, cdi_shape, False, True)
 *     if not (0 <= n + 1 <= cdi_shape[0]):
 */
  (__pyx_v_cdi_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1207
 *         raise ValueError("(0 <= n + 1 <= csi.shape[0]) not satisifed")
 *     cdi_shape[0] = n + 1
 *     cdi_ = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, cdi_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= cdi_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdi.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cdi, NPY_CDOUBLE, 1, __pyx_v_cdi_shape, 0, 1, nullptr)); 
  __pyx_v_cdi_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1208
 *     cdi_shape[0] = n + 1
 *     cdi_ = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, cdi_shape, False, True)
 *     if not (0 <= n + 1 <= cdi_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= cdi.shape[0]) not satisifed")
 *     csk_shape[0] = n + 1
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_6 = (0 <= __pyx_t_5);
  if (__pyx_t_6) {
    __pyx_t_6 = (__pyx_t_5 <= (__pyx_v_cdi_shape[0]));
  }
  __pyx_t_2 = (!__pyx_t_6);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1209
 *     cdi_ = fw_asfortranarray(cdi, fwc_complex_x16_t_enum, 1, cdi_shape, False, True)
 *     if not (0 <= n + 1 <= cdi_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdi.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     csk_shape[0] = n + 1
 *     csk_ = fw_asfortranarray(csk, fwc_complex_x16_t_enum, 1, csk_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1209_24->Target(__site_call1_1209_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= cdi.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1210
 *     if not (0 <= n + 1 <= cdi_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdi.shape[0]) not satisifed")
 *     csk_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     csk_ = fw_asfortranarray(csk, fwc_complex_x16_t_enum, 1, csk_shape, False, True)
 *     if not (0 <= n + 1 <= csk_shape[0]):
 */
  (__pyx_v_csk_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1211
 *         raise ValueError("(0 <= n + 1 <= cdi.shape[0]) not satisifed")
 *     csk_shape[0] = n + 1
 *     csk_ = fw_asfortranarray(csk, fwc_complex_x16_t_enum, 1, csk_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= csk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csk.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_csk, NPY_CDOUBLE, 1, __pyx_v_csk_shape, 0, 1, nullptr)); 
  __pyx_v_csk_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1212
 *     csk_shape[0] = n + 1
 *     csk_ = fw_asfortranarray(csk, fwc_complex_x16_t_enum, 1, csk_shape, False, True)
 *     if not (0 <= n + 1 <= csk_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= csk.shape[0]) not satisifed")
 *     cdk_shape[0] = n + 1
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_2 = (0 <= __pyx_t_5);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_t_5 <= (__pyx_v_csk_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_2);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1213
 *     csk_ = fw_asfortranarray(csk, fwc_complex_x16_t_enum, 1, csk_shape, False, True)
 *     if not (0 <= n + 1 <= csk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csk.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     cdk_shape[0] = n + 1
 *     cdk_ = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, cdk_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1213_24->Target(__site_call1_1213_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n + 1 <= csk.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1214
 *     if not (0 <= n + 1 <= csk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= csk.shape[0]) not satisifed")
 *     cdk_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     cdk_ = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, cdk_shape, False, True)
 *     if not (0 <= n + 1 <= cdk_shape[0]):
 */
  (__pyx_v_cdk_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1215
 *         raise ValueError("(0 <= n + 1 <= csk.shape[0]) not satisifed")
 *     cdk_shape[0] = n + 1
 *     cdk_ = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, cdk_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= cdk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdk.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cdk, NPY_CDOUBLE, 1, __pyx_v_cdk_shape, 0, 1, nullptr)); 
  __pyx_v_cdk_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1216
 *     cdk_shape[0] = n + 1
 *     cdk_ = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, cdk_shape, False, True)
 *     if not (0 <= n + 1 <= cdk_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= cdk.shape[0]) not satisifed")
 *     fc.csphik(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csi_), <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), <fwc_complex_x16_t*>np.PyArray_DATA(csk_), <fwc_complex_x16_t*>np.PyArray_DATA(cdk_))
 */
  __pyx_t_5 = (__pyx_v_n + 1);
  __pyx_t_6 = (0 <= __pyx_t_5);
  if (__pyx_t_6) {
    __pyx_t_6 = (__pyx_t_5 <= (__pyx_v_cdk_shape[0]));
  }
  __pyx_t_2 = (!__pyx_t_6);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1217
 *     cdk_ = fw_asfortranarray(cdk, fwc_complex_x16_t_enum, 1, cdk_shape, False, True)
 *     if not (0 <= n + 1 <= cdk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdk.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.csphik(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csi_), <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), <fwc_complex_x16_t*>np.PyArray_DATA(csk_), <fwc_complex_x16_t*>np.PyArray_DATA(cdk_))
 *     return (nm, csi_, cdi_, csk_, cdk_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1217_24->Target(__site_call1_1217_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= cdk.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1218
 *     if not (0 <= n + 1 <= cdk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= cdk.shape[0]) not satisifed")
 *     fc.csphik(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csi_), <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), <fwc_complex_x16_t*>np.PyArray_DATA(csk_), <fwc_complex_x16_t*>np.PyArray_DATA(cdk_))             # <<<<<<<<<<<<<<
 *     return (nm, csi_, cdi_, csk_, cdk_,)
 * 
 */
  F_FUNC(csphik,CSPHIK)((&__pyx_v_n), (&__pyx_v_z), (&__pyx_v_nm), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_csi_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cdi_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_csk_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cdk_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1219
 *         raise ValueError("(0 <= n + 1 <= cdk.shape[0]) not satisifed")
 *     fc.csphik(&n, &z, &nm, <fwc_complex_x16_t*>np.PyArray_DATA(csi_), <fwc_complex_x16_t*>np.PyArray_DATA(cdi_), <fwc_complex_x16_t*>np.PyArray_DATA(csk_), <fwc_complex_x16_t*>np.PyArray_DATA(cdk_))
 *     return (nm, csi_, cdi_, csk_, cdk_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_nm;
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, ((System::Object^)__pyx_v_csi_), ((System::Object^)__pyx_v_cdi_), ((System::Object^)__pyx_v_csk_), ((System::Object^)__pyx_v_cdk_)});
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1222
 * 
 * 
 * def sphj(fwi_integer_t n, fwr_dbl_t x, object sj=None, object dj=None):             # <<<<<<<<<<<<<<
 *     """sphj(n, x[, sj, dj]) -> (nm, sj, dj)
 * 
 */

static System::Object^ sphj(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ sj, [InteropServices::Optional]System::Object^ dj) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_sj = nullptr;
  System::Object^ __pyx_v_dj = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_sj_;
  NumpyDotNet::ndarray^ __pyx_v_dj_;
  __pyx_t_5numpy_npy_intp __pyx_v_sj_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dj_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_1222_0->Target(__site_cvt_1222_0, n);
  __pyx_v_x = __site_cvt_1222_0_1->Target(__site_cvt_1222_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(sj) == nullptr) {
    __pyx_v_sj = sj;
  } else {
    __pyx_v_sj = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dj) == nullptr) {
    __pyx_v_dj = dj;
  } else {
    __pyx_v_dj = ((System::Object^)nullptr);
  }
  __pyx_v_sj_ = nullptr;
  __pyx_v_dj_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1242
 *     cdef np.ndarray sj_, dj_
 *     cdef np.npy_intp sj_shape[1], dj_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1243
 *     cdef np.npy_intp sj_shape[1], dj_shape[1]
 *     nm = 0
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     sj_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1244
 *     nm = 0
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     sj_shape[0] = n + 1
 *     sj_ = fw_asfortranarray(sj, fwr_dbl_t_enum, 1, sj_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1244_24->Target(__site_call1_1244_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1245
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     sj_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     sj_ = fw_asfortranarray(sj, fwr_dbl_t_enum, 1, sj_shape, False, True)
 *     if not (0 <= n + 1 <= sj_shape[0]):
 */
  (__pyx_v_sj_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1246
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     sj_shape[0] = n + 1
 *     sj_ = fw_asfortranarray(sj, fwr_dbl_t_enum, 1, sj_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= sj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sj.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_sj, NPY_DOUBLE, 1, __pyx_v_sj_shape, 0, 1, nullptr)); 
  __pyx_v_sj_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1247
 *     sj_shape[0] = n + 1
 *     sj_ = fw_asfortranarray(sj, fwr_dbl_t_enum, 1, sj_shape, False, True)
 *     if not (0 <= n + 1 <= sj_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= sj.shape[0]) not satisifed")
 *     dj_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_sj_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1248
 *     sj_ = fw_asfortranarray(sj, fwr_dbl_t_enum, 1, sj_shape, False, True)
 *     if not (0 <= n + 1 <= sj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sj.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dj_shape[0] = n + 1
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1248_24->Target(__site_call1_1248_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= sj.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1249
 *     if not (0 <= n + 1 <= sj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sj.shape[0]) not satisifed")
 *     dj_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
 *     if not (0 <= n + 1 <= dj_shape[0]):
 */
  (__pyx_v_dj_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1250
 *         raise ValueError("(0 <= n + 1 <= sj.shape[0]) not satisifed")
 *     dj_shape[0] = n + 1
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= dj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_dj, NPY_DOUBLE, 1, __pyx_v_dj_shape, 0, 1, nullptr)); 
  __pyx_v_dj_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1251
 *     dj_shape[0] = n + 1
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
 *     if not (0 <= n + 1 <= dj_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")
 *     fc.sphj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_dj_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1252
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
 *     if not (0 <= n + 1 <= dj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.sphj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))
 *     return (nm, sj_, dj_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1252_24->Target(__site_call1_1252_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= dj.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1253
 *     if not (0 <= n + 1 <= dj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")
 *     fc.sphj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))             # <<<<<<<<<<<<<<
 *     return (nm, sj_, dj_,)
 * 
 */
  F_FUNC(sphj,SPHJ)((&__pyx_v_n), (&__pyx_v_x), (&__pyx_v_nm), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_sj_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dj_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1254
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")
 *     fc.sphj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))
 *     return (nm, sj_, dj_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_nm;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, ((System::Object^)__pyx_v_sj_), ((System::Object^)__pyx_v_dj_)});
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1257
 * 
 * 
 * def othpl(fwi_integer_t kf, fwi_integer_t n, fwr_dbl_t x, object pl=None, object dpl=None):             # <<<<<<<<<<<<<<
 *     """othpl(kf, n, x[, pl, dpl]) -> (pl, dpl)
 * 
 */

static System::Object^ othpl(System::Object^ kf, System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ pl, [InteropServices::Optional]System::Object^ dpl) {
  fwi_integer_t __pyx_v_kf;
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_pl = nullptr;
  System::Object^ __pyx_v_dpl = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_pl_;
  NumpyDotNet::ndarray^ __pyx_v_dpl_;
  __pyx_t_5numpy_npy_intp __pyx_v_pl_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dpl_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  long __pyx_t_6;
  __pyx_v_kf = __site_cvt_1257_0->Target(__site_cvt_1257_0, kf);
  __pyx_v_n = __site_cvt_1257_0_1->Target(__site_cvt_1257_0_1, n);
  __pyx_v_x = __site_cvt_1257_0_2->Target(__site_cvt_1257_0_2, x);
  if (dynamic_cast<System::Reflection::Missing^>(pl) == nullptr) {
    __pyx_v_pl = pl;
  } else {
    __pyx_v_pl = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dpl) == nullptr) {
    __pyx_v_dpl = dpl;
  } else {
    __pyx_v_dpl = ((System::Object^)nullptr);
  }
  __pyx_v_pl_ = nullptr;
  __pyx_v_dpl_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1276
 *     cdef np.ndarray pl_, dpl_
 *     cdef np.npy_intp pl_shape[1], dpl_shape[1]
 *     if not ((kf > 0) and (kf < 5)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (kf > 0) and (kf < 5)')
 *     if not (n > 0):
 */
  __pyx_t_1 = (__pyx_v_kf > 0);
  if (__pyx_t_1) {
    __pyx_t_2 = (__pyx_v_kf < 5);
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1277
 *     cdef np.npy_intp pl_shape[1], dpl_shape[1]
 *     if not ((kf > 0) and (kf < 5)):
 *         raise ValueError('Condition on arguments not satisfied: (kf > 0) and (kf < 5)')             # <<<<<<<<<<<<<<
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_1277_24->Target(__site_call1_1277_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: (kf > 0) and (kf < 5)"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1278
 *     if not ((kf > 0) and (kf < 5)):
 *         raise ValueError('Condition on arguments not satisfied: (kf > 0) and (kf < 5)')
 *     if not (n > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     pl_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1279
 *         raise ValueError('Condition on arguments not satisfied: (kf > 0) and (kf < 5)')
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')             # <<<<<<<<<<<<<<
 *     pl_shape[0] = n + 1
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1279_24->Target(__site_call1_1279_24, __pyx_context, __pyx_t_5, ((System::Object^)"Condition on arguments not satisfied: n > 0"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1280
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     pl_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
 *     if not (0 <= n + 1 <= pl_shape[0]):
 */
  (__pyx_v_pl_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1281
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     pl_shape[0] = n + 1
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= pl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_pl, NPY_DOUBLE, 1, __pyx_v_pl_shape, 0, 1, nullptr)); 
  __pyx_v_pl_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1282
 *     pl_shape[0] = n + 1
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
 *     if not (0 <= n + 1 <= pl_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")
 *     dpl_shape[0] = n + 1
 */
  __pyx_t_6 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_6);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_6 <= (__pyx_v_pl_shape[0]));
  }
  __pyx_t_3 = (!__pyx_t_1);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1283
 *     pl_ = fw_asfortranarray(pl, fwr_dbl_t_enum, 1, pl_shape, False, True)
 *     if not (0 <= n + 1 <= pl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dpl_shape[0] = n + 1
 *     dpl_ = fw_asfortranarray(dpl, fwr_dbl_t_enum, 1, dpl_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_1283_24->Target(__site_call1_1283_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n + 1 <= pl.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1284
 *     if not (0 <= n + 1 <= pl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")
 *     dpl_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     dpl_ = fw_asfortranarray(dpl, fwr_dbl_t_enum, 1, dpl_shape, False, True)
 *     if not (0 <= n + 1 <= dpl_shape[0]):
 */
  (__pyx_v_dpl_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1285
 *         raise ValueError("(0 <= n + 1 <= pl.shape[0]) not satisifed")
 *     dpl_shape[0] = n + 1
 *     dpl_ = fw_asfortranarray(dpl, fwr_dbl_t_enum, 1, dpl_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= dpl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dpl.shape[0]) not satisifed")
 */
  __pyx_t_5 = ((System::Object^)fw_asfortranarray(__pyx_v_dpl, NPY_DOUBLE, 1, __pyx_v_dpl_shape, 0, 1, nullptr)); 
  __pyx_v_dpl_ = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1286
 *     dpl_shape[0] = n + 1
 *     dpl_ = fw_asfortranarray(dpl, fwr_dbl_t_enum, 1, dpl_shape, False, True)
 *     if not (0 <= n + 1 <= dpl_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= dpl.shape[0]) not satisifed")
 *     fc.othpl(&kf, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pl_), <fwr_dbl_t*>np.PyArray_DATA(dpl_))
 */
  __pyx_t_6 = (__pyx_v_n + 1);
  __pyx_t_3 = (0 <= __pyx_t_6);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_t_6 <= (__pyx_v_dpl_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1287
 *     dpl_ = fw_asfortranarray(dpl, fwr_dbl_t_enum, 1, dpl_shape, False, True)
 *     if not (0 <= n + 1 <= dpl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dpl.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.othpl(&kf, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pl_), <fwr_dbl_t*>np.PyArray_DATA(dpl_))
 *     return (pl_, dpl_,)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1287_24->Target(__site_call1_1287_24, __pyx_context, __pyx_t_5, ((System::Object^)"(0 <= n + 1 <= dpl.shape[0]) not satisifed"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1288
 *     if not (0 <= n + 1 <= dpl_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dpl.shape[0]) not satisifed")
 *     fc.othpl(&kf, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pl_), <fwr_dbl_t*>np.PyArray_DATA(dpl_))             # <<<<<<<<<<<<<<
 *     return (pl_, dpl_,)
 * 
 */
  F_FUNC(othpl,OTHPL)((&__pyx_v_kf), (&__pyx_v_n), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_pl_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dpl_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1289
 *         raise ValueError("(0 <= n + 1 <= dpl.shape[0]) not satisifed")
 *     fc.othpl(&kf, &n, &x, <fwr_dbl_t*>np.PyArray_DATA(pl_), <fwr_dbl_t*>np.PyArray_DATA(dpl_))
 *     return (pl_, dpl_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_pl_), ((System::Object^)__pyx_v_dpl_)});
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1292
 * 
 * 
 * def klvnzo(fwi_integer_t nt, fwi_integer_t kd, object zo=None):             # <<<<<<<<<<<<<<
 *     """klvnzo(nt, kd[, zo]) -> zo
 * 
 */

static System::Object^ klvnzo(System::Object^ nt, System::Object^ kd, [InteropServices::Optional]System::Object^ zo) {
  fwi_integer_t __pyx_v_nt;
  fwi_integer_t __pyx_v_kd;
  System::Object^ __pyx_v_zo = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_zo_;
  __pyx_t_5numpy_npy_intp __pyx_v_zo_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_nt = __site_cvt_1292_0->Target(__site_cvt_1292_0, nt);
  __pyx_v_kd = __site_cvt_1292_0_1->Target(__site_cvt_1292_0_1, kd);
  if (dynamic_cast<System::Reflection::Missing^>(zo) == nullptr) {
    __pyx_v_zo = zo;
  } else {
    __pyx_v_zo = ((System::Object^)nullptr);
  }
  __pyx_v_zo_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1308
 *     cdef np.ndarray zo_
 *     cdef np.npy_intp zo_shape[1]
 *     if not (nt > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     if not ((kd >= 1) or (kd <= 8)):
 */
  __pyx_t_1 = (!(__pyx_v_nt > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1309
 *     cdef np.npy_intp zo_shape[1]
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')             # <<<<<<<<<<<<<<
 *     if not ((kd >= 1) or (kd <= 8)):
 *         raise ValueError('Condition on arguments not satisfied: (kd >= 1) or (kd <= 8)')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1309_24->Target(__site_call1_1309_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: nt > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1310
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     if not ((kd >= 1) or (kd <= 8)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (kd >= 1) or (kd <= 8)')
 *     zo_shape[0] = nt
 */
  __pyx_t_1 = (__pyx_v_kd >= 1);
  if (!__pyx_t_1) {
    __pyx_t_4 = (__pyx_v_kd <= 8);
    __pyx_t_5 = __pyx_t_4;
  } else {
    __pyx_t_5 = __pyx_t_1;
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1311
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     if not ((kd >= 1) or (kd <= 8)):
 *         raise ValueError('Condition on arguments not satisfied: (kd >= 1) or (kd <= 8)')             # <<<<<<<<<<<<<<
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1311_24->Target(__site_call1_1311_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: (kd >= 1) or (kd <= 8)"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1312
 *     if not ((kd >= 1) or (kd <= 8)):
 *         raise ValueError('Condition on arguments not satisfied: (kd >= 1) or (kd <= 8)')
 *     zo_shape[0] = nt             # <<<<<<<<<<<<<<
 *     zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:
 */
  (__pyx_v_zo_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1313
 *         raise ValueError('Condition on arguments not satisfied: (kd >= 1) or (kd <= 8)')
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_zo, NPY_DOUBLE, 1, __pyx_v_zo_shape, 0, 1, nullptr)); 
  __pyx_v_zo_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1314
 *     zo_shape[0] = nt
 *     zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.klvnzo(&nt, &kd, <fwr_dbl_t*>np.PyArray_DATA(zo_))
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_zo_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1315
 *     zo_ = fw_asfortranarray(zo, fwr_dbl_t_enum, 1, zo_shape, False, True)
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.klvnzo(&nt, &kd, <fwr_dbl_t*>np.PyArray_DATA(zo_))
 *     return zo_
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1315_24->Target(__site_call1_1315_24, __pyx_context, __pyx_t_2, ((System::Object^)"(nt == zo.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1316
 *     if nt != zo_shape[0]:
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.klvnzo(&nt, &kd, <fwr_dbl_t*>np.PyArray_DATA(zo_))             # <<<<<<<<<<<<<<
 *     return zo_
 * 
 */
  F_FUNC(klvnzo,KLVNZO)((&__pyx_v_nt), (&__pyx_v_kd), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_zo_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1317
 *         raise ValueError("(nt == zo.shape[0]) not satisifed")
 *     fc.klvnzo(&nt, &kd, <fwr_dbl_t*>np.PyArray_DATA(zo_))
 *     return zo_             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_zo_);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1320
 * 
 * 
 * def jyzo(fwi_integer_t n, fwi_integer_t nt, object rj0=None, object rj1=None, object ry0=None, object ry1=None):             # <<<<<<<<<<<<<<
 *     """jyzo(n, nt[, rj0, rj1, ry0, ry1]) -> (rj0, rj1, ry0, ry1)
 * 
 */

static System::Object^ jyzo(System::Object^ n, System::Object^ nt, [InteropServices::Optional]System::Object^ rj0, [InteropServices::Optional]System::Object^ rj1, [InteropServices::Optional]System::Object^ ry0, [InteropServices::Optional]System::Object^ ry1) {
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_nt;
  System::Object^ __pyx_v_rj0 = nullptr;
  System::Object^ __pyx_v_rj1 = nullptr;
  System::Object^ __pyx_v_ry0 = nullptr;
  System::Object^ __pyx_v_ry1 = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_rj0_;
  NumpyDotNet::ndarray^ __pyx_v_rj1_;
  NumpyDotNet::ndarray^ __pyx_v_ry0_;
  NumpyDotNet::ndarray^ __pyx_v_ry1_;
  __pyx_t_5numpy_npy_intp __pyx_v_rj0_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_rj1_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_ry0_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_ry1_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = __site_cvt_1320_0->Target(__site_cvt_1320_0, n);
  __pyx_v_nt = __site_cvt_1320_0_1->Target(__site_cvt_1320_0_1, nt);
  if (dynamic_cast<System::Reflection::Missing^>(rj0) == nullptr) {
    __pyx_v_rj0 = rj0;
  } else {
    __pyx_v_rj0 = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(rj1) == nullptr) {
    __pyx_v_rj1 = rj1;
  } else {
    __pyx_v_rj1 = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ry0) == nullptr) {
    __pyx_v_ry0 = ry0;
  } else {
    __pyx_v_ry0 = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ry1) == nullptr) {
    __pyx_v_ry1 = ry1;
  } else {
    __pyx_v_ry1 = ((System::Object^)nullptr);
  }
  __pyx_v_rj0_ = nullptr;
  __pyx_v_rj1_ = nullptr;
  __pyx_v_ry0_ = nullptr;
  __pyx_v_ry1_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1342
 *     cdef np.ndarray rj0_, rj1_, ry0_, ry1_
 *     cdef np.npy_intp rj0_shape[1], rj1_shape[1], ry0_shape[1], ry1_shape[1]
 *     if not (n >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     if not (nt > 0):
 */
  __pyx_t_1 = (!(__pyx_v_n >= 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1343
 *     cdef np.npy_intp rj0_shape[1], rj1_shape[1], ry0_shape[1], ry1_shape[1]
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')             # <<<<<<<<<<<<<<
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1343_24->Target(__site_call1_1343_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1344
 *     if not (n >= 0):
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     if not (nt > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     rj0_shape[0] = nt
 */
  __pyx_t_1 = (!(__pyx_v_nt > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1345
 *         raise ValueError('Condition on arguments not satisfied: n >= 0')
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')             # <<<<<<<<<<<<<<
 *     rj0_shape[0] = nt
 *     rj0_ = fw_asfortranarray(rj0, fwr_dbl_t_enum, 1, rj0_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1345_24->Target(__site_call1_1345_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: nt > 0"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1346
 *     if not (nt > 0):
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     rj0_shape[0] = nt             # <<<<<<<<<<<<<<
 *     rj0_ = fw_asfortranarray(rj0, fwr_dbl_t_enum, 1, rj0_shape, False, True)
 *     if nt != rj0_shape[0]:
 */
  (__pyx_v_rj0_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1347
 *         raise ValueError('Condition on arguments not satisfied: nt > 0')
 *     rj0_shape[0] = nt
 *     rj0_ = fw_asfortranarray(rj0, fwr_dbl_t_enum, 1, rj0_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != rj0_shape[0]:
 *         raise ValueError("(nt == rj0.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_rj0, NPY_DOUBLE, 1, __pyx_v_rj0_shape, 0, 1, nullptr)); 
  __pyx_v_rj0_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1348
 *     rj0_shape[0] = nt
 *     rj0_ = fw_asfortranarray(rj0, fwr_dbl_t_enum, 1, rj0_shape, False, True)
 *     if nt != rj0_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == rj0.shape[0]) not satisifed")
 *     rj1_shape[0] = nt
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_rj0_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1349
 *     rj0_ = fw_asfortranarray(rj0, fwr_dbl_t_enum, 1, rj0_shape, False, True)
 *     if nt != rj0_shape[0]:
 *         raise ValueError("(nt == rj0.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     rj1_shape[0] = nt
 *     rj1_ = fw_asfortranarray(rj1, fwr_dbl_t_enum, 1, rj1_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1349_24->Target(__site_call1_1349_24, __pyx_context, __pyx_t_2, ((System::Object^)"(nt == rj0.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1350
 *     if nt != rj0_shape[0]:
 *         raise ValueError("(nt == rj0.shape[0]) not satisifed")
 *     rj1_shape[0] = nt             # <<<<<<<<<<<<<<
 *     rj1_ = fw_asfortranarray(rj1, fwr_dbl_t_enum, 1, rj1_shape, False, True)
 *     if nt != rj1_shape[0]:
 */
  (__pyx_v_rj1_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1351
 *         raise ValueError("(nt == rj0.shape[0]) not satisifed")
 *     rj1_shape[0] = nt
 *     rj1_ = fw_asfortranarray(rj1, fwr_dbl_t_enum, 1, rj1_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != rj1_shape[0]:
 *         raise ValueError("(nt == rj1.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_rj1, NPY_DOUBLE, 1, __pyx_v_rj1_shape, 0, 1, nullptr)); 
  __pyx_v_rj1_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1352
 *     rj1_shape[0] = nt
 *     rj1_ = fw_asfortranarray(rj1, fwr_dbl_t_enum, 1, rj1_shape, False, True)
 *     if nt != rj1_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == rj1.shape[0]) not satisifed")
 *     ry0_shape[0] = nt
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_rj1_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1353
 *     rj1_ = fw_asfortranarray(rj1, fwr_dbl_t_enum, 1, rj1_shape, False, True)
 *     if nt != rj1_shape[0]:
 *         raise ValueError("(nt == rj1.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     ry0_shape[0] = nt
 *     ry0_ = fw_asfortranarray(ry0, fwr_dbl_t_enum, 1, ry0_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1353_24->Target(__site_call1_1353_24, __pyx_context, __pyx_t_3, ((System::Object^)"(nt == rj1.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1354
 *     if nt != rj1_shape[0]:
 *         raise ValueError("(nt == rj1.shape[0]) not satisifed")
 *     ry0_shape[0] = nt             # <<<<<<<<<<<<<<
 *     ry0_ = fw_asfortranarray(ry0, fwr_dbl_t_enum, 1, ry0_shape, False, True)
 *     if nt != ry0_shape[0]:
 */
  (__pyx_v_ry0_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1355
 *         raise ValueError("(nt == rj1.shape[0]) not satisifed")
 *     ry0_shape[0] = nt
 *     ry0_ = fw_asfortranarray(ry0, fwr_dbl_t_enum, 1, ry0_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != ry0_shape[0]:
 *         raise ValueError("(nt == ry0.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_ry0, NPY_DOUBLE, 1, __pyx_v_ry0_shape, 0, 1, nullptr)); 
  __pyx_v_ry0_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1356
 *     ry0_shape[0] = nt
 *     ry0_ = fw_asfortranarray(ry0, fwr_dbl_t_enum, 1, ry0_shape, False, True)
 *     if nt != ry0_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == ry0.shape[0]) not satisifed")
 *     ry1_shape[0] = nt
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_ry0_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1357
 *     ry0_ = fw_asfortranarray(ry0, fwr_dbl_t_enum, 1, ry0_shape, False, True)
 *     if nt != ry0_shape[0]:
 *         raise ValueError("(nt == ry0.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     ry1_shape[0] = nt
 *     ry1_ = fw_asfortranarray(ry1, fwr_dbl_t_enum, 1, ry1_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1357_24->Target(__site_call1_1357_24, __pyx_context, __pyx_t_2, ((System::Object^)"(nt == ry0.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1358
 *     if nt != ry0_shape[0]:
 *         raise ValueError("(nt == ry0.shape[0]) not satisifed")
 *     ry1_shape[0] = nt             # <<<<<<<<<<<<<<
 *     ry1_ = fw_asfortranarray(ry1, fwr_dbl_t_enum, 1, ry1_shape, False, True)
 *     if nt != ry1_shape[0]:
 */
  (__pyx_v_ry1_shape[0]) = __pyx_v_nt;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1359
 *         raise ValueError("(nt == ry0.shape[0]) not satisifed")
 *     ry1_shape[0] = nt
 *     ry1_ = fw_asfortranarray(ry1, fwr_dbl_t_enum, 1, ry1_shape, False, True)             # <<<<<<<<<<<<<<
 *     if nt != ry1_shape[0]:
 *         raise ValueError("(nt == ry1.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_ry1, NPY_DOUBLE, 1, __pyx_v_ry1_shape, 0, 1, nullptr)); 
  __pyx_v_ry1_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1360
 *     ry1_shape[0] = nt
 *     ry1_ = fw_asfortranarray(ry1, fwr_dbl_t_enum, 1, ry1_shape, False, True)
 *     if nt != ry1_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(nt == ry1.shape[0]) not satisifed")
 *     fc.jyzo(&n, &nt, <fwr_dbl_t*>np.PyArray_DATA(rj0_), <fwr_dbl_t*>np.PyArray_DATA(rj1_), <fwr_dbl_t*>np.PyArray_DATA(ry0_), <fwr_dbl_t*>np.PyArray_DATA(ry1_))
 */
  __pyx_t_1 = (__pyx_v_nt != (__pyx_v_ry1_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1361
 *     ry1_ = fw_asfortranarray(ry1, fwr_dbl_t_enum, 1, ry1_shape, False, True)
 *     if nt != ry1_shape[0]:
 *         raise ValueError("(nt == ry1.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.jyzo(&n, &nt, <fwr_dbl_t*>np.PyArray_DATA(rj0_), <fwr_dbl_t*>np.PyArray_DATA(rj1_), <fwr_dbl_t*>np.PyArray_DATA(ry0_), <fwr_dbl_t*>np.PyArray_DATA(ry1_))
 *     return (rj0_, rj1_, ry0_, ry1_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1361_24->Target(__site_call1_1361_24, __pyx_context, __pyx_t_3, ((System::Object^)"(nt == ry1.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1362
 *     if nt != ry1_shape[0]:
 *         raise ValueError("(nt == ry1.shape[0]) not satisifed")
 *     fc.jyzo(&n, &nt, <fwr_dbl_t*>np.PyArray_DATA(rj0_), <fwr_dbl_t*>np.PyArray_DATA(rj1_), <fwr_dbl_t*>np.PyArray_DATA(ry0_), <fwr_dbl_t*>np.PyArray_DATA(ry1_))             # <<<<<<<<<<<<<<
 *     return (rj0_, rj1_, ry0_, ry1_,)
 * 
 */
  F_FUNC(jyzo,JYZO)((&__pyx_v_n), (&__pyx_v_nt), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rj0_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rj1_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_ry0_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_ry1_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1363
 *         raise ValueError("(nt == ry1.shape[0]) not satisifed")
 *     fc.jyzo(&n, &nt, <fwr_dbl_t*>np.PyArray_DATA(rj0_), <fwr_dbl_t*>np.PyArray_DATA(rj1_), <fwr_dbl_t*>np.PyArray_DATA(ry0_), <fwr_dbl_t*>np.PyArray_DATA(ry1_))
 *     return (rj0_, rj1_, ry0_, ry1_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_rj0_), ((System::Object^)__pyx_v_rj1_), ((System::Object^)__pyx_v_ry0_), ((System::Object^)__pyx_v_ry1_)});
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1366
 * 
 * 
 * def rctj(fwi_integer_t n, fwr_dbl_t x, object rj=None, object dj=None):             # <<<<<<<<<<<<<<
 *     """rctj(n, x[, rj, dj]) -> (nm, rj, dj)
 * 
 */

static System::Object^ rctj(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ rj, [InteropServices::Optional]System::Object^ dj) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_rj = nullptr;
  System::Object^ __pyx_v_dj = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_rj_;
  NumpyDotNet::ndarray^ __pyx_v_dj_;
  __pyx_t_5numpy_npy_intp __pyx_v_rj_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dj_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_1366_0->Target(__site_cvt_1366_0, n);
  __pyx_v_x = __site_cvt_1366_0_1->Target(__site_cvt_1366_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(rj) == nullptr) {
    __pyx_v_rj = rj;
  } else {
    __pyx_v_rj = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dj) == nullptr) {
    __pyx_v_dj = dj;
  } else {
    __pyx_v_dj = ((System::Object^)nullptr);
  }
  __pyx_v_rj_ = nullptr;
  __pyx_v_dj_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1386
 *     cdef np.ndarray rj_, dj_
 *     cdef np.npy_intp rj_shape[1], dj_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1387
 *     cdef np.npy_intp rj_shape[1], dj_shape[1]
 *     nm = 0
 *     if not (n > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     rj_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_n > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1388
 *     nm = 0
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')             # <<<<<<<<<<<<<<
 *     rj_shape[0] = n + 1
 *     rj_ = fw_asfortranarray(rj, fwr_dbl_t_enum, 1, rj_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1388_24->Target(__site_call1_1388_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1389
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     rj_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     rj_ = fw_asfortranarray(rj, fwr_dbl_t_enum, 1, rj_shape, False, True)
 *     if not (0 <= n + 1 <= rj_shape[0]):
 */
  (__pyx_v_rj_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1390
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     rj_shape[0] = n + 1
 *     rj_ = fw_asfortranarray(rj, fwr_dbl_t_enum, 1, rj_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= rj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= rj.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_rj, NPY_DOUBLE, 1, __pyx_v_rj_shape, 0, 1, nullptr)); 
  __pyx_v_rj_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1391
 *     rj_shape[0] = n + 1
 *     rj_ = fw_asfortranarray(rj, fwr_dbl_t_enum, 1, rj_shape, False, True)
 *     if not (0 <= n + 1 <= rj_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= rj.shape[0]) not satisifed")
 *     dj_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_rj_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1392
 *     rj_ = fw_asfortranarray(rj, fwr_dbl_t_enum, 1, rj_shape, False, True)
 *     if not (0 <= n + 1 <= rj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= rj.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dj_shape[0] = n + 1
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1392_24->Target(__site_call1_1392_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= rj.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1393
 *     if not (0 <= n + 1 <= rj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= rj.shape[0]) not satisifed")
 *     dj_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
 *     if not (0 <= n + 1 <= dj_shape[0]):
 */
  (__pyx_v_dj_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1394
 *         raise ValueError("(0 <= n + 1 <= rj.shape[0]) not satisifed")
 *     dj_shape[0] = n + 1
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= dj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_dj, NPY_DOUBLE, 1, __pyx_v_dj_shape, 0, 1, nullptr)); 
  __pyx_v_dj_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1395
 *     dj_shape[0] = n + 1
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
 *     if not (0 <= n + 1 <= dj_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")
 *     fc.rctj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(rj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_dj_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1396
 *     dj_ = fw_asfortranarray(dj, fwr_dbl_t_enum, 1, dj_shape, False, True)
 *     if not (0 <= n + 1 <= dj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.rctj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(rj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))
 *     return (nm, rj_, dj_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1396_24->Target(__site_call1_1396_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= dj.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1397
 *     if not (0 <= n + 1 <= dj_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")
 *     fc.rctj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(rj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))             # <<<<<<<<<<<<<<
 *     return (nm, rj_, dj_,)
 * 
 */
  F_FUNC(rctj,RCTJ)((&__pyx_v_n), (&__pyx_v_x), (&__pyx_v_nm), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rj_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dj_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1398
 *         raise ValueError("(0 <= n + 1 <= dj.shape[0]) not satisifed")
 *     fc.rctj(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(rj_), <fwr_dbl_t*>np.PyArray_DATA(dj_))
 *     return (nm, rj_, dj_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_nm;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, ((System::Object^)__pyx_v_rj_), ((System::Object^)__pyx_v_dj_)});
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1401
 * 
 * 
 * def herzo(fwi_integer_t n, object x=None, object w=None):             # <<<<<<<<<<<<<<
 *     """herzo(n[, x, w]) -> (x, w)
 * 
 */

static System::Object^ herzo(System::Object^ n, [InteropServices::Optional]System::Object^ x, [InteropServices::Optional]System::Object^ w) {
  fwi_integer_t __pyx_v_n;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_w = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_x_;
  NumpyDotNet::ndarray^ __pyx_v_w_;
  __pyx_t_5numpy_npy_intp __pyx_v_x_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_w_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = __site_cvt_1401_0->Target(__site_cvt_1401_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(x) == nullptr) {
    __pyx_v_x = x;
  } else {
    __pyx_v_x = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(w) == nullptr) {
    __pyx_v_w = w;
  } else {
    __pyx_v_w = ((System::Object^)nullptr);
  }
  __pyx_v_x_ = nullptr;
  __pyx_v_w_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1418
 *     cdef np.ndarray x_, w_
 *     cdef np.npy_intp x_shape[1], w_shape[1]
 *     if not (n > 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n
 */
  __pyx_t_1 = (!(__pyx_v_n > 0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1419
 *     cdef np.npy_intp x_shape[1], w_shape[1]
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')             # <<<<<<<<<<<<<<
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1419_24->Target(__site_call1_1419_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n > 0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1420
 *     if not (n > 0):
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n             # <<<<<<<<<<<<<<
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:
 */
  (__pyx_v_x_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1421
 *         raise ValueError('Condition on arguments not satisfied: n > 0')
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)             # <<<<<<<<<<<<<<
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_x, NPY_DOUBLE, 1, __pyx_v_x_shape, 0, 1, nullptr)); 
  __pyx_v_x_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1422
 *     x_shape[0] = n
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n
 */
  __pyx_t_1 = (__pyx_v_n != (__pyx_v_x_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1423
 *     x_ = fw_asfortranarray(x, fwr_dbl_t_enum, 1, x_shape, False, True)
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1423_24->Target(__site_call1_1423_24, __pyx_context, __pyx_t_3, ((System::Object^)"(n == x.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1424
 *     if n != x_shape[0]:
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n             # <<<<<<<<<<<<<<
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:
 */
  (__pyx_v_w_shape[0]) = __pyx_v_n;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1425
 *         raise ValueError("(n == x.shape[0]) not satisifed")
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)             # <<<<<<<<<<<<<<
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_w, NPY_DOUBLE, 1, __pyx_v_w_shape, 0, 1, nullptr)); 
  __pyx_v_w_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1426
 *     w_shape[0] = n
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.herzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 */
  __pyx_t_1 = (__pyx_v_n != (__pyx_v_w_shape[0]));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1427
 *     w_ = fw_asfortranarray(w, fwr_dbl_t_enum, 1, w_shape, False, True)
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.herzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 *     return (x_, w_,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1427_24->Target(__site_call1_1427_24, __pyx_context, __pyx_t_2, ((System::Object^)"(n == w.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1428
 *     if n != w_shape[0]:
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.herzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))             # <<<<<<<<<<<<<<
 *     return (x_, w_,)
 * 
 */
  F_FUNC(herzo,HERZO)((&__pyx_v_n), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_x_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_w_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1429
 *         raise ValueError("(n == w.shape[0]) not satisifed")
 *     fc.herzo(&n, <fwr_dbl_t*>np.PyArray_DATA(x_), <fwr_dbl_t*>np.PyArray_DATA(w_))
 *     return (x_, w_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_x_), ((System::Object^)__pyx_v_w_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1432
 * 
 * 
 * def sphk(fwi_integer_t n, fwr_dbl_t x, object sk=None, object dk=None):             # <<<<<<<<<<<<<<
 *     """sphk(n, x[, sk, dk]) -> (nm, sk, dk)
 * 
 */

static System::Object^ sphk(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ sk, [InteropServices::Optional]System::Object^ dk) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_sk = nullptr;
  System::Object^ __pyx_v_dk = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_sk_;
  NumpyDotNet::ndarray^ __pyx_v_dk_;
  __pyx_t_5numpy_npy_intp __pyx_v_sk_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dk_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_1432_0->Target(__site_cvt_1432_0, n);
  __pyx_v_x = __site_cvt_1432_0_1->Target(__site_cvt_1432_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(sk) == nullptr) {
    __pyx_v_sk = sk;
  } else {
    __pyx_v_sk = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dk) == nullptr) {
    __pyx_v_dk = dk;
  } else {
    __pyx_v_dk = ((System::Object^)nullptr);
  }
  __pyx_v_sk_ = nullptr;
  __pyx_v_dk_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1452
 *     cdef np.ndarray sk_, dk_
 *     cdef np.npy_intp sk_shape[1], dk_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1453
 *     cdef np.npy_intp sk_shape[1], dk_shape[1]
 *     nm = 0
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (x >= 0):
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1454
 *     nm = 0
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     if not (x >= 0):
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1454_24->Target(__site_call1_1454_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1455
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (x >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')
 *     sk_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_x >= 0.0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1456
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (x >= 0):
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')             # <<<<<<<<<<<<<<
 *     sk_shape[0] = n + 1
 *     sk_ = fw_asfortranarray(sk, fwr_dbl_t_enum, 1, sk_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1456_24->Target(__site_call1_1456_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: x >= 0"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1457
 *     if not (x >= 0):
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')
 *     sk_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     sk_ = fw_asfortranarray(sk, fwr_dbl_t_enum, 1, sk_shape, False, True)
 *     if not (0 <= n + 1 <= sk_shape[0]):
 */
  (__pyx_v_sk_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1458
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')
 *     sk_shape[0] = n + 1
 *     sk_ = fw_asfortranarray(sk, fwr_dbl_t_enum, 1, sk_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= sk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sk.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_sk, NPY_DOUBLE, 1, __pyx_v_sk_shape, 0, 1, nullptr)); 
  __pyx_v_sk_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1459
 *     sk_shape[0] = n + 1
 *     sk_ = fw_asfortranarray(sk, fwr_dbl_t_enum, 1, sk_shape, False, True)
 *     if not (0 <= n + 1 <= sk_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= sk.shape[0]) not satisifed")
 *     dk_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_sk_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1460
 *     sk_ = fw_asfortranarray(sk, fwr_dbl_t_enum, 1, sk_shape, False, True)
 *     if not (0 <= n + 1 <= sk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sk.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dk_shape[0] = n + 1
 *     dk_ = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, dk_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1460_24->Target(__site_call1_1460_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= sk.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1461
 *     if not (0 <= n + 1 <= sk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sk.shape[0]) not satisifed")
 *     dk_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     dk_ = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, dk_shape, False, True)
 *     if not (0 <= n + 1 <= dk_shape[0]):
 */
  (__pyx_v_dk_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1462
 *         raise ValueError("(0 <= n + 1 <= sk.shape[0]) not satisifed")
 *     dk_shape[0] = n + 1
 *     dk_ = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, dk_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= dk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dk.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_dk, NPY_DOUBLE, 1, __pyx_v_dk_shape, 0, 1, nullptr)); 
  __pyx_v_dk_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1463
 *     dk_shape[0] = n + 1
 *     dk_ = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, dk_shape, False, True)
 *     if not (0 <= n + 1 <= dk_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= dk.shape[0]) not satisifed")
 *     fc.sphk(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sk_), <fwr_dbl_t*>np.PyArray_DATA(dk_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_dk_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1464
 *     dk_ = fw_asfortranarray(dk, fwr_dbl_t_enum, 1, dk_shape, False, True)
 *     if not (0 <= n + 1 <= dk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dk.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.sphk(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sk_), <fwr_dbl_t*>np.PyArray_DATA(dk_))
 *     return (nm, sk_, dk_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1464_24->Target(__site_call1_1464_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= dk.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1465
 *     if not (0 <= n + 1 <= dk_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dk.shape[0]) not satisifed")
 *     fc.sphk(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sk_), <fwr_dbl_t*>np.PyArray_DATA(dk_))             # <<<<<<<<<<<<<<
 *     return (nm, sk_, dk_,)
 * 
 */
  F_FUNC(sphk,SPHK)((&__pyx_v_n), (&__pyx_v_x), (&__pyx_v_nm), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_sk_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dk_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1466
 *         raise ValueError("(0 <= n + 1 <= dk.shape[0]) not satisifed")
 *     fc.sphk(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sk_), <fwr_dbl_t*>np.PyArray_DATA(dk_))
 *     return (nm, sk_, dk_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = __pyx_v_nm;
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, ((System::Object^)__pyx_v_sk_), ((System::Object^)__pyx_v_dk_)});
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1469
 * 
 * 
 * def pbvv(fwr_dbl_t v, fwr_dbl_t x, object vv=None, object vp=None):             # <<<<<<<<<<<<<<
 *     """pbvv(v, x[, vv, vp]) -> (vv, vp, pvf, pvd)
 * 
 */

static System::Object^ pbvv(System::Object^ v, System::Object^ x, [InteropServices::Optional]System::Object^ vv, [InteropServices::Optional]System::Object^ vp) {
  fwr_dbl_t __pyx_v_v;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_vv = nullptr;
  System::Object^ __pyx_v_vp = nullptr;
  fwr_dbl_t __pyx_v_pvf;
  fwr_dbl_t __pyx_v_pvd;
  NumpyDotNet::ndarray^ __pyx_v_vv_;
  NumpyDotNet::ndarray^ __pyx_v_vp_;
  __pyx_t_5numpy_npy_intp __pyx_v_vv_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_vp_shape[1];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  __pyx_t_5numpy_npy_intp __pyx_t_6;
  __pyx_t_5numpy_npy_intp __pyx_t_7;
  __pyx_v_v = __site_cvt_1469_0->Target(__site_cvt_1469_0, v);
  __pyx_v_x = __site_cvt_1469_0_1->Target(__site_cvt_1469_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(vv) == nullptr) {
    __pyx_v_vv = vv;
  } else {
    __pyx_v_vv = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(vp) == nullptr) {
    __pyx_v_vp = vp;
  } else {
    __pyx_v_vp = ((System::Object^)nullptr);
  }
  __pyx_v_vv_ = nullptr;
  __pyx_v_vp_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1490
 *     cdef np.ndarray vv_, vp_
 *     cdef np.npy_intp vv_shape[1], vp_shape[1]
 *     pvf = 0             # <<<<<<<<<<<<<<
 *     pvd = 0
 *     if not ((abs(<int>v) + 2) >= 2):
 */
  __pyx_v_pvf = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1491
 *     cdef np.npy_intp vv_shape[1], vp_shape[1]
 *     pvf = 0
 *     pvd = 0             # <<<<<<<<<<<<<<
 *     if not ((abs(<int>v) + 2) >= 2):
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
 */
  __pyx_v_pvd = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1492
 *     pvf = 0
 *     pvd = 0
 *     if not ((abs(<int>v) + 2) >= 2):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
 *     vv_shape[0] = abs(<int>v) + 2
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_2 = ((int)__pyx_v_v);
  __pyx_t_3 = __site_call1_1492_16->Target(__site_call1_1492_16, __pyx_context, __pyx_t_1, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_add_1492_25->Target(__site_op_add_1492_25, __pyx_t_3, __pyx_int_2);
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_ge_1492_30->Target(__site_op_ge_1492_30, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_1492_30->Target(__site_istrue_1492_30, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1493
 *     pvd = 0
 *     if not ((abs(<int>v) + 2) >= 2):
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')             # <<<<<<<<<<<<<<
 *     vv_shape[0] = abs(<int>v) + 2
 *     vv_ = fw_asfortranarray(vv, fwr_dbl_t_enum, 1, vv_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1493_24->Target(__site_call1_1493_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1494
 *     if not ((abs(<int>v) + 2) >= 2):
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
 *     vv_shape[0] = abs(<int>v) + 2             # <<<<<<<<<<<<<<
 *     vv_ = fw_asfortranarray(vv, fwr_dbl_t_enum, 1, vv_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= vv_shape[0]):
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_3 = ((int)__pyx_v_v);
  __pyx_t_1 = __site_call1_1494_21->Target(__site_call1_1494_21, __pyx_context, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_add_1494_30->Target(__site_op_add_1494_30, __pyx_t_1, __pyx_int_2);
  __pyx_t_1 = nullptr;
  __pyx_t_6 = __site_cvt___pyx_t_5numpy_npy_intp_1494_30->Target(__site_cvt___pyx_t_5numpy_npy_intp_1494_30, __pyx_t_3);
  __pyx_t_3 = nullptr;
  (__pyx_v_vv_shape[0]) = __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1495
 *         raise ValueError('Condition on arguments not satisfied: (abs(<int>v) + 2) >= 2')
 *     vv_shape[0] = abs(<int>v) + 2
 *     vv_ = fw_asfortranarray(vv, fwr_dbl_t_enum, 1, vv_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= abs(<int>v) + 2 <= vv_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vv.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_vv, NPY_DOUBLE, 1, __pyx_v_vv_shape, 0, 1, nullptr)); 
  __pyx_v_vv_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1496
 *     vv_shape[0] = abs(<int>v) + 2
 *     vv_ = fw_asfortranarray(vv, fwr_dbl_t_enum, 1, vv_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= vv_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vv.shape[0]) not satisifed")
 *     vp_shape[0] = abs(<int>v) + 2
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_1 = ((int)__pyx_v_v);
  __pyx_t_2 = __site_call1_1496_20->Target(__site_call1_1496_20, __pyx_context, __pyx_t_3, __pyx_t_1);
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_add_1496_29->Target(__site_op_add_1496_29, __pyx_t_2, __pyx_int_2);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_le_1496_14->Target(__site_op_le_1496_14, __pyx_int_0, __pyx_t_1);
  if (__pyx_t_2) {
    __pyx_t_3 = (__pyx_v_vv_shape[0]);
    __pyx_t_2 = __site_op_le_1496_33->Target(__site_op_le_1496_33, __pyx_t_1, __pyx_t_3);
    __pyx_t_3 = nullptr;
  }
  __pyx_t_1 = nullptr;
  __pyx_t_5 = __site_istrue_1496_14->Target(__site_istrue_1496_14, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = (!__pyx_t_5);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1497
 *     vv_ = fw_asfortranarray(vv, fwr_dbl_t_enum, 1, vv_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= vv_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vv.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     vp_shape[0] = abs(<int>v) + 2
 *     vp_ = fw_asfortranarray(vp, fwr_dbl_t_enum, 1, vp_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_1497_24->Target(__site_call1_1497_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= abs(<int>v) + 2 <= vv.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1498
 *     if not (0 <= abs(<int>v) + 2 <= vv_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vv.shape[0]) not satisifed")
 *     vp_shape[0] = abs(<int>v) + 2             # <<<<<<<<<<<<<<
 *     vp_ = fw_asfortranarray(vp, fwr_dbl_t_enum, 1, vp_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= vp_shape[0]):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_2 = ((int)__pyx_v_v);
  __pyx_t_3 = __site_call1_1498_21->Target(__site_call1_1498_21, __pyx_context, __pyx_t_1, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_op_add_1498_30->Target(__site_op_add_1498_30, __pyx_t_3, __pyx_int_2);
  __pyx_t_3 = nullptr;
  __pyx_t_7 = __site_cvt___pyx_t_5numpy_npy_intp_1498_30->Target(__site_cvt___pyx_t_5numpy_npy_intp_1498_30, __pyx_t_2);
  __pyx_t_2 = nullptr;
  (__pyx_v_vp_shape[0]) = __pyx_t_7;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1499
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vv.shape[0]) not satisifed")
 *     vp_shape[0] = abs(<int>v) + 2
 *     vp_ = fw_asfortranarray(vp, fwr_dbl_t_enum, 1, vp_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= abs(<int>v) + 2 <= vp_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vp.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_vp, NPY_DOUBLE, 1, __pyx_v_vp_shape, 0, 1, nullptr)); 
  __pyx_v_vp_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1500
 *     vp_shape[0] = abs(<int>v) + 2
 *     vp_ = fw_asfortranarray(vp, fwr_dbl_t_enum, 1, vp_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= vp_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vp.shape[0]) not satisifed")
 *     fc.pbvv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(vv_), <fwr_dbl_t*>np.PyArray_DATA(vp_), &pvf, &pvd)
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "abs");
  __pyx_t_3 = ((int)__pyx_v_v);
  __pyx_t_1 = __site_call1_1500_20->Target(__site_call1_1500_20, __pyx_context, __pyx_t_2, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_3 = __site_op_add_1500_29->Target(__site_op_add_1500_29, __pyx_t_1, __pyx_int_2);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_le_1500_14->Target(__site_op_le_1500_14, __pyx_int_0, __pyx_t_3);
  if (__pyx_t_1) {
    __pyx_t_2 = (__pyx_v_vp_shape[0]);
    __pyx_t_1 = __site_op_le_1500_33->Target(__site_op_le_1500_33, __pyx_t_3, __pyx_t_2);
    __pyx_t_2 = nullptr;
  }
  __pyx_t_3 = nullptr;
  __pyx_t_4 = __site_istrue_1500_14->Target(__site_istrue_1500_14, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1501
 *     vp_ = fw_asfortranarray(vp, fwr_dbl_t_enum, 1, vp_shape, False, True)
 *     if not (0 <= abs(<int>v) + 2 <= vp_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vp.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.pbvv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(vv_), <fwr_dbl_t*>np.PyArray_DATA(vp_), &pvf, &pvd)
 *     return (vv_, vp_, pvf, pvd,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1501_24->Target(__site_call1_1501_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= abs(<int>v) + 2 <= vp.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1502
 *     if not (0 <= abs(<int>v) + 2 <= vp_shape[0]):
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vp.shape[0]) not satisifed")
 *     fc.pbvv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(vv_), <fwr_dbl_t*>np.PyArray_DATA(vp_), &pvf, &pvd)             # <<<<<<<<<<<<<<
 *     return (vv_, vp_, pvf, pvd,)
 * 
 */
  F_FUNC(pbvv,PBVV)((&__pyx_v_v), (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_vv_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_vp_)), (&__pyx_v_pvf), (&__pyx_v_pvd));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1503
 *         raise ValueError("(0 <= abs(<int>v) + 2 <= vp.shape[0]) not satisifed")
 *     fc.pbvv(&v, &x, <fwr_dbl_t*>np.PyArray_DATA(vv_), <fwr_dbl_t*>np.PyArray_DATA(vp_), &pvf, &pvd)
 *     return (vv_, vp_, pvf, pvd,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_pvf;
  __pyx_t_1 = __pyx_v_pvd;
  __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_vv_), ((System::Object^)__pyx_v_vp_), __pyx_t_3, __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1506
 * 
 * 
 * def clqmn(fwi_integer_t m, fwi_integer_t n, fwc_complex_x16_t z, object cqm=None, object cqd=None):             # <<<<<<<<<<<<<<
 *     """clqmn(m, n, z[, cqm, cqd]) -> (cqm, cqd)
 * 
 */

static System::Object^ clqmn(System::Object^ m, System::Object^ n, System::Object^ z, [InteropServices::Optional]System::Object^ cqm, [InteropServices::Optional]System::Object^ cqd) {
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  __pyx_t_double_complex __pyx_v_z;
  System::Object^ __pyx_v_cqm = nullptr;
  System::Object^ __pyx_v_cqd = nullptr;
  fwi_integer_t __pyx_v_mm;
  fwr_dbl_t __pyx_v_x_f;
  fwr_dbl_t __pyx_v_y_f;
  NumpyDotNet::ndarray^ __pyx_v_cqm_;
  NumpyDotNet::ndarray^ __pyx_v_cqd_;
  __pyx_t_5numpy_npy_intp __pyx_v_cqm_shape[2];
  __pyx_t_5numpy_npy_intp __pyx_v_cqd_shape[2];
  System::Object^ __pyx_r = nullptr;
  System::Numerics::Complex __pyx_t_1;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  __pyx_v_m = __site_cvt_1506_0->Target(__site_cvt_1506_0, m);
  __pyx_v_n = __site_cvt_1506_0_1->Target(__site_cvt_1506_0_1, n);
  __pyx_t_1 = IronPython::Runtime::Converter::ConvertToComplex(z);
  __pyx_v_z.real(__pyx_t_1.Real);
  __pyx_v_z.imag(__pyx_t_1.Imaginary);
  if (dynamic_cast<System::Reflection::Missing^>(cqm) == nullptr) {
    __pyx_v_cqm = cqm;
  } else {
    __pyx_v_cqm = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(cqd) == nullptr) {
    __pyx_v_cqd = cqd;
  } else {
    __pyx_v_cqd = ((System::Object^)nullptr);
  }
  __pyx_v_cqm_ = nullptr;
  __pyx_v_cqd_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1527
 *     cdef np.ndarray cqm_, cqd_
 *     cdef np.npy_intp cqm_shape[2], cqd_shape[2]
 *     x_f = z.real             # <<<<<<<<<<<<<<
 *     y_f = z.imag
 *     if not (m >= 1):
 */
  __pyx_v_x_f = __Pyx_CREAL(__pyx_v_z);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1528
 *     cdef np.npy_intp cqm_shape[2], cqd_shape[2]
 *     x_f = z.real
 *     y_f = z.imag             # <<<<<<<<<<<<<<
 *     if not (m >= 1):
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')
 */
  __pyx_v_y_f = __Pyx_CIMAG(__pyx_v_z);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1529
 *     x_f = z.real
 *     y_f = z.imag
 *     if not (m >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')
 *     if not (n >= 1):
 */
  __pyx_t_2 = (!(__pyx_v_m >= 1));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1530
 *     y_f = z.imag
 *     if not (m >= 1):
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1530_24->Target(__site_call1_1530_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: m >= 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1531
 *     if not (m >= 1):
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     mm = m
 */
  __pyx_t_2 = (!(__pyx_v_n >= 1));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1532
 *         raise ValueError('Condition on arguments not satisfied: m >= 1')
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     mm = m
 *     cqm_shape[0] = mm - 0 + 1; cqm_shape[1] = n - 0 + 1
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1532_24->Target(__site_call1_1532_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1533
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     mm = m             # <<<<<<<<<<<<<<
 *     cqm_shape[0] = mm - 0 + 1; cqm_shape[1] = n - 0 + 1
 *     cqm_ = fw_asfortranarray(cqm, fwc_complex_x16_t_enum, 2, cqm_shape, False, True)
 */
  __pyx_v_mm = __pyx_v_m;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1534
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     mm = m
 *     cqm_shape[0] = mm - 0 + 1; cqm_shape[1] = n - 0 + 1             # <<<<<<<<<<<<<<
 *     cqm_ = fw_asfortranarray(cqm, fwc_complex_x16_t_enum, 2, cqm_shape, False, True)
 *     if mm - 0 + 1 != cqm_shape[0]:
 */
  (__pyx_v_cqm_shape[0]) = ((__pyx_v_mm - 0) + 1);
  (__pyx_v_cqm_shape[1]) = ((__pyx_v_n - 0) + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1535
 *     mm = m
 *     cqm_shape[0] = mm - 0 + 1; cqm_shape[1] = n - 0 + 1
 *     cqm_ = fw_asfortranarray(cqm, fwc_complex_x16_t_enum, 2, cqm_shape, False, True)             # <<<<<<<<<<<<<<
 *     if mm - 0 + 1 != cqm_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == cqm.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cqm, NPY_CDOUBLE, 2, __pyx_v_cqm_shape, 0, 1, nullptr)); 
  __pyx_v_cqm_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1536
 *     cqm_shape[0] = mm - 0 + 1; cqm_shape[1] = n - 0 + 1
 *     cqm_ = fw_asfortranarray(cqm, fwc_complex_x16_t_enum, 2, cqm_shape, False, True)
 *     if mm - 0 + 1 != cqm_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(mm - 0 + 1 == cqm.shape[0]) not satisifed")
 *     if n - 0 + 1 != cqm_shape[1]:
 */
  __pyx_t_2 = (((__pyx_v_mm - 0) + 1) != (__pyx_v_cqm_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1537
 *     cqm_ = fw_asfortranarray(cqm, fwc_complex_x16_t_enum, 2, cqm_shape, False, True)
 *     if mm - 0 + 1 != cqm_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == cqm.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n - 0 + 1 != cqm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cqm.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1537_24->Target(__site_call1_1537_24, __pyx_context, __pyx_t_3, ((System::Object^)"(mm - 0 + 1 == cqm.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1538
 *     if mm - 0 + 1 != cqm_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == cqm.shape[0]) not satisifed")
 *     if n - 0 + 1 != cqm_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n - 0 + 1 == cqm.shape[1]) not satisifed")
 *     cqd_shape[0] = mm - 0 + 1; cqd_shape[1] = n - 0 + 1
 */
  __pyx_t_2 = (((__pyx_v_n - 0) + 1) != (__pyx_v_cqm_shape[1]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1539
 *         raise ValueError("(mm - 0 + 1 == cqm.shape[0]) not satisifed")
 *     if n - 0 + 1 != cqm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cqm.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     cqd_shape[0] = mm - 0 + 1; cqd_shape[1] = n - 0 + 1
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 2, cqd_shape, False, True)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1539_24->Target(__site_call1_1539_24, __pyx_context, __pyx_t_4, ((System::Object^)"(n - 0 + 1 == cqm.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1540
 *     if n - 0 + 1 != cqm_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cqm.shape[1]) not satisifed")
 *     cqd_shape[0] = mm - 0 + 1; cqd_shape[1] = n - 0 + 1             # <<<<<<<<<<<<<<
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 2, cqd_shape, False, True)
 *     if mm - 0 + 1 != cqd_shape[0]:
 */
  (__pyx_v_cqd_shape[0]) = ((__pyx_v_mm - 0) + 1);
  (__pyx_v_cqd_shape[1]) = ((__pyx_v_n - 0) + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1541
 *         raise ValueError("(n - 0 + 1 == cqm.shape[1]) not satisifed")
 *     cqd_shape[0] = mm - 0 + 1; cqd_shape[1] = n - 0 + 1
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 2, cqd_shape, False, True)             # <<<<<<<<<<<<<<
 *     if mm - 0 + 1 != cqd_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == cqd.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_cqd, NPY_CDOUBLE, 2, __pyx_v_cqd_shape, 0, 1, nullptr)); 
  __pyx_v_cqd_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1542
 *     cqd_shape[0] = mm - 0 + 1; cqd_shape[1] = n - 0 + 1
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 2, cqd_shape, False, True)
 *     if mm - 0 + 1 != cqd_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(mm - 0 + 1 == cqd.shape[0]) not satisifed")
 *     if n - 0 + 1 != cqd_shape[1]:
 */
  __pyx_t_2 = (((__pyx_v_mm - 0) + 1) != (__pyx_v_cqd_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1543
 *     cqd_ = fw_asfortranarray(cqd, fwc_complex_x16_t_enum, 2, cqd_shape, False, True)
 *     if mm - 0 + 1 != cqd_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == cqd.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if n - 0 + 1 != cqd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cqd.shape[1]) not satisifed")
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1543_24->Target(__site_call1_1543_24, __pyx_context, __pyx_t_3, ((System::Object^)"(mm - 0 + 1 == cqd.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1544
 *     if mm - 0 + 1 != cqd_shape[0]:
 *         raise ValueError("(mm - 0 + 1 == cqd.shape[0]) not satisifed")
 *     if n - 0 + 1 != cqd_shape[1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n - 0 + 1 == cqd.shape[1]) not satisifed")
 *     fc.clqmn(&mm, &m, &n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqm_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))
 */
  __pyx_t_2 = (((__pyx_v_n - 0) + 1) != (__pyx_v_cqd_shape[1]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1545
 *         raise ValueError("(mm - 0 + 1 == cqd.shape[0]) not satisifed")
 *     if n - 0 + 1 != cqd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cqd.shape[1]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.clqmn(&mm, &m, &n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqm_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))
 *     return (cqm_, cqd_,)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1545_24->Target(__site_call1_1545_24, __pyx_context, __pyx_t_4, ((System::Object^)"(n - 0 + 1 == cqd.shape[1]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1546
 *     if n - 0 + 1 != cqd_shape[1]:
 *         raise ValueError("(n - 0 + 1 == cqd.shape[1]) not satisifed")
 *     fc.clqmn(&mm, &m, &n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqm_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))             # <<<<<<<<<<<<<<
 *     return (cqm_, cqd_,)
 * 
 */
  F_FUNC(clqmn,CLQMN)((&__pyx_v_mm), (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_x_f), (&__pyx_v_y_f), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cqm_)), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_cqd_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1547
 *         raise ValueError("(n - 0 + 1 == cqd.shape[1]) not satisifed")
 *     fc.clqmn(&mm, &m, &n, &x_f, &y_f, <fwc_complex_x16_t*>np.PyArray_DATA(cqm_), <fwc_complex_x16_t*>np.PyArray_DATA(cqd_))
 *     return (cqm_, cqd_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_cqm_), ((System::Object^)__pyx_v_cqd_)});
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1550
 * 
 * 
 * def segv(fwi_integer_t m, fwi_integer_t n, fwr_dbl_t c, fwi_integer_t kd, object eg=None):             # <<<<<<<<<<<<<<
 *     """segv(m, n, c, kd[, eg]) -> (cv, eg)
 * 
 */

static System::Object^ segv(System::Object^ m, System::Object^ n, System::Object^ c, System::Object^ kd, [InteropServices::Optional]System::Object^ eg) {
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_c;
  fwi_integer_t __pyx_v_kd;
  System::Object^ __pyx_v_eg = nullptr;
  fwr_dbl_t __pyx_v_cv;
  NumpyDotNet::ndarray^ __pyx_v_eg_;
  __pyx_t_5numpy_npy_intp __pyx_v_eg_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  long __pyx_t_6;
  __pyx_v_m = __site_cvt_1550_0->Target(__site_cvt_1550_0, m);
  __pyx_v_n = __site_cvt_1550_0_1->Target(__site_cvt_1550_0_1, n);
  __pyx_v_c = __site_cvt_1550_0_2->Target(__site_cvt_1550_0_2, c);
  __pyx_v_kd = __site_cvt_1550_0_3->Target(__site_cvt_1550_0_3, kd);
  if (dynamic_cast<System::Reflection::Missing^>(eg) == nullptr) {
    __pyx_v_eg = eg;
  } else {
    __pyx_v_eg = ((System::Object^)nullptr);
  }
  __pyx_v_eg_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1570
 *     cdef np.ndarray eg_
 *     cdef np.npy_intp eg_shape[1]
 *     cv = 0             # <<<<<<<<<<<<<<
 *     if not ((n >= m) and ((n - m) < 199)):
 *         raise ValueError('Condition on arguments not satisfied: (n >= m) and ((n - m) < 199)')
 */
  __pyx_v_cv = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1571
 *     cdef np.npy_intp eg_shape[1]
 *     cv = 0
 *     if not ((n >= m) and ((n - m) < 199)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (n >= m) and ((n - m) < 199)')
 *     if not ((kd == -1) or (kd == 1)):
 */
  __pyx_t_1 = (__pyx_v_n >= __pyx_v_m);
  if (__pyx_t_1) {
    __pyx_t_2 = ((__pyx_v_n - __pyx_v_m) < 199);
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1572
 *     cv = 0
 *     if not ((n >= m) and ((n - m) < 199)):
 *         raise ValueError('Condition on arguments not satisfied: (n >= m) and ((n - m) < 199)')             # <<<<<<<<<<<<<<
 *     if not ((kd == -1) or (kd == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_1572_24->Target(__site_call1_1572_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: (n >= m) and ((n - m) < 199)"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1573
 *     if not ((n >= m) and ((n - m) < 199)):
 *         raise ValueError('Condition on arguments not satisfied: (n >= m) and ((n - m) < 199)')
 *     if not ((kd == -1) or (kd == 1)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
 *     eg_shape[0] = n - m + 2
 */
  switch (__pyx_v_kd) {
    case -1:
    case 1:
    __pyx_t_1 = 1;
    break;
    default:
    __pyx_t_1 = 0;
    break;
  }
  __pyx_t_3 = (!__pyx_t_1);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1574
 *         raise ValueError('Condition on arguments not satisfied: (n >= m) and ((n - m) < 199)')
 *     if not ((kd == -1) or (kd == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')             # <<<<<<<<<<<<<<
 *     eg_shape[0] = n - m + 2
 *     eg_ = fw_asfortranarray(eg, fwr_dbl_t_enum, 1, eg_shape, False, True)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_1574_24->Target(__site_call1_1574_24, __pyx_context, __pyx_t_5, ((System::Object^)"Condition on arguments not satisfied: (kd == -1) or (kd == 1)"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1575
 *     if not ((kd == -1) or (kd == 1)):
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
 *     eg_shape[0] = n - m + 2             # <<<<<<<<<<<<<<
 *     eg_ = fw_asfortranarray(eg, fwr_dbl_t_enum, 1, eg_shape, False, True)
 *     if not (0 <= n - m + 2 <= eg_shape[0]):
 */
  (__pyx_v_eg_shape[0]) = ((__pyx_v_n - __pyx_v_m) + 2);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1576
 *         raise ValueError('Condition on arguments not satisfied: (kd == -1) or (kd == 1)')
 *     eg_shape[0] = n - m + 2
 *     eg_ = fw_asfortranarray(eg, fwr_dbl_t_enum, 1, eg_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n - m + 2 <= eg_shape[0]):
 *         raise ValueError("(0 <= n - m + 2 <= eg.shape[0]) not satisifed")
 */
  __pyx_t_4 = ((System::Object^)fw_asfortranarray(__pyx_v_eg, NPY_DOUBLE, 1, __pyx_v_eg_shape, 0, 1, nullptr)); 
  __pyx_v_eg_ = ((NumpyDotNet::ndarray^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1577
 *     eg_shape[0] = n - m + 2
 *     eg_ = fw_asfortranarray(eg, fwr_dbl_t_enum, 1, eg_shape, False, True)
 *     if not (0 <= n - m + 2 <= eg_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n - m + 2 <= eg.shape[0]) not satisifed")
 *     fc.segv(&m, &n, &c, &kd, &cv, <fwr_dbl_t*>np.PyArray_DATA(eg_))
 */
  __pyx_t_6 = ((__pyx_v_n - __pyx_v_m) + 2);
  __pyx_t_3 = (0 <= __pyx_t_6);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_t_6 <= (__pyx_v_eg_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_3);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1578
 *     eg_ = fw_asfortranarray(eg, fwr_dbl_t_enum, 1, eg_shape, False, True)
 *     if not (0 <= n - m + 2 <= eg_shape[0]):
 *         raise ValueError("(0 <= n - m + 2 <= eg.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.segv(&m, &n, &c, &kd, &cv, <fwr_dbl_t*>np.PyArray_DATA(eg_))
 *     return (cv, eg_,)
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_5 = __site_call1_1578_24->Target(__site_call1_1578_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n - m + 2 <= eg.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1579
 *     if not (0 <= n - m + 2 <= eg_shape[0]):
 *         raise ValueError("(0 <= n - m + 2 <= eg.shape[0]) not satisifed")
 *     fc.segv(&m, &n, &c, &kd, &cv, <fwr_dbl_t*>np.PyArray_DATA(eg_))             # <<<<<<<<<<<<<<
 *     return (cv, eg_,)
 * 
 */
  F_FUNC(segv,SEGV)((&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_c), (&__pyx_v_kd), (&__pyx_v_cv), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_eg_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1580
 *         raise ValueError("(0 <= n - m + 2 <= eg.shape[0]) not satisifed")
 *     fc.segv(&m, &n, &c, &kd, &cv, <fwr_dbl_t*>np.PyArray_DATA(eg_))
 *     return (cv, eg_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_5 = __pyx_v_cv;
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_5, ((System::Object^)__pyx_v_eg_)});
  __pyx_t_5 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1583
 * 
 * 
 * def sphy(fwi_integer_t n, fwr_dbl_t x, object sy=None, object dy=None):             # <<<<<<<<<<<<<<
 *     """sphy(n, x[, sy, dy]) -> (nm, sy, dy)
 * 
 */

static System::Object^ sphy(System::Object^ n, System::Object^ x, [InteropServices::Optional]System::Object^ sy, [InteropServices::Optional]System::Object^ dy) {
  fwi_integer_t __pyx_v_n;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_sy = nullptr;
  System::Object^ __pyx_v_dy = nullptr;
  fwi_integer_t __pyx_v_nm;
  NumpyDotNet::ndarray^ __pyx_v_sy_;
  NumpyDotNet::ndarray^ __pyx_v_dy_;
  __pyx_t_5numpy_npy_intp __pyx_v_sy_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_dy_shape[1];
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  long __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_n = __site_cvt_1583_0->Target(__site_cvt_1583_0, n);
  __pyx_v_x = __site_cvt_1583_0_1->Target(__site_cvt_1583_0_1, x);
  if (dynamic_cast<System::Reflection::Missing^>(sy) == nullptr) {
    __pyx_v_sy = sy;
  } else {
    __pyx_v_sy = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(dy) == nullptr) {
    __pyx_v_dy = dy;
  } else {
    __pyx_v_dy = ((System::Object^)nullptr);
  }
  __pyx_v_sy_ = nullptr;
  __pyx_v_dy_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1603
 *     cdef np.ndarray sy_, dy_
 *     cdef np.npy_intp sy_shape[1], dy_shape[1]
 *     nm = 0             # <<<<<<<<<<<<<<
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 */
  __pyx_v_nm = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1604
 *     cdef np.npy_intp sy_shape[1], dy_shape[1]
 *     nm = 0
 *     if not (n >= 1):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (x >= 0):
 */
  __pyx_t_1 = (!(__pyx_v_n >= 1));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1605
 *     nm = 0
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')             # <<<<<<<<<<<<<<
 *     if not (x >= 0):
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1605_24->Target(__site_call1_1605_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n >= 1"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1606
 *     if not (n >= 1):
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (x >= 0):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')
 *     sy_shape[0] = n + 1
 */
  __pyx_t_1 = (!(__pyx_v_x >= 0.0));
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1607
 *         raise ValueError('Condition on arguments not satisfied: n >= 1')
 *     if not (x >= 0):
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')             # <<<<<<<<<<<<<<
 *     sy_shape[0] = n + 1
 *     sy_ = fw_asfortranarray(sy, fwr_dbl_t_enum, 1, sy_shape, False, True)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1607_24->Target(__site_call1_1607_24, __pyx_context, __pyx_t_3, ((System::Object^)"Condition on arguments not satisfied: x >= 0"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1608
 *     if not (x >= 0):
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')
 *     sy_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     sy_ = fw_asfortranarray(sy, fwr_dbl_t_enum, 1, sy_shape, False, True)
 *     if not (0 <= n + 1 <= sy_shape[0]):
 */
  (__pyx_v_sy_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1609
 *         raise ValueError('Condition on arguments not satisfied: x >= 0')
 *     sy_shape[0] = n + 1
 *     sy_ = fw_asfortranarray(sy, fwr_dbl_t_enum, 1, sy_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= sy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sy.shape[0]) not satisifed")
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_sy, NPY_DOUBLE, 1, __pyx_v_sy_shape, 0, 1, nullptr)); 
  __pyx_v_sy_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1610
 *     sy_shape[0] = n + 1
 *     sy_ = fw_asfortranarray(sy, fwr_dbl_t_enum, 1, sy_shape, False, True)
 *     if not (0 <= n + 1 <= sy_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= sy.shape[0]) not satisifed")
 *     dy_shape[0] = n + 1
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_1 = (0 <= __pyx_t_4);
  if (__pyx_t_1) {
    __pyx_t_1 = (__pyx_t_4 <= (__pyx_v_sy_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1611
 *     sy_ = fw_asfortranarray(sy, fwr_dbl_t_enum, 1, sy_shape, False, True)
 *     if not (0 <= n + 1 <= sy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sy.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dy_shape[0] = n + 1
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_1611_24->Target(__site_call1_1611_24, __pyx_context, __pyx_t_2, ((System::Object^)"(0 <= n + 1 <= sy.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1612
 *     if not (0 <= n + 1 <= sy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= sy.shape[0]) not satisifed")
 *     dy_shape[0] = n + 1             # <<<<<<<<<<<<<<
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
 *     if not (0 <= n + 1 <= dy_shape[0]):
 */
  (__pyx_v_dy_shape[0]) = (__pyx_v_n + 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1613
 *         raise ValueError("(0 <= n + 1 <= sy.shape[0]) not satisifed")
 *     dy_shape[0] = n + 1
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= n + 1 <= dy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")
 */
  __pyx_t_3 = ((System::Object^)fw_asfortranarray(__pyx_v_dy, NPY_DOUBLE, 1, __pyx_v_dy_shape, 0, 1, nullptr)); 
  __pyx_v_dy_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1614
 *     dy_shape[0] = n + 1
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
 *     if not (0 <= n + 1 <= dy_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")
 *     fc.sphy(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(dy_))
 */
  __pyx_t_4 = (__pyx_v_n + 1);
  __pyx_t_5 = (0 <= __pyx_t_4);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_t_4 <= (__pyx_v_dy_shape[0]));
  }
  __pyx_t_1 = (!__pyx_t_5);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1615
 *     dy_ = fw_asfortranarray(dy, fwr_dbl_t_enum, 1, dy_shape, False, True)
 *     if not (0 <= n + 1 <= dy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.sphy(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(dy_))
 *     return (nm, sy_, dy_,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_1615_24->Target(__site_call1_1615_24, __pyx_context, __pyx_t_3, ((System::Object^)"(0 <= n + 1 <= dy.shape[0]) not satisifed"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1616
 *     if not (0 <= n + 1 <= dy_shape[0]):
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")
 *     fc.sphy(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(dy_))             # <<<<<<<<<<<<<<
 *     return (nm, sy_, dy_,)
 * 
 */
  F_FUNC(sphy,SPHY)((&__pyx_v_n), (&__pyx_v_x), (&__pyx_v_nm), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_sy_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_dy_)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1617
 *         raise ValueError("(0 <= n + 1 <= dy.shape[0]) not satisifed")
 *     fc.sphy(&n, &x, &nm, <fwr_dbl_t*>np.PyArray_DATA(sy_), <fwr_dbl_t*>np.PyArray_DATA(dy_))
 *     return (nm, sy_, dy_,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = __pyx_v_nm;
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, ((System::Object^)__pyx_v_sy_), ((System::Object^)__pyx_v_dy_)});
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1621
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

static  NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^ __pyx_v_value, int __pyx_v_typenum, int __pyx_v_ndim, __pyx_t_5numpy_intp_t *__pyx_v_coerced_shape, int __pyx_v_copy, int __pyx_v_create, ref struct __pyx_opt_args_5scipy_7special_7specfun_fw_asfortranarray ^__pyx_optional_args) {
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1624
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST             # <<<<<<<<<<<<<<
 *     cdef np.ndarray result
 *     cdef np.npy_intp * in_shape
 */
  __pyx_v_flags = (NPY_F_CONTIGUOUS | NPY_FORCECAST);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1629
 *     cdef int in_ndim
 *     cdef int i
 *     if value is None:             # <<<<<<<<<<<<<<
 *         if create:
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 */
  __pyx_t_1 = (__pyx_v_value == nullptr);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1630
 *     cdef int i
 *     if value is None:
 *         if create:             # <<<<<<<<<<<<<<
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 */
    if (__pyx_v_create) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1631
 *     if value is None:
 *         if create:
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)             # <<<<<<<<<<<<<<
 *         else:
 *             raise TypeError('Expected array but None provided')
 */
      __pyx_t_2 = PyArray_ZEROS(__pyx_v_ndim, __pyx_v_coerced_shape, __pyx_v_typenum, 1); 
      if (__pyx_t_2 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_result = ((NumpyDotNet::ndarray^)__pyx_t_2);
      __pyx_t_2 = nullptr;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1633
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 *             raise TypeError('Expected array but None provided')             # <<<<<<<<<<<<<<
 *     else:
 *         if ndim <= 1:
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
      __pyx_t_3 = __site_call1_1633_27->Target(__site_call1_1633_27, __pyx_context, __pyx_t_2, ((System::Object^)"Expected array but None provided"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
    }
    __pyx_L4:;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1635
 *             raise TypeError('Expected array but None provided')
 *     else:
 *         if ndim <= 1:             # <<<<<<<<<<<<<<
 *             # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *             flags |= np.NPY_C_CONTIGUOUS
 */
    __pyx_t_1 = (__pyx_v_ndim <= 1);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1637
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

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1638
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
        __pyx_t_5 = __site_istrue_1638_59->Target(__site_istrue_1638_59, __pyx_t_3);
        __pyx_t_3 = nullptr;
        if (__pyx_t_5) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1639
 *             flags |= np.NPY_C_CONTIGUOUS
 *         if (not copy and alignment > 1 and np.PyArray_Check(value) and
 *             (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):             # <<<<<<<<<<<<<<
 *             # mis-aligned array
 *             copy = True
 */
          if (__pyx_v_value == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_value) == nullptr) {
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

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1641
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

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1642
 *             # mis-aligned array
 *             copy = True
 *         if copy:             # <<<<<<<<<<<<<<
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 */
    if (__pyx_v_copy) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1643
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

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1644
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
    if (__pyx_t_8 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_result = ((NumpyDotNet::ndarray^)__pyx_t_8);
    __pyx_t_8 = nullptr;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1645
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)             # <<<<<<<<<<<<<<
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 */
  __pyx_t_8 = PyArray_NDIM(((System::Object^)__pyx_v_result)); 
  __pyx_t_9 = __site_cvt_int_1645_29->Target(__site_cvt_int_1645_29, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_v_in_ndim = __pyx_t_9;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1646
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:             # <<<<<<<<<<<<<<
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 */
  __pyx_t_4 = (__pyx_v_in_ndim > __pyx_v_ndim);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1647
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)             # <<<<<<<<<<<<<<
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __pyx_v_ndim;
    __pyx_t_3 = __site_op_mod_1647_60->Target(__site_op_mod_1647_60, ((System::Object^)"Dimension of array must be <= %d"), __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_1647_24->Target(__site_call1_1647_24, __pyx_context, __pyx_t_8, ((System::Object^)__pyx_t_3));
    __pyx_t_8 = nullptr;
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1648
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 */
  __pyx_v_in_shape = PyArray_DIMS(__pyx_v_result);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1649
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):             # <<<<<<<<<<<<<<
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):
 */
  __pyx_t_10 = __pyx_v_in_ndim;
  for (__pyx_t_11 = 0; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1650
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = (__pyx_v_in_shape[__pyx_v_i]);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1651
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):             # <<<<<<<<<<<<<<
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1
 */
  __pyx_t_10 = __pyx_v_ndim;
  for (__pyx_t_11 = __pyx_v_in_ndim; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1653
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1             # <<<<<<<<<<<<<<
 *     return result
 * 
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = 1;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1654
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
  __site_cvt_68_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_68_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_68_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_89_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_91_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_96_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_98_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_102_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_104_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_109_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_109_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_109_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_109_0_3 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_132_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_134_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_138_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_140_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_144_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_146_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_151_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_173_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_194_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_210_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_214_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_219_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_235_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_239_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_244_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_270_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_274_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_278_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_282_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_286_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_291_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_291_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_291_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_311_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_313_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_317_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_321_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_326_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_342_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_346_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_351_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_373_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_377_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_381_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_386_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_386_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_409_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_413_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_417_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_421_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_425_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_430_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_446_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_450_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_455_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_455_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_455_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_473_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_475_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_479_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_484_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_484_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_503_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_507_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_511_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_516_0 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_516_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_538_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_542_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_546_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_551_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_569_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_573_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_577_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_582_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_600_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_604_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_608_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_613_0 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_613_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_636_16 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_636_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_ge_636_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::GreaterThanOrEqual));
  __site_istrue_636_30 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_637_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_638_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_638_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt___pyx_t_5numpy_npy_intp_638_30 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_640_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_640_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_le_640_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_op_le_640_33 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_istrue_640_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_641_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_642_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_642_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt___pyx_t_5numpy_npy_intp_642_30 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_644_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_644_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_le_644_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_op_le_644_33 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_istrue_644_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_645_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_650_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_666_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_670_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_675_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_675_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_697_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_701_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_705_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_710_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_732_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_736_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_740_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_745_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_745_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_745_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_765_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_767_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_771_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_775_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_780_0 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_780_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_780_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_800_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_800_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_800_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_822_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_824_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_828_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_830_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_834_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_836_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_841_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_841_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_858_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_860_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_864_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_869_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_869_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_869_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_869_0_3 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_869_0_4 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_869_0_5 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_891_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_893_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_895_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_897_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_902_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_902_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_921_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_923_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_927_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_931_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_936_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_954_15 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_ge_954_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::GreaterThanOrEqual));
  __site_istrue_954_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_955_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_956_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_956_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt___pyx_t_5numpy_npy_intp_956_26 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_958_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_958_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_le_958_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_op_le_958_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_istrue_958_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_959_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_960_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_960_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt___pyx_t_5numpy_npy_intp_960_26 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_962_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_962_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_le_962_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_op_le_962_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_istrue_962_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_963_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_968_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_968_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_987_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_991_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_995_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1000_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1000_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1000_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1000_0_3 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1019_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1021_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1030_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1030_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1052_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1056_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1060_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1065_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1065_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1087_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1091_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1095_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1100_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1100_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1121_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1125_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1129_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1133_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1138_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1138_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1138_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1158_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1160_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1162_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1166_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1170_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1175_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1201_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1205_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1209_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1213_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1217_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1222_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1222_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1244_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1248_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1252_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1257_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1257_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1257_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1277_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1279_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1283_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1287_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1292_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1292_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1309_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1311_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1315_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1320_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1320_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1343_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1345_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1349_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1353_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1357_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1361_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1366_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1366_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1388_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1392_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1396_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1401_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1419_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1423_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1427_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1432_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1432_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1454_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1456_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1460_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1464_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1469_0 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1469_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1492_16 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_1492_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_ge_1492_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::GreaterThanOrEqual));
  __site_istrue_1492_30 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1493_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1494_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_1494_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt___pyx_t_5numpy_npy_intp_1494_30 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1496_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_1496_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_le_1496_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_op_le_1496_33 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_istrue_1496_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1497_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1498_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_1498_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt___pyx_t_5numpy_npy_intp_1498_30 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1500_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_add_1500_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_le_1500_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_op_le_1500_33 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_istrue_1500_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1501_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1506_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1506_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1530_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1532_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1537_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1539_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1543_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1545_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1550_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1550_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1550_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1550_0_3 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1572_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1574_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1578_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_1583_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_1583_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_1605_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1607_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1611_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1615_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_1633_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_1638_59 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1645_29 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_1647_60 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_1647_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":62
 * cimport specfun_fc as fc
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * __all__ = ['lqmn', 'clpmn', 'jdzo', 'bernob', 'bernoa', 'csphjy', 'lpmns', 'eulera', 'clqn', 'airyzo', 'eulerb', 'cva1', 'lqnb', 'lamv', 'lagzo', 'legzo', 'pbdv', 'cerzo', 'lamn', 'clpn', 'lqmns', 'chgm', 'lpmn', 'fcszo', 'aswfb', 'lqna', 'cpbdn', 'lpn', 'fcoef', 'sphi', 'rcty', 'lpni', 'cyzo', 'csphik', 'sphj', 'othpl', 'klvnzo', 'jyzo', 'rctj', 'herzo', 'sphk', 'pbvv', 'clqmn', 'segv', 'sphy']
 * cdef extern from "string.h":
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":63
 * 
 * np.import_array()
 * __all__ = ['lqmn', 'clpmn', 'jdzo', 'bernob', 'bernoa', 'csphjy', 'lpmns', 'eulera', 'clqn', 'airyzo', 'eulerb', 'cva1', 'lqnb', 'lamv', 'lagzo', 'legzo', 'pbdv', 'cerzo', 'lamn', 'clpn', 'lqmns', 'chgm', 'lpmn', 'fcszo', 'aswfb', 'lqna', 'cpbdn', 'lpn', 'fcoef', 'sphi', 'rcty', 'lpni', 'cyzo', 'csphik', 'sphj', 'othpl', 'klvnzo', 'jyzo', 'rctj', 'herzo', 'sphk', 'pbvv', 'clqmn', 'segv', 'sphy']             # <<<<<<<<<<<<<<
 * cdef extern from "string.h":
 *     void *memcpy(void *dest, void *src, size_t n)
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"lqmn"), ((System::Object^)"clpmn"), ((System::Object^)"jdzo"), ((System::Object^)"bernob"), ((System::Object^)"bernoa"), ((System::Object^)"csphjy"), ((System::Object^)"lpmns"), ((System::Object^)"eulera"), ((System::Object^)"clqn"), ((System::Object^)"airyzo"), ((System::Object^)"eulerb"), ((System::Object^)"cva1"), ((System::Object^)"lqnb"), ((System::Object^)"lamv"), ((System::Object^)"lagzo"), ((System::Object^)"legzo"), ((System::Object^)"pbdv"), ((System::Object^)"cerzo"), ((System::Object^)"lamn"), ((System::Object^)"clpn"), ((System::Object^)"lqmns"), ((System::Object^)"chgm"), ((System::Object^)"lpmn"), ((System::Object^)"fcszo"), ((System::Object^)"aswfb"), ((System::Object^)"lqna"), ((System::Object^)"cpbdn"), ((System::Object^)"lpn"), ((System::Object^)"fcoef"), ((System::Object^)"sphi"), ((System::Object^)"rcty"), ((System::Object^)"lpni"), ((System::Object^)"cyzo"), ((System::Object^)"csphik"), ((System::Object^)"sphj"), ((System::Object^)"othpl"), ((System::Object^)"klvnzo"), ((System::Object^)"jyzo"), ((System::Object^)"rctj"), ((System::Object^)"herzo"), ((System::Object^)"sphk"), ((System::Object^)"pbvv"), ((System::Object^)"clqmn"), ((System::Object^)"segv"), ((System::Object^)"sphy")});
  PythonOps::SetGlobal(__pyx_context, "__all__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\specfun.pyx":1
 * #cython: ccomplex=True             # <<<<<<<<<<<<<<
 * 
 * """The specfun module was generated with Fwrap v0.2.0dev_00843a8.
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

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
[assembly: PythonModule("scipy__special__specfun", module_specfun::typeid)];
};
