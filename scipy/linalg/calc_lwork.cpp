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
  dict["__module__"] = "scipy.linalg.calc_lwork";
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
#define __PYX_HAVE_API__scipy__linalg__calc_lwork
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "fwrap_ktp_header.h"
#include "calc_lwork_fc.h"
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

typedef System::Object^ __pyx_t_5scipy_6linalg_9fwrap_ktp_fw_bytes;
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
/* Module declarations from scipy.linalg.fwrap_ktp */
/* Module declarations from scipy.linalg.calc_lwork_fc */
/* Module declarations from scipy.linalg.calc_lwork */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate char __pyx_delegate_t_5scipy_6linalg_10calc_lwork_fw_aschar(System::Object^);
static char fw_aschar(System::Object^); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.linalg.calc_lwork"

/* Implementation of scipy.linalg.calc_lwork */
namespace clr_calc_lwork {
  public ref class module_calc_lwork sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_31_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_31_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_31_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_53_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_58_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_58_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_58_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_80_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_85_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_85_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_85_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_107_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_112_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_132_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_137_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_137_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_137_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_159_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_164_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_164_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_185_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_190_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_190_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_211_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_216_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_216_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_237_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_242_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_242_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_263_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_268_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_268_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_289_24;
static  CallSite< System::Func< CallSite^, System::Object^, char >^ >^ __site_cvt_char_298_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_encode_304_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_304_20;
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":31
 *     void *memcpy(void *dest, void *src, size_t n)
 * __all__ = ['gehrd', 'gesdd', 'gelss', 'getri', 'geev', 'heev', 'syev', 'gees', 'geqrf', 'gqr']
 * def gehrd(object prefix, fwi_integer_t n, fwi_integer_t lo, fwi_integer_t hi):             # <<<<<<<<<<<<<<
 *     """gehrd(prefix, n, lo, hi) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ gehrd(System::Object^ prefix, System::Object^ n, System::Object^ lo, System::Object^ hi) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_lo;
  fwi_integer_t __pyx_v_hi;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_n = __site_cvt_31_0->Target(__site_cvt_31_0, n);
  __pyx_v_lo = __site_cvt_31_0_1->Target(__site_cvt_31_0_1, lo);
  __pyx_v_hi = __site_cvt_31_0_2->Target(__site_cvt_31_0_2, hi);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":47
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":49
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":50
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":51
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":52
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.gehrd(&min_lwork, &max_lwork, fw_prefix, &n, &lo, &hi, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":53
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.gehrd(&min_lwork, &max_lwork, fw_prefix, &n, &lo, &hi, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_53_24->Target(__site_call1_53_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":54
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.gehrd(&min_lwork, &max_lwork, fw_prefix, &n, &lo, &hi, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(gehrd,GEHRD)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_n), (&__pyx_v_lo), (&__pyx_v_hi), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":55
 *         raise ValueError("len(prefix) != 1")
 *     fc.gehrd(&min_lwork, &max_lwork, fw_prefix, &n, &lo, &hi, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":58
 * 
 * 
 * def gesdd(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t compute_uv):             # <<<<<<<<<<<<<<
 *     """gesdd(prefix, m, n, compute_uv) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ gesdd(System::Object^ prefix, System::Object^ m, System::Object^ n, System::Object^ compute_uv) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_compute_uv;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_m = __site_cvt_58_0->Target(__site_cvt_58_0, m);
  __pyx_v_n = __site_cvt_58_0_1->Target(__site_cvt_58_0_1, n);
  __pyx_v_compute_uv = __site_cvt_58_0_2->Target(__site_cvt_58_0_2, compute_uv);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":74
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":76
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":77
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":78
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":79
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.gesdd(&min_lwork, &max_lwork, fw_prefix, &m, &n, &compute_uv, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":80
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.gesdd(&min_lwork, &max_lwork, fw_prefix, &m, &n, &compute_uv, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_80_24->Target(__site_call1_80_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":81
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.gesdd(&min_lwork, &max_lwork, fw_prefix, &m, &n, &compute_uv, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(gesdd,GESDD)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_compute_uv), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":82
 *         raise ValueError("len(prefix) != 1")
 *     fc.gesdd(&min_lwork, &max_lwork, fw_prefix, &m, &n, &compute_uv, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":85
 * 
 * 
 * def gelss(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t nrhs):             # <<<<<<<<<<<<<<
 *     """gelss(prefix, m, n, nrhs) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ gelss(System::Object^ prefix, System::Object^ m, System::Object^ n, System::Object^ nrhs) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_nrhs;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_m = __site_cvt_85_0->Target(__site_cvt_85_0, m);
  __pyx_v_n = __site_cvt_85_0_1->Target(__site_cvt_85_0_1, n);
  __pyx_v_nrhs = __site_cvt_85_0_2->Target(__site_cvt_85_0_2, nrhs);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":101
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":103
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":104
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":105
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":106
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.gelss(&min_lwork, &max_lwork, fw_prefix, &m, &n, &nrhs, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":107
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.gelss(&min_lwork, &max_lwork, fw_prefix, &m, &n, &nrhs, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_107_24->Target(__site_call1_107_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":108
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.gelss(&min_lwork, &max_lwork, fw_prefix, &m, &n, &nrhs, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(gelss,GELSS)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_m), (&__pyx_v_n), (&__pyx_v_nrhs), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":109
 *         raise ValueError("len(prefix) != 1")
 *     fc.gelss(&min_lwork, &max_lwork, fw_prefix, &m, &n, &nrhs, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":112
 * 
 * 
 * def getri(object prefix, fwi_integer_t n):             # <<<<<<<<<<<<<<
 *     """getri(prefix, n) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ getri(System::Object^ prefix, System::Object^ n) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_n;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_n = __site_cvt_112_0->Target(__site_cvt_112_0, n);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":126
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":128
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":129
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":130
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":131
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.getri(&min_lwork, &max_lwork, fw_prefix, &n, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":132
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.getri(&min_lwork, &max_lwork, fw_prefix, &n, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_132_24->Target(__site_call1_132_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":133
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.getri(&min_lwork, &max_lwork, fw_prefix, &n, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(getri,GETRI)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_n), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":134
 *         raise ValueError("len(prefix) != 1")
 *     fc.getri(&min_lwork, &max_lwork, fw_prefix, &n, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":137
 * 
 * 
 * def geev(object prefix, fwi_integer_t n, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1):             # <<<<<<<<<<<<<<
 *     """geev(prefix, n[, compute_vl, compute_vr]) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ geev(System::Object^ prefix, System::Object^ n, [InteropServices::Optional]System::Object^ compute_vl, [InteropServices::Optional]System::Object^ compute_vr) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_compute_vl;
  fwi_integer_t __pyx_v_compute_vr;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_n = __site_cvt_137_0->Target(__site_cvt_137_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(compute_vl) == nullptr) {
    __pyx_v_compute_vl = __site_cvt_137_0_1->Target(__site_cvt_137_0_1, compute_vl);
  } else {
    __pyx_v_compute_vl = ((fwi_integer_t)1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(compute_vr) == nullptr) {
    __pyx_v_compute_vr = __site_cvt_137_0_2->Target(__site_cvt_137_0_2, compute_vr);
  } else {
    __pyx_v_compute_vr = ((fwi_integer_t)1);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":153
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":155
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":156
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":157
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":158
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.geev(&min_lwork, &max_lwork, fw_prefix, &n, &compute_vl, &compute_vr, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":159
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.geev(&min_lwork, &max_lwork, fw_prefix, &n, &compute_vl, &compute_vr, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_159_24->Target(__site_call1_159_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":160
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.geev(&min_lwork, &max_lwork, fw_prefix, &n, &compute_vl, &compute_vr, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(geev,GEEV)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_n), (&__pyx_v_compute_vl), (&__pyx_v_compute_vr), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":161
 *         raise ValueError("len(prefix) != 1")
 *     fc.geev(&min_lwork, &max_lwork, fw_prefix, &n, &compute_vl, &compute_vr, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":164
 * 
 * 
 * def heev(object prefix, fwi_integer_t n, fwi_integer_t lower=0):             # <<<<<<<<<<<<<<
 *     """heev(prefix, n[, lower]) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ heev(System::Object^ prefix, System::Object^ n, [InteropServices::Optional]System::Object^ lower) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_lower;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_n = __site_cvt_164_0->Target(__site_cvt_164_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(lower) == nullptr) {
    __pyx_v_lower = __site_cvt_164_0_1->Target(__site_cvt_164_0_1, lower);
  } else {
    __pyx_v_lower = ((fwi_integer_t)0);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":179
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":181
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":182
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":183
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":184
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.heev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":185
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.heev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_185_24->Target(__site_call1_185_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":186
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.heev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(heev,HEEV)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_n), (&__pyx_v_lower), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":187
 *         raise ValueError("len(prefix) != 1")
 *     fc.heev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":190
 * 
 * 
 * def syev(object prefix, fwi_integer_t n, fwi_integer_t lower=0):             # <<<<<<<<<<<<<<
 *     """syev(prefix, n[, lower]) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ syev(System::Object^ prefix, System::Object^ n, [InteropServices::Optional]System::Object^ lower) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_lower;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_n = __site_cvt_190_0->Target(__site_cvt_190_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(lower) == nullptr) {
    __pyx_v_lower = __site_cvt_190_0_1->Target(__site_cvt_190_0_1, lower);
  } else {
    __pyx_v_lower = ((fwi_integer_t)0);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":205
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":207
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":208
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":209
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":210
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.syev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":211
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.syev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_211_24->Target(__site_call1_211_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":212
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.syev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(syev,SYEV)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_n), (&__pyx_v_lower), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":213
 *         raise ValueError("len(prefix) != 1")
 *     fc.syev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":216
 * 
 * 
 * def gees(object prefix, fwi_integer_t n, fwi_integer_t compute_v=1):             # <<<<<<<<<<<<<<
 *     """gees(prefix, n[, compute_v]) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ gees(System::Object^ prefix, System::Object^ n, [InteropServices::Optional]System::Object^ compute_v) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_compute_v;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_n = __site_cvt_216_0->Target(__site_cvt_216_0, n);
  if (dynamic_cast<System::Reflection::Missing^>(compute_v) == nullptr) {
    __pyx_v_compute_v = __site_cvt_216_0_1->Target(__site_cvt_216_0_1, compute_v);
  } else {
    __pyx_v_compute_v = ((fwi_integer_t)1);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":231
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":233
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":234
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":235
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":236
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.gees(&min_lwork, &max_lwork, fw_prefix, &n, &compute_v, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":237
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.gees(&min_lwork, &max_lwork, fw_prefix, &n, &compute_v, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_237_24->Target(__site_call1_237_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":238
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.gees(&min_lwork, &max_lwork, fw_prefix, &n, &compute_v, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(gees,GEES)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_n), (&__pyx_v_compute_v), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":239
 *         raise ValueError("len(prefix) != 1")
 *     fc.gees(&min_lwork, &max_lwork, fw_prefix, &n, &compute_v, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":242
 * 
 * 
 * def geqrf(object prefix, fwi_integer_t m, fwi_integer_t n):             # <<<<<<<<<<<<<<
 *     """geqrf(prefix, m, n) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ geqrf(System::Object^ prefix, System::Object^ m, System::Object^ n) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_m = __site_cvt_242_0->Target(__site_cvt_242_0, m);
  __pyx_v_n = __site_cvt_242_0_1->Target(__site_cvt_242_0_1, n);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":257
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":259
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":260
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":261
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":262
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.geqrf(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":263
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.geqrf(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_263_24->Target(__site_call1_263_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":264
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.geqrf(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(geqrf,GEQRF)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_m), (&__pyx_v_n), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":265
 *         raise ValueError("len(prefix) != 1")
 *     fc.geqrf(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":268
 * 
 * 
 * def gqr(object prefix, fwi_integer_t m, fwi_integer_t n):             # <<<<<<<<<<<<<<
 *     """gqr(prefix, m, n) -> (min_lwork, max_lwork)
 * 
 */

static System::Object^ gqr(System::Object^ prefix, System::Object^ m, System::Object^ n) {
  System::Object^ __pyx_v_prefix = nullptr;
  fwi_integer_t __pyx_v_m;
  fwi_integer_t __pyx_v_n;
  char *__pyx_v_fw_prefix;
  fwi_integer_t __pyx_v_min_lwork;
  fwi_integer_t __pyx_v_max_lwork;
  System::Object^ __pyx_r = nullptr;
  char __pyx_t_1[2];
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_prefix = prefix;
  __pyx_v_m = __site_cvt_268_0->Target(__site_cvt_268_0, m);
  __pyx_v_n = __site_cvt_268_0_1->Target(__site_cvt_268_0_1, n);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":283
 * 
 *     """
 *     cdef char *fw_prefix = [0, 0]             # <<<<<<<<<<<<<<
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 */
  __pyx_t_1[0] = 0;
  __pyx_t_1[1] = 0;
  __pyx_v_fw_prefix = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":285
 *     cdef char *fw_prefix = [0, 0]
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0             # <<<<<<<<<<<<<<
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 */
  __pyx_v_min_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":286
 *     cdef fwi_integer_t min_lwork, max_lwork
 *     min_lwork = 0
 *     max_lwork = 0             # <<<<<<<<<<<<<<
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 */
  __pyx_v_max_lwork = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":287
 *     min_lwork = 0
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)             # <<<<<<<<<<<<<<
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 */
  (__pyx_v_fw_prefix[0]) = fw_aschar(__pyx_v_prefix);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":288
 *     max_lwork = 0
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("len(prefix) != 1")
 *     fc.gqr(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)
 */
  __pyx_t_2 = ((__pyx_v_fw_prefix[0]) == 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":289
 *     fw_prefix[0] = fw_aschar(prefix)
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")             # <<<<<<<<<<<<<<
 *     fc.gqr(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)
 *     return (min_lwork, max_lwork,)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_289_24->Target(__site_call1_289_24, __pyx_context, __pyx_t_3, ((System::Object^)"len(prefix) != 1"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":290
 *     if fw_prefix[0] == 0:
 *         raise ValueError("len(prefix) != 1")
 *     fc.gqr(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)             # <<<<<<<<<<<<<<
 *     return (min_lwork, max_lwork,)
 * 
 */
  F_FUNC(gqr,GQR)((&__pyx_v_min_lwork), (&__pyx_v_max_lwork), __pyx_v_fw_prefix, (&__pyx_v_m), (&__pyx_v_n), 1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":291
 *         raise ValueError("len(prefix) != 1")
 *     fc.gqr(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)
 *     return (min_lwork, max_lwork,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_min_lwork;
  __pyx_t_3 = __pyx_v_max_lwork;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, __pyx_t_3});
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":295
 * 
 * 
 * cdef char fw_aschar(object s):             # <<<<<<<<<<<<<<
 *     cdef char* buf
 *     try:
 */

static  char fw_aschar(System::Object^ __pyx_v_s) {
  char *__pyx_v_buf;
  char __pyx_r;
  char __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  char *__pyx_t_8;
  System::IntPtr __pyx_t_9;
  System::Object^ __pyx_t_11 = nullptr;
  char *__pyx_t_12;
  int __pyx_t_13;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":297
 * cdef char fw_aschar(object s):
 *     cdef char* buf
 *     try:             # <<<<<<<<<<<<<<
 *         return <char>s # int
 *     except TypeError:
 */
  try {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":298
 *     cdef char* buf
 *     try:
 *         return <char>s # int             # <<<<<<<<<<<<<<
 *     except TypeError:
 *         pass
 */
    __pyx_t_3 = __site_cvt_char_298_28->Target(__site_cvt_char_298_28, __pyx_v_s);
    __pyx_r = ((char)__pyx_t_3);
    goto __pyx_L0;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":299
 *     try:
 *         return <char>s # int
 *     except TypeError:             # <<<<<<<<<<<<<<
 *         pass
 *     try:
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    System::Object^ __pyx_lt_5;
    __pyx_lt_5 = PythonOps::CheckException(__pyx_context, __pyx_lt_2, __pyx_t_4);
    __pyx_t_4 = nullptr;
    if (__pyx_lt_5 != nullptr) {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.linalg.calc_lwork.fw_aschar");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);
    }
    else {
      // XXX we should set traceback here
      throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_1);
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":301
 *     except TypeError:
 *         pass
 *     try:             # <<<<<<<<<<<<<<
 *         buf = <char*>s # bytes
 *     except TypeError:
 */
  try {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":302
 *         pass
 *     try:
 *         buf = <char*>s # bytes             # <<<<<<<<<<<<<<
 *     except TypeError:
 *         s = s.encode('ASCII')
 */
    __pyx_t_9 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_s));
    __pyx_t_8 = static_cast<char *>(__pyx_t_9.ToPointer());
    __pyx_v_buf = ((char *)__pyx_t_8);
    InteropServices::Marshal::FreeHGlobal(__pyx_t_9);
  } catch (System::Exception^ __pyx_lt_6) {
    System::Object^ __pyx_lt_7 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_6);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":303
 *     try:
 *         buf = <char*>s # bytes
 *     except TypeError:             # <<<<<<<<<<<<<<
 *         s = s.encode('ASCII')
 *         buf = <char*>s # unicode
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    System::Object^ __pyx_lt_10;
    __pyx_lt_10 = PythonOps::CheckException(__pyx_context, __pyx_lt_7, __pyx_t_4);
    __pyx_t_4 = nullptr;
    if (__pyx_lt_10 != nullptr) {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.linalg.calc_lwork.fw_aschar");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_6);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":304
 *         buf = <char*>s # bytes
 *     except TypeError:
 *         s = s.encode('ASCII')             # <<<<<<<<<<<<<<
 *         buf = <char*>s # unicode
 *     if buf[0] == 0:
 */
      __pyx_t_4 = __site_get_encode_304_13->Target(__site_get_encode_304_13, __pyx_v_s, __pyx_context);
      __pyx_t_11 = __site_call1_304_20->Target(__site_call1_304_20, __pyx_context, __pyx_t_4, ((System::Object^)"ASCII"));
      __pyx_t_4 = nullptr;
      __pyx_v_s = __pyx_t_11;
      __pyx_t_11 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":305
 *     except TypeError:
 *         s = s.encode('ASCII')
 *         buf = <char*>s # unicode             # <<<<<<<<<<<<<<
 *     if buf[0] == 0:
 *         return 0
 */
      __pyx_t_9 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_s));
      __pyx_t_12 = static_cast<char *>(__pyx_t_9.ToPointer());
      __pyx_v_buf = ((char *)__pyx_t_12);
      InteropServices::Marshal::FreeHGlobal(__pyx_t_9);
    }
    else {
      // XXX we should set traceback here
      throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_6);
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":306
 *         s = s.encode('ASCII')
 *         buf = <char*>s # unicode
 *     if buf[0] == 0:             # <<<<<<<<<<<<<<
 *         return 0
 *     elif buf[1] != 0:
 */
  __pyx_t_13 = ((__pyx_v_buf[0]) == 0);
  if (__pyx_t_13) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":307
 *         buf = <char*>s # unicode
 *     if buf[0] == 0:
 *         return 0             # <<<<<<<<<<<<<<
 *     elif buf[1] != 0:
 *         return 0
 */
    __pyx_r = 0;
    goto __pyx_L0;
    goto __pyx_L3;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":308
 *     if buf[0] == 0:
 *         return 0
 *     elif buf[1] != 0:             # <<<<<<<<<<<<<<
 *         return 0
 *     else:
 */
  __pyx_t_13 = ((__pyx_v_buf[1]) != 0);
  if (__pyx_t_13) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":309
 *         return 0
 *     elif buf[1] != 0:
 *         return 0             # <<<<<<<<<<<<<<
 *     else:
 *         return buf[0]
 */
    __pyx_r = 0;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":311
 *         return 0
 *     else:
 *         return buf[0]             # <<<<<<<<<<<<<<
 * 
 * # Fwrap configuration:
 */
    __pyx_r = (__pyx_v_buf[0]);
    goto __pyx_L0;
  }
  __pyx_L3:;

  __pyx_r = 0;
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
  __site_cvt_31_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_31_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_31_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_53_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_58_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_58_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_58_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_80_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_85_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_85_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_85_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_107_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_112_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_132_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_137_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_137_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_137_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_159_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_164_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_164_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_185_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_190_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_190_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_211_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_216_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_216_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_237_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_242_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_242_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_263_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_268_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_268_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_289_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_char_298_28 = CallSite< System::Func< CallSite^, System::Object^, char >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, char::typeid, ConversionResultKind::ExplicitCast));
  __site_get_encode_304_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "encode", false));
  __site_call1_304_20 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":27
 * cimport calc_lwork_fc as fc
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * cdef extern from "string.h":
 *     void *memcpy(void *dest, void *src, size_t n)
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":30
 * cdef extern from "string.h":
 *     void *memcpy(void *dest, void *src, size_t n)
 * __all__ = ['gehrd', 'gesdd', 'gelss', 'getri', 'geev', 'heev', 'syev', 'gees', 'geqrf', 'gqr']             # <<<<<<<<<<<<<<
 * def gehrd(object prefix, fwi_integer_t n, fwi_integer_t lo, fwi_integer_t hi):
 *     """gehrd(prefix, n, lo, hi) -> (min_lwork, max_lwork)
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"gehrd"), ((System::Object^)"gesdd"), ((System::Object^)"gelss"), ((System::Object^)"getri"), ((System::Object^)"geev"), ((System::Object^)"heev"), ((System::Object^)"syev"), ((System::Object^)"gees"), ((System::Object^)"geqrf"), ((System::Object^)"gqr")});
  PythonOps::SetGlobal(__pyx_context, "__all__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\linalg\calc_lwork.pyx":1
 * #cython: ccomplex=True             # <<<<<<<<<<<<<<
 * 
 * """The calc_lwork module was generated with Fwrap v0.2.0dev_9849d10.
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
[assembly: PythonModule("scipy__linalg__calc_lwork", module_calc_lwork::typeid)];
};
